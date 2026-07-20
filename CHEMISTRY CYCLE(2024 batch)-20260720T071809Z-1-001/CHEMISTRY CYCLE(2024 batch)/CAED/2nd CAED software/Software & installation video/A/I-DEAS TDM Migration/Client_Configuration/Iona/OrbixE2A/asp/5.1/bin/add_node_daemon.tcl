#
# Copyright (c) 2002 IONA Technologies PLC.
#          All Rights Reserved
#

proc nd_error { msg {error_msg ""} {exit_value 1} } {
    puts stderr $msg
    if {$error_msg != ""} {
	puts stderr $error_msg
    }
    if {$exit_value > 0} {
	exit $exit_value
    }
}
    
proc find_last_subscope {scope} {
    set command "scope list $scope"
    if {[catch {eval $command} scope_list]} {
	# scope doesn't exist
	puts "error: $scope_list"
	nd_error "Scope $scope doesn't exist.\n If $ndvars(hostname) is not the correct name for the host,\nplease include the -host argument in the command line.\nIf $ndvars(hostname) is correct,\n the node daemon is not properly configured." "" 1
    } else {
	return [llength $scope_list]
    }
}
    
proc create_scope {scope} {
    set command "scope list $scope"
    if {[catch {eval $command} msg]} {
	# scope doesn't exist - create it
	set command "scope create $scope"
	if {[catch {eval $command} msg]} {
	    nd_error "Unable to create a scope for name $scope" $msg 1
	}
    } else {
	    nd_error "Scope for name $scope already exists:" $msg 1
    }
}

proc set_local_hostname {} {
    global ndvars

    if {[info exists ndvars(-host)]} {
	set host $ndvars(-host)
    } else {
	set host [info hostname]
    }
    # use simple hostname, not fully-specified hostname
    regsub "(\[A-Za-z0-9\]+)\[\.A-Za-z0-9\]*" $host "\\1" host
    set ndvars(hostname) $host
}

proc get_config_value {scope varname type} {
    if {$scope != ""} {
        set command "variable show -scope $scope $varname"
    } else {
        set command "variable show $varname"
    }
    if {[catch { eval $command } msg]} {
	error "Error getting value of config variable $varname"
    }
    if {$type == "list"} {
	# strip off "variable = "
	set result [lrange $msg 2 end]
	return [split $result ,]
    } else {
	# strip off all except final item (the value)
	set eq_index [string first "\"" $msg]
	set result [string range $msg $eq_index end]
	return [string trim $result \"]
    }
}

proc set_config_value {scope varname value type} {
    if {$scope != ""} {
	set command "variable create -scope $scope -type $type \
		-value $value $varname"
    } else {
	set command "variable create -type $type \
		-value $value $varname"
    }

    if {[catch { eval $command } msg]} {
	nd_error "Error setting $varname to $value in config" $msg
    }
}

proc create_subscope {base num} {
    global ndvars
    global daemons

    set newscope [subst ${base}.${num}]
    create_scope $newscope
    set_config_value $newscope plugins:node_daemon:iiop:host \
	    $ndvars(hostname) string
    set_config_value $newscope plugins:node_daemon:iiop:port \
	    [expr $ndvars(-port) + $num] long
    set_config_value $newscope plugins:pss_db:envs:it_node_daemon:db_home \
	    $ndvars(db_dir)/node_daemon_$num string
    set_config_value $newscope plugins:local_log_stream:filename \
	    $ndvars(log_dir)/node_daemon_$num.log string
    set_config_value $newscope plugins:node_daemon:name \
	    $newscope string
    set daemons([array size daemons]) $newscope
}

proc make_dbdir {base leaf} {
    set directory [file nativename [file join $base $leaf]]
    if {![file exists $directory]} {
	if {[catch { file mkdir $directory } msg]} {
            nd_error "Unable to create $directory" $msg 1
        }
    }
}

proc prepare_daemon {daemon} {
    global ndvars

    set command "exec \"$ndvars(service)\" \
	    prepare \
	    -ORBdomain_name $ndvars(domain_name) \
	    -ORBconfig_domains_dir $ndvars(domain_dir) \
	    -ORBname $daemon 2>@stdout"
    # If on NT need to substitute backslash with double-backslash
    regsub -all "\\\\" $command "\\\\\\\\" command

    if {[catch {eval $command} msg]} {
	nd_error "Unable to prepare $daemon" $msg 1
    } 

    set ior [lrange [split $msg] 2 end]
    return $ior
}

proc configure_daemons {} {
    global ndvars
    global daemons

    set base "iona_services.node_daemon.$ndvars(hostname)"
    set existing [find_last_subscope $base]
    if {[info exists ndvars(-out)]} {
	set ior_out $ndvars(-out)
    } else {
	set ior_out [file nativename [file join [pwd] node_daemons.ior]]
    }
    if { [catch {open $ior_out w } outfile] } {
	nd_error "Error opening ior file: Unable to save IORs" $outfile 1
    }

    for {set i 0} {$i < $ndvars(-number)} {incr i} {
	set next [expr $existing + $i + 1]
	make_dbdir $ndvars(db_dir) node_daemon_$next
	create_subscope $base $next
	set ior [prepare_daemon $daemons($i)]
	puts $outfile "node_daemon_$next = $ior"
    }
    close $outfile
}

proc make_writable  {filename} {
    global tcl_platform

    if {$tcl_platform(platform) == "windows"} {
       file attributes $filename -readonly 0
    } else {
        file attributes $filename -permissions 0666
    }
}

proc make_read_only {filename} {
    global tcl_platform

    if {$tcl_platform(platform) == "windows"} {
        file attributes $filename -readonly 1
    } else {
        file attributes $filename -permissions 0444
    }
};

proc get_echo { text } {
    global tcl_platform;
    if {$tcl_platform(platform) == "windows"} {
	return "echo $text";
    } else {
	return "echo \"$text\"";
    }
}

proc escape_spaces { str } {
    if {[string first " " $str] != -1} {
        return "\"$str\""
    } else {
       return $str
    }
}


proc get_temp_filename { name } {
    global tcl_platform
    global env
    if {$tcl_platform(platform) == "windows"} {
        set temp_dir $env(TMP);
        return [escape_spaces \
		[file nativename [file join $temp_dir $name]]]
    } elseif {$tcl_platform(platform) == "unix"} {
	return [file nativename [file join / tmp $name]]
    }
}

proc add_new_daemons_start {outfile} {
    global ndvars
    global daemons

    # add our additional node_daemon run commands to outfile
    #
    set num_items [array size daemons]
    for {set i 0} {$i < $num_items} {incr i} {
	puts $outfile " "
	set out_str [get_echo \
		"Starting $daemons($i)"]
	puts $outfile $out_str
	set out_str "\"$ndvars(service)\" \
		-background run \
		-ORBdomain_name $ndvars(domain_name) \
		-ORBconfig_domains_dir $ndvars(domain_dir) \
		-ORBname $daemons($i)"
	puts $outfile $out_str
	set out_str " "
	puts $outfile $out_str
	set out_str "\"$ndvars(itadmin)\" \
		-ORBdomain_name $ndvars(domain_name) \
		-ORBconfig_domains_dir $ndvars(domain_dir) \
		-ORBname $daemons($i) \
		node_daemon heartbeat_servers $daemons($i)"
	puts $outfile $out_str
    }
}

proc get_script_name {name} {
    global tcl_platform
    if {($tcl_platform(platform) == "windows")} {
	set script [subst ${name}.bat]
    } else {
	set script $name
    }

    return $script
}


proc modify_start_script {} {
    global ndvars
    global daemons
    global tcl_platform

    set start_scriptname [get_script_name start_$ndvars(domain_name)_services]
    set start_script [file nativename \
	    [file join $ndvars(-script_dir) $start_scriptname]]

    if {[file exists $start_script]} {
	make_writable $start_script
	if { [catch {open $start_script r } infile] } {
	    puts "Unable to add service to start script: $start_script $infile"
	    return
	}

	set tmp_file [get_temp_filename [file tail $start_script]].out
	if {[file exists $tmp_file]} {
	    file delete -force $tmp_file
	}
	if { [catch {open $tmp_file w } outfile] } {
	    puts "Opening tmp_file: Unable to add server to start script: $tmp_file: $outfile"
	    close $infile
	    return
	}

	# copy infile lines to outfile through node_daemon heartbeat
	#

	while {![eof $infile]} {
	    set in_str [gets $infile]
	    puts $outfile $in_str
	    flush $outfile
	    if {[regexp {^.+ heartbeat_servers} $in_str match]} {
		add_new_daemons_start $outfile
		break
	    }
	}
	
	# copy rest of infile to outfile
	#
	while {![eof $infile]} {
	    set in_str [gets $infile]
	    puts $outfile $in_str
	}
	if {[catch {close $infile} msg]} {
	    puts "error closing $start_script: $msg"
	}
	if {[catch {close $outfile} msg]} {
	    puts "error closing $tmp_file: $msg"
	}
	file copy -force "$tmp_file" "$start_script"
	file delete "$tmp_file"
	make_read_only $start_script
	if {$tcl_platform(platform) == "unix"} {
	    file attributes $start_script -permissions 0555
	}
    }
}

proc add_new_daemons_stop {outfile} {
    global ndvars
    global daemons

    # add our additional node_daemon commands to outfile
    #
    set num_items [array size daemons]

    # stop 'em in reverse order
    for {set i $num_items} {$i > 0} {incr i -1} {
	set j [expr $i - 1]
	set out_str [get_echo \
		"Stopping $daemons($j)"]
	puts $outfile $out_str
	set out_str "\"$ndvars(itadmin)\" \
		-ORBdomain_name $ndvars(domain_name) \
		-ORBconfig_domains_dir $ndvars(domain_dir) \
		-ORBname $daemons($j) \
		node_daemon stop $daemons($j)"
	puts $outfile $out_str
	puts $outfile " "
    }
    
}

proc modify_stop_script {} {
    global ndvars
    global daemons
    global tcl_platform

    set stop_scriptname  [get_script_name stop_$ndvars(domain_name)_services]
    set stop_script [file nativename \
	    [file join $ndvars(-script_dir) $stop_scriptname]]

    if {[file exists $stop_script]} {
	make_writable $stop_script
	if { [catch {open $stop_script r } infile] } {
	    puts "Unable to add service to stop script: $stop_script $infile"
	    return
	}

	set tmp_file [get_temp_filename [file tail $stop_script]].out
	if {[file exists $tmp_file]} {
	    file delete -force $tmp_file
	}
	if { [catch {open $tmp_file w } outfile] } {
	    puts "Unable to add server to stop script: $tmp_file $outfile"
	    close $infile
	    return
	}

	# copy infile lines to outfile to node_daemon stop notice
	#
	while {![eof $infile]} {
	    set in_str [gets $infile]
	    if {[regexp {^.*Stopping iona_services.node_daemon} \
		    $in_str match]} {
		add_new_daemons_stop $outfile
		puts $outfile $in_str
		break
	    }
	    puts $outfile $in_str
	}

	# copy rest of infile to outfile
	#
	while {![eof $infile]} {
	    set in_str [gets $infile]
	    puts $outfile $in_str
	}
	if {[catch {close $infile} msg]} {
	    puts "error closing $stop_script: $msg"
	}
	if {[catch {close $outfile} msg]} {
	    puts "error closing $tmp_file: $msg"
	}

	file copy -force "$tmp_file" "$stop_script"
	file delete "$tmp_file"
	make_read_only $stop_script
	if {$tcl_platform(platform) == "unix"} {
	    file attributes $stop_script -permissions 0555
	}
    }
}

proc set_domain_dir {} {
    global ndvars

    set scriptfile [file nativename \
	[file join $ndvars(-script_dir) \
	[get_script_name start_$ndvars(domain_name)_services]]]

    if { [catch {open $scriptfile r } infile] } {
	nd_error "Unable to read start script: $scriptfile" $infile 1
	return
    }
    
    # Read until we find a string that contains -ORBconfig_domains_dir
    #
    set in_str [gets $infile]
    set src [list]
    while {![eof $infile]} {
	if {[regexp {^.+-ORBconfig_domains_dir (.+) -.+} \
		$in_str match domain_dir]} {
	    set ndvars(domain_dir) $domain_dir
	    break
	}
	set in_str [gets $infile]
    }
    close $infile
}

proc set_domain_name {} {
    global ndvars

    if {[catch {get_config_value iona_services.locator plugins:locator:location_domain_name string} location_name]} {
	nd_error "Error obtaining domain name"
    }
    set domain_name [lindex [split $location_name .] 0]
    set ndvars(domain_name) $domain_name
}

proc set_var_dirs {} {
    global ndvars

    if {[catch {get_config_value iona_services.node_daemon.$ndvars(hostname) plugins:local_log_stream:filename string} log_name]} {
	nd_error "Error obtaining log stream location"
    } else {
	set ndvars(log_dir) [file dirname $log_name]
    }
    if {[catch {get_config_value iona_services.node_daemon.$ndvars(hostname) plugins:pss_db:envs:it_node_daemon:db_home string} db_name]} {
	nd_error "Error obtaining database location"
    } else {
	set ndvars(db_dir) [file dirname $db_name]
    }
}

proc set_server_name {} {
    global ndvars

    set service [file nativename \
	    [file join $ndvars(bin_dir) itnode_daemon]]
    set ndvars(service) $service
}

proc parse_args {arglist expected } {
    global ndvars

    set arglist_length [llength $arglist]
    foreach {target required} $expected {
	set cmd_switch [lsearch -exact $arglist $target]
	# required arg
	if {$cmd_switch == -1} {
	    if {$required == 1} {
		nd_error "$target command switch is missing" "" 1
	    } else {
		continue
	    }
	} else {
	    set val [expr {$cmd_switch + 1}]
	    if {$val < $arglist_length} {
		set ndvars($target) [lindex $arglist $val]
	    } else {
		nd_error "Value for $target is missing" "" 1
	    }
	}
    }
}

proc usage {} {
    puts "Usage: itadmin add_node_daemon.tcl\n\t -number <number of daemons to add>\n\t -port <base port number for node daemons>\n\t -script_dir <directory containing domain start script>\n\t \[-host <cluster name of host if different from local name>]\n\t \[-out <file for IORs>]"
}

proc init {argc argv} {
    global ndvars
    global argv0

    if {$argc < 4} {
	usage
	exit 1
    }
    
    parse_args $argv "-number 1 -port 1 -script_dir 1 -host 0 -out 0"

    set cwd [pwd]
    set bin_dir [file dirname $argv0]
    cd $bin_dir
    set ndvars(bin_dir) [file nativename [pwd]]
    cd $cwd
    set ndvars(itadmin) [file nativename [file join $ndvars(bin_dir) itadmin]]

    set_local_hostname
    set_domain_name
    set_domain_dir
    set_var_dirs
    set_server_name

}

init $argc $argv
configure_daemons
modify_start_script
modify_stop_script

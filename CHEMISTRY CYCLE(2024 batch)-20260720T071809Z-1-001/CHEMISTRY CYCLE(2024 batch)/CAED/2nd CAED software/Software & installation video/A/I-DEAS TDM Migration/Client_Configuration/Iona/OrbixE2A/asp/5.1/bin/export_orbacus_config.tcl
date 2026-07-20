############################################################################
# Copyright (c) 2002 IONA Technologies PLC. All Rights Reserved. 
#
# This script generates ORBacus config file entries for ASP services
# that can be used with ORBacus.  This script can be run at any time on
# a host with a configured ASP installation.  The configuration
# information is written to stdout.
# 
# This script file has only one available option, 'ORBacus3'.
# Specifying ORBacus3 as a Tcl argument causes this script to generate
# config file entries compatible with ORBacus 3.3.4 or greater.
#

puts "###################################################################";
puts "#"
puts "# ORBacus config data for ASP runtime.";
puts -nonewline "# Generated "; puts [clock format [clock seconds]];
puts "#";
puts "# Add the following initial reference entries to your ORBacus";
puts "# configuration file to allow ORBacus clients to access the ASP";
puts "# services.";
puts "#"
puts "";

set OB3_prefix "ooc.service";
set OB4_prefix "ooc.orb.service";
set prefix $OB4_prefix;
set arg_search [ lsearch -glob $argv *ORBacus3* ];
if { $arg_search != -1 }  {
    global OB3_prefix
    set prefix $OB3_prefix
}

proc get_ior_string { orig_line } {

    set line [ string trim $orig_line ];
    #
    # Find the location where the IOR string starts 
    #
    set i [ string last IOR $line ];

    #
    # It should be there, but we'll ignore it if there is a problem and
    # continue.
    #
    if { $i > 0 } {
	return [ string range $line $i end-1 ]
    } else {
	return ""
    }
}

proc create_config_file_entry { ref_name value } {
    global prefix
    puts "$prefix.$ref_name=$value";
}

if { [ catch { \
    set naming [  variable show initial_references:NameService:reference  ];
    } ] } {
    set naming "";
}

if { [ catch { \
    set notify [ variable show \
    	initial_references:NotificationService:reference ];
    } ] } {
    set notify "";
}

if { [ catch { \
    set ifr [ variable show \
    	initial_references:InterfaceRepository:reference ];
    } ] } {
    set ifr "";
}

if { [ catch { \
    set notify_logging [ variable show \
	initial_references:NotifyLoggingService:reference ];
    } ] } {
    set notify_logging "";
}

if { [ catch { \
    set trader [ variable show \
	initial_references:TradingService:reference ];
    } ] } {
    set trader "";
}

if { [ catch { \
    set foo [ variable show initial_references:foo:reference ] \
    } ] } {
    set foo "";
}

if { $naming != "" } {
    set ior [ get_ior_string $naming ];
    if { $ior != "" } {
	create_config_file_entry NameService $ior
    }
}
if { $notify != "" } {
    set ior [ get_ior_string $notify ];
    if { $ior != "" } {
	create_config_file_entry NotificationService $ior
    }
}
if { $ifr != "" } {
    set ior [ get_ior_string $ifr ];
    if { $ior != "" } {
	create_config_file_entry InterfaceRepository $ior
    }
}
if { $notify_logging != "" } {
    set ior [ get_ior_string $notify_logging ];
    if { $ior != "" } {
	create_config_file_entry NotifyLoggingService $ior
    }
}
if { $trader != "" } {
    set ior [ get_ior_string $trader ];
    if { $ior != "" } {
	create_config_file_entry TradingService $ior
    }
}

return 0;

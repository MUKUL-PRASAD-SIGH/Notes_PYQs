# ---------------------------------------------------------------
# Subroutines
# ---------------------------------------------------------------
proc doCmd {cmd} {
   printCmd "$cmd"
   set fail [catch {eval $cmd} result]
   if {$fail} {
      puts stderr "Problem in \"$cmd\":\n $result"
      flush stderr
      exit 1
   }
}

proc printCmd {cmd} {
   puts "$cmd"
}

proc createProcess {serverName serverPath args process hostName serverStartDir serverDescription} {
   
   # Extra hyphen is needed if args start with a hyphen
   set extraHyphen "";
   if {[regexp {^-} $args]} {
      set extraHyphen "-";
   }   

   doCmd "process create \
          -node_daemon iona_services.node_daemon.$hostName \
          -pathname \{$serverPath\} \
          -startupmode on_demand \
          -directory \{$serverStartDir\} \
          -args \"[set extraHyphen][set args] -n $serverName\" \
          -description \"$serverDescription\" \
          $process"
}

proc createOrbname {process orbname} {
   doCmd "orbname create -process $process $orbname"
}

proc createTransientPOA {FQPN newChild} {
   set f [open "| itadmin poa list -children $FQPN" r]
   set children [read $f]
   close $f
   
   # This POA may already exist because it could be the
   # parent of other persistent POAs used for other on-demand
   # servers. Because of this, we will only attempt to create
   # it if it does not already exist. For this same reason,
   # this POA should not necessarily be deleted if other
   # entries particular to this on-demand server are deleted. 
   if {! [regexp "$FQPN/$newChild" $children]} {
      doCmd "poa create -allowdynamic -transient $FQPN/$newChild"
   }
}

proc createPersistentPOA {orbname FQPN} {
   doCmd "poa create -orbname $orbname $FQPN"
}


# ---------------------------------------------------------------
# Main
# ---------------------------------------------------------------
# Get local host, convert to lower case, and subtract domain name
set hostName [string tolower [info hostname]]
regsub "(\[a-z0-9\-\]+)\[\.a-z0-9\-\]*" $hostName "\\1" hostName
if {![info exists hostName]} {
   puts "Cannot determine hostname"
   exit 1
}

if {![info exists env(SDRC_INSTL)]} {
   puts "SDRC_INSTL environment variable must be set"
   exit 1
}

set releaseVar "ideas10"
set company "eds"
set processRoot $company.$releaseVar.$hostName
set orbRoot $company.$releaseVar.server.$hostName
set poaRoot $company/$releaseVar/$hostName

#
# Prompt for info necessary to create process entry
#
set continue 1
while {$continue != 0} {
   fconfigure stdout -buffering none
   puts ""
   puts -nonewline stdout "Name of new server process: "
   gets stdin serverName
   puts -nonewline stdout "Server startup script (full path): "
   gets stdin serverPath
   puts -nonewline stdout "Server arguments (do not include \"-n\" option): "
   gets stdin serverArgs
   puts -nonewline stdout "Directory that application should start in: "
   gets stdin serverStartDir
   puts -nonewline stdout "Description of process (1 liner): "
   gets stdin serverDescription

   puts ""
   puts " ----------------------"
   puts " - Server Information -"
   puts " ----------------------"
   puts "Server name = $serverName"
   puts "Server startup script = $serverPath"
   puts "Server arguments = $serverArgs"
   puts "Start directory = $serverStartDir"
   puts "Process description = \"$serverDescription\""

   puts "If the above information is okay, hit Enter to proceed creating process,"
   puts "OR enter \"r\" to re-enter data."
   gets stdin answer
   set answer [string tolower $answer]
   if {$answer != "r"} {
      set continue 0
   } 
   puts ""
}

#
# Create process entry
#
puts ""
puts "Creating process entry..."
createProcess $serverName $serverPath $serverArgs \
   $processRoot.[set serverName]_proc $hostName \
   $serverStartDir $serverDescription

#
# Create orbname for process entry.
#
puts ""
puts "Creating orbname..."
createOrbname $processRoot.[set serverName]_proc \
   $orbRoot.[set serverName]_orb

#
# Create the POA for the orbname
#
puts ""
puts "Creating POA..."
createTransientPOA $company/$releaseVar $hostName
createPersistentPOA \
   $orbRoot.[set serverName]_orb \
   $poaRoot/[set serverName]_poa

puts ""
puts "Process creation is complete."
puts ""

#
# Create scripts to verify and remove creation or process entries
#
set scriptExt ""
if { $tcl_platform(platform) == "windows" } {
   set scriptExt ".bat"
}
set verifyFileName "verify_[set serverName][set scriptExt]"
if {[catch {
      set verifyFile [open $verifyFileName "w"]
   } err]} {
      puts stderr $err
      exit 1
}
puts $verifyFile "itadmin process show $processRoot.[set serverName]_proc"
puts $verifyFile "itadmin orbname show $orbRoot.[set serverName]_orb"
puts $verifyFile "itadmin poa show $poaRoot/[set serverName]_poa"
close $verifyFile
file attributes $verifyFileName -permissions 0755
puts "To verify the entries created for this process, run $verifyFileName"

set removeFileName "remove_[set serverName][set scriptExt]"
if {[catch {
      set removeFile [open $removeFileName "w"]
   } err]} {
      puts stderr $err
      exit 1
}
puts $removeFile "itadmin poa remove $poaRoot/[set serverName]_poa"
puts $removeFile "itadmin orbname remove $orbRoot.[set serverName]_orb"
puts $removeFile "itadmin process remove $processRoot.[set serverName]_proc"
close $removeFile
file attributes $removeFileName -permissions 0755
puts "To remove the entries created for this process, run $removeFileName"

puts ""
exit 0

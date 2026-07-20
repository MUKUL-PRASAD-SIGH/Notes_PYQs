#
# The purpose of this script is to register the Orbix
# configuration, IMR, and naming service entries necessary to
# run I-DEAS on a particular machine.
#
# This script must be run through the TCL interpreter in itadmin:
# itadmin <path_to_script>/setHostIMREntries.tcl
#
# This script can be run standalone, but is primarily run by the
# wrapper script that creates the Orbix configuration domain. 
#

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

proc createNamingContext {context} {
   doCmd "ns newnc $context"
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

set releaseVar "ideas10"
set company "eds"

#
# Create naming service names.
#
puts ""
puts "Creating naming service context..."
createNamingContext $company/$releaseVar/$hostName

puts ""
exit 0

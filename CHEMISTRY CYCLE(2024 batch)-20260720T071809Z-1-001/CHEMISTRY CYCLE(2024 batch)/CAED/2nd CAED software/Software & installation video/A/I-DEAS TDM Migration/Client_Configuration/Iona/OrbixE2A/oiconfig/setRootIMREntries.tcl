#
# The purpose of this script is to register the Orbix
# configuration, IMR, and naming service entries necessary to
# run I-DEAS. It lays the foundation for for the script that
# is run to create machine-specific entries (setHostIMREntries.tcl).
#
# This script must be run through the TCL interpreter in itadmin:
# itadmin <path_to_script>/setRootIMREntries.tcl
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

proc createTransientPOA {FQPN} {
   doCmd "poa create -allowdynamic -transient $FQPN"
}

proc createNamingContext {context} {
   doCmd "ns newnc $context"
}

proc createConfigScope {scope} {
   doCmd "scope create $scope"
}

proc createConfigVar {scope type value varName} {
   doCmd "variable create -scope $scope -type $type -value $value $varName"
}

# ---------------------------------------------------------------
# Main
# ---------------------------------------------------------------
set releaseVar "ideas10"
set company "eds"

#
# Create the config scopes
#
puts ""
puts "------------------------"
puts "Creating config scope..."
puts "------------------------"
puts ""
createConfigScope $company
createConfigScope $company.$releaseVar
createConfigScope $company.$releaseVar.server

#
# Create the config variables
#
puts ""
puts "----------------------------"
puts "Creating config variables..."
puts "----------------------------"
puts ""
createConfigVar $company.$releaseVar string \"it_lease\" plugins:lease:shlib_name
createConfigVar $company.$releaseVar list local_log_stream,lease,iiop_profile,giop,iiop orb_plugins
createConfigVar $company.$releaseVar list POA_Coloc,LEASE+GIOP+IIOP,GIOP+IIOP binding:client_binding_list
createConfigVar $company.$releaseVar list LEASE+OI_ServerInterceptor,LEASE,OI_ServerInterceptor binding:server_binding_list
createConfigVar $company.$releaseVar bool true plugins:lease:allow_advertisement_overwrites
createConfigVar $company.$releaseVar.server long 10000 plugins:lease:lease_ping_time
createConfigVar $company.$releaseVar.server long 20000 plugins:lease:lease_reap_time
createConfigVar $company.$releaseVar.server string \"server\" plugins:lease:lease_name_to_advertise
createConfigVar $company.$releaseVar.server list local_log_stream,lease,iiop_profile,giop,iiop,portable_interceptor orb_plugins

#
# Create the POAs.
#
puts ""
puts "----------------"
puts "Creating POAs..."
puts "----------------"
puts ""
createTransientPOA $company
createTransientPOA $company/$releaseVar

#
# Create the naming contexts
#
puts ""
puts "---------------------------"
puts "Creating naming contexts..."
puts "---------------------------"
puts ""
createNamingContext $company
createNamingContext $company/$releaseVar

exit 0
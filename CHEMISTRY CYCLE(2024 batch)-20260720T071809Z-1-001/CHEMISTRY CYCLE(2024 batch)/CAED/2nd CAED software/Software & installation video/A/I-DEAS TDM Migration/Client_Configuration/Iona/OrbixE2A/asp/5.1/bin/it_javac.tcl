# Copyright 1995-2002 IONA Technologies, PLC.  All Rights Reserved.


#-------------------------------------------------------------------------------------------
#
# Procedures
#
#-------------------------------------------------------------------------------------------

proc print_version argument {

  puts "\nOrbix for Java - Version 5.1"
  puts   "=================================\n"
}

proc print_help argument {

  print_version ""
  puts "it_javac is the Orbix wrapper for the java compiler.\n"
  puts "Usage: Use it_javac exactly like the javac command.\n"
  puts "       it_javac <options> <source files>"

  puts "\nNote the following:\n"

  puts "* it_javac makes it easier to use Orbix for Java with your java"
  puts "  installation. it_javac passes the environment settings and properties"
  puts "  required for Orbix directly to your java compiler.\n"

  puts "* it_javac requires that the JAVA_HOME environment variable is set so that"
  puts "  it can identify the java compiler to be used.\n"

  puts "* it_javac uses the IT_PRODUCT_DIR environment setting, when defined to"
  puts "  specify the Orbix installation to be used. If IT_PRODUCT_DIR is not"
  puts "  set then it_javac uses the default setting.\n"

  puts "* To see the exact command that it_javac is running, pass the -it_javac_verbose"
  puts "  switch to it_javac\n"

  puts "* it_javac does not set any environment variables or modify any properties"
  puts "  files.\n"

  puts "* it_javac displays the complete command that is passed to the javac compiler"
  puts "  so that you can see exactly what it_javac is doing.\n\n"
  puts "------------------------------------------------------------------------------\n"
}

#-------------------------------------------------------------------------------------------
#
# This is the it_javac script read help text above for description of what it does.
#
#-------------------------------------------------------------------------------------------

global env

if {[lsearch [array names env] JAVA_HOME] != -1} {

} else {
  print_help "no_args"
  puts "\n\n*** You must set JAVA_HOME in your environment to use it_javac ***"
  exit 1
}

set javac  [file nativename [file join $env(JAVA_HOME) bin javac]]

# If no arguments then just invoke javac with no args
#
if {[llength $argv] == 0} {
  print_help "no_args"
  puts "\nNo arguments detected - passing directly to java compiler ...\n"
  puts "\n$javac\n"
  set cmd_return [ catch { eval exec [list $javac] >&@ stdout } cmd_error ]
  exit $cmd_return
}


if {[lsearch [array names env] CLASSPATH] != -1} {
  set classpath $env(CLASSPATH)
}  else {
  set classpath "."
}

set setclasspath 0
set javac_args ""
set verbose 0

foreach argument $argv {
   if {$argument=="-it_javac_verbose"} {
      set verbose 1
   } else {
      if {$setclasspath!=1} {
         if {$argument == "-classpath"} {
            set setclasspath 1
         } else {
           lappend javac_args $argument
         }
      } else {
         set classpath $argument
         set setclasspath 0
      }
   }
}

if {$tcl_platform(platform) == "windows"} {
   set SEP ";"
   set DEFAULT_PRODUCT_DIR "C:\Program Files\IONA"
} else {
   set SEP ":"
   set DEFAULT_PRODUCT_DIR "/opt/iona"
}

set it_product_ver "5.1"
set it_product_dir ""

if {[lsearch [array names env] IT_PRODUCT_DIR] != -1} {
   set it_product_dir $env(IT_PRODUCT_DIR)
} else {
   set it_product_dir $DEFAULT_PRODUCT_DIR
}

# Display the command in a form that the user can re-use
#
# Gather javac args in one string for display
#
set javac_args_str ""
foreach argument $javac_args {
   set javac_args_str "$javac_args_str$argument "    
}

# Core Orbix jars
#
# Note - Listing individual jars instead of orbix2000.jar due to Sun bug
# 4212732
#
#set o2k_classpath_jars "[file nativename [file join $it_product_dir asp $it_product_ver lib orbix2000.jar]]"

foreach jar { ajp.jar art.jar app_services.jar atli.jar atli_multicast.jar atli_tcp.jar egmiop.jar event.jar event_psk.jar giop_snoop.jar http.jar https.jar iiop.jar ifc.jar it_genie.jar jms.jar lease.jar location.jar naming.jar mgmt.jar notification.jar notification_psk.jar ots.jar poa.jar portable_interceptor.jar servlet_binding.jar security_services.jar tls.jar trading.jar trading_psk.jar } {
	append o2k_classpath_jars [file nativename "$it_product_dir/asp/$it_product_ver/lib/runtime/$jar$SEP"]
}
foreach jar { baltimore_jssl_20.jar cloudscape.jar fscontext.jar jms.jar jmxri.jar jndi.jar jdbc2_0-stdext.jar jsse_102_export.jar jta-spec1_0_1.jar providerutil.jar } {
        append o2k_classpath_jars [file nativename "$it_product_dir/asp/$it_product_ver/lib/third_party/$jar$SEP"]
}
set classpath_jar_files $o2k_classpath_jars


# $classpath_jar_files in the middle of this line represents all jar files that should be
# on the classpath,
#
set cmd_str "$javac -classpath \"$classpath$SEP[file nativename [file join $it_product_dir asp $it_product_ver demos corba classes]]$SEP$classpath_jar_files\" $javac_args_str"
if {$verbose == 1} {
   puts "$cmd_str"
}

# Now format the command so TCL can run it - then run it
#
set cmd [list $javac -classpath $classpath$SEP[file nativename [file join $it_product_dir asp $it_product_ver demos corba classes]]$SEP$classpath_jar_files]
set final_cmd [concat $cmd $javac_args]

# Running command and return any errors.
#
set cmd_return [ catch { eval exec $final_cmd >&@ stdout } cmd_error ]
exit $cmd_return

  


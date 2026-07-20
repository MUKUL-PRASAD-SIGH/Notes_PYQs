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
  puts "it_java is the Orbix wrapper for the java interpreter.\n"
  puts "Usage: Use it_java exactly like the java command.\n"
  puts "       it_java \[-options\] class \[args...\]"
  puts "           (to execute a class)\n"

  puts "\nNote the following:\n"

  puts "* it_java makes it easier to use Orbix for Java with your java"
  puts "  installation. it_java passes the environment settings and properties"
  puts "  required for Orbix directly to your java interpreter.\n"

  puts "* it_java requires that the JAVA_HOME environment variable is set so that"
  puts "  it can identify the java interpreter to be used.\n"

  puts "* it_java uses the IT_PRODUCT_DIR, IT_CONFIG_DOMAINS_DIR, IT_CONFIG_DIR," 
  puts "  IT_LICENSE_FILE and IT_DOMAIN_NAME environment settings, when defined to specify"
  puts "  the Orbix configuration domain to be used. If these environment variables" 
  puts "  are not set then it_java uses the default settings.\n"

  puts "* it_java does not set any environment variables or modify any properties"
  puts "  files.\n"

  puts "* it_java displays the complete command that is passed to the java interpreter"
  puts "  so that you can see exactly what it_java is doing.\n\n"
  puts "------------------------------------------------------------------------------\n"
}

#-------------------------------------------------------------------------------------------
#
# This is the it_java script read help text above for description of what it does.
#
#-------------------------------------------------------------------------------------------

global env

if {[lsearch [array names env] JAVA_HOME] != -1} {

} else {
  print_help "no_args"
  puts "\n\n*** You must set JAVA_HOME in your environment to use it_java ***"
  exit 1
}
set java  [file nativename [file join $env(JAVA_HOME) bin java]]


# If no arguments then just invoke java with no args
#
if {[llength $argv] == 0} {
  print_help "no_args"
  puts "\nNo arguments detected - passing directly to java interpreter ...\n"
  puts "\n$java\n"
  eval exec [list $java "-help"] >&@ stdout
  exit 0
}

# Now check for argument options that don't require the Orbix arguments, i.e.
#    -version  print product version
#    -? -help  print this help message
#    -X        print help on non-standard options
#
set is_help_argument 0

foreach argument $argv {
   if {$argument == "-version"} {
       set is_help_argument 1
       print_version ""
   }
   if {($argument == "-?") || ($argument == "-help")} {
       set is_help_argument 1
       print_help $argument
   }
   if {$argument == "-X"} {
       set is_help_argument 1
   }
   if {$is_help_argument == 1} {
       puts "\nJava option \"$argument\" detected - passing directly to java interpreter ...\n"
       puts "\n$java $argument\n"
       eval exec [list $java $argument] >&@ stdout
       exit 0   
   }
}


# Now we need to add Orbix arguments
#

if {[lsearch [array names env] CLASSPATH] != -1} {
  set classpath $env(CLASSPATH)
} else {
  set classpath "."
}

set setclasspath 0
set donotset_domain_name 0
set dontaddconfigdir 0
set setproductdir 0
set dontreadproductdirfromenv 0
set skip_one 0
set dontaddlicensefile 0

set it_product_ver "5.1"
set it_product_dir ""
set it_config_domains_dir ""

if {$tcl_platform(platform) == "windows"} {
  set SEP ";"
  set DEFAULT_PRODUCT_DIR "c:\\Program Files\\iona"
  set DEFAULT_CONFIG_DOMAINS_DIR "c:\\Program Files\\iona\\etc\\domains"
  set DEFAULT_LICENSE_DIR "c:\\Program Files\\iona\\etc"
} else {
  set SEP ":"
  set DEFAULT_PRODUCT_DIR "/opt/iona"
  set DEFAULT_CONFIG_DOMAINS_DIR "/etc/opt/iona/domains"
  set DEFAULT_LICENSE_DIR "/etc/opt/iona/"
}

foreach argument $argv {
   if {$setclasspath!=1 && $skip_one!=1 && $setproductdir!=1} {
     if {$argument == "-classpath"} {
         set skip_one 1
         set setclasspath 1
     } else {
       if {$argument == "-cp"} {
             set skip_one 1
             set setclasspath 1
       } else {
	 if {$argument == "-ORBconfig_domains_dir" || $argument == "-ORBconfig_dir"} {
	   set dontaddconfigdir 1
	   lappend java_args $argument
         } else {
	    if {$argument == "-ORBproduct_dir"} {
               set setproductdir 1
	       set dontreadproductdirfromenv 1
               lappend java_args $argument
            } else {
	      if {$argument == "-ORBlicense_file"} {
		 set dontaddlicensefile 1
		 lappend java_args $argument
              } else {
	         if {$argument == "-ORBdomain_name"} {
                   set donotset_domain_name 1
                   set skip_one 1
	           lappend java_args $argument
                 } else {
	           lappend java_args $argument
                }
              }
           }
         } 
       }
     }
  } else {
      if {$setclasspath == 1} {
         set classpath $argument
      } else { 
        if {$setproductdir == 1} {
          set DEFAULT_PRODUCT_DIR $argument
        }
      }
      set skip_one 0
      set setclasspath 0
      set setproductdir 0
   }
}


if {[lsearch [array names env] IT_PRODUCT_DIR] != -1 && $dontreadproductdirfromenv==0} {
   set it_product_dir $env(IT_PRODUCT_DIR)
   lappend java_args -ORBproduct_dir
   lappend java_args $env(IT_PRODUCT_DIR)
   
} else {
   set it_product_dir $DEFAULT_PRODUCT_DIR
}
#
# IT_PRODUCT_DIR is not the default so reset DEFAULT_CONFIG_DOMAINS_DIR
# to be relative to IT_PRODUCT_DIR (on Windows only)
#

if {$tcl_platform(platform) == "windows"} {
  set DEFAULT_CONFIG_DOMAINS_DIR [file nativename [file join $it_product_dir etc domains]]
  set DEFAULT_LICENSE_DIR [file nativename [file join $it_product_dir etc]]
}

if {$dontaddconfigdir == 0} {
   if {[lsearch [array names env] IT_CONFIG_DOMAINS_DIR] != -1} {
      set it_config_domains_dir $env(IT_CONFIG_DOMAINS_DIR)
      lappend java_args -ORBconfig_domains_dir
      lappend java_args $env(IT_CONFIG_DOMAINS_DIR)
   } else {
      if {[lsearch [array names env] IT_CONFIG_DIR] != -1} {
          set it_config_domains_dir [file nativename [file join $env(IT_CONFIG_DIR) domains]]
          lappend java_args -ORBconfig_dir
          lappend java_args $env(IT_CONFIG_DIR)
      } else {
	set it_config_domains_dir [file nativename [file join $it_product_dir etc domains]]
      }
   }
} else {
  set it_config_domains_dir ""
}

if {$donotset_domain_name == 0} {
   if {[lsearch [array names env] IT_DOMAIN_NAME] != -1} {
     lappend java_args -ORBdomain_name
     lappend java_args $env(IT_DOMAIN_NAME)
   } else {
     puts "\nWarning : No domain name has been specified.  You must set IT_DOMAIN_NAME, pass -ORBdomain_name to 
     the process or else ensure that -ORBdomain_name is set programmatically \n"   
   }  
} 

if {$dontaddlicensefile == 0} {
   if {[lsearch [array names env] IT_LICENSE_FILE] != -1} {
      lappend java_args -ORBlicense_file
      lappend java_args $env(IT_LICENSE_FILE)
   } 
}


# Display the command in a form that the user can re-use
#
# Gather java args in one string for display
#
set java_args_str ""
foreach argument $java_args {
   set java_args_str "$java_args_str$argument "    
}

# Core Orbix jars
#
set o2k_classpath_jars "[file nativename [file join $it_product_dir asp $it_product_ver lib orbix2000.jar]]"


set classpath_jar_files $o2k_classpath_jars


# $classpath_jar_files in the middle of this line represents all jar files that should be
# on the classpath,
#
set demos_dir [file nativename [file join $it_product_dir asp $it_product_ver demos corba]]
set demos_classes ""
if { [ file exists $demos_dir ] } {
  set demos_classes "[file nativename [file join $demos_dir classes]]"
}

set cmd_str "$java -Dorg.omg.CORBA.ORBClass=com.iona.corba.art.artimpl.ORBImpl -Dorg.omg.CORBA.ORBSingletonClass=com.iona.corba.art.artimpl.ORBSingleton -classpath \"$classpath$SEP$classpath_jar_files$SEP$demos_classes\" $java_args_str"
puts "$cmd_str"

# Now format the command so TCL can run it - then run it
#
set cmd [list $java -Dorg.omg.CORBA.ORBClass=com.iona.corba.art.artimpl.ORBImpl -Dorg.omg.CORBA.ORBSingletonClass=com.iona.corba.art.artimpl.ORBSingleton -classpath $classpath$SEP$classpath_jar_files$SEP[file nativename [file join $it_product_dir asp $it_product_ver demos corba classes]]]
set final_cmd [concat $cmd $java_args]

# Running command and return any errors.
#
set cmd_return [ catch { eval exec $final_cmd >&@ stdout } cmd_error ]
exit $cmd_return



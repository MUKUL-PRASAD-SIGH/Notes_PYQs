#!/usr/local/bin/perl
#
# Setup and run node daemon. Create IMR entries.
#
# USAGE: deployLinkedDomain.pl <linkhost>
#
#    <linkhost> is the host where the configuration
#    repository is running.
#
# The following env variables must be set before
# running this script:
#    IT_DOMAIN_NAME
#    IT_CONFIG_DOMAINS_DIR
#
use strict;
use File::Basename;
use Sys::Hostname;

#
# Running Windows or UNIX?
#
my($isWin) = 0;
if ("$^O" =~ /Win32/)
{
   $isWin = 1;
}

my($scriptPath) = dirname($0);
my $hostname="";
$hostname=(split(/\./,lc(hostname())))[0];

my($linkhost) = shift;
if ( ${linkhost} eq "" )
{
   print "\n   Usage: deployNodeDaemon.pl <link_host_name> \n\n";
   exit(1);
}
 
if ( !($ENV{IT_DOMAIN_NAME} && $ENV{IT_CONFIG_DOMAINS_DIR}) )
{
   print "\nThe following environment variables must be set before\n";
   print "running this script:\n"; 
   print "   IT_DOMAIN_NAME\n";
   print "   IT_CONFIG_DOMAINS_DIR\n\n";
   exit(1);
}

#
# Generate deployer input files
#
print "\nGenerating deployer input files...\n";
if (system("perl $scriptPath/createDeployerFile.pl -link $linkhost"))
{
   print "\n\nProblems generating deployer input files\n";
   exit(1);
}

#
# Create configuration domain
#
print "\nCreating configuration domain...\n"; 
system("itdeployer -driver $ENV{IT_DOMAIN_NAME}_driver.xml");

#
# IONA bug workarounds here
#
workaround_iona_bug() if ($isWin);
system("cscript $scriptPath\\node_daemon_regedit.vbs $hostname $ENV{IT_DOMAIN_NAME}") if ($isWin);


#
# Start the services
#
print "\nStarting Orbix services...\n";
if ($isWin)
{
   system("$ENV{IT_PRODUCT_DIR}/etc/bin/start_$ENV{IT_DOMAIN_NAME}_services.bat");
}
else
{
   system("$ENV{IT_CONFIG_DOMAINS_DIR}/../bin/start_$ENV{IT_DOMAIN_NAME}_services");
}

#
# Setup host-specific IMR entries
#
print "\nSetting up host-specific IMR entries...\n";
system("itadmin $scriptPath/setHostIMREntries.tcl");

print "\n";


#
# The IONA conifuration/deployment tool has a bug in it
# that prevents the node daemon from being registered as
# a Windows service. The subroutine has code in it that
# will register the node daemon as an NT service and change
# the start script to start the node daemon as an NT serivice.
#
sub workaround_iona_bug
{
   print "\nIONA bug workaround...\n";
   my($line) = "";

   # Adjust startup scripts to start up node daemon as NT service
   open(STARTFILE, "$ENV{IT_PRODUCT_DIR}/etc/bin/start_$ENV{IT_DOMAIN_NAME}_services.bat")
      or die "Could not open start services file\n";
   my(@lines) = <STARTFILE>;
   close(STARTFILE);

   open(STARTFILE, ">$ENV{IT_PRODUCT_DIR}/etc/bin/start_$ENV{IT_DOMAIN_NAME}_services.bat")
      or die "Could not open start services file\n";
   foreach $line (@lines)
   {
      $line =~ s/-background/-service/g;
      print STARTFILE $line;
   }
   close(STARTFILE);

   # Register node daemon as NT service
   system("itnode_daemon -ORBname iona_services.node_daemon.${hostname} install");
}

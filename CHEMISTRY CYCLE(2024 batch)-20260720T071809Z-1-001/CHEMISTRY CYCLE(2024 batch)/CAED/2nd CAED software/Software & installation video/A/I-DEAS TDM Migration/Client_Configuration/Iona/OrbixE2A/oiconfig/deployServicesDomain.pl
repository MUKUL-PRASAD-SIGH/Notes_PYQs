#!/usr/local/bin/perl5
#
# Setup and run Orbix services. Create IMR entries.
#
# USAGE: deployServicesDomain.pl [<network alias>]
#
#    The network alias is an optional parameter to
#    tell the IONA deployer to use this network
#    alias when deploying the Orbix services instead
#    of the hostname.
#
# The following env variables must be set before
# running this script:
#    IT_DOMAIN_NAME
#    IT_CONFIG_DOMAINS_DIR
#
use strict;
use File::Basename;
use Sys::Hostname;

my $networkAlias = "";
$networkAlias = shift;

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
if (! $networkAlias)
{
   $hostname=(split(/\./,lc(hostname())))[0];
}
else
{
   $hostname = $networkAlias;
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
my $deployerCmdArgs = "-services";
if ($networkAlias)
{
   $deployerCmdArgs .= " $networkAlias";
}
if (system("perl5 $scriptPath/createDeployerFile.pl $deployerCmdArgs"))
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
# IONA bug workaround here
#
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
# Setup root IMR entries
#
print "\nSetting up root IMR entries...\n";
system("itadmin $scriptPath/setRootIMREntries.tcl");

#
# Setup host-specific IMR entries
#
print "\nSetting up host-specific IMR entries...\n";
system("itadmin $scriptPath/setHostIMREntries.tcl");

print "\n";

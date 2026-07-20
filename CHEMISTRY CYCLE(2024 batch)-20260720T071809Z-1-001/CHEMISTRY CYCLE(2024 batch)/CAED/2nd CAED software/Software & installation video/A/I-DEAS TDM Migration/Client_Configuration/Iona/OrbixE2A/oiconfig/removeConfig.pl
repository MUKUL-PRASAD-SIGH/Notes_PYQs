#!/usr/local/bin/perl5
#
# Remove a Orbix configuration domain from a machine
#
# $IT_CONFIG_DOMAINS_DIR must be set before running this
# script.
#
# Command line arguments
#    -n <config domain name>  Name of the configuration domain that
#                             is going to be deleted. The config
#                             domain will be deleted from the
#                             $IT_CONFIG_DOMAINS_DIR location
#    -d <data file location>  Usually this is "/var/opt/iona" for UNIX
#                             and "%IT_PRODUCT_DIR%\var" for Windows
#
use strict;
use File::Basename;
use Sys::Hostname;
use File::Path;
use Getopt::Std;

my($databaseLoc) = "";
my($domainName) = "";

sub usage()
{
   print <<EOM;
Usage:
removeConfig.pl -n <config domain name>
                -d <database file location (usually "var" path)>
EOM
   exit(1);
}

#
# Command line arguments
#
{
   no strict 'vars';
   getopts('d:n:');
   if (!($databaseLoc = $opt_d)) { usage(); } # DB files location
   if (!($domainName = $opt_n)) { usage(); } # domain name
}

#
# Running Windows or UNIX?
#
my($isWin) = 0;
if ("$^O" =~ /Win32/)
{
   $isWin = 1;
}

my($scriptPath) = dirname($0);
my($hostname) = hostname();
$hostname = lc($hostname);
$hostname =~ s/(.)(\.[\w-]+)+/$1/;
 
if ( !$ENV{IT_CONFIG_DOMAINS_DIR} )
{
   print "IT_CONFIG_DOMAINS_DIR must be set.\n";
   exit(1);
}

my($etcLoc) = "";
my($startScript) = "";
my($stopScript) = "";
my($envScript) = "";

if ($isWin)
{
   $etcLoc = "$ENV{IT_PRODUCT_DIR}/etc";
   $startScript = "$etcLoc/bin/start_${domainName}_services.bat";
   $stopScript = "$etcLoc/bin/stop_${domainName}_services.bat";
   $envScript = "$etcLoc/bin/${domainName}_env.bat";
}
else
{
   $etcLoc = "$ENV{IT_CONFIG_DOMAINS_DIR}/..";
   $startScript = "$etcLoc/bin/start_${domainName}_services";
   $stopScript = "$etcLoc/bin/stop_${domainName}_services";
   $envScript = "$etcLoc/bin/${domainName}_env";
}

#
# Build up list of files/directores to remove
#
my(@candidates) = ( "$startScript", "$stopScript",
                    "$envScript",
                    "$ENV{IT_CONFIG_DOMAINS_DIR}/${domainName}.cfg",
                    "$ENV{IT_CONFIG_DOMAINS_DIR}/cfr-${domainName}.cfg",
                    "$ENV{IT_CONFIG_DOMAINS_DIR}/${domainName}",
                    "$databaseLoc/${domainName}" );
my(@removeFiles);
my($file) = "";
foreach $file (@candidates)
{
   push(@removeFiles, $file) if (-e $file)
}

if ($#removeFiles < 0)
{
   print "No Files to remove\n";
   exit(0);
}

#
# Stop the services
#
print "\nStoping Orbix services...\n";
system("$stopScript");

#
# Remove the configuration files
#
print "\nRemoving all configuration files for $domainName...\n";
foreach $file (@removeFiles)
{
   rmtree($file, 1, 0);
}

print <<EOM;

Note that this script does NOT do the following:
- Unregister Windows services (Windows)
- Remove boot scripts (UNIX)
- Unregister any naming service names, configuration variables
  or scopes, or IMR entries (poas, orbnames, processes, etc.).

EOM

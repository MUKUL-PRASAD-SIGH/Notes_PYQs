#!/usr/local/bin/perl5
#
# Description:
#
#   Create a client/node preparation file that can be used
#   to configure a host to link to an existing configuration
#   domain or to create a new domain.
#
#   A configuration file called deployerFileCreate.cfg can be
#   put in the current working directory. This file can specify
#   the port numbers for the services to be configured. The file
#   must be of the form:
#      CFR_PORT = XXXX
#      LOCATOR_PORT = XXXX
#      NODE_DAEMON_PORT = XXXX
#
#   If the file doesn't exist or if these entries don't exist
#   in the file, then default values will be used.
#
#   History:
#
#      January 2002  K.T.P.
#
#
#############################################################################

use strict;

#
# Running Windows or UNIX?
#
my($isWin) = 0;
if ("$^O" =~ /Win32/)
{
   $isWin = 1;
}

#
# Setup some global information.
#
my $done=0;
my $link=0;
my $linkhost="";
my $networkAlias="";
my $etcLoc = "";
my $varLoc = "";
my $user = "";
my $installBootScripts = "";
my $domainName = "$ENV{IT_DOMAIN_NAME}";

#initialize values to defaults
my $cfrPort = 3076;
my $locatorPort = 3075;
my $nodeDaemonPort = 3079;

if (-e "deployerFileCreate.cfg")
{
   open(CFG, "deployerFileCreate.cfg") or die "Cannot open file: $!";
   my $theFile = "";
   while (<CFG>)
   {
      $theFile .= $_;
   }
   close(CFG);
   
   if ($theFile =~ /^CFR_PORT\s*=\s*(.*?)$/m)
   {
      $cfrPort = $1;
   }

   if ($theFile =~ /^LOCATOR_PORT\s*=\s*(.*?)$/m)
   {
      $locatorPort = $1;
   }

   if ($theFile =~ /^NODE_DAEMON_PORT\s*=\s*(.*?)$/m)
   {
      $nodeDaemonPort = $1;
   }

}


#
# Obtain the name of the host we are currently running
# on.
#
use Sys::Hostname;
my $hostname="";
$hostname=(split(/\./,lc(hostname())))[0];
print "\nCreating files for: $hostname\n";

if ($isWin)
{
   $etcLoc = "$ENV{IT_PRODUCT_DIR}\\etc";
   $etcLoc =~ s/(\\)/\\$1/g;
   $varLoc = "$ENV{IT_PRODUCT_DIR}\\var";
   $varLoc =~ s/(\\)/\\$1/g;
   $user = "Administrator";
   $installBootScripts = "true";
   print "$etcLoc \n";
   print "$varLoc \n";
}
else
{
   $etcLoc = "/etc/opt/iona";
   $varLoc = "/var/opt/iona";
   $user = "root";
   $installBootScripts = "false"; # We will use our own boot script
}

# Processing incoming arguments
sub Usage
{
   print "\nUsage: $0 \n    [-services [<network alias>]|-link <hostname>] \n";
   print "\n";
   print "To link to an exiting domain: \n";
   print "   -link <hostname> \n";
   print "To create a new config domain: \n";
   print "   -services [<network alias>] \n";
   print "\n";
   exit(1);
}

while ($ARGV[0] && !$done)
{
   if ($ARGV[0] eq "-link")
   {
      $link = 1;
      shift;
      $linkhost = shift or Usage();
      $done = 1;
   }
   elsif ($ARGV[0] eq "-services")
   {
      $link = 0;
      shift;
      $networkAlias = shift or
         print "No network alias specified. Using hostname $hostname\n";
      $done = 1;
   }
   else
   {
      Usage();
   }
}
if (!$done) { Usage(); }

######################################################################
# MAIN
######################################################################
CreateDomainXML($domainName);
if ($networkAlias)
{
   CreateDriverFile($networkAlias, $user);
}
else
{
   CreateDriverFile($hostname, $user);
}

################################################################################
################################################################################
#
# Subroutine Section
#
################################################################################
################################################################################

################################################################################
#
# Create the <domain-name>_driver.xml file
#
# Inputs:
#
#   <domain-name>   Name of the domain.
#
# Outputs:
#
#   <domain-name>_driver.xml
#
################################################################################
sub CreateDomainXML
{
   my $on_demand = 0;
   my ($driver_file) = @_;
   $driver_file = $driver_file ."_driver.xml";
   if ( -f $driver_file ) { unlink($driver_file) ; }

   open(OUTPUT,">${driver_file}") or die "Could not open ${driver_file}";
   print OUTPUT  "<\?xml version=\"1.0\" encoding=\"ISO-8859-1\"\?>\n";
   print OUTPUT  "<!DOCTYPE ABDeploy SYSTEM \"ABDeploy.dtd\">\n"; 
   print OUTPUT  "<!-- Deployer Driver Data -->\n";
   print OUTPUT  "<ABDeploy>\n"; 
   print OUTPUT  "    <service>\n"; 
   print OUTPUT  "        <dataId>driver</dataId>\n"; 
   print OUTPUT  "    </service>\n"; 
   print OUTPUT  "    <driver>\n"; 
   print OUTPUT  "        <component>&init;</component>\n";
   print OUTPUT  "        <component>&init_svcs;</component>\n";
   if ($link)
   {
      print OUTPUT  "        <component>&link;</component>\n";
   }
   else
   {
      print OUTPUT  "        <component>&config_rep;</component>\n";
   }
   print OUTPUT  "        <component>&admin;</component>\n"; 
   print OUTPUT  "        <component>&tool_corba;</component>\n";
   if (! $link)
   {
      print OUTPUT  "        <component role=\"master\">&locator;</component>\n";
   }
   print OUTPUT  "        <component>&node_daemon;</component>\n"; 
   if (! $link)
   {
      print OUTPUT  "        <component role=\"master\">&naming;</component>\n";
   }
   if ( $on_demand )
   {
      print OUTPUT  "        <component mode=\"on_demand\">&event;</component>\n"; 
      print OUTPUT  "        <component mode=\"on_demand\">&ifr;</component>\n"; 
   }
   print OUTPUT  "        <component>&comet;</component>\n";
   print OUTPUT  "    </driver>\n";
   print OUTPUT  "</ABDeploy>\n";
   close(OUTPUT);
   if ( -f $driver_file )
   {
      print "   $driver_file has been created \n";
   }
}

################################################################################
#
# Create the ABDriver.dtd file
#
# Inputs:
#
#   hostname
#   IT product directory
#   Username of configuration ( usually 'Administrator' for NT
#                                       'root' for UNIX )
#
# Outputs:
#
#   ABDriver.dtd
#
################################################################################
sub CreateDriverFile
{
   my ($hostname, $user) = @_;
   my $abdriver = "ABDriver.dtd";
   if ( -f $abdriver ) { unlink($abdriver) ; }

   open(OUTPUT, ">${abdriver}") or die "Could not open ${abdriver}";
   print OUTPUT  "<!ENTITY o2k.bin.dir \"\%binDir;\"> \n";
   print OUTPUT  "<!ENTITY o2k.cert.dir \"\%certDir;\"> \n"; 
   print OUTPUT  "<!ENTITY o2k.install.dir \"\%prodDir;\"> \n";
   print OUTPUT  "<!ENTITY o2k.jar.dir \"\%jarDir;\"> \n";
   print OUTPUT  "<!ENTITY o2k.license.dir \"\%licenseDir;\"> \n";
   print OUTPUT  "<!ENTITY o2k.domain.root \"$etcLoc\"> \n";
   print OUTPUT  "<!ENTITY o2k.data.root \"$varLoc\"> \n";
   print OUTPUT  "<!ENTITY host.hostname_for_iors \"$hostname\"> \n";
   print OUTPUT  "<!ENTITY config_domain \"domain.xml\"> \n";
   print OUTPUT  "<!ENTITY config.domain.name \"$domainName\"> \n";
   print OUTPUT  "<!ENTITY config.domain.owner \"${user}\"> \n";
   print OUTPUT  "<!ENTITY config.domain.type \"cfr\"> \n";
   if ( ! $isWin )
   { 
      print OUTPUT  "<!ENTITY kdm.tls.port \"2186\"> \n";
   }
   print OUTPUT  "<!ENTITY config.domain.secure \"false\"> \n";
   print OUTPUT  "<!ENTITY config.daemon.install \"$installBootScripts\"> \n";

   #
   # These are tweaks for Windows since it is running Orbix E2A ASP V5.1 compared
   # to the other platforms which are running V5.0 release.
   #
   if ($isWin && $link)
   {
      print OUTPUT  "<!ENTITY locator.port \"0\"> \n";
   }
   if ( $isWin )
   {
      print OUTPUT  "<!ENTITY java.X.options \"rs\"> \n";
      print OUTPUT  "<!ENTITY export_config.orbacus \"false\"> \n";
   }
   print OUTPUT  "<!ENTITY manage_services \"false\"> \n";
   print OUTPUT  "<!ENTITY config_rep \"config_rep.xml\"> \n";
   print OUTPUT  "<!ENTITY core \"core.xml\"> \n";
   print OUTPUT  "<!ENTITY demos \"demos.xml\"> \n";
   print OUTPUT  "<!ENTITY file_core \"file_core.xml\"> \n";
   print OUTPUT  "<!ENTITY file_svcs \"file_svcs.xml\"> \n";
   print OUTPUT  "<!ENTITY init \"init.xml\"> \n";
   print OUTPUT  "<!ENTITY init_svcs \"init_svcs.xml\"> \n";
   print OUTPUT  "<!ENTITY naming_stub \"naming_stub.xml\"> \n";
   print OUTPUT  "<!ENTITY ots \"ots.xml\"> \n";
   print OUTPUT  "<!ENTITY comet \"comet.xml\"> \n";
   print OUTPUT  "<!ENTITY platform \"platform_env.xml\"> \n";
   print OUTPUT  "<!ENTITY pss \"pss.xml\"> \n";
   print OUTPUT  "<!ENTITY tls \"tls.xml\"> \n";
   print OUTPUT  "<!ENTITY tool_corba \"tool_corba.xml\"> \n";
   print OUTPUT  "<!ENTITY admin \"admin.xml\"> \n";
   print OUTPUT  "<!ENTITY link \"link.xml\"> \n";
   print OUTPUT  "<!ENTITY cfr.orbname \"iona_services.config_rep.${hostname}\"> \n";
   print OUTPUT  "<!ENTITY locator.orbname \"iona_services.locator.${hostname}\"> \n";
   print OUTPUT  "<!ENTITY config_rep.bin.dir \"\%binDir;\"> \n";
   print OUTPUT  "<!ENTITY cfr_boot_svcs \"cfr_boot_svcs.xml\"> \n";
   print OUTPUT  "<!ENTITY cfr_svcs \"cfr_svcs.xml\"> \n";
   print OUTPUT  "<!ENTITY cfr.port \"${cfrPort}\"> \n";
   print OUTPUT  "<!ENTITY cfr.tls.port \"0\"> \n";
   print OUTPUT  "<!ENTITY cfr.addr_list \"+${hostname}:${cfrPort}\"> \n";
   print OUTPUT  "<!ENTITY cfr.tls.addr_list \"+${hostname}:0\"> \n";
   print OUTPUT  "<!ENTITY cfr.is_master \"true\"> \n";
   print OUTPUT  "<!ENTITY cfr.master.ior \"corbaloc:iiop:1.2\@${hostname}:${cfrPort}/IT_ConfigRepositoryReplica\"> \n";
   print OUTPUT  "<!ENTITY cfr.replica_list \"iona_services.config_rep.${hostname}=corbaloc:iiop:1.2\@${hostname}:${cfrPort}/IT_ConfigRepositoryReplica\"> \n";
   print OUTPUT  "<!ENTITY cfr.mode \"manual\"> \n";
   if ($link)
   {
      print OUTPUT  "<!ENTITY iona_services.config_rep.master.single.ior \"corbaloc:iiop:1.2\@${linkhost}:${cfrPort}/ConfigRepository\"> \n";
      print OUTPUT  "<!ENTITY iona_services.config_rep.replicated.ior \"corbaloc:iiop:1.2\@${linkhost}:${cfrPort}/ConfigRepository\"> \n";
   }
   else
   {
      print OUTPUT  "<!ENTITY locator \"locator.xml\"> \n";
      print OUTPUT  "<!ENTITY locator.bin.dir \"\%binDir;\"> \n";
      print OUTPUT  "<!ENTITY locator.mode \"manual\"> \n";
      print OUTPUT  "<!ENTITY locator.port \"${locatorPort}\"> \n";
      print OUTPUT  "<!ENTITY locator.addr_list \"+${hostname}:${locatorPort}\"> \n";
      print OUTPUT  "<!ENTITY locator.tls.port \"0\"> \n";
      print OUTPUT  "<!ENTITY locator.tls.addr_list \"+${hostname}:0\"> \n";
      print OUTPUT  "<!ENTITY locator.master.ior \"corbaloc:iiop:1.2\@${hostname}:${locatorPort}/IT_LocatorReplica\"> \n";
      print OUTPUT  "<!ENTITY locator.is_master \"true\"> \n";
      print OUTPUT  "<!ENTITY locator.replica_list \"iona_services.locator.${hostname}=corbaloc:iiop:1.2\@${hostname}:${locatorPort}/IT_LocatorReplica\"> \n";
      print OUTPUT  "<!ENTITY location_domain_name \"$domainName\"> \n";
   }
   print OUTPUT  "<!ENTITY node_daemon \"node_daemon.xml\"> \n";
   print OUTPUT  "<!ENTITY node_daemon.bin.dir \"\%binDir;\"> \n";
   print OUTPUT  "<!ENTITY node_daemon.mode \"manual\"> \n";
   print OUTPUT  "<!ENTITY node_daemon.orbname \"iona_services.node_daemon.${hostname}\"> \n";
   print OUTPUT  "<!ENTITY node_daemon.port \"${nodeDaemonPort}\"> \n";
   print OUTPUT  "<!ENTITY node_daemon.tls.port \"0\"> \n";
   if (! $link)
   {
      print OUTPUT  "<!ENTITY naming.is_master \"true\"> \n";
      print OUTPUT  "<!ENTITY naming \"naming.xml\"> \n";
      print OUTPUT  "<!ENTITY naming.bin.dir \"\%binDir;\"> \n";
      print OUTPUT  "<!ENTITY naming.orbname \"iona_services.naming.${hostname}\"> \n";
      print OUTPUT  "<!ENTITY naming.mode \"boot\"> \n";
      print OUTPUT  "<!ENTITY naming.orbProcessName \"\"> \n";
      if ( $isWin )  # Additions for V5.1 release on Windows.
      {
         print OUTPUT "<!ENTITY naming.direct_persistence \"false\"> \n";
         print OUTPUT "<!ENTITY naming.port \"0\"> \n";
         print OUTPUT "<!ENTITY naming.tls.port \"0\"> \n";
         print OUTPUT "<!ENTITY naming.tls.addr_list \"+${hostname}:0\"> \n";
         print OUTPUT "<!ENTITY naming.addr_list \"+${hostname}:3094\"> \n";
      }
   }
   print OUTPUT  "<!ENTITY admin.bin.dir \"\%binDir;\"> \n";
   close(OUTPUT);
   if ( -f $abdriver )
   {
      print "   $abdriver has been created \n";
   }
}


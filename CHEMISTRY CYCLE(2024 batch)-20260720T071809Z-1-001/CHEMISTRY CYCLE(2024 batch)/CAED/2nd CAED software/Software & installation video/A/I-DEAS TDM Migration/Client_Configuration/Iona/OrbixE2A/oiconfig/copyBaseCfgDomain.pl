#!/usr/local/bin/perl5
#
# This script is used to move configuration information
# from one configuration to another. The procedure is
#
# 1) Run "copyBaseCfgDomain.pl -w" on the existing configuration.
#    This will create an output file that contains all the naming
#    service entries under eds/ideas10 and all the configuration
#    information under iona_services.node_daemon.
#
# 2) Run "copyBasicCfgDomain.pl -r" on the new configuration making
#    sure that the output file from step 1 is in the current working
#    directory. This will write all the information that is this
#    output file to new configuration.
#
use strict;
use File::Basename;
use Getopt::Std;

$| = 1;

sub usage()
{
   print "copyBaseCfgDomain.pl -w|-r\n";
   exit(1);
}

my($isWriteMode) = 0;
#
# Command line arguments
#
{
   no strict 'vars';
   getopts('rw');
   if ($opt_r)
   {
      $isWriteMode = 0;
   }
   elsif ($opt_w)
   {
      $isWriteMode = 1;
   }
   else
   {
      usage();
   }
}

if ( !($ENV{IT_DOMAIN_NAME} && $ENV{IT_CONFIG_DOMAINS_DIR}) )
{
   print "\nThe following environment variables must be set before\n";
   print "running this script:\n";
   print "   IT_DOMAIN_NAME\n";
   print "   IT_CONFIG_DOMAINS_DIR\n\n";
   exit(1);
}

my($scriptPath) = dirname($0);
my($rootNameStr) = "eds/ideas10";
my($daemonScope) = "iona_services.node_daemon";
my($dataFile) = "$ENV{IT_DOMAIN_NAME}_copy.dat";

if ($isWriteMode)
{   
   open (DATA, ">$dataFile") or die "Cannot open data file:$!";
   
   # Read naming service contexts
   print DATA "__START__NAMING__SERVICE__CONTEXTS__\n"; 
   my($name) = "";
   open (NAMES, "itadmin ns list $rootNameStr |");
   my(@names) = <NAMES>;
   close(NAMES);
   foreach $name (@names)
   {
      $name = (split(/\s+/, $name))[0]; 
      print DATA "$name\n";
   }
   print DATA "__END__NAMING__SERVICE__CONTEXTS__\n\n";
   
   # Read node daemon configuration data for repository
   print DATA "__START_NODE_DAEMON_SCOPES__\n";
   open (SCOPES, "itadmin scope list $daemonScope |");
   my(@scopes) = <SCOPES>;
   close(SCOPES);

   my $scope = "";
   foreach $scope (@scopes)
   {
      chomp($scope);
      open (SCOPELINES, "itadmin scope show $daemonScope.$scope |");
      my(@scopeLines) = <SCOPELINES>;
      close(SCOPELINES);

      print DATA "$scope\n{\n";  # Open scope
      my $line = "";
      foreach $line (@scopeLines)
      {
         if ($line =~ /\w+|[{}]/)
         {
            print DATA "$line";
         }
      }
      print DATA "}\n";          # Close scope
      
   }
   print DATA "__END_NODE_DAEMON_SCOPES__\n";
   
   close(DATA);
}
else
{
   open (DATA, "<$dataFile") or die "Cannot open data file:$!";
   
   #
   # Handle the naming service contexts
   #
   while (<DATA>)
   {
      last if ($_ =~ /__START__NAMING__SERVICE__CONTEXTS__/);
   }
   
   while (<DATA>)
   {
      my $nodeName = $_;
      chomp $nodeName;
      last if ($nodeName =~ /__END__NAMING__SERVICE__CONTEXTS__/);
      
      print "itadmin ns newnc $rootNameStr/$nodeName\n";
      system("itadmin ns newnc $rootNameStr/$nodeName");
   }
   
   #
   # Handle node deamon configuration scopes
   #
   while (<DATA>)
   {
      last if ($_ =~ /__START_NODE_DAEMON_SCOPES__/);
   }
   
   my $scopeData = "";
   while(my $line=<DATA>)
   {
      last if ($line =~ /__END_NODE_DAEMON_SCOPES__/);
      $scopeData .= $line;
   }

   my @scopes;
   @scopes = ($scopeData =~ /(\w+\s+{.*?})/gs);  # Get the scopes

   my $scope = "";
   foreach $scope (@scopes)
   {
      my $node = "";
      $node = ($scope =~ /(\w+)\s+{.*?}/s)[0];

      print "itadmin scope create $daemonScope.$node\n";
      system("itadmin scope create $daemonScope.$node");
      
      my @lines;
      my $line = "";
      @lines = split (/\n/, $scope);
      foreach $line (@lines)
      {
         my $var = "";
         my $val = "";
         ($var, $val) = ($line =~ /\s*(.*?)\s*=\s*(.*)\s*/);
         if ($var)
         {
            print "itadmin variable create -scope $daemonScope.$node -type string -value $val $var\n";
            system ("itadmin variable create -scope $daemonScope.$node -type string -value $val $var"); 
         }
      }
   }
   
   close(DATA);
}
print "\n";

! ###########    UGS Corporation NX Nastran General Notes   ###############
! #########################################################################
! ###                                                                   ###
! ###  This file contains notes about the NX Nastran 4 release          ###
! ###                                                                   ###
! ###                                                                   ###
! ###                                                                   ###
! #########################################################################
! #########################################################################

TABLE OF CONTENTS

1. Release Overview

2. NX Nastran Distribution Media Contents

3. Operating System Requirements


1. RELEASE OVERVIEW
---------------------------------------------------------------------------
NX Nastran 4 contains many major enhancements thus expanding the capabilities:
  
- New advanced nonlinear explicit solver, SOL 701, which is useful 
for analyzing short duration transient events such as impacts.
 
- NX Nastran 4 now provides a surface to surface contact capability to be 
used with the SOL 101 linear statics solution.

- Improvements have been made to the modal frequency response (SOL 111) 
and modal transient response (SOL 112) solution sequences.

- New enhancements are included to expand the capabilities of composites.

- The PBEND/CBEND element has been updated with more current standards and practices.

- A new Rotor Dynamics capability has been added for the analysis of structures 
with rotating parts such aircraft engines or automobiles.

- NX Nastran now offers two new executable options for AIX and HP-UX Itanium which 
are compiled with a 64-bit integer size. These ILP-64 executables are capable of 
using memory well beyond the 8 GB limit of the previously released LP-64 executables. 
Adding to the existing executables ILP-32 and LP-64, this creates a new executable 
category ILP-64. These executables are available by download from the UGS GTAC website:
http://ftp.ugs.com/
To run these ILP-64 executables on AIX or HPUX-Itanium, you will need 
to define the environment variable NXN_ARCH:
AIX
Using k-shell:  export NXN_ARCH=aix64l (note that aix64l has a lower case L)
Using c-shell:  setenv NXN_ARCH aix64l (note that aix64l has a lower case L)
HPUX-Itanium
Using k-shell:  export NXN_ARCH=hpuxia64l (note that hpuxia64l has a lower case L)
Using c-shell:  setenv NXN_ARCH=hpuxia64l (note that hpuxia64l has a lower case L)

- The OUTPUT2, OUTPUT4, and INPUTT4 modules have been enhanced to allow you 
to specify the format of your binary files as big or little endian.

- HDMP solutions have been enhanced with a new geometry partitioning module
which enables you to run response analysis solutions (SOL 111,112) in a DMP
fashion.

- Eigenvalue solutions have been enhanced with performance improvements.

- The Linux shell scripts have been rewritten as to be compatible with the default 
BASH shell. These new shell scripts remove some of the limitations which existed 
when running NX Nastran on Linux machines with the standard Linux Korn-shell.
One note about this change: these shell scripts are no longer compatible 
with UNIX shell environments, thus Linux and UNIX installations can no 
longer exist under the same nfs/samba server installation.

- On Linux platforms, LAM MPI has been replaced by HP MPI, which is included
with the NX Nastran installation.  This standardizes the MPI version for Linux, 
and simplifies the system requirements for running dmp & hdmp solutions. 
All Linux platforms use the HP MPI except SGI Altix, which uses SGI MPT 
and comes with the SGI Linux OS.

- A new pre-conditioner option for the element iterative solver has been created.
It has shown improved performance on models containing a large number of elements
with poor aspect ratios.


2. NX NASTRAN DISTRIBUTION MEDIA CONTENTS
---------------------------------------------------------------------------

The NX Nastran distribution CD-ROMs contain the following files:

    File Set           Description
    ------------       ---------------------------------------------------------
    AutoPlay.exe       Launches installation utility for Windows platforms.
    nxnsetup           Installation utility for UNIX platforms.
    nxn.seq            Manufacturing information.
    nxnsetup.tar       Tar archive containing above files.
    README.txt         This document.    
    nxn4/              Directory containing NX Nastran file sets for UNIX platforms.
    flexlm/            Directory containing FLEXlm License Server V10.1.4 File
                       Sets for UNIX platforms.
    I386/              Directory containing NX Nastran and FLEXlm License Server
                       V.10.1.4 File Sets for Windows platforms.
    tools/             Directory containing installation utilities.
    nxn4/bookshelf.pdf Documentation library on documentation CD.


The following table lists which optional components are installed with the
different installation types on UNIX platforms.

        
      UNIX
    Install Type                                                       
    Full Std Min File Set                                   File Set    
    ---- --- --- -----------------------------------      ------------ 
     Y    Y   Y  NX Nastran Executables                   
     Y    Y   Y   Base files                               base.tar     
     Y    Y      Other Files and Executables              
     Y    Y       Demo -  NX Nastran examples              demo.tar       
     Y            NX Nastran ACCESS sample program source  access.tar     
     Y            Beam Server sample source                bmsrv.tar      
     Y            Dr3 Server sample source                 dr3srv.tar          
     Y    Y       Misc - Release notes, alters, etc.       misc.tar   
     Y            TPL - NX Nastran advanced examples       tpl.tar       
     Y           Utility program source.                   util.tar      


3. OPERATING SYSTEM REQUIREMENTS
---------------------------------------------------------------------------

The following table lists the minimum operating system requirements to run 
NX Nastran. These are the operating system levels on which the product was
built. However, the product was tested and runs on higher level operating
systems. For example, the Windows executable was built on Windows 2000 but 
was also tested on Windows XP.

You can use the ugsinfo command to display information about
the system on which you're installing NX Nastran. See the NX Nastran
Installation and Operations Guide for more information.

                                                
                        Build               Architecture     Additionally
Platform          Operating System              Name           Tested OS
---------     -------------------------     ------------     --------------
X86_64             SuSE Linux 9.0               x86_64linux  SuSE9.1
(Opteron/EM64T)                                              SuSE9.3    
(64-bit,64-bit DMP)                                          SuSE SLES9
                                                             Red Hat EL 3.0
                                                             Red Hat EL 4.0

HP 9000            PA-RISC 2.0 HP-UX 11.00      hpux         B11.11
(64-bit,64-bit DMP)

HP Itanium         Itanium 2 HP-UX B.11.22      hpuxia64     B11.23
(64-bit,                                        hpuxia64l
64-bit DMP, 
ILP-64, ILP-64 DMP) 
    
IBM Power 3        Power 3 AIX 5.1              aix          AIX 5.2      
(64-bit,64-bit DMP,                             aix64l       AIX 5.3
ILP-64, ILP-64 DMP)
                    
INTEL Itanium      Red Hat Linux 2.1            linux64      Red Hat EL3.0,           
(64-bit,                                                     Red Hat EL4.0
64-bit DMP)
    
INTEL Linux        Pentium 4 Red Hat            linux        Red Hat EL3.0,
(32-bit,           Linux 7.3-LSB 1.2                         Red Hat EL4.0,
32-bit DMP)                                                  SuSE9.2

INTEL Windows      Windows 2000 SP3             i386         WXPSP1,
(32-bit)                                                     WXPSP2
                                                             WXP-64(on 
                                                             EM64T/Opteron)
                                                             Win 2003 Server(on
                                                             EM64T/Opteron)
     
SGI R8K/R10K/R12K  IRIX64 6.5.7                 irix64       Irix 6.5.21,
(64-bit,                                                     Irix 6.5.24m,
64-bit DMP)                                                  Irix 6.5.27m
                                                             
SGI Altix          SGI Propack 3 SP3            altix        Propack 4
(64-bit, 
64-bit DMP)  
    
Sun SPARC Solaris  UltraSPARC  Solaris 8 2/02   solaris      Solaris 9
(32-bit)                                                     Solaris 10
               

           Sentinel System Driver Version 5.41(Legacy Installation)
                              README.TXT File
               Copyright (c) 1991-2002 Rainbow Technologies
                           All rights reserved.

 Thank you for choosing the Sentinel System Driver from Rainbow Technologies!

 The Sentinel System Driver provides a communication path between your 
 protected application and the Sentinel key. The driver you install depends 
 on the operating system you are using.

 This README file provides information on: installation procedure of Sentinel 
 System Driver for developers not using Windows Installer and where to go for 
 more information or to report problems.

-----------------------------------------------------------
 TABLE OF CONTENTS
-----------------------------------------------------------

  1.0 Installing and Configuring the Product
      1.1 Compatibility
      1.2 Quick Installation
      1.3 Windows NT Driver 
          1.3.1 Windows NT Driver Installation
          1.3.2 Windows NT Driver Configuration
          1.3.3 Windows NT Driver Removal
      1.4 Windows 9X
          1.4.1 Windows 9X Driver Installation 
          1.4.2 Windows 9X Driver Configuration
          1.4.3 Windows 9X Driver Removal
      1.5 Autodetecting Setup Program          
  2.0 What's New in This Release?
      2.1 Changes Since SSD-5.39.2
  3.0 Late-breaking News
  4.0 Known Problems
  5.0 Where to Go Next?
  6.0 Reporting Problems

-----------------------------------------------------------
 1.0 INSTALLING THE PRODUCT
-----------------------------------------------------------
  
 This document describes the installation procedure for the old installation
 program. For information regarding the new Windows installer-based installation
 program, please refer to the HTML Online Help. 
 
 IMPORTANT NOTE!

 It is important to note that the two installation methods cannot be mixed 
 together. All the files and directories under the \LEGACY subdirectory 
 are for the old method of installation.

-----------------------------------------------------------
 1.1 Compatibility
-----------------------------------------------------------
 
 Operating System: Microsoft Windows 95, 98, ME, 2000, NT and XP  

 Notes: 

 1. This release maintains support for x86 microprocessors only.

 2. The Sentinel USB driver is not supported on Windows 95.
 
-----------------------------------------------------------
 1.2 Quick Installation 
-----------------------------------------------------------

 The easiest way to integrate the driver installation program with your 
 application's installation program is to do the following:
 
 1. Copy the entire contents of the \LEGACY subdirectory to a relevant location.

 2. Execute SETUP.EXE. 
 
 Notes:  

  1.  If the SuperPro USB device will be supported, then the command line 
      for SETUP.EXE must include the "/USB" switch. However, on 
      Windows 95 the USB driver is not supported.

  2.  The "/P" switch may be necessary to specify the location of the 
      driver files on the application's installation media.

-----------------------------------------------------------
 1.3 Windows NT Driver 
-----------------------------------------------------------
 
 This section covers the installation, configuration and removal of the Sentinel 
 System Driver on Windows NT. 
 
 Notes:

  1.  Administrative privilege is required to install/configure/remove the 
      driver. 
     
  2.  The setup program can be found in the \LEGACY\WIN_NT subdirectory. 
      After installation, it can be found in the %SYSTEMROOT%\SYSTEM32\RNBOSENT 
      subdirectory. "%SYSTEMROOT%" refers to the directory where Windows NT is 
      installed and is usually WINNT.

-----------------------------------------------------------
 1.3.1 Windows NT Driver Installation 
-----------------------------------------------------------

 1. Run the SETUPX86 program. A window with the title bar "Rainbow Technologies 
    Sentinel" appears. If started from a command prompt, the following 
    command-line options can be used: 
    
     /q
     Quiet mode—normal dialogs are not displayed but error messages will be 
     displayed.        

     /e
     Suppress all the messages (overwrites the /q switch). The normal dialogs 
     and error messages are not displayed. Look for a non-zero return code from 
     the installer to detect an installation error. 
        
     /pxxx
     Path, where xxx is the path specified to install the files. Otherwise, 
     files will be copied from the default directory.

     /o
     Overwrite the existing Sentinel Driver. By default, if the existing driver 
     is newer than the one to be installed—the installer will not copy over it.
           
     /USB
     Install the USB driver (Windows 2000 and XP only).

     /v
     Do not install the Virtual Device Driver (VDD). The VDD is only necessary 
     for the old DOS and Win16 applications.

     If the /q command-line option is used, then the driver will be installed 
     and the SETUPX86 program will exit. The remaining steps in this 
     procedure do not apply.

     Alternatively, SETUP.EXE can be used to install the driver. It autodetects 
     the operating system and runs the correct driver setup program 
     automatically. Please refer to the "Autodetecting Setup Program" 
     section in this document for more details.   

 3. Click "Functions" and then "Install Sentinel Driver" from the menu bar.
    A dialog with the default path for the NT driver is displayed.

 4. Change the drive letter and path if necessary and click "OK".

 5. The Sentinel Driver and associated files are copied to the hard disk.
    When complete, "Driver Installed!" message is shown.
      
 7. Click "OK" to continue.

 8. Select "Functions" and then "Quit" from the menu bar to exit the 
    installation program.

-----------------------------------------------------------
 1.3.2 Windows NT Driver Configuration 
-----------------------------------------------------------

 The Sentinel System Driver for Windows NT can be configured as follows:

 1. Run the SETUPX86 program.

 2. Click "Functions" and then "Configure Sentinel Driver" from the menu bar.
    A window with the title bar "Sentinel Driver" will be displayed.

 3. Click the "Edit" button to edit an existing parallel port setting, the 
    "Add" button to add a new parallel port setting, or the "Help" button to
    get help.  
     
 4. Click "OK" to close the port configuration.

 5. If any configuration changes were made, a dialog with the message 
    "You are about to change the settings of this port.  Click 'OK' to 
    continue, 'Cancel' to go back."  will appear.  Click OK to make the  
    changes.
     
 6. Click "OK" to continue.

 7. Click "Functions" and then "Quit" from the menu bar to exit the 
    installation program.

-----------------------------------------------------------
 1.3.3 Windows NT Driver Removal 
-----------------------------------------------------------

 1. Run the SETUPX86 program using the /q /u command-line options 
    to quietly remove the driver, or run it without any options and then follow
    the remaining steps in this section.
        
 2. Click "Functions" and then "Remove Sentinel Driver" from the menu bar.
    A dialog with the message "Are you sure you want to remove the driver?" 
    will be displayed.
  
 3. Click "OK" to remove the driver.  A dialog with the message 
    "Sentinel Driver removed" will be displayed.
      
 4. Click "OK."
      
 5. Click "Functions" and then "Quit" from the menu bar to exit installation. 

 Note: Some files may not be removed until the computer has been restarted.
 
-----------------------------------------------------------
 1.4 Windows 9X Driver
-----------------------------------------------------------

 This section covers the installation, configuration and removal of the Sentinel 
 System Driver on Windows 9X operating system.

 Note: The path to the Windows9x driver is: \LEGACY\WIN_9x\sentw9x.exe.

-----------------------------------------------------------
 1.4.1 Windows 9X Driver Installation 
-----------------------------------------------------------

 1. Run the SENTW9X.EXE setup program. A window with the title bar "Rainbow 
    Technologies Sentinel" is displayed. If started from a command prompt the 
    following options are supported:

     /q
     Quiet mode. 
     Normal dialogs are not displayed but error messages will be displayed.
            
     /e
     Suppress all messages (Overwrites the /q switch).
     Both normal dialogs and error messages not displayed. Look for 
     non-zero return code from the installer to detect any installation error.
     
     /pxxx 
     Path, where xxx is the path of files to be installed.
     Specify the path of files to be installed. Otherwise, files will be 
     copied from the default directory.
            
     /o
     Overwrite the existing Sentinel Driver.  By default, if the existing driver  
     is newer than the one to be installed, the installer will not copy over it.
            
     /USB  
     Install the USB driver. 

     Optionally, an integrated setup program SETUP.EXE, is provided in  
     the \Legacy directory. It autodetects the operating system and runs the 
     correct driver setup program automatically.  Please refer to the
     "Autodetecting Setup Program" section in this document for more details.

     If the /q command line option is used then the driver will be installed 
     and the SENTW9X.EXE program will exit. The remaining steps in 
     this procedure do not apply.
     
 2. Click "Functions" and then "Install Sentinel Driver" from the menu bar.
    A dialog with the default path for the driver is displayed. 
   
 3. Change the drive letter and path if necessary and click "OK". The Sentinel 
    Driver and associated files are copied to the hard disk. When complete, a 
    dialog with the message "Driver Installed!" and "Restart your system." 
    will be displayed.

 4. Click "OK" to continue.

 5. Select "Functions" and then "Quit" from the menu bar to exit. 
 
 6. Restart Windows 9X. The following files have been created on your hard disk:

     WINDOWS\SYSTEM\SENTINEL.VXD
     WINDOWS\SYSTEM\RNBOSENT\SENTW9X.EXE
     WINDOWS\SYSTEM\RNBOSENT\SENTW9X.DLL
     WINDOWS\SYSTEM\RNBOSENT\SENTW9X.HLP
     WINDOWS\SYSTEM\RNBOSENT\SENTSTRT.EXE
     WINDOWS\SYSTEM\RNBOSENT\SENTINEL.SAV

-----------------------------------------------------------
 1.4.2 Windows 9X Driver Configuration
-----------------------------------------------------------

 1. Start Windows 9X.  Select "Run" from the Taskbar and run the file 
    SENTW9X.EXE in the WINDOWS\SYSTEM\RNBOSENT subdirectory.

 2. Select "Configure Sentinel Driver" from the "Functions" menu.

 3. Click the "Edit" button to edit an existing parallel port setting. 
    Click the "Add" button to add a new parallel port setting.
    Click the "Help" button to get help.  
     
 4. Click "OK" to close the port configuration.

 5. Restart Windows 9X for the changes to take effect.

-----------------------------------------------------------
 1.4.3 Windows 9X Driver Removal
-----------------------------------------------------------

 1. Start Windows 9X.  Select "Run" from the Taskbar and run the file 
    SENTW9X.EXE in the WINDOWS\SYSTEM\RNBOSENT subdirectory 
    (or from the original distribution media).  
   
    The driver can be removed via the command-line options or the 
    pull-down menu.
  
     a. Command-line options: 
        SENTW9X.EXE /q /u (quietly removes the existing driver), or
        SETUP.EXE /q /u (quietly removes the existing driver)

     b. Pull-down menu:    
        Select "Remove Sentinel Driver" from the "Function" menu.
        When complete, a dialog with the message 
       "Sentinel Driver Removed" is displayed.

2. Click "OK" to continue.

-----------------------------------------------------------
 1.5 Autodetecting the Setup Program
-----------------------------------------------------------

 SETUP.EXE is a 16-bit Windows program designed to detect the active OS, 
 and launch the appropriate Sentinel System Installation program.  
 SETUP can launch the Win9X and WinNT installers.

 In order for the launching program to work correctly the directory structure 
 must be maintained. That is, SETUP.EXE must be in the parent directory 
 for all the other installers to be supported.

 Execute the program by selecting "Run" from the Taskbar and run the file 
 SETUP.EXE in the \LEGACY directory.

 The command-line option differs slightly from running the specific OS 
 installer directly. Please review the following options and related Notes.

     /P<Source Path> 
     Specify the root location of the driver.  
     If not specified, the location defaults to the root.

 NOTE: If the parent directory of the system driver is not specified correctly, 
 setup.exe will not be able to spawn the appropriate installer.

     /Qn  
     Quiet Mode, 4 different levels:

     /Q1 
     No error messages, launch installer quietly.

     /Q2(default)
     Report error messages, launch installer quietly.

     /Q3 
     No error messages, launch installer in verbose mode.

     /Q4
     Report error messages, launch installer in verbose mode.

 NOTE: Unlike the installers, SETUP.EXE runs quietly by default.  
 To show options, use /Q3 or /Q4.

     /O  
     Overwrites existing driver regardless of version.

     /U 
     Uninstall the detected driver

     /Xn                         
     Do not autodetect, instead use:        

         /X1
         Windows 9X

         /X2
         Windows NT - i86

     /USB                    
     Install the USB driver.

     /?                           
     Display online usage.

 NOTE: Due to its requirements for autodetection, SETUP.EXE does 
 not support the /E command.  

-----------------------------------------------------------
 2.0 WHAT'S NEW IN THIS RELEASE?
-----------------------------------------------------------

 This section contains information on changes done since the last release.

-----------------------------------------------------------
 2.1 Changes Since SSD5.39.2
-----------------------------------------------------------

 1. The 32-bit USB driver has been certified for Windows 2000 and 
    Windows XP by the Microsoft Windows Hardware Quality 
    Labs (WHQL).
 
 2. The parallel driver for Windows 98/ME/NT/2000/XP has been 
    enhanced to allow the use of add-in PCI parallel port adapters 
    on systems without a parallel port.
    
 3. The driver file version information is now reported correctly.
 
 4. Changes have been made to the driver in an effort to enhance 
    the reliablity of SuperPro keys.
    
 5. A problem has been fixed in the USB driver that caused the 
    RNBOsproFindNextUnit API function to find the same key 
    that was found using the RNBOsproFindFirstUnit API.

-----------------------------------------------------------
 3.0 LATE-BREAKING NEWS
-----------------------------------------------------------

 None.

-----------------------------------------------------------
 4.0 KNOWN PROBLEMS
-----------------------------------------------------------

 1. The Legacy installer cannot install just the USB driver. 
    It installs only the parallel driver, or both the parallel and USB driver.
    
 2. The Legacy installer may not always correctly update the USB driver on a 
    system where the USB driver is already installed. Updating the USB driver 
    may require a manual update via the Device Manager. 
    This only occurs in Windows 2000.
    
 3. When installing the driver on a system that uses a double-byte language, 
    the install directory cannot contain double-byte characters. 
    The install directory should only contain ASCII characters.
    
 4. USB is no longer supported on Windows 95 systems. 

-----------------------------------------------------------
 5.0 WHERE TO GO NEXT?
-----------------------------------------------------------

 For information on including the Sentinel System Driver in your own product 
 installation, and for information on using the Windows Installers merge 
 modules, see the online installation guide.

-----------------------------------------------------------
 6.0 REPORTING PROBLEMS
-----------------------------------------------------------

 If you find any problems, please contact Rainbow Technical Support 
 using any of the following methods:

 CORPORATE HEADQUARTERS NORTH AMERICA AND SOUTH AMERICA
 ---------------------------------------------------------
 Rainbow Technologies, Inc.
 Internet      http://www.rainbow.com
 E-mail        techsupport@irvine.rainbow.com
 Telephone     (800) 959-9954 (Monday - Friday, 6:00 a.m.-6:00 p.m. PST)
 Fax           (949) 450-7450

 AUSTRALIA AND NEW ZEALAND
 ---------------------------------------------------------
 E-mail        techsupport@au.rainbow.com
 Telephone     (61) 3 9820 8900
 Fax           (61) 3 9820 8711

 CHINA
 ---------------------------------------------------------
 E-mail        sentinel@isecurity.com.cn
 Telephone     (86) 10 8266 3936
 Fax           (86) 10 8266 3948
 
 FRANCE
 ---------------------------------------------------------
 E-mail        EuTechSupport@rainbow.com
 Telephone     0825 341000
 Fax           +44 (0) 1932 570743

 GERMANY
 ---------------------------------------------------------
 E-mail        EuTechSupport@rainbow.com
 Telephone     0813 RAINBOW (7246269)
 Fax           +44 (0) 1932 570743

 TAIWAN AND SOUTHEAST ASIA
 ---------------------------------------------------------
 E-mail        techsupport@tw.rainbow.com
 Telephone     (886) 2 2570-5522
 Fax           (886) 2 2570-1988
 
 UNITED KINGDOM
 ---------------------------------------------------------
 E-mail        EuTechSupport@rainbow.com
 Telephone     0870 7529200
 Fax           +44 (0) 1932 570743
 
 OTHER COUNTRIES
 ---------------
 Customers not in countries listed above, please contact your local
 distributor.

 [readme, August 31, 2002 V.5.41]
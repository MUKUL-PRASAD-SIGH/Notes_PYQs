Program Name : HexPro.vbp (HexPro.exe)
Last Modified: June 14, 1999  RKR

Description
-----------
This program demonstrates running a macro from within the Profile environment
of Solid Edge.  It uses the Command and Mouse OCX's to get a coordinate from
the user and uses this coordinate as the center point to place a hexagonal
shaped profile.  This program only performs the sketching step of placing a
feature.  Once the profile has been placed the program can be exited and the
user can interactively edit the profile to get the desired results.  This
demonstrates the ability to automate portions of the entire workflow.

This program also uses the units of measure Automation to get the user keyin
defining the size of the hexagon.  It also shows 2D graphics placement and
placing keypoint relationships.

This program is compiled as an OLE Server, which must be executed from within
the Profile environment of Solid Edge by starting the Macro command on the Tools menu.


Operation
---------
	o Compile New OLE Server Executable.
	  - Using File Manager, change directory to 
	    <Solid Edge>\Custom\HexPro .
	  - Double click on HexPro.vbp file.
	    (This will bring up Visual Basic with the sample loaded)
	  - On the Project menu in Visual Basic, select HexPro Properties.
	  - Select the General tab of the Project Properties dialog box.
	  - Make sure the Project Type is set to ActiveX EXE and the Startup Form
	    is set to Sub Main, and then select the OK button.
	  - From the pull-Down menus in Visual Basic select File then Make EXE File...
	    (This will create a new OLE Server executable, HexPro.exe).

	o Run OLE Server Executable from within Solid Edge.
	  - Start the Part environment of Solid Edge.  A new file or existing file
	    can be used.
	  - Select one of the feature commands that requires a profile, i.e. 
	    extruded and revolved protrusions and cutouts.
	  - Select or define the sketching plane, so the system will enter the
            Profile environment.
	  - From the Profile environment use the pull-down menus Tools -> Macro.
	    (This will open a Run Macro dialog box which allows the user to select
             any DLL or OLE-Server executable.)
	  - Use the Run Macro dialog to change directory to the location of your
	    Custom directory.  
	  - Select the Custom\HexPro\HexPro.exe file.
	  - This will display a form allowing the user to set the size of the hexagon.
	  - Click the left mouse button to place the hexagon.  It will be centered at
	    the input point.
          - Click the Close button on the form to exit the macro.
          - You can now interactively work with the geometry created to add additional
	    relationships or can end the profile step of the feature and finish 
	    creating the feature.
	
Development Notes and Known Problems
------------------------------------

The Command and Mouse controls described in earlier versions of the Solid Edge Programmer's Guide are deprecated.  You should use the Command and Mouse objects, described in the Programming with Solid Edge help file, to create a Solid Edge command and access the Mouse object to capture user input and process Solid Edge mouse events.

The SECCtl.ocx and SEMCtl.ocx modules that support the Command and Mouse controls are no longer registered when Solid Edge is installed.  To access these modules, you can manually register them with the regsvr32 utility.  If you distribute programs that rely upon these controls, you must also register them on the computers where your programs are deployed.

The MouseObject sample program, delivered to the Solid Edge Custom folder, illustrates the use of the Command and Mouse objects in a Microsoft Visual Basic 2005 project, built on the .NET Framework, to demonstrate all of the functionality originally shown in the Mouse sample program.
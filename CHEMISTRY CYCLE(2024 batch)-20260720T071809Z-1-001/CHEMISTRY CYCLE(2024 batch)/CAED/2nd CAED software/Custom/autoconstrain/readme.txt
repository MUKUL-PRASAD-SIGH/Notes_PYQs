Program Name : AutoCnst.VBP (AutoCnst.DLL)
Last Modified: 20-06-05
Required: Visual Basic 6.0, SP2

Description
-----------
The AutoConstrain example demonstrates how a user can write Visual Basic applications to help customize Unigraphics Solutions' Solid Edge. Using Visual Basic, it is possible to create an application as either an EXE or a DLL.  This sample illustrates the making of a DLL which will run "in-process" resulting in faster startup and performance. This sample allows you to select a set of geometry in Profile or Layout and automatically recognize and add geometric constraints.

This project must be compiled as a DLL file, and then run from the Solid Edge Profile environment. 

Operation
---------
	o Compile a new DLL
	  - Using File Manager, change directory to 
	    <Solid Edge>\Custom\Autoconstrain.
	  - Double click on the AutoCnst.VBP  file.
	    (This will bring up Visual Basic with the sample loaded.)
	  - From the Project menu in Visual Basic, select AutoCnst Properties.
	  - On the General Tab of the Project Properties dialog box, set the
	    Startup Object to Sub Main, and set Project Type to ActiveX DLL.
	  - From the File menu in Visual Basic, select Make autocnst.dll.
	    (This will build the DLL.)

	o Add command to a toolbar
	  - Start Solid Edge and enter the Layout or Profile environment.
	  - Select the Tools pull-down menu and then select Customize.  The
	    Customize dialog box allows you to select a command and Drag-and-Drop
	    it to a toolbar.
	  - From the list of catagories, select the last entry entitled Macros.
  	  - Select the Browse button to locate the command.  Change directory to
                    <Solid Edge>\Custom\AutoConstrain.
	  - Select autocnst.dll and drag-and-drop it to a toolbar.
	  - On the Custom Button dialog box, browse to the directory and select
	    toolbar.bmp to use the custom bitmap supplied with the sample.
	  - Select some geometry.
	  - Select the Autoconstrain command you just added to the toolbar.  This
	    macro applies connect, tangent, horizontal, and vertical relationships
	    to geometry that meets tolerance criteria that are defined as global
	    constants in cnstrn.bas.
 

Development Notes and Known Problems
------------------------------------
	o This macro does not place fillet and chamfer relationships.
	o This macro was not written to properly support the Draft environment, but it was allowed to run in that environment.  It has been enhanced to prevent execution in Draft.

The Command and Mouse controls described in earlier versions of the Solid Edge Programmer's Guide are deprecated.  You should use the Command and Mouse objects, described in the Programming with Solid Edge help file, to create a Solid Edge command and access the Mouse object to capture user input and process Solid Edge mouse events.

The SECCtl.ocx and SEMCtl.ocx modules that support the Command and Mouse controls are no longer registered when Solid Edge is installed.  To access these modules, you can manually register them with the regsvr32 utility.  If you distribute programs that rely upon these controls, you must also register them on the computers where your programs are deployed.

The MouseObject sample program, delivered to the Solid Edge Custom folder, illustrates the use of the Command and Mouse objects in a Microsoft Visual Basic 2005 project, built on the .NET Framework, to demonstrate all of the functionality originally shown in the Mouse sample program.
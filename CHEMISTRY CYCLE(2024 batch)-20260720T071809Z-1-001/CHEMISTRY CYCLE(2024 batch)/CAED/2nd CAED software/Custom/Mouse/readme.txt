Program Name : Mouse (Mouse.EXE)
Last Modified: June 14, 2007
Required: Visual Basic 6.0, SP2

Description
-----------
The Mouse sample demonstrates how you can use the Solid Edge Mouse and Command
controls to allow your Visual Basic application to get and process mouse events
from Solid Edge.  The sample displays a form that allows you to manipulate all
of the Mouse control properties and view the results.  It demonstrates the
dynamics and locate features added in Solid Edge Version 3.0 in addition to
all of the existing functionality.
 
You must run the sample from within Solid Edge using the Tools->Macro command.  It
can be run from any of the Solid Edge environments.

Operation
---------
	o Run the sample.
	  - Start Solid Edge and open any document.
	  - Run Mouse.exe by selecting the Tool->Macros command and selecting Mouse.exe
	  - Select options on the form and view the results. 

Development Notes and Known Problems
------------------------------------

The Command and Mouse controls described in earlier versions of the Solid Edge Programmer's Guide are deprecated.  You should use the Command and Mouse objects, described in the Programming with Solid Edge help file, to create a Solid Edge command and access the Mouse object to capture user input and process Solid Edge mouse events.

The SECCtl.ocx and SEMCtl.ocx modules that support the Command and Mouse controls are no longer registered when Solid Edge is installed.  To access these modules, you can manually register them with the regsvr32 utility.  If you distribute programs that rely upon these controls, you must also register them on the computers where your programs are deployed.

The MouseObject sample program, delivered to the Solid Edge Custom folder, illustrates the use of the Command and Mouse objects in a Microsoft Visual Basic 2005 project, built on the .NET Framework, to demonstrate all of the functionality originally shown in the Mouse sample program.
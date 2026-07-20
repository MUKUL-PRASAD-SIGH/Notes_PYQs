Program Name : CopyDimStyle.vbp
Last Modified: June 14, 1999

Description
-----------
This sample copies the style from one dimension to another.  It demonstrates reading the 
current properties of a dimension and setting the properties of a dimension.  

Operation
---------
The program is a dll that is run using the Run Macro command within Solid Edge or by 
assigning the DLL to a toolbar button using the Customize command within Solid Edge.

Development Notes and Known Problems
------------------------------------

The Command and Mouse controls described in earlier versions of the Solid Edge Programmer's Guide are deprecated.  You should use the Command and Mouse objects, described in the Programming with Solid Edge help file, to create a Solid Edge command and access the Mouse object to capture user input and process Solid Edge mouse events.

The SECCtl.ocx and SEMCtl.ocx modules that support the Command and Mouse controls are no longer registered when Solid Edge is installed.  To access these modules, you can manually register them with the regsvr32 utility.  If you distribute programs that rely upon these controls, you must also register them on the computers where your programs are deployed.

The MouseObject sample program, delivered to the Solid Edge Custom folder, illustrates the use of the Command and Mouse objects in a Microsoft Visual Basic 2005 project, built on the .NET Framework, to demonstrate all of the functionality originally shown in the Mouse sample program.
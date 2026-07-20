Program Name : BOM.VBP (BOM.EXE)
Last Modified: October 17, 2006  RKR
Required: Visual Basic 6.0, SP2

Description
-----------
	The Bill of Materials sample demonstrates how a user can write
Visual Basic applications to help customize Unigraphics Solution's Solid Edge.
The sample takes a currently open assembly and produces one of several
"Bill of Material" type reports.  The sample parses the assembly and
reports all the subassemblies and parts that exist in the assembly.
	This project is to be compiled as an executable file, and then
run from the file manager.  You can also run the sample from within
Visual Basic by clicking the "Run" button.
	The latest version honors the IncludeInBOM property on the part
and will ignore parts and assemblies that have this property set to false.

Operation
---------
	o Compile a new executable.
	  - Using File Manager, change directory to 
	    <Solid Edge>\Custom\BOM.
	  - Double click on the BOM.VBP file.
	    (This will bring up Visual Basic with the sample loaded.)
	  - From the pull-down menus in Visual Basic select Tools then
	    Options.
	  - From the pull-Down menus in Visual Basic select File then Make
	    EXE File...
	    (This will create a new executable called bom.exe).

	o Run the sample.
	  - Start Solid Edge Assembly by clicking on the Solid Edge
	    Assembly icon.
	  - Load an existing assembly into Solid Edge using the "Load File"
	    option.
	  - Start bom.exe or click the "run" button in Visual Basic.
	  - Select the desired report and properties.  The report is
	    generated and displayed in the form.  The contents can then be
	    copied to the clipboard to be used in a report in another
	    application.

	    When copying to the clipboard you have two options for the
	    formatting of the output.  You can specify the exact width of
            each column.  Or you can specify that each column is delimeted
	    with a tab character.  Using tab delimeters allows the data to
	    be easily read into Excel.
	    

Development Notes and Known Problems
------------------------------------
10-17-06: Change in modglob.bas:
	From
		Public Const DOC_CREATION_DATE = "Creation date"
	To
		Public Const DOC_CREATION_DATE = "Origination date"

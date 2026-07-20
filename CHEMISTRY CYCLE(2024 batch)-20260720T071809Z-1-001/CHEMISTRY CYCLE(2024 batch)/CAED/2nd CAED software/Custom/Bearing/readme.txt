Program Name : BEARING.XLS
Last Modified: June 14, 1999  RKR
Required: Microsoft Excel '97

Description
-----------
	The Bearing sample demonstrates how a user can link cells in
a Microsoft Excel spreadsheet to variables in a Solid Edge part
drawing.  The variables are linked to the spreadsheet cells using
the variable table in Solid Edge.

	The Excel macro also has a section of
code that uses Variable Table automation to update the variables instead
of using the OLE links to the spreadsheet.  This section of code can be 
enabled by changing a boolean flag in the macro.


Operation
---------
	o Open the Excel spreadsheet file "Bearing.xls".
	o Start Solid Edge and open the file "Bearing.par".
	o Run the sample.
	  - Select a column on the row of dimensions you wish to make the
	    part file reflect.
	  - Click on the update button.  Solid Edge will update the part
	    file to reflect the new values.
	    

Development Notes and Known Problems
------------------------------------

	This sample requires Excel '97 to work properly.  However, you may also be able to use it with newer versions of Excel 7.0 by regenerating the link to the Excel file ("Bearing.xls").  To regenerate the link to this file, do the following:
	o Open the "Bearing.par" file in Solid Edge.
	o Open the Variable Table.
	o Right click on a cell containing the Excel link.
	o Choose "Edit Link."
	o Choose "Change Link."
	o On the Links dialog box, select "Bearing.xls" as the new file name and click 	  	  Update Now.
	o Save the new "Bearing.par" file.

Program Name : ISOTABLE (ISOTABLE.DLL)
Created: October 23, 1998
Required: Visual Basic 5.0 or greater if you need to edit example.

NOTE: All length values in this example are in millimeter units.

Description
-----------
The example demonstrates how you can use Visual Basic to customize the Solid Edge
Sheet Metal application to compute the flat pattern length of bend features. This value is called 
Bend Allowance, Bend Compensation, Plastic Zone Length (PZL for short) etc.
In general the Sheet Metal documentation refers to this value as PZL.

This example uses table values defined in an ASCII text file to define the PZL value for bends in Sheet Metal.
If the radius or thickness is not defined in the table then the program computes the value using a 
standard formula.

You can easily edit the program so that it will use your standard formula. The program defines a public
OLE Server called PZL. Inside this server is a public function called PZL. When connected to a Sheet
Metal document via Tools/Options settings Solid Edge will call this function instead of using
the built in formula.

You can also edit the values in the ASCII text file (table.txt) so that it uses you standard values.

Solid Edge passes the material thickness, bend radius, bend angle and other arguments to this function.
You can use any or all of these values to compute the PZL value.

NOTE: The value you return for PZL must be > 0.000 

Take a look at the source code for the program in Visual Basic for more details.


Operation
---------
	o To register the DLL for use with Solid Edge in Windows Explorer double click on the file:

               Register.bat

          This will add the DLL to the system registry. (Turns it on so Solid Edge can use it)

          NOTE: To turn off the DLL double click on the file:  UnRegister.bat
                This will remove the DLL from the system registry.

	o Open a file in SE-Sheet Metal
	  - On the Tools menu, click Material Table
	  - On the Gage tab of the Material Table, set "Custom formula" option
	  - In the field key-in: ISOTABLE.PZL
	  - Click Apply, and then close the dialog box.
	 
	  This connects the file to the custom VB DLL. Now, whenever the length of the bend in the
          flat is needed Sheet Metal will call the PZL function defined in the DLL.
	  HINT: You can save a file with this setting as a document template so you do not have to repeat
		this operation.

Development Notes and Known Problems
------------------------------------
- When debugging the program in VB5 you will need to toggle the Bend Equation option to "standard
  formula" in Tools/Options before you can remake the Visual Basic DLL.

- An error occurs for some reason when the PZL function is called for some edits to Sheet Metal features.
  The error occurs the first time a division operation is performed in the VB dll. Solid Edge is trying
  to determine the reason for this error and what is causing it. A fix for this has been added to 
  example. Basically the fix is to divide two numbers at the start of the program and catch the error
  using On Error Resume Next. See the example programs for more details.


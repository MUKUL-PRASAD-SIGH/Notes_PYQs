Program Name : Stock Wizard - Stock.vbp (Stock.exe)
Last Modified: June 15, 1999

Description
-----------
This demonstration program gives a small sample of what can be accomplished
by combining MS Visual Basic and Solid Edge.  This program allows the user 
to place three different stock parts on a document with user defined dimensions.

This program is compiled as a stand alone executable and Solid Edge must be running with
a new open part document.


Operation
---------
	o Compile New Standalone executable.
	  - Using File Manager, change directory to 
	    <Solid Edge>\Custom\Stock .
	  - Double click on Stock.vbp file.
	    (This will bring up Visual Basic with the Stock Wizard sample loaded)
	  - From the Project menu in Visual Basic select StockWizard Properties.
	  - Select the General Tab from the Project Properties dialog box.
	  - Make sure the Startup Object is set to frmStock and the Project Type is 
	    set to Standard EXE, then select the OK button.
	  - From the pull-Down menus in Visual Basic select File then 
	    Make EXE File...
	    (This will create a new executable, Stock.exe).

	o Run Standalone executable
	  - Start the Solid Edge application.
	  - Start the Stock.exe sample.
	  - Select a stock part to be placed ( Box, Cylinder, or Brace).
	  - Input dimensions and select draw.
	   

Development Notes and Known Problems
------------------------------------

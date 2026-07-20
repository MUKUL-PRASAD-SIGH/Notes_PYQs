Attribute VB_Name = "LocalizeData"
Option Explicit

' default data file information
Global Const LF_DATAFILE = "Se-Library.dat"
Global Const LF_INIFILE = "Se-Library.ini"
Global Const LF_FILENAME = "Filename"
Global Const LF_DEFAULT_NAME = "se-library.par"
Global Const LF_FILE = "File: "
Global Const LF_FOUND = ", Found."
Global Const LF_NOT_FOUND = ", will be created."

' data file indentifier constants
Global Const C_NEW_PART = "NEW_PART"
Global Const C_PART_TYPE = "PART_TYPE="
Global Const C_PART_CLASS = "PART_CLASS="
Global Const C_PART_DRAWING = "PART_DRAWING="
Global Const C_HEADING = "HEADING="
Global Const C_PART_DATA = "DATA="
Global Const C_PART_TEMPLATE = "PART_TEMPLATE="
Global Const C_END_PART = "END_PART"
Global Const C_FILE_DELIMITER = ","
Global Const C_DECIMAL = "."
Global Const C_NUMBERFORMAT = "0.#######"

' error text
Global Const LE_NODATAFILE = "The datafile '" & LF_DATAFILE & "' was not found."
Global Const LE_NOINI = "An error was encountered reading the INI file: '" & LF_DATAFILE & "'."
Global Const LE_BADFILENAME = "' is an invalid file name, Please correct the data file and re-start this utility."
Global Const LE_FILE = "The file: '"
Global Const LE_COPYFAIL = "' could not be created. Can't continue this process."
Global Const LE_NOTFOUND = "' was not found. Click Yes to continue, No to exit the program."
Global Const LE_NOREADME = "' was not found."
Global Const LE_NOTFOUNDSTOP = "' was not found. The file is require to continue."
Global Const LE_FILEEXISTS = "' exists, do you want to overwrite it?"
Global Const LE_NOASSEMBLY = "Solid Edge Assembly must be running and an assembly loaded. Please start Solid Edge and load an assembly."
Global Const LE_BUILDNEWFAIL = "Solid Edge was not able to build the selected part. The master part may be corrupt."
Global Const LE_NOOPEN = "' could not be opened in Solid Edge. Can't continue this process."
Global Const LE_NOUPDATE = "' could not be updated in Solid Edge. Can't continue this process."
Global Const LE_NOSAVE = "' could not be saved. Can't continue this process."
Global Const LE_ADDNEWPART = "' could not be added. Please add the part manually."
Global Const LE_NOPARTTYPE = "One part type doesn't contain '" & C_PART_TYPE & "' information, " & _
"edit the data file and add the information. Exiting Program."
Global Const LE_NOPARTCLASS = "One part type doesn't contain '" & C_PART_CLASS & "' information, " & _
"edit the data file and add the information. Exiting Program."
Global Const LE_NOPARTDRAWING = "One part type doesn't contain '" & C_PART_DRAWING & "' information, " & _
"edit the data file and add the information. Exiting Program."
Global Const LE_NOHEADING = "One part type doesn't contain '" & C_HEADING & "' information, " & _
"edit the data file and add the information. Exiting Program."
Global Const LE_NOPARTDATA = "One part type doesn't contain '" & C_PART_DATA & "' information, " & _
"edit the data file and add the information. Exiting Program."
Global Const LE_NOBASEPART = "One part type doesn't contain '" & C_PART_TEMPLATE & "' information, " & _
"edit the data file and add the information. Exiting Program."
Global Const LE_NOPARTS = " part type doesn't contain any sizes. Edit the data file and add the data. Exiting Program."
Global Const LE_NOVARIABLES = "One part type contains no size variables, at least a 'NOMINAL'" & _
"field is required, edit the data file. Exiting Program."
Global Const LE_NOSIZES = "One part type contains no sizes or dimensions, at least a 'NOMINAL'" & _
"field is required, edit the data file. Exiting Program."
Global Const LE_SVMISSMATCH = "One part type contains different numbers of variables and dimensions, " & _
" edit the data file. Exiting Program."
Global Const LE_NODATREAD = "An unexpected error was encountered reading the data file: '" & LF_DATAFILE & _
"'. Un-install and re-install this utility. Exiting Program."
Global Const LE_NOPARTVARS = "' has less variables than required. The part will not recompute properly." & _
" Please update the base part with the correct variables. Process ending."
Global Const LE_NOTYPECLASS = "Information for either '" & C_PART_TYPE & ", or '" & C_PART_CLASS & "' is missing in one of the part definitions." & _
" Add the information to the data file. Process ending."
Global Const LE_FATALERROR = "An unexpected error was encounterd. Try re-installing this utiltiy. Process ending."
Global Const LE_TYPEEXISTS = " is already in use. Make sure '" & C_NEW_PART & "' is included the part definition." & _
    " Add the information to the data file. Process ending."
Global Const LE_NOIMPORT = " The import can not be completed."
Global Const LE_VALIDFAIL = " could not be validated."
Global Const LE_DIVIDEBYZERO = "One dimensional value entered contains a divide by zero, 1 will be substituted."
Global Const LE_INVALIDDAT = " is not a valid data file."
Global Const LE_NOPROPERTIES = "' could not be updated with default properties, add manually."
Global Const LE_ZERODIM1 = "' has a dimension of "
Global Const LE_ZERODIM2 = " can't be used. The model will not be dimensionally correct."
Global Const LE_WRONGENVIRONMENT = "This library must be run from the Assembly environment."
Global Const LE_NOREPLACE = " could not be replaced. Process aborting."
Global Const LE_NOSELECTED = "Please select a part to be replaced first."
Global Const LE_LOCALEFAIL = " could not be updated with the current locale."
Global Const LE_NOSAVEINI = "The default path could not be updated to the INI file."
Global Const LE_NEEDSE = "Please start Solid Edge Assembly."
Global Const LE_VERSION = "This part library requires at least Solid Edge version " & NEED_VERSION & "."

' screen text
Global Const LS_MSGBOX_TITLE = "Solid Edge Library Manager"
Global Const LS_MAIN_CAPTION = "Solid Edge Library Manager"
Global Const LS_BUTTON_DONE = "&Done"
Global Const LS_BUTTON_ADD = "&Add"
Global Const LS_BUTTON_REPLACE = "&Replace"
Global Const LS_CHK_PROPERTIES = "Edit part properties at creation"
Global Const LS_VIEWDRAWING = "Drawing"
Global Const LS_VIEWPART = "Part"
Global Const LS_NODRAWING = "Drawing Not Found"
Global Const LS_NOPART = "Part Not Found"
Global Const LS_ORIGIN = "Place part at assembly origin"
Global Const LS_CANCEL = "&Cancel"
Global Const LS_OPEN = "&Open"
Global Const LS_IMPORT = "&Import"
Global Const LS_LOCATION_CAPTION = "Library Locations "

' command line descriptions
Global Const LC_BUTTON_DONE = "Done with this part library manager, exit."
Global Const LC_BUTTON_ADD = "Add the selected part to the assembly."
Global Const LC_LABEL_CLASS = "Select the class (or style) for the current library type."
Global Const LC_CHK_PROPERTIES = "Specific data (part properties) can be entered as the selected part is being created."
Global Const LC_BUTTON_LEFT = "Click this button to scroll the tabs to the left."
Global Const LC_BUTTON_RIGHT = "Click this button to scroll the tabs to the right."
Global Const LT_BUTTON_LEFT = "Scroll left"
Global Const LT_BUTTON_RIGHT = "Scroll right"
Global Const LT_PROCESS_CONNECT = "Connecting to Solid Edge, please wait..."
Global Const LT_PROCESS_BUILDPART = "Building part, please wait..."
Global Const LT_PROCESS_ADDPART = "Adding the new part to the assembly, please wait..."
Global Const LT_PROCESS_COPYPART = "Creating the new part, please wait..."
Global Const LT_PROCESS_UPDATEPART = "Updating the new part, please wait..."
Global Const LT_PROCESS_SAVEPART = "Saving the new part, please wait..."
Global Const LC_VIEWER = "Click to view the "
Global Const LC_PLACEATORIGIN = "Check this option to place the part at the assembly origin."
Global Const LC_TABTYPE = "Click a tab to change the part type."

' miscalaneous
Global Const LM_INVALIDCHARS = "/\:*?<>|"
Global Const LM_PROGRAMTITLE = "Solid Edge Part Library"
Global Const LM_FRACTION = "l" ' this simulates 1/2 by 1l2

' menu items
Global Const LM_FILE = "&File"
Global Const LM_OPEN = "&Open"
Global Const LM_IMPORT = "&Import"
Global Const LM_EXIT = "&Exit"

Global Const LM_HELP = "&Help"
Global Const LM_HELPHELP = "Help"
Global Const LM_ABOUT = "&About"

' about box
Global Const LA_ABOUTCAPTION = "About " & LS_MAIN_CAPTION
Global Const LA_TEXT1 = "Solid Edge Library Manager version 2.00 for Solid Edge. Copyright (c) 1999, 2001 UGS All rights reserved."

Global Const LA_LIC1 = "Warning: This computer program, including software, file formats, and audio-visual "
Global Const LA_LIC2 = "displays; may be used pursuant to applicable software license agreement; contains "
Global Const LA_LIC3 = "confidential and proprietary information which is protected my copyright and trade "
Global Const LA_LIC4 = "secret law and may not be provided or otherwise made available without proper authorization."

Global Const LA_IMPORT = "&Import"
Global Const LA_EXIT = "&Exit"

Global Const LH_HELPCAPTION = "Help " & LS_MAIN_CAPTION

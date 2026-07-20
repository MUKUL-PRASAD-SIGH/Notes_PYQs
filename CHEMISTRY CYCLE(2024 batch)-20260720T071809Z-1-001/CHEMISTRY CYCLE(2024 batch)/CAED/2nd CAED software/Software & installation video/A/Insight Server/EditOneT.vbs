'--------------------------------------------------------------------------------------------
'ONET.XML defines the project and list defaults, as well as the base types for fields. 
'It contains a definition of list templates available for creating new lists, the default 
'items on the top link bar of a project, the document templates available, and the required 
'base fields for all list types (defined in the <B>BaseTypes</B> section). During provisioning, 
'or when a new list is created, the definitions in this file combine with those in a given list's
'SCHEMA.XML file in order to create the list's schema in the database. ONET.XML is located in the 
'Program Files\Common Files\Microsoft Shared\web server extensions\60\Templates\1033\xml directory.
'
'This script modifies ONET.XML as a workaround to the 255 characters limitation problem.
'--------------------------------------------------------------------------------------------
Option Explicit
On Error Resume Next
Const OpenFileForReading = 1 
Const OpenFileForWriting = 2
Const OpenFileForAppending = 8
Dim fso
Dim WshShell
Dim WshSysEnv
Dim CommonProgramFilesPath
Dim InputFile
Dim InputFilePath
Dim TempFile
Dim TempFilePath
Dim HoldFile
Dim HoldFilePath
Dim NewLine
Dim NewString
Dim strLine
Dim TextStream

Main
'--------------------------------------------------------------------------------------------
Sub Main()
	'-------------------------------
	'Define replacement string
	'-------------------------------
	'"<Project Title="Team Web Site" ListDir="Lists" xmlns:ows="Microsoft SharePoint" CustomJSUrl="/_layouts/[%=System.Threading.Thread.CurrentThread.CurrentUICulture.LCID%]/custom_ows.js>"
	NewString = "<Project Title=" & chr(34) & "Team Web Site" & chr(34) & " ListDir=" & chr(34) & "Lists" & chr(34) & _
	" xmlns:ows=" & chr(34) & "Microsoft SharePoint" & chr(34) & " CustomJSUrl=" & chr(34) & _
	"/_layouts/[%=System.Threading.Thread.CurrentThread.CurrentUICulture.LCID%]/custom_ows.js" & chr(34) & ">"
	'msgbox NewString

	'--------------------------------
	'Get system environment variables
	'--------------------------------
	Set WshShell = WScript.CreateObject("WScript.Shell")
	Set WshSysEnv = WshShell.Environment("PROCESS")
	CommonProgramFilesPath = WshSysEnv("CommonProgramFiles") 
	'msgbox CommonProgramFilesPath

	'--------------------------------------------------
	'Define input and output file paths.
	'--------------------------------------------------
	InputFilePath = CommonProgramFilesPath + "\Microsoft Shared\web server extensions\60\TEMPLATE\1033\STS\XML\ONET.XML"
	HoldFilePath  = CommonProgramFilesPath + "\Microsoft Shared\web server extensions\60\TEMPLATE\1033\STS\XML\ONET_Original.XML"
	TempFilePath  = CommonProgramFilesPath + "\Microsoft Shared\web server extensions\60\TEMPLATE\1033\STS\XML\ONET2.XML"

	'-------------------------------
	'Instantiate file object
	'-------------------------------
	Set fso = CreateObject("Scripting.FileSystemObject") 

	'-------------------------------
	'Check if input file exists
	'-------------------------------
	If not fso.FileExists(InputFilePath) Then
		'msgbox "Something is wrong. File " & InputFilePath & " does not exist"
		Exit Sub   'get outta here
	else
		'msgbox "File " & InputFilePath & " exists"
    End If
    
    '----------------------------------------------------------------------------------------
    'Get a reference to the input file object by calling the FileSystemObject GetFile method.
    '----------------------------------------------------------------------------------------
    Set InputFile = fso.GetFile(InputFilePath)       
    
    '------------------------------------------------------------------
    'Copy the input file to a hold file for posterity
    '------------------------------------------------------------------
    if fso.FileExists(HoldFilePath) Then 
		'msgbox "File " & HoldFilePath & " already exists. Delete it"
		Set HoldFile = fso.GetFile(HoldFilePath)       
		HoldFile.Delete 1
		'msgbox "Was " & HoldFilePath & " deleted?"
	End If
	'msgbox "About to copy " & InputFilePath & " to " & HoldFilePath
	InputFile.Copy HoldFilePath, 0
	'msgbox "did the copy work?"
	
	'------------------------------------------------------------------
	'Create empty temporary file so that we can work on it.
	'------------------------------------------------------------------
	'msgbox "create empty " & TempFilePath
	If fso.FileExists(TempFilePath) Then 
		'msgbox "File " & TempFilePath & " already exists. Delete it"
		Set TempFile = fso.GetFile(TempFilePath)       
		TempFile.Delete 1
		'msgbox "Was " & TempFilePath & " deleted?"
	End If
	Set TempFile = fso.CreateTextFile(TempFilePath)
	'msgbox "do we have an empty " & TempFilePath & " ?"
	
	'--------------------------------------------------
	'Update the temporary file
	'--------------------------------------------------
	UpdateTemporaryFile
	
	'----------------------------------------------------------------------------------------
	'Get a reference to the temporary file object by calling the FileSystemObject GetFile method.
	'----------------------------------------------------------------------------------------
	Set fso = CreateObject("Scripting.FileSystemObject") 
	Set TempFile = fso.GetFile(TempFilePath)       
	
	'--------------------------------------------------
	'Copy the temporary file over the original file
    '--------------------------------------------------
    'msgbox "Copy " & TempFilePath & " to " & InputFilePath
    TempFile.Copy InputFilePath, 1
	'msgbox "did the file copy ok?"

	'--------------------------------------------------
    'Delete the temporary file
    '--------------------------------------------------
    'msgbox "Delete " & TempFilePath
    TempFile.Delete 1

    '--------------------------------------------------
    'Perform cleanup
    '--------------------------------------------------
    ReleaseMemory

End Sub

'---------------------------------------------------------------------------------------------------
'Function/Subroutine definitions
'---------------------------------------------------------------------------------------------------
Sub UpdateTemporaryFile
	Set TextStream = InputFile.OpenAsTextStream(OpenFileForReading)
    'msgbox "Update the temporary file"
	Do While Not TextStream.AtEndOfStream
		strLine = TextStream.ReadLine     
        If Left(strLine, 14) = "<Project Title" then
			'msgbox "About to write line " & NewString & " to " & TempFilePath
			TempFile.WriteLine(NewString)
		else
			'msgbox "About to write line " & strLine & " to " & TempFilePath
			TempFile.WriteLine(strLine)
		End If
	Loop
	'msgbox "We have now created a temp file and updated it."
End Sub

Sub ReleaseMemory
	if not fso is nothing then set fso = nothing
	if not WshShell is nothing then set WshShell = nothing
	if not WshSysEnv is nothing then set WshSysEnv = nothing
	if not InputFile is nothing then set InputFile = nothing
	if not TempFile is nothing then set TempFile = nothing    
	if not HoldFile is nothing then set HoldFile = nothing    
End Sub
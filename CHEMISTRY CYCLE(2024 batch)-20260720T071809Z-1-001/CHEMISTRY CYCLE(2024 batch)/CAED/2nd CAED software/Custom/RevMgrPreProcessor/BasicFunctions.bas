Attribute VB_Name = "modBasicFunctions"
Option Explicit

Public StopProcess As Boolean
Public strFileNames() As String
Public intFileNameCount As Integer

Public Const DELETE& = &H10000
Public Const READ_CONTROL& = &H20000
Public Const WRITE_DAC& = &H40000
Public Const WRITE_OWNER& = &H80000
Public Const SYNCHRONIZE& = &H100000

Public Const STANDARD_RIGHTS_REQUIRED& = &HF0000
Public Const STANDARD_RIGHTS_READ& = READ_CONTROL
Public Const STANDARD_RIGHTS_WRITE& = READ_CONTROL
Public Const STANDARD_RIGHTS_EXECUTE& = READ_CONTROL
Public Const STANDARD_RIGHTS_ALL& = &H1F0000
Public Const SPECIFIC_RIGHTS_ALL& = &HFFFF

Public Const KEY_QUERY_VALUE& = &H1
Public Const KEY_SET_VALUE& = &H2
Public Const KEY_CREATE_SUB_KEY& = &H4
Public Const KEY_ENUMERATE_SUB_KEYS& = &H8
Public Const KEY_NOTIFY& = &H10
Public Const KEY_CREATE_LINK& = &H20

Public Const KEY_READ& = ((STANDARD_RIGHTS_READ Or KEY_QUERY_VALUE Or KEY_ENUMERATE_SUB_KEYS Or KEY_NOTIFY) And (Not SYNCHRONIZE))
Public Const HKEY_CURRENT_USER& = &H80000001
Public Const HKEY_LOCAL_MACHINE = &H80000002
Public Const KEY_ALL_ACCESS& = ((STANDARD_RIGHTS_ALL Or KEY_QUERY_VALUE Or KEY_SET_VALUE Or KEY_CREATE_SUB_KEY Or KEY_ENUMERATE_SUB_KEYS Or KEY_NOTIFY Or KEY_CREATE_LINK) And (Not SYNCHRONIZE))

Public Const ERROR_SUCCESS = 0&
Public Const ERROR_NO_MORE_ITEMS = 259&
Public Const ERROR_FILE_NOT_FOUND = 2&
Public Const ERROR_MORE_DATA = 234

Public Const REG_DWORD& = 4&                ' 32-bit number
Public Const REG_SZ = 1                     ' Unicode nul terminated string

Declare Function RegCloseKey Lib "advapi32" (ByVal hKey As Long) As Long
Declare Function RegCreateKeyEx Lib "advapi32" Alias "RegCreateKeyExA" (ByVal hKey As Long, ByVal lpSubKey As String, ByVal reserved As Long, ByVal lpClass As String, ByVal dwOptions As Long, ByVal samDesired As Long, lpSecurityAttributes As Any, phkResult As Long, lpdwDisposition As Long) As Long
Declare Function RegOpenKeyEx Lib "advapi32" Alias "RegOpenKeyExA" (ByVal hKey As Long, ByVal lpSubKey As String, ByVal ulOptions As Long, ByVal samDesired As Long, phkResult As Long) As Long
Declare Function RegQueryValueEx Lib "advapi32" Alias "RegQueryValueExA" (ByVal hKey As Long, ByVal lpValueName As String, ByVal lpReserved As Long, lpType As Long, lpData As Any, lpcbData As Long) As Long
Declare Function RegEnumKey Lib "advapi32" Alias "RegEnumKeyA" (ByVal hKey As Long, ByVal dwIndex As Long, ByVal lpName As String, ByVal cbName As Long) As Long
Declare Function RegEnumValue Lib "advapi32.dll" Alias "RegEnumValueA" (ByVal hKey As Long, ByVal dwIndex As Long, ByVal lpValueName As String, lpcbValueName As Long, ByVal lpReserved As Long, lpType As Long, ByVal lpData As String, lpcbData As Long) As Long
Declare Function RegCreateKey Lib "advapi32" Alias "RegCreateKeyA" (ByVal hKey As Long, ByVal lpSubKey As String, phkResult As Long) As Long
Declare Function RegSetValueEx Lib "advapi32" Alias "RegSetValueExA" (ByVal hKey As Long, ByVal lpszValueName As String, ByVal dwReserved As Long, ByVal fdwType As Long, lpbData As Any, ByVal cbData As Long) As Long

Public Function GetSolidEdgeVersion(SolidEdgeVersion As String) As Boolean
    Dim lResult As Long
    Dim hkGlobal As Long
    Dim dwtype As Long
    Dim cbData As Long
    Dim strDataBuffer As String * 200
    Dim lpReserved As Long
    Dim strTemp As String
    Dim lngDataBuffer As Long
    
    GetSolidEdgeVersion = True
    
    'Open Registry
    lResult = RegOpenKeyEx(HKEY_LOCAL_MACHINE, "SOFTWARE\Unigraphics Solutions\Solid Edge\Version 9\CurrentVersion", 0, KEY_READ, hkGlobal)
    If lResult <> ERROR_SUCCESS Then
        GetSolidEdgeVersion = False
        Exit Function
    End If

    'Read INI Path
    cbData = Len(strDataBuffer)
    lResult = RegQueryValueEx(hkGlobal, "Build", lpReserved, dwtype, ByVal strDataBuffer, cbData)
    If lResult <> ERROR_SUCCESS Then
        GetSolidEdgeVersion = False
       ' Exit Function
    Else
        SolidEdgeVersion = Left(strDataBuffer, cbData - 1)
    End If
        
    ' Close the key.
    Call RegCloseKey(hkGlobal)
End Function
Public Sub Process()
Call modRecomputeFiles.Process
End Sub
Public Function GetSolidEdgePath(SolidEdgePath As String) As Boolean
    Dim lResult As Long
    Dim hkGlobal As Long
    Dim dwtype As Long
    Dim cbData As Long
    Dim strDataBuffer As String * 200
    Dim lpReserved As Long
    Dim strTemp As String
    Dim lngDataBuffer As Long
    
    GetSolidEdgePath = True
    
    'Open Registry
    lResult = RegOpenKeyEx(HKEY_LOCAL_MACHINE, "SOFTWARE\Unigraphics Solutions\Solid Edge\Version 9\CurrentVersion", 0, KEY_READ, hkGlobal)
    If lResult <> ERROR_SUCCESS Then
        GetSolidEdgePath = False
        Exit Function
    End If

    'Read INI Path
    cbData = Len(strDataBuffer)
    lResult = RegQueryValueEx(hkGlobal, "PathName", lpReserved, dwtype, ByVal strDataBuffer, cbData)
    If lResult <> ERROR_SUCCESS Then
        GetSolidEdgePath = False
       ' Exit Function
    Else
        SolidEdgePath = Left(strDataBuffer, cbData - 1)
    End If
        
    ' Close the key.
    Call RegCloseKey(hkGlobal)
End Function
Public Function GetDocumentSize(Filename As String) As Long
    Dim FileNum    As Integer
    
    
    ' Get a new file number
    FileNum = FreeFile
    
    ' Open the file
    Open Filename For Input As FileNum
    
    ' Get the Length
    GetDocumentSize = LOF(FileNum)
    
    ' Close the file
    Close FileNum
End Function
Function FileExists(TestFile As String) As Boolean

Dim value As Boolean
Dim ret As String

On Error Resume Next
ret = FileDateTime(TestFile)
value = Err.Number = 0
If Err.Number <> 0 Then
    Debug.Print Err.Number
    Debug.Print Err.Description
End If
FileExists = value

End Function

Public Sub Status(Optional Message As Variant, Optional Filename As Variant)
    ' Check to see if a message was passed in the argument.
    If IsMissing(Message) Then
        ' Turn off the display of the form.
        frmProcessing.Visible = False
    Else
        ' Set up the text to display.
        frmProcessing.lblFileCurrentlyOpen.Caption = Filename
        frmProcessing.lblProcessing.Caption = Message
        
        ' Display the form.
        frmProcessing.Visible = True
        
        ' Force a refresh.
        frmProcessing.Refresh
        DoEvents
    End If
End Sub

Public Sub ReadFileNamesFromDirectory(ByVal FilePath As String, intFileNameCount As Integer, strFileNames() As String)
    Dim I As Integer
    Dim strDirList() As String
    Dim intDirCount As Integer
    
    ' Uses a directory and file list control to get a listing of files
    ' and directories for a specific directory.  Set the controls
    ' to point to the specified directory.
    frmOpenFiles.dirList.Path = FilePath
    frmOpenFiles.filList.Path = FilePath
    frmOpenFiles.filList.Pattern = "*.par;*.psm"
    'debug.Print "filepath is " & FilePath
    ' If there are any subdirectories in the current directory save their
    ' names in an array so they can be processed below.
    If frmOpenFiles.dirList.ListCount > 0 Then
        ' Allocate memory to store the directories.
        ReDim strDirList(1 To frmOpenFiles.dirList.ListCount)
        
        ' Set the counter.
        intDirCount = frmOpenFiles.dirList.ListCount
        
        ' Save the directory names into the array.
        For I = 0 To frmOpenFiles.dirList.ListCount - 1
            strDirList(I + 1) = frmOpenFiles.dirList.List(I)
        Next
    End If
    
    ' If there are any files in the current directory save their names
    ' into the filename array.
    If frmOpenFiles.filList.ListCount > 0 Then
  '  Debug.Print "inside sub list count is " & filList.ListCount
  '  Debug.Print "inside sub file list count is " & filFiles.ListCount
        ' Allocate more space in the filename array to store the filenames.
        ReDim Preserve strFileNames(1 To intFileNameCount + frmOpenFiles.filList.ListCount)
        
        ' Save all the filenames of the files in the current directory
        ' into the filename array.
        For I = 0 To frmOpenFiles.filList.ListCount - 1
        '    Debug.Print "I = " & I
            intFileNameCount = intFileNameCount + 1
            strFileNames(intFileNameCount) = frmOpenFiles.filList.Path & "\" & frmOpenFiles.filList.List(I)
       '     Debug.Print "strFilenames is " & strFileNames(intFileNameCount)
        Next
    End If
    
    ' Loop through subdirectories of the current directory and get their files.
    For I = 1 To intDirCount
        ' Recursively call this subroutine.
        Call ReadFileNamesFromDirectory(strDirList(I), intFileNameCount, strFileNames)
    Next
End Sub

Public Sub BuildArrayFromLogFile(intFileNameCount As Integer)
    
    Dim Cnt As Integer
    Dim P As Integer
    Dim I As Integer
    Dim OpenCount As Integer
    Dim MyArray() As String
    Dim MyFile As String
    Dim Black As String

        For P = 0 To frmOpenFiles.filFiles.ListCount - 1
            If frmOpenFiles.filFiles.Selected(P) Then
                intFileNameCount = intFileNameCount + 1
                MyFile = frmOpenFiles.filFiles.Path & "\" & frmOpenFiles.filFiles.List(P)
            End If
        Next
        Debug.Print "I selected " & MyFile & " to process from."

        Open MyFile For Input As #1   ' Open file for input.

        'this DoLoop will count number of entries in log file and redimension array
        Do While Not EOF(1) ' Check for end of file.
            Line Input #1, Black
            Cnt = Cnt + 1
            Debug.Print Cnt, " ", Black
        Loop
        Close #1
        ReDim strFileNames(Cnt)
        I = 0

        Open MyFile For Input As #1
        Do While Not EOF(1) ' Check for end of file.
            On Error Resume Next
            I = I + 1
            Line Input #1, strFileNames(I)    ' Read line of data.
            Debug.Print strFileNames(I)   ' Print to Debug window.
        Loop
        Close #1    ' Close file.
        intFileNameCount = I
End Sub


Attribute VB_Name = "modOpenSave"
Option Explicit


' Declarations used to force the window to stay on top of the other windows.
Declare Function SetWindowPos Lib "user32" (ByVal hWnd As Long, _
                                            ByVal hWndInsertAfter As Long, _
                                            ByVal X As Long, _
                                            ByVal Y As Long, _
                                            ByVal cx As Long, _
                                            ByVal cy As Long, _
                                            ByVal wFlags As Long) As Long

Public Const HWND_TOPMOST = -1
Public Const SWP_NOMOVE = &H2
Public Const SWP_NOSIZE = &H1

' Declarations used to read the registry.
Public Const SYNCHRONIZE& = &H100000
Public Const KEY_NOTIFY& = &H10
Public Const KEY_ENUMERATE_SUB_KEYS& = &H8
Public Const KEY_QUERY_VALUE& = &H1
Public Const READ_CONTROL& = &H20000
Public Const STANDARD_RIGHTS_READ& = READ_CONTROL
Public Const KEY_READ& = ((STANDARD_RIGHTS_READ Or KEY_QUERY_VALUE Or KEY_ENUMERATE_SUB_KEYS Or KEY_NOTIFY) And (Not SYNCHRONIZE))
Public Const HKEY_LOCAL_MACHINE = &H80000002
Public Const ERROR_SUCCESS = 0&

Declare Function RegCloseKey Lib "advapi32" (ByVal hKey As Long) As Long
Declare Function RegOpenKeyEx Lib "advapi32" Alias "RegOpenKeyExA" (ByVal hKey As Long, ByVal lpSubKey As String, ByVal ulOptions As Long, ByVal samDesired As Long, phkResult As Long) As Long
Declare Function RegQueryValueEx Lib "advapi32" Alias "RegQueryValueExA" (ByVal hKey As Long, ByVal lpValueName As String, ByVal lpReserved As Long, lpType As Long, lpData As Any, lpcbData As Long) As Long



Public Const FILE_ATTRIBUTE_ARCHIVE = &H20 'An archive file (which most files are).
Public Const FILE_ATTRIBUTE_COMPRESSED = &H800 'A file residing in a compressed drive or directory.
Public Const FILE_ATTRIBUTE_DIRECTORY = &H10 'A directory instead of a file.
Public Const FILE_ATTRIBUTE_HIDDEN = &H2 'A hidden file, not normally visible to the user.
Public Const FILE_ATTRIBUTE_NORMAL = &H80 'An attribute-less file (cannot be combined with other attributes).
Public Const FILE_ATTRIBUTE_READONLY = &H1 'A read-only file.
Public Const FILE_ATTRIBUTE_SYSTEM = &H4 'A system file, used exclusively by the operating system.




Public Const GENERIC_READ = &H80000000
Public Const OPEN_EXISTING = 3
Public Const INVALID_HANDLE_VALUE = -1
Declare Function CreateFile Lib "kernel32" Alias "CreateFileA" (ByVal lpFileName As String, ByVal dwDesiredAccess As Long, ByVal dwShareMode As Long, ByVal lpSecurityAttributes As Long, ByVal dwCreationDisposition As Long, ByVal dwFlagsAndAttributes As Long, ByVal hTemplateFile As Long) As Long
Declare Function GetFileSize Lib "kernel32" (ByVal hFile As Long, lpFileSizeHigh As Long) As Long


Public Declare Function CreateProcess Lib "kernel32" Alias "CreateProcessA" (ByVal lpApplicationName As String, ByVal lpCommandLine As String, lpProcessAttributes As SECURITY_ATTRIBUTES, lpThreadAttributes As SECURITY_ATTRIBUTES, ByVal bInheritHandles As Long, ByVal dwCreationFlags As Long, lpEnvironment As Any, ByVal lpCurrentDriectory As String, lpStartupInfo As STARTUPINFO, lpProcessInformation As PROCESS_INFORMATION) As Long
Public Declare Function WaitForSingleObject Lib "kernel32" (ByVal hHandle As Long, ByVal dwMilliseconds As Long) As Long
Public Declare Function GetExitCodeProcess Lib "kernel32" (ByVal hProcess As Long, lpExitCode As Long) As Long
Public Declare Function CloseHandle Lib "kernel32" (ByVal hObject As Long) As Long



' Declares used for creating temporary file.
Declare Function GetTempFileName Lib "kernel32" Alias "GetTempFileNameA" (ByVal lpszPath As String, ByVal lpPrefixString As String, ByVal wUnique As Long, ByVal lpTempFileName As String) As Long
Declare Function GetTempPath Lib "kernel32" Alias "GetTempPathA" (ByVal nBufferLength As Long, ByVal lpBuffer As String) As Long
Declare Function lstrlen Lib "kernel32" Alias "lstrlenA" (ByVal lpString As String) As Long
Declare Function GetFullPathName Lib "kernel32" Alias "GetFullPathNameA" (ByVal lpFileName As String, ByVal nBufferLength As Long, ByVal lpBuffer As String, ByVal lpFilePart As String) As Long
Private Const MAX_PATH = 260

Public Enum DocumentTypes
    typPartDocument = 1
    typAssemblyDocument = 2
    typDraftDocument = 3
    typBadDocument = 4
    typWeldmentDocument = 5
End Enum

' Declares used to call the paracis converter for the files containg acisbodies.
Global newFilePath As String
Global ret0 As Integer
Global MsgString As String

Public Type ParacisOptions
    status As Long
    heal_status As Long
    trans_direction As Long '0 X_T->SAT
                            '1 SAT->X_T
                            '2 PAR->X_T or PSM->X_T
    par_save_version As Integer
    acs_save_version As Integer
    par_acis_scale As Double 'Scale value for mm to meter(1000)
    InputFile As String  'Can be X_T, SAT, PAR or PSM
    OutputFile As String 'Can be X_T or SAT
    LogFile As String    'Log Filename
    StrMsg As String     'Message String (Returned from DLL call)
End Type

'Public Declare Function paTranslate Lib "C:\USERS\Ekins\OpenSave\Customer OpenSave\uicalls.dll" (ProcessOptions As ParacisOptions) As Integer
Public Declare Function paTranslate Lib "uicalls.dll" (ProcessOptions As ParacisOptions) As Integer
Public Declare Function GetFileAttributes Lib "kernel32.dll" Alias "GetFileAttributesA" (ByVal lpFileName As String) As Long
Public Declare Function SetFileAttributes Lib "kernel32.dll" Alias "SetFileAttributesA" (ByVal lpFileName As String, ByVal dwFileAttributes As Long) As Long
Public Declare Function GetSystemDirectory Lib "kernel32" _
        Alias "GetSystemDirectoryA" (ByVal lpBuffer As _
        String, ByVal nSize As Long) As Long
        
        Public Type SECURITY_ATTRIBUTES
        nLength As Long
        lpSecurityDescriptor As Long
        bInheritHandle As Long
End Type


Public Type STARTUPINFO
        cb As Long
        lpReserved As String
        lpDesktop As String
        lpTitle As String
        dwX As Long
        dwY As Long
        dwXSize As Long
        dwYSize As Long
        dwXCountChars As Long
        dwYCountChars As Long
        dwFillAttribute As Long
        dwFlags As Long
        wShowWindow As Integer
        cbReserved2 As Integer
        lpReserved2 As Long
        hStdInput As Long
        hStdOutput As Long
        hStdError As Long
End Type
Public Type PROCESS_INFORMATION
        hProcess As Long
        hThread As Long
        dwProcessId As Long
        dwThreadId As Long
End Type

Public Const NORMAL_PRIORITY_CLASS = &H20&
Public Const INFINITE = -1&
Public Const CREATE_NO_WINDOW = &H8000000
Public blnChangedStatus As Boolean
Public lngStatus As Long
Public blnChangedAccess As Boolean
Public lngPermanentAccess As Long
Public strSEStatus As String
Public strSEInstalledPath As String
Public strSEVersion As String




' Forces a window to the top and keeps it on top.
Public Sub WindowToTop(hWnd As Long)
    Call SetWindowPos(hWnd, HWND_TOPMOST, 0, 0, 0, 0, SWP_NOMOVE Or SWP_NOSIZE)
End Sub


Public Function GetTempFile() As String
    Dim C As Long, p As Long, sRet As String, sTemp As String
    Dim PathName As String
    
    PathName = GetTempDir
    
    sRet = String(MAX_PATH, 0)
    GetTempFileName PathName, "", 0, sRet
    GetTempFile = Left(sRet, InStr(1, sRet, 0))
    
    
    sTemp = String(MAX_PATH, 0)
    C = GetFullPathName(Left$(sRet, lstrlen(sRet)), MAX_PATH, sTemp, p)
    GetTempFile = Left$(sRet, C)
End Function


Private Function GetTempDir() As String
    Dim sRet As String, C As Long
    sRet = String(MAX_PATH, 0)
    C = GetTempPath(MAX_PATH, sRet)
    GetTempDir = Left$(sRet, C)
End Function



Public Function GetStatus(File As String) As String
    'july 2004 add function to support processing of Released, baselined or obselete documents. GC
    
    
    Dim objPropertySets As Object
    Dim objProperties As Object
    Dim objProperty As Object
    
    Set objPropertySets = New SolidEdgeFileProperties.PropertySets
    
    If Not (objPropertySets Is Nothing) Then
        With objPropertySets
            .Open File, False
            Set objProperties = .Item("ExtendedSummaryInformation")
            If Not (objProperties Is Nothing) Then
                Set objProperty = objProperties.Item("Status")
                If Not (objProperty Is Nothing) Then
                    GetStatus = GetStatusByID(objProperty.Value)
                End If
            End If
        End With
    End If
    
    Set objProperty = Nothing
    Set objProperties = Nothing
    Set objPropertySets = Nothing
End Function


Public Function GetStatusByID(StatusID As Integer) As String
 'july 2004 add function to support processing of Released, baselined or obselete documents. GC
    
    Select Case StatusID
        Case igStatusAvailable
            GetStatusByID = "Available"
        Case igStatusInWork
            GetStatusByID = "In Work"
        Case igStatusInReview
            GetStatusByID = "In Review"
        Case igStatusReleased
            GetStatusByID = "Released"
        Case igStatusBaselined
            GetStatusByID = "Baselined"
        Case igStatusObsolete
            GetStatusByID = "Obsolete"
    End Select
End Function













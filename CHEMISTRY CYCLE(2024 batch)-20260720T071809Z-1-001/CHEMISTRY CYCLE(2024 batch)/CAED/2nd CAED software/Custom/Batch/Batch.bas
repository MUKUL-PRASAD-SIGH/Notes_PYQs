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
End Enum


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


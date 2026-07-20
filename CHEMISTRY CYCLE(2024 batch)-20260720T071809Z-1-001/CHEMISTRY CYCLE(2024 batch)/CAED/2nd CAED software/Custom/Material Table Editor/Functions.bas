Attribute VB_Name = "Module1"
Option Explicit



    Declare Function SetWindowPos Lib "user32" (ByVal hwnd As Long, _
        ByVal hWndInsertAfter As Long, ByVal X As Long, ByVal Y As Long, _
        ByVal cx As Long, ByVal cy As Long, ByVal wFlags As Long) As Long

    Global Const HWND_TOPMOST = -1
    Global Const SWP_NOACTIVATE = &H10
    Global Const SWP_SHOWWINDOW = &H40
    Global Const SWP_HIDEWINDOW = &H80
    Global Const SWP_NOZORDER = &H4
    Global Const SWP_NOMOVE = &H2
    Global Const SWP_NOREPOSITION = &H200
    Global Const SWP_NOSIZE = &H1
    
Global strXMLFile As String


Sub OnTop(frmForm As Form)

    On Error Resume Next
    SetWindowPos frmForm.hwnd, HWND_TOPMOST, 0, 0, 0, 0, SWP_NOMOVE + SWP_NOSIZE
    
End Sub

Function GetMaterialFile()
 
    On Error Resume Next
    Dim objInstallPath As SEInstallData
    Dim strPath As String
    
    Set objInstallPath = CreateObject("solidedge.installdata")
    
    strPath = objInstallPath.GetInstalledPath
    strPath = strPath & "\material.mtl"
    
    
    If Dir$(strPath) = "" Then
        GetMaterialFile = ""
    Else
        GetMaterialFile = strPath
    End If
    
End Function

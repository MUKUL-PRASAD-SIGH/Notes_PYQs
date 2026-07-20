VERSION 1.0 CLASS
BEGIN
  MultiUse = -1  'True
END
Attribute VB_Name = "Commands"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = False
Attribute VB_Exposed = False
Public m_SEapp As SolidEdgeFramework.Application
Attribute m_SEapp.VB_VarHelpID = -1
Public WithEvents m_addinEvents As SolidEdgeFramework.AddInEvents
Attribute m_addinEvents.VB_VarHelpID = -1
Public m_myAddIn As SolidEdgeFramework.AddIn
Attribute m_myAddIn.VB_VarHelpID = -1
Public m_CommandID As Long
Public m_MacroID As Long
Public m_CommandButton As SolidEdgeFramework.CommandBarButton
Public m_MacroButton As SolidEdgeFramework.CommandBarButton

Option Explicit

' NOTE: If a command bar button has been added to the GUI via the AddCommandBarButton,
' ----  as the Addin is being connected up, then essentially, it behaves slightly
'       different from the non-addin command bar buttons added via automation. The
'       latter fire the CommandBarButtonEvents, but the former only fire AddInEvents

Private Sub m_addinEvents_OnCommand(ByVal nCmdID As Long)

Dim ret As Variant

If nCmdID = 1 Then
    MsgBox "Sample addin command invoked"
    ret = Shell("notepad.exe  command.txt", vbNormalFocus)
Else
    MsgBox "ERROR: OnCommand must NOT be called for a macro"
End If

End Sub

Private Sub m_addinEvents_OnCommandHelp(ByVal hFrameWnd As Long, ByVal uHelpCommand As Long, ByVal nCmdID As Long)
'MsgBox "OnCommandHelp event"
End Sub

Private Sub m_addinEvents_OnCommandUpdateUI(ByVal nCmdID As Long, lCmdFlags As Long, MenuItemText As String, nIDBitmap As Long)
'MsgBox "OnCommandUpdateUI event"
End Sub







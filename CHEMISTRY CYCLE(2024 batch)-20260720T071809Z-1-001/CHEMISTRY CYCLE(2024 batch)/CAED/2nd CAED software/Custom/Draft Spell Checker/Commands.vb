Option Strict Off
Option Explicit On
Friend Class Commands  'This whole class vs2005 and V19

    Public m_SEapp As SolidEdgeFramework.Application
    Public WithEvents m_addinEvents As SolidEdgeFramework.ISEAddInEvents_Event
    Public m_myAddIn As SolidEdgeFramework.AddIn

    Private Sub m_addinEvents_OnCommand(ByVal nCmdID As Integer) Handles m_addinEvents.OnCommand
        ' On Error Resume Next

        Select Case nCmdID

            Case 1  ' Spell Checker Command
                ProcessActiveDraftDocument()



        End Select



    End Sub

    Private Sub m_addinEvents_OnCommandHelp(ByVal hFrameWnd As Integer, ByVal uHelpCommand As Integer, ByVal nCmdID As Integer) Handles m_addinEvents.OnCommandHelp
        'MsgBox "OnCommandHelp event"
    End Sub

    Private Sub m_addinEvents_OnCommandUpdateUI(ByVal nCmdID As Integer, ByRef lCmdFlags As Integer, ByRef MenuItemText As String, ByRef nIDBitmap As Integer) Handles m_addinEvents.OnCommandUpdateUI
        'MsgBox "OnCommandUpdateUI event"
    End Sub
End Class
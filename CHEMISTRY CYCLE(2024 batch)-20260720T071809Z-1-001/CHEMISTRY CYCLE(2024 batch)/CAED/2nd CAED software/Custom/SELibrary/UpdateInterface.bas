Attribute VB_Name = "Update"
Option Explicit
Sub UpdateText()

    On Error Resume Next
    frmSELibrary.Caption = SC_MAIN_CAPTION
    frmSELibrary.cmdDone.Caption = SC_BUTTON_DONE
    frmSELibrary.cmdAdd.Caption = SC_BUTTON_ADD
    frmSELibrary.cmdHelp.Caption = SC_BUTTON_HELP
    
End Sub


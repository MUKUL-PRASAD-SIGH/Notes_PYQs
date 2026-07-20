VERSION 1.0 CLASS
BEGIN
  MultiUse = -1  'True
END
Attribute VB_Name = "clsMouse"
Attribute VB_Creatable = True
Attribute VB_Exposed = True
Attribute VB_Description = "Mouse Test\\nMouse Test"
Option Explicit
'
' This macro class is the mechanism by which Solid Edge communicates
' with the macro.
'
' Declare the form as member data of this class such that each new instance
' of the macro gets its own form.
'
Private mfrmMouse As Form
'
'
' Use the member form such that each new instance of the macro gets its own form.
'
Private Sub Class_Initialize()
    Set mfrmMouse = New frmMouse
End Sub
'
' This function lets Solid Edge communicate with the macro.
'
Sub Command_Initialize(BasicCmd As Object)
    mfrmMouse.igCommand1.Command = BasicCmd
End Sub
'
' This function is where your primary form should be unloaded.
'
Private Sub Class_Terminate()
    Unload mfrmMouse
End Sub

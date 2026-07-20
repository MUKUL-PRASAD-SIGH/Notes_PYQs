VERSION 1.0 CLASS
BEGIN
  MultiUse = -1  'True
  Persistable = 0  'NotPersistable
  DataBindingBehavior = 0  'vbNone
  DataSourceBehavior  = 0  'vbNone
  MTSTransactionMode  = 0  'NotAnMTSObject
END
Attribute VB_Name = "CMain"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = True
Attribute VB_PredeclaredId = False
Attribute VB_Exposed = True
Option Explicit
'
' This class is the mechanism by which the communication is established between Solid
' Edge and this macro.  By default, Solid Edge will create an instance of
' any class that is Public.  IF there is more than one Public class, Solid Edge will ask you
' which one to use on startup.
'
' Upon class initialisation, this class creates an instance of the form that contains a
' "Command Control".  It is this control which actually communicates with Solid Edge.
'

'
' Load the form which contains the Command Control
'
Private Sub Class_Initialize()
    Load frmOptions
End Sub

'
' This function initializes the "Command Control" to let the application communicate
' with the macro.
'
Sub Command_Initialize(BasicCmd As Object)
    frmOptions.igCommand.Command = BasicCmd
End Sub
'
' This function is where your primary form should be unloaded.
'
Private Sub Class_Terminate()
    Unload frmOptions
End Sub

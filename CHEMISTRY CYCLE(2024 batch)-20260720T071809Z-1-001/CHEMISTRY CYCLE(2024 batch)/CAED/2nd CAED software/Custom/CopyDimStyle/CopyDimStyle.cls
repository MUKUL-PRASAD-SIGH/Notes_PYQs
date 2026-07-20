VERSION 1.0 CLASS
BEGIN
  MultiUse = -1  'True
END
Attribute VB_Name = "clsCopyDimStyle"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = True
Attribute VB_PredeclaredId = False
Attribute VB_Exposed = True
Option Explicit

Private Sub Class_Terminate()
    Unload frmCopyDimStyle
End Sub

Public Sub Command_Initialize(BasicCmd As Object)
    ' Connect the command control up to Solid Edge.
    Set frmCopyDimStyle.igCommand1.Command = BasicCmd
    
    ' Display the prompt in the status bar.
    frmCopyDimStyle.igCommand1.Application.StatusBar = "Click on the dimension to copy the style from."
    
    ' Set the locate filter to only locate dimensions.
    frmCopyDimStyle.igMouse1.ClearLocateFilter
    frmCopyDimStyle.igMouse1.AddToLocateFilter igLocateDrivingDimension
End Sub

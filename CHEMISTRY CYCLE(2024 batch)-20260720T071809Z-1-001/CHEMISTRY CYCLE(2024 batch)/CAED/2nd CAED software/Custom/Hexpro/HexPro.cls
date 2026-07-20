VERSION 1.0 CLASS
BEGIN
  MultiUse = -1  'True
END
Attribute VB_Name = "clsHexProfile"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = True
Attribute VB_PredeclaredId = False
Attribute VB_Exposed = True
Attribute VB_Description = "Dynamic Test\\nDynamic"
Option Explicit
'
' This macro class is the mechanism by which the Intergraph application communicates
' with the macro.
'
'
' This function lets the Intergraph application communicate with the macro.
'
Sub Command_Initialize(BasicCmd As Object)
    frmHexProfile.igCommand1.Command = BasicCmd
    
    On Error Resume Next
    If frmHexProfile.igCommand1.Application.ActiveDocument.ActiveSketch Is Nothing Then
        MsgBox "This macro must be run from within a sketching environment."
        frmHexProfile.Hide
        frmHexProfile.igCommand1.Done = True
    End If
    
    ' Get a reference to the UnitsOfMeasure object.
    Set UOM = frmHexProfile.igCommand1.Application.ActiveDocument.UnitsOfMeasure
    
    ' Initialize size
    frmHexProfile.txtSize.Text = UOM.FormatUnit(igUnitDistance, 0.5 * 0.0254)
End Sub
'
' This function is where your primary form should be unloaded.
'
Private Sub Class_Terminate()
    Unload frmHexProfile
End Sub

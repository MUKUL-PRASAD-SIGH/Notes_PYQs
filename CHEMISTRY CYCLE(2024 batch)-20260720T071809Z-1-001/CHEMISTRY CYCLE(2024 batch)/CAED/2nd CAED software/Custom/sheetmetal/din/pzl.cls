VERSION 1.0 CLASS
BEGIN
  MultiUse = -1  'True
END
Attribute VB_Name = "PZL"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = True
Attribute VB_PredeclaredId = False
Attribute VB_Exposed = True
'****************************************************************
'*      PZL OLE Server Class Example for SE-Sheet Metal         *
'*                                                              *
'* This example uses the DIN Standard Bend Equation to          *
'* determine the length of the bend in the flat.                *
'*                                                              *
'* DINBEQ.PZL                                                   *
'****************************************************************
Option Explicit

Private Sub Class_Initialize()
'Called only once when the DLL is first loaded by SE-Sheet Metal
'Initialize default values, Create and Load Data into bend tables etc.
'in this subroutine.

'NOTE: In this example there are no default values to set.
End Sub

Private Sub Class_Terminate()
'Called only once when DLL is unloaded by SE-Sheet Metal
'Set object variables = Nothing and perform other cleanup operations here.

'NOTE: In this example there are no cleanup operations to perform.

End Sub

Public Function PZL(Feature As Object, Thickness As Double, Radius As Double, Angle As Double, Material As String, NF As Double) As Double
'The function arguments and units are defined as follows:
'Feature - The SE-Sheet Metal feature that is being created/updated or flattened.
'Thickness- Material thickness in meters. Defined in tools options
'Radius- Bend radius in meters. Defined by the feature.
'Angle- Sweep angle of the bend in radians. Defined by the feature
'NF- Neutral factor value (No units). Define in tools options and on the feature.
'PZL - Return value of this function. Must be in meters.
'      NOTE: The PZL value that you return to SE-Sheet Metal must be >= 0.000

Dim k As Double 'Correction factor
Dim dErrFix As Double

'Fix for division error bug when calling program from C++
On Error Resume Next
dErrFix = 1# / 2#

On Error GoTo Handle_Error

'Compute correction factor
If Radius <= 0.00001 Then 'Check for Zero bend radius. NOTE: Radius is in meters
  'The factor below is for example purposes only. Modify the value or formula
  'as needed to support your required values for zero bend radii.
    k = 1
ElseIf (Radius / Thickness) > 5 Then
    k = 1
Else
    k = 0.65 + 0.5 * Log(Radius / Thickness) / Log(10)
End If

'Since argument values are in meters, radians etc. and we need to return meters to SE-Sheet Metal no
'unit conversion is required
PZL = (Radius + Thickness * k / 2) * Angle
Exit Function

Handle_Error:
Err.Clear
PZL = (Radius + Thickness * 0.33) * Angle

End Function







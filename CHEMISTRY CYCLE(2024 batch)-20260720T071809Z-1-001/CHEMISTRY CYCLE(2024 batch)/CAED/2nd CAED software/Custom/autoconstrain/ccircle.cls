VERSION 1.0 CLASS
BEGIN
  MultiUse = -1  'True
END
Attribute VB_Name = "CCircle"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = True
Attribute VB_PredeclaredId = False
Attribute VB_Exposed = False
Option Explicit

Public oName As Circle2d
Public oCenter As New CPoint
Public dRadius As Double
Public fOpenCurve As Integer

Private Sub Class_Initialize()
    oCenter.ID = igCircleCenter
    fOpenCurve = False
End Sub

Public Sub GetData()
    Dim X As Double, Y As Double
    
    Call oName.GetCenterPoint(X, Y)
    oCenter.X = X
    oCenter.Y = Y
    
    dRadius = oName.Radius
End Sub

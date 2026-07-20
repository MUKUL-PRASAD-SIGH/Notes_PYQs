VERSION 1.0 CLASS
BEGIN
  MultiUse = -1  'True
END
Attribute VB_Name = "CEllipse"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = True
Attribute VB_PredeclaredId = False
Attribute VB_Exposed = False
Option Explicit

Public oName As EllipticalArc2d
Public oPnt1 As New CPoint
Public oPnt2 As New CPoint
Public oCenter As New CPoint
Public dMinorRadius As Double
Public dMajorRadius As Double
Public fOpenCurve As Integer

Private Sub Class_Initialize()
    oPnt1.ID = igEllipseArcStart
    oPnt2.ID = igEllipseArcEnd
    oCenter.ID = igEllipseCenter
    fOpenCurve = True
End Sub

Public Sub GetData()
    Dim X As Double, Y As Double
    
    Call oName.GetStartPoint(X, Y)
    oPnt1.X = X
    oPnt1.Y = Y
    
    Call oName.GetEndPoint(X, Y)
    oPnt2.X = X
    oPnt2.Y = Y
    
    Call oName.GetCenterPoint(X, Y)
    oCenter.X = X
    oCenter.Y = Y
    
    dMinorRadius = oName.MinorRadius
    dMajorRadius = oName.MajorRadius
End Sub


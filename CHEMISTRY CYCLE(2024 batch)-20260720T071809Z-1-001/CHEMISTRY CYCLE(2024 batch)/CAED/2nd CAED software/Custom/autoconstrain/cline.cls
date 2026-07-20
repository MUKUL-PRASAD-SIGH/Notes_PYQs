VERSION 1.0 CLASS
BEGIN
  MultiUse = -1  'True
END
Attribute VB_Name = "CLine"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = True
Attribute VB_PredeclaredId = False
Attribute VB_Exposed = False
Option Explicit

Public oName As Line2d              'Pointer to Solid Edge line
Public oPnt1 As New CPoint          'First point of line
Public oPnt2 As New CPoint          'Second point oline
Public dLength As Double            'Store length as computed in Solid Edge
Public fOpenCurve As Integer        'Flag that lets user of object know if this is a
                                    'closed or open curve

'
Private Sub Class_Initialize()
    oPnt1.ID = igLineStart
    oPnt2.ID = igLineEnd
    fOpenCurve = True
End Sub

'
Public Function DeltaX()
    DeltaX = oPnt1.x - oPnt2.x
End Function

'
Public Function DeltaY()
    DeltaY = oPnt1.y - oPnt2.y
End Function

'
Public Sub GetData()
    Dim x As Double, y As Double
    
    Call oName.GetStartPoint(x, y)
    oPnt1.x = x
    oPnt1.y = y
    
    Call oName.GetEndPoint(x, y)
    oPnt2.x = x
    oPnt2.y = y
    
    dLength = oName.Length
End Sub

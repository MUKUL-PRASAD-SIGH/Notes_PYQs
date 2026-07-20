VERSION 5.00
Object = "{C9A6C583-3817-11D0-BE4E-080036E87B02}#2.0#0"; "semctl.ocx"
Object = "{C9A6C580-3817-11D0-BE4E-080036E87B02}#2.0#0"; "secctl.ocx"
Begin VB.Form frmHexProfile 
   BorderStyle     =   3  'Fixed Dialog
   Caption         =   "Place Hexagon"
   ClientHeight    =   2085
   ClientLeft      =   1545
   ClientTop       =   2130
   ClientWidth     =   2385
   LinkTopic       =   "Form2"
   MaxButton       =   0   'False
   MinButton       =   0   'False
   PaletteMode     =   1  'UseZOrder
   ScaleHeight     =   2085
   ScaleWidth      =   2385
   ShowInTaskbar   =   0   'False
   StartUpPosition =   2  'CenterScreen
   Begin VB.PictureBox Picture1 
      Appearance      =   0  'Flat
      AutoRedraw      =   -1  'True
      AutoSize        =   -1  'True
      BackColor       =   &H80000005&
      BorderStyle     =   0  'None
      ForeColor       =   &H80000008&
      Height          =   915
      Left            =   225
      Picture         =   "HexPro.frx":0000
      ScaleHeight     =   915
      ScaleWidth      =   2640
      TabIndex        =   1
      Top             =   75
      Width           =   2640
      Begin VB.TextBox txtSize 
         Height          =   285
         Left            =   750
         TabIndex        =   2
         Top             =   300
         Width           =   1170
      End
   End
   Begin VB.CommandButton cmdCancel 
      Caption         =   "Cancel"
      Height          =   465
      Left            =   525
      TabIndex        =   0
      Top             =   1125
      Width           =   1290
   End
   Begin SeCmdLib.igCommand igCommand1 
      Left            =   1860
      Top             =   1140
      _Version        =   131072
      _ExtentX        =   741
      _ExtentY        =   741
      _StockProps     =   0
   End
   Begin SEMseLib.igMouse igMouse1 
      Left            =   60
      Top             =   1140
      _Version        =   262144
      _ExtentX        =   741
      _ExtentY        =   741
      _StockProps     =   64
      EnabledMove     =   -1  'True
   End
   Begin VB.Label Label1 
      Caption         =   "Enter the desired size and click to define the center point."
      Height          =   465
      Left            =   75
      TabIndex        =   3
      Top             =   1650
      Width           =   2265
   End
End
Attribute VB_Name = "frmHexProfile"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Option Explicit

Private Sub cmdCancel_Click()
    MacroDone
End Sub

'
' The primary form should not simply be unloaded.  You should set the Intergraph Command
' Control.Done property to True when you want the form to be unloaded.  Then unload the form in the
' Class_Terminate method.
'
Private Sub Form_QueryUnload(cancel As Integer, unloadmode As Integer)
    If unloadmode = vbFormControlMenu Then
        igCommand1.Done = True
    End If
End Sub
'
' The Activate event is where the macro should show its form if it
' should be displayed.
'
Private Sub igCommand1_Activate()
    ' Show the form
    frmHexProfile.Show
End Sub
'
' The Deactivate event is where the macro should hide its form if it
' was displayed.  The macro should not unload the form here.
' The macro's form should be unloaded in the Class Module Terminate event.
'
Private Sub igCommand1_Deactivate()
    frmHexProfile.Hide
End Sub
'
' The Terminate event is where the macro can clean up any macro specific allocated resources.
'
Private Sub igCommand1_Terminate()
    
End Sub
'
' This subroutine terminates the macro and should be called from the event
' that dismisses your form, for example an OK button.
'
Private Sub MacroDone()
    frmHexProfile.Hide
    igCommand1.Done = True
    End
End Sub

Private Sub igMouse1_MouseDown(ByVal Button As Integer, ByVal Shift As Integer, ByVal x As Double, ByVal y As Double, ByVal z As Double, ByVal Window As Object, ByVal KeyPointType As Long, ByVal Graphic As Object)
    Dim Profile As Object
    Dim Lines As Object
    Dim L(1 To 6) As Object
    Dim HexSize As Double
    Dim SegmentLength As Double
    Dim Relations As Object
    Dim P1(1 To 2) As Double, P2(1 To 2) As Double
    Dim i As Integer
    Dim objDim As Object
    Const PI = 3.14159265358979
    
    ' Get the active sketch to draw on.
    Set Profile = igCommand1.Application.ActiveDocument.ActiveSketch
    
    ' Set a reference to the lines2d and relations2d collections.
    Set Lines = Profile.Lines2d
    Set Relations = Profile.Relations2d
    
    ' Get the size for the hex that was input by the user.
    HexSize = UOM.ParseUnit(igUnitDistance, txtSize.Text)
    
    ' Compute the length of each side of the hexagon.
    SegmentLength = (HexSize / 2) / Cos(30# * PI / 180#)
    
    ' Create the lines for the hexagon.
    P1(1) = -SegmentLength / 2# + x
    P1(2) = -HexSize / 2# + y
    P2(1) = P1(1) + SegmentLength
    P2(2) = P1(2)
    Set L(1) = Lines.AddBy2Points(P1(1), P1(2), P2(1), P2(2))

    P1(1) = SegmentLength + x
    P1(2) = y
    Set L(2) = Lines.AddBy2Points(P2(1), P2(2), P1(1), P1(2))
    
    P2(1) = SegmentLength / 2# + x
    P2(2) = HexSize / 2# + y
    Set L(3) = Lines.AddBy2Points(P1(1), P1(2), P2(1), P2(2))
    
    P1(1) = P2(1) - SegmentLength
    P1(2) = P2(2)
    Set L(4) = Lines.AddBy2Points(P2(1), P2(2), P1(1), P1(2))
   
    P2(1) = -SegmentLength + x
    P2(2) = y
    Set L(5) = Lines.AddBy2Points(P1(1), P1(2), P2(1), P2(2))
    
    P1(1) = -SegmentLength / 2# + x
    P1(2) = -HexSize / 2# + y
    Set L(6) = Lines.AddBy2Points(P2(1), P2(2), P1(1), P1(2))
    
    ' We're through with our Lines variable, so we should release it
    Set Lines = Nothing
    
    ' Connect the lines with relationships.
    Call Relations.AddKeypoint(L(1), igLineEnd, L(2), igLineStart)
    Call Relations.AddKeypoint(L(2), igLineEnd, L(3), igLineStart)
    Call Relations.AddKeypoint(L(3), igLineEnd, L(4), igLineStart)
    Call Relations.AddKeypoint(L(4), igLineEnd, L(5), igLineStart)
    Call Relations.AddKeypoint(L(5), igLineEnd, L(6), igLineStart)
    Call Relations.AddKeypoint(L(6), igLineEnd, L(1), igLineStart)
    
    '
    ' Add additional relationships to fully constrain the hexagon.
    '
    
    ' Add horizontal relations to the top and bottom lines.
    Call Relations.AddHorizontal(L(1))
    Call Relations.AddHorizontal(L(4))
    
    ' Make all the lines equal length.
    For i = 2 To 6
        Call Relations.AddEqual(L(1), L(i))
    Next
    
    ' Place a horizontal align relation between two keypoints.
    Call Relations.AddHorizontalAlign(L(2), igLineEnd, L(5), igLineEnd)
    
    ' We're through with our Relations varible, so we should release it
    Set Relations = Nothing
    
    ' Place angular dimension.
    Set objDim = Profile.Dimensions.AddAngleBetweenObjects(L(1), x, y, 0, False, L(2), x, y, 0, False)
    objDim.Constraint = True
    
    ' Place linear dimension to control the size.
    Set objDim = Profile.Dimensions.AddDistanceBetweenObjects(L(1), -SegmentLength / 2# + x, -HexSize / 2# + y, 0, True, _
                                                            L(4), -SegmentLength / 2# + x, HexSize / 2# + y, 0, True)
    objDim.Constraint = True
    
    ' We're through with our objDim variable, so we should release it
    Set objDim = Nothing
    
    ' ...and the Profile variable
    Set Profile = Nothing
    
    ' ...and the array of lines
    For i = 1 To 6
        Set L(i) = Nothing
    Next i
    
End Sub


Private Sub txtSize_KeyDown(KeyCode As Integer, Shift As Integer)
    If KeyCode = 13 Then
        cmdCancel.SetFocus
        KeyCode = 0
    End If
End Sub

Private Sub txtSize_LostFocus()
  Dim HexSize As Double

  'Turn on error handling.
  On Error Resume Next
  HexSize = UOM.ParseUnit(igUnitDistance, txtSize.Text)
  If Err Then
    'Set focus back to text field.
    txtSize.SetFocus
    'Display error.
    MsgBox "Invalid unit keyin"
    Exit Sub
  End If

  'Turn off error handling.
  On Error GoTo 0

  'Assign correct text to the control’s Text property
  txtSize.Text = UOM.FormatUnit(igUnitDistance, HexSize)
End Sub



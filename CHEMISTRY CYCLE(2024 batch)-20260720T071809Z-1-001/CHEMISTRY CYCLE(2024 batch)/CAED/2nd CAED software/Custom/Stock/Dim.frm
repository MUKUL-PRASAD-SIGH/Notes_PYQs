VERSION 5.00
Begin VB.Form frmDim 
   BorderStyle     =   3  'Fixed Dialog
   Caption         =   "Input Dimensions"
   ClientHeight    =   3900
   ClientLeft      =   4260
   ClientTop       =   2445
   ClientWidth     =   7110
   LinkTopic       =   "Form1"
   MaxButton       =   0   'False
   MinButton       =   0   'False
   PaletteMode     =   1  'UseZOrder
   ScaleHeight     =   3900
   ScaleWidth      =   7110
   ShowInTaskbar   =   0   'False
   Begin VB.TextBox Text2 
      Height          =   285
      Left            =   5880
      TabIndex        =   2
      Top             =   1560
      Width           =   1095
   End
   Begin VB.TextBox Text5 
      Height          =   285
      Left            =   5880
      TabIndex        =   5
      Top             =   2640
      Width           =   1095
   End
   Begin VB.TextBox Text4 
      Height          =   285
      Left            =   5880
      TabIndex        =   4
      Top             =   2280
      Width           =   1095
   End
   Begin VB.TextBox Text3 
      Height          =   285
      Left            =   5880
      TabIndex        =   3
      Top             =   1920
      Width           =   1095
   End
   Begin VB.TextBox Text1 
      Height          =   285
      Left            =   5880
      TabIndex        =   1
      Top             =   1200
      Width           =   1095
   End
   Begin VB.CommandButton cmdDraw 
      Caption         =   "Draw"
      Height          =   375
      Left            =   4200
      TabIndex        =   0
      Top             =   120
      Visible         =   0   'False
      Width           =   975
   End
   Begin VB.Label Label5 
      Alignment       =   2  'Center
      Caption         =   "Label1"
      Height          =   255
      Left            =   5160
      TabIndex        =   10
      Top             =   2640
      Width           =   855
   End
   Begin VB.Label Label4 
      Alignment       =   2  'Center
      Caption         =   "Label1"
      Height          =   255
      Left            =   5040
      TabIndex        =   9
      Top             =   2280
      Width           =   975
   End
   Begin VB.Label Label3 
      Alignment       =   2  'Center
      Caption         =   "Label1"
      Height          =   255
      Left            =   5160
      TabIndex        =   8
      Top             =   1920
      Width           =   855
   End
   Begin VB.Label Label2 
      Alignment       =   2  'Center
      Caption         =   "Label1"
      Height          =   255
      Left            =   5160
      TabIndex        =   7
      Top             =   1560
      Width           =   855
   End
   Begin VB.Label Label1 
      Alignment       =   2  'Center
      Caption         =   "Label1"
      Height          =   255
      Left            =   5160
      TabIndex        =   6
      Top             =   1200
      Width           =   855
   End
   Begin VB.Image Image3 
      Height          =   735
      Left            =   4320
      Picture         =   "Dim.frx":0000
      Stretch         =   -1  'True
      Top             =   2280
      Visible         =   0   'False
      Width           =   735
   End
   Begin VB.Image Image2 
      Height          =   735
      Left            =   4320
      Picture         =   "Dim.frx":38842
      Stretch         =   -1  'True
      Top             =   1440
      Visible         =   0   'False
      Width           =   735
   End
   Begin VB.Image Image1 
      Height          =   615
      Left            =   4320
      Picture         =   "Dim.frx":71084
      Stretch         =   -1  'True
      Top             =   720
      Visible         =   0   'False
      Width           =   735
   End
   Begin VB.Image imgMain 
      Height          =   3495
      Left            =   480
      Stretch         =   -1  'True
      Top             =   0
      Width           =   3615
   End
   Begin VB.Image imgClose 
      Height          =   345
      Left            =   0
      Picture         =   "Dim.frx":A98C6
      Top             =   0
      Visible         =   0   'False
      Width           =   360
   End
End
Attribute VB_Name = "frmDim"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Option Explicit

Private Sub cmdDraw_Click()
    PlaceExtrusion
End Sub

Private Sub Form_Unload(Cancel As Integer)

    Set gobjUOM = Nothing
    Set gobjDocument = Nothing
    Set gobjApplication = Nothing

End Sub


Private Sub imgClose_Click()
    CloseForm
End Sub
Public Sub PlaceExtrusion()
    Dim objProfileSets As Object
    Dim objProfileSet As Object
    Dim objProfiles As Object
    Dim objProfile(1 To 2) As Object
    Dim objRefPlane As Object
    Dim objCircles As Object
    Dim objLines As Object
    Dim objLine1 As Object, objLine2 As Object, objLine3 As Object
    Dim objLine4 As Object, objLine5 As Object, objLine6 As Object
    Dim objRelations As Object
    Dim objModels As Object
    Dim objBase As Object
    Dim intStatus As Integer
    Dim objCircle As Object
    Dim dblHeight As Double
    Dim dblWidth As Double
    Dim dblDepth As Double
    Dim dblRadius As Double
    Dim dblSideWidth As Double
    Dim dblBaseHeight As Double
    Dim dbl2DX As Double, dbl2DY As Double
    

    frmMsgBox.Show
    
    ' Get ProfileSets collection
    Set objProfileSets = gobjDocument.ProfileSets
    
    ' Add a ProfileSet
    Set objProfileSet = objProfileSets.Add
    
    ' Release objProfileSets, now that we're through with it
    Set objProfileSets = Nothing
    
    ' Get the Profiles collection
    Set objProfiles = objProfileSet.Profiles
    
    ' Release objProfileSet, now that we're throug with it
    Set objProfileSet = Nothing
    
    ' Create a reference plane
    Set objRefPlane = gobjDocument.RefPlanes.AddParallelByDistance( _
                        ParentPlane:=gobjDocument.RefPlanes(3), _
                        Distance:=0, _
                        NormalSide:=igNormalSide, _
                        Local:=True)
    
    ' Add a profile
    If gstrActiveStock = "Cylinder" Then
        frmMsgBox.Label1 = "Drawing a cylinder in profile..."
        DoEvents

        ' Validate that the user input is valid.
        If Text1.Text <> "" Then
            dblRadius = gobjUOM.ParseUnit(igUnitDistance, Text1.Text)
        Else
            MsgBox "Invalid Dimension for Radius...  Aborting.", vbCritical, "Stock Wizard"
            End
        End If
        
        If Text2.Text <> "" Then
            dblDepth = gobjUOM.ParseUnit(igUnitDistance, Text2.Text)
        Else
            MsgBox "Invalid Dimension for Depth...  Aborting.", vbCritical, "Stock Wizard"
            End
        End If
        
        ' Add the empty profile
        Set objProfile(1) = objProfiles.Add(objRefPlane)
        
        'Convert XYZ zero coordinates from 3d space to 2d space.
        objProfile(1).Convert3DCoordinate 0, 0, 0, dbl2DX, dbl2DY

        ' Get the circles collection
        Set objCircles = objProfile(1).Circles2d
        
        ' Place a circle
        Set objCircle = objCircles.AddByCenterRadius(dbl2DX, dbl2DY, dblRadius)
        
        ' Release objCircles, now that we're through with it
        Set objCircles = Nothing
        
        ' End the profile
        intStatus = objProfile(1).End(igProfileClosed)
    ElseIf gstrActiveStock = "Brace" Then
        frmMsgBox.Label1 = "Drawing a brace in profile..."
        DoEvents

        ' Validate that the user input is valid.
        If Text1.Text <> "" Then
            dblHeight = gobjUOM.ParseUnit(igUnitDistance, Text1.Text)
        Else
            MsgBox "Invalid Dimension for Height...  Aborting.", vbCritical, "Stock Wizard"
            End
        End If
        
        If Text2.Text <> "" Then
            dblWidth = gobjUOM.ParseUnit(igUnitDistance, Text2.Text)
        Else
            MsgBox "Invalid Dimension for Width...  Aborting.", vbCritical, "Stock Wizard"
            End
        End If
        
        If Text3.Text <> "" Then
            dblDepth = gobjUOM.ParseUnit(igUnitDistance, Text3.Text)
        Else
            MsgBox "Invalid Dimension for Depth...  Aborting.", vbCritical, "Stock Wizard"
            End
        End If
        
        If Text4.Text <> "" Then
            dblBaseHeight = gobjUOM.ParseUnit(igUnitDistance, Text4.Text)
        Else
            MsgBox "Invalid Dimension for Base Height...  Aborting.", vbCritical, "Stock Wizard"
            End
        End If
        
        If Text5.Text <> "" Then
            dblSideWidth = gobjUOM.ParseUnit(igUnitDistance, Text5.Text)
        Else
            MsgBox "Invalid Dimension for Side Width...  Aborting.", vbCritical, "Stock Wizard"
            End
        End If
        
        ' Add the empty profile
        Set objProfile(1) = objProfiles.Add(objRefPlane)
        
        'Convert XYZ zero coordinates from 3d space to 2d space.
        objProfile(1).Convert3DCoordinate 0, 0, 0, dbl2DX, dbl2DY
        
        ' Get the Lines collection
        Set objLines = objProfile(1).Lines2d
        
        ' Place the lines
        Set objLine1 = objLines.AddBy2Points(dbl2DX, dbl2DY, dbl2DX + dblWidth, dbl2DY)
        Set objLine2 = objLines.AddBy2Points(dbl2DX + dblWidth, dbl2DY, dbl2DX + dblWidth, dbl2DY + dblBaseHeight)
        Set objLine3 = objLines.AddBy2Points(dbl2DX + dblWidth, dbl2DY + dblBaseHeight, dbl2DX + dblSideWidth, dbl2DY + dblBaseHeight)
        Set objLine4 = objLines.AddBy2Points(dbl2DX + dblSideWidth, dbl2DY + dblBaseHeight, dbl2DX + dblSideWidth, dbl2DY + dblHeight)
        Set objLine5 = objLines.AddBy2Points(dbl2DX + dblSideWidth, dbl2DY + dblHeight, dbl2DX, dbl2DY + dblHeight)
        Set objLine6 = objLines.AddBy2Points(dbl2DX, dbl2DY + dblHeight, dbl2DX, dbl2DY)
        
        ' Add the end point constraints
        Set objRelations = objProfile(1).Relations2d
        Call objRelations.AddKeypoint(objLine1, igLineEnd, objLine2, igLineStart)
        Call objRelations.AddKeypoint(objLine2, igLineEnd, objLine3, igLineStart)
        Call objRelations.AddKeypoint(objLine3, igLineEnd, objLine4, igLineStart)
        Call objRelations.AddKeypoint(objLine4, igLineEnd, objLine5, igLineStart)
        Call objRelations.AddKeypoint(objLine5, igLineEnd, objLine6, igLineStart)
        Call objRelations.AddKeypoint(objLine6, igLineEnd, objLine1, igLineStart)
        
        ' End the profile
        intStatus = objProfile(1).End(igProfileClosed)
    ElseIf gstrActiveStock = "Box" Then
        frmMsgBox.Label1 = "Drawing a box in profile..."
        DoEvents

        ' Validate that the user input is valid.
        If Text1.Text <> "" Then
            dblHeight = gobjUOM.ParseUnit(igUnitDistance, Text1.Text)
        Else
            MsgBox "Invalid Dimension for Height...  Aborting.", vbCritical, "Stock Wizard"
            End
        End If
        
        If Text2.Text <> "" Then
            dblWidth = gobjUOM.ParseUnit(igUnitDistance, Text2.Text)
        Else
            MsgBox "Invalid Dimension for Width...  Aborting.", vbCritical, "Stock Wizard"
            End
        End If
        
        If Text3.Text <> "" Then
            dblDepth = gobjUOM.ParseUnit(igUnitDistance, Text3.Text)
        Else
            MsgBox "Invalid Dimension for Depth...  Aborting.", vbCritical, "Stock Wizard"
            End
        End If

        
        ' Add the empty profile
        Set objProfile(1) = objProfiles.Add(objRefPlane)
        
        ' Release objProfiles and objRefPlane, now that we're through with them
        Set objProfiles = Nothing
        Set objRefPlane = Nothing
        
        'Convert XYZ zero coordinates from 3d space to 2d space.
        objProfile(1).Convert3DCoordinate 0, 0, 0, dbl2DX, dbl2DY
        
        ' Get the Lines collection
        Set objLines = objProfile(1).Lines2d
        
        ' Place the lines
        Set objLine1 = objLines.AddBy2Points(dbl2DX, dbl2DY, dbl2DX + dblWidth, dbl2DY)
        Set objLine2 = objLines.AddBy2Points(dbl2DX + dblWidth, dbl2DY, dbl2DX + dblWidth, dbl2DY + dblHeight)
        Set objLine3 = objLines.AddBy2Points(dbl2DX + dblWidth, dbl2DY + dblHeight, dbl2DX, dbl2DY + dblHeight)
        Set objLine4 = objLines.AddBy2Points(dbl2DX, dbl2DY + dblHeight, dbl2DX, dbl2DY)
        
        ' Release objLines, now that we're through with it
        Set objLines = Nothing
        
        ' Add the end point constraints
        Set objRelations = objProfile(1).Relations2d
        Call objRelations.AddKeypoint(objLine1, igLineEnd, objLine2, igLineStart)
        Call objRelations.AddKeypoint(objLine2, igLineEnd, objLine3, igLineStart)
        Call objRelations.AddKeypoint(objLine3, igLineEnd, objLine4, igLineStart)
        Call objRelations.AddKeypoint(objLine4, igLineEnd, objLine1, igLineStart)
        
        ' Release the lines and objRelations, now that we're through with them
        Set objRelations = Nothing
        Set objLine1 = Nothing
        Set objLine2 = Nothing
        Set objLine3 = Nothing
        Set objLine4 = Nothing
        Set objLine5 = Nothing
        Set objLine6 = Nothing
        
        ' End the profile
        intStatus = objProfile(1).End(igProfileClosed)
    End If
    
    ' Add the Feature
    frmMsgBox.Label1 = "Adding Finite Extruded Protrusion..."
    DoEvents

    Set objModels = gobjDocument.Models
    Set objBase = objModels.AddFiniteExtrudedProtrusion(1, objProfile, igSymmetric, dblDepth)
    objProfile(1).Visible = False
    
    ' Release all the rest of our object variables, now that we're through with them
    Set objBase = Nothing
    Set objModels = Nothing
    Set objProfile(1) = Nothing
    Set objProfile(2) = Nothing
    
    Unload frmMsgBox
    Unload frmStock
    Unload Me
    
End Sub

Private Sub Text1_LostFocus()
    FormatUnitInput Text1
End Sub



Private Sub Text2_LostFocus()
    FormatUnitInput Text2
End Sub



Private Sub Text3_LostFocus()
    FormatUnitInput Text3
End Sub



Private Sub Text4_LostFocus()
    FormatUnitInput Text4
End Sub



Private Sub Text5_LostFocus()
    FormatUnitInput Text5
End Sub
Private Sub FormatUnitInput(TextObject As Object)
    Dim dblValue As Double
    
    If TextObject.Text <> "" Then
        'Turn on error handling.
        On Error Resume Next
        dblValue = gobjUOM.ParseUnit(igUnitDistance, TextObject.Text)
        If Err Then
          'Set focus back to text field.
          TextObject.SetFocus
          'Display error.
          MsgBox "Invalid unit keyin"
          Exit Sub
        End If
        
        'Turn off error handling.
        On Error GoTo 0
        
        'Assign correct text to the control’s Text property
        TextObject.Text = gobjUOM.FormatUnit(igUnitDistance, dblValue)
    End If

End Sub

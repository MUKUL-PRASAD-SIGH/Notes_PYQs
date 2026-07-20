VERSION 5.00
Object = "{C9A6C580-3817-11D0-BE4E-080036E87B02}#2.0#0"; "secctld.ocx"
Object = "{C9A6C583-3817-11D0-BE4E-080036E87B02}#2.0#0"; "semctld.ocx"
Begin VB.Form frmMouse 
   BorderStyle     =   3  'Fixed Dialog
   Caption         =   "Mouse Test"
   ClientHeight    =   11052
   ClientLeft      =   960
   ClientTop       =   1428
   ClientWidth     =   7308
   LinkTopic       =   "Form2"
   MaxButton       =   0   'False
   MinButton       =   0   'False
   PaletteMode     =   1  'UseZOrder
   ScaleHeight     =   11052
   ScaleWidth      =   7308
   ShowInTaskbar   =   0   'False
   Begin VB.CommandButton cmdCancel 
      Caption         =   "Cancel"
      Height          =   435
      Left            =   4620
      TabIndex        =   47
      Top             =   8760
      Width           =   1215
   End
   Begin VB.Frame Frame8 
      Caption         =   " Locate Filter "
      Height          =   3075
      Left            =   180
      TabIndex        =   45
      Top             =   6120
      Width           =   3915
      Begin VB.CommandButton cmdClearAll 
         Caption         =   "Clear All"
         Height          =   375
         Left            =   2400
         TabIndex        =   48
         Top             =   300
         Width           =   1395
      End
      Begin VB.ListBox lstLocate 
         Height          =   2544
         Left            =   120
         MultiSelect     =   2  'Extended
         TabIndex        =   46
         Top             =   300
         Width           =   2175
      End
   End
   Begin VB.Frame Frame7 
      Caption         =   " Window Types "
      Height          =   795
      Left            =   4380
      TabIndex        =   42
      Top             =   120
      Width           =   1455
      Begin VB.OptionButton optAllWindows 
         Caption         =   "All"
         Height          =   195
         Left            =   120
         TabIndex        =   44
         Top             =   480
         Width           =   675
      End
      Begin VB.OptionButton optGraphic 
         Caption         =   "Graphic"
         Height          =   195
         Left            =   120
         TabIndex        =   43
         Top             =   240
         Value           =   -1  'True
         Width           =   975
      End
   End
   Begin VB.Frame Frame6 
      Caption         =   " Locate "
      Height          =   1815
      Left            =   2820
      TabIndex        =   36
      Top             =   120
      Width           =   1515
      Begin VB.CheckBox chkInterDoc 
         Caption         =   "InterDoc"
         Height          =   375
         Left            =   120
         TabIndex        =   51
         Top             =   1320
         Width           =   1335
      End
      Begin VB.TextBox txtPause 
         Height          =   285
         Left            =   660
         TabIndex        =   41
         Text            =   "0"
         Top             =   960
         Width           =   675
      End
      Begin VB.OptionButton optQuickPick 
         Caption         =   "QuickPick"
         Height          =   195
         Left            =   120
         TabIndex        =   39
         Top             =   720
         Width           =   1095
      End
      Begin VB.OptionButton optSimple 
         Caption         =   "Simple"
         Height          =   195
         Left            =   120
         TabIndex        =   38
         Top             =   480
         Width           =   975
      End
      Begin VB.OptionButton optLocateOff 
         Caption         =   "Off"
         Height          =   195
         Left            =   120
         TabIndex        =   37
         Top             =   240
         Value           =   -1  'True
         Width           =   855
      End
      Begin VB.Label Label9 
         Alignment       =   1  'Right Justify
         Caption         =   "Pause:"
         Height          =   195
         Left            =   120
         TabIndex        =   40
         Top             =   1020
         Width           =   495
      End
   End
   Begin VB.Frame Frame2 
      Caption         =   " Enabled "
      Height          =   1275
      Left            =   180
      TabIndex        =   5
      Top             =   120
      Width           =   1035
      Begin VB.CheckBox chkEnableMove 
         Caption         =   "Move"
         Height          =   255
         Left            =   120
         TabIndex        =   8
         Top             =   720
         Width           =   855
      End
      Begin VB.CheckBox chkEnableDrag 
         Caption         =   "Drag"
         Height          =   195
         Left            =   120
         TabIndex        =   7
         Top             =   480
         Width           =   855
      End
      Begin VB.CheckBox chkEnableMouse 
         Caption         =   "Mouse"
         Height          =   195
         Left            =   120
         TabIndex        =   6
         Top             =   240
         Value           =   1  'Checked
         Width           =   855
      End
   End
   Begin VB.Frame Frame1 
      Caption         =   " Dynamics Mode "
      Height          =   1275
      Left            =   1260
      TabIndex        =   0
      Top             =   120
      Width           =   1515
      Begin VB.OptionButton optDynRectangle 
         Caption         =   "Rectangle"
         Height          =   195
         Left            =   180
         TabIndex        =   4
         Top             =   960
         Width           =   1155
      End
      Begin VB.OptionButton optDynCircle 
         Caption         =   "Circle"
         Height          =   195
         Left            =   180
         TabIndex        =   3
         Top             =   720
         Width           =   735
      End
      Begin VB.OptionButton optDynLine 
         Caption         =   "Line"
         Height          =   195
         Left            =   180
         TabIndex        =   2
         Top             =   480
         Width           =   735
      End
      Begin VB.OptionButton optDynOff 
         Caption         =   "Off"
         Height          =   195
         Left            =   180
         TabIndex        =   1
         Top             =   240
         Value           =   -1  'True
         Width           =   675
      End
   End
   Begin VB.Frame Frame3 
      Caption         =   " ReadOut "
      Height          =   3915
      Left            =   180
      TabIndex        =   9
      Top             =   2040
      Width           =   5655
      Begin VB.TextBox txtGraphicName 
         Enabled         =   0   'False
         Height          =   285
         Left            =   3900
         TabIndex        =   49
         Top             =   1680
         Width           =   1575
      End
      Begin VB.TextBox txtState 
         Enabled         =   0   'False
         Height          =   285
         Left            =   3900
         TabIndex        =   34
         Top             =   2040
         Width           =   1575
      End
      Begin VB.TextBox txtGraphicObject 
         Height          =   285
         Left            =   3900
         TabIndex        =   33
         Top             =   1320
         Width           =   1575
      End
      Begin VB.TextBox txtKeypointType 
         Height          =   285
         Left            =   3900
         TabIndex        =   31
         Top             =   960
         Width           =   1575
      End
      Begin VB.TextBox txtWindow 
         Height          =   285
         Left            =   2760
         Locked          =   -1  'True
         TabIndex        =   29
         Top             =   2760
         Width           =   2775
      End
      Begin VB.TextBox txtShift 
         Height          =   285
         Left            =   3900
         Locked          =   -1  'True
         TabIndex        =   27
         Top             =   600
         Width           =   1575
      End
      Begin VB.TextBox txtButton 
         Height          =   285
         Left            =   3900
         Locked          =   -1  'True
         TabIndex        =   26
         Top             =   240
         Width           =   1575
      End
      Begin VB.Frame frmUnits 
         Caption         =   " Units "
         Height          =   795
         Left            =   240
         TabIndex        =   21
         Top             =   2880
         Width           =   2175
         Begin VB.OptionButton optUserUnits 
            Caption         =   "User"
            Height          =   195
            Left            =   180
            TabIndex        =   23
            Top             =   480
            Width           =   1755
         End
         Begin VB.OptionButton optModelUnits 
            Caption         =   "Model"
            Height          =   195
            Left            =   180
            TabIndex        =   22
            Top             =   240
            Value           =   -1  'True
            Width           =   1755
         End
      End
      Begin VB.Frame Frame4 
         Caption         =   " Scale "
         Height          =   795
         Left            =   240
         TabIndex        =   18
         Top             =   1980
         Width           =   2175
         Begin VB.OptionButton optWindowCoordinates 
            Caption         =   "Window Coordinates"
            Height          =   195
            Left            =   180
            TabIndex        =   20
            Top             =   480
            Width           =   1815
         End
         Begin VB.OptionButton optModelCoordinates 
            Caption         =   "Model Coordinates"
            Height          =   195
            Left            =   180
            TabIndex        =   19
            Top             =   240
            Value           =   -1  'True
            Width           =   1695
         End
      End
      Begin VB.TextBox txtMouseEvent 
         Height          =   285
         Left            =   180
         Locked          =   -1  'True
         TabIndex        =   17
         Text            =   "None"
         Top             =   1560
         Width           =   2295
      End
      Begin VB.TextBox txtZCoord 
         Height          =   285
         Left            =   420
         Locked          =   -1  'True
         TabIndex        =   15
         Top             =   960
         Width           =   2055
      End
      Begin VB.TextBox txtYCoord 
         Height          =   285
         Left            =   420
         Locked          =   -1  'True
         TabIndex        =   14
         Top             =   600
         Width           =   2055
      End
      Begin VB.TextBox txtXCoord 
         Height          =   285
         Left            =   420
         Locked          =   -1  'True
         TabIndex        =   13
         Top             =   240
         Width           =   2055
      End
      Begin VB.Label Label10 
         Alignment       =   1  'Right Justify
         Caption         =   "Graphic Name:"
         Enabled         =   0   'False
         Height          =   195
         Left            =   2580
         TabIndex        =   50
         Top             =   1740
         Width           =   1275
      End
      Begin VB.Label lblState 
         Alignment       =   1  'Right Justify
         Caption         =   "State:"
         Enabled         =   0   'False
         Height          =   195
         Left            =   2820
         TabIndex        =   35
         Top             =   2100
         Width           =   1035
      End
      Begin VB.Label Label8 
         Alignment       =   1  'Right Justify
         Caption         =   "Graphic Object:"
         Height          =   255
         Left            =   2640
         TabIndex        =   32
         Top             =   1380
         Width           =   1215
      End
      Begin VB.Label lbljunk 
         Caption         =   "KeypointType:"
         Height          =   255
         Left            =   2820
         TabIndex        =   30
         Top             =   1020
         Width           =   1155
      End
      Begin VB.Label Label7 
         Alignment       =   1  'Right Justify
         Caption         =   "Window:"
         Height          =   195
         Left            =   2700
         TabIndex        =   28
         Top             =   2520
         Width           =   735
      End
      Begin VB.Label Label6 
         Alignment       =   1  'Right Justify
         Caption         =   "Shift:"
         Height          =   195
         Left            =   3240
         TabIndex        =   25
         Top             =   660
         Width           =   615
      End
      Begin VB.Label Label5 
         Alignment       =   1  'Right Justify
         Caption         =   "Button:"
         Height          =   195
         Left            =   3120
         TabIndex        =   24
         Top             =   300
         Width           =   735
      End
      Begin VB.Label Label4 
         Caption         =   "Current Mouse Event:"
         Height          =   195
         Left            =   180
         TabIndex        =   16
         Top             =   1320
         Width           =   1575
      End
      Begin VB.Label Label3 
         Alignment       =   1  'Right Justify
         Caption         =   "Z:"
         Height          =   195
         Left            =   180
         TabIndex        =   12
         Top             =   1020
         Width           =   195
      End
      Begin VB.Label Label2 
         Alignment       =   1  'Right Justify
         Caption         =   "Y:"
         Height          =   195
         Left            =   120
         TabIndex        =   11
         Top             =   660
         Width           =   255
      End
      Begin VB.Label Label1 
         Alignment       =   1  'Right Justify
         Caption         =   "X:"
         Height          =   195
         Left            =   120
         TabIndex        =   10
         Top             =   300
         Width           =   255
      End
   End
   Begin SEMseLib.igMouse igMouse1 
      Left            =   4920
      Top             =   6060
      _Version        =   262144
      _ExtentX        =   593
      _ExtentY        =   593
      _StockProps     =   64
   End
   Begin SeCmdLib.igCommand igCommand1 
      Left            =   5400
      Top             =   6060
      _Version        =   131072
      _ExtentX        =   593
      _ExtentY        =   593
      _StockProps     =   0
   End
End
Attribute VB_Name = "frmMouse"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Option Explicit

Private Sub chkEnableDrag_Click()
    ' Enable or disable the appropriate controls depending on
    ' whether the drag is enabled or not.
    If chkEnableDrag.Value = 1 Then
        igMouse1.EnabledDrag = True
        lblState.Enabled = True
        txtState.Enabled = True
    Else
        igMouse1.EnabledDrag = False
        lblState.Enabled = False
        txtState.Enabled = False
    End If
    
End Sub

Private Sub chkEnableMouse_Click()
    ' Enable or disable the mouse.
    If chkEnableMouse.Value = 1 Then
        igMouse1.Enabled = True
    Else
        igMouse1.Enabled = False
    End If
End Sub

Private Sub chkEnableMove_Click()
    ' Enable or disable the mouse move.
    If chkEnableMove.Value = 1 Then
        igMouse1.EnabledMove = True
    Else
        igMouse1.EnabledMove = False
    End If
End Sub

Private Sub chkInterDoc_Click() '08/27/2002, ccprestr, Expose InterDocumentLocate flag in the mouse.exe custom sample.
    
    ' Enable or disable interdocument locate.
    If chkInterDoc.Value = 1 Then
        igMouse1.InterDocumentLocate = True
    Else
        igMouse1.InterDocumentLocate = False
    End If
    
End Sub

Private Sub cmdCancel_Click()
    MacroDone
    End
End Sub

Private Sub cmdClearAll_Click()
    Dim i As Integer
    
    ' Unselect all items in the locate filter list box.
    For i = 0 To lstLocate.ListCount - 1
        lstLocate.Selected(i) = False
    Next
End Sub

'
' This is the primary form for the macro that requires a modeless form.
' Since the form is shown as modeless, the macro must be built
' as an executable (EXE).  It cannot be built as a dynamic link library (DLL).
'
' When you implement the code that dismisses your form, e.g., an OK button, you should
' include the following:
'
'     Set Solid Edge Command Control Done property to True, for example
'         igCommand1.Done = True
'
' Or you can call the MacroDone function implemented in this module.
'
'
'
Private Sub Form_Load()
    ' Add all of the geometry types to locate filter list.
    lstLocate.AddItem "igGeometry2d"            '0
    lstLocate.AddItem "igArc2d"                 '1
    lstLocate.AddItem "igBspCurve2d"            '2
    lstLocate.AddItem "igCircle2d"              '3
    lstLocate.AddItem "igComplexString2d"       '4
    lstLocate.AddItem "igCurve2d"               '5
    lstLocate.AddItem "igEllipse2d"             '6
    lstLocate.AddItem "igLine2d"                '7
    lstLocate.AddItem "igLineString2d"          '8
    lstLocate.AddItem "igPoint2d"               '9
    lstLocate.AddItem "igBoundary2d"            '10
    lstLocate.AddItem "igProfile"               '11
    lstLocate.AddItem "igHole2d"                '12
    lstLocate.AddItem "igPoint"                 '13
    lstLocate.AddItem "igLine"                  '14
    lstLocate.AddItem "igLineString"            '15
    lstLocate.AddItem "igEllipse"               '16
    lstLocate.AddItem "igArc"                   '17
    lstLocate.AddItem "igBspCurve"              '18
    lstLocate.AddItem "igComplexString"         '19
    lstLocate.AddItem "igPlane"                 '20
    lstLocate.AddItem "igCone"                  '21
    lstLocate.AddItem "igSphere"                '22
    lstLocate.AddItem "igTorus"                 '23
    lstLocate.AddItem "igProjectedFace"         '24
    lstLocate.AddItem "igRevolvedFace"          '25
    lstLocate.AddItem "igBspSurfaceFace"        '26
    lstLocate.AddItem "igBoundary"              '27
    lstLocate.AddItem "igRuledFace"             '28
    lstLocate.AddItem "igPolyMesh"              '29
    lstLocate.AddItem "igRefPlane"              '30
    lstLocate.AddItem "igEdge"                  '31
    lstLocate.AddItem "igFace"                  '32
    lstLocate.AddItem "igVertex"                '33
    lstLocate.AddItem "igDrivingDimension"      '34
    lstLocate.AddItem "igFeature"               '35
    lstLocate.AddItem "igRefAxis"               '36
    lstLocate.AddItem "igPart"                  '37
    lstLocate.AddItem "igCenterMark"            '38
    lstLocate.AddItem "igCenterLine"            '39
    lstLocate.AddItem "igCuttingPlane"          '40
    lstLocate.AddItem "igDrawingView"           '41
    lstLocate.AddItem "igDetailEnvelope"        '42
    lstLocate.AddItem "igViewPlane"             '43
    lstLocate.AddItem "igCrossSection"          '44
    lstLocate.AddItem "igLeader"                '45
    lstLocate.AddItem "igDatumFrame"            '46
    lstLocate.AddItem "igDatumTarget"           '47
    lstLocate.AddItem "igFeatureControlFrame"   '48
    lstLocate.AddItem "igSurfaceFinishSymbols"  '49
    lstLocate.AddItem "igWeldSymbols"           '50
    lstLocate.AddItem "igBalloon"               '51
    lstLocate.AddItem "igSmartFrame2d"          '52
    lstLocate.AddItem "igTextBox"               '53
    lstLocate.AddItem "igCallout"               '54
    lstLocate.AddItem "igLocateRelation2d"      '55

End Sub
'
' The primary form should not simply be unloaded.  You should set the Solid Edge Command Control
' Done property to True when you want the form to be unloaded.  Then unload the form in the
' Class_Terminate method.
'
' The Macro Wizard has written this code for you.
'
' Here is the code that sets the Done property.
' Open your class module to see the Class_Terminate method which unloads your form.
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
    Me.Show
End Sub
'
' The Deactivate event is where the macro should hide its form if it
' was displayed.  The macro should not unload the form here.
' The macro's form should be unloaded in the Class Module Terminate event.
'
Private Sub igCommand1_Deactivate()
    Me.Hide
End Sub
'
' The Terminate event is where the macro can clean up any macro specific allocated resources.
'
Private Sub igCommand1_Terminate()
    MacroDone
    End
End Sub
'
' This subroutine terminates the macro and should be called from the event
' that dismisses your form, for example an OK button.
'
Private Sub MacroDone()
    Me.Hide
    igCommand1.Done = True
End Sub

Private Sub igMouse1_MouseClick(ByVal Button As Integer, ByVal Shift As Integer, ByVal x As Double, ByVal y As Double, ByVal z As Double, ByVal Window As Object, ByVal KeyPointType As Long, ByVal Graphic As Object)
    
    ' Display information about the mouse click event.
    txtMouseEvent.Text = "MouseClick"
    Call ReadoutDisplay(Button, Shift, x, y, z, Window, KeyPointType, Graphic)
End Sub

Private Sub igMouse1_MouseDblClick(ByVal Button As Integer, ByVal Shift As Integer, ByVal x As Double, ByVal y As Double, ByVal z As Double, ByVal Window As Object, ByVal KeyPointType As Long, ByVal Graphic As Object)
    ' Display information about the mouse double click event.
    txtMouseEvent.Text = "MouseDblClick"
    Call ReadoutDisplay(Button, Shift, x, y, z, Window, KeyPointType, Graphic)
End Sub

Private Sub igMouse1_MouseDown(ByVal Button As Integer, ByVal Shift As Integer, ByVal x As Double, ByVal y As Double, ByVal z As Double, ByVal Window As Object, ByVal KeyPointType As Long, ByVal Graphic As Object)
    ' Display information about the mouse down click event.
    txtMouseEvent.Text = "MouseDown"
    Call ReadoutDisplay(Button, Shift, x, y, z, Window, KeyPointType, Graphic)
End Sub

Private Sub igMouse1_MouseDrag(ByVal Button As Integer, ByVal Shift As Integer, ByVal x As Double, ByVal y As Double, ByVal z As Double, ByVal Window As Object, ByVal State As Integer, ByVal KeyPointType As Long, ByVal Graphic As Object)
    ' Display information about the mouse drag click event.
    txtMouseEvent.Text = "MouseDrag"
    Call ReadoutDisplay(Button, Shift, x, y, z, Window, KeyPointType, Graphic, State)
End Sub

Private Sub igMouse1_MouseMove(ByVal Button As Integer, ByVal Shift As Integer, ByVal x As Double, ByVal y As Double, ByVal z As Double, ByVal Window As Object, ByVal KeyPointType As Long, ByVal Graphic As Object)
    ' Display information about the mouse move click event.
    txtMouseEvent.Text = "MouseMove"
    Call ReadoutDisplay(Button, Shift, x, y, z, Window, KeyPointType, Graphic)
End Sub

Private Sub igMouse1_MouseUp(ByVal Button As Integer, ByVal Shift As Integer, ByVal x As Double, ByVal y As Double, ByVal z As Double, ByVal Window As Object, ByVal KeyPointType As Long, ByVal Graphic As Object)
    ' Display information about the mouse up click event.
    txtMouseEvent.Text = "MouseUp"
    Call ReadoutDisplay(Button, Shift, x, y, z, Window, KeyPointType, Graphic)
End Sub

Private Sub lstLocate_Click()
    Dim i As Long
    
    ' Clear the locate filter
    igMouse1.ClearLocateFilter
    
    ' Add all items that are selected in the list to the locate filter.
    For i = 0 To lstLocate.ListCount - 1
        ' Check to see if the current item is selected.
        If lstLocate.Selected(i) = True Then
            ' Add the item to the filter.  The items were added to the list box
            ' in the order of the constant values.  For example the first item
            ' in the list has a value of 0, the second is 1, and so on.  This way
            ' the current index is also the value of the selected filter item.
            igMouse1.AddToLocateFilter i
        End If
    Next
End Sub

Private Sub optAllWindows_Click()
    ' Set the valid window type to all windows.
    igMouse1.WindowTypes = igMouseAll
End Sub

Private Sub optGraphic_Click()
    ' Set the valid window type to graphic windows.
    igMouse1.WindowTypes = igMouseGraphic
End Sub

Private Sub optDynCircle_Click()
    ' Set the dynamics to display a circle.
    igMouse1.DynamicsMode = igDynamicsCircleByCenter
End Sub

Private Sub optDynLine_Click()
    ' Set the dynamics to display a line.
    igMouse1.DynamicsMode = igDynamicsLine
End Sub

Private Sub optDynOff_Click()
    ' Turn off the dynamics.
    igMouse1.DynamicsMode = igDynamicsOff
End Sub

Private Sub optDynRectangle_Click()
    ' Set the dynamics to display a rectangle.
    igMouse1.DynamicsMode = igDynamicsRectangle
End Sub

Private Sub optLocateOff_Click()
    ' Turn off locate.
    igMouse1.LocateMode = igLocateOff
End Sub

Private Sub optQuickPick_Click()
    ' Set locate to QuickPick mode.
    igMouse1.LocateMode = igLocateQuickPick
End Sub

Private Sub optSimple_Click()
    ' Set locate to simple mode.
    igMouse1.LocateMode = igLocateSimple
End Sub

Private Sub optModelCoordinates_Click()
    ' Set so units will be displayed in model coordinates.
    igMouse1.ScaleMode = igMouseModel
    
    ' Enable the units frame so the user can choose to display coordinates user defined or database coordinates.
    frmUnits.Enabled = True
End Sub

Private Sub optWindowCoordinates_Click()
    ' Set so units will be displayed in window coordinates.
    igMouse1.ScaleMode = igMouseWindow
    
    ' Disable the units frame.
    frmUnits.Enabled = False
End Sub

Private Sub ReadoutDisplay(Button As Integer, Shift As Integer, x As Double, y As Double, z As Double, Window As Object, KeyPointType As Long, Graphic As Object, Optional State As Variant)
    Dim UOM As Object
    
    ' Set the display for which button was clicked.
    txtButton.Text = Button
    
    ' Set the display for which keyboard button was down when the mouse was clicked.
    txtShift.Text = Shift
    
    ' Display the name of the window that the mouse was clicked in.
    txtWindow.Text = Window.Caption
    
    ' Display the keypoint type when SmartSketch is being used.
    txtKeypointType.Text = KeyPointType
    
    ' Display the position of the mouse.
    If optModelUnits.Value = True Then
        ' Use the default database units, (meters).
        txtXCoord.Text = Format(x, "0.0000000000")
        txtYCoord.Text = Format(y, "0.0000000000")
        txtZCoord.Text = Format(z, "0.0000000000")
    Else
        ' Convert the database units to the current display units defined in the
        ' properties dialog using a method on the UnitsOfMeasure object.
        Set UOM = igCommand1.Application.ActiveDocument.UnitsOfMeasure
        txtXCoord.Text = UOM.FormatUnit(Index:=igUnitDistance, Dbus:=x)
        txtYCoord.Text = UOM.FormatUnit(Index:=igUnitDistance, Dbus:=y)
        txtZCoord.Text = UOM.FormatUnit(Index:=igUnitDistance, Dbus:=z)
    End If
    
    ' Determine if a valid object was selected.
    If Not Graphic Is Nothing Then
        txtGraphicObject.Text = "True"
        
        On Error Resume Next
        txtGraphicName.Text = Graphic.Name
        If (Err.Number <> 0) Then
            Err.Reset
            txtGraphicName.Text = Graphic.Object.Name   '08/27/2002, ccprestr, Perhaps it is a Reference, so try to get the Object and its Name.
        End If
        
        On Error GoTo 0
        
        Set LastObject = Graphic
    Else
        txtGraphicObject.Text = "False"
        Set LastObject = Nothing
    End If
End Sub

Private Sub txtPause_Change()
    ' Change the PauseLocate value.
    igMouse1.PauseLocate = txtPause.Text
End Sub

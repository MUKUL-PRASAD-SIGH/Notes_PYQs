Imports SolidEdgeConstants, SolidEdgeFramework
Imports System.Object

Public Class MouseApp
    Inherits System.Windows.Forms.Form

    Dim objApp As SolidEdgeFramework.Application
    Dim objDoc As Object
    Dim WithEvents objCmd As SolidEdgeFramework.Command
    Dim WithEvents objMouse As SolidEdgeFramework.Mouse

    Private Sub MouseApp_Load(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles MyBase.Load
        objApp = GetObject(, "SolidEdge.Application")
        objDoc = objApp.ActiveDocument
        objCmd = objApp.CreateCommand(seCmdFlag.seNoDeactivate)
        objMouse = objCmd.Mouse
        objCmd.Start()
        optDynOff.Checked = True
        optLocOff.Checked = True
        txtPause.Text = 0
        optWindowGraph.Checked = True
        txtCurMouseEvent.Text = "None"
        optModelCoord.Checked = True
        optModelUnits.Checked = True

        ' Add all of the geometry types to locate filter list.
        lstLocate.Items.Add("seGeometry2d")
        lstLocate.Items.Add("seArc2d")
        lstLocate.Items.Add("seBspCurve2d")
        lstLocate.Items.Add("seCircle2d")
        lstLocate.Items.Add("seComplexString2d")
        lstLocate.Items.Add("seCurve2d")
        lstLocate.Items.Add("seEllipse2d")
        lstLocate.Items.Add("seLine2d")
        lstLocate.Items.Add("seLineString2d")
        lstLocate.Items.Add("sePoint2d")
        lstLocate.Items.Add("seBoundary2d")
        lstLocate.Items.Add("seProfile")
        lstLocate.Items.Add("seHole2d")
        lstLocate.Items.Add("sePoint")
        lstLocate.Items.Add("seLine")
        lstLocate.Items.Add("seLineString")
        lstLocate.Items.Add("seEllipse")
        lstLocate.Items.Add("seArc")
        lstLocate.Items.Add("seBspCurve")
        lstLocate.Items.Add("seComplexString")
        lstLocate.Items.Add("sePlane")
        lstLocate.Items.Add("seCone")
        lstLocate.Items.Add("seSphere")
        lstLocate.Items.Add("seTorus")
        lstLocate.Items.Add("seProjectedFace")
        lstLocate.Items.Add("seRevolvedFace")
        lstLocate.Items.Add("seBspSurfaceFace")
        lstLocate.Items.Add("seBoundary")
        lstLocate.Items.Add("seRuledFace")
        lstLocate.Items.Add("sePolyMesh")
        lstLocate.Items.Add("seRefPlane")
        lstLocate.Items.Add("seEdge")
        lstLocate.Items.Add("seFace")
        lstLocate.Items.Add("seVertex")
        lstLocate.Items.Add("seDrivingDimension")
        lstLocate.Items.Add("seFeature")
        lstLocate.Items.Add("seRefAxis")
        lstLocate.Items.Add("sePart")
        lstLocate.Items.Add("seCenterMark")
        lstLocate.Items.Add("seCenterLine")
        lstLocate.Items.Add("seCuttingPlane")
        lstLocate.Items.Add("seDrawingView")
        lstLocate.Items.Add("seDetailEnvelope")
        lstLocate.Items.Add("seViewPlane")
        lstLocate.Items.Add("seCrossSection")
        lstLocate.Items.Add("seLeader")
        lstLocate.Items.Add("seDatumFrame")
        lstLocate.Items.Add("seDatumTarget")
        lstLocate.Items.Add("seFeatureControlFrame")
        lstLocate.Items.Add("seSurfaceFinishSymbols")
        lstLocate.Items.Add("seWeldSymbols")
        lstLocate.Items.Add("seBalloon")
        lstLocate.Items.Add("seSmartFrame2d")
        lstLocate.Items.Add("seTextBox")
        lstLocate.Items.Add("seCallout")
        lstLocate.Items.Add("seLocateRelation2d")
        lstLocate.Items.Add("seDVLine2d")
        lstLocate.Items.Add("seDVArc2d")
        lstLocate.Items.Add("seDVBSplineCurve2d")
        lstLocate.Items.Add("seDVCircle2d")
        lstLocate.Items.Add("seDVEllipse2d")
        lstLocate.Items.Add("seDVLineString2d")
        lstLocate.Items.Add("seDVEllipticalArc2d")
        lstLocate.Items.Add("seEllipticalArc2d")
        lstLocate.Items.Add("seBoltHoleCircle")
        lstLocate.Items.Add("seKeyPoint")

    End Sub

    Private Sub chkEnableDrag_CheckedChanged(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles chkEnableDrag.CheckedChanged
        If chkEnableDrag.Checked Then
            objMouse.EnabledDrag = True
            lblState.Enabled = True
            txtState.Enabled = True
        Else
            objMouse.EnabledDrag = False
            lblState.Enabled = False
            txtState.Enabled = False
        End If
    End Sub

    Private Sub chkEnableMove_CheckedChanged(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles chkEnableMove.CheckedChanged
        If chkEnableMove.Checked Then
            objMouse.EnabledMove = True
        Else
            objMouse.EnabledMove = False
        End If
    End Sub

    Private Sub optDynOff_CheckedChanged(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles optDynOff.CheckedChanged
        objMouse.DynamicsMode = seDynamicsModes.seDynamicsOff
    End Sub

    Private Sub optDynLine_CheckedChanged(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles optDynLine.CheckedChanged
        objMouse.DynamicsMode = seDynamicsModes.seDynamicsLine
    End Sub

    Private Sub optDynCircle_CheckedChanged(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles optDynCircle.CheckedChanged
        objMouse.DynamicsMode = seDynamicsModes.seDynamicsCircleByCenter
    End Sub

    Private Sub optDynRect_CheckedChanged(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles optDynRect.CheckedChanged
        objMouse.DynamicsMode = seDynamicsModes.seDynamicsRectangle
    End Sub

    Private Sub optLocOff_CheckedChanged(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles optLocOff.CheckedChanged
        objMouse.LocateMode = seLocateModes.seLocateOff
    End Sub

    Private Sub optLocSimple_CheckedChanged(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles optLocSimple.CheckedChanged
        objMouse.LocateMode = seLocateModes.seLocateSimple
    End Sub

    Private Sub optLocQPick_CheckedChanged(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles optLocQPick.CheckedChanged
        objMouse.LocateMode = seLocateModes.seLocateQuickPick
    End Sub

    Private Sub txtPause_TextChanged(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles txtPause.TextChanged
        objMouse.PauseLocate = txtPause.Text
    End Sub

    Private Sub chkInterDoc_CheckedChanged(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles chkInterDoc.CheckedChanged
        If chkInterDoc.Checked Then
            objMouse.InterDocumentLocate = True
        Else
            objMouse.InterDocumentLocate = False
        End If
    End Sub

    Private Sub optWindowGraph_CheckedChanged(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles optWindowGraph.CheckedChanged
        'expects an integer but can find no definition of what it should be.
        objMouse.WindowTypes = 1
    End Sub

    Private Sub optWindowAll_CheckedChanged(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles optWindowAll.CheckedChanged
        'expects an integer but can find no definition of what it should be.
        objMouse.WindowTypes = 0
    End Sub

    Private Sub optModelCoord_CheckedChanged(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles optModelCoord.CheckedChanged
        'expects an integer but can find no definition of what it should be.
        objMouse.ScaleMode = 1
        'set up so units will be displayed in model coordinates.
        'need to figure out what this is
        'frmUnits.Enabled=True
    End Sub

    Private Sub optWindowCoord_CheckedChanged(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles optWindowCoord.CheckedChanged
        'expects an integer but can find no definition of what it should be.
        objMouse.ScaleMode = 0
        'set up so units will be displayed in model coordinates.
        'need to figure out what this is
        'frmUnits.Enabled=False
    End Sub

    Private Sub btnClearAll_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles btnClearAll.Click
        ' Unselect all items in the locate filter list box.
        Dim i As Integer
        For i = 0 To lstLocate.Items.Count - 1
            lstLocate.SetSelected(i, False)
        Next

    End Sub

    Private Sub btnCancel_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles btnCancel.Click
        End
    End Sub

    Private Sub objMouse_MouseClick(ByVal sButton As Short, ByVal sShift As Short, ByVal dX As Double, ByVal dY As Double, ByVal dZ As Double, ByVal pWindowDispatch As Object, ByVal lKeyPointType As Integer, ByVal pGraphicDispatch As Object) Handles objMouse.MouseClick
        txtCurMouseEvent.Text = "Mouse Click"
        Call ReadoutDisplay(sButton, sShift, dX, dY, dZ, pWindowDispatch, lKeyPointType, pGraphicDispatch)
    End Sub

    Private Sub objMouse_MouseDblClick(ByVal sButton As Short, ByVal sShift As Short, ByVal dX As Double, ByVal dY As Double, ByVal dZ As Double, ByVal pWindowDispatch As Object, ByVal lKeyPointType As Integer, ByVal pGraphicDispatch As Object) Handles objMouse.MouseDblClick
        txtCurMouseEvent.Text = "Mouse Dbl Click"
        ReadoutDisplay(sButton, sShift, dX, dY, dZ, pWindowDispatch, lKeyPointType, pGraphicDispatch)
    End Sub

    Private Sub objMouse_MouseDown(ByVal sButton As Short, ByVal sShift As Short, ByVal dX As Double, ByVal dY As Double, ByVal dZ As Double, ByVal pWindowDispatch As Object, ByVal lKeyPointType As Integer, ByVal pGraphicDispatch As Object) Handles objMouse.MouseDown
        txtCurMouseEvent.Text = "Mouse Down"
        ReadoutDisplay(sButton, sShift, dX, dY, dZ, pWindowDispatch, lKeyPointType, pGraphicDispatch)
    End Sub

    Private Sub objMouse_MouseDrag(ByVal sButton As Short, ByVal sShift As Short, ByVal dX As Double, ByVal dY As Double, ByVal dZ As Double, ByVal pWindowDispatch As Object, ByVal DragState As Short, ByVal lKeyPointType As Integer, ByVal pGraphicDispatch As Object) Handles objMouse.MouseDrag
        txtCurMouseEvent.Text = "Mouse Drag"
        ReadoutDisplay(sButton, sShift, dX, dY, dZ, pWindowDispatch, lKeyPointType, pGraphicDispatch)
    End Sub

    Private Sub objMouse_MouseMove(ByVal sButton As Short, ByVal sShift As Short, ByVal dX As Double, ByVal dY As Double, ByVal dZ As Double, ByVal pWindowDispatch As Object, ByVal lKeyPointType As Integer, ByVal pGraphicDispatch As Object) Handles objMouse.MouseMove
        txtCurMouseEvent.Text = "Mouse Move"
        ReadoutDisplay(sButton, sShift, dX, dY, dZ, pWindowDispatch, lKeyPointType, pGraphicDispatch)
    End Sub

    Private Sub objMouse_MouseUp(ByVal sButton As Short, ByVal sShift As Short, ByVal dX As Double, ByVal dY As Double, ByVal dZ As Double, ByVal pWindowDispatch As Object, ByVal lKeyPointType As Integer, ByVal pGraphicDispatch As Object) Handles objMouse.MouseUp
        txtCurMouseEvent.Text = "Mouse Up"
        ReadoutDisplay(sButton, sShift, dX, dY, dZ, pWindowDispatch, lKeyPointType, pGraphicDispatch)
    End Sub

    Private Sub lstLocate_SelectedIndexChanged(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles lstLocate.SelectedIndexChanged
        Dim i As Integer
        objMouse.ClearLocateFilter()
        For i = 0 To lstLocate.Items.Count - 1
            If lstLocate.GetSelected(i) = True Then
                objMouse.AddToLocateFilter(i)
            End If
        Next
    End Sub
    Private Sub ReadoutDisplay(ByVal Button As Integer, ByVal Shift As Integer, ByVal X As Double, ByVal Y As Double, ByVal z As Double, ByVal Window As Object, ByVal KeyPointType As Long, ByVal Graphic As Object)
        Dim UOM As Object

        ' Set the display for which button was clicked.
        txtButton.Text = Button

        ' Set the display for which keyboard button was down when the mouse was clicked.
        txtShift.Text = Shift

        ' Display the name of the window that the mouse was clicked in.
        txtWindow.Text = Window.Caption

        ' Display the keypoint type when SmartSketch is being used.
        txtKeypType.Text = KeyPointType

        ' Display the position of the mouse.
        If optModelUnits.Checked = True Then
            ' Use the default database units, (meters).
            txtXCoord.Text = Format(X, "0.0000000000")
            txtYCoord.Text = Format(Y, "0.0000000000")
            txtZCoord.Text = Format(z, "0.0000000000")
        Else
            ' Convert the database units to the current display units defined in the
            ' properties dialog using a method on the UnitsOfMeasure object.
            UOM = objDoc.UnitsOfMeasure
            txtXCoord.Text = UOM.FormatUnit(Index:=SolidEdgeConstants.UnitTypeConstants.igUnitDistance, Dbus:=X)
            txtYCoord.Text = UOM.FormatUnit(Index:=SolidEdgeConstants.UnitTypeConstants.igUnitDistance, Dbus:=Y)
            txtZCoord.Text = UOM.FormatUnit(Index:=SolidEdgeConstants.UnitTypeConstants.igUnitDistance, Dbus:=z)
        End If

        ' Determine if a valid object was selected.
        If Not Graphic Is Nothing Then
            txtGraphicObj.Text = "True"

            On Error Resume Next
            txtGraphicName.Text = Graphic.Name
            On Error GoTo 0

            'LastObject = Graphic
        Else
            txtGraphicObj.Text = "False"
            'LastObject = Nothing
        End If

        ' check for a 3d keypoint
        Dim lFlag As Long
        Dim dX As Double
        Dim dY As Double
        Dim dZ As Double
        Call objMouse.PointOnGraphic(lFlag, dX, dY, dZ)
        txtPointOnGraphicFlag.Text = lFlag
        txtPointOnGraphicX.Text = ""
        txtPointOnGraphicY.Text = ""
        txtPointOnGraphicZ.Text = ""
        txtGraphicType.Text = ""
        If lFlag > 0 Then

            ' display the keypoint
            If optModelUnits.Checked = True Then
                ' Use the default database units, (meters).
                txtPointOnGraphicX.Text = Format(dX, "0.0000000000")
                txtPointOnGraphicY.Text = Format(dY, "0.0000000000")
                txtPointOnGraphicZ.Text = Format(dZ, "0.0000000000")
            Else
                ' Convert the database units to the current display units defined in the
                ' properties dialog using a method on the UnitsOfMeasure object.
                UOM = objDoc.UnitsOfMeasure
                txtPointOnGraphicX.Text = UOM.FormatUnit(Index:=SolidEdgeConstants.UnitTypeConstants.igUnitDistance, Dbus:=X)
                txtPointOnGraphicY.Text = UOM.FormatUnit(Index:=SolidEdgeConstants.UnitTypeConstants.igUnitDistance, Dbus:=Y)
                txtPointOnGraphicZ.Text = UOM.FormatUnit(Index:=SolidEdgeConstants.UnitTypeConstants.igUnitDistance, Dbus:=z)
            End If

            ' check out the graphic object
            If Not Graphic Is Nothing Then
                Select Case Graphic.Type
                    Case SolidEdgeConstants.ObjectType.igPart
                        txtGraphicType.Text = "sePart"
                    Case SolidEdgeConstants.ObjectType.igReference
                        Select Case Graphic.object.Type
                            Case SolidEdgeConstants.ObjectType.igPart
                                txtGraphicType.Text = "seReference::igPart"
                                'Case SolidEdgeConstants.ObjectType.igVertex
                                'txtGraphicType.Text = "seReference::igVertex"
                                'Case SolidEdgeFramework.ObjectType.igEdge
                                'txtGraphicType.Text = "seReference::igEdge"
                            Case SolidEdgeConstants.ObjectType.igReference
                                txtGraphicType.Text = "seReference::igReference"
                            Case Else
                                txtGraphicType.Text = "seReference::something else"
                        End Select
                    Case SolidEdgeConstants.ObjectType.igLine2d
                        txtGraphicType.Text = "seLine2d"
                    Case SolidEdgeConstants.ObjectType.igArc2d
                        txtGraphicType.Text = "seArc2d"
                    Case SolidEdgeConstants.ObjectType.igCircle2d
                        txtGraphicType.Text = "seCircle2d"
                    Case SolidEdgeConstants.ObjectType.igDimension
                        txtGraphicType.Text = "seDimension"
                    Case Else
                        txtGraphicType.Text = Graphic.Type
                End Select
            End If

        End If

    End Sub
End Class

Attribute VB_Name = "modGandT"
Option Explicit

Private Const Pi As Double = 3.14159265358979

Private Enum ArcReturnConstants
    ArcSuccess = 1
    ArcInputIsCircle = 2
    ArcInputIsNotCircular = 3
    ArcUnkownFailure = 4
End Enum

Public Sub Main()
    Dim objApp As Object
    Dim objFoldedDoc As Object
    Dim objFlatDoc As Object
    Dim objModel As Object
    Dim objFaces As Object
    Dim objFace As Object
    Dim objTopFaces() As Object
    Dim dblMinRange(1 To 2) As Double
    Dim dblMaxRange(1 To 2) As Double
    Dim dblNormal(1 To 3) As Double
    Dim iTopFaceCount As Integer
    Dim iOutlineEdgeCount As Integer
    Dim iFoldEdgeCount As Integer
    Dim objOutlineEdges() As Object
    Dim objFoldEdges() As Object
    Dim objEdges As Object
    Dim lgFaceCount As Long
    Dim objSharedFaces(1 To 2) As Object
    Dim iSharedFaceIndex As Integer
    Dim i As Integer
    Dim j As Integer
    Dim k As Integer
    Dim iFilePointer As Integer
    Dim dblStartPoint(1 To 3) As Double
    Dim dblEndPoint(1 To 3) As Double
    Dim dblCenter(1 To 3) As Double
    Dim dblRadius As Double
    Dim dblStartAngle As Double
    Dim dblSweepAngle As Double
    Dim dblMajorAxis(1 To 3) As Double
    Dim DuplicateEdge As Boolean
    Dim dblOrigin(1 To 2) As Double
    Dim StrokeCount As Long
    Dim StrokePoints() As Double
    Dim StrokeParams() As Double



    ' Connect to a running instance of Solid Edge.
    On Error Resume Next
    Set objApp = GetObject(, "SolidEdge.Application")
    If Err Then
        MsgBox "Solid Edge must be running."
        End
    End If
    On Error GoTo 0
    
    ' Make sure a sheetmetal document is open.
    If objApp.ActiveEnvironment <> "SheetMetal" Then
        MsgBox "A Sheet Metal document must be open."
        End
    End If
    
    ' Make sure the document contains a part.
    Set objFoldedDoc = objApp.ActiveDocument
    
    'Test to see if this file has been saved by
    'parsing objFoldedDoc.Name for a .psm extension
    If StrComp(Right$(objFoldedDoc.Name, 4), ".psm", 1) <> 0 Then
        MsgBox "The Sheet Metal document must be saved before continuing."
        End
    End If
    
    'Make sure the document contains a solid model
    If objFoldedDoc.Models.Count = 0 Then
        MsgBox "The Sheet Metal document must contain a part."
        End
    End If
        
    ' Create a new Part document to create the flattened part in.
    Set objFlatDoc = objApp.Documents.Add("SolidEdge.PartDocument", "Normal.par")
    
    ' Place the current sheet metal document into the part document and flatten it.
    Set objModel = objFlatDoc.Models.AddCopiedPart(FileName:=objFoldedDoc.FullName, _
                                    Xscale:=1, Yscale:=1, Zscale:=1, _
                                    MirrorOrFlattenPlane:=objFlatDoc.RefPlanes(1), _
                                    Flatten:=True)
                                    
    If igFeatureFailed = objModel.CopiedParts(1).Status Then
        MsgBox "The Sheet Metal part could not be flattened."
        ' Close the flat sheet metal file without saving.
        objFlatDoc.Close False
        End
    End If
    
    ' Get all of the planar faces in the model.
    Set objFaces = objModel.Body.Faces(FaceType:=igQueryPlane)
    
    ' Allocate memory to store all of the top faces.
    ReDim objTopFaces(1 To objFaces.Count / 2) As Object
    
    ' Find and save all faces whose normal is in the positive Z axis.
    iTopFaceCount = 0
    For Each objFace In objFaces
        ' Get the parametric range of the face.
        Call objFace.GetParamRange(MinParam:=dblMinRange, MaxParam:=dblMaxRange)
        
        ' Get the normal at the min param point.
        Call objFace.GetNormal(NumParams:=1, Params:=dblMinRange, Normals:=dblNormal)
   
        ' Check to see if it's pointed in the positive Z direction.
        If dblNormal(3) > 0.9 Then
            ' Save this face because it's one of the top faces.
            iTopFaceCount = iTopFaceCount + 1
            Set objTopFaces(iTopFaceCount) = objFace
        End If
    Next
    
    ' Allocate space for the edges
    ReDim objOutlineEdges(1 To objModel.Body.Edges(igQueryAll).Count / 2) As Object
    ReDim objFoldEdges(1 To objModel.Body.Edges(igQueryAll).Count / 2) As Object
    
    ' Initialize the counters.
    iOutlineEdgeCount = 0
    iFoldEdgeCount = 0
    
    ' Go through the top faces and collect all of the unique edges.  If any edges
    ' are shared by top faces, then they're saved seperately as fold edges.
    For i = 1 To iTopFaceCount
        ' Get all of the edges of the current face.
        Set objEdges = objTopFaces(i).Edges
        
        ' Check each edge to see if it is shared with another face.
        For j = 1 To objEdges.Count
            ' Get the other face that shares this edge.
            Call objEdges(j).GetFaces(NumFaces:=lgFaceCount, Faces:=objSharedFaces)
            
            ' Get the other face.
            If objSharedFaces(1) Is objTopFaces(i) Then
                iSharedFaceIndex = 2
            Else
                iSharedFaceIndex = 1
            End If
            
            ' Get the parametric range of the face.
            Call objSharedFaces(iSharedFaceIndex).GetParamRange(MinParam:=dblMinRange, MaxParam:=dblMaxRange)
            
            ' Get the normal at the min param point.
            Call objSharedFaces(iSharedFaceIndex).GetNormal(NumParams:=1, Params:=dblMinRange, Normals:=dblNormal)
            
            ' If the normal is pointing in the positive Z direction then the edge is shared with another top face.
            If dblNormal(3) > 0.9 Then
                ' Check to see if this edge is already accounted for.
                DuplicateEdge = False
                For k = 1 To iFoldEdgeCount
                    If objEdges(j) Is objFoldEdges(k) Then
                        DuplicateEdge = True
                        Exit For
                    End If
                Next
                
                If Not DuplicateEdge Then
                    iFoldEdgeCount = iFoldEdgeCount + 1
                    Set objFoldEdges(iFoldEdgeCount) = objEdges(j)
                End If
            Else
                ' The edge is outside edge.
                iOutlineEdgeCount = iOutlineEdgeCount + 1
                Set objOutlineEdges(iOutlineEdgeCount) = objEdges(j)
            End If
        Next
    Next
    
    ' Write out the information to a file.
    iFilePointer = FreeFile
    Open "C:\Temp\SEDump.txt" For Output As #iFilePointer

    Print #iFilePointer, "Edge curves ------------------------"
    For i = 1 To iOutlineEdgeCount
        Select Case objOutlineEdges(i).Geometry.Type
        Case igLine
            Call objOutlineEdges(i).GetEndPoints(StartPoint:=dblStartPoint, EndPoint:=dblEndPoint)
            
            Print #iFilePointer, "   Line"
            Print #iFilePointer, "      Startpoint: " & Format(dblStartPoint(1), "0.00000000") & ", " & Format(dblStartPoint(2), "0.00000000")
            Print #iFilePointer, "      Endpoint: " & Format(dblEndPoint(1), "0.00000000") & ", " & Format(dblEndPoint(2), "0.00000000")
        Case igCircle
            ' Determine if the edge is actually a circle or an arc.
            If objOutlineEdges(i).IsClosed Then
                Call objOutlineEdges(i).Geometry.GetCircleData(CenterPoint:=dblCenter, AxisVector:=dblNormal, Radius:=dblRadius)
                
                Print #iFilePointer, "   Circle"
                Print #iFilePointer, "      Centerpoint: " & Format(dblCenter(1), "0.00000000") & ", " & Format(dblCenter(2), "0.00000000")
                Print #iFilePointer, "      Radius: " & Format(dblRadius, "0.00000000")
            Else
                Call GetArcData(objOutlineEdges(i), True, dblCenter, dblNormal, dblStartPoint, dblEndPoint, _
                                dblStartAngle, dblSweepAngle, dblMajorAxis, dblRadius)
                
                ' Modify the start angle so it is based on the major axis direction.  Since we're only
                ' concerned with the arc in 2D space on the X-Y place, the start angle should be relative
                ' to the x axis instead.
                dblOrigin(1) = 0
                dblOrigin(2) = 0
                dblStartAngle = dblStartAngle + Bearing(dblOrigin, dblMajorAxis)
                
                Print #iFilePointer, "   Arc"
                Print #iFilePointer, "      Centerpoint: " & Format(dblCenter(1), "0.00000000") & ", " & Format(dblCenter(2), "0.00000000")
                Print #iFilePointer, "      Startpoint: " & Format(dblStartPoint(1), "0.00000000") & ", " & Format(dblStartPoint(2), "0.00000000")
                Print #iFilePointer, "      Endpoint: " & Format(dblEndPoint(1), "0.00000000") & ", " & Format(dblEndPoint(2), "0.00000000")
                Print #iFilePointer, "      Start Angle: " & Format(dblStartAngle, "0.00000000")
                Print #iFilePointer, "      Sweep Angle: " & Format(dblSweepAngle, "0.00000000")
                Print #iFilePointer, "      Radius: " & Format(dblRadius, "0.00000000")
            End If
        Case igEllipse, igBSplineCurve
            If objOutlineEdges(i).Geometry.Type = igEllipse Then
                Print #iFilePointer, "   Ellipse (stroked)"
            ElseIf objOutlineEdges(i).Geometry.Type = igBSplineCurve Then
                Print #iFilePointer, "   BSplineCurve (stroked)"
            End If
            
            ' Stroke ellipses and bspline curves.
            Call objOutlineEdges(i).GetStrokeData(Tolerance:=0.001, StrokeCount:=StrokeCount, Points:=StrokePoints, Params:=StrokeParams)
            
            Print #iFilePointer, "      Points: " & StrokeCount
            For j = 1 To StrokeCount
                Print #iFilePointer, "      " & Format(StrokePoints((j - 1) * 3), "0.00000000") & ", " & Format(StrokePoints(((j - 1) * 3) + 1), "0.00000000")
            Next
        End Select
    Next

    Print #iFilePointer, ""
    Print #iFilePointer, "Bend line curves ------------------------"
    For i = 1 To iFoldEdgeCount
        Select Case objFoldEdges(i).Geometry.Type
        Case igLine
            Call objFoldEdges(i).GetEndPoints(StartPoint:=dblStartPoint, EndPoint:=dblEndPoint)
            
            Print #iFilePointer, "   Line"
            Print #iFilePointer, "      Startpoint: " & Format(dblStartPoint(1), "0.00000000") & ", " & Format(dblStartPoint(2), "0.00000000")
            Print #iFilePointer, "      Endpoint: " & Format(dblEndPoint(1), "0.00000000") & ", " & Format(dblEndPoint(2), "0.00000000")
        Case igCircle
            ' Determine if the edge is actually a circle or an arc.
            If objFoldEdges(i).IsClosed Then
                Call objFoldEdges(i).Geometry.GetCircleData(CenterPoint:=dblCenter, AxisVector:=dblNormal, Radius:=dblRadius)
                
                Print #iFilePointer, "   Circle"
                Print #iFilePointer, "      Centerpoint: " & Format(dblCenter(1), "0.00000000") & ", " & Format(dblCenter(2), "0.00000000")
                Print #iFilePointer, "      Radius: " & Format(dblRadius, "0.00000000")
            Else
                Call GetArcData(objFoldEdges(i), True, dblCenter, dblNormal, dblStartPoint, dblEndPoint, _
                                dblStartAngle, dblSweepAngle, dblMajorAxis, dblRadius)
                
                ' Modify the start angle so it is based on the major axis direction.  Since we're only
                ' concerned with the arc in 2D space on the X-Y place, the start angle should be relative
                ' to the x axis instead.
                dblOrigin(1) = 0
                dblOrigin(2) = 0
                dblStartAngle = dblStartAngle + Bearing(dblOrigin, dblMajorAxis)
                
                Print #iFilePointer, "   Arc"
                Print #iFilePointer, "      Centerpoint: " & Format(dblCenter(1), "0.00000000") & ", " & Format(dblCenter(2), "0.00000000")
                Print #iFilePointer, "      Startpoint: " & Format(dblStartPoint(1), "0.00000000") & ", " & Format(dblStartPoint(2), "0.00000000")
                Print #iFilePointer, "      Endpoint: " & Format(dblEndPoint(1), "0.00000000") & ", " & Format(dblEndPoint(2), "0.00000000")
                Print #iFilePointer, "      Start Angle: " & Format(dblStartAngle, "0.00000000")
                Print #iFilePointer, "      Sweep Angle: " & Format(dblSweepAngle, "0.00000000")
                Print #iFilePointer, "      Radius: " & Format(dblRadius, "0.00000000")
            End If
        Case igEllipse, igBSplineCurve
            If objFoldEdges(i).Geometry.Type = igEllipse Then
                Print #iFilePointer, "   Ellipse (stroked)"
            ElseIf objFoldEdges(i).Geometry.Type = igBSplineCurve Then
                Print #iFilePointer, "   BSplineCurve (stroked)"
            End If
            
            ' Stroke ellipses and bspline curves.
            Call objFoldEdges(i).GetStrokeData(Tolerance:=0.001, StrokeCount:=StrokeCount, Points:=StrokePoints, Params:=StrokeParams)
            
            Print #iFilePointer, "      Points: " & StrokeCount
            For j = 1 To StrokeCount
                Print #iFilePointer, "      " & Format(StrokePoints((j - 1) * 3), "0.00000000") & ", " & Format(StrokePoints(((j - 1) * 3) + 1), "0.00000000")
            Next
        End Select
    Next
    
    ' Close the flat sheet metal file without saving.
    objFlatDoc.Close False
    
    ' Close the log file
    Close iFilePointer
    
    MsgBox "Data file written to 'C:\Temp\SEDump.txt'", vbOKOnly
    End
End Sub

'
' Purpose: Given an edge that represents an arc, this function uses the edge information and the geometry data of
'          the underlying circle to compute the arc defintion.  The output is a complete defintion of an arc.
'          (Some of the data is redundent.  For example the start and sweep angles can be computed using the
'          start and end points.)
'
' Arguments: ArcEdge (I) - Edge object.
'            UseFaceNormal (I) - Boolean flag that indicates wether the arc definition is to be returned with
'                                respect to the arc geometry normal or the normal of the face the arc is on.
'            CenterPoint (O) - Array of 3 doubles that define the center point of the arc or circle.
'            NormalVector (O) - Array of 3 doubles that define the normal vector of the arc.
'            StartPoint (O) - Array of 3 doubles that define the start point of the arc.
'            EndPoint (O) - Array of 3 doubles that define the end point of the arc.
'            StartAngle - Double value that defines the start angle.
'            SweepAngle - Double value that defines the sweep angle.
'            MajorAxis - Array of 3 double that define the major axis vector of the arc.  This defines the
'                        zero angle for the start and sweep angles.
'            Radius - Double value that defines the radius of the arc.
'
' Return: The return value can be one of the following constants from the ArcReturnConstants enum.
'    ArcSuccess = 1
'    ArcInputIsCircle = 2
'    ArcInputIsNotCircular = 3
'    ArcUnkownFailure = 4
'
Private Function GetArcData(ArcEdge As Object, UseFaceNormal As Boolean, CenterPoint() As Double, NormalVector() As Double, StartPoint() As Double, EndPoint() As Double, StartAngle As Double, SweepAngle As Double, MajorAxis() As Double, Radius As Double) As ArcReturnConstants
    Dim mStartPnt(1 To 3) As Double
    Dim mEndPnt(1 To 3) As Double
    Dim mTmpPnt(1 To 3) As Double
    Dim mParamExtent(1 To 2) As Double
    Dim mMidParam(1 To 1) As Double
    Dim mMidPnt(1 To 3) As Double
    Dim mTmpVector1(1 To 3) As Double
    Dim mTmpVector2(1 To 3) As Double
    Dim mTmpVector3(1 To 3) As Double
    Dim mLength As Double

    ' Make sure the edge is a circle.
    If ArcEdge.Geometry.Type <> igCircle Then
        GetArcData = ArcInputIsNotCircular
        Exit Function
    End If

    ' Check to see if it is a full circle by seeing if
    ' the start and end vertices of the edge are the same.
    If ArcEdge.StartVertex Is ArcEdge.EndVertex Then
        ' Fill in the information we do know about a circle.
        Call ArcEdge.Geometry.GetCircleData(CenterPoint, NormalVector, Radius)
        If UseFaceNormal Then
            Call GetParallelFaceNormal(ArcEdge, NormalVector)
        End If

        GetArcData = ArcInputIsCircle
        Exit Function
    End If

    ' Get the circle information.
    Call ArcEdge.Geometry.GetCircleData(CenterPoint, NormalVector, Radius)
    If UseFaceNormal Then
        Call GetParallelFaceNormal(ArcEdge, NormalVector)
    End If
    
    ' Get the start and end points from the edge.
    Call ArcEdge.GetEndPoints(mStartPnt, mEndPnt)

    ' Get a point on the arc between the start and end points.
    Call ArcEdge.GetParamExtents(mParamExtent(1), mParamExtent(2))
    mMidParam(1) = (mParamExtent(1) + mParamExtent(2)) / 2
    Call ArcEdge.GetPointAtParam(1, mMidParam, mMidPnt)

    ' Check to make sure the flow of the arc is CCW from the start to end point.
    mTmpVector1(1) = mEndPnt(1) - CenterPoint(1)
    mTmpVector1(2) = mEndPnt(2) - CenterPoint(2)
    mTmpVector1(3) = mEndPnt(3) - CenterPoint(3)

    mTmpVector2(1) = mMidPnt(1) - CenterPoint(1)
    mTmpVector2(2) = mMidPnt(2) - CenterPoint(2)
    mTmpVector2(3) = mMidPnt(3) - CenterPoint(3)
    Call VectorCrossProduct(mTmpVector1, mTmpVector2, mTmpVector3)
    Call Normalize(mTmpVector3)

    If VectorDotProduct(NormalVector, mTmpVector3) > 0 Then
        ' The arc is Clockwise so reverse the start and end points.
        mTmpPnt(1) = mStartPnt(1)
        mTmpPnt(2) = mStartPnt(2)
        mTmpPnt(3) = mStartPnt(3)
        
        mStartPnt(1) = mEndPnt(1)
        mStartPnt(2) = mEndPnt(2)
        mStartPnt(3) = mEndPnt(3)
        
        mEndPnt(1) = mTmpPnt(1)
        mEndPnt(2) = mTmpPnt(2)
        mEndPnt(3) = mTmpPnt(3)
    End If

    ' Calculate the sweep of the arc.
    mTmpVector1(1) = mStartPnt(1) - CenterPoint(1)
    mTmpVector1(2) = mStartPnt(2) - CenterPoint(2)
    mTmpVector1(3) = mStartPnt(3) - CenterPoint(3)
    Call Normalize(mTmpVector1)

    mTmpVector2(1) = mEndPnt(1) - CenterPoint(1)
    mTmpVector2(2) = mEndPnt(2) - CenterPoint(2)
    mTmpVector2(3) = mEndPnt(3) - CenterPoint(3)
    Call Normalize(mTmpVector2)
    Call VectorCrossProduct(mTmpVector1, mTmpVector2, mTmpVector3)
    mLength = VectorLength(mTmpVector3)

    ' Set the sign of the length based on whether it's in the same direction as the normal or not.
    If VectorDotProduct(NormalVector, mTmpVector3) < 0 Then
        mLength = -mLength
    End If

    If VectorDotProduct(mTmpVector1, mTmpVector2) >= 0 Then
        ' The second vector is pointing in the same direction as the first so
        ' the angle is in either the 1st or 4th quadrants.
        SweepAngle = (2 * Pi) + ArcSin(mLength)
    Else
        ' The vectors are pointing in opposite directions so the angle
        ' is in either the 2nd or 3rd quadrants.
        SweepAngle = Pi - ArcSin(mLength)
    End If

    If SweepAngle > (2 * Pi) Then
        SweepAngle = SweepAngle - (2 * Pi)
    End If

    StartAngle = 0

    MajorAxis(1) = mStartPnt(1) - CenterPoint(1)
    MajorAxis(2) = mStartPnt(2) - CenterPoint(2)
    MajorAxis(3) = mStartPnt(3) - CenterPoint(3)

    StartPoint(1) = mStartPnt(1)
    StartPoint(2) = mStartPnt(2)
    StartPoint(3) = mStartPnt(3)

    EndPoint(1) = mEndPnt(1)
    EndPoint(2) = mEndPnt(2)
    EndPoint(3) = mEndPnt(3)

    GetArcData = ArcSuccess
End Function

Private Sub GetParallelFaceNormal(ArcEdge As Object, NormalVector() As Double)
    Dim objFaces(1 To 2) As Object
    Dim dblParamExtent(1 To 2) As Double
    Dim iFaceCount As Long
    Dim dblNormal1(1 To 3) As Double
    Dim dblNormal2(1 To 3) As Double
    Dim dblCenterParam(1 To 2) As Double
    Dim dblArcNormal(1 To 3) As Double
    Dim dblMinRange(1 To 3) As Double
    Dim dblMaxRange(1 To 3) As Double
    

    ' Get the normal of the arc.
    Call ArcEdge.Geometry.GetAxisVector(dblArcNormal)

    ' Get the two faces connected to the edge.
    Call ArcEdge.GetFaces(NumFaces:=iFaceCount, Faces:=objFaces)
    
    ' Get the parametric range of the face.
    Call objFaces(1).GetParamRange(MinParam:=dblMinRange, MaxParam:=dblMaxRange)
    
    ' Compute a center param point.
    dblCenterParam(1) = (dblMinRange(1) + dblMaxRange(1)) / 2
    dblCenterParam(2) = (dblMinRange(2) + dblMaxRange(2)) / 2
    
    ' Get the normal at the min param point.
    Call objFaces(1).GetNormal(NumParams:=1, Params:=dblCenterParam, Normals:=dblNormal1)

    ' Get the parametric range of the face.
    Call objFaces(2).GetParamRange(MinParam:=dblMinRange, MaxParam:=dblMaxRange)
    
    ' Compute a center param point.
    dblCenterParam(1) = (dblMinRange(1) + dblMaxRange(1)) / 2
    dblCenterParam(2) = (dblMinRange(2) + dblMaxRange(2)) / 2
    
    ' Get the normal at the min param point.
    Call objFaces(2).GetNormal(NumParams:=1, Params:=dblCenterParam, Normals:=dblNormal2)

    ' Check to see if it's pointed in the positive Z direction.
    If Abs(VectorDotProduct(dblArcNormal, dblNormal1)) > Abs(VectorDotProduct(dblArcNormal, dblNormal2)) Then
        NormalVector(1) = dblNormal1(1)
        NormalVector(2) = dblNormal1(2)
        NormalVector(3) = dblNormal1(3)
    Else
        NormalVector(1) = dblNormal2(1)
        NormalVector(2) = dblNormal2(2)
        NormalVector(3) = dblNormal2(3)
    End If
End Sub


Public Function VectorLength(InVector() As Double) As Double
    Dim dx As Double, dy As Double, dz As Double
    
    dx = InVector(1)
    dy = InVector(2)
    dz = InVector(3)
    
    VectorLength = Sqr((dx * dx) + (dy * dy) + (dz * dz))
End Function


Public Function VectorDotProduct(Vector1() As Double, Vector2() As Double) As Double
    VectorDotProduct = (Vector1(1) * Vector2(1) + Vector1(2) * Vector2(2) + Vector1(3) * Vector2(3))
End Function


Public Sub VectorCrossProduct(Vector1() As Double, Vector2() As Double, OutVector() As Double)
   OutVector(1) = (Vector1(2) * Vector2(3)) - (Vector1(3) * Vector2(2))
   OutVector(2) = (Vector1(3) * Vector2(1)) - (Vector1(1) * Vector2(3))
   OutVector(3) = (Vector1(1) * Vector2(2)) - (Vector1(2) * Vector2(1))
End Sub

' Normalizes a 3D vector.
Public Function Normalize(Vector() As Double) As Boolean
    Dim XVal As Double
    Dim YVal As Double
    Dim ZVal As Double
    Dim Dist As Double
    
    XVal = Vector(1)
    YVal = Vector(2)
    ZVal = Vector(3)

    Dist = XVal * XVal + YVal * YVal + ZVal * ZVal
    If Dist > 0 Then
        Dist = Sqr(Dist)
        XVal = XVal / Dist
        YVal = YVal / Dist
        ZVal = ZVal / Dist
        Vector(1) = XVal
        Vector(2) = YVal
        Vector(3) = ZVal
        Normalize = True
    Else
        Normalize = False
    End If
End Function


Public Function ArcSin(x As Double) As Double
    If x = -1 Then
        ArcSin = -Pi / 2
    ElseIf x = 1 Then
        ArcSin = Pi / 2
    Else
        ArcSin = Atn(x / Sqr(-x * x + 1))
    End If
End Function


Public Function Arccos(x As Double) As Double
    If x = 1 Then
        Arccos = 0
    ElseIf (x + 1) < 0.000001 Then
        ' X is -1
        Arccos = Pi
    Else
        Arccos = Atn(-x / Sqr(-x * x + 1)) + 2 * (Pi / 4)
    End If
End Function


Public Function Bearing(OriginPoint() As Double, DirPoint() As Double) As Double
    Dim Length As Double
    
    ' Compute distance between the points.
    Length = DistPointPoint2D(OriginPoint, DirPoint)
    
    ' Compute angle of line assuming in first quadrant.
    Bearing = Arccos(Abs(DirPoint(1) - OriginPoint(1)) / Length)
    
    ' Redefine angle based on which quadrant the point is in.
    If DirPoint(1) > OriginPoint(1) And DirPoint(2) >= OriginPoint(2) Then
        ' Second point is in first quadrant.
        Bearing = Bearing
    ElseIf DirPoint(1) <= OriginPoint(1) And DirPoint(2) >= OriginPoint(2) Then
        ' Second point is in second quadrant.
        Bearing = Pi - Bearing
    ElseIf DirPoint(1) <= OriginPoint(1) And DirPoint(2) < OriginPoint(2) Then
        ' Second point is in third quadrant.
        Bearing = Pi + Bearing
    ElseIf DirPoint(1) > OriginPoint(1) And DirPoint(2) < OriginPoint(2) Then
        ' Second point is in fourth quadrant.
        ' Special case where it is very close to zero, set to zero.
        If Abs(Bearing) < 0.0000001 Then
            Bearing = 0
        Else
            Bearing = (2 * Pi) - Bearing
        End If
    End If
End Function

' Computes the distance between two 2D points.
Private Function DistPointPoint2D(Point1() As Double, Point2() As Double)
    Dim dx As Double, dy As Double, dz As Double
    
    dx = Point1(1) - Point2(1)
    dy = Point1(2) - Point2(2)

    DistPointPoint2D = Sqr((dx * dx) + (dy * dy))
End Function



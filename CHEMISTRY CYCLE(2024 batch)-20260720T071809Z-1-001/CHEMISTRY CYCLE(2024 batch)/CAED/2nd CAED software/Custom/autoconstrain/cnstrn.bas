Attribute VB_Name = "Constrain"
'
' This is the module header where declarations global to all function are defined.
' Only initialization logic which is common to all macros in this server
' should be placed in this subroutine.
'

Option Explicit     'Specifies that all variables must be declared with a "Dim" statement
Option Base 1       'Define whether arrays start counting at 0 or 1

'Used to tell system that the relationship being places is gaurenteed
'to be good.  This saves compute time.
Public Const GAURENTEE As Integer = False

'Constraint placement tolerances (0.001 inches and 0.05 deg)
Private Const DISTTOL As Double = 0.001 * 0.0254
Private Const ANGLETOL As Double = 0.01745506492822
Private Const TANTOLVERT As Double = 57.28996163076

'Pointers to SE application objects
Public oApp As Object               'Solid Edge Application
Private Relations As Object         'Collection of 2D realtionships
Private Profile As Object           'Current profile

'Some internal data structures
Private Curves As New Collection    'Collection storing Profile curves in locat data structures
Private oCurve As Object            'Pointer to a curve in the Curves collection
Private oMainForm As Form

'
' This function is the entry point for the OLE server.
' Only initialization logic which is common to all macros in this server
' should be placed in this subroutine.
'
Sub Main()
End Sub
'
' Description:  Examines all the geometric Curves in the active select set and applies
'
'
' Arguments     None
'
' Returns       None
'
' Limitations   Only support connect, tangent, horizontal, and vertical relationships
'
'
Public Sub ConstrainCurves()

    Dim nFirst As Integer, nSecond As Integer
    
    On Error GoTo Err_ConstrainCurves
    
    'Determine the profile to draw on.
    Set Profile = oApp.ActiveDocument.ActiveSketch
    
    'Set references to the collections used.
    Set Relations = Profile.Relations2d
    
    If ReadCurves = False Then
        Exit Sub
    End If
    
    ' Set error trapping so any errors encountered because of bad constraints will be skipped.
    On Error Resume Next
   
    'Determine if lines should have vertical or horizontal constraints
    oApp.StatusBar = "Placing Horizontal and Vertical Relationships"
    For Each oCurve In Curves
        If TypeOf oCurve Is CLine Then
            Call PlaceHorizontalVertical(oCurve)
        End If
    Next oCurve

    ' Check for connectivity (Connect and Tangent constraints)
    oApp.StatusBar = "Placing Connect Relationships"
    For nFirst = 1 To Curves.Count
        For nSecond = nFirst + 1 To Curves.Count
            Call PlaceEndpoints(Curves(nFirst), Curves(nSecond))
        Next nSecond
    Next nFirst
    Call PlaceEndpoints(Curves(Curves.Count), Curves(1))

    ' Check for circle tangency
    oApp.StatusBar = "Placing Tangency Relationships"
    For nFirst = 1 To Curves.Count
        If TypeOf Curves(nFirst) Is CCircle Or TypeOf Curves(nFirst) Is CArc Then
            For nSecond = 1 To Curves.Count
                If nFirst <> nSecond Then
                    Call PlaceTangent(Curves(nFirst), Curves(nSecond))
                End If
            Next nSecond
        End If
    Next nFirst
    
    oApp.StatusBar = ""
    Exit Sub
    
Err_ConstrainCurves:
    oApp.StatusBar = ""
End Sub

'
' Description:  For the active profile, this function reads its curves and calls
'               the AddCurve function to create a local representation.  If a select set
'               exists, only its curves are read, else all curves are read.
'
' Arguments     None
'
'
' Returns       Integer     True -  All Curves were read successfully
'                           False - Some curves were not read
'
' Limitations   Does not read bspline curves or ellipses.  Does process lines, arcs, circles
'               and elliptical arcs.
'
Public Function ReadCurves()
    ' Load Entity array with geometry with objects form select set
    Dim oLine As Line2d
    Dim oArc As Arc2d
    Dim oCircle As Circle2d
    Dim oEllipse As EllipticalArc2d
    Dim SelectSet As Object
    Dim nCnt As Integer
    Dim x As Double, y As Double
    Dim fBadCurve As Integer
    
    On Error GoTo Err_ReadCurves
    
    ReadCurves = True
    
    oApp.StatusBar = "Reading Curves"
    
    Set SelectSet = oApp.ActiveSelectSet
        
    
    If SelectSet.Count = 0 Then
        For Each oLine In Profile.Lines2d
            Call AddCurve(oLine)
        Next oLine
        
        For Each oArc In Profile.Arcs2d
            Call AddCurve(oArc)
        Next oArc
        
        For Each oCircle In Profile.Circles2d
            Call AddCurve(oCircle)
        Next oCircle
        
        For Each oEllipse In Profile.EllipticalArcs2d
            Call AddCurve(oEllipse)
        Next oEllipse
    Else
        For nCnt = 1 To SelectSet.Count
            Call AddCurve(SelectSet(nCnt))
        Next nCnt
        
        ' Remove all Curves from select set
        SelectSet.RemoveAll
    End If

    oApp.StatusBar = ""
    Exit Function
    
Err_ReadCurves:
    fBadCurve = MsgBox("Bad curve encountered, continue processing?", vbYesNo)
    If fBadCurve = vbNo Then
        oApp.StatusBar = ""
        ReadCurves = False
        Exit Function
    Else
        Resume Next
    End If

End Function

'
' Description:  This function creates a local curve object and initializes it to represent
'               a cooresponding curve in the profile.  Among other things, this allows the
'               local curve objects to be used in processing without continually reading
'               data from the profile environment.  In some cases (not all) this speeds
'               processing.
'
' Arguments     oCurve      Object      Must use generic object, don't know what is passed. Could
'                                       make use of polymorphism to allow an explicit type.
'
'
' Returns       Integer     True -  Curve added
'                           False - Curve not added
'
' Limitations   Does not read bspline curves or ellipses.  Does process lines, arcs, circles
'               and elliptical arcs.
'

Public Function AddCurve(oCurve As Object)
    Dim oLine As CLine
    Dim oArc As CArc
    Dim oCircle As CCircle
    Dim oEllipse As CEllipse
    
    AddCurve = True
    
    On Error GoTo Err_AddCurve
    
    Select Case oCurve.Type
        Case igLine2d
            Set oLine = New CLine
            Curves.Add oLine
            Set oLine.oName = oCurve
            oLine.GetData
        Case igArc2d
            Set oArc = New CArc
            Curves.Add oArc
            Set oArc.oName = oCurve
            oArc.GetData
        Case igCircle2d
            Set oCircle = New CCircle
            Curves.Add oCircle
            Set oCircle.oName = oCurve
            oCircle.GetData
        Case igEllipticalArc2d
            Set oEllipse = New CEllipse
            Curves.Add oEllipse
            Set oEllipse.oName = oCurve
            oEllipse.GetData
        Case igBsplineCurve2d
        Case Else
    End Select
    
    Exit Function
    
Err_AddCurve:
    'If any error was encounterd, return false but allow the program to continue execution.
    AddCurve = False
End Function

'
' Description:  Places connect constraints between the two specified curves
'               by checking the minimum distance between keypoints and comparing to a tolerance.
'
' Arguments     oFirst          Curves    Generic structure defining a geometry object.
'               oSecond         Curves    Generic structure defining a geometry object.
'
' Returns       Integer         True - placed
'                               False - not placed
'
' Limitations   Does not check to see if endpoints of an arc are connected to the centerpoint
'               of a circle.
'
Public Function PlaceEndpoints(oFirst As Object, oSecond As Object) As Integer
    On Error GoTo Err_PlaceEndpoints
    
    PlaceEndpoints = True

    'Check to see if "open" curves are endpoint connected.  If the fOpenCurve flag is true then
    'the curve has start and end points.
    If oFirst.fOpenCurve And oSecond.fOpenCurve Then
        If TestCoincident(oFirst.oPnt1, oSecond.oPnt1) Then
            Call Relations.AddKeypoint(oFirst.oName, oFirst.oPnt1.ID, oSecond.oName, oSecond.oPnt1.ID, GAURENTEE)
        ElseIf TestCoincident(oFirst.oPnt1, oSecond.oPnt2) Then
            Call Relations.AddKeypoint(oFirst.oName, oFirst.oPnt1.ID, oSecond.oName, oSecond.oPnt2.ID, GAURENTEE)
        ElseIf TestCoincident(oFirst.oPnt2, oSecond.oPnt1) Then
            Call Relations.AddKeypoint(oFirst.oName, oFirst.oPnt2.ID, oSecond.Element, oSecond.oPnt1.ID, GAURENTEE)
        ElseIf TestCoincident(oFirst.oPnt2, oSecond.oPnt2) Then
            Call Relations.AddKeypoint(oFirst.oName, oFirst.oPnt2.ID, oSecond.oName, oSecond.oPnt2.ID, GAURENTEE)
        End If
        
    'Check to see if circles and arcs are concentric.  The TypeOf function allow the the comparison of an
    'objects class to a class definition.  Can answer the question, is this object of class CLine?
    ElseIf (TypeOf oFirst Is CCircle Or TypeOf oFirst Is CArc) And _
           (TypeOf oSecond Is CCircle Or TypeOf oSecond Is CArc) Then
        If TestCoincident(oFirst.oCenter, oSecond.oCenter) Then
            Call Relations.AddKeypoint(oFirst.oName, oFirst.oCenter.ID, oSecond.oName, oSecond.oCenter.ID, GAURENTEE)
        End If
    End If
    
    'Check to see if line is coincident with an arc or circle centerpoints
    If (TypeOf oFirst Is CCircle Or TypeOf oFirst Is CArc) And TypeOf oSecond Is CLine Then
        If TestCoincident(oFirst.oCenter, oSecond.oPnt1) Then
            Call Relations.AddKeypoint(oFirst.oName, oFirst.oCenter.ID, oSecond.oName, oSecond.oPnt1.ID, GAURENTEE)
        ElseIf TestCoincident(oFirst.oCenter, oSecond.oPnt2) Then
            Call Relations.AddKeypoint(oFirst.oName, oFirst.oCenter.ID, oSecond.oName, oSecond.oPnt2.ID, GAURENTEE)
        End If
    ElseIf (TypeOf oSecond Is CCircle Or TypeOf oSecond Is CArc) And TypeOf oFirst Is CLine Then
        If TestCoincident(oSecond.oCenter, oFirst.oPnt1) Then
            Call Relations.AddKeypoint(oSecond.oName, oSecond.oCenter.ID, oFirst.oName, oFirst.oPnt1.ID, GAURENTEE)
        ElseIf TestCoincident(oSecond.oCenter, oFirst.oPnt2) Then
            Call Relations.AddKeypoint(oSecond.oName, oSecond.oCenter.ID, oFirst.oName, oFirst.oPnt2.ID, GAURENTEE)
        End If
    End If
    
    Exit Function
    
Err_PlaceEndpoints:
    'If any error was encounterd, return false but allow the program to continue execution.
    PlaceEndpoints = False
End Function


'
' Description:  Given a line object, the line is examined based upon an
'               angular tolerace to see if it is horizontal or vertical.
'
' Arguments     oLine               Curves
'
'
' Returns       Integer             True        Relationship is placed
'                                   False       Relationship is not placed
'
' Limitations   None
'
'
Public Function PlaceHorizontalVertical(oLine As CLine) As Integer
    Dim dDeltaX As Double
    Dim dDeltaY As Double
    Dim dSlope As Double
    
    On Error GoTo Err_PlaceHorizontalVertical
    
    'Initialize return value to True
    PlaceHorizontalVertical = True
    
    dDeltaX = oLine.DeltaX
    dDeltaY = oLine.DeltaY
    
    If dDeltaX = 0 Then
        Call Relations.AddVertical(oLine.oName, GAURENTEE)
        PlaceHorizontalVertical = True
    ElseIf dDeltaY = 0 Then
        Call Relations.AddHorizontal(oLine.oName, GAURENTEE)
        PlaceHorizontalVertical = True
    Else
        dSlope = Abs(dDeltaY / dDeltaX)
        If dSlope < ANGLETOL Then
            Call Relations.AddHorizontal(oLine.oName, GAURENTEE)
            PlaceHorizontalVertical = True
        ElseIf dSlope > TANTOLVERT Then
            Call Relations.AddVertical(oLine.oName, GAURENTEE)
            PlaceHorizontalVertical = True
        End If
    End If
    
    Exit Function
    
Err_PlaceHorizontalVertical:
    'If any error was encounterd, return false but allow the program to continue execution.
    PlaceHorizontalVertical = False
    
End Function

'
' Description:  Given at leasst one circle or arc, this routine checks for tangency between two
'               curves.
'
' Arguments     Entity1             Object      Must use generic object, don't know what is passed
'               Entity2             Object      Must use generic object, don't know what is passed
'
' Returns       Integer             True        Relationship is placed
'                                   False       Relationship is not placed
'
' Limitations   None
'
'
Public Function PlaceTangent(Entity1 As Object, Entity2 As Object) As Integer
    Dim dTestLength As Double
    Dim dLineLength As Double
    Dim dMinDist As Double
    Dim dCosine As Double
    Dim oFirst As Object
    Dim oSecond As Object
    
    On Error GoTo Err_PlaceTangent
    
    PlaceTangent = True
    
    If Not TypeOf Entity1 Is CCircle And Not TypeOf Entity2 Is CCircle And _
            Not TypeOf Entity1 Is CArc And Not TypeOf Entity2 Is CArc Then
        PlaceTangent = False
        Exit Function
    End If
        
    If Not TypeOf Entity1 Is CCircle And Not TypeOf Entity1 Is CArc Then
        Set oFirst = Entity2
        Set oSecond = Entity1
    Else
        Set oFirst = Entity1
        Set oSecond = Entity2
    End If
    
    If TypeOf oSecond Is CLine Then
        dTestLength = Sqr((oSecond.oPnt1.x - oFirst.oCenter.x) ^ 2 + _
                      (oSecond.oPnt1.y - oFirst.oCenter.y) ^ 2)
                      
        dCosine = ((oFirst.oCenter.x - oSecond.oPnt1.x) * _
                  (oSecond.oPnt2.x - oSecond.oPnt1.x) + _
                  (oFirst.oCenter.y - oSecond.oPnt1.y) * _
                  (oSecond.oPnt2.y - oSecond.oPnt1.y)) / (oSecond.dLength * dTestLength)
                  
        dMinDist = dTestLength * Sqr((1 - dCosine ^ 2))
        
        If DISTTOL > Abs(oFirst.dRadius - dMinDist) Then
            Call Relations.AddTangent(oFirst.oName, oSecond.oName, GAURENTEE)
        End If
    Else
        dMinDist = Sqr((oSecond.oCenter.x - oFirst.oCenter.x) ^ 2 + _
                      (oSecond.oCenter.y - oFirst.oCenter.y) ^ 2)
                      
        If DISTTOL > Abs(dMinDist - oFirst.dRadius - oSecond.dRadius) Then
            Call Relations.AddTangent(oFirst.oName, oSecond.oName, GAURENTEE)
        ElseIf DISTTOL > Abs(dMinDist - Abs(oFirst.dRadius - oSecond.dRadius)) Then
            Call Relations.AddTangent(oFirst.oName, oSecond.oName, GAURENTEE)
        End If
    End If
    
    Exit Function
    
Err_PlaceTangent:
    PlaceTangent = False

End Function

'
' Description:  Tests to see if two points are coincident
'
' Arguments     oPnt1               CPoint
'               oPnt2               CPoint
'
' Returns       Integer             True        Points are coincident
'                                   False       Points are not oincident
'
' Limitations   None
'
'
Public Function TestCoincident(oPnt1 As CPoint, oPnt2 As CPoint)

    On Error GoTo Err_TestCoincident
    
    TestCoincident = False
    
    If Abs(oPnt1.x - oPnt2.x) < DISTTOL And _
       Abs(oPnt1.y - oPnt2.y) < DISTTOL Then
       TestCoincident = True
    End If
    
    Exit Function
    
Err_TestCoincident:
    'If any error was encounterd, return false but allow the program to continue execution.
    TestCoincident = False
           
End Function




VERSION 1.0 CLASS
BEGIN
  MultiUse = -1  'True
  Persistable = 0  'NotPersistable
  DataBindingBehavior = 0  'vbNone
  DataSourceBehavior  = 0  'vbNone
  MTSTransactionMode  = 0  'NotAnMTSObject
END
Attribute VB_Name = "clsSensorFunctions"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = True
Attribute VB_PredeclaredId = False
Attribute VB_Exposed = True
Public Function CostSensorFunctionArgs() As Long
    CostSensorFunctionArgs = 0
End Function
Public Function CostSensor(ByRef CostValue As Double) As Long
    Dim I As Integer
    Dim J As Integer
    Dim K As Integer
    
    Dim oSEApp As Object
    Dim oSEDoc As Object
    Dim oModelCollection As Object
    Dim oFeaturesCollection As Object
    
    Dim oHolesCollection As Object
    Dim oUDPsCollection As Object
    Dim oPatternsCollection As Object
    Dim oLouvers As Object
    Dim oBeads As Object
    Dim oDimples As Object
    Dim oBends As Object
    
    Dim CntHoleFeatures As Integer
    Dim CntUDPFeatures As Integer
    Dim CntPatternFeatures As Integer
    Dim CntMirrorCopyFeatures As Integer
    
    Dim CntTotalHoles As Integer
    Dim CntLouvers As Integer
    Dim CntBeads As Integer
    Dim CntDimples As Integer
    Dim CntBends As Integer
    
    Dim TempCnt As Integer
    
    Dim CostPerHole As Double
    Dim CostPerLouver As Double
    Dim CostPerBead As Double
    Dim CostPerDimple As Double
    Dim CostPerBend As Double
    
    Dim TotalCost As Double
    Dim NumOccur As Long
    Dim NumFeatPerOccur As Long
    Dim NumInputFeat As Integer
         
    On Error Resume Next
    Set oSEApp = GetObject(, "SolidEdge.Application")
    
    CntTotalHoles = 0
    CntLouvers = 0
    CntBeads = 0
    CntDimples = 0
    CntBends = 0
    
    CostPerHole = 1.25
    CostPerLouver = 1.15
    CostPerBead = 2.25
    CostPerDimple = 2.05
    CostPerBend = 1.25
             
    On Error Resume Next
    Set oSEDoc = oSEApp.ActiveDocument
    If Err Then
        Err.Clear
        MsgBox "Error getting active document"
    End If
    
    If oSEDoc.Type = igSheetMetalDocument Then
        Debug.Print "We have a psm doc"
    Else
        MsgBox "This is not a sheet metal file. Exiting Function."
        CostSensor = 1
        GoTo P
    End If
        
    Set oModelCollection = oSEDoc.Models(1)
    Set oFeaturesCollection = oModelCollection.Features
    
    If oFeaturesCollection.Count = 0 Then
        MsgBox "No geometry in the file, exiting function."
        CostSensor = 1
        GoTo P
    End If
    
    Set oHolesCollection = oModelCollection.Holes
    Set oUDPsCollection = oModelCollection.UserDefinedPatterns
    Set oPatternsCollection = oModelCollection.Patterns
    
    Set oBeads = oModelCollection.Beads
    Set oBends = oModelCollection.Bends
    Set oLouvers = oModelCollection.Louvers
    Set oDimples = oModelCollection.Dimples
    
    'CntHoleFeatures = HolesCollection.Count
    CntUDPFeatures = oUDPsCollection.Count
    CntPatternFeatures = oPatternsCollection.Count
    
    'loop thru holes collection to get only those holes whose status is ok or warned
    For J = 1 To oHolesCollection.Count
        If oHolesCollection(J).Status = igFeatureOK Or oHolesCollection(J).Status = igFeatureWarned Then
                CntHoleFeatures = CntHoleFeatures + 1
            End If
    Next
    
   CntTotalHoles = CntHoleFeatures
        
    ' loop thru user defined patterns for number of holes that are ok or warned
    For K = 1 To CntUDPFeatures
        If oUDPsCollection(K).Status = igFeatureOK Or oUDPsCollection(K).Status = igFeatureWarned Then
            TempCnt = oUDPsCollection(K).NumberInputFeatures
            CntTotalHoles = CntTotalHoles + TempCnt
            Debug.Print "For " & oUDPsCollection(K).Name & " No holes is " & TempCnt
        End If
    Next
        
    TempCnt = 0
        
    'loop thru pattern features to get holes with ok or warned status
    For K = 1 To CntPatternFeatures
        If oPatternsCollection(K).Status = igFeatureOK Or oPatternsCollection(K).Status = igFeatureWarned Then
            TempCnt = oPatternsCollection(K).NumberOfOccurrences - _
                oPatternsCollection(K).NumberOfInputFeatures
            CntTotalHoles = CntTotalHoles + TempCnt
            Debug.Print "For " & oPatternsCollection(K).Name & " No holes is " & TempCnt
        End If
    Next
        
    TempCnt = 0
  
    For K = 1 To oModelCollection.Louvers.Count
        If oLouvers(K).Status = igFeatureOK Or oLouvers(K).Status = igFeatureWarned Then
            CntLouvers = CntLouvers + 1
        End If
    Next
    
    For K = 1 To oModelCollection.Beads.Count
        If oBeads(K).Status = igFeatureOK Or oBeads(K).Status = igFeatureWarned Then
            CntBeads = CntBeads + 1
        End If
    Next
    
    For K = 1 To oModelCollection.Bends.Count
        If oBends(K).Status = igFeatureOK Or oBends(K).Status = igFeatureWarned Then
            CntBends = CntBends + 1
        End If
    Next
    
    For K = 1 To oModelCollection.Dimples.Count
        If oDimples(K).Status = igFeatureOK Or oDimples(K).Status = igFeatureWarned Then
            CntDimples = CntDimples + 1
        End If
    Next
    
    TotalCost = CostPerHole * CntTotalHoles
    TotalCost = TotalCost + CostPerLouver * CntLouvers
    TotalCost = TotalCost + CostPerBead * CntBeads
    TotalCost = TotalCost + CostPerDimple * CntDimples
    TotalCost = TotalCost + CostPerBend * CntBends
    
    CostValue = TotalCost

    CostSensor = 0 ' zero returned value indicates success

P:
    Set oFeaturesCollection = Nothing
    Set oModelCollection = Nothing
    Set oHolesCollection = Nothing
    Set oUDPsCollection = Nothing
    Set oPatternsCollection = Nothing
    
    Set oBeads = Nothing
    Set oBends = Nothing
    Set oLouvers = Nothing
    Set oDimples = Nothing

    Set oSEDoc = Nothing
    Set oSEApp = Nothing

    End Function
Public Function GetMassFunctionArgs() As Long
    GetMassFunctionArgs = 0
End Function
Public Function GetMass(ByRef MassofPart As Double) As Long
    Dim oSEApp As Object
    Dim oSEDoc As Object
    
    Dim tmpDensityConst As Long
    Dim tmpAccuracyConst As Long
    
    Dim I As Integer
    Dim tmpString As String
    
    Dim dblDensity As Variant
    Dim dblAccuracyIn As Variant
    
    Dim dblAccuracyOut As Double
    
    Dim dblVolume As Double
    Dim dblArea As Double
    Dim dblMass As Double
    Dim dblCofG(1 To 3) As Double
    Dim dblCofV(1 To 3) As Double
    Dim dblGlobalMoments(1 To 6) As Double
    Dim dblPrincipalMoments(1 To 3) As Double
    Dim dblPrincipalAxes(1 To 9) As Double
    Dim dblRadiiOfGyration(1 To 3) As Double
    
    Dim MassString As String
    Dim MyMass As Double

    Dim lngStatus As Long
    
    Set oSEApp = GetObject(, "SolidEdge.Application")
    
    Set oSEDoc = oSEApp.ActiveDocument
    dblDensity = 0#
    dblAccuracyIn = 0#
    
    If oSEDoc.Type = igSheetMetalDocument Then
        tmpDensityConst = seSheetMetalGlobalDensity
        tmpAccuracyConst = seSheetMetalGlobalAccuracyForDensity
    ElseIf oSEDoc.Type = igPartDocument Then
        tmpDensityConst = sePartGlobalDensity
        tmpAccuracyConst = sePartGlobalAccuracyForDensity
    Else
        MsgBox "This is not a Part or sheet metal file. Exiting Function."
        GetMass = 1
        GoTo P
    End If
    
    On Error Resume Next
    Call oSEDoc.GetGlobalParameter(tmpDensityConst, dblDensity)
    If Err.Number <> 0 Then
        Debug.Print Err.Description
        Err.Clear
        MsgBox "error getting density of part"
    End If
    
    On Error Resume Next
    Call oSEDoc.GetGlobalParameter(tmpAccuracyConst, dblAccuracyIn)
    If Err.Number <> 0 Then
        Debug.Print Err.Description
        Err.Clear
        MsgBox "Error getting accuracy"
    End If
    
    Debug.Print "Density is: " & dblDensity
    Debug.Print "Accuracy is: " & dblAccuracyIn
    
    If dblDensity = 0# Then
        MsgBox "Denisty cannot be zero. Exiting Function."
        GetMass = 1
        GoTo P
    End If
    
    On Error Resume Next

    Call oSEDoc.Models(1).ComputePhysicalProperties( _
            Density:=dblDensity, Accuracy:=dblAccuracyIn, Volume:=dblVolume, _
            Area:=dblArea, Mass:=dblMass, CenterOfGravity:=dblCofG, _
            CenterOfVolume:=dblCofV, _
            GlobalMomentsOfInteria:=dblGlobalMoments, _
            PrincipalMomentsOfInteria:=dblPrincipalMoments, _
            PrincipalAxes:=dblPrincipalAxes, _
            RadiiOfGyration:=dblRadiiOfGyration, _
            RelativeAccuracyAchieved:=dblAccuracyOut, Status:=lngStatus)
    
    If Err.Number <> 0 Then
        Debug.Print Err.Description
        Err.Clear
        MsgBox "Error getting mass of part. Exiting Function."
        GetMass = 1
        GoTo P
    End If
        
    Debug.Print "Density is " & dblDensity & " with accuracy " & dblAccuracyIn
    
    'convert mass to units in the File Properties/Advanced Units Tab. This is a string
    MassString = oSEDoc.UnitsOfMeasure.FormatUnit(igUnitMass, dblMass)
    'convert the MassString to a double
    MassofPart = CDbl(Val(MassString))

    Debug.Print "Mass = " & MassofPart
    
    GetMass = 0
P:
    Set oSEDoc = Nothing
    Set oSEApp = Nothing
    
End Function
    Public Function MeasureDistFunctionArgs(ByRef aTypes() As Long, ByRef aPrompts() As String) As Long
    
    ReDim aTypes(1)
    ReDim aPrompts(1)
    
    aTypes(0) = seLocatePart
    aTypes(1) = seLocatePart
    
    aPrompts(0) = "Locate 1st Part"
    aPrompts(1) = "Locate 2nd Part"
    
    MeasureDistFunctionArgs = 0
End Function

Public Function MeasureDist(objPart1 As Object, objPart2 As Object, ByRef MinDist As Double) As Long
Dim oSEApp As Object
Dim Point1(2) As Double
Dim Point2(2) As Double
Dim MinDistString As String

Set oSEApp = GetObject(, "SolidEdge.Application")

If oSEApp.ActiveDocument.Type <> igAssemblyDocument Then
    MsgBox "This is not an assembly document. Exiting Function."
    MeasureDist = 1
    GoTo P
End If

On Error Resume Next
Call oSEApp.ActiveDocument.MinimumDistance(objPart1, objPart2, MinDist, Point1, Point2)

If Err Then
    Debug.Print Err.Description
    MsgBox "Error executing MinimumDistance Method"
    Err.Clear
    MeasureDist = 1
    GoTo P
End If

'convert MinDist to units in the File Properties/Advanced Units Tab. This is a string
MinDistString = oSEApp.ActiveDocument.UnitsOfMeasure.FormatUnit(igUnitDistance, MinDist)
'convert the MassString to a double
MinDist = CDbl(Val(MinDistString))

MeasureDist = 0
P:
Set oSEApp = Nothing

End Function

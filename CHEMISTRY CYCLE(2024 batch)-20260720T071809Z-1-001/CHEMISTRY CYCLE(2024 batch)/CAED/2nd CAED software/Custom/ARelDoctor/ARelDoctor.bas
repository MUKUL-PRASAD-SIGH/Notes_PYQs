Attribute VB_Name = "Module1"
Option Explicit
    Dim objApp As Object
    Dim objSEDoc As Object
    
    Dim bFoundOriginallySuppressed As Boolean
    
    
Sub Main()
    
    Dim bSuppressed As Boolean
    
    Dim DocName As String
    
    'Get the application
    On Error Resume Next
    Set objApp = GetObject(, "SolidEdge.Application")
    If Err Then
        MsgBox "Cannot attach to Solid Edge", vbCritical + vbOKOnly, "Error"
        Exit Sub
    End If
       
    'Get the active document
    Set objSEDoc = Nothing
    Set objSEDoc = objApp.ActiveDocument
           
    'Flag used to format result test file
    bFoundOriginallySuppressed = False
    
    DocName = objSEDoc.Name
    
    Open "c:\temp\" & DocName & ".txt" For Output As #1
    
    'Suppress all sick constraints
    bSuppressed = SuppressSickConstraints
    
    If bSuppressed Then
        'Analyze the model
        Process
        
        Close #1
        MsgBox "Diagnosis completed. See the text file in c:\temp for result.", vbOKOnly, "Asm Model Diagnosis"
    End If
    
    Set objSEDoc = Nothing
    Set objApp = Nothing
End Sub


Public Function SuppressSickConstraints() As Boolean
    Dim obj3DRelationsCollection As Object
    Dim objThisRelation As Object
    
    Dim Cnt3DRelations As Integer
    Dim K As Integer
    
    Dim bSuppressed As Boolean
    
    On Error Resume Next

    'Initialize to false
    SuppressSickConstraints = False
    
    objApp.DelayCompute = True
        
    Set obj3DRelationsCollection = Nothing
    Set obj3DRelationsCollection = objSEDoc.Relations3d
    Cnt3DRelations = obj3DRelationsCollection.Count
    
    Set objThisRelation = Nothing
    
    For K = 1 To Cnt3DRelations
        Set objThisRelation = obj3DRelationsCollection(K)
        
        bSuppressed = objThisRelation.Suppress
        
        If bSuppressed = False Then
            If objThisRelation.Status = igRelation3dStatusUnsolved Then
                objThisRelation.Suppress = True
                
                'Found at least one sick constraint, return true to trigger analysis
                SuppressSickConstraints = True
            End If
        Else
            If bFoundOriginallySuppressed = False Then
                'Write out tital for this section
                Print #1, "Originally suppressed:" + vbCrLf
                bFoundOriginallySuppressed = True
            End If
            
            'Write the originally suppressed to the text file
            OutputResult objThisRelation
        End If
       
        Set objThisRelation = Nothing
    Next
    
    Set obj3DRelationsCollection = Nothing
    
    objApp.DelayCompute = False

End Function

Public Sub Process()

    Dim objOccurrenceCollection As Object
    Dim objOccurrence As Object
    Dim obj3DRelations As Object
    Dim obj3DRel As Object
      
    Dim CntOccurrences As Integer
    Dim Cnt3DRelations As Integer
    Dim K As Integer
    Dim H As Integer
    
    Dim bSuppressed As Boolean
    Dim bFailed As Boolean
    Dim bDoSuppress As Boolean
    
    On Error Resume Next
    
    Set objOccurrenceCollection = Nothing
    Set objOccurrenceCollection = objSEDoc.Occurrences
    CntOccurrences = objOccurrenceCollection.Count
    
    Set objOccurrence = Nothing
    Set obj3DRelations = Nothing
    Set obj3DRel = Nothing
    
    For K = 1 To CntOccurrences
        Set objOccurrence = objOccurrenceCollection(K)
        
        Set obj3DRelations = objOccurrence.Relations3d
        Cnt3DRelations = obj3DRelations.Count
        
        'First unsuppress all constraints on this occurrence
        ProcessConstraintsOnOcc objOccurrence, False
        
        'Check the result of the compute
        bFailed = SolveFailed
        
        If bFailed = True Then
            'At least one constraint on this occurrence is causing failure(s),
            'analyze each one separately.
            
            'First re-suppress all sick constraints on this occurrence
            ProcessConstraintsOnOcc objOccurrence, True
            
            'Now unsuppress and compute one by one
            For H = 1 To Cnt3DRelations
                Set obj3DRel = obj3DRelations(H)
                
                bSuppressed = obj3DRel.Suppress
                If bSuppressed = True Then
                    obj3DRel.Suppress = False   'Unsuppress and compute
                    
                    bFailed = SolveFailed       'Analyze the compute result
                    If bFailed = True Then
                        'This one causes failure, keep it suppressed
                        obj3DRel.Suppress = True
                        
                        If bFoundOriginallySuppressed = True Then
                            'Write out tital for this section
                            Print #1, "-------------------------" + vbCrLf
                            Print #1, "Suppressed by ARelDoctor:" + vbCrLf
                            bFoundOriginallySuppressed = False
                        End If
                        
                        'Write result to the text file
                        OutputResult obj3DRel
                    End If
                End If
                
                Set obj3DRel = Nothing
            Next
        End If
        
        Set objOccurrence = Nothing
        Set obj3DRelations = Nothing
    Next
    
    Set objOccurrenceCollection = Nothing
End Sub

Public Function ProcessConstraintsOnOcc(objOcc As Object, bDoSuppress As Boolean) As Boolean
    'This function suppress sick constraints or unsuppress constraints on the given occurrence.
    'Compute will be done at the end.
    Dim obj3DRelations As Object
    Dim obj3DRel As Object
    
    Dim Cnt3DRelations As Integer
    Dim H As Integer
    
    Dim bSuppressed As Boolean
    
    objApp.DelayCompute = True
    
    Set obj3DRelations = Nothing
    Set obj3DRelations = objOcc.Relations3d
    Cnt3DRelations = obj3DRelations.Count
    
    Set obj3DRel = Nothing
    
    For H = 1 To Cnt3DRelations
        Set obj3DRel = obj3DRelations(H)
            
        If bDoSuppress Then                     'Suppress
            bSuppressed = obj3DRel.Suppress
            If bSuppressed = False Then
                If obj3DRel.Status = igRelation3dStatusUnsolved Then
                    obj3DRel.Suppress = True
                End If
            End If
        Else                                    'Unsuppress
            bSuppressed = obj3DRel.Suppress
            If bSuppressed = True Then
                obj3DRel.Suppress = False
            End If
        End If
        
        Set obj3DRel = Nothing
    Next
    
    objApp.DelayCompute = False
        
End Function
Public Function SolveFailed() As Boolean
'This function look through constraints in the document. It returns True if
'one failed constraint is found. Otherwise it returns False
   
    Dim objOccurrenceCollection As Object
    Dim objOccurrence As Object
    Dim obj3DRelations As Object
    Dim obj3DRel As Object
      
    Dim CntOccurrences As Integer
    Dim Cnt3DRelations As Integer
    Dim K As Integer
    Dim H As Integer
    
    Dim bSuppressed As Boolean
    Dim bNoFailure As Boolean
    
    On Error Resume Next
    
    Set objOccurrenceCollection = Nothing
    Set objOccurrenceCollection = objSEDoc.Occurrences
    CntOccurrences = objOccurrenceCollection.Count
    
    Set objOccurrence = Nothing
    Set obj3DRelations = Nothing
    Set obj3DRel = Nothing
    
    SolveFailed = False
    
    For K = 1 To CntOccurrences
        Set objOccurrence = objOccurrenceCollection(K)
        Set obj3DRelations = objOccurrence.Relations3d
        Cnt3DRelations = obj3DRelations.Count
        
        For H = 1 To Cnt3DRelations
            Set obj3DRel = obj3DRelations(H)
                
            bSuppressed = obj3DRel.Suppress
            If bSuppressed = False Then
                If obj3DRel.Status = igRelation3dStatusUnsolved Then
                    'Found a failed relationship, stop looping and return true
                    SolveFailed = True
                    Exit Function
                End If
            End If
            
            Set obj3DRel = Nothing
        Next
        
        Set obj3DRelations = Nothing
        Set objOccurrence = Nothing
    Next
End Function

Public Function OutputResult(obj3DRel As Object) As Boolean
    
    Dim RelationType As String
    Dim Occ1Name As String
    Dim Occ2Name As String
    Dim OutputString As String
    
    Occ1Name = ""
    Occ2Name = ""
    
    On Error Resume Next
   
    'GET THE RELATIONSHIP TYPE SO WE CAN WRITE TO COMMENTS IF IT IS FAILED
    If obj3DRel.Type = igAngularRelation3d Then
        RelationType = "Angular"
    ElseIf obj3DRel.Type = igAxialRelation3d Then
        RelationType = "Axial"
    ElseIf obj3DRel.Type = igGroundRelation3d Then
        RelationType = "Ground"
    ElseIf obj3DRel.Type = igPlanarRelation3d Then
        If obj3DRel.NormalsAligned = False Then
            RelationType = "Mate"
        ElseIf obj3DRel.NormalsAligned = True Then
            RelationType = "Align"
        End If
    ElseIf obj3DRel.Type = igPointRelation3d Then
        RelationType = "Point"
    ElseIf obj3DRel.Type = igTangentRelation3d Then
        RelationType = "Tangent"
    End If
        
    If RelationType = "Ground" Then
        Occ1Name = obj3DRel.Occurrence.Name
    Else
        Occ1Name = obj3DRel.Occurrence1.Name
        Occ2Name = obj3DRel.Occurrence2.Name
    End If
    
    OutputString = Occ1Name + " / " + Occ2Name + " - " + RelationType + vbCrLf
    Print #1, OutputString
    OutputString = ""
    
End Function


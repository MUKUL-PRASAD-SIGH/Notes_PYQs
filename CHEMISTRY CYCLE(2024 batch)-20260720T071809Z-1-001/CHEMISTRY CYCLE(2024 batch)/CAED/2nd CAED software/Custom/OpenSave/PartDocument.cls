VERSION 1.0 CLASS
BEGIN
  MultiUse = -1  'True
END
Attribute VB_Name = "clsPartDocument"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = True
Attribute VB_PredeclaredId = False
Attribute VB_Exposed = False
Attribute VB_Ext_KEY = "SavedWithClassBuilder" ,"Yes"
Attribute VB_Ext_KEY = "Member0" ,"FailedFeatures"
Attribute VB_Ext_KEY = "Member1" ,"WarnedFeatures"
Attribute VB_Ext_KEY = "Top_Level" ,"Yes"
Option Explicit

Public SolidEdgeVersion As Integer
Public DocumentSize As Long
Public RecomputeTime As Double
Public Volume As Double
Public Name As String
Public FeaturesDifferentCount As Integer


Private mCenterOfGravity(1 To 3) As Double
Private mvarFailedItems As clsFailedItems
Private mvarWarnedItems As clsWarnedItems



Public Sub SetCenterOfGravity(CenterOfGravity() As Double)
    Dim i As Integer
    
    For i = 1 To 3
        mCenterOfGravity(i) = CenterOfGravity(i)
    Next
End Sub


Public Sub GetCenterOfGravity(CenterOfGravity() As Double)
    Dim i As Integer
    
    For i = 1 To 3
        CenterOfGravity(i) = mCenterOfGravity(i)
    Next
End Sub


Public Function CompareCenterOfGravities(NewCenter() As Double) As Boolean
    Dim i As Integer
    
    
    For i = 1 To 3
        If Abs(mCenterOfGravity(i) - NewCenter(i)) > 0.0000001 Then
            CompareCenterOfGravities = False
            Exit Function
        End If
    Next
    
    CompareCenterOfGravities = True
End Function
Public Property Get DocumentType() As DocumentTypes
    DocumentType = typPartDocument
End Property

Public Property Get WarnedItems() As clsWarnedItems
    If mvarWarnedItems Is Nothing Then
        Set mvarWarnedItems = New clsWarnedItems
    End If

    Set WarnedItems = mvarWarnedItems
End Property


Public Property Get FailedItems() As clsFailedItems
    If mvarFailedItems Is Nothing Then
        Set mvarFailedItems = New clsFailedItems
    End If

    Set FailedItems = mvarFailedItems
End Property

Private Sub Class_Terminate()
    Set mvarWarnedItems = Nothing
    Set mvarFailedItems = Nothing
End Sub





VERSION 1.0 CLASS
BEGIN
  MultiUse = -1  'True
  Persistable = 0  'NotPersistable
  DataBindingBehavior = 0  'vbNone
  DataSourceBehavior  = 0  'vbNone
  MTSTransactionMode  = 0  'NotAnMTSObject
END
Attribute VB_Name = "clsWeldmentDocument"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = False
Attribute VB_Exposed = False
Option Explicit

Public SolidEdgeVersion As Integer
Public DocumentSize As Long
Public Name As String


Private mvarFailedItems As clsFailedItems
Private mvarWarnedItems As clsWarnedItems

Public Property Get DocumentType() As DocumentTypes
    DocumentType = typWeldmentDocument
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

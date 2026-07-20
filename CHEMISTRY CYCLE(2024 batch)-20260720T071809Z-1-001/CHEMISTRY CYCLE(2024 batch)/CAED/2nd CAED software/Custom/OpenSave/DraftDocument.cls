VERSION 1.0 CLASS
BEGIN
  MultiUse = -1  'True
END
Attribute VB_Name = "clsDraftDocument"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = True
Attribute VB_PredeclaredId = False
Attribute VB_Exposed = False
Option Explicit

Public SolidEdgeVersion As Integer
Public DocumentSize As Long
Public RecomputeTime As Double
Public Name As String

Public Property Get DocumentType() As DocumentTypes
    DocumentType = typDraftDocument
End Property



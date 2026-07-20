VERSION 1.0 CLASS
BEGIN
  MultiUse = -1  'True
END
Attribute VB_Name = "clsBadDocument"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = True
Attribute VB_PredeclaredId = False
Attribute VB_Exposed = False
Option Explicit

Public ErrorDescription As String
Public Name As String

Public Property Get DocumentType() As DocumentTypes
    DocumentType = typBadDocument
End Property




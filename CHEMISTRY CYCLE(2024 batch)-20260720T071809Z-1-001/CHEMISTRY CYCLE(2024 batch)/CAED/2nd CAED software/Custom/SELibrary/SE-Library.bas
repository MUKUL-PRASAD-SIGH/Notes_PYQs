Attribute VB_Name = "Module1"
Option Explicit

Type SELibrary
   Index As Integer
   Type As String
   Class As String
   ImageName As String
   FileName As String
   Found As Byte
   Sizes() As Double
   SizeCount As Integer
   Variables() As Double
   VariableCount As Integer
End Type


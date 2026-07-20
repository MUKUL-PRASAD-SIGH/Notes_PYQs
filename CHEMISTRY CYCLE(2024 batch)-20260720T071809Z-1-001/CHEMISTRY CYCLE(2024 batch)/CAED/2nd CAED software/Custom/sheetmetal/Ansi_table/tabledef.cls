VERSION 1.0 CLASS
BEGIN
  MultiUse = -1  'True
END
Attribute VB_Name = "TableDef"
Attribute VB_Creatable = False
Attribute VB_Exposed = False
Option Explicit
Dim m_Thickness As Double
Dim m_Radius(25) As Double
Dim m_Angle(25) As Double
Dim m_FlatLength(25) As Double

Dim m_TableCount As Integer

Private Sub Class_Initialize()
m_TableCount = 0
End Sub

Private Sub Class_Terminate()
'
End Sub

Public Property Get Thickness() As Double
Thickness = m_Thickness
End Property

Public Property Let Thickness(dNewValue As Double)
m_Thickness = dNewValue
End Property

Public Function ThicknessMatch(thk As Double) As Integer
'Use this function to compare a given thickness to the thickness of this table
'Returns True if it matches, False if it does not.
If Abs(thk - m_Thickness) <= gTol Then
  ThicknessMatch = True
Else
  ThicknessMatch = False
End If
End Function

Public Sub AddEntry(Radius As Double, Angle As Double, Length As Double)
'Add and entry into the table
'The program has a max of 25 table entries. You can change this if needed.
m_TableCount = m_TableCount + 1

If m_TableCount < 26 Then
    m_Radius(m_TableCount) = Radius
    m_Angle(m_TableCount) = Angle
    m_FlatLength(m_TableCount) = Length
Else
    m_TableCount = 25
End If

End Sub

Public Function GetValueFromTable(R As Double, A As Double) As Double
'Use this function to get a value from this table for a given bend radius and angle.
'If there is not match in the table return -1.
Dim ii As Integer
Dim RDelta As Double
Dim ADelta As Double

'Loop through table and check for a match
ii = 1
Do While ii <= m_TableCount
  RDelta = Abs(R - m_Radius(ii))
  ADelta = Abs(A - m_Angle(ii))
   
  If RDelta <= gTol And ADelta <= gTol Then
    GetValueFromTable = m_FlatLength(ii)
    Exit Function
  End If
  ii = ii + 1
Loop

'Did not find a match in table return -1
GetValueFromTable = -1

End Function


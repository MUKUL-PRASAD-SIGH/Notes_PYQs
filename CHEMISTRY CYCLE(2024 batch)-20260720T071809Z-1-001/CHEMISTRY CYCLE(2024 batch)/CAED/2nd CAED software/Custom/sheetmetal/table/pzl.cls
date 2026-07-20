VERSION 1.0 CLASS
BEGIN
  MultiUse = -1  'True
END
Attribute VB_Name = "PZL"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = True
Attribute VB_PredeclaredId = False
Attribute VB_Exposed = True
'****************************************************************
'*      PZL OLE Server Class Example for SE-Sheet Metal         *
'*                                                              *
'* This example uses a Bend Allowance table to determine the    *
'* Length of the bend in the flat.                              *
'*                                                              *
'* If a table is not defined for the given thickness/radius and *
'* bend angle then a default formula is used to compute the     *
'* allowance value                                              *
'****************************************************************
Option Explicit
Dim m_Tables As New Collection 'Collection of TableDefs.
                               'Each TableDef in the collection is a table for specified thickness.
Dim m_CurrentThickness As Double 'Stores the current thickness of the Sheet Metal Model.
Dim m_CurrentTable As Object 'Current Thickness table
                             'This value may be Nothing if no table defined for the specified thickness

Private Sub Class_Initialize() 'Called only once when DLL is first loaded by SE-Sheet Metal
Dim tmpTable As Object

'Initialize default values
m_CurrentThickness = 0#
Set m_CurrentTable = Nothing

'Create and Load Data into tables
'Add Entry format Radius(inch), Bend Angle(Degree), Flat Length(inch)
'Set Length value = -1 to force use of equation if desired
'NOTE: There are a maximum of 10 entries per thickness table.
'      Change this limit if desired by editing the TableDef.cls code.

Set tmpTable = New TableDef
tmpTable.Thickness = 0.016 'Thickness in inches
tmpTable.AddEntry 0.031, 90, -1
tmpTable.AddEntry 0.047, 90, -1
tmpTable.AddEntry 0.062, 90, -1
tmpTable.AddEntry 0.094, 90, 0.156
m_Tables.Add tmpTable

Set tmpTable = New TableDef
tmpTable.Thickness = 0.031
tmpTable.AddEntry 0.031, 90, -1
tmpTable.AddEntry 0.047, 90, 0.091
tmpTable.AddEntry 0.062, 90, 0.115
tmpTable.AddEntry 0.094, 90, 0.164
m_Tables.Add tmpTable

Set tmpTable = New TableDef
tmpTable.Thickness = 0.047
tmpTable.AddEntry 0.031, 90, 0.075
tmpTable.AddEntry 0.047, 90, 0.1
tmpTable.AddEntry 0.062, 90, 0.124
tmpTable.AddEntry 0.094, 90, 0.173
m_Tables.Add tmpTable

Set tmpTable = New TableDef
tmpTable.Thickness = 0.062
tmpTable.AddEntry 0.031, 90, 0.083
tmpTable.AddEntry 0.047, 90, 0.108
tmpTable.AddEntry 0.062, 90, 0.132
tmpTable.AddEntry 0.094, 90, 0.181
tmpTable.AddEntry 0.1, 90, 0.2
m_Tables.Add tmpTable

Set tmpTable = New TableDef
tmpTable.Thickness = 0.078
tmpTable.AddEntry 0.031, 90, 0.092
tmpTable.AddEntry 0.047, 90, 0.17
tmpTable.AddEntry 0.062, 90, 0.141
tmpTable.AddEntry 0.094, 90, 0.19
m_Tables.Add tmpTable

Set tmpTable = New TableDef
tmpTable.Thickness = 0.094
tmpTable.AddEntry 0.031, 90, 0.101
tmpTable.AddEntry 0.047, 90, 0.126
tmpTable.AddEntry 0.062, 90, 0.15
tmpTable.AddEntry 0.094, 90, 0.199
m_Tables.Add tmpTable

Set tmpTable = Nothing
End Sub

Private Sub Class_Terminate()
'Called only once when DLL is unloaded by SE-Sheet Metal
'Delete TableDef objects in m_Tables
Do While m_Tables.Count > 0
    m_Tables.Remove 1
Loop

Set m_CurrentTable = Nothing
End Sub

Public Function PZL(Feature As Object, Thickness As Double, Radius As Double, SweepAngle As Double, Material As String, NF As Double) As Double
'This Function is called by SE-Sheet Metal whenever the PZL value is needed

'The function arguments and units are defined as follows:
'Feature - The SE-Sheet Metal feature that is being created/updated or flattened.
'Thickness- Material thickness in meters. Defined in tools options
'Radius- Bend radius in meters. Defined by the feature.
'Angle- Sweep angle of the bend in radians. Defined by the feature
'NF- Neutral factor value (No units). Define in tools options and on the feature.
'PZL - Return value of this function. Must be in meters.
'      NOTE: The PZL value that you return to SE-Sheet Metal must be >= 0.000

Dim k As Double 'Compensation factor used in default formula.
Dim R As Double 'Bend Radius in inches
Dim A As Double 'Bend Sweep angle in degrees
Dim thk As Double 'Material thickness in inches
Dim TableValue As Double 'Return value from tabledef lookup

Dim dErrFix As Double

'Fix for division error bug when calling program from C++
On Error Resume Next
dErrFix = 1# / 2#

On Error GoTo Handle_Error


'Convert input values to inch and degrees using conversion functions (See modmain.bas)
R = MtoI(Radius)
thk = MtoI(Thickness)
A = RtoD(SweepAngle)

If m_CurrentThickness <> thk Then
    'Set the m_CurrentTable for the specified thickness
    'Note: If no table exists for the thickness we will use default formula
    SetCurrentTable thk
End If

If TypeName(m_CurrentTable) <> "Nothing" Then
    'Lookup the value if we have a table for this thickness
    'Note: If no entry exists for the given R and A value then -1 is returned and
    '      we will use default formula
    TableValue = m_CurrentTable.GetValueFromTable(R, A)
Else
    TableValue = -1
End If

If TableValue >= 0 Then
    'The value from the table is valid, use it
    PZL = ItoM(TableValue)
    Exit Function
End If

'No match in tables or no table for the specified thickness
'Use the default formula. The one below is for example purposes only
'Compute correction factor
If R <= 0.0005 Then 'Check for Zero bend radius.
  'The factor below is for example purposes only. Modify the value or formula
  'as needed to support your required values for zero bend radii.
    k = 1
ElseIf (Radius / Thickness) > 5 Then
    k = 1
Else
    k = 0.65 + 0.5 * Log(R / m_CurrentThickness) / Log(10)
End If

PZL = ItoM((R + m_CurrentThickness * k / 2) * PI * A / 180)

Exit Function

Handle_Error:
Err.Clear
PZL = (Radius + Thickness * 0.33) * SweepAngle

End Function

'******************************************************************************
Private Sub SetCurrentTable(thk As Double)
'Select the table using the thickness
Dim ii As Integer

m_CurrentThickness = thk

ii = 1
Do While ii <= m_Tables.Count
    If m_Tables(ii).ThicknessMatch(m_CurrentThickness) Then
        'We have a table for the specified thickness, set it to m_CurrentTable
        Set m_CurrentTable = m_Tables(ii)
        Exit Sub
    End If
    ii = ii + 1
Loop

'If we reach this point then there it not a table defined for the specified thickness.
'We will use the default formula to calculate the flat length of the bend. (PZL)
Set m_CurrentTable = Nothing
End Sub




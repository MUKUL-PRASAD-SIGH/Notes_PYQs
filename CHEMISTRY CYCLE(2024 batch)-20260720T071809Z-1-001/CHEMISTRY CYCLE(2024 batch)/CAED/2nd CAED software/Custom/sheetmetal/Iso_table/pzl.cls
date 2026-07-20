VERSION 1.0 CLASS
BEGIN
  MultiUse = -1  'True
  Persistable = 0  'NotPersistable
  DataBindingBehavior = 0  'vbNone
  DataSourceBehavior  = 0  'vbNone
  MTSTransactionMode  = 0  'NotAnMTSObject
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
'* The values are read from an ASCII text file that must        *
'* reside in the DLL's directory. The filename is table.txt     *
'*                                                              *
'* If a table is not defined for the given thickness/radius and *
'* bend angle then a default formula is used to compute the     *
'* allowance value                                              *
'****************************************************************

'7/6/00 - V9-Changed Cdbl() to Val() to handle local settings. CR47946 (Art Patrick)
'         V9-Added Err.Clear to division error handler. (Art Patrick)

Option Explicit
Dim m_Tables As New Collection 'Collection of TableDefs.
                               'Each TableDef in the collection is a table for specified thickness.
Dim m_CurrentThickness As Double 'Stores the current thickness of the Sheet Metal Model.
Dim m_CurrentTable As Object 'Current Thickness table
                             'This value may be Nothing if no table is defined for the
                             'specified thickness

Private Sub Class_Initialize()
'Called only once when the DLL is first loaded by SE-Sheet Metal
Dim FileName As String
Dim FileIOError As Integer
Dim ErrMsgString As String
Dim posStart As Integer
Dim posEnd As Integer
Dim numChars As Integer
Dim InputStr As String
Dim tmpThickness As Double
Dim tmpTable As Object
Dim Thickness As Double
Dim Radius As Double
Dim Angle As Double
Dim Length As Double

'Initialize default values
m_CurrentThickness = 0#
Set m_CurrentTable = Nothing
tmpThickness = 0#

'Set error handling for reading the file
On Error GoTo HandleError

FileIOError = 0

FileName = App.Path + "\table.txt"
'Open the table.txt ASCII file.
Open FileName For Input As #1

'Read the Data from the file and load it into the tables
Do While Not EOF(1)
    FileIOError = 1
    Line Input #1, InputStr
    'Check that the line is not a comment or blank
    If Mid(InputStr, 1, 1) <> "#" And InputStr <> "" Then
        'Line in file is a table entry, get the numbers from the string
                
        'Get the thickness
        posStart = 1
        posEnd = InStr(posStart, InputStr, ",")
        numChars = posEnd - posStart
        Thickness = Val(Mid(InputStr, posStart, numChars))

        'Get the radius
        posStart = posEnd + 1
        posEnd = InStr(posStart, InputStr, ",")
        numChars = posEnd - posStart
        Radius = Val(Mid(InputStr, posStart, numChars))
        
        'Get the bend angle
        posStart = posEnd + 1
        posEnd = InStr(posStart, InputStr, ",")
        numChars = posEnd - posStart
        Angle = Val(Mid(InputStr, posStart, numChars))
        
        'Get the flat length (PZL)
        posStart = posEnd + 1
        numChars = Len(InputStr) - posStart + 1
        Length = Val(Mid(InputStr, posStart, numChars))
        
        If Thickness = tmpThickness Then
            'Table exists for the thickness, add values to it
            tmpTable.AddEntry Radius, Angle, Length
        Else
            'No table exists for the thickness, create it and add the values.
            Set tmpTable = New TableDef
            tmpTable.Thickness = Thickness
            tmpTable.AddEntry Radius, Angle, Length
            tmpThickness = Thickness
            m_Tables.Add tmpTable
        End If
    End If
Loop

HandleError:
If Err Then
  Err.Clear
  Select Case FileIOError
    Case 0
      ErrMsgString = "There was a problem opening the table.txt file." + Chr$(13)
      ErrMsgString = ErrMsgString + "Make sure that it is in the same directory as the DLL" + Chr$(13)
      ErrMsgString = ErrMsgString + "The default formula in the DLL will be used"
    Case 1
      ErrMsgString = "There was a problem reading data from the table.txt file." + Chr$(13)
      ErrMsgString = ErrMsgString + "Check the file and make sure the format is correct." + Chr$(13)
      ErrMsgString = ErrMsgString + "The default formula in the DLL will be used"
  End Select
  
  MsgBox ErrMsgString, vbExclamation, "Custom Bend Equation"
End If

'Clean up
Close #1
Set tmpTable = Nothing
End Sub

Private Sub Class_Terminate() 'Called only once when DLL is unloaded by SE-Sheet Metal
'Delete TableDef objects in m_Tables
Set m_CurrentTable = Nothing

Do While m_Tables.Count > 0
    m_Tables.Remove 1
Loop

Set m_Tables = Nothing
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
If Err.Number <> 0 Then
  Err.Clear
End If

On Error GoTo Handle_Error

'Convert input values to inch and degrees using conversion functions (See modmain.bas)
R = MtoMM(Radius)
thk = MtoMM(Thickness)
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
    PZL = MMtoM(TableValue)
    Exit Function
End If

'No match in tables or no table for the specified thickness
'Use the default formula. The one below is for example purposes only
'Compute correction factor
If R <= 0.01 Then 'Check for Zero bend radius.
  'The factor below is for example purposes only. Modify the value or formula
  'as needed to support your required values for zero bend radii.
    k = 1
ElseIf (Radius / Thickness) > 5 Then
    k = 1
Else
    k = 0.65 + 0.5 * Log(R / m_CurrentThickness) / Log(10)
End If

PZL = MMtoM((R + m_CurrentThickness * k / 2) * PI * A / 180)

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




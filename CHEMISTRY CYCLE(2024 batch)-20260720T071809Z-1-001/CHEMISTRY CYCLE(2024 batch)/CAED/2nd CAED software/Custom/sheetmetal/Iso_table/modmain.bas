Attribute VB_Name = "Module1"
Option Explicit
Global Const PI = 3.14159265359
Global Const gTol = 0.005 'Tolerance used to determine if there is a match in the table. (mm)

Sub Main()
'This sub is required by Visual Basic to create and run the OLE DLL
'In general few operations should be performed in this subroutine.
'See the Visual Basic programmers guide for more details.
End Sub

'********************************************************
'******      Unit Conversion Functions        ***********
'********************************************************
'Returns a number converted from millimeters to meters
Public Function MMtoM(MillimeterValue As Double) As Double
 MMtoM = MillimeterValue / 1000
End Function

'Returns a number converted from meters to millimeters
Public Function MtoMM(MeterValue As Double) As Double
 MtoMM = MeterValue * 1000
End Function

'Returns a number converted from degrees to radians
Public Function DtoR(DegreeValue As Double) As Double
 DtoR = PI * DegreeValue / 180
End Function

'Returns a number converted from radians to degrees
Public Function RtoD(RadianValue As Double) As Double
 RtoD = 180 * RadianValue / PI
End Function



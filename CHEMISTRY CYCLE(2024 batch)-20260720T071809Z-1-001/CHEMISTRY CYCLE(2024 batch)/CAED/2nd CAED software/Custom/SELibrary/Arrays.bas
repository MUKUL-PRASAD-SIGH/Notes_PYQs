Attribute VB_Name = "ArrayRoutines"
Option Explicit
Sub ArrayParse(strArray() As String, ByVal strData As String, ByVal strDelim As String)

    On Error Resume Next
    
    Dim i As Integer
    
    For i = (LBound(strArray)) To UBound(strArray)
       strArray(i) = ArrayGet(strData, strDelim)
    Next
    
End Sub
Function ArrayGet(strData As String, ByVal strDelim As String) As String

    On Error Resume Next
    
    Dim intDelimPos As Integer
    
    intDelimPos = InStr(1, strData, strDelim)
    
    If (intDelimPos = 0) Then
        ' what? no delimiters no data
        ArrayGet = Trim$(strData)
        strData = ""
    Else
        ' delimiters so strip it and return it
        ArrayGet = Trim$(Left$(strData, intDelimPos - 1))
        strData = Mid$(strData, intDelimPos + 1)
    End If
    
End Function
Function ArrayCount(ByVal strData As String, ByVal strDelim As String) As Integer
    
    On Error GoTo ErrorTrap
    
    Dim intDelimPos As Integer
    Dim intCount As Integer
    
    
    If strData = "" Then
        ' Number of elements = 0 if the source string is empty (this is a bad thing)
        ' carefull!!! here we're passing a 0 back which in error checking terms
        ' is acceptable but is really not
        ArrayCount = 0
    Else
        ' Otherwise number of tokens = number of delimiters + 1
        intDelimPos = InStr(1, strData, strDelim)
        Do Until intDelimPos = 0
           intCount = intCount + 1
           intDelimPos = InStr(intDelimPos + 1, strData, strDelim)
        Loop
        ArrayCount = intCount + 1
    End If
   
ErrorTrap:
    If Err Then
        ArrayCount = ER_FATALERROR
        Exit Function
    End If
    
End Function

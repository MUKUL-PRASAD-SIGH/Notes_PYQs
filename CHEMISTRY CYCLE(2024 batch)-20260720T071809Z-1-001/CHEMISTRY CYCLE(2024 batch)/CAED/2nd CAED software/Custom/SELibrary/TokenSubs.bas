Attribute VB_Name = "TokenSubs"
Option Explicit

'*************************************************************
' SUB NAME: ParseTokens
'
' PURPOSE:
'   Extracts information from a delimited list of items and places
'   it in an array.
'
' INPUT PARAMETERS:
'   Array(): A one-dimensional array of strings in which the parsed tokens
'            will be place
'   sTokens: A delimited list of tokens
'   sDelim:  The delimiter used to delimit sTokens
'
' RETURN
'   None
'*************************************************************
Sub ParseTokens(aArray() As String, ByVal sTokens As String, ByVal sDelim As String)
   Dim i As Integer
   For i = (LBound(aArray)) To UBound(aArray)
      aArray(i) = GetToken(sTokens, sDelim)
   Next
End Sub
'*************************************************************
' FUNCTION NAME: GetToken
'
' PURPOSE:
'   Given a string of delimited items, the first item will be
'   removed from the list and returned.
'
' INPUT PARAMETERS:
'   sSource: A delimited list of tokens
'   sDelim:  The delimiter used to delimit sSource
'
' RETURN
'   sSource will have the first token removed. The function
'   returns the token removed from sSource.
'*************************************************************
Function GetToken(sSource As String, ByVal sDelim As String) As String
   Dim iDelimPos As Integer
   ' Find the first delimiter
   iDelimPos = InStr(1, sSource, sDelim)
   ' If no delimiter was found, return the existing string and set
   ' .. the source to an empty string.
   If (iDelimPos = 0) Then
      GetToken = Trim$(sSource)
      sSource = ""
   ' Otherwise, return everything to the left of the delimiter and
   ' .. return the source string with it removed.
   Else
      GetToken = Trim$(Left$(sSource, iDelimPos - 1))
      sSource = Mid$(sSource, iDelimPos + 1)
   End If
End Function



'*************************************************************
' FUNCTION NAME: CountTokens
'
' PURPOSE:
'   Given a string of delimited items and the delimiter, the number
'   of tokens in the string will be returned. This function is useful
'   for dimensioning an array to store the delimited items prior to
'   calling ParseTokens.
'
' INPUT PARAMETERS:
'   sSource: A delimited list of tokens
'   sDelim:  The delimiter used to delimit sSource
'
' RETURN
'   The number of tokens in sSource, which is the number of delimiters
'   plus 1. If sSource is empty, 0 is returned.
'*************************************************************

Function CountTokens(ByVal sSource As String, ByVal sDelim As String)
   Dim iDelimPos As Integer
   Dim iCount As Integer
   ' Number of tokens = 0 if the source string is empty
   If sSource = "" Then
      CountTokens = 0
   ' Otherwise number of tokens = number of delimiters + 1
   Else
      iDelimPos = InStr(1, sSource, sDelim)
      Do Until iDelimPos = 0
         iCount = iCount + 1
         iDelimPos = InStr(iDelimPos + 1, sSource, sDelim)
      Loop
      CountTokens = iCount + 1
   End If
End Function

Attribute VB_Name = "CheckRoutines"
Option Explicit
Function CheckFileName(strName As String) As Integer
    
    On Error Resume Next
    Dim i As Integer
    Dim strBad As String
    
    ' assume its valid
    CheckFileName = ER_NOERROR
    
    If Len(strName) = 0 Then
        CheckFileName = ER_BADFILENAME
        Exit Function
    End If
    
    ' look for bad characters
    For i = 1 To Len(LM_INVALIDCHARS)
        If InStr(1, strName, Mid$(LM_INVALIDCHARS, i, 1)) > 0 Then
            ' not valid
            CheckFileName = ER_BADFILENAME
            Exit For
        End If
    Next

End Function
Function CheckValidDat(strFile As String) As Integer

    On Error Resume Next
    
    Dim strLineData As String
    Dim intNewPart As Integer
    Dim intPartType As Integer
    Dim intPartClass As Integer
    Dim intPartDrawing As Integer
    Dim intBasePart As Integer
    Dim intHeading As Integer
    Dim intData As Integer
    Dim intEnd As Integer
    
    CheckValidDat = ER_NOERROR
    
    intNewPart = False
    intPartType = False
    intPartClass = False
    intPartDrawing = False
    intBasePart = False
    intHeading = False
    intData = False
    intEnd = False
    
    Open strFile For Input As #1
    
    Do While Not EOF(1)
    
        Line Input #1, strLineData
        
        If strLineData = C_NEW_PART Then
            intNewPart = True
        ElseIf InStr(1, strLineData, C_PART_TYPE) > 0 Then
            intPartType = True
        ElseIf InStr(1, strLineData, C_PART_CLASS) > 0 Then
            intPartClass = True
        ElseIf InStr(1, strLineData, C_PART_DRAWING) > 0 Then
            intPartDrawing = True
        ElseIf InStr(1, strLineData, C_PART_TEMPLATE) > 0 Then
            intBasePart = True
        ElseIf InStr(1, strLineData, C_HEADING) > 0 Then
            intHeading = True
        ElseIf InStr(1, strLineData, C_PART_DATA) > 0 Then
            intData = True
        ElseIf strLineData = C_END_PART Then
            intEnd = True
        End If
        
    Loop
    
    Close #1
    
    If intNewPart = False Or _
        intPartType = False Or _
        intPartClass = False Or _
        intPartDrawing = False Or _
        intBasePart = False Or _
        intHeading = False Or _
        intData = False Or _
        intEnd = False Then
        
        CheckValidDat = ER_INVALIDDAT
    End If
    
    If Err Then
        CheckValidDat = ER_VALIDFAIL
    End If


End Function
Function CheckDatFile() As Integer
    
    On Error Resume Next
    
    Dim strAppPath As String
    
    CheckDatFile = ER_NOERROR

    strDataFile = App.Path

    If Right$(strDataFile, 1) <> "\" Then
        strDataFile = strDataFile & "\"
    End If

    strAppPath = strDataFile

    ' set the file to a path and a global filename

    strDataFile = strDataFile & LF_DATAFILE
    
    ' the dat file is in a global path so get it
    If Right$(strGlobalPath, 1) <> "\" Then
        strDataFile = strGlobalPath & "\" & LF_DATAFILE
    Else
        strDataFile = strGlobalPath & LF_DATAFILE
    End If

    If Len(Dir(strDataFile, vbNormal)) = 0 Then
        CheckDatFile = ER_FILENOTFOUND
    End If

End Function
Function CheckForFile(strFileName As String) As Integer

    On Error Resume Next
    Dim strFile As String
    Dim i As Integer
    
    CheckForFile = ER_NOERROR
    
    For i = Len(strFileName) To 1 Step -1
        If Mid$(strFileName, i, 1) = "\" Then
            Exit For
        Else
            strFile = strFile & Mid$(strFileName, i, 1)
        End If
    Next
    
    If CheckFileName(strFile) = ER_BADFILENAME Then
        CheckForFile = ER_FILENOTFOUND
        Exit Function
    End If
  
    If Len(Dir(strFileName, vbNormal)) = 0 Then
        CheckForFile = ER_FILENOTFOUND
    Else
        CheckForFile = ER_FILEFOUND
    End If
    
End Function

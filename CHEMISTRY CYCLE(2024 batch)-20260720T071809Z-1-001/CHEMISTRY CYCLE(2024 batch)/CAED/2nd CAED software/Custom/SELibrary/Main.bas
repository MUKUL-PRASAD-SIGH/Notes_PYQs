Attribute VB_Name = "Misc"
Option Explicit
Option Base 1
Function SaveNewLocation(strFile As String) As Integer

    On Error Resume Next
    
    Dim strINIFile As String
    Dim strAppPath As String
    
    ' strip \ from path
    If Right$(App.Path, 1) = "\" Then
        strAppPath = Mid$(App.Path, 1, Len(App.Path) - 1)
    Else
        strAppPath = App.Path
    End If
    
    strINIFile = App.Path & "\" & LF_INIFILE
    SaveNewLocation = ER_NOERROR
    
    Open strINIFile For Output As #1
    Print #1, strFile
    Close #1
    
    If Err Then
        SaveNewLocation = ER_FATALERROR
    End If
    
End Function
Function BuildTabs(intStart As Integer) As Integer
    
    On Error Resume Next
    
    Dim intWidth As Integer
    Dim i As Integer
    Dim j As Integer
    
    BuildTabs = ER_NOERROR
    
    ReDim intTabArray(intTotalTabs)
    
    For i = intStart To intTotalTabs
        For j = 1 To UBound(SEData)
            If SEData(j).TypeID = i Then
                intTabArray(i) = SEData(j).PartID
                Exit For
            End If
        Next
        
    Next
    
    If Err Then
        BuildTabs = ER_FATALERROR
    End If
    
End Function
Function GetUser() As String

    On Error Resume Next
    
    Dim strBuffer As String
    Dim lngSize As Long
    
    strBuffer = Space$(255)
    lngSize = Len(strBuffer)
    
    GetUserName strBuffer, lngSize

    If lngSize > 0 Then
        ' remove spaces
        GetUser = Left$(strBuffer, lngSize)
    Else
        GetUser = ""
    End If
    
    If Err Then
        GetUser = ""
    End If


End Function
Function TopMost(frmForm As Form) As Integer
   
    On Error Resume Next
    TopMost = ER_NOERROR
    
    ' center the form
    frmForm.Move (Screen.Width - frmForm.Width) / 2, _
        (Screen.Height - frmForm.Height) / 2, frmForm.Width, frmForm.Height
        
    ' make it on top
    SetWindowPos frmForm.hwnd, HWND_TOPMOST, 0, 0, 0, 0, SWP_NOMOVE + SWP_NOSIZE
    
    If Err Then
        TopMost = ER_FATALERROR
    End If
    
End Function
Function ConvertValues(strData As String) As String

    On Error Resume Next
    Dim intInt As Integer
    Dim intNum As Integer
    Dim intDen As Integer
    Dim dblData As Double
    Dim intSpace As Integer
    Dim intDivide As Integer
    
    intDen = 1
    
    ' we want to have the number expressed as a decimal
    ' possibilities
    ' 2
    ' 2.2
    ' 2 1/2
    ' 1/2
    '
    ' not possible
    ' 2.2 1/2
    
    ' could be decimal form already
    If InStr(1, strData, "/") > 0 Or InStr(1, strData, " ") > 0 Then
        ' definately a fraction or mixed fraction
        ' if it has a space, get the integer portion
        intSpace = InStr(1, strData, " ")
        If intSpace > 0 Then
            ' mixed get integer and fraction
            intInt = Val(Mid$(strData, 1, intSpace - 1))
        End If
        
        intDivide = InStr(1, strData, "/")
        If intDivide > 0 Then
            ' has fraction get numerator
            intNum = Val(Mid$(strData, intSpace + 1, intDivide - intSpace - 1))
            intDen = Val(Mid$(strData, intDivide + 1, Len(strData) - intDivide))
            If intDen = 0 Then
                ' poor data entry
                MsgBox LE_DIVIDEBYZERO, vbCritical + vbOKOnly + vbSystemModal, LS_MSGBOX_TITLE
                intNum = 1
                intDen = 1
            End If
        End If
        If intDen = 0 Then
            MsgBox LE_DIVIDEBYZERO, vbCritical + vbOKOnly + vbSystemModal, LS_MSGBOX_TITLE
            intNum = 1
            intDen = 1
        End If
        dblData = intInt + (intNum / intDen)
        ConvertValues = Format$(dblData, C_NUMBERFORMAT)
        
    Else
        ' decimal or integer could be illegal "2.2 1/2"
        ConvertValues = Format$(Val(strData))
    End If
        
    If Err Then
        ConvertValues = 1
    End If
End Function

Function ImportData(strCurrent As String, strNew As String) As Integer

    On Error Resume Next
    
    Dim strData() As String
    Dim i As Integer
    Dim intLines As Integer
    
    ' double check for the files
    If CheckForFile(strNew) = ER_FILENOTFOUND Then
        MsgBox LE_FILE & strNew & LE_NOTFOUND & LE_NOIMPORT, vbOKOnly + vbCritical + vbSystemModal, LS_MSGBOX_TITLE
        ImportData = ER_FILENOTFOUND
        Exit Function
    End If
    
    If CheckForFile(strCurrent) = ER_FILENOTFOUND Then
        MsgBox LE_FILE & strNew & LE_NOTFOUND & LE_NOIMPORT, vbOKOnly + vbCritical + vbSystemModal, LS_MSGBOX_TITLE
        ImportData = ER_FILENOTFOUND
        Exit Function
    End If
    
    ' open the new file and read the contents into the array
    ImportData = ER_NOERROR
    
    Open strNew For Input As #1
    intLines = 0
    Do While Not EOF(1)
        intLines = intLines + 1
        ReDim strData(intLines)
        Line Input #1, strData(intLines)
    Loop
    Close #1
    
    ' open the current data file and append the array
    Open strCurrent For Append As #1
    
    For i = 1 To intLines - 1
        Print #1, strData(i)
    Next
    
    Close #1
    
End Function
Sub Main()

    On Error Resume Next
    Dim intReturn As Integer
    
    ' get the INI file and read the global data path
    If GetGlobalPath() = ER_FATALERROR Then
        MsgBox LE_NOINI, vbOKOnly + vbCritical + vbSystemModal, LS_MSGBOX_TITLE
        End
    End If
    
    ' is the data file found?

    If CheckDatFile() = ER_FILENOTFOUND Then
        Load frmLocations
        frmLocations.Tag = LO_OPEN
        If TopMost(frmLocations) <> ER_NOERROR Then
            ' skip it
        End If
        
        frmLocations.Show vbModal
        
        If CheckForFile(strDataFile) = ER_FILENOTFOUND Then
            End
        End If
        
    End If
    
    ' is the data file valid
    intReturn = CheckValidDat(strDataFile)
    
    If intReturn = ER_VALIDFAIL Then
        MsgBox LE_FILE & strDataFile & LE_VALIDFAIL, vbOKOnly + vbCritical + vbSystemModal, LS_MSGBOX_TITLE
        End
    ElseIf intReturn = ER_INVALIDDAT Then
        MsgBox LE_FILE & strDataFile & LE_INVALIDDAT, vbOKOnly + vbCritical + vbSystemModal, LS_MSGBOX_TITLE
        End
    End If
    
    If GetData() <> ER_NOERROR Then
        ' this is really bad
        MsgBox LE_NODATREAD, vbOKOnly + vbCritical + vbSystemModal, LS_MSGBOX_TITLE
        End
    End If

    
    Load frmSELibrary

    If TopMost(frmSELibrary) <> ER_NOERROR Then
        ' skip it
    End If
    
    frmSELibrary.Show
    
End Sub

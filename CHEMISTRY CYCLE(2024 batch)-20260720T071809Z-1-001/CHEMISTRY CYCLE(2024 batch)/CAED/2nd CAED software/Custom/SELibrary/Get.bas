Attribute VB_Name = "GetRoutines"
Option Explicit
Option Base 1
Function GetGlobalPath()

    On Error Resume Next
    
    Dim strINIFile As String
    Dim strAppPath As String
    
    GetGlobalPath = ER_NOERROR
    
    ' strip \ from path
    If Right$(App.Path, 1) = "\" Then
        strAppPath = Mid$(App.Path, 1, Len(App.Path) - 1)
    Else
        strAppPath = App.Path
    End If
    
    strINIFile = App.Path & "\" & LF_INIFILE
    
    If Len(Dir(strINIFile)) = 0 Then
        ' not found create on the fly
        Open strINIFile For Output As #1
        Print #1, strAppPath
    End If
    
    Close #1
    
    Open strINIFile For Input As #1
    Line Input #1, strGlobalPath
    Close #1
    
    If strGlobalPath = "" Then
        Open strINIFile For Output As #1
        strGlobalPath = strAppPath
        Print #1, strAppPath
    End If
    Close #1
    
    ' strip \ from path
    If Right$(strGlobalPath, 1) = "\" Then
        strGlobalPath = Mid$(strGlobalPath, 1, Len(strGlobalPath) - 1)
    Else
        strGlobalPath = strGlobalPath
    End If
    

    
    If Err Then
        GetGlobalPath = ER_FATALERROR
    End If
End Function

Function GetNextTypeID(intCurrent As Integer) As Integer
                    
    On Error GoTo ErrorTrap
    
    Dim i As Integer
    
    GetNextTypeID = ER_NOERROR
    
    If intCurrent = 1 Then
        intLastTypeID = intCurrent
        intTotalTabs = intLastTypeID
        Exit Function
    End If
    For i = 1 To intParts - 1
        If SEData(i).Type = SEData(intParts).Type Then
            intCurrent = SEData(i).TypeID
            Exit Function
        End If
    Next
    intLastTypeID = intLastTypeID + 1
    intCurrent = intLastTypeID
    intTotalTabs = intLastTypeID
    
ErrorTrap:
    If Err Then
        GetNextTypeID = ER_FATALERROR
        Exit Function
    End If
    
End Function
Function GetData() As Integer
    
    On Error GoTo ErrorTrap
    
    Dim filData As Object
    Dim strLineData As String
    Dim intSizes As Integer
    Dim intVariables As Integer
    Dim intTemp As Integer
    Dim intNextID As Integer
    Dim strTemp As String
    Dim strTempData() As String
    Dim i As Integer
    
    intParts = 0
    intLastTypeID = 0
    
    GetData = ER_NOERROR
    
    ReDim SEData(1)
    
    Open strDataFile For Input As #1
    
    Do While Not EOF(1)
    
        Line Input #1, strLineData
        
        If strLineData = C_NEW_PART Then
            ' add a new part
            intParts = intParts + 1
            ReDim Preserve SEData(intParts)
            
            ' set both ID's to the counter (unique)
            ' the type ID may get set to non-unique below
            SEData(intParts).PartID = intParts
            
            intVariables = 0
            intSizes = 0
            
            ' now get the data
            Do While Not EOF(1)
                               
                If (strLineData = "") Or (strLineData = "*") Then
                    ' skip
                    
                ElseIf InStr(1, strLineData, C_PART_TYPE) > 0 Then
                    ' add the part type to the instance
                    strLineData = Mid$(strLineData, Len(C_PART_TYPE) + 1) & ""
                    If Len(strLineData) = 0 Then
                        MsgBox LE_NOPARTTYPE, vbCritical + vbOKOnly + vbSystemModal, LS_MSGBOX_TITLE
                        Close #1
                        End
                    Else
                        If SEData(intParts).Type <> "" Then
                            MsgBox SEData(intParts).Type & " - " & LE_TYPEEXISTS, vbCritical + vbOKCancel + vbSystemModal, LS_MSGBOX_TITLE
                            End
                        Else
                            SEData(intParts).Type = strLineData
                        End If
                        
                    End If
                    ' set the typeID (non-unique i.e. all elbows =1)
                    intNextID = intParts
                    intTemp = GetNextTypeID(intNextID)
                    If intTemp = ER_FATALERROR Then
                        ' force and error
                        Err.Raise 1
                    End If
                    SEData(intParts).TypeID = intNextID
                    
                ElseIf InStr(1, strLineData, C_PART_CLASS) > 0 Then
                    ' add the part class to the instance
                    ' one type can have many classes
                    strLineData = Mid$(strLineData, Len(C_PART_CLASS) + 1) & ""
                    If Len(strLineData) = 0 Then
                        MsgBox LE_NOPARTCLASS, vbCritical + vbOKOnly + vbSystemModal, LS_MSGBOX_TITLE
                        Close #1
                        End
                    Else
                        SEData(intParts).Class = strLineData
                    End If
                    
                ElseIf InStr(1, strLineData, C_PART_DRAWING) > 0 Then
                    ' add the part drawing (a dft file for the viewer)
                    strLineData = Mid$(strLineData, Len(C_PART_DRAWING) + 1) & ""
                    If Len(strLineData) = 0 Then
                        MsgBox LE_NOPARTDRAWING, vbCritical + vbOKOnly + vbSystemModal, LS_MSGBOX_TITLE
                        Close #1
                        End
                    Else
                        ' make sure it preceeds with a \
                        If Left$(strLineData, 1) <> "\" Then
                            SEData(intParts).DraftName = "\" & strLineData
                        Else
                            SEData(intParts).DraftName = strLineData
                        End If
                    End If
                    
                ElseIf InStr(1, strLineData, C_PART_TEMPLATE) > 0 Then
                    ' add the part to the instance
                    strLineData = Mid$(strLineData, Len(C_PART_TEMPLATE) + 1) & ""
                    If Len(strLineData) = 0 Then
                        MsgBox LE_NOBASEPART, vbCritical + vbOKOnly + vbSystemModal, LS_MSGBOX_TITLE
                        Close #1
                        End
                    Else
                        ' make sure it preceeds with a \
                        If Left$(strLineData, 1) <> "\" Then
                            SEData(intParts).BasePart = "\" & strLineData
                        Else
                            SEData(intParts).BasePart = strLineData
                        End If
                    End If
                                        
                ElseIf InStr(1, strLineData, C_HEADING) > 0 Then
                    ' find the variables
                    strLineData = Mid$(strLineData, Len(C_HEADING) + 1) & ""
                    If Len(strLineData) = 0 Then
                        MsgBox LE_NOHEADING, vbCritical + vbOKOnly + vbSystemModal, LS_MSGBOX_TITLE
                        Close #1
                        End
                    Else
                        intTemp = GetVariables(strLineData, SEData(intParts).Variables, SEData(intParts).VariableCount)
                        If intTemp = ER_FATALERROR Then
                            Err.Raise 1
                        ElseIf intTemp = ER_NOVARIABLES Then
                            If MsgBox(LE_NOVARIABLES, vbCritical + vbYesNo + vbSystemModal, LS_MSGBOX_TITLE) = vbYes Then
                                Close #1
                                End
                            End If
                        End If
                    End If
                ElseIf InStr(1, strLineData, C_PART_DATA) > 0 Then
                    ' add a new size
                    
                    strLineData = Mid$(strLineData, Len(C_PART_DATA) + 1) & ""
                    If Len(strLineData) = 0 Then
                        MsgBox LE_NOPARTDATA, vbCritical + vbOKOnly + vbSystemModal, LS_MSGBOX_TITLE
                        Close #1
                        End
                    Else
                        
                        intTemp = ArrayCount(strLineData, C_FILE_DELIMITER)
                        If intTemp <> SEData(intParts).VariableCount Then
                            ' we have a miss match of dimensions versus variables
                            MsgBox SEData(intParts).Class & " - " & LE_SVMISSMATCH, vbCritical + vbOKOnly + vbSystemModal, LS_MSGBOX_TITLE
                            Close #1
                            End
                        End If
                        ' because VB will not allow redim of multi-size arrays within a data structure
                        ' we'll dump the info to a temp array and updata it later during END PART
                        SEData(intParts).SizeCount = SEData(intParts).SizeCount + 1
                        ReDim Preserve strTempData(SEData(intParts).SizeCount)
                        strTempData(SEData(intParts).SizeCount) = strLineData
                    End If
                    
                ElseIf strLineData = C_END_PART Then
                
                    ' make sure all parameters are specified
                    If SEData(intParts).Type = "" Or SEData(intParts).Class = "" Then
                        MsgBox LE_NOTYPECLASS, vbCritical + vbOKOnly + vbSystemModal, LS_MSGBOX_TITLE
                        Close #1
                        End
                    End If
                
                    ' sizes loaded into temp array now put into the data structure
                    ' check for size count 0 no go
                    If SEData(intParts).SizeCount = 0 Then
                        MsgBox LE_NOPARTS, vbCritical + vbOKOnly + vbSystemModal, LS_MSGBOX_TITLE
                        Close #1
                        End
                    End If
                    
                    ' transfer data from temp array to the data structure
                    TransferSizes strTempData, SEData(intParts).Sizes, SEData(intParts).SizeCount, SEData(intParts).VariableCount
                    ' check for images and base part. if they are not found then ask the user to quit or ignore
                    ' check if the image file is present if not not real threat user can quit
                    
                    strTemp = strGlobalPath & SEData(intParts).DraftName
                    
                    If CheckForFile(strTemp) = ER_FILENOTFOUND Then
                        If MsgBox(LE_FILE & strTemp & LE_NOTFOUND, vbYesNo + vbCritical + vbSystemModal, LS_MSGBOX_TITLE) = vbNo Then
                            Close #1
                            End
                        End If
                    End If
                    
                    ' check if the parent file is present
                    
                    strTemp = strGlobalPath & SEData(intParts).BasePart
                    
                    If CheckForFile(strTemp) = ER_FILENOTFOUND Then
                        If MsgBox(LE_FILE & strTemp & LE_NOTFOUND, vbYesNo + vbCritical + vbSystemModal, LS_MSGBOX_TITLE) = vbNo Then
                            Close #1
                            End
                        End If
                    End If
                    
                    Exit Do
                    
                End If
                
                ' read the next line for processing
                Line Input #1, strLineData
            Loop
            
        End If
        
    Loop
    
    Close #1
    
    DoEvents
    
ErrorTrap:
    If Err Then
        GetData = ER_FATALERROR
        Exit Function
    End If

End Function
Sub TransferSizes(strTemp() As String, strSizes() As String, intSizeCount As Integer, intVarCount As Integer)

    On Error Resume Next
    Dim strTempArray() As String
    Dim intVar As Integer
    Dim intCnt As Integer
    Dim temp As String
    
    ReDim strTempArray(intVarCount)
    ReDim Preserve strSizes(intSizeCount, intVarCount)
    
    For intCnt = 1 To intSizeCount
    
        ArrayParse strTempArray(), ByVal strTemp(intCnt), ByVal C_FILE_DELIMITER
        
        For intVar = 1 To intVarCount
            strSizes(intCnt, intVar) = strTempArray(intVar)
        Next

    Next
    
End Sub
Function GetVariables(strData As String, strVariables() As String, intVariableCount As Integer) As Integer


    On Error GoTo ErrorTrap
    
    GetVariables = ER_NOERROR
    
    intVariableCount = ArrayCount(ByVal strData, ByVal C_FILE_DELIMITER)
    
    If intVariableCount = 0 Then
        ' we really can't proceed
        GetVariables = ER_NOVARIABLES
        Exit Function
    End If
        
    ReDim Preserve strVariables(intVariableCount)
    ArrayParse strVariables(), ByVal strData, ByVal C_FILE_DELIMITER
    

ErrorTrap:
    If Err Then
        GetVariables = ER_FATALERROR
        Exit Function
    End If
    
End Function
Function GetFileName(intIndex As Integer, strData() As String) As String

    On Error Resume Next
    
    Dim strFileName  As String
    Dim strPartName As String
    Dim i As Integer
    Dim strSize As String
    Dim strChar As String
    
    strSize = strData(1)
    strPartName = Left(SEData(intIndex).BasePart, Len(SEData(intIndex).BasePart) - 4)
    strFileName = "_"
    
    ' replace any bad characters that may invalidate the file name
    For i = 1 To Len(strSize)
        strChar = Mid$(strSize, i, 1)
        If InStr(1, LM_INVALIDCHARS, strChar) > 0 Then
            strChar = LM_FRACTION
        End If
    
        strFileName = strFileName & strChar
    Next
    
    ' filename base part name (-.par) + size + .par
    GetFileName = strPartName & strFileName & ".PAR"
    
End Function
Sub GetSizes(strData As String, strSizes() As String, intSizeCount As Integer)

    On Error Resume Next
    
    Dim strTempArray() As String
    Dim i As Integer
    Dim intCount As Integer
    
    intCount = ArrayCount(ByVal strData, ByVal C_FILE_DELIMITER)
    
    ReDim strTempArray(intCount)
    ReDim Preserve strSizes(intSizeCount, 2)
    
    ArrayParse strTempArray(), ByVal strData, ByVal C_FILE_DELIMITER
    
    For i = 1 To intCount
        strSizes(intSizeCount, i) = strTempArray(i)
    Next
    
    strData = strSizes(2, 2)
    
End Sub

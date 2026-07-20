Attribute VB_Name = "Automation"
Option Explicit
Dim strLocale As String
Sub GetSEVersion()

    On Error Resume Next
    Dim strVersion As String
       
    strVersion = objApp.Version
    intVersion = Val(Mid$(strVersion, 1, 2))
    
End Sub

Function GetLocale()

'    On Error Resume Next
'
'    Dim lngLocale As Long
'    Dim strBuffer As String * 100
'
'    GetLocale = ER_ENGLISH
'
'    lngLocale = GetLocaleInfo(LOCALE_USER_DEFAULT, LOCALE_SENGLANGUAGE, strBuffer, 99)
'
'    strLocale = LPSTRToVBString(strBuffer)
'
'    If UCase$(strLocale) <> "ENGLISH" Then
'        ' not english
'        GetLocale = ER_NONENGLISH
'    End If
    
End Function
Private Function LPSTRToVBString$(ByVal s$)

    On Error Resume Next
    Dim intPosition As Integer
    
    intPosition = InStr(s$, Chr$(0))
    If intPosition > 0 Then
        LPSTRToVBString = Left$(s$, intPosition - 1)
    Else
        LPSTRToVBString = ""
    End If

End Function
Function SetLocale(strFileName As String) As Integer
    
'    Dim PropSets As Object
'    Dim Properties As Object
'    Dim prop As Object
'    Dim VerifyValue As Long
'    Dim NewLine As String
'    Dim Message As String
'
'    SetLocale = ER_NOERROR
'
'    Set PropSets = Nothing
'    Set PropSets = CreateObject("SolidEdge.fileproperties")
'
'    PropSets.Open (strFileName)
'
'    Set Properties = PropSets("ExtendedSummaryInformation")
'    Set prop = Properties.PropertyByID(igExtSumInfoCreationLocale)
'
'    prop.Value = the local
'
'    VerifyValue = prop.Value
'
'    Set prop = Nothing
'    Properties.Save
'    Set Properties = Nothing
'    Set PropSets = Nothing

End Function
Function GetPartObject(objOccurrence As Object, strExisting As String, strNew As String) As Integer

    On Error GoTo ErrorTrap
    
    Dim objPart As Object
    Dim objPartDocument As Object
    Dim objProperties As Object
    Dim strData As String
    Dim intReturn As Integer
    
    GetPartObject = ER_NOERROR
    
    If objOccurrence.Subassembly Then
        
        For Each objPart In objOccurrence.OccurrenceDocument.Occurrences
            intReturn = GetPartObject(objPart, strExisting, strNew)
        Next
        
    Else
    
        If objOccurrence.Name = strExisting Then
            objOccurrence.Replace strNew, False
            GetPartObject = ER_REPLACED
        End If
        
    End If
    
ErrorTrap:

    If Err Then
        GetPartObject = ER_FATALERROR
        Exit Function
    End If
    
End Function
Function ReplacePart() As Integer

    On Error Resume Next
    
    Dim strSourcePart As String
    Dim strTargetPart As String
    Dim objOccurrence As Object
    Dim objSelectSet As Object
    Dim strSelectedName As String
    Dim strPart As String
    Dim intReturn As Integer
    Dim objADoc As Object
    
    ReplacePart = ER_NOERROR
    
    Set objSelectSet = objApp.ActiveDocument.SelectSet
    strSelectedName = objSelectSet.Item(1).Name
    
    If objSelectSet.Count <> 1 Then
        MsgBox LE_NOSELECTED, vbOKOnly + vbCritical + vbSystemModal, LS_MSGBOX_TITLE
        Exit Function
    End If
    
    ' Begin PR4319464 TR61862 08/14/01 ccprestr The SeLibrary.exe aborts SolidEdge when replace option is used.
    ' SolidEdge aborts within the render(d).dll while updating the display of the select color dynamic list after the part replacement,
    ' because an invalid pointer to the part we have replaced is still in the select set and displayed in the select color dynamic list.
    objSelectSet.RemoveAll '(Fix Step 1) Remove the part from the select set displayed via the select color dynamic list.
    Call objApp.StartCommand(32876) '(Fix Step 2) Refresh the view to update the display of the select color dynamic list.
    ' End PR4319464 TR61862 08/14/01 ccprestr The SeLibrary.exe aborts SolidEdge when replace option is used.
    
    ' get the part name for the source and target
    strPart = strGlobalPath & SECurrent.ChildName
    
    ' cycle thorugh until  hte name is found

    Set objADoc = objApp.ActiveDocument
    
    For Each objOccurrence In objADoc.Occurrences
        intReturn = GetPartObject(objOccurrence, strSelectedName, strPart)
        If intReturn = ER_REPLACED Then
            ' done
            Exit For
        End If
        If intReturn = ER_FATALERROR Then
            MsgBox LE_FILE & strPart & LE_NOREPLACE, vbOKOnly + vbCritical + vbSystemModal, LS_MSGBOX_TITLE
            Exit For
        End If
        
    Next
    
    If Err Then
        ReplacePart = ER_FATALERROR
    End If
    
End Function
Function SEConnect() As Integer

    On Error Resume Next
    
    SEConnect = ER_NOERROR
    
    ' connect to solid edge and validate the environment
    Set objApp = GetObject(, "SolidEdge.Application")
    
    If Err Then
        ' edge probably not loaded
        SEConnect = ER_FATALERROR
        Exit Function
    End If
    
    If UCase$(objApp.ActiveEnvironment) <> "ASSEMBLY" Then
        SEConnect = ER_NOASSEMBLY
        Exit Function
    End If
    
End Function
Function SEBuildPart() As Integer

    On Error Resume Next
    
    Dim strSourcePart As String
    Dim strTargetPart As String
    Dim objProperties As Object
    Dim objSummaryInfo As Object
    Dim objProjectInfo As Object
    Dim objTemp As Object
    Dim intCurrent As Integer
    Dim i As Integer
    Dim strValue As String
    Dim dblValue As Double
    
    SEBuildPart = ER_NOERROR
    
    ' get the part name for the source and target
    strSourcePart = strGlobalPath & SECurrent.ParentName
    strTargetPart = strGlobalPath & SECurrent.ChildName
    
    ' first test for the source file
    If CheckForFile(strSourcePart) = ER_FILENOTFOUND Then
        MsgBox LE_FILE & strSourcePart & LE_NOTFOUNDSTOP, vbOKOnly + vbCritical + vbSystemModal, LS_MSGBOX_TITLE
        SEBuildPart = ER_NOSOURCEFILE
        Err.Clear
        GoTo Wrapup
        ' Exit Function
    End If
                    
    If CheckForFile(strTargetPart) = ER_FILEFOUND Then
        SEBuildPart = ER_FILEEXISTS
        Err.Clear
        GoTo Wrapup
        'Exit Function
    End If
    
'    If GetLocale() = ER_ENGLISH Then
'        If SetLocale(strSourcePart) = ER_FATALERROR Then
'            MsgBox LE_FILE & strSourcePart & LE_LOCALEFAIL, vbOKOnly + vbCritical + vbSystemModal, LS_MSGBOX_TITLE
'            SEBuildPart = ER_COPYFAIL
'            Exit Function
'        End If
'    End If
    
    frmSELibrary.labMessage.Caption = LT_PROCESS_COPYPART
    FileCopy strSourcePart, strTargetPart
    
    DoEvents
    
    If Err Then
        MsgBox LE_FILE & strTargetPart & LE_COPYFAIL, vbOKOnly + vbCritical + vbSystemModal, LS_MSGBOX_TITLE
        SEBuildPart = ER_COPYFAIL
        Err.Clear
        GoTo Wrapup
        ' Exit Function
    End If
    
    Set objDoc = objApp.Documents.Open(strTargetPart)
    DoEvents
    
    If Err Then
        MsgBox LE_FILE & strSourcePart & LE_NOOPEN, vbOKOnly + vbCritical + vbSystemModal, LS_MSGBOX_TITLE
        SEBuildPart = ER_NOOPEN
        Err.Clear
        GoTo Wrapup
    End If
    
    objDoc.Save
    
    DoEvents
    
    'hide the window to clean up the interface
    objApp.ActiveWindow.Visible = False
    DoEvents
    
    frmSELibrary.labMessage.Caption = LT_PROCESS_UPDATEPART
    
    ' delay compute
    objApp.DelayCompute = True
    
    Set objVariables = objDoc.Variables
    
    If objVariables.Count + 1 < UBound(SECurrent.Variables) Then
        If MsgBox(LE_FILE & strTargetPart & LE_NOPARTVARS, vbOKOnly + vbCritical + vbSystemModal, LS_MSGBOX_TITLE) = vbNo Then
            objApp.DelayCompute = False
            objApp.ActiveDocument.Models(1).Recompute
            objApp.ActiveDocument.Close
            objApp.ActiveDocument.Windows(1).View.Fit
            objApp.ActiveDocument.Save
            SEBuildPart = LE_NOPARTVARS
            
            If Err Then
                MsgBox LE_FILE & strTargetPart & LE_NOUPDATE, vbOKOnly + vbCritical + vbSystemModal, LS_MSGBOX_TITLE
                SEBuildPart = LE_NOUPDATE
                Err.Clear
                GoTo Wrapup
                'Exit Function
            End If
            GoTo Wrapup
            'Exit Function
        End If
    End If
    
    For i = 2 To UBound(SECurrent.Variables)
        
        strValue = ConvertValues(SECurrent.Sizes(i))
        dblValue = CDbl(strValue)
        If CDbl(strValue) <= 0 Then
            ' this is bad since SE can't handle <= zero stuff
            MsgBox LE_FILE & strTargetPart & Chr(10) & LE_ZERODIM1 & Str(strValue) & LE_ZERODIM2, vbOKOnly + vbCritical + vbSystemModal, LS_MSGBOX_TITLE
        Else
            ' changing a variable is where the v8 changes were
            
            Set objTemp = objVariables.Query(SECurrent.Variables(i))
            
            'Begin PR4351637 11/19/01 ccprestr Checking in Kris Kasprzak's fix for metric template files.
            ' See Kris's comments and 1 line code change below:
            ' something changed in the API where edited units are in meters
            ' not the default document units
            ' I can't find any property that states what the active UOM is
            ' so I'm assuming its meters and applying the appropriate conversion
            ' objTemp.Item(1).Value = dblValue / 39.370079
            
            ' above code change due to something in the API moving back to using document UOM
            ' kck 11-12-2001
            objTemp.Item(1).Value = objApp.ActiveDocument.UnitsOfMeasure.ParseUnit(1, dblValue)
            'End PR4351637 11/19/01 ccprestr Checking in Kris Kasprzak's fix for metric template files.
            
            DoEvents
            Set objTemp = Nothing
            
        End If
    Next
        
    ' force compute
    objApp.DelayCompute = False
    objDoc.Models(1).Recompute
    objDoc.Save
    DoEvents
    'MsgBox Err.Description
    
    If Err Then
        MsgBox LE_FILE & strTargetPart & LE_NOUPDATE, vbOKOnly + vbCritical + vbSystemModal, LS_MSGBOX_TITLE
        SEBuildPart = LE_NOUPDATE
        Err.Clear
        GoTo Wrapup
        'Exit Function
    End If
    
     ' update the part property information
    Set objProperties = objDoc.Properties
    
    ' intCurrent = intTabArray(frmSELibrary.tabData.Tab + 1)
    ' used incorrect array identifier 11-2-1999 KCK
    ' wrong part property added to the Title
    intCurrent = frmSELibrary.cboClasses.ItemData(frmSELibrary.cboClasses.ListIndex)
    
    objProperties.Item("SummaryInformation")("Title").Value = SEData(intCurrent).Class & " " & SECurrent.Sizes(1)
    objProperties.Item("SummaryInformation")("Author").Value = GetUser()
    objProperties.Item("DocumentSummaryInformation")("Category").Value = SEData(intCurrent).Type
    
    objProperties.Save
    Set objProperties = Nothing
    
    ' save
    objDoc.Save
    
    DoEvents
    
    If Err Then
        MsgBox LE_FILE & strTargetPart & LE_NOPROPERTIES, vbOKOnly + vbInformation + vbSystemModal, LS_MSGBOX_TITLE
        SEBuildPart = LE_NOUPDATE
        Err.Clear
    End If
   
    ' enable the full property editor
    If frmSELibrary.chkProperties.Value = 1 Then
    
        objApp.ActiveWindow.Visible = True
        DoEvents
        
        ' fit it
        objDoc.Windows(1).View.Fit
        
        frmSELibrary.Enabled = False
        frmSELibrary.Visible = False
        objDoc.EditProperties
        frmSELibrary.Enabled = True
        frmSELibrary.Visible = True
    End If
    
    ' just in case
    Err.Clear
    
    objDoc.Save
    
    DoEvents
    frmSELibrary.labMessage.Caption = LT_PROCESS_SAVEPART
    
    If Err Then
        MsgBox LE_FILE & strSourcePart & LE_NOSAVE, vbOKOnly + vbCritical + vbSystemModal, LS_MSGBOX_TITLE
        SEBuildPart = LE_NOSAVE
        Err.Clear
        GoTo Wrapup
        'Exit Function
    End If
    
    ' close
    objApp.ActiveDocument.Close
    
Wrapup:

    Set objVariables = Nothing
    Set objProperties = Nothing
    Set objSummaryInfo = Nothing
    Set objProjectInfo = Nothing
    Set objDoc = Nothing
        
End Function

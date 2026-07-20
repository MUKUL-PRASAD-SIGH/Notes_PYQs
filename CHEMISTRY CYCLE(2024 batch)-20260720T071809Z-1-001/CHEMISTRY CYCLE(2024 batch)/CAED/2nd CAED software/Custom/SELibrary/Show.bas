Attribute VB_Name = "ShowRoutines"
Option Explicit
Sub ShowHelp()

    On Error Resume Next
    
    frmHelp.Caption = LH_HELPCAPTION
    

End Sub
Function ShowAbout() As Integer

    On Error Resume Next
    frmAbout.Caption = LA_ABOUTCAPTION
    frmAbout.labAbout1.Caption = LA_TEXT1
    frmAbout.labAbout2.Caption = LA_LIC1 & LA_LIC2 & LA_LIC3 & LA_LIC4
    
End Function
Function ShowTabScroll() As Integer

    On Error Resume Next
    
    ShowTabScroll = ER_NOERROR
    
    If intLastTypeID > intTotalTabs Then
        frmSELibrary.cmdLeft.Visible = True
        frmSELibrary.cmdRight.Visible = True
    Else
        frmSELibrary.cmdLeft.Visible = False
        frmSELibrary.cmdRight.Visible = False
    End If
    
    If Err Then
        ShowTabScroll = ER_FATALERROR
    End If
    DoEvents
    
End Function
Function ShowTabs(intStart As Integer) As Integer

    On Error Resume Next
    
    Dim i As Integer
    Dim intEnd As Integer
    Dim intWidth As Integer
    Dim intTab As Integer
    
    ShowTabs = ER_NOERROR
    
    ' dislapy the first tab
    ' then display untill all are displayed or the total width is exceeded
    
    If intStart < 1 Then
        intStart = 1
    End If
    
    intTab = 1
    
    frmSELibrary.tabData.Tabs = intTab
    frmSELibrary.tabData.TabsPerRow = intTab
    frmSELibrary.tabData.Tab = intTab - 1
    frmSELibrary.tabData.Caption = SEData(intTabArray(intStart)).Type
    intWidth = Len(SEData(intTabArray(intStart)).Type)
    
    For i = intStart + 1 To intTotalTabs
        intTab = intTab + 1
        intWidth = intWidth + Len(SEData(intTabArray(i)).Type)
        If intWidth < MAX_TABWIDTH Then
            frmSELibrary.tabData.TabsPerRow = intTab
            frmSELibrary.tabData.Tabs = intTab
            frmSELibrary.tabData.Tab = intTab - 1
            frmSELibrary.tabData.Caption = SEData(intTabArray(i)).Type
        Else
            frmSELibrary.cmdLeft.Visible = True
            frmSELibrary.cmdRight.Visible = True
            Exit For
        End If
    Next
    
    DoEvents
    
    frmSELibrary.tabData.Tab = 0

    ShowStuff

    DoEvents
    
End Function

Sub ShowStuff()

    On Error Resume Next
    
    intCurrentTab = intFirstTab + frmSELibrary.tabData.Tab
    
    If LoadClassList() = ER_FATALERROR Then
        ' errors handled in function
    End If
    
    'If ShowGraphic(intCurrentPartID) = ER_FATALERROR Then
        ' errors handled in function
    'End If
    
    frmSELibrary.labMessage.Caption = ""
End Sub
Function ShowGraphic(intPartID As Integer) As Integer

    On Error Resume Next
    Dim strFile As String

    ShowGraphic = ER_NOERROR
    
    If frmSELibrary.cmdImage.Caption = LS_VIEWPART Then
        ' drawing viewer
        
        strFile = strGlobalPath & SEData(intPartID).DraftName
        
        If CheckForFile(strFile) = ER_FILENOTFOUND Then
            ShowGraphic = ER_FILENOTFOUND
            frmSELibrary.vwrPart.Visible = False
            frmSELibrary.vwrDraft.Visible = False
            frmSELibrary.labNoGraphic.Caption = LS_NODRAWING
        Else
            frmSELibrary.vwrDraft.DraftFile = strFile
            frmSELibrary.vwrPart.Visible = False
            frmSELibrary.vwrDraft.Visible = True
        End If
        
    Else
        ' viewer
        
        strFile = strGlobalPath & SEData(intPartID).BasePart
        
        If CheckForFile(strFile) = ER_FILENOTFOUND Then
            ShowGraphic = ER_FILENOTFOUND
            frmSELibrary.vwrPart.Visible = False
            frmSELibrary.vwrDraft.Visible = False
            frmSELibrary.labNoGraphic.Caption = LS_NOPART
        Else
            frmSELibrary.vwrPart.PartFile = strFile
            frmSELibrary.vwrDraft.Visible = False
            frmSELibrary.vwrPart.Visible = True
        End If
        
    End If
    
    DoEvents
    
End Function
Sub ShowLocations()

    On Error Resume Next
    
    frmLocations.cmdCancel.Caption = LS_CANCEL
    
    If frmLocations.Tag = LO_OPEN Then
        frmLocations.cmdOK.Caption = LS_OPEN
    Else
        frmLocations.cmdOK.Caption = LS_IMPORT
    End If
    
    frmLocations.Caption = LS_LOCATION_CAPTION
    
End Sub
Sub ShowMainScreen()

    On Error Resume Next
    
    ' update captions and text for localization
    frmSELibrary.Caption = LS_MAIN_CAPTION
    frmSELibrary.cmdDone.Caption = LS_BUTTON_DONE
    frmSELibrary.cmdAdd.Caption = LS_BUTTON_ADD
    frmSELibrary.cmdReplace.Caption = LS_BUTTON_REPLACE
    
    frmSELibrary.chkProperties.Caption = LS_CHK_PROPERTIES
    frmSELibrary.chkPlaceAtOrigin.Caption = LS_ORIGIN
    frmSELibrary.labNoGraphic.Caption = ""
    frmSELibrary.cmdLeft.ToolTipText = LT_BUTTON_LEFT
    frmSELibrary.cmdRight.ToolTipText = LT_BUTTON_RIGHT
    
    frmSELibrary.mnuFile.Caption = LM_FILE
    frmSELibrary.mnuImport.Caption = LM_IMPORT
    frmSELibrary.mnuOpen.Caption = LM_OPEN
    frmSELibrary.mnuExit.Caption = LM_EXIT
    frmSELibrary.mnuHelp.Caption = LM_HELP
    frmSELibrary.mnuAbout.Caption = LM_ABOUT
    frmSELibrary.mnuHelpHelp.Caption = LM_HELPHELP
    
    frmSELibrary.Image1.ZOrder 0
    frmSELibrary.labMessage.Caption = ""
    
    DoEvents
    
End Sub

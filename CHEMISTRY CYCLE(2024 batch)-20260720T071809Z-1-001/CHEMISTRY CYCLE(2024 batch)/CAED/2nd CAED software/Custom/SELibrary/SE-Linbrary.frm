VERSION 5.00
Object = "{BDC217C8-ED16-11CD-956C-0000C04E4C0A}#1.1#0"; "TABCTL32.OCX"
Object = "{5E9E78A0-531B-11CF-91F6-C2863C385E30}#1.0#0"; "MSFLXGRD.OCX"
Object = "{E03935A2-FBAD-11D0-8AC7-0800362FB302}#1.0#0"; "SEpartXd.ocx"
Object = "{4B3C83C2-1ADC-11D2-B1D1-08003669EA02}#1.0#0"; "SEDraftXd.ocx"
Begin VB.Form frmSELibrary 
   AutoRedraw      =   -1  'True
   Caption         =   "Solid Edge Library-code"
   ClientHeight    =   5805
   ClientLeft      =   165
   ClientTop       =   855
   ClientWidth     =   8880
   Icon            =   "SE-Linbrary.frx":0000
   LinkTopic       =   "Form1"
   MaxButton       =   0   'False
   MinButton       =   0   'False
   ScaleHeight     =   5805
   ScaleWidth      =   8880
   StartUpPosition =   3  'Windows Default
   Begin VB.CommandButton cmdReplace 
      Caption         =   "replace-code"
      Height          =   400
      Left            =   2430
      TabIndex        =   16
      Top             =   90
      Width           =   1100
   End
   Begin VB.CheckBox chkPlaceAtOrigin 
      Caption         =   "Place at assembly origin"
      Height          =   375
      Left            =   3645
      TabIndex        =   15
      Top             =   90
      Width           =   2400
   End
   Begin VB.CommandButton cmdImage 
      Caption         =   "View Part-code"
      Height          =   375
      Left            =   7380
      TabIndex        =   9
      Top             =   1080
      Width           =   1275
   End
   Begin VB.CommandButton cmdRight 
      Height          =   285
      Left            =   8520
      Picture         =   "SE-Linbrary.frx":030A
      Style           =   1  'Graphical
      TabIndex        =   6
      Top             =   630
      Width           =   285
   End
   Begin VB.CommandButton cmdLeft 
      Height          =   285
      Left            =   8190
      Picture         =   "SE-Linbrary.frx":078C
      Style           =   1  'Graphical
      TabIndex        =   5
      Top             =   630
      Width           =   285
   End
   Begin VB.CheckBox chkProperties 
      Caption         =   "Edit part properties - code"
      Height          =   375
      Left            =   6210
      TabIndex        =   2
      Top             =   90
      Width           =   2625
   End
   Begin VB.Frame frmData 
      BorderStyle     =   0  'None
      Height          =   4200
      Left            =   180
      TabIndex        =   3
      Top             =   990
      Width           =   8520
      Begin SEDRAFTXLib.SEDraftX vwrDraft 
         Height          =   3390
         Left            =   6075
         TabIndex        =   12
         Top             =   1620
         Width           =   3570
         _Version        =   65536
         _ExtentX        =   6297
         _ExtentY        =   5980
         _StockProps     =   33
         BackColor       =   -2147483643
         BorderStyle     =   1
         DraftFile       =   ""
      End
      Begin SEPARTXLib.SEpartX vwrPart 
         CausesValidation=   0   'False
         Height          =   3255
         Left            =   5220
         TabIndex        =   11
         Top             =   1080
         Width           =   3255
         _Version        =   65536
         _ExtentX        =   5741
         _ExtentY        =   5741
         _StockProps     =   33
         BackColor       =   4194304
         BorderStyle     =   1
         PartFile        =   ""
      End
      Begin VB.ComboBox cboClasses 
         Height          =   315
         Left            =   45
         Style           =   2  'Dropdown List
         TabIndex        =   8
         Top             =   90
         Width           =   4830
      End
      Begin MSFlexGridLib.MSFlexGrid grdData 
         CausesValidation=   0   'False
         Height          =   3600
         Left            =   0
         TabIndex        =   7
         Top             =   495
         Width           =   4830
         _ExtentX        =   8520
         _ExtentY        =   6350
         _Version        =   393216
         FixedCols       =   0
         BackColorSel    =   12582912
         ForeColorSel    =   -2147483643
         Redraw          =   -1  'True
         AllowBigSelection=   0   'False
         ScrollTrack     =   -1  'True
         FocusRect       =   0
         SelectionMode   =   1
         AllowUserResizing=   1
         Appearance      =   0
         OLEDropMode     =   1
      End
      Begin VB.PictureBox picBorder 
         Height          =   3600
         Left            =   4905
         ScaleHeight     =   3540
         ScaleWidth      =   3540
         TabIndex        =   13
         Top             =   540
         Width           =   3600
         Begin VB.Label labNoGraphic 
            Alignment       =   2  'Center
            Caption         =   "Graphic not found-code"
            BeginProperty Font 
               Name            =   "MS Sans Serif"
               Size            =   13.5
               Charset         =   0
               Weight          =   400
               Underline       =   0   'False
               Italic          =   0   'False
               Strikethrough   =   0   'False
            EndProperty
            Height          =   825
            Left            =   855
            TabIndex        =   14
            Top             =   1305
            Width           =   1815
         End
      End
      Begin VB.Image Image1 
         Height          =   465
         Left            =   -45
         Top             =   0
         Width           =   5010
      End
   End
   Begin VB.CommandButton cmdAdd 
      Caption         =   "Add-code"
      Height          =   400
      Left            =   1260
      TabIndex        =   1
      Top             =   90
      Width           =   1100
   End
   Begin VB.CommandButton cmdDone 
      Caption         =   "Done-code"
      Height          =   400
      Left            =   90
      TabIndex        =   0
      Top             =   90
      Width           =   1100
   End
   Begin TabDlg.SSTab tabData 
      Height          =   4650
      Left            =   90
      TabIndex        =   4
      Tag             =   "1"
      Top             =   630
      Width           =   8730
      _ExtentX        =   15399
      _ExtentY        =   8202
      _Version        =   393216
      Style           =   1
      Tabs            =   1
      TabsPerRow      =   1
      TabHeight       =   520
      WordWrap        =   0   'False
      TabCaption(0)   =   "Library-code"
      TabPicture(0)   =   "SE-Linbrary.frx":0C0E
      Tab(0).ControlEnabled=   -1  'True
      Tab(0).ControlCount=   0
   End
   Begin VB.Label labMessage 
      BorderStyle     =   1  'Fixed Single
      Caption         =   "code"
      Height          =   285
      Left            =   90
      TabIndex        =   10
      Top             =   5400
      Width           =   8700
   End
   Begin VB.Menu mnuFile 
      Caption         =   "file-code"
      Begin VB.Menu mnuOpen 
         Caption         =   "open-code"
      End
      Begin VB.Menu mnuImport 
         Caption         =   "import-code"
      End
      Begin VB.Menu mnuExit 
         Caption         =   "exit-code"
      End
   End
   Begin VB.Menu mnuHelp 
      Caption         =   "Help-code"
      Begin VB.Menu mnuHelpHelp 
         Caption         =   "Help-code"
      End
      Begin VB.Menu mnuAbout 
         Caption         =   "About-code"
      End
   End
End
Attribute VB_Name = "frmSELibrary"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Option Explicit
Option Base 1

Dim WithEvents objFileUIEvents As FileUIEvents
Attribute objFileUIEvents.VB_VarHelpID = -1
Private Sub cboClasses_Click()

    On Error Resume Next
    
    Dim intTypeID As Integer
    
    intTypeID = cboClasses.ItemData(cboClasses.ListIndex)
    intCurrentPartID = intTypeID
    LoadGrid intTypeID
    
    If ShowGraphic(intCurrentPartID) = ER_FATALERROR Then
        ' errors handled in function
    End If
    
    frmSELibrary.labMessage.Caption = ""
    Me.cmdAdd.Enabled = False
    Me.cmdReplace.Enabled = False
    
End Sub
Private Sub chkPlaceAtOrigin_MouseMove(Button As Integer, Shift As Integer, X As Single, Y As Single)
    On Error Resume Next
    Me.labMessage = LC_PLACEATORIGIN
End Sub
Private Sub chkProperties_MouseMove(Button As Integer, Shift As Integer, X As Single, Y As Single)

    On Error Resume Next
    Me.labMessage = LC_CHK_PROPERTIES
    
End Sub

Private Sub cmdAdd_Click()

    On Error Resume Next
    
    Dim intReturn As Integer
    Dim strPart As String
    Dim objADoc As Object
    
    Screen.MousePointer = vbHourglass
    
    frmSELibrary.labMessage.Caption = LT_PROCESS_CONNECT
    
    intReturn = SEConnect()
    
    Sleep 1 * 1000 '11/30/2005 ccprestr PR5342372
    
    GetSEVersion
    
    Sleep 1 * 1000 '11/30/2005 ccprestr PR5342372
    
    'If intVersion <> NEED_VERSION Then
    '    MsgBox LE_VERSION, vbOKOnly + vbCritical + vbSystemModal, LS_MSGBOX_TITLE
    '    Screen.MousePointer = vbDefault
    '    ' simply quitting seems too harsh
    '    Exit Sub
    'End If
    
    If intReturn = ER_NOASSEMBLY Then
        MsgBox LE_WRONGENVIRONMENT, vbOKOnly + vbCritical + vbSystemModal, LS_MSGBOX_TITLE
        Screen.MousePointer = vbDefault
        Exit Sub
    End If
    
    If intReturn = ER_FATALERROR Then
        ' this means that solid edge
        MsgBox LE_NOASSEMBLY, vbSystemModal + vbOKOnly + vbCritical, LS_MSGBOX_TITLE
        Screen.MousePointer = vbDefault
        Exit Sub
    End If

    frmSELibrary.labMessage.Caption = ""
    
    ' all error handling is done within the function
    frmSELibrary.labMessage.Caption = LT_PROCESS_BUILDPART
    
    intReturn = SEBuildPart()

    Sleep 5 * 1000 '11/30/2005 ccprestr PR5342372

    frmSELibrary.labMessage.Caption = ""
    
    If (intReturn = ER_NOERROR) Or (intReturn = ER_FILEEXISTS) Then
    
        If frmSELibrary.chkPlaceAtOrigin.Value = 1 Then
            ' place at origin
            strPart = strGlobalPath & SECurrent.ChildName
            Set objADoc = objApp.ActiveDocument
            Set objParts = objADoc.Occurrences
            DoEvents
            objParts.AddByFilename strPart
            
            If Err Then
                MsgBox LE_FILE & strPart & LE_ADDNEWPART, vbOKOnly + vbCritical + vbSystemModal, LS_MSGBOX_TITLE
            End If

        Else
        
            frmSELibrary.WindowState = 1
    
            DoEvents
    
    Sleep 1 * 1000 '11/30/2005 ccprestr PR5342372
            
            Set objFileUIEvents = objApp.FileUIEvents
            objApp.StartCommand seAssemblyPlacePartCommand
            Set objFileUIEvents = Nothing
    
    Sleep 1 * 1000 '11/30/2005 ccprestr PR5342372
    
            If Err Then
                MsgBox LE_FILE & strPart & LE_ADDNEWPART, vbOKOnly + vbCritical + vbSystemModal, LS_MSGBOX_TITLE
            End If
            
        End If
        
    End If
    
    Sleep 1 * 1000 '11/30/2005 ccprestr PR5342372
    
    ' release all objects
    Set objApp = Nothing
    Set objADoc = Nothing
    Set objParts = Nothing
    
    frmSELibrary.labMessage.Caption = ""
    Screen.MousePointer = vbDefault
    
    Sleep 1 * 1000 '11/30/2005 ccprestr PR5342372
    
End Sub

Private Sub cmdReplace_Click()

    On Error Resume Next
    Dim intReturn As Integer
    Dim strPart As String
    
    Screen.MousePointer = vbHourglass
    
    frmSELibrary.labMessage.Caption = LT_PROCESS_CONNECT
    
    intReturn = SEConnect()
    
    GetSEVersion
    
    'If intVersion <> NEED_VERSION Then
    '    MsgBox LE_VERSION, vbOKOnly + vbCritical + vbSystemModal, LS_MSGBOX_TITLE
    '    Screen.MousePointer = vbDefault
    '    ' simply quitting seems too harsh
    '    Exit Sub
    'End If
    
    If intReturn = ER_NOASSEMBLY Then
        MsgBox LE_WRONGENVIRONMENT, vbOKOnly + vbCritical + vbSystemModal, LS_MSGBOX_TITLE
        Screen.MousePointer = vbDefault
        Exit Sub
    End If
    
    If intReturn = ER_FATALERROR Then
        ' this means that solid edge is not running
        MsgBox LE_NOASSEMBLY, vbSystemModal + vbOKOnly + vbCritical, LS_MSGBOX_TITLE
        Screen.MousePointer = vbDefault
        Exit Sub
    End If

    frmSELibrary.labMessage.Caption = ""
    
    ' all error handling is done within the function
    frmSELibrary.labMessage.Caption = LT_PROCESS_BUILDPART
    
    intReturn = SEBuildPart()
    
    frmSELibrary.labMessage.Caption = ""
    
    If (intReturn = ER_NOERROR) Or (intReturn = ER_FILEEXISTS) Then
    
        ' replace it
        If ReplacePart() <> ER_NOERROR Then
            ' it worked
        End If
        
    End If
    
    frmSELibrary.labMessage.Caption = ""
    Screen.MousePointer = vbDefault

End Sub

Private Sub Form_Resize()

    On Error Resume Next
    
    If frmSELibrary.WindowState = 0 Then
        frmSELibrary.Width = 9000
        frmSELibrary.Height = 6480
    End If
    
End Sub

Private Sub Form_Unload(Cancel As Integer)

    On Error Resume Next
    
    cmdDone_Click
    
End Sub

Private Sub mnuAbout_Click()

    On Error Resume Next
    Load frmAbout
    If TopMost(frmAbout) <> ER_NOERROR Then
        ' skip it
    End If
    
    frmAbout.Show vbModal

    
End Sub

Private Sub mnuHelpHelp_Click()

    On Error Resume Next

    Dim strFile As String
    
    strFile = strGlobalPath & "\read-me.txt"
    
    If CheckForFile(strFile) = ER_FILENOTFOUND Then
        MsgBox LE_FILE & strFile & LE_NOREADME, vbOKOnly + vbCritical + vbSystemModal, LS_MSGBOX_TITLE
        Exit Sub
    End If
    
    Load frmHelp
    
    If TopMost(frmHelp) <> ER_NOERROR Then
        ' skip it
    End If
    
    frmHelp.Show vbModal
    
End Sub

Private Sub objFileUIEvents_OnPlacePartUI(Filename As String, AppendToTitle As String)

    On Error Resume Next
    
    Filename = strGlobalPath & SECurrent.ChildName

End Sub
Private Sub cmdAdd_MouseMove(Button As Integer, Shift As Integer, X As Single, Y As Single)

    On Error Resume Next
    Me.labMessage = LC_BUTTON_ADD
    
End Sub

Private Sub cmdDone_Click()

    On Error Resume Next
    Set objApp = Nothing
    
    End
    
End Sub

Private Sub cmdDone_MouseMove(Button As Integer, Shift As Integer, X As Single, Y As Single)

    On Error Resume Next
    Me.labMessage = LC_BUTTON_DONE
    
End Sub

Private Sub cmdImage_Click()

    On Error Resume Next
    
    If cmdImage.Caption = LS_VIEWPART Then
        cmdImage.Caption = LS_VIEWDRAWING
        If ShowGraphic(intCurrentPartID) = ER_FILENOTFOUND Then
            ' part not found error handled in function
        End If
    Else
        cmdImage.Caption = LS_VIEWPART
        
        If ShowGraphic(intCurrentPartID) = ER_FILENOTFOUND Then
            ' part not found error handled in function
        End If
        
    End If

End Sub

Private Sub cmdImage_MouseMove(Button As Integer, Shift As Integer, X As Single, Y As Single)

    On Error Resume Next
    
    If cmdImage.Caption = LS_VIEWPART Then
        labMessage.Caption = LC_VIEWER & LS_VIEWPART
    Else
        labMessage.Caption = LC_VIEWER & LS_VIEWDRAWING
    End If
    
End Sub

Private Sub cmdLeft_Click()

    On Error Resume Next
    
    cmdRight.Enabled = True
    
    If intFirstTab > 1 Then
        intFirstTab = intFirstTab - 1
    End If
    
    If intFirstTab = 1 Then
        cmdLeft.Enabled = False
    End If
    
    If ShowTabs(intFirstTab) = ER_FATALERROR Then
        ' bad
    End If

End Sub

Private Sub cmdLeft_MouseMove(Button As Integer, Shift As Integer, X As Single, Y As Single)

    On Error Resume Next
    Me.labMessage = LC_BUTTON_LEFT

End Sub

Private Sub cmdRight_Click()

    On Error Resume Next
    
    cmdLeft.Enabled = True
    
    If intFirstTab < UBound(intTabArray) Then
        intFirstTab = intFirstTab + 1
    End If
    
    If intFirstTab = UBound(intTabArray) Then
        cmdRight.Enabled = False
    End If
    
    If ShowTabs(intFirstTab) = ER_FATALERROR Then
        ' bad
    End If
    
End Sub

Private Sub cmdRight_MouseMove(Button As Integer, Shift As Integer, X As Single, Y As Single)

    On Error Resume Next
    Me.labMessage = LC_BUTTON_RIGHT
    
End Sub

Private Sub Form_Activate()

    On Error Resume Next
    
    intFirstTab = 1
    intCurrentTab = 1
    
    If BuildTabs(intFirstTab) = ER_FATALERROR Then
        MsgBox LE_FATALERROR, vbOKOnly + vbCritical + vbSystemModal, LS_MSGBOX_TITLE
        End
    End If
    
    If ShowTabScroll() = ER_FATALERROR Then
        MsgBox LE_FATALERROR, vbOKOnly + vbCritical + vbSystemModal, LS_MSGBOX_TITLE
        End
    End If
    
    If ShowTabs(intFirstTab) = ER_FATALERROR Then
        MsgBox LE_FATALERROR, vbOKOnly + vbCritical + vbSystemModal, LS_MSGBOX_TITLE
        End
    End If
    
    If LoadClassList() = ER_FATALERROR Then
        ' errors handled in function
    End If
    
    DoEvents
    
    ' LoadGrid 1
    
    DoEvents
    
End Sub

Private Sub Form_Load()


    On Error Resume Next
     
    ShowMainScreen

    picBorder.Top = 540
    picBorder.Left = 4905
    picBorder.Width = 3600
    picBorder.Height = 3600
    
    vwrPart.MouseAction = "rotate"
    vwrPart.ShowToolbar = False
    vwrPart.BorderStyle = 0
    vwrPart.Top = picBorder.Top
    vwrPart.Left = picBorder.Left
    vwrPart.Width = picBorder.Width
    vwrPart.Height = picBorder.Height
    
    vwrDraft.MouseAction = "pan"
    vwrDraft.ShowToolbar = False
    vwrDraft.BorderStyle = 0
    vwrDraft.Top = picBorder.Top
    vwrDraft.Left = picBorder.Left
    vwrDraft.Width = picBorder.Width
    vwrDraft.Height = picBorder.Height
    
    frmSELibrary.cmdLeft.Visible = False
    frmSELibrary.cmdRight.Visible = False
           
    cmdImage.Caption = LS_VIEWPART
    vwrPart.Visible = False
    vwrDraft.Visible = False
    
End Sub

Private Sub Form_MouseMove(Button As Integer, Shift As Integer, X As Single, Y As Single)

    On Error Resume Next
    Me.labMessage.Caption = ""
    
End Sub



Private Sub frmData_MouseMove(Button As Integer, Shift As Integer, X As Single, Y As Single)

    On Error Resume Next
    labMessage.Caption = ""
    
End Sub

Private Sub grdData_Click()
    On Error Resume Next
    
    Dim i As Integer
    Dim intRow As Integer
    Dim strFileName As String
    Dim intCurrent As Integer
    Dim intTypeID As Integer
    Dim strFullName As String
    
    intTypeID = cboClasses.ItemData(cboClasses.ListIndex)
    intRow = frmSELibrary.grdData.Row
    
    If intRow <> frmSELibrary.grdData.RowSel Then
        frmSELibrary.grdData.Col = 0
        frmSELibrary.grdData.ColSel = frmSELibrary.grdData.Cols - 1
    End If
    
    intCurrent = intTabArray(Me.tabData.Tab + 1)
    
    ReDim SECurrent.Variables(frmSELibrary.grdData.Cols)
    ReDim SECurrent.Sizes(frmSELibrary.grdData.Cols)
    
    ' get the data
    For i = 1 To UBound(SEData(intTypeID).Variables)
        SECurrent.Sizes(i) = SEData(intTypeID).Sizes(intRow, i)
    Next
    
    ' get the variables
    For i = 1 To UBound(SEData(intTypeID).Variables)
        SECurrent.Variables(i) = SEData(intTypeID).Variables(i)
    Next
    
    strFileName = GetFileName(intTypeID, SECurrent.Sizes)
    strFullName = strGlobalPath & strFileName
    
    SECurrent.MemberName = SECurrent.Sizes(1)
    SECurrent.ChildName = strFileName
    SECurrent.ParentName = SEData(intTypeID).BasePart
    
    If Len(Dir(strFullName)) > 0 Then
        ' found
        frmSELibrary.labMessage.Caption = LF_FILE & strFullName & LF_FOUND
        frmSELibrary.chkProperties.Enabled = False
    Else
        ' not found allow property additions
        frmSELibrary.labMessage.Caption = LF_FILE & strFullName & LF_NOT_FOUND
        frmSELibrary.chkProperties.Enabled = True
    End If
    
    Me.cmdAdd.Enabled = True
    Me.cmdReplace.Enabled = True
    
End Sub

Private Sub grdData_DblClick()

    On Error Resume Next
    cmdAdd_Click

End Sub

Private Sub Image1_MouseMove(Button As Integer, Shift As Integer, X As Single, Y As Single)

    On Error Resume Next
    Me.labMessage = LC_LABEL_CLASS
    
End Sub

Private Sub mnuExit_Click()
    
    On Error Resume Next
    
    cmdDone_Click

End Sub

Private Sub mnuImport_Click()

    On Error Resume Next
    
    Load frmLocations
    frmLocations.Tag = LO_IMPORT
    If TopMost(frmLocations) <> ER_NOERROR Then
        ' skip it
    End If
    frmLocations.Show vbModal
    
End Sub

Private Sub mnuOpen_Click()

    On Error Resume Next
    
    Load frmLocations
    If TopMost(frmLocations) <> ER_NOERROR Then
        ' skip it
    End If
    frmLocations.Tag = LO_OPEN
    frmLocations.Show vbModal
    
    DoEvents
    
    Exit Sub
    
    If BuildTabs(intFirstTab) = ER_FATALERROR Then
        MsgBox LE_FATALERROR, vbOKOnly + vbCritical + vbSystemModal, LS_MSGBOX_TITLE
        End
    End If
    
    If ShowTabScroll() = ER_FATALERROR Then
        MsgBox LE_FATALERROR, vbOKOnly + vbCritical + vbSystemModal, LS_MSGBOX_TITLE
        End
    End If
    
    If ShowTabs(intFirstTab) = ER_FATALERROR Then
        MsgBox LE_FATALERROR, vbOKOnly + vbCritical + vbSystemModal, LS_MSGBOX_TITLE
        End
    End If
    
    If LoadClassList() = ER_FATALERROR Then
        ' errors handled in function
    End If
    
    DoEvents
    ' this will force a refresh if another data file is opened
    'Me.grdData.Visible = False
    ' Me.tabData.Refresh
    
    LoadGrid 1
    
    DoEvents
    
End Sub

Private Sub tabData_MouseMove(Button As Integer, Shift As Integer, X As Single, Y As Single)

    On Error Resume Next
    Me.labMessage.Caption = LC_TABTYPE
    
End Sub

Private Sub tabData_MouseUp(Button As Integer, Shift As Integer, X As Single, Y As Single)
    
    On Error Resume Next
    
    intCurrentTab = intFirstTab + Me.tabData.Tab

    If LoadClassList() = ER_FATALERROR Then
        ' errors handled in function
    End If
    
    frmSELibrary.labMessage.Caption = ""

End Sub


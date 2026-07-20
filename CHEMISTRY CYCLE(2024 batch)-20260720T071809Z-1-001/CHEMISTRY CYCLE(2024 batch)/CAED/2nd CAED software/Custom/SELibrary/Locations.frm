VERSION 5.00
Begin VB.Form frmLocations 
   BorderStyle     =   3  'Fixed Dialog
   Caption         =   "Solid Edge Datafile Location - code"
   ClientHeight    =   4020
   ClientLeft      =   45
   ClientTop       =   330
   ClientWidth     =   5670
   Icon            =   "Locations.frx":0000
   LinkTopic       =   "Form1"
   MaxButton       =   0   'False
   MinButton       =   0   'False
   ScaleHeight     =   4020
   ScaleWidth      =   5670
   ShowInTaskbar   =   0   'False
   StartUpPosition =   3  'Windows Default
   Begin VB.FileListBox filDatFiles 
      Height          =   2625
      Left            =   2970
      Pattern         =   "*.dat"
      TabIndex        =   4
      Top             =   945
      Width           =   2580
   End
   Begin VB.CommandButton cmdCancel 
      Caption         =   "Cancel - code"
      Height          =   400
      Left            =   1440
      TabIndex        =   3
      Top             =   90
      Width           =   1215
   End
   Begin VB.CommandButton cmdOK 
      Caption         =   "OK - code"
      Height          =   400
      Left            =   135
      TabIndex        =   2
      Top             =   90
      Width           =   1215
   End
   Begin VB.DirListBox dirDir 
      Height          =   2565
      Left            =   135
      TabIndex        =   1
      Top             =   990
      Width           =   2775
   End
   Begin VB.DriveListBox drvDrive 
      Height          =   315
      Left            =   120
      TabIndex        =   0
      Top             =   580
      Width           =   5430
   End
   Begin VB.Label labMessage 
      BorderStyle     =   1  'Fixed Single
      Caption         =   "code"
      Height          =   285
      Left            =   135
      TabIndex        =   5
      Top             =   3645
      Width           =   5415
   End
End
Attribute VB_Name = "frmLocations"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Option Explicit

Dim strNewFile As String
Private Sub cmdCancel_Click()

    On Error Resume Next
    
    Unload frmLocations
    Set frmLocations = Nothing

End Sub

Private Sub cmdOK_Click()

    On Error Resume Next
    Dim intReturn As Integer
    
    intReturn = CheckValidDat(strNewFile)
    
    If intReturn = ER_VALIDFAIL Then
        MsgBox LE_FILE & strNewFile & LE_VALIDFAIL, vbOKOnly + vbCritical + vbSystemModal, LS_MSGBOX_TITLE
        cmdCancel_Click
    ElseIf intReturn = ER_INVALIDDAT Then
        MsgBox LE_FILE & strNewFile & LE_INVALIDDAT, vbOKOnly + vbCritical + vbSystemModal, LS_MSGBOX_TITLE
        Exit Sub
    End If
    
    If Me.Tag = LO_IMPORT Then
        If ImportData(strDataFile, strNewFile) = ER_FATALERROR Then
            MsgBox "Import Fail--this is bad", vbOKOnly + vbCritical + vbSystemModal, LS_MSGBOX_TITLE
            End
        End If
    Else
    
        strDataFile = strNewFile
        
        If SaveNewLocation(strGlobalPath) <> ER_NOERROR Then
            MsgBox LE_NOSAVEINI, vbOKOnly + vbCritical + vbSystemModal, LS_MSGBOX_TITLE
            End
        End If
        ' we probably need to save the location to the INI file
    End If
    
    If GetData() <> ER_NOERROR Then
        ' this is really bad
        MsgBox LE_NODATREAD, vbOKOnly + vbCritical + vbSystemModal, LS_MSGBOX_TITLE
        End
    End If
    
    frmSELibrary.SetFocus
    
    cmdCancel_Click
    
End Sub

Private Sub dirDir_Change()

    On Error Resume Next
    
    Me.filDatFiles.Path = dirDir.Path
    
End Sub

Private Sub drvDrive_Change()

    On Error Resume Next
    
    Me.dirDir.Path = Me.drvDrive.Drive
    Me.filDatFiles.Path = dirDir.Path
    
End Sub

Private Sub filDatFiles_Click()

    On Error Resume Next
    
    If Right(Me.dirDir, 1) = "\" Then
        strGlobalPath = Mid$(Me.dirDir, 1, Len(Me.dirDir) - 1)
    Else
        strGlobalPath = Me.dirDir
    End If
    
    strNewFile = strGlobalPath & "\" & Me.filDatFiles
    
    Me.cmdOK.Enabled = True
    
End Sub

Private Sub filDatFiles_DblClick()

    On Error Resume Next
    cmdOK_Click

End Sub

Private Sub Form_Activate()

    On Error Resume Next
    ShowLocations
    labMessage.Caption = ""
    Me.cmdOK.Enabled = False
      
End Sub

Private Sub Form_Load()

    On Error Resume Next

    Screen.MousePointer = vbDefault
    
End Sub


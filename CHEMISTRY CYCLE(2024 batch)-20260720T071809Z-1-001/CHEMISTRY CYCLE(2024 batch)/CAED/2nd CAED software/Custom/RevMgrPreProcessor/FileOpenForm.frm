VERSION 5.00
Begin VB.Form frmOpenFiles 
   Caption         =   "frmOpenFiles Caption"
   ClientHeight    =   4530
   ClientLeft      =   345
   ClientTop       =   7350
   ClientWidth     =   9270
   BeginProperty Font 
      Name            =   "Comic Sans MS"
      Size            =   8.25
      Charset         =   0
      Weight          =   400
      Underline       =   0   'False
      Italic          =   0   'False
      Strikethrough   =   0   'False
   EndProperty
   LinkTopic       =   "Form1"
   PaletteMode     =   1  'UseZOrder
   ScaleHeight     =   4530
   ScaleWidth      =   9270
   Begin VB.TextBox txtFilter 
      Height          =   330
      Left            =   1440
      TabIndex        =   26
      Text            =   "Nothing"
      Top             =   3120
      Width           =   2535
   End
   Begin VB.CheckBox chkDft 
      Caption         =   "Dft"
      Height          =   255
      Left            =   120
      TabIndex        =   25
      Top             =   1440
      Width           =   1215
   End
   Begin VB.CheckBox chkPwd 
      Caption         =   "Pwd"
      Height          =   255
      Left            =   120
      TabIndex        =   24
      Top             =   1080
      Width           =   1095
   End
   Begin VB.CheckBox chkAsm 
      Caption         =   "Asm"
      Height          =   255
      Left            =   120
      TabIndex        =   23
      Top             =   720
      Width           =   1215
   End
   Begin VB.CheckBox chkParPsm 
      Caption         =   "Par/Psm"
      Height          =   255
      Left            =   120
      TabIndex        =   22
      Top             =   360
      Width           =   1215
   End
   Begin VB.CheckBox chkStop 
      Caption         =   "Stop After Problems"
      Height          =   250
      Left            =   5280
      TabIndex        =   20
      ToolTipText     =   "This option stops on files with failed features or when an error occurs opening a file!"
      Top             =   2880
      Width           =   1935
   End
   Begin VB.TextBox txtStopAfter 
      Height          =   375
      Left            =   4320
      TabIndex        =   19
      Text            =   "100"
      ToolTipText     =   "This value stops and restards SolidEdge after # number of files have been processed."
      Top             =   3240
      Width           =   495
   End
   Begin VB.CheckBox chkSave 
      Caption         =   "Save Files"
      Height          =   250
      Left            =   5280
      TabIndex        =   18
      Top             =   3600
      Width           =   1455
   End
   Begin VB.CheckBox chkDontRecompute 
      Caption         =   "Do Not Recompute"
      Height          =   250
      Left            =   5280
      TabIndex        =   17
      Top             =   3240
      Width           =   1935
   End
   Begin VB.CheckBox chkLogFile 
      Caption         =   "Open From Log File"
      Height          =   250
      Left            =   5280
      TabIndex        =   16
      Top             =   3960
      Width           =   1815
   End
   Begin VB.Timer timTimer 
      Left            =   6825
      Top             =   7000
   End
   Begin VB.FileListBox filList 
      BeginProperty Font 
         Name            =   "MS Sans Serif"
         Size            =   8.25
         Charset         =   0
         Weight          =   400
         Underline       =   0   'False
         Italic          =   0   'False
         Strikethrough   =   0   'False
      EndProperty
      Height          =   1455
      Left            =   1440
      Pattern         =   "*.exe"
      TabIndex        =   12
      Top             =   4740
      Visible         =   0   'False
      Width           =   2535
   End
   Begin VB.DirListBox dirList 
      BeginProperty Font 
         Name            =   "MS Sans Serif"
         Size            =   8.25
         Charset         =   0
         Weight          =   400
         Underline       =   0   'False
         Italic          =   0   'False
         Strikethrough   =   0   'False
      EndProperty
      Height          =   1440
      Left            =   4080
      TabIndex        =   11
      Top             =   4740
      Visible         =   0   'False
      Width           =   2955
   End
   Begin VB.Frame Frame1 
      Caption         =   " Files To Process "
      BeginProperty Font 
         Name            =   "MS Sans Serif"
         Size            =   8.25
         Charset         =   0
         Weight          =   400
         Underline       =   0   'False
         Italic          =   0   'False
         Strikethrough   =   0   'False
      EndProperty
      Height          =   1335
      Left            =   6780
      TabIndex        =   7
      Top             =   1560
      Width           =   2415
      Begin VB.OptionButton optAllFiles 
         Caption         =   "All files in selected directory and subdirectories."
         BeginProperty Font 
            Name            =   "MS Sans Serif"
            Size            =   8.25
            Charset         =   0
            Weight          =   400
            Underline       =   0   'False
            Italic          =   0   'False
            Strikethrough   =   0   'False
         EndProperty
         Height          =   495
         Left            =   60
         TabIndex        =   10
         Top             =   780
         Width           =   2295
      End
      Begin VB.OptionButton optAllInDirectory 
         Caption         =   "All files in selected directory."
         BeginProperty Font 
            Name            =   "MS Sans Serif"
            Size            =   8.25
            Charset         =   0
            Weight          =   400
            Underline       =   0   'False
            Italic          =   0   'False
            Strikethrough   =   0   'False
         EndProperty
         Height          =   255
         Left            =   60
         TabIndex        =   9
         Top             =   540
         Width           =   2295
      End
      Begin VB.OptionButton optSelected 
         Caption         =   "Selected files."
         BeginProperty Font 
            Name            =   "MS Sans Serif"
            Size            =   8.25
            Charset         =   0
            Weight          =   400
            Underline       =   0   'False
            Italic          =   0   'False
            Strikethrough   =   0   'False
         EndProperty
         Height          =   255
         Left            =   60
         TabIndex        =   8
         Top             =   240
         Value           =   -1  'True
         Width           =   1815
      End
   End
   Begin VB.CommandButton cmdProcess 
      Caption         =   "Process"
      Height          =   375
      Left            =   7980
      TabIndex        =   5
      ToolTipText     =   "This program processes a user defined list of assy files in Rev Mgr.  The purpose is to identify missing links to attachments."
      Top             =   3060
      Width           =   1215
   End
   Begin VB.CommandButton cmdCancel 
      Caption         =   "Exit"
      Height          =   375
      Left            =   7980
      TabIndex        =   4
      Top             =   3480
      Width           =   1215
   End
   Begin VB.DirListBox dirDirectory 
      Height          =   2130
      Left            =   4080
      TabIndex        =   2
      Top             =   240
      Width           =   2595
   End
   Begin VB.FileListBox filFiles 
      Height          =   2790
      Left            =   1440
      MultiSelect     =   2  'Extended
      Pattern         =   "*.exe"
      TabIndex        =   1
      Top             =   240
      Width           =   2535
   End
   Begin VB.DriveListBox drvDrive 
      Height          =   345
      Left            =   4080
      TabIndex        =   0
      Top             =   2520
      Width           =   2655
   End
   Begin VB.Label lblVersion 
      Caption         =   "V9.1"
      BeginProperty Font 
         Name            =   "Comic Sans MS"
         Size            =   14.25
         Charset         =   0
         Weight          =   700
         Underline       =   0   'False
         Italic          =   0   'False
         Strikethrough   =   0   'False
      EndProperty
      ForeColor       =   &H000000FF&
      Height          =   495
      Left            =   0
      TabIndex        =   21
      Top             =   3480
      Width           =   1215
   End
   Begin VB.Label lblTypeUtility 
      Caption         =   "lblTypeUtilityField"
      BeginProperty Font 
         Name            =   "Comic Sans MS"
         Size            =   12
         Charset         =   0
         Weight          =   400
         Underline       =   0   'False
         Italic          =   0   'False
         Strikethrough   =   0   'False
      EndProperty
      ForeColor       =   &H000000FF&
      Height          =   300
      Left            =   1440
      TabIndex        =   15
      Top             =   3840
      Width           =   2175
   End
   Begin VB.Label lblBottomNotes 
      Caption         =   "lblBottomNotesField"
      ForeColor       =   &H000000FF&
      Height          =   255
      Left            =   1440
      TabIndex        =   14
      Top             =   4200
      Width           =   7815
   End
   Begin VB.Label lblPath 
      Caption         =   "Label3"
      Height          =   255
      Left            =   3960
      TabIndex        =   13
      Top             =   0
      Width           =   5235
   End
   Begin VB.Label lblInstructions 
      Caption         =   "Notes -"
      BeginProperty Font 
         Name            =   "MS Sans Serif"
         Size            =   8.25
         Charset         =   0
         Weight          =   400
         Underline       =   0   'False
         Italic          =   0   'False
         Strikethrough   =   0   'False
      EndProperty
      ForeColor       =   &H00000080&
      Height          =   1155
      Left            =   6840
      TabIndex        =   6
      Top             =   360
      Width           =   2415
   End
   Begin VB.Label Label1 
      Caption         =   "PAR/PSM Files:"
      Height          =   255
      Left            =   1560
      TabIndex        =   3
      Top             =   60
      Width           =   1635
   End
End
Attribute VB_Name = "frmOpenFiles"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Option Explicit
Private Waiting As Boolean
    
    Dim I As Integer
    Dim J As Integer
    
    Dim Cnt As Integer
    
    Dim blnCreated As Boolean
    Dim MyArray() As String
    Dim MyFile As String
    Dim P As Integer
    Dim Black As String
    Dim MyString As String
    
    Private Function SetFilters()
    MyString = ""
If frmOpenFiles.chkAsm.value = 1 Then
    If MyString <> "" Then
        MyString = MyString + ";"
    End If
    MyString = MyString + "*.asm"
End If

If frmOpenFiles.chkParPsm.value = 1 Then
    If MyString <> "" Then
        MyString = MyString + ";"
    End If
    MyString = MyString + "*.par;*.psm"
End If

If frmOpenFiles.chkPwd.value = 1 Then
    If MyString <> "" Then
        MyString = MyString + ";"
    End If
    MyString = MyString + "*.pwd"
End If

If frmOpenFiles.chkDft.value = 1 Then
    If MyString <> "" Then
        MyString = MyString + ";"
    End If
    MyString = MyString + "*.dft"
End If

If MyString = "" Then
    MyString = "*.asm"
    frmOpenFiles.chkAsm.value = 1
End If

frmOpenFiles.txtFilter = MyString
frmOpenFiles.filFiles.Pattern = MyString
frmOpenFiles.filList.Pattern = MyString
frmOpenFiles.filFiles.Refresh
Debug.Print frmOpenFiles.filFiles.Pattern

    End Function
Private Sub chkAsm_Click()
Call SetFilters
End Sub

Private Sub chkDft_Click()
Call SetFilters
End Sub

Private Sub chkLogFile_Click()
    If chkLogFile.value = 1 Then
        Debug.Print filFiles.Pattern
        filFiles.Pattern = "*.log;*.txt"
        filFiles.Refresh
        Debug.Print filFiles.Pattern
        frmOpenFiles.chkAsm.Enabled = False
        frmOpenFiles.chkParPsm.Enabled = False
        frmOpenFiles.chkPwd.Enabled = False
        frmOpenFiles.chkDft.Enabled = False
        lblInstructions.Caption = "You have elected to get files from a log file."
    ElseIf chkLogFile.value = 0 Then
        frmOpenFiles.chkAsm.Enabled = True
        frmOpenFiles.chkParPsm.Enabled = True
        frmOpenFiles.chkPwd.Enabled = True
        frmOpenFiles.chkDft.Enabled = True
        frmOpenFiles.chkAsm.value = 1
        frmOpenFiles.filFiles.Refresh
    End If
    
End Sub

Private Sub chkParPsm_Click()
Call SetFilters
End Sub

Private Sub chkPwd_Click()
Call SetFilters
End Sub

Private Sub cmdCancel_Click()
    End
End Sub
Public Sub Wait(Seconds As Double)
    timTimer.Interval = Seconds * 1000
    timTimer.Enabled = True
    
    Waiting = True
    Do While Waiting
        DoEvents
    Loop
    timTimer.Enabled = False
End Sub



'
Private Sub cmdProcess_Click()
Dim I As Integer


If chkLogFile.value = 1 Then
    Call BuildArrayFromLogFile(intFileNameCount)
Else

If filFiles.ListCount > 0 Or optAllFiles Then
  
    If optSelected Then
        ReDim strFileNames(1 To filFiles.ListCount)
        For I = 0 To filFiles.ListCount - 1
        If filFiles.Selected(I) Then
            intFileNameCount = intFileNameCount + 1
            strFileNames(intFileNameCount) = filFiles.Path & "\" & filFiles.List(I)
        End If
        Next
    ElseIf optAllInDirectory Then
        ReDim strFileNames(1 To filFiles.ListCount)
        For I = 0 To filFiles.ListCount - 1
            intFileNameCount = intFileNameCount + 1
            strFileNames(intFileNameCount) = filFiles.Path & "\" & filFiles.List(I)
        Next
    ElseIf optAllFiles Then
        Status "Creating list of files to process ...", dirDirectory.Path & "*.*"
        Call ReadFileNamesFromDirectory(dirDirectory.Path, intFileNameCount, strFileNames)
        
        DoEvents
        If StopProcess Then
            MsgBox "Processing aborted."
            Exit Sub
        End If
    End If
     
    ' Check to be sure at least one part file has been specified.
    If intFileNameCount = 0 Then
        If optAllFiles Then
            ' Turn off the display of the status dialog.
            Status
        End If
        
        If optSelected Then
            MsgBox "No part files are selected."
        ElseIf optAllInDirectory Then
            MsgBox "No part files exist in the directory specified."
        ElseIf optAllFiles Then
            MsgBox "No part files exist in the directories specified."
        End If
        Exit Sub
    End If

End If
End If

For I = 1 To intFileNameCount
    Debug.Print "File " & I & " of " & intFileNameCount & " is " & strFileNames(I)
Next

Call modBasicFunctions.Process
End Sub

Public Sub timTimer_Timer()
    Waiting = False
End Sub

Private Sub dirDirectory_Change()
    filFiles.Path = dirDirectory.Path
    lblPath.Caption = "Path: " & dirDirectory.Path
End Sub

Private Sub drvDrive_Change()
    dirDirectory.Path = drvDrive.Drive
End Sub

Private Sub Form_Load()
    lblInstructions.Caption = "Select the directory containing " & _
                    "the PAR/PSM files.  Click the Process button to " & _
                    "start the process of counting features in each file."

    lblPath.Caption = "Path: " & dirDirectory.Path
End Sub
' Recursively travels through a directory structure saving all files into an array.
Private Sub ReadFileNamesFromDirectory(ByVal FilePath As String, intFileNameCount As Integer, strFileNames() As String)
    Dim I As Integer
    Dim strDirList() As String
    Dim intDirCount As Integer
    
    ' Uses a directory and file list control to get a listing of files
    ' and directories for a specific directory.  Set the controls
    ' to point to the specified directory.
    dirList.Path = FilePath
    filList.Path = FilePath
  '  filList.Pattern = "*.par;*.psm"
    'debug.Print "filepath is " & FilePath
    ' If there are any subdirectories in the current directory save their
    ' names in an array so they can be processed below.
    If dirList.ListCount > 0 Then
        ' Allocate memory to store the directories.
        ReDim strDirList(1 To dirList.ListCount)
        
        ' Set the counter.
        intDirCount = dirList.ListCount
        
        ' Save the directory names into the array.
        For I = 0 To dirList.ListCount - 1
            strDirList(I + 1) = dirList.List(I)
        Next
    End If
    
    ' If there are any files in the current directory save their names
    ' into the filename array.
    If filList.ListCount > 0 Then
  '  Debug.Print "inside sub list count is " & filList.ListCount
  '  Debug.Print "inside sub file list count is " & filFiles.ListCount
        ' Allocate more space in the filename array to store the filenames.
        ReDim Preserve strFileNames(1 To intFileNameCount + filList.ListCount)
        
        ' Save all the filenames of the files in the current directory
        ' into the filename array.
        For I = 0 To filList.ListCount - 1
        '    Debug.Print "I = " & I
            intFileNameCount = intFileNameCount + 1
            strFileNames(intFileNameCount) = filList.Path & "\" & filList.List(I)
       '     Debug.Print "strFilenames is " & strFileNames(intFileNameCount)
        Next
    End If
    
    ' Loop through subdirectories of the current directory and get their files.
    For I = 1 To intDirCount
        ' Recursively call this subroutine.
        Call ReadFileNamesFromDirectory(strDirList(I), intFileNameCount, strFileNames)
    Next
End Sub



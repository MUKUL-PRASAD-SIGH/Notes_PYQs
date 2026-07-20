VERSION 5.00
Begin VB.Form frmOpenSave 
   BorderStyle     =   1  'Fixed Single
   Caption         =   "Open & Save"
   ClientHeight    =   7875
   ClientLeft      =   3840
   ClientTop       =   3510
   ClientWidth     =   8415
   Icon            =   "OpenSave.frx":0000
   LinkTopic       =   "Form1"
   MaxButton       =   0   'False
   MinButton       =   0   'False
   PaletteMode     =   1  'UseZOrder
   ScaleHeight     =   7875
   ScaleWidth      =   8415
   StartUpPosition =   2  'CenterScreen
   Begin VB.Frame Frame4 
      Caption         =   "Document Status"
      Height          =   855
      Left            =   5400
      TabIndex        =   30
      Top             =   5880
      Width           =   2895
      Begin VB.CheckBox OptProcessReleased 
         Caption         =   "&Update released, baselined, obselete,  in work  documents"
         Height          =   495
         Left            =   120
         TabIndex        =   16
         Top             =   240
         Value           =   1  'Checked
         Width           =   2655
      End
   End
   Begin VB.Frame Frame3 
      Caption         =   "Message Dialogs"
      Height          =   1335
      Left            =   5400
      TabIndex        =   29
      Top             =   4440
      Width           =   2895
      Begin VB.OptionButton OptShowDialogs 
         Caption         =   "Show message dialogs while processing"
         Height          =   495
         Left            =   120
         TabIndex        =   15
         ToolTipText     =   "Regular Message Dialogs Will Be Displayed While Processing.. Requires User Intervention to Continue Processing"
         Top             =   720
         Width           =   2415
      End
      Begin VB.OptionButton OptSuppressDialogs 
         Caption         =   "Suppress &message dialogs while processing"
         Height          =   375
         Left            =   120
         TabIndex        =   14
         ToolTipText     =   "Turns Off Message Dialogs.. Enables True Unattended Batch Processing"
         Top             =   240
         Value           =   -1  'True
         Width           =   2415
      End
   End
   Begin VB.TextBox txtLogfile 
      Height          =   285
      Left            =   1200
      TabIndex        =   17
      Top             =   6960
      Width           =   4395
   End
   Begin VB.TextBox txtStatus 
      BackColor       =   &H8000000F&
      Height          =   285
      Left            =   120
      Locked          =   -1  'True
      TabIndex        =   20
      Top             =   7440
      Width           =   7935
   End
   Begin VB.Frame Frame2 
      Caption         =   "Document Types"
      Height          =   2535
      Left            =   5400
      TabIndex        =   28
      Top             =   240
      Width           =   2895
      Begin VB.CheckBox chkUpdateDV 
         Caption         =   "Update Drawing &Views"
         Height          =   195
         Left            =   360
         TabIndex        =   9
         Top             =   1920
         Width           =   2175
      End
      Begin VB.CheckBox ChkWeldment 
         Caption         =   "&Weldment Documents"
         Height          =   195
         Left            =   120
         TabIndex        =   10
         Top             =   2220
         Width           =   2175
      End
      Begin VB.CheckBox chkGroundParts 
         Caption         =   "&Ground reoriented parts"
         Enabled         =   0   'False
         Height          =   195
         Left            =   300
         TabIndex        =   7
         Top             =   1380
         Width           =   2295
      End
      Begin VB.CheckBox chkAssemblyDifference 
         Caption         =   "L&og differences"
         Enabled         =   0   'False
         Height          =   195
         Left            =   300
         TabIndex        =   23
         Top             =   1140
         Value           =   1  'Checked
         Width           =   2295
      End
      Begin VB.CheckBox chkDraft 
         Caption         =   "D&raft documents"
         Height          =   195
         Left            =   120
         TabIndex        =   8
         Top             =   1680
         Width           =   2415
      End
      Begin VB.CheckBox chkSheetmetal 
         Caption         =   "Sheet &Metal documents"
         Height          =   195
         Left            =   120
         TabIndex        =   5
         Top             =   600
         Value           =   1  'Checked
         Width           =   2415
      End
      Begin VB.CheckBox chkAssembly 
         Caption         =   "Assem&bly documents"
         Height          =   195
         Left            =   120
         TabIndex        =   6
         Top             =   900
         Width           =   2415
      End
      Begin VB.CheckBox chkPart 
         Caption         =   "Par&t documents"
         Height          =   195
         Left            =   120
         TabIndex        =   4
         Top             =   300
         Value           =   1  'Checked
         Width           =   2475
      End
   End
   Begin VB.FileListBox filList 
      Height          =   1455
      Left            =   120
      Pattern         =   "*.par"
      TabIndex        =   27
      Top             =   8280
      Visible         =   0   'False
      Width           =   2535
   End
   Begin VB.DirListBox dirList 
      Height          =   1440
      Left            =   2760
      TabIndex        =   26
      Top             =   8280
      Visible         =   0   'False
      Width           =   2955
   End
   Begin VB.Frame Frame1 
      Caption         =   "Documents to Process "
      Height          =   1455
      Left            =   5400
      TabIndex        =   25
      Top             =   2880
      Width           =   2895
      Begin VB.OptionButton optAllFiles 
         Caption         =   "&A"
         Height          =   195
         Left            =   60
         TabIndex        =   24
         Top             =   870
         Width           =   195
      End
      Begin VB.OptionButton optAllInDirectory 
         Caption         =   "All &files in selected directory"
         Height          =   195
         Left            =   60
         TabIndex        =   11
         Top             =   225
         Value           =   -1  'True
         Width           =   2295
      End
      Begin VB.OptionButton optSelected 
         Caption         =   "&Selected files only"
         Height          =   255
         Left            =   60
         TabIndex        =   12
         Top             =   525
         Width           =   1815
      End
      Begin VB.Label Label4 
         Caption         =   "&All files in selected directory and subdirectories"
         Height          =   390
         Left            =   360
         TabIndex        =   13
         Top             =   840
         Width           =   1995
      End
   End
   Begin VB.CommandButton cmdProcess 
      Caption         =   "&Process"
      Height          =   375
      Left            =   5760
      TabIndex        =   18
      Top             =   6960
      Width           =   1035
   End
   Begin VB.CommandButton cmdCancel 
      Caption         =   "&Cancel"
      Height          =   375
      Left            =   6960
      TabIndex        =   19
      Top             =   6960
      Width           =   1035
   End
   Begin VB.DirListBox dirDirectory 
      Height          =   5715
      Left            =   2700
      TabIndex        =   1
      Top             =   300
      Width           =   2595
   End
   Begin VB.FileListBox filFiles 
      Height          =   6330
      Left            =   60
      MultiSelect     =   2  'Extended
      Pattern         =   "*.par;*.psm;*.asm;*.dft;*.pwd"
      TabIndex        =   0
      Top             =   300
      Width           =   2535
   End
   Begin VB.DriveListBox drvDrive 
      Height          =   315
      Left            =   2640
      TabIndex        =   3
      Top             =   6240
      Width           =   2595
   End
   Begin VB.Label lblLogfile 
      Alignment       =   1  'Right Justify
      Caption         =   "&Log file name:"
      Height          =   195
      Left            =   120
      TabIndex        =   22
      Top             =   6960
      Width           =   1035
   End
   Begin VB.Label Label2 
      Caption         =   "D&irectories:"
      Height          =   255
      Left            =   2700
      TabIndex        =   21
      Top             =   60
      Width           =   1635
   End
   Begin VB.Label Label1 
      Caption         =   "&Documents:"
      Height          =   255
      Left            =   60
      TabIndex        =   2
      Top             =   60
      Width           =   1635
   End
End
Attribute VB_Name = "frmOpenSave"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Option Explicit

' Flag used to indicate the stop button was selected during processing.
Private StopProcess As Boolean

Private LastLogFilename As String
Private Waiting As Boolean
Private ProcessedAssemblies() As String
Private ProcessedAssemblyCount As Integer
Private UserSelectedMode As Boolean
Private AssemblyMode As Integer

Public Enum PartState
    PartOK = 1
    PartFailed = 2
    PartUnderConstrained = 3
    PartChanged = 4
    PartNotLoaded = 5
    PartPattern = 6
End Enum

Private Type DimensionData
    Name As String
    Prefix As String
    Suffix As String
    Value As Double
    'Commented out the following line of code for TR41078
    'Object As Object 'Dimension
    Validated As Boolean
End Type

Private Type PartData
    Name As String
    Occurrence As Object
    Matrix(1 To 16) As Double
    State As PartState
    PositionState As PartState
End Type

Private Type AssemblyData
    Name As String
    PartCount As Integer
    Occurrences() As PartData
    Processed As Boolean
End Type

Private Type AssemblyConfigurationsExist
    AssemblyName As String
    ConfigurationExists As Boolean
End Type

Private Type MissingDocumentType
    MissingDocument As String
    ParentDocument As String
    Available As Boolean
    DraftReference As Boolean
End Type

'''''''''''''''''''''''''''''''''''''''''''''

Private Type STARTUPINFO
   cb As Long
   lpReserved As String
   lpDesktop As String
   lpTitle As String
   dwX As Long
   dwY As Long
   dwXSize As Long
   dwYSize As Long
   dwXCountChars As Long
   dwYCountChars As Long
   dwFillAttribute As Long
   dwFlags As Long
   wShowWindow As Integer
   cbReserved2 As Integer
   lpReserved2 As Long
   hStdInput As Long
   hStdOutput As Long
   hStdError As Long
End Type

Private Type PROCESS_INFORMATION
   hProcess As Long
   hThread As Long
   dwProcessId As Long
   dwThreadId As Long
End Type

Private Declare Function WaitForSingleObject Lib "kernel32" (ByVal _
   hHandle As Long, ByVal dwMilliseconds As Long) As Long

Private Declare Function CreateProcessA Lib "kernel32" (ByVal _
   lpApplicationName As Long, ByVal lpCommandLine As String, ByVal _
   lpProcessAttributes As Long, ByVal lpThreadAttributes As Long, _
   ByVal bInheritHandles As Long, ByVal dwCreationFlags As Long, _
   ByVal lpEnvironment As Long, ByVal lpCurrentDirectory As Long, _
   lpStartupInfo As STARTUPINFO, lpProcessInformation As _
   PROCESS_INFORMATION) As Long

Private Declare Function CloseHandle Lib "kernel32" (ByVal _
   hObject As Long) As Long

Private Const NORMAL_PRIORITY_CLASS = &H20&
Private Const INFINITE = -1&
Private Const STARTF_USESHOWWINDOW = &H1
Private Const SW_HIDE = 0

'''''''''''''''''''''''''''''''''''''''''''''

Private Declare Function OpenProcess Lib "kernel32.dll" (ByVal _
   dwAccess As Long, ByVal fInherit As Integer, ByVal hObject _
   As Long) As Long
   
Private Declare Sub Sleep Lib "kernel32" (ByVal dwMilliseconds As Long)



Private Sub SetPattern()
    Dim Pattern As String
    
    ' Initialize the filter to be an empty string.
    Pattern = ""
    
    ' Check to see if the part check box is checked.
    If chkPart.Value = vbChecked Then
        ' Set the filter for part documents.
        Pattern = "*.par"
    End If
    
    ' Check to see if the sheet metal check box is checked.
    If chkSheetmetal.Value = vbChecked Then
        ' Check to see if this is the first filter or not.
        If Pattern = "" Then
            ' Set the filter for sheet metal documents.
            Pattern = "*.psm"
        Else
            ' Append the filter for sheet metal documents.
            Pattern = Pattern & ";*.psm"
        End If
    End If
    
    ' Check to see if the assembly check box is checked.
    If chkAssembly.Value = vbChecked Then
        ' Check to see if this is the first filter or not.
        If Pattern = "" Then
            ' Set the filter for assembly documents.
            Pattern = "*.asm"
        Else
            ' Append the filter for assembly documents.
            Pattern = Pattern & ";*.asm"
        End If
        
        chkAssemblyDifference.Enabled = True
        If chkAssemblyDifference.Value = vbChecked Then
            chkGroundParts.Enabled = True
        Else
            chkGroundParts.Enabled = False
        End If
    Else
        chkAssemblyDifference.Enabled = False
        chkGroundParts.Enabled = False
    End If
    
    ' Check to see if the Draft check box is checked.
    If chkDraft.Value = vbChecked Then
        ' Check to see if this is the first filter or not.
        If Pattern = "" Then
            ' Set the filter for Draft documents.
            Pattern = "*.dft"
        Else
            ' Append the filter for Draft documents.
            Pattern = Pattern & ";*.dft"
        End If
        ' Enable the Update Drawing Views checkbox
        chkUpdateDV.Enabled = True
    Else
        ' Disable the Update Drawing Views checkbox
        chkUpdateDV.Enabled = False
    End If
    
    
    
    ' Check to see if the Weldment check box is checked.
    If ChkWeldment.Value = vbChecked Then
        ' Check to see if this is the first filter or not.
        If Pattern = "" Then
            ' Set the filter for Draft documents.
            Pattern = "*.pwd"
        Else
            ' Append the filter for Draft documents.
            Pattern = Pattern & ";*.pwd"
        End If
    End If
    
    
    
    
    
    
    
    ' If no documents are specified, define a garbage filter so not files will display in the box.
    If Pattern = "" Then
        Pattern = "zzzzzzzz.zzzzzzz"
    End If
    
    filFiles.Pattern = Pattern
End Sub


Private Sub chkAssembly_Click()
    SetPattern
End Sub

Private Sub chkAssemblyDifference_Click()
    If chkAssemblyDifference.Value = vbChecked Then
        chkGroundParts.Enabled = True
    Else
        chkGroundParts.Enabled = False
    End If
End Sub

Private Sub chkDraft_Click()
    SetPattern
End Sub



Private Sub chkPart_Click()
    SetPattern
End Sub


Private Sub chkSheetmetal_Click()
    SetPattern
End Sub


Private Sub ChkWeldment_Click()
SetPattern
End Sub

Private Sub cmdCancel_Click()
    If cmdCancel.Caption = "Stop" Then
        StopProcess = True
        cmdCancel.Caption = "Cancel"
    Else
        End
    End If
End Sub


Private Sub cmdProcess_Click()
    Dim i As Integer
    Dim j As Integer
    Dim k As Integer
    Dim objApp As Object
    Dim objDoc As Object
    Dim objNewWindow As Object
    Dim strFileNames() As String
    Dim strPartFiles() As String
    Dim strAssemblyFiles() As String
    Dim strDraftFiles() As String
    Dim strWeldmentFiles() As String
    Dim intFileNameCount As Integer
    Dim strPattern As String
    Dim strTempFilenames() As String
    Dim intCurrentIndex As Integer
    Dim intPartIndex As Integer
    Dim intAssemblyIndex As Integer
    Dim intDraftIndex As Integer
    Dim intWeldmentIndex As Integer
    Dim LogFile As Integer
    Dim LogFilename As String
    Dim ErrorFound As Boolean
    Dim Answer As Integer
    Dim DrawViewCount As Integer
    Dim ErrMessage As String
    Dim V4Dimensions() As DimensionData
    Dim DimCount As Integer
    Dim Index As Integer
    Dim OldAssemblies() As AssemblyData
    Dim OldAssemblyCount As Integer
    Dim NewAssemblies() As AssemblyData
    Dim NewAssemblyCount As Integer
    Dim ConfigurationExists() As AssemblyConfigurationsExist
    Dim ConfigFile As String
    Dim TmpFile As Integer
    Dim TopLevelCount As Integer
    Dim TopLevelDocs() As String
    Dim MissingDocs() As MissingDocumentType
    Dim MissingDocCount As Integer
    Dim OriginalFileCount As Integer
    Dim FilePath As String
    Dim filename As String
    Dim NewPaths() As String
    Dim NewPathCount As Integer
    Dim MissingOccurrences() As String
    Dim intMissingPartCount As Integer
    Dim MissingAssemblies() As String
    Dim intMissingAssemblyCount As Integer
    Dim DraftReferenceMissing As Boolean
    Dim docLastSavedMajorVersion As Integer
    Dim objRevisionManager As RevisionManager.Application
    Dim SwitchExists As String
    Dim retval As Long
    Dim EdgePath As String
    
    
    On Error Resume Next
    Set objApp = GetObject(, "SolidEdge.Application")
    If Err = 0 Then
        If objApp.Documents.Count > 0 Then
            MsgBox "You must close all open Solid Edge documents before running this utility.", vbOKOnly + vbExclamation, "Open & Save"
            objApp.Activate
            End
        End If
    End If
    
    
    
    
    Call GetSolidEdgePath(EdgePath)
    
    ' Save the current assembly mode
    Call GetAssemblyMode(AssemblyMode)

    ' Initialize the counter for the number of assemblies processed.
    OldAssemblyCount = 0
    
    ' Check to see if the specified log file exists.
    If Dir(txtLogfile.Text) <> "" Then
        Me.SetFocus
        If MsgBox("The specified log file '" & txtLogfile.Text & "' exists.  Do you want to overwrite it?", vbYesNo + vbQuestion, "Open & Save") = vbNo Then
            Exit Sub
        Else
            Kill txtLogfile.Text
        End If
    End If
    
    ' Change the caption on the cancel button and set the stop processing flag.
    cmdCancel.Caption = "Stop"
    StopProcess = False
    
    ' Initialize flag to indicate if the user wants to stop processing files.
    StopProcess = False
        
    ' Build up list of files to process depending on which option was selected.
    intFileNameCount = 0
    
    ' Loop through for each file type.
    If filFiles.ListCount > 0 Or optAllFiles Then
        ' Only process the selected files so build up the array so it
        ' contains the currently selected files.
        If optSelected Then
            ' Allocate space to store the filenames.
            ReDim strTempFilenames(1 To filFiles.ListCount)
            
            ' Load the selected filenames into the array.
            For i = 0 To filFiles.ListCount - 1
                If filFiles.Selected(i) Then
                    intFileNameCount = intFileNameCount + 1
                    strTempFilenames(intFileNameCount) = filFiles.Path & "\" & filFiles.List(i)
                End If
            Next
        ' Process all the files in the current directory.
        ElseIf optAllInDirectory Then
            
            ' Allocate space to store the filenames.
            ReDim strTempFilenames(1 To filFiles.ListCount)
            
            ' Load the selected filenames into the array.
            For i = 0 To filFiles.ListCount - 1
                intFileNameCount = intFileNameCount + 1
                strTempFilenames(intFileNameCount) = filFiles.Path & "\" & filFiles.List(i)
            Next
        ' Process all files in the current directory and subdirectories.
        ElseIf optAllFiles Then
            ' Loop through once for each file type.
            For i = 1 To 5
                If i = 1 And chkPart.Value = vbChecked Then
                    strPattern = "*.par"
                ElseIf i = 2 And chkSheetmetal.Value = vbChecked Then
                    strPattern = "*.psm"
                ElseIf i = 3 And chkAssembly.Value = vbChecked Then
                    strPattern = "*.asm"
                ElseIf i = 4 And chkDraft.Value = vbChecked Then
                    strPattern = "*.dft"
                ElseIf i = 5 And ChkWeldment.Value = vbChecked Then
                    strPattern = "*.pwd"
                Else
                    strPattern = ""
                End If

                If strPattern <> "" Then
                    ' Process all files in the current directory and subdirectories.
                    txtStatus.Text = "Creating list of files to process ..."
                    txtStatus.Refresh
                    Call ReadFileNamesFromDirectory(dirDirectory.Path, intFileNameCount, strTempFilenames, strPattern)
                End If
            Next
        End If
    End If

    OriginalFileCount = intFileNameCount
    
    ' Divide the files by type so they can be processed in order.
    If intFileNameCount > 0 Then
        ReDim strPartFiles(1 To intFileNameCount)
        ReDim strAssemblyFiles(1 To intFileNameCount)
        ReDim strDraftFiles(1 To intFileNameCount)
        ReDim strWeldmentFiles(1 To intFileNameCount)
        ReDim ProcessedAssemblies(1 To intFileNameCount)
        ProcessedAssemblyCount = 0
        
        ' Sort the files base on type.
        intPartIndex = 0
        intAssemblyIndex = 0
        intDraftIndex = 0
        intWeldmentIndex = 0
        For i = 1 To 5
            For j = 1 To intFileNameCount
                If i = 1 And LCase(Right(strTempFilenames(j), 3)) = "par" Then
                    intPartIndex = intPartIndex + 1
                    strPartFiles(intPartIndex) = strTempFilenames(j)
                ElseIf i = 2 And LCase(Right(strTempFilenames(j), 3)) = "psm" Then
                    intPartIndex = intPartIndex + 1
                    strPartFiles(intPartIndex) = strTempFilenames(j)
                ElseIf i = 3 And LCase(Right(strTempFilenames(j), 3)) = "asm" Then
                    intAssemblyIndex = intAssemblyIndex + 1
                    strAssemblyFiles(intAssemblyIndex) = strTempFilenames(j)
                ElseIf i = 4 And LCase(Right(strTempFilenames(j), 3)) = "dft" Then
                    intDraftIndex = intDraftIndex + 1
                    strDraftFiles(intDraftIndex) = strTempFilenames(j)
                ElseIf i = 5 And LCase(Right(strTempFilenames(j), 3)) = "pwd" Then
                    intWeldmentIndex = intWeldmentIndex + 1
                    strWeldmentFiles(intWeldmentIndex) = strTempFilenames(j)
                    
                End If
            Next
        Next
        
        ' Process the assembly list to get the top level assemblies.
        If intAssemblyIndex > 1 Then
            Call CleanAssemblyList(strAssemblyFiles, intAssemblyIndex)
        End If
        
        ' Create a big list of all of the files.
        If intPartIndex + intAssemblyIndex + intDraftIndex + intWeldmentIndex = 0 Then
            If optAllFiles Then
                ' Clear the status display.
                txtStatus.Text = ""
                txtStatus.Refresh
            End If
    
            Me.SetFocus
            MsgBox "Unexpected error encountered when processing file list.", vbOKOnly + vbCritical, "Open & Save"
            Exit Sub
        End If
        
        ReDim strFileNames(1 To intPartIndex + intAssemblyIndex + intDraftIndex + intWeldmentIndex) As String
        
        intFileNameCount = 0
        For i = 1 To intPartIndex
            intFileNameCount = intFileNameCount + 1
            strFileNames(intFileNameCount) = strPartFiles(i)
        Next
        For i = 1 To intAssemblyIndex
            intFileNameCount = intFileNameCount + 1
            strFileNames(intFileNameCount) = strAssemblyFiles(i)
        Next
        
        For i = 1 To intWeldmentIndex
            intFileNameCount = intFileNameCount + 1
            strFileNames(intFileNameCount) = strWeldmentFiles(i)
        Next
        
        For i = 1 To intDraftIndex
            intFileNameCount = intFileNameCount + 1
            strFileNames(intFileNameCount) = strDraftFiles(i)
        Next
    
        
    
    
    Else
        If optAllFiles Then
            ' Clear the status display.
            txtStatus.Text = ""
            txtStatus.Refresh
        End If

        If optSelected Then
            Me.SetFocus
            MsgBox "No Solid Edge documents are selected.", vbOKOnly + vbExclamation, "Open & Save"
        ElseIf optAllInDirectory Then
            Me.SetFocus
            MsgBox "No Solid Edge documents exist in the directory specified.", vbOKOnly + vbExclamation, "Open & Save"
        ElseIf optAllFiles Then
            Me.SetFocus
            MsgBox "No Solid Edge documents exist in the directories specified.", vbOKOnly + vbExclamation, "Open & Save"
        End If
        Exit Sub
    End If
    
    ' Check to see if the configuration files for the assemblies exist.
    ' Need to do it now before they get automatically created during the open save process.
    If intAssemblyIndex > 0 Then
        ReDim ConfigurationExists(1 To intAssemblyIndex) As AssemblyConfigurationsExist
    End If
    
    For i = 1 To intAssemblyIndex
        ' Attempt to open the configuration file to see if it exists.
        ConfigFile = Left(strAssemblyFiles(i), Len(strAssemblyFiles(i)) - 3) & "cfg"
        
        ' Save the assembly name.
        ConfigurationExists(i).AssemblyName = strAssemblyFiles(i)
        
        ' Determine whether the configuration exists or not by attempting to open the file.
        On Error Resume Next
        TmpFile = FreeFile
        Open ConfigFile For Input As #TmpFile
        If Err Then
            ' Save the configuration does not exist.
            ConfigurationExists(i).ConfigurationExists = False
            Err.Clear
        Else
            ' Save the configuration does exist.
            ConfigurationExists(i).ConfigurationExists = True
            Close TmpFile
        End If
    Next



'***** Do the rev man broken link thing
Dim test As String
Set objRevisionManager = CreateObject("RevisionManager.Application")
Call objRevisionManager.FindBrokenLinks(strFileNames(), , False, True, True, True, True, True, True, True)
 test = objRevisionManager.LogFilesDirectory
 
 Set objRevisionManager = Nothing
 
    
On Error Resume Next
    LogFile = FreeFile
    Open txtLogfile.Text For Output As #LogFile
    If Err Then
        Me.SetFocus
        MsgBox "Error opening specified logfile: '" & txtLogfile.Text & "'", vbOKOnly + vbCritical, "Open & Save"
        Exit Sub
    End If
    On Error GoTo 0
    
    ' Write header information into log file.
    Print #LogFile, "Open & Save: " & Date & ", " & Time
    Print #LogFile, ""


    ' Turn on error trapping.
    On Error Resume Next

    ' Attempt to connect to a running instance of Solid Edge.
    Set objApp = GetObject(, "SolidEdge.Application")
    If Err Then
        txtStatus.Text = "Starting Solid Edge ..."
        txtStatus.Refresh
        
        ' Solid Edge is not running.  Clear the previous error.
        Err.Clear
        
        ' Start Solid Edge.
        Set objApp = CreateObject("SolidEdge.Application")

        ' Cannot start Solid Edge, so exit the program.
        If Err Then
            Me.SetFocus
            MsgBox "Cannot start Solid Edge.", vbCritical + vbOKOnly, "Open & Save"
            End
        End If

        ' Make Solid Edge visible.
        objApp.Visible = True
        
        ' Set appropriate option to show or suppress all Solid Edge message boxes
        If frmOpenSave.OptSuppressDialogs.Value = True Then
            objApp.DisplayAlerts = False
        End If
        
        If frmOpenSave.OptShowDialogs.Value = True Then
            objApp.DisplayAlerts = True
        End If
        
        
    End If
    On Error GoTo 0
    
    
    
    ' Set the appropriate mode for opening assemblies.
    If chkAssemblyDifference.Value = vbChecked And intAssemblyIndex > 0 Then
        ' Set the assembly mode to open assemblies with Occurrences inactive
        SetAssemblyMode 1
    Else
        ' Set the assembly mode to open assemblies with all Occurrences active.
        SetAssemblyMode 2
    End If


    lngStatus = 999
    ' Loop through the list of files.
    For i = 1 To intFileNameCount
        ' Check the global variable to see if the stop process command button has been selected
        DoEvents
        If StopProcess Then
            Me.SetFocus
            MsgBox "Processing aborted."
            GoTo RegularEnd
        End If

        ' For every 50 files, close and reopen Solid Edge.
        If i Mod 50 = 0 Then
            txtStatus.Text = "Closing and restarting Solid Edge..."
            txtStatus.Refresh
            ' Turn on error trapping.
            On Error Resume Next
            
            objApp.Quit
            Set objNewWindow = Nothing
            Set objDoc = Nothing
            Set objApp = Nothing
            ' Pause for 5 seconds.
            Sleep 10000
            
            ' Start Solid Edge.
            Set objApp = CreateObject("SolidEdge.Application")
    
            ' Cannot start Solid Edge, so exit the program.
            If Err Then
                Me.SetFocus
                MsgBox "Cannot start Solid Edge."
                End
            End If
                
            objApp.Visible = True
            ' Set appropriate option to show or suppress all Solid Edge message boxes
            If frmOpenSave.OptSuppressDialogs.Value = True Then
                objApp.DisplayAlerts = False
            End If
            
            If frmOpenSave.OptShowDialogs.Value = True Then
                objApp.DisplayAlerts = True
            End If
            
            
            On Error GoTo 0
        End If
            
        ' Display current status
        txtStatus.Text = "Processing file " & i & " of " & intFileNameCount & ": '" & strFileNames(i) & "'"
        txtStatus.Refresh

        ' Check to make sure we have write access to the file.
        If (GetAttr(strFileNames(i)) And vbReadOnly) <> 0 Then
            Set objDoc = Nothing
            ErrMessage = "   The file is read only."
        Else
            If LCase(Right(strFileNames(i), 3)) = "asm" Then
                ' To save time, rather than processing all assemblies, when
                '  OpenSave is running, Assembly will save all subassemblies
                '  when it saves a top-level assembly
                Call SetOpenSaveMacroFlag(1)
            End If
            
            ' Open the document.
            On Error Resume Next
            
            
            
            'july 2004 add support for processing Released\Baselined\Obselete status files
            'Next few lines of code to check doc status  GC
            
                    strSEStatus = GetStatus(strFileNames(i))
                    
            If frmOpenSave.OptProcessReleased.Value = 1 Then
                    
                    
                    If UCase(strSEStatus) = "RELEASED" Then
                            blnChangedStatus = True
                            lngStatus = 0

                            
                    ElseIf UCase(strSEStatus) = "IN WORK" Then
                            blnChangedStatus = True
                            lngStatus = 0
                            

                    ElseIf UCase(strSEStatus) = "BASELINED" Then
                            blnChangedStatus = True
                            lngStatus = 0
                            

                    ElseIf UCase(strSEStatus) = "OBSOLETE" Then
                            blnChangedStatus = True
                            lngStatus = 0
                            

                    End If
                    
                    If lngStatus = 0 Then
                        Print #LogFile, "Released/baselined/obselete/in work document was saved > " & strFileNames(i)
                    End If
        
             End If
             
                    
           
            
            
            If UCase(strSEStatus) <> "AVAILABLE" And UCase(strSEStatus) <> "IN REVIEW" Then
                If blnChangedStatus = False Then
                
                        blnChangedStatus = False
                        strSEStatus = ""
                        lngStatus = 999
                        Print #LogFile, "***Document is either released, baselined, or obselete and was not processed. > " & strFileNames(i)
                        Print #LogFile, ""
                        GoTo SkipToNext
                End If
            
            
            
            
            
            End If
            
        
            If frmOpenSave.OptProcessReleased.Value = 1 Then
             'check to see if registry location exists
                     SwitchExists = QueryValue(HKEY_CURRENT_USER, "Software\Unigraphics Solutions\Solid Edge\Version " & strSEVersion & "\Debug", "DocMgmt_OverrideStatusCheckForFileAccess")
        
                    If SwitchExists = "" Then
                        '-- Create key in CURRENT USER and set it
                        SetKeyValue HKEY_CURRENT_USER, "Software\Unigraphics Solutions\Solid Edge\Version " & strSEVersion & "\Debug", "DocMgmt_OverrideStatusCheckForFileAccess", "1", REG_DWORD&
                    End If
            
            
                    If SwitchExists = "0" Then
                        '-- Create key in CURRENT USER and set it
                        SetKeyValue HKEY_CURRENT_USER, "Software\Unigraphics Solutions\Solid Edge\Version " & strSEVersion & "\Debug", "DocMgmt_OverrideStatusCheckForFileAccess", "1", REG_DWORD&
                    End If
            End If
            
            'july 2004 add support for processing Released\Baselined\Obselete status files
            'end of code to check doc status  GC
            
            
            Set objDoc = objApp.Documents.Open(strFileNames(i))
            
            'july 2004 add support for processing Released\Baselined\Obselete status files GC
                If frmOpenSave.OptProcessReleased.Value = 1 Then
                    retval = SetKeyValue(HKEY_CURRENT_USER, "Software\Unigraphics Solutions\Solid Edge\Version " & strSEVersion & "\Debug", "DocMgmt_OverrideStatusCheckForFileAccess", "0", REG_DWORD&)
                End If
            'End support for processing Released\Baselined\Obselete status files GC
            
            
            If Err Then
                txtStatus.Text = "Error opening document.  Closing and restarting Solid Edge..."
                txtStatus.Refresh
                Set objDoc = Nothing
                Err.Clear
                
                ' Check to see if a document is actually open.  This indicates Solid Edge aborted during the recompute.
                Set objDoc = objApp.ActiveDocument
                If Err = 0 And Not objDoc Is Nothing Then
                    ErrMessage = "   **Aborted during open."
                Else
                    ErrMessage = "   Unable to open the document."
                End If
                
                ' Shut down and restart Solid Edge.
                objDoc.Close False
                Set objDoc = Nothing
                
                objApp.Quit
                Set objApp = Nothing
                
                ' Pause for 10 seconds.
                Sleep 10000
                
                ' Turn on error trapping.
                On Error Resume Next
        
            
            
            
                ' Start Solid Edge.
                Set objApp = CreateObject("SolidEdge.Application")
        
                ' Cannot start Solid Edge, so exit the program.
                If Err Then
                    Me.SetFocus
                    MsgBox "Cannot start Solid Edge."
                    End
                End If
                    
                objApp.Visible = True
                
                ' Set appropriate option to show or suppress all Solid Edge message boxes
                If frmOpenSave.OptSuppressDialogs.Value = True Then
                    objApp.DisplayAlerts = False
                End If
                
                If frmOpenSave.OptShowDialogs.Value = True Then
                    objApp.DisplayAlerts = True
                End If
                
                
                
                
            End If
            On Error GoTo 0
            If objDoc.LastSavedVersion <> "" Then
                docLastSavedMajorVersion = Int(Left(objDoc.LastSavedVersion, InStr(objDoc.LastSavedVersion, ".")))
            Else
                docLastSavedMajorVersion = 0
            End If
        End If
        
        If LCase(Right(strFileNames(i), 3)) = "par" Or LCase(Right(strFileNames(i), 3)) = "psm" Then
            If objDoc Is Nothing Then
                Print #LogFile, "Part/Sheetmetal Document> " & strFileNames(i)
                Print #LogFile, ErrMessage
                Print #LogFile, ""
            Else ' then objDoc is something
                ' Check for igACISBodyFeatureObject
                If (objDoc.Type = igPartDocument Or objDoc.Type = igSheetMetalDocument) Then
                    If objDoc.Models.Count > 0 Then
                        '''''''''''''''' Begin fix for TR56858 '''''''''''''''''''''
                        ' In V8 and V9, the Tube feature does not have a Type property.
                        ' So using the Type property of the base feature to determine
                        ' whether or not the base feature is a body feature is problematic.
                        ' The following fix works around the problem, and a separate TR is
                        ' filed to provide a Type property for Tube features.
                        Dim lngFeatType As Long
                        lngFeatType = 0
                        On Error Resume Next
                        lngFeatType = objDoc.Models(1).Features(1).Type
                        On Error GoTo 0
                        If lngFeatType = -1489778563 Then  'The base feature is an igBodyFeatureObject
                        '''''''''''''''' End fix for TR56858 '''''''''''''''''''''
                            If docLastSavedMajorVersion < 5 Then 'The base feature is an ACIS body
                                Print #LogFile, "Part/Sheetmetal Document> " & strFileNames(i)
                                Print #LogFile, "   ACIS body based model."
                            
                                ' Close the document.
                                objDoc.Close False
                                Set objDoc = Nothing
                            
                                ' Convert the file.
                                If ParACISDLLsExist Then
                                    Call ConvertACISBodyModelToV5(strFileNames(i), objApp, LogFile)
                                Else 'then ParACISDLLs do not exist
                                    Print #LogFile, "   The ParACIS DLL's are not present.  File not converted."
                                End If 'ParACISDLLsExist
                            
                                Print #LogFile, ""
                            Else ' then docLastSavedMajorVersion > 5, and the base feature is a Parasolid body
                                'Force regeneration of triangle cash
                                objDoc.NewWindow
                                Set objNewWindow = objApp.ActiveWindow
                                objNewWindow.View.Fit
                                objNewWindow.Close
                            
                                ' Save the document
                                objDoc.Save
                            
                                ' Write log information.
                                Call WritePartLogInformation(objDoc, LogFile)
                            End If ' docLastSavedMajorVersion
                        'End If
                        Else 'The base feature is not a body object
                    
                            'Force regeneration of triangle cash
                            objDoc.NewWindow
                            Set objNewWindow = objApp.ActiveWindow
                            objNewWindow.View.Fit
                            objNewWindow.Close
                        
                            ' Save the document
                            objDoc.Save
        
                            ' Write log information.
                            Call WritePartLogInformation(objDoc, LogFile)
                        End If 'condition of feature type
                    Else ' condition of models count
                        
                        ' Save the document
                        objDoc.Save
                    
                        ' The document doesn't contain any features.
                        Print #LogFile, "Part/Sheetmetal Document> " & strFileNames(i)
                        Print #LogFile, "   Document doesn't contain any features."
                        Print #LogFile, ""
                    End If ' condition of models count
                End If ' condition of document type.  Why do we have this check?
            End If 'objDoc Is Nothing
        ElseIf LCase(Right(strFileNames(i), 3)) = "asm" Then
            If objDoc Is Nothing Then
                Print #LogFile, "Assembly Document> " & strFileNames(i)
                Print #LogFile, ErrMessage
                Print #LogFile, ""
            Else
                If chkAssemblyDifference.Value = vbChecked Then
                    ' Get the current state of all of the Occurrences in the current assembly and subassemblies.
                    Call GetCurrentAssemblyState(objDoc, OldAssemblies, OldAssemblyCount, 4)
                    
                    ' Close the document.
                    objDoc.Close False
                    
                    ' Pause for a couple of seconds.
                    Sleep 3000
                    
                    ' Change the registry setting to open with all Occurrences active.
                    SetAssemblyMode 2
                    
                    
                    
                    
                    'july 2004 add support for processing Released\Baselined\Obselete status files GC
                    
                   If frmOpenSave.OptProcessReleased.Value = 1 Then
                        'check to see if registry location exists
                         SwitchExists = QueryValue(HKEY_CURRENT_USER, "Software\Unigraphics Solutions\Solid Edge\Version " & strSEVersion & "\Debug", "DocMgmt_OverrideStatusCheckForFileAccess")
            
                        If SwitchExists = "" Then
                            '-- Create key in CURRENT USER and set it
                            SetKeyValue HKEY_CURRENT_USER, "Software\Unigraphics Solutions\Solid Edge\Version " & strSEVersion & "\Debug", "DocMgmt_OverrideStatusCheckForFileAccess", "1", REG_DWORD&
                        End If
                
                
                        If SwitchExists = "0" Then
                            '-- Create key in CURRENT USER and set it
                            SetKeyValue HKEY_CURRENT_USER, "Software\Unigraphics Solutions\Solid Edge\Version " & strSEVersion & "\Debug", "DocMgmt_OverrideStatusCheckForFileAccess", "1", REG_DWORD&
                        End If
                    End If
                    
                    
                'End support for processing Released\Baselined\Obselete status files GC
                    
                    ' Reopen the assembly document.
                    Set objDoc = objApp.Documents.Open(strFileNames(i))
                
                
                
                'july 2004 add support for processing Released\Baselined\Obselete status files GC
                    If frmOpenSave.OptProcessReleased.Value = 1 Then
                        retval = SetKeyValue(HKEY_CURRENT_USER, "Software\Unigraphics Solutions\Solid Edge\Version " & strSEVersion & "\Debug", "DocMgmt_OverrideStatusCheckForFileAccess", "0", REG_DWORD&)
                    End If
                'End support for processing Released\Baselined\Obselete status files GC
            
                
                
                
                
                End If
                
                
                
                
                
                
                ' Get the state of the assembly now.
                Call GetCurrentAssemblyState(objDoc, NewAssemblies, NewAssemblyCount, 5)


                
                
                ' Write out assembly information.
                Call WriteAssemblyLogInformation(OldAssemblies, OldAssemblyCount, NewAssemblies, NewAssemblyCount, LogFile)

                ' Save the document
                objDoc.Save
                
                ' Let Assembly know that OpenSave is no longer trying to save assembly files
                Call SetOpenSaveMacroFlag(0)
            End If
        ElseIf LCase(Right(strFileNames(i), 3)) = "pwd" Then
            If objDoc Is Nothing Then
                Print #LogFile, "Weldment Document> " & strFileNames(i)
                Print #LogFile, ErrMessage
                Print #LogFile, ""
        
            Else
                If objDoc.Type = igWeldmentDocument Then
                    'update all links
                    'objApp.StartCommand (WeldmentToolsUpdateAllLinks)
                    
                    Call WriteWeldmentLogInfo(objDoc, LogFile)
                    If objDoc.WeldmentModels.Count = 0 Then
                        Print #LogFile, "Weldment Document> " & strFileNames(i)
                        Print #LogFile, "No Linked Assembly.  Empty File"
                        Print #LogFile, ""
                    End If
                    
                End If
                
            
            End If
             'Force regeneration of triangle cash
            objDoc.NewWindow
            Set objNewWindow = objApp.ActiveWindow
            objNewWindow.View.Fit
            objNewWindow.Close
            
            
            
            ' Save the document
                objDoc.Save
        
        
        
        ElseIf LCase(Right(strFileNames(i), 3)) = "dft" Then
            If objDoc Is Nothing Then
                Print #LogFile, "Draft Document> " & strFileNames(i)
                Print #LogFile, ErrMessage
                Print #LogFile, ""
            Else
                ' Only update drawing views if the user explicitly asks for it
                If chkUpdateDV = vbChecked Then
                    ' Determine the total number of dimensions in the document.
                    DimCount = 0
                    For j = 1 To objDoc.Sheets.Count
                        DimCount = DimCount + objDoc.Sheets(j).Dimensions.Count
                    Next
                    
                    ' Dimension the array to hold the dimension data.
                    If DimCount > 0 Then
                        ReDim V4Dimensions(1 To DimCount) As DimensionData
                    End If
                    
                    ' Get state of all dimensions before update.
                    Index = 0
                    For j = 1 To objDoc.Sheets.Count
                        For k = 1 To objDoc.Sheets(j).Dimensions.Count
                            Index = Index + 1
                            V4Dimensions(Index).Name = objDoc.Sheets(j).Dimensions(k).Name
                            V4Dimensions(Index).Value = objDoc.Sheets(j).Dimensions(k).Value
                            V4Dimensions(Index).Prefix = objDoc.Sheets(j).Dimensions(k).PrefixString
                            V4Dimensions(Index).Suffix = objDoc.Sheets(j).Dimensions(k).SuffixString
                            'Commented out the following line of code for TR41078
                            'Set V4Dimensions(Index).Object = objDoc.Sheets(j).Dimensions(k)
                            V4Dimensions(Index).Validated = False
                        Next
                    Next
    
                    ' Update the drawing views.
                    For j = 1 To objDoc.ModelLinks.Count
                        objDoc.ModelLinks(j).UpdateViews
                    Next
            
                    ' Count the number of views in the document.
                    DrawViewCount = 0
                    For j = 1 To objDoc.Sheets.Count
                        DrawViewCount = DrawViewCount + objDoc.Sheets(j).DrawingViews.Count
                    Next
                End If
                
                ' Write log information
                Call WriteDraftLogInformation(objDoc, DrawViewCount, LogFile, V4Dimensions, DimCount, ConfigurationExists, intAssemblyIndex)
            
                ' Save the document
                objDoc.Save
            End If
            
        End If





        ' Close the document without saving changes since they've already been saved.
        If Not objDoc Is Nothing Then
            objDoc.Close False
        End If

        ' Release the reference.
        Set objDoc = Nothing
    
    
            'july 2004 add support for processing Released\Baselined\Obselete status files
            'Next few lines of code to check doc status  GC

                    'reset flags for next in loop
                    blnChangedStatus = False
                    strSEStatus = ""
                    lngStatus = 999
'            End If
            
SkipToNext:
        
        'july 2004 add support for processing Released\Baselined\Obselete status files
        'end of code to check doc status  GC
    
    
    Next
    



RegularEnd:
    
    Me.SetFocus
    
    ' Close the log file.
    Close LogFile
    
    ' Reset the assembly mode
    If intAssemblyIndex > 0 Then
        Call SetAssemblyMode(AssemblyMode)
    End If
    
    'CLose down SE app
    objApp.Quit
    
    
    Call DeleteValue(HKEY_CURRENT_USER, "Software\Unigraphics Solutions\Solid Edge\Version " & strSEVersion & "\Debug", "DocMgmt_OverrideStatusCheckForFileAccess")
    
    ' Dismiss the status form.
    txtStatus.Text = "Finished processing."
    txtStatus.Refresh
    
    cmdCancel.Caption = "Cancel"
    Exit Sub
End Sub




Private Function GetMissingAttachments(TopLevelDocs() As String, DocCount As Integer, FullDocList() As String, FullDocCount As Integer, MissingDocs() As MissingDocumentType, MissingDocCount As Integer) As Boolean
    Dim ExternalDocuments(1 To 20) As String
    Dim ExternalDocumentCount As Integer
    Dim RMApplication As Object
    Dim objDocument As Object
    Dim i As Integer
    Dim ErrorFound As Boolean
    
    
    MissingDocCount = 0
    ReDim MissingDocs(1 To 20) As MissingDocumentType
    GetMissingAttachments = True
    
    On Error Resume Next
    Set RMApplication = CreateObject("RevisionManager.Application")
    If Err Then
        If MsgBox("Error using Revision Manager to determine if referenced documents are accessible.  Do you want to continue?", vbYesNo + vbQuestion, "Open & Save") = vbNo Then
            GetMissingAttachments = False
            Exit Function
        End If
    End If
    On Error GoTo 0
    
    For i = 1 To DocCount
        Set objDocument = Nothing
        On Error Resume Next
        Set objDocument = RMApplication.Open(TopLevelDocs(i))
        If Err Then
            Err.Clear
        Else
            Call GetAttachedDocuments(objDocument, MissingDocs, MissingDocCount, FullDocList, FullDocCount, TopLevelDocs(i))
        End If
    Next
    On Error GoTo 0
    
    If MissingDocCount > 0 Then
        ReDim Preserve MissingDocs(1 To MissingDocCount) As MissingDocumentType
    End If
End Function

Private Sub GetAttachedDocuments(Document As Object, MissingDocuments() As MissingDocumentType, MissingDocumentCount As Integer, DocumentList() As String, DocumentCount As Integer, ParentDoc As String)
    Dim objDocument As Object
    Dim i As Integer
    Dim j As Integer
    Dim objLinkedDocs As Object
    Dim DocumentFound As Boolean
    Dim TempFilePointer As Integer
    
    
    ' Loop through the items in the document
    Set objLinkedDocs = Document.LinkedDocuments
    If Not objLinkedDocs Is Nothing Then
        For i = 1 To objLinkedDocs.Count
            Set objDocument = objLinkedDocs(i)
    
            ' Determine if this document is already in the list.
            DocumentFound = False
            For j = 1 To DocumentCount
                If DocumentList(j) = LocalName(objDocument.FullName) Then
                    DocumentFound = True
                    Exit For
                End If
            Next
    
            ' Determine if it's in the missing document list.
            If Not DocumentFound Then
                For j = 1 To MissingDocumentCount
                    If MissingDocuments(j).MissingDocument = objDocument.FullName Then
                        If UCase(Right(Document.FullName, 3)) = "DFT" Then
                            MissingDocuments(j).DraftReference = True
                        End If
                        
                        DocumentFound = True
                        Exit For
                    End If
                Next
            End If
    
            If Not DocumentFound Then
                ' Allocate additional space if necessary.
                If MissingDocumentCount = UBound(MissingDocuments) Then
                    ReDim Preserve MissingDocuments(1 To UBound(MissingDocuments) + 20) As MissingDocumentType
                End If
    
                ' Add the document to the list.
                MissingDocumentCount = MissingDocumentCount + 1
                MissingDocuments(MissingDocumentCount).MissingDocument = objDocument.FullName
                MissingDocuments(MissingDocumentCount).ParentDocument = Document.FullName
                If UCase(Right(ParentDoc, 3)) = "DFT" Then
                    MissingDocuments(MissingDocumentCount).DraftReference = True
                Else
                    MissingDocuments(MissingDocumentCount).DraftReference = False
                End If
                
                ' Attempt to open file for read to see if it exists.
                TempFilePointer = FreeFile
                On Error Resume Next
                Open objDocument.FullName For Input As #TempFilePointer
                If Err Then
                    MissingDocuments(MissingDocumentCount).Available = False
                Else
                    MissingDocuments(MissingDocumentCount).Available = True
                    DocumentFound = True
                End If
                Err.Clear
                On Error GoTo 0
                Close #TempFilePointer
            End If
            
            If (UCase(Right(objLinkedDocs(i).FullName, 3)) = "ASM" Or UCase(Right(objLinkedDocs(i).FullName, 3)) = "DFT") And DocumentFound Then
                Call GetAttachedDocuments(objDocument, MissingDocuments, MissingDocumentCount, DocumentList, DocumentCount, ParentDoc)
            End If
        Next
    End If
End Sub


Private Function ParACISDLLsExist() As Boolean
    On Error GoTo BadFile
    
    ' Check to make sure supporting DLL's and schema directory exist.
    If GetAttr(App.Path & "\pal22.dll") = 0 Then
        ParACISDLLsExist = False
    ElseIf GetAttr(App.Path & "\uicalls.dll") = 0 Then
        ParACISDLLsExist = False
    ElseIf (GetAttr(App.Path & "\schema") And vbDirectory) = 0 Then
        ParACISDLLsExist = False
    Else
        ParACISDLLsExist = True
        Exit Function
    End If
    
BadFile:
    ParACISDLLsExist = False
End Function


Private Function ConvertACISBodyModelToV5(filename As String, objApp As Object, LogFile As Integer) As Boolean
    Dim FileNameStr As String
    Dim Options As ParacisOptions
    Dim rc As Integer
    Dim MsgString As String
    Dim objDoc As Object
    Dim tmpPartFilename As String
    
    
    txtStatus.Text = "Converting ACISBody file: " & filename
    txtStatus.Refresh
    
    ' Build up udt with information to pass into translation DLL.
    Options.status = 0
    Options.trans_direction = 2
    Options.par_save_version = 0   ' 0 means current version 9. Possible versions are 80 and 70.
    Options.acs_save_version = 201 ' Default. Don't change for SAT to X_T
    Options.par_acis_scale = 1000
    
    Options.InputFile = filename
    
    Options.OutputFile = Left(filename, Len(filename) - 4) & ".x_t"
    Options.LogFile = Left(filename, Len(filename) - 4) & ".log"
    Options.StrMsg = ""
    
    ' Call the translator
    rc = paTranslate(Options)
    
    ' Check the status of the translator.
    If rc Then
        ' Create the new Part file.
        On Error Resume Next
        Set objDoc = objApp.Documents.OpenWithTemplate(Left(filename, Len(filename) - 4) & ".x_t", "Normal.par")
        'Set objDoc = objApp.Documents.Open(Left(FileName, Len(FileName) - 4) & ".x_t")
        
        If Err Or objDoc Is Nothing Then
            ' Unable to open the file.
            Print #LogFile, "     x_t file was created (" & Left(filename, Len(filename) - 4) & ".x_t" & "), but unable to read into Solid Edge."
            ConvertACISBodyModelToV5 = False
            Exit Function
        Else
            ' Save the file.
            tmpPartFilename = Left(filename, Len(filename) - 4) & "_tmp.par"
            objDoc.SaveAs tmpPartFilename
            If Err Then
                Print #LogFile, "   Unable to save new part file."
                ConvertACISBodyModelToV5 = False
                Exit Function
            End If
            
            objDoc.Close False
            Set objDoc = Nothing
            If Err Then
                Print #LogFile, "   Error closing the new part file."
                ConvertACISBodyModelToV5 = False
                Exit Function
            End If

            ' Copy the properties from the original file to the new one.
            If Not CopyFileProperties(filename, tmpPartFilename) Then
                ' Unable to Copy the properties into the new part file.
                Print #LogFile, "   Unable to copy the document properties."
            End If
            
            ' Remove the original part file and copy the new one into it's place.
            Kill filename
            If Err Then
                Print #LogFile, "   Unable to delete original ACISBody part file."
                ConvertACISBodyModelToV5 = False
                Exit Function
            End If

            FileCopy tmpPartFilename, filename
            If Err Then
                Print #LogFile, "   Unable to copy new part file to origin part filename."
                ConvertACISBodyModelToV5 = False
                Exit Function
            End If

            ' Clean up other temp files.
            Kill tmpPartFilename
            Kill Options.LogFile
            Kill Options.OutputFile
            Print #LogFile, "   Completed successful conversion."
        End If
    Else
        If Options.StrMsg = "" Then
            Print #LogFile, "   Unknown error during conversion. See " & Options.LogFile & " for more information."
        Else
            Print #LogFile, "   Error during conversion> " & Options.StrMsg
        End If
    End If
End Function

Private Function CopyFileProperties(OldFilename As String, NewFilename As String) As Boolean
    Dim OldPropSets As PropertySets
    Dim NewPropSets As PropertySets
    Dim OldCustomProps As Properties
    Dim NewCustomProps As Properties
    Dim oldCustomProp As Property
    Dim i As Integer
    Dim j As Integer
    Dim OldValue As Variant
    
    
    On Error Resume Next
    Set OldPropSets = CreateObject("SolidEdge.FileProperties")
    Call OldPropSets.Open(filename:=OldFilename)
    
    Set NewPropSets = CreateObject("SolidEdge.FileProperties")
    Call NewPropSets.Open(filename:=NewFilename)
    If Err Then
        CopyFileProperties = False
        Exit Function
    End If
    
    For i = 0 To OldPropSets.Count - 1
        If OldPropSets(i).Name <> "Custom" Then
            For j = 0 To OldPropSets(i).Count - 1
                Debug.Print OldPropSets(i).Item(j).Name & " = " & OldPropSets(i).Item(j).Value & " to " & NewPropSets(i).Item(j).Name
                OldValue = OldPropSets(i).Item(j).Value
                If Err.Number = 0 Then
                    NewPropSets(i).Item(j).Value = OldValue
                Else
                    Err.Clear
                End If
            Next
        End If
    Next
    
    ' Copy any custom properties.
    Set OldCustomProps = OldPropSets.Item(3)
    Set NewCustomProps = NewPropSets.Item(3)
    For i = 0 To OldCustomProps.Count - 1
        Set oldCustomProp = OldCustomProps(i)
        Call NewCustomProps.Add(Name:=oldCustomProp.Name, Value:=oldCustomProp.Value)
        Set oldCustomProp = Nothing
    Next
    
    NewPropSets.Save
    
    Set OldCustomProps = Nothing
    Set NewCustomProps = Nothing
    Set OldPropSets = Nothing
    Set NewPropSets = Nothing
    
    CopyFileProperties = True
End Function


Private Sub WriteAssemblyLogInformation(OldAssemblies() As AssemblyData, OldAssemblyCount As Integer, NewAssemblies() As AssemblyData, NewAssemblyCount As Integer, LogFile As Integer)
    Dim i As Integer
    Dim j As Integer
    Dim k As Integer
    Dim m As Integer
    Dim OldState As String
    Dim StateChanged As Boolean
    Dim NewState As String
    Dim PartChanged As Boolean
    Dim MoveTolerance As Double
    Dim AngleTolerance As Double
    Dim StatusWritten As Boolean


    AngleTolerance = 0.001
    MoveTolerance = 0.00002
    If chkAssemblyDifference.Value = vbChecked Then
        ' Look through the assemblies to see if there are any that haven't been processed.
        For i = 1 To OldAssemblyCount
            If Not OldAssemblies(i).Processed Then
                ' Set flag indicating it's been processed.
                OldAssemblies(i).Processed = True
                
                ' Check to see if the position or orientation changed.
                PartChanged = False
                
                ' find the corresponding data in the new list.
                For j = 1 To NewAssemblyCount
                    StatusWritten = False
            
                    If OldAssemblies(i).Name = NewAssemblies(j).Name Then
                        Print #LogFile, "Assembly Document> " & OldAssemblies(i).Name
                        
                        ' Iterate through all of the Occurrences of the assembly.
                        For k = 1 To OldAssemblies(i).PartCount
                            If OldAssemblies(i).Occurrences(k).State <> PartPattern Then
                                StateChanged = False
                                ' Check to see if the state remained the same.
                                If OldAssemblies(i).Occurrences(k).State <> NewAssemblies(j).Occurrences(k).State Then
                                    StateChanged = True
                                    
                                    Select Case OldAssemblies(i).Occurrences(k).State
                                    Case PartOK
                                        OldState = "Part OK"
                                    Case PartFailed
                                        OldState = "Part Failed"
                                    Case PartUnderConstrained
                                        OldState = "Part UnderConstrained"
                                    End Select
                                    
                                    Select Case NewAssemblies(j).Occurrences(k).State
                                    Case PartOK
                                        NewState = "Part OK"
                                    Case PartFailed
                                        NewState = "Part Failed"
                                    Case PartUnderConstrained
                                        NewState = "Part UnderConstrained"
                                    Case PartNotLoaded
                                        NewState = "Part Not Loaded"
                                    End Select
                                End If
                                                            
                                ' Check to see if the before and after transform is different.
                                If OldAssemblies(i).Occurrences(k).State = PartOK Then
                                    For m = 1 To 11
                                        If Abs(OldAssemblies(i).Occurrences(k).Matrix(m) - NewAssemblies(j).Occurrences(k).Matrix(m)) > AngleTolerance Then
                                            PartChanged = True
                                            Exit For
                                        End If
                                    Next
            
                                    For m = 13 To 15
                                        If Abs(OldAssemblies(i).Occurrences(k).Matrix(m) - NewAssemblies(j).Occurrences(k).Matrix(m)) > MoveTolerance Then
                                            PartChanged = True
                                            Exit For
                                        End If
                                    Next
                                End If

                                If StateChanged And PartChanged Then
                                    Print #LogFile, "   " & OldAssemblies(i).Occurrences(k).Name & "> State changed from " & OldState & " to " & NewState & " and"
                                    Print #LogFile, Space(Len(OldAssemblies(i).Occurrences(k).Name) + 5) & "part moved or rotated from original position."
                                    If chkGroundParts.Value = vbChecked Then
                                        Print #LogFile, Space(Len(OldAssemblies(i).Occurrences(k).Name) + 5) & "Part's existing relationships have been deleted and "
                                        Print #LogFile, Space(Len(OldAssemblies(i).Occurrences(k).Name) + 5) & "part has been grounded in its original position."
                                        Call GroundPart(NewAssemblies(j).Occurrences(k), OldAssemblies(i).Occurrences(k))
                                    End If
                                    StatusWritten = True
                                ElseIf StateChanged Then
                                    Print #LogFile, "   " & OldAssemblies(i).Occurrences(k).Name & "> State changed from " & OldState & " to " & NewState
                                    StatusWritten = True
                                ElseIf PartChanged Then
                                    Print #LogFile, "   " & OldAssemblies(i).Occurrences(k).Name & "> Moved or rotated from original position."
                                    If chkGroundParts.Value = vbChecked Then
                                        Print #LogFile, Space(Len(OldAssemblies(i).Occurrences(k).Name) + 5) & "Part's existing relationships have been deleted and "
                                        Print #LogFile, Space(Len(OldAssemblies(i).Occurrences(k).Name) + 5) & "part has been grounded in its original position."
                                        Call GroundPart(NewAssemblies(j).Occurrences(k), OldAssemblies(i).Occurrences(k))
                                    End If
                                    StatusWritten = True
                                End If
                            End If
                        Next
                        
                        If Not StatusWritten Then
                            Print #LogFile, "   Processed Successfully"
                        End If
                        
                        Print #LogFile, ""
                    End If
                Next
            End If
        Next
    Else
        ' Iterate through all of the assemblies.
        For i = 1 To NewAssemblyCount
            ' Look for assemblies not processed yet.
            If Not NewAssemblies(i).Processed Then
                ' Initialize flag indicating no status has been written for this assembly yet.
                StatusWritten = False
                
                ' Set flag indicating it's been processed.
                NewAssemblies(i).Processed = True
                
                Print #LogFile, "Assembly Document> " & NewAssemblies(i).Name

                ' Iterate through all of the Occurrences of the assembly.
                For j = 1 To NewAssemblies(i).PartCount
                    Select Case NewAssemblies(i).Occurrences(j).State
                    Case PartOK, PartPattern
                        NewState = "Part OK"
                    Case PartFailed
                        NewState = "Part Failed"
                    Case PartUnderConstrained
                        NewState = "Part UnderConstrained"
                    Case PartNotLoaded
                        NewState = "Unable to load document"
                    End Select
                    
                    If NewState <> "Part OK" Then
                        Print #LogFile, "   " & NewAssemblies(i).Occurrences(j).Name & "> " & NewState
                        
                        ' Set flag indicating status information has been written for this assembly.
                        StatusWritten = True
                    End If
                Next
                
                ' Write message when not other problems were found.
                If Not StatusWritten Then
                    Print #LogFile, "   Processed Successfully"
                End If
                    
                Print #LogFile, ""
            End If
        Next
    End If
End Sub

Private Sub GroundPart(NewPart As PartData, OldPart As PartData)
    Dim i As Integer
    
    
    ' Delete the existing relationships from the part.
    For i = NewPart.Occurrence.Relations3d.Count To 1 Step -1
        NewPart.Occurrence.Relations3d(i).DELETE
    Next
    
    ' Ground the part.
    Call NewPart.Occurrence.Parent.Parent.Relations3d.AddGround(NewPart.Occurrence)
    
    ' Reposition the part back to its original position.
    Call NewPart.Occurrence.PutMatrix(Matrix:=OldPart.Matrix, Replace:=True)
End Sub

Private Sub GetCurrentAssemblyState(objDoc As Object, Assemblies() As AssemblyData, AssemblyCount As Integer, Version As Integer)
    Dim i As Integer
    Dim MatchFound As Boolean
    Dim objOccurrence As Object
    Dim Matrix(1 To 16) As Double
    Dim CurrentAssembly As Integer
    Dim tmpOccurrence As Object
    Dim TmpFile As Integer
    
    
    ' Initialize flag
    MatchFound = False
    
    ' Check to see if current assembly has already been processed.
    For i = 1 To AssemblyCount
        If objDoc.FullName = Assemblies(i).Name Then
            MatchFound = True
            Exit For
        End If
    Next
    
    ' If no match was found, process this assembly.
    If Not MatchFound Then
        ' Increment the counter
        AssemblyCount = AssemblyCount + 1
        
        ' Add one more index to the assembly data array.
        ReDim Preserve Assemblies(1 To AssemblyCount) As AssemblyData
        
        ' Save the assembly data.
        Assemblies(AssemblyCount).Name = objDoc.FullName
        Assemblies(AssemblyCount).PartCount = objDoc.Occurrences.Count
        
        ' Initialize the flag indicating whether this assembly has been written out or not.
        Assemblies(AssemblyCount).Processed = False
        
        ' Allocate memory for the part information.
        If objDoc.Occurrences.Count > 0 Then
            ReDim Assemblies(AssemblyCount).Occurrences(1 To objDoc.Occurrences.Count) As PartData
        End If
        
        ' Save the current count in a local variable so it doesn't get changed.
        CurrentAssembly = AssemblyCount
        
        ' Get the information for the Occurrences within this assembly.
        For i = 1 To objDoc.Occurrences.Count
            Set objOccurrence = objDoc.Occurrences(i)

            ' Save the name.
            Assemblies(CurrentAssembly).Occurrences(i).Name = objOccurrence.Name
            
            ' Save the part itself.
            Set Assemblies(CurrentAssembly).Occurrences(i).Occurrence = objOccurrence
            
            ' Save the transformation matrix.
            Call objOccurrence.GetMatrix(Assemblies(CurrentAssembly).Occurrences(i).Matrix)

            If objOccurrence.Relations3d.Count = 0 Then
                ' Special case for Occurrences that are components of a pattern.
                ' Since pattern Occurrences aren't specifically identified this assumes
                ' that any part that doesn't have any relationships is a pattern part.
                Assemblies(CurrentAssembly).Occurrences(i).State = PartPattern
            ElseIf objOccurrence.status = igPartStatusFixed Or objOccurrence.status = igPartStatusWellDefined Then
                Assemblies(CurrentAssembly).Occurrences(i).State = PartOK
            ElseIf objOccurrence.status = igPartStatusUnderDefined Then
                Assemblies(CurrentAssembly).Occurrences(i).State = PartUnderConstrained
            Else
                Assemblies(CurrentAssembly).Occurrences(i).State = PartFailed
            End If
            
            ' Check to see if this Occurrence was loaded.
            If Version = 5 Then
                On Error Resume Next
                Set tmpOccurrence = objOccurrence.PartDocument
                If Err Then
                    Assemblies(CurrentAssembly).Occurrences(i).State = PartNotLoaded
                    Err.Clear
                End If
                On Error GoTo 0
            ElseIf objOccurrence.Subassembly Then
                ' Attempt to open the file to see if it exists.
                On Error Resume Next
                TmpFile = FreeFile
                Open objOccurrence.PartFileName For Input As #TmpFile
                If Err Then
                    Assemblies(CurrentAssembly).Occurrences(i).State = PartNotLoaded
                    Err.Clear
                Else
                    Close TmpFile
                End If
            End If
            
            ' If this Occurrence is an assembly, call this function again.
            If objOccurrence.Subassembly And Assemblies(CurrentAssembly).Occurrences(i).State <> PartNotLoaded Then
                Call GetCurrentAssemblyState(objOccurrence.PartDocument, Assemblies, AssemblyCount, Version)
            End If
        Next
    End If
End Sub


Private Sub WriteDraftLogInformation(objDoc As Object, ViewCount As Integer, LogFile As Integer, V4Dimensions() As DimensionData, DimensionCount As Integer, ConfigurationExists() As AssemblyConfigurationsExist, AssemblyCount As Integer)
    Dim i As Integer
    Dim j As Integer
    Dim k As Integer
    Dim m As Integer
    Dim DimName As String
    Dim objSheets As Object
    Dim objGroup As Object
    Dim objTmpModelDocument
    Dim iDimCount As Integer
    Dim LinkFilename As String
    Dim ConfigFound As Boolean
    Dim ConfigFile As String
    Dim TmpFile As Integer
    
    
    Print #LogFile, "DraftDocument> " & objDoc.FullName
    
    If Not chkUpdateDV.Value = vbChecked Then
        Print #LogFile, "   Drawing views not updated."
    Else
        Print #LogFile, "   Processed " & ViewCount & " drawing views."
        
        For i = 1 To objDoc.ModelLinks.Count
            LinkFilename = objDoc.ModelLinks(i).filename
            
            On Error Resume Next
            Set objTmpModelDocument = objDoc.ModelLinks(i).ModelDocument
            If Err Then
                Print #LogFile, "   The referenced document '" & LinkFilename & "' is not accessible."
            Else
                ' If the link is to an assembly check to see if a configuration exists.
                If UCase(Right(LinkFilename, 3)) = "ASM" Then
                    ' Check to see if the current assembly is in the list.
                    ConfigFound = False
                    For j = 1 To AssemblyCount
                        If ConfigurationExists(j).AssemblyName = objDoc.FullName And Not ConfigurationExists(j).ConfigurationExists Then
                            ConfigFound = True
                            Print #LogFile, "   The configuration file for '" & LinkFilename & "' is missing."
                            Print #LogFile, "      If there are exploded views of this assembly they will be incorrect."
                            Exit For
                        End If
                    Next
                    
                    ' The assembly is not a top level assembly so it's not in the list.
                    ' Check for the configuration now.
                    If Not ConfigFound Then
                        ' Attempt to open the configuration file to see if it exists.
                        ConfigFile = Left(objDoc.FullName, Len(objDoc.FullName) - 3) & "cfg"
                        
                        ' Determine whether the configuration exists for not by attempting to open the file.
                        On Error Resume Next
                        Open ConfigFile For Input As #TmpFile
                        If Err Then
                            Print #LogFile, "   The configuration file for '" & LinkFilename & "' is missing."
                            Print #LogFile, "      If there are exploded views of this assembly they will be incorrect."
                        Else
                            Close TmpFile
                        End If
                    End If
                End If
            End If
            
            Err.Clear
            On Error GoTo 0
        Next
        
        For i = 1 To objDoc.Sheets.Count
            For j = 1 To objDoc.Sheets(i).DrawingViews.Count
                If objDoc.Sheets(i).DrawingViews(j).DrawingViewType <> igUserView Then
                    ' Check to see if the ModelDocument is accessible.  If not, assume the file doesn't exist.
                    On Error Resume Next
                    Set objTmpModelDocument = objDoc.Sheets(i).DrawingViews(j).ModelLink.ModelDocument
                    If Err Then
                        Print #LogFile, "   Document '" & objDoc.Sheets(i).DrawingViews(j).ModelLink.filename & "' referenced by drawing view '" & objDoc.Sheets(i).DrawingViews(j).Caption & "' is not accessible."
                    End If
                    Err.Clear
                    On Error GoTo 0
                End If
            Next
        Next
        
        Print #LogFile, "   Total number of dimensions> " & DimensionCount
        
        ' Check for any changes in the value of dimensions.
        iDimCount = 0
        For i = 1 To objDoc.Sheets.Count
            For j = 1 To objDoc.Sheets(i).Dimensions.Count
                DimName = objDoc.Sheets(i).Dimensions(j).Name
                For k = 1 To DimensionCount
                    If DimName = V4Dimensions(k).Name Then
                        V4Dimensions(k).Validated = True
                        
                        If Abs(V4Dimensions(k).Value - objDoc.Sheets(i).Dimensions(j).Value) > 0.0000000001 Then
                            iDimCount = iDimCount + 1
                            objDoc.Sheets(i).Dimensions(j).OverrideString = "**Value Changed**"
                            Exit For
                        End If
                    End If
                Next
            Next
        Next
        Print #LogFile, "   Number of dimensions where value changed> " & iDimCount
        
        '** Check for any dropped dimensions.
        
        ' Set a reference to the sheets collection.
        Set objSheets = objDoc.Sheets
        
        ' Iterate through all of the sheets of the document.
        iDimCount = 0
        For i = 1 To objSheets.Count
            ' Iterate through all of the groups on the current sheet.
            For j = 1 To objSheets(i).Groups.Count
                ' Set a reference to the current group.
                Set objGroup = objSheets(i).Groups(j)
                
                ' Iterate through the contents of the group.
                For k = 1 To objGroup.Count
                    ' Look for any dimensions in the group.
                    If objGroup(k).Type = igDimension Then
                        DimName = objGroup(k).Name
                        iDimCount = iDimCount + 1
                        ' objGroup(k).OverrideString = "**DROPPED**"
    
                        ' Find the corresponding V4 dimension and flag as being processed.
                        For m = 1 To DimensionCount
                            If DimName = V4Dimensions(m).Name Then
                                V4Dimensions(m).Validated = True
                                Exit For
                            End If
                        Next
                    End If
                Next
            Next
        Next
        Print #LogFile, "   Number of dimensions that were dropped> " & iDimCount
    
        ' Check to see if any dimensions existed in V4 that haven't been validated.
        iDimCount = 0
        For i = 1 To DimensionCount
            If Not V4Dimensions(i).Validated Then
                iDimCount = iDimCount + 1
            End If
        Next
        Print #LogFile, "   Number of dimensions that were deleted> " & iDimCount
    End If
    
    Print #LogFile, ""
End Sub

Private Sub WriteBadDocumentLogInformation(LogFile As Integer, DocName As String, ErrorMessage As String)
    Print #LogFile, "BadDocument> " & DocName
    Print #LogFile, "    Error> " & ErrorMessage
    Print #LogFile, ""
End Sub


Private Sub WritePartLogInformation(objDoc As Object, LogFile As Integer)
    Dim i As Integer
    Dim objFeatures As Object
    Dim objPartData As New clsPartDocument
    Dim ErrMessage As String

            
    ' Write PartFilename.
    Print #LogFile, "Part/Sheetmetal Document> " & objDoc.FullName
    
    ' Get the feature information.
    If objDoc.Models.Count > 0 Then
        Set objFeatures = objDoc.Models(1).Features
        For i = 1 To objFeatures.Count
            On Error Resume Next
            If objFeatures(i).status(ErrMessage) = igFeatureFailed Then
                If Err Then
                    'ErrMessage = "Feature # " & i & "does not have automation support yet."
                    Print #LogFile, "    ******* Skipping status reporting for feature # " & i & ": Automation interface not implemented for this feature type."
                End If
                Call objPartData.FailedItems.Add(objFeatures(i).Name & ", " & ErrMessage)
            ElseIf objFeatures(i).status(ErrMessage) = igFeatureWarned Then
                Call objPartData.WarnedItems.Add(objFeatures(i).Name & ", " & ErrMessage)
            End If
        Next
            
        Print #LogFile, "   Number of Failed Features = " & objPartData.FailedItems.Count
        If objPartData.FailedItems.Count > 0 Then
            ' Write failed Occurrences.
            For i = 1 To objPartData.FailedItems.Count
                Print #LogFile, "     " & objPartData.FailedItems.Item(i).Name
            Next
        End If
        
        ' Write underconstrained Occurrences.
        Print #LogFile, "   Number of Warned Features = " & objPartData.WarnedItems.Count
        If objPartData.WarnedItems.Count > 0 Then
            For i = 1 To objPartData.WarnedItems.Count
                Print #LogFile, "     " & objPartData.WarnedItems.Item(i).Name
            Next
        End If
    End If
    
    Print #LogFile, ""
End Sub

Private Sub dirDirectory_Change()
    filFiles.Path = dirDirectory.Path
    
    ' Check to see if the current name is different than the last default.
    If txtLogfile.Text = LastLogFilename Or txtLogfile.Text = "" Then
        ' Build up new default log filename.
        If Right(dirDirectory.Path, 1) = "\" Then
            txtLogfile.Text = dirDirectory.Path & "OpenSave.log"
        Else
            txtLogfile.Text = dirDirectory.Path & "\OpenSave.log"
        End If
        
        LastLogFilename = txtLogfile.Text
    End If
End Sub

Private Sub drvDrive_Change()
    dirDirectory.Path = drvDrive.Drive
End Sub

' Recursively travels through a directory structure saving all files into an array.
Private Sub ReadFileNamesFromDirectory(ByVal FilePath As String, intFileNameCount As Integer, strFileNames() As String, FilePattern As String)
    Dim i As Integer
    Dim strDirList() As String
    Dim intDirCount As Integer
    
    ' Uses a directory and file list control to get a listing of files
    ' and directories for a specific directory.  Set the controls
    ' to point to the specified directory.
    dirList.Path = FilePath
    filList.Path = FilePath
    
    ' Set the pattern to the specified pattern.
    filList.Pattern = FilePattern
    
    ' If there are any subdirectories in the current directory save their
    ' names in an array so they can be processed below.
    If dirList.ListCount > 0 Then
        ' Allocate memory to store the directories.
        ReDim strDirList(1 To dirList.ListCount)
        
        ' Set the counter.
        intDirCount = dirList.ListCount
        
        ' Save the directory names into the array.
        For i = 0 To dirList.ListCount - 1
            strDirList(i + 1) = dirList.List(i)
        Next
    End If
    
    ' If there are any files in the current directory save their names
    ' into the filename array.
    If filList.ListCount > 0 Then
        ' Allocate more space in the filename array to store the filenames.
        ReDim Preserve strFileNames(1 To intFileNameCount + filList.ListCount)
        
        ' Save all the filenames of the files in the current directory
        ' into the filename array.
        For i = 0 To filList.ListCount - 1
            intFileNameCount = intFileNameCount + 1
            strFileNames(intFileNameCount) = filList.Path & "\" & filList.List(i)
        Next
    End If
    
    ' Loop through subdirectories of the current directory and get their files.
    For i = 1 To intDirCount
        ' Recursively call this subroutine.
        Call ReadFileNamesFromDirectory(strDirList(i), intFileNameCount, strFileNames, FilePattern)
    Next
End Sub

Private Sub filFiles_Click()
    If Not UserSelectedMode Then
        optSelected.Value = True
    End If
End Sub

Private Sub Form_Load()
    Dim objApp As Object
    
    On Error Resume Next
    Set objApp = GetObject(, "SolidEdge.Application")
    If Err = 0 Then
        If objApp.Documents.Count > 0 Then
            MsgBox "You must close all open Solid Edge documents before running this utility.", vbOKOnly + vbExclamation, "Open & Save"
            objApp.Activate
            End
        End If
    End If
    
    ' Initialize the default log file.
    txtLogfile.Text = dirDirectory.Path & "\OpenSave.log"
    LastLogFilename = txtLogfile.Text
    
    ' Check to see if the ACIS files are present.
    If Not ParACISDLLsExist Then
        txtStatus.Text = "WARNING: The ParACIS DLL's are not present.  ACISBody parts will not be converted."
        txtStatus.Refresh
    End If
    
    Set objApp = Nothing
    UserSelectedMode = False
    
    SetPattern
End Sub


Private Sub lblAllFiles_Click()
    optAllFiles.Value = True
    UserSelectedMode = True
End Sub


Private Sub CleanAssemblyList(strAssemblyFiles() As String, AssemblyCount As Integer)
    Dim strTempFileList() As String
    Dim TempInputFilename As String
    Dim TempResultsFilename As String
    Dim SolidEdgePath As String
    Dim FilePointer As Integer
    Dim i As Integer
    Dim TaskID As Long
    Dim ProcessHandle As Long
    Const SYNCHRONIZE = 1048576
    
    
    ReDim strTempFileList(1 To AssemblyCount) As String
    
    ' Get temp filenames.
    TempInputFilename = GetTempFile
    TempResultsFilename = GetTempFile
    
    ' Open the file.
    FilePointer = FreeFile
    Open TempInputFilename For Output As #FilePointer
    
    ' Write the list of assemblies to the temp file.
    For i = 1 To AssemblyCount
        Print #FilePointer, strAssemblyFiles(i)
    Next
    
    Close FilePointer
    
    ' Run the utility to create the sublist.
    If Not GetSolidEdgePath(SolidEdgePath) Then
        MsgBox "Unable to determine the path for Solid Edge", vbOKOnly + vbCritical, "Open & Save"
        End
    End If
    
    frmOpenSave.txtStatus.Text = "Determining top level assemblies ..."
    frmOpenSave.txtStatus.Refresh
    Call ExecCmd(SolidEdgePath & "\ftla.exe " & TempInputFilename & " " & TempResultsFilename)
    
    ' Open the new list and read it.
    FilePointer = FreeFile
    Open TempResultsFilename For Input As #FilePointer
    
    AssemblyCount = 0
    Do While Not EOF(FilePointer)
        AssemblyCount = AssemblyCount + 1
        Line Input #FilePointer, strAssemblyFiles(AssemblyCount)
    Loop
    
    Close #FilePointer
    
    ' Delete the temp files.
    Kill TempInputFilename
    Kill TempResultsFilename
End Sub


Public Sub ExecCmd(cmdline$)
   Dim proc As PROCESS_INFORMATION
   Dim start As STARTUPINFO
   Dim ret As Long

   ' Initialize the STARTUPINFO structure:
   start.dwFlags = STARTF_USESHOWWINDOW
   start.wShowWindow = SW_HIDE
   start.cb = Len(start)

   ' Start the shelled application:
   ret& = CreateProcessA(0&, cmdline$, 0&, 0&, 1&, _
      NORMAL_PRIORITY_CLASS, 0&, 0&, start, proc)

   ' Wait for the shelled application to finish:
   ret& = WaitForSingleObject(proc.hProcess, INFINITE)
   ret& = CloseHandle(proc.hProcess)
End Sub







Private Sub optSelected_Click()
    UserSelectedMode = True
End Sub


Private Sub GetFilePath(FullString As String, Path As String, filename As String)
    Dim LastPos As Integer
    Dim PathLength As Integer
    Dim TempPath As String
    Dim ShortPath As String
    Dim i As Integer
    Dim LocalDrive As String
    
    
    LastPos = 1
    Do While InStr(LastPos, FullString, "\") > 0
        LastPos = InStr(LastPos, FullString, "\") + 1
    Loop
    
    Path = Left(FullString, LastPos - 2)
    
    filename = Right(FullString, Len(FullString) - (LastPos - 1))
    
    ' Convert universal path to local path.
    If Left(Path, 2) = "\\" Then
        Path = LocalName(Path)
    End If
End Sub


Private Function LocalName(UniversalName As String) As String
    Dim LastPos As Integer
    Dim PathLength As Integer
    Dim TempPath As String
    Dim ShortPath As String
    Dim i As Integer
    Dim LocalDrive As String
    Dim filename As String
    Dim Path As String
    
    
    ' Convert universal path to local path.
    If Left(UniversalName, 2) = "\\" Then
        TempPath = Right(UniversalName, Len(UniversalName) - 2)
        PathLength = InStr(TempPath, "\")
        PathLength = InStr(PathLength + 1, TempPath, "\")
        ShortPath = Right(TempPath, Len(TempPath) - PathLength)
        TempPath = "\\" & Left(TempPath, PathLength - 1)
        
        ' Find the matching drive.
        For i = 0 To drvDrive.ListCount - 1
            If InStr(drvDrive.List(i), "[") <> 0 Then
                LocalDrive = Right(drvDrive.List(i), Len(drvDrive.List(i)) - InStr(drvDrive.List(i), "["))
                LocalDrive = Left(LocalDrive, Len(LocalDrive) - 1)
                If UCase(TempPath) = UCase(LocalDrive) Then
                    LocalName = Trim(Left(drvDrive.List(i), InStr(drvDrive.List(i), "[") - 1)) & "\" & ShortPath
                    Exit Function
                End If
            End If
        Next
    Else
        LocalName = UniversalName
    End If
End Function


Public Function WriteWeldmentLogInfo(objDoc As Object, LogFile As Integer)

Dim objWeldment As Object
Dim objWeldments As Object
Dim objFeatures As Object
Dim i As Long
Dim ErrMessage As String
Dim objWeldmentData As New clsWeldmentDocument
' Write PartFilename.
    Print #LogFile, "Weldment Document> " & objDoc.FullName


Set objWeldments = objDoc.WeldmentModels

If objDoc.WeldmentModels.Count > 0 Then
    For Each objWeldment In objWeldments
        'Note hard-code to one as you can only link 1 assembly to a weldment file
        If objWeldment.AssemblyWeldments(1).LinkStatus = seLinkBroken Then
          Print #LogFile, "   Broken Link.  Can not find : "; objWeldment.filename
        End If
        
        Set objFeatures = objWeldment.Features
        For i = 1 To objFeatures.Count
            On Error Resume Next
            If objFeatures(i).status(ErrMessage) = igFeatureFailed Then
                If Err And i <> 1 Then
                    'ErrMessage = "Feature # " & i & "does not have automation support yet."
                    Print #LogFile, "    ******* Skipping status reporting for feature # " & i & ": Automation interface not implemented for this feature type."
                End If
                Call objWeldmentData.FailedItems.Add(objFeatures(i).Name & ", " & ErrMessage)
            ElseIf objFeatures(i).status(ErrMessage) = igFeatureWarned Then
                Call objWeldmentData.WarnedItems.Add(objFeatures(i).Name & ", " & ErrMessage)
            End If
        Next
            
        Print #LogFile, "   Number of Failed Features = " & objWeldmentData.FailedItems.Count
        If objWeldmentData.FailedItems.Count > 0 Then
            ' Write failed Occurrences.
            For i = 1 To objWeldmentData.FailedItems.Count
                Print #LogFile, "     " & objWeldmentData.FailedItems.Item(i).Name
            Next
        End If
        
        ' Write underconstrained Occurrences.
        Print #LogFile, "   Number of Warned Features = " & objWeldmentData.WarnedItems.Count
        If objWeldmentData.WarnedItems.Count > 0 Then
            For i = 1 To objWeldmentData.WarnedItems.Count
                Print #LogFile, "     " & objWeldmentData.WarnedItems.Item(i).Name
            Next
        End If
        
        
        
    Next
End If
Print #LogFile, "     "
End Function

VERSION 5.00
Begin VB.Form frmBatch 
   BorderStyle     =   1  'Fixed Single
   Caption         =   "Batch Processing Sample"
   ClientHeight    =   4620
   ClientLeft      =   3840
   ClientTop       =   3510
   ClientWidth     =   8730
   LinkTopic       =   "Form1"
   LockControls    =   -1  'True
   MaxButton       =   0   'False
   MinButton       =   0   'False
   PaletteMode     =   1  'UseZOrder
   ScaleHeight     =   4620
   ScaleWidth      =   8730
   StartUpPosition =   2  'CenterScreen
   Begin VB.TextBox txtLogfile 
      Height          =   285
      Left            =   1140
      TabIndex        =   6
      Top             =   3960
      Width           =   4815
   End
   Begin VB.TextBox txtStatus 
      BackColor       =   &H8000000F&
      Height          =   285
      Left            =   0
      Locked          =   -1  'True
      TabIndex        =   17
      Top             =   4320
      Width           =   8715
   End
   Begin VB.Frame Frame2 
      Caption         =   "Process Types"
      Height          =   2175
      Left            =   5160
      TabIndex        =   16
      Top             =   240
      Width           =   3495
      Begin VB.CheckBox chkDraft 
         Caption         =   "D&raft documents"
         Height          =   255
         Left            =   540
         TabIndex        =   25
         Top             =   1860
         Width           =   2535
      End
      Begin VB.CheckBox chkAssembly 
         Caption         =   "Ass&embly documents"
         Height          =   195
         Left            =   540
         TabIndex        =   24
         Top             =   1620
         Width           =   2655
      End
      Begin VB.CheckBox chkPart 
         Caption         =   "Part/Sheet &Metal documents"
         Height          =   255
         Left            =   540
         TabIndex        =   23
         Top             =   1320
         Width           =   2715
      End
      Begin VB.ComboBox cboFromType 
         Height          =   315
         Left            =   1320
         TabIndex        =   22
         Top             =   540
         Width           =   2115
      End
      Begin VB.OptionButton optConvertFrom 
         Caption         =   "Convert &from:"
         Height          =   255
         Left            =   60
         TabIndex        =   21
         Top             =   570
         Width           =   1275
      End
      Begin VB.ComboBox cboToType 
         Height          =   315
         Left            =   1320
         TabIndex        =   20
         Top             =   930
         Width           =   2115
      End
      Begin VB.OptionButton optConvertTo 
         Caption         =   "Convert &to: "
         Height          =   255
         Left            =   60
         TabIndex        =   19
         Top             =   960
         Width           =   1155
      End
      Begin VB.OptionButton optPrintDocuments 
         Caption         =   "Print &Draft documents"
         Height          =   255
         Left            =   60
         TabIndex        =   18
         Top             =   240
         Value           =   -1  'True
         Width           =   2175
      End
   End
   Begin VB.FileListBox filList 
      Height          =   1455
      Left            =   120
      Pattern         =   "*.par"
      TabIndex        =   14
      Top             =   4740
      Visible         =   0   'False
      Width           =   2535
   End
   Begin VB.DirListBox dirList 
      Height          =   1605
      Left            =   2760
      TabIndex        =   13
      Top             =   4740
      Visible         =   0   'False
      Width           =   2955
   End
   Begin VB.Frame Frame1 
      Caption         =   "Documents to Process "
      Height          =   1335
      Left            =   5160
      TabIndex        =   12
      Top             =   2460
      Width           =   3495
      Begin VB.OptionButton optAllFiles 
         Caption         =   "&A"
         Height          =   195
         Left            =   60
         TabIndex        =   9
         Top             =   990
         Width           =   195
      End
      Begin VB.OptionButton optAllInDirectory 
         Caption         =   "All &files in selected directory"
         Height          =   195
         Left            =   60
         TabIndex        =   7
         Top             =   285
         Value           =   -1  'True
         Width           =   2295
      End
      Begin VB.OptionButton optSelected 
         Caption         =   "&Selected files only"
         Height          =   255
         Left            =   60
         TabIndex        =   8
         Top             =   540
         Width           =   1815
      End
      Begin VB.Label Label4 
         Caption         =   "&All files in selected directory and subdirectories"
         Height          =   390
         Left            =   345
         TabIndex        =   15
         Top             =   855
         Width           =   2655
      End
   End
   Begin VB.CommandButton cmdProcess 
      Caption         =   "&Process"
      Height          =   375
      Left            =   6540
      TabIndex        =   10
      Top             =   3870
      Width           =   1035
   End
   Begin VB.CommandButton cmdCancel 
      Caption         =   "Cancel"
      Height          =   375
      Left            =   7620
      TabIndex        =   11
      Top             =   3870
      Width           =   1035
   End
   Begin VB.DirListBox dirDirectory 
      Height          =   3240
      Left            =   2460
      TabIndex        =   4
      Top             =   300
      Width           =   2595
   End
   Begin VB.FileListBox filFiles 
      Height          =   3600
      Left            =   60
      MultiSelect     =   2  'Extended
      Pattern         =   "*.par;*.psm;*.asm;*.dft"
      TabIndex        =   2
      Top             =   300
      Width           =   2355
   End
   Begin VB.DriveListBox drvDrive 
      Height          =   315
      Left            =   2460
      TabIndex        =   0
      Top             =   3560
      Width           =   2595
   End
   Begin VB.Label lblLogfile 
      Alignment       =   1  'Right Justify
      Caption         =   "&Log file name:"
      Height          =   195
      Left            =   60
      TabIndex        =   5
      Top             =   4020
      Width           =   1035
   End
   Begin VB.Label Label2 
      Caption         =   "D&irectories:"
      Height          =   255
      Left            =   2460
      TabIndex        =   3
      Top             =   60
      Width           =   1635
   End
   Begin VB.Label Label1 
      Caption         =   "D&ocuments:"
      Height          =   255
      Left            =   60
      TabIndex        =   1
      Top             =   60
      Width           =   1635
   End
End
Attribute VB_Name = "frmBatch"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Option Explicit

' Flag used to indicate the stop button was selected during processing.
Private StopProcess As Boolean

Private LastLogFilename As String
Private UserSelectedMode As Boolean

   

Private Sub cboFromType_Click()
    ' Call the convert from option button click event
    ' since it already does the changing of filters.
    If optConvertFrom.Value = True Then
        optConvertFrom_Click
    End If
End Sub

Private Sub cboToType_Click()
    ' Call the convert to option button click event
    ' since it already does the changing of filters.
    If optConvertTo.Value = True Then
        optConvertTo_Click
    End If
End Sub

Private Sub chkAssembly_Click()
    optConvertTo_Click
End Sub

Private Sub chkDraft_Click()
    optConvertTo_Click
End Sub

Private Sub chkPart_Click()
    optConvertTo_Click
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
    Dim objApp As Object
    Dim objDoc As Object
    Dim strFileNames() As String
    Dim intFileNameCount As Integer
    Dim strPattern As String
    Dim LogFile As Integer
    Dim ErrMessage As String
    Dim KillLogFile As Boolean
    Dim NewFilename As String
    Dim FileExtension As String
    Dim TemplateFile As String
    Dim lPaperSize As Long
    Dim lPaperOrient As Long
    
    
    ' Check to see if the specified log file already exists.
    If Dir(txtLogfile.Text) <> "" Then
        If MsgBox("The specified log file '" & txtLogfile.Text & "' exists.  Do you want to overwrite it?", vbYesNo + vbQuestion, "Open & Save") = vbNo Then
            Exit Sub
        Else
            KillLogFile = True
        End If
    Else
        KillLogFile = False
    End If
    
    ' Change the caption on the cancel button and set the stop processing flag.
    cmdCancel.Caption = "Stop"
    StopProcess = False
    
    ' Initialize flag to indicate if the user wants to stop processing files.
    StopProcess = False
        
    ' Build up list of files to process depending on which option was selected.
    intFileNameCount = 0
    If filFiles.ListCount > 0 Or optAllFiles Then
        ' Only process the selected files so build up the array so it
        ' contains the currently selected files.
        If optSelected Then
            ' Allocate space to store the filenames.
            ReDim strFileNames(1 To filFiles.ListCount)
            
            ' Load the selected filenames into the array.
            For i = 0 To filFiles.ListCount - 1
                If filFiles.Selected(i) Then
                    intFileNameCount = intFileNameCount + 1
                    strFileNames(intFileNameCount) = filFiles.Path & "\" & filFiles.List(i)
                End If
            Next
        ' Process all the files in the current directory.
        ElseIf optAllInDirectory Then
            
            ' Allocate space to store the filenames.
            ReDim strFileNames(1 To filFiles.ListCount)
            
            ' Load the selected filenames into the array.
            For i = 0 To filFiles.ListCount - 1
                intFileNameCount = intFileNameCount + 1
                strFileNames(intFileNameCount) = filFiles.Path & "\" & filFiles.List(i)
            Next
        ' Process all files in the current directory and subdirectories.
        ElseIf optAllFiles Then
            ' Call function to get all files in the current directory and subdirectories.
            txtStatus.Text = "Creating list of files to process ..."
            Call ReadFileNamesFromDirectory(dirDirectory.Path, intFileNameCount, strFileNames, filFiles.Pattern)
            txtStatus.Text = ""
        End If
    End If
            
    ' Turn on error trapping.
    On Error Resume Next

    ' Attempt to connect to a running instance of Solid Edge.
    Set objApp = GetObject(, "SolidEdge.Application")
    If Err Then
        txtStatus.Text = "Starting Solid Edge ..."
        ' Solid Edge is not running.  Clear the previous error.
        Err.Clear

        ' Start Solid Edge.
        Set objApp = CreateObject("SolidEdge.Application")

        ' Cannot start Solid Edge, so exit the program.
        If Err Then
            MsgBox "Cannot start Solid Edge.", vbCritical + vbOKOnly, "Open & Save"
            End
        End If

        ' Make Solid Edge visible.
        objApp.Visible = True
    End If
    On Error GoTo 0
    
    ' Delete the existing log file since the user specified to overwrite it.
    If KillLogFile Then
        Kill txtLogfile.Text
    End If
    
    ' Open the log file.
    On Error Resume Next
    LogFile = FreeFile
    Open txtLogfile.Text For Output As #LogFile
    If Err Then
        MsgBox "Error opening specified logfile: '" & txtLogfile.Text & "'", vbOKOnly + vbCritical, "Open & Save"
        Exit Sub
    End If
    On Error GoTo 0
    
    ' Write header information into log file.
    Print #LogFile, "Batch Log: " & Date & ", " & Time
    Print #LogFile, ""

    ' Loop through the list of files and process.
    For i = 1 To intFileNameCount
        ' Check the global variable to see if the stop process command button has been selected
        DoEvents
        If StopProcess Then
            MsgBox "Processing aborted."
            GoTo RegularEnd
        End If

        ' Display current status
        txtStatus.Text = "Processing file " & i & " of " & intFileNameCount & ": '" & strFileNames(i) & "'"

        ' Perform the correct task based on what was selected.
        If optPrintDocuments Then
            On Error Resume Next
            
            ' Open the document.
            Set objDoc = Nothing
            Set objDoc = objApp.Documents.Open(strFileNames(i))
            If Err Then
                Print #LogFile, "Error opening document: " & strFileNames(i)
                Err.Clear
            Else
                ' Set a default, so response for unhandled cases is consistent
                lPaperSize = vbPRPS11x17
                lPaperOrient = vbPRORLandscape
                ' Determine the size of the sheet.
                Select Case objDoc.ActiveSheet.SheetSetup.SheetSizeOption
               ' Case igIsoA3Tall
                Case igIsoA3Tall
                    lPaperSize = vbPRPSA3
                    lPaperOrient = vbPRORPortrait
                Case igIsoA3Wide
                    lPaperSize = vbPRPSA3
                    lPaperOrient = vbPRORLandscape
                Case igIsoA4Tall
                    lPaperSize = vbPRPSA4
                    lPaperOrient = vbPRORPortrait
                Case igIsoA4Wide
                    lPaperSize = vbPRPSA4
                    lPaperOrient = vbPRORLandscape
                Case igAnsiBWide
                    lPaperSize = vbPRPS11x17
                    lPaperOrient = vbPRORLandscape
                Case igAnsiBTall
                    lPaperSize = vbPRPS11x17
                    lPaperOrient = vbPRORPortrait
                Case igAnsiAWide
                    lPaperSize = vbPRPSLetter
                    lPaperOrient = vbPRORLandscape
                Case igAnsiATall
                    lPaperSize = vbPRPSLetter
                    lPaperOrient = vbPRORPortrait
                Case igAnsiDWide
                    lPaperSize = vbPRPS11x17
                    lPaperOrient = vbPRORLandscape
                Case igAnsiDTall
                    lPaperSize = vbPRPS11x17
                    lPaperOrient = vbPRORPortrait
                End Select
                
                
                ' Print the Draft document.
                Call objDoc.PrintOut(Orientation:=lPaperOrient, ColorAsBlack:=True, PaperSize:=lPaperSize, Scale:=1#)
                If Err Then
                    Print #LogFile, "Error printing document: " & strFileNames(i)
                    Err.Clear
                Else
                    Print #LogFile, "Successfully printed document: " & strFileNames(i)
                End If
            End If
            On Error GoTo 0

            ' Close the document without saving.
            If Not objDoc Is Nothing Then
                objDoc.Close False
                Set objDoc = Nothing
                ' Give the application time to process the document closure
                Call objApp.DoIdle
            End If
        ElseIf optConvertFrom Then
            ' Determine the template to use.
            Select Case cboFromType.Text
            Case "EMS (*.ems)", "Parasolid (*.x_t)", "UG Files (*.prt)"
                TemplateFile = "Normal.par"
                FileExtension = "par"
            Case "Microstation (*.dgn)", "AutoCAD (*.dwg)", "AutoCAD (*.dxf)", "IGES (*.igs)", "MDS (*.mds)", "Proren (*.npf)", "Tech2d (*.xeo)"
                TemplateFile = "Normal.dft"
                FileExtension = "dft"
            End Select
            
            ' Build up the new file name.
            NewFilename = Left(strFileNames(i), Len(strFileNames(i)) - 3) & FileExtension
            
            ' Open the existing file.
            On Error Resume Next
            Set objDoc = Nothing
            Set objDoc = objApp.Documents.OpenWithTemplate(strFileNames(i), TemplateFile)
            If Err Then
                Print #LogFile, "Error opening document: " & strFileNames(i)
                Err.Clear
            Else
                ' Save the new document.
                objDoc.SaveAs NewFilename
                If Err Then
                    Print #LogFile, "Error saving document '" & strFileNames(i) & "' to '" & NewFilename & "'."
                    Err.Clear
                Else
                    Print #LogFile, "Successfully saved '" & strFileNames(i) & " ' as '" & NewFilename & "'."
                End If
            End If
            On Error GoTo 0

            If Not objDoc Is Nothing Then
                objDoc.Close False
                Set objDoc = Nothing
                ' Give the application time to process the document closure
                Call objApp.DoIdle
            End If
        ElseIf optConvertTo Then
            ' Build up the file name of the file to create.
            Select Case cboToType.Text
            Case "Parasolid (*.x_t)"
                FileExtension = "x_t"
            Case "EMS (*.ems)"
                FileExtension = "ems"
            Case "STL File (*.stl)"
                FileExtension = "stl"
            Case "Microstation (*.dgn)"
                FileExtension = "dgn"
            Case "AutoCAD (*.dwg)"
                FileExtension = "dwg"
            Case "AutoCAD (*.dxf)"
                FileExtension = "dxf"
            End Select
            
            NewFilename = Left(strFileNames(i), Len(strFileNames(i)) - 3) & FileExtension
        
            ' Open the document.
            On Error Resume Next
            Set objDoc = Nothing
            Set objDoc = objApp.Documents.Open(strFileNames(i))
            If Err Then
                Print #LogFile, "Error opening document: " & strFileNames(i)
                Err.Clear
            Else
                ' Save the document using the new name.  The SaveAs method will
                ' save the file to as a specific type depending on the file extension.
                objDoc.SaveAs NewFilename
                If Err Then
                    Print #LogFile, "Error saving document '" & strFileNames(i) & "' to '" & NewFilename & "'."
                    Err.Clear
                Else
                    Print #LogFile, "Successfully saved '" & strFileNames(i) & "' as '" & NewFilename & "'."
                End If
            End If
            On Error GoTo 0
            
            ' Close the document without saving.
            If Not objDoc Is Nothing Then
                objDoc.Close False
                Set objDoc = Nothing
                ' Give the application time to process the document closure
                Call objApp.DoIdle
           End If
        End If
    Next
    
RegularEnd:
    ' Close the log file.
    Close LogFile
        
    ' Dismiss the status form.
    txtStatus.Text = "Finished processing."
    
    frmBatch.Visible = True
    cmdCancel.Caption = "Cancel"
    Exit Sub
End Sub


Private Sub dirDirectory_Change()
    filFiles.Path = dirDirectory.Path
    
    ' Check to see if the current name is different than the last default.
    If txtLogfile.Text = LastLogFilename Or txtLogfile.Text = "" Then
        ' Build up new default log filename.
        If Right(dirDirectory.Path, 1) = "\" Then
            txtLogfile.Text = dirDirectory.Path & "Batch.log"
        Else
            txtLogfile.Text = dirDirectory.Path & "\Batch.log"
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
    ' Initialize the default log file.
    txtLogfile.Text = dirDirectory.Path & "\Batch.log"
    LastLogFilename = txtLogfile.Text
        
    ' Initialize the default process type by calling the click
    ' event on the appropriate option button.
    optPrintDocuments_Click
    
    ' Initialize the combo boxes with their contents.
    cboFromType.Clear
    cboFromType.AddItem "EMS (*.ems)"
    cboFromType.AddItem "Parasolid (*.x_t)"
    cboFromType.AddItem "UG Files (*.prt)"
    cboFromType.AddItem "Microstation (*.dgn)"
    cboFromType.AddItem "AutoCAD (*.dwg)"
    cboFromType.AddItem "AutoCAD (*.dxf)"
    cboFromType.AddItem "IGES (*.igs)"
    cboFromType.AddItem "MDS (*.mds)"
    cboFromType.AddItem "Proren (*.npf)"
    cboFromType.AddItem "Tech2d (*.xeo)"
    cboFromType.Text = "EMS (*.ems)"
    
    cboToType.Clear
    cboToType.AddItem "Parasolid (*.x_t)"
    cboToType.AddItem "EMS (*.ems)"
    cboToType.AddItem "STL File (*.stl)"
    cboToType.AddItem "Microstation (*.dgn)"
    cboToType.AddItem "AutoCAD (*.dwg)"
    cboToType.AddItem "AutoCAD (*.dxf)"
    cboToType.Text = "Parasolid (*.x_t)"
End Sub

Private Sub Label4_Click()
    optAllFiles.Value = True
    UserSelectedMode = True
End Sub

Private Sub optConvertFrom_Click()
    ' Disable the select boxes.
    chkPart.Enabled = False
    chkAssembly.Enabled = False
    chkDraft.Enabled = False

    ' Set the correct search pattern based on the currently selected type.
    Select Case cboFromType.Text
    Case "EMS (*.ems)"
        filFiles.Pattern = "*.ems"
    Case "Parasolid (*.x_t)"
        filFiles.Pattern = "*.x_t"
    Case "UG Files (*.prt)"
        filFiles.Pattern = "*.prt"
    Case "Microstation (*.dgn)"
        filFiles.Pattern = "*.dgn"
    Case "AutoCAD (*.dwg)"
        filFiles.Pattern = "*.dwg"
    Case "AutoCAD (*.dxf)"
        filFiles.Pattern = "*.dxf"
    Case "IGES (*.igs)"
        filFiles.Pattern = "*.igs"
    Case "MDS (*.mds)"
        filFiles.Pattern = "*.mds"
    Case "Proren (*.npf)"
        filFiles.Pattern = "*.npf"
    Case "Tech2d (*.xeo)"
        filFiles.Pattern = "*.xeo"
    End Select

    filFiles.Refresh
End Sub

Private Sub optConvertTo_Click()
    Dim Filter As String
    
    ' Set the correct search pattern based on the currently selected type.
    Select Case cboToType.Text
    Case "EMS (*.ems)"
        chkPart.Enabled = True
        chkAssembly.Enabled = True
        chkDraft.Enabled = False
    Case "Parasolid (*.x_t)"
        chkPart.Enabled = True
        chkAssembly.Enabled = True
        chkDraft.Enabled = False
    Case "STL File (*.stl)"
        chkPart.Enabled = True
        chkAssembly.Enabled = False
        chkDraft.Enabled = False
    Case "Microstation (*.dgn)"
        chkPart.Enabled = False
        chkAssembly.Enabled = False
        chkDraft.Enabled = True
    Case "AutoCAD (*.dwg)"
        chkPart.Enabled = False
        chkAssembly.Enabled = False
        chkDraft.Enabled = True
    Case "AutoCAD (*.dxf)"
        chkPart.Enabled = False
        chkAssembly.Enabled = False
        chkDraft.Enabled = True
    End Select
    
    Filter = ""
    If chkPart.Value = vbChecked And chkPart.Enabled Then
        Filter = "*.par;*.psm"
    End If
    
    If chkAssembly.Value = vbChecked And chkAssembly.Enabled Then
        If Filter <> "" Then
            Filter = Filter & ";"
        End If
        
        Filter = Filter & "*.asm"
    End If
    
    If chkDraft.Value = vbChecked And chkDraft.Enabled Then
        If Filter <> "" Then
            Filter = Filter & ";"
        End If
        
        Filter = Filter & "*.dft"
    End If
    
    If Filter = "" Then
        ' Set garbage filter so no documents will be displayed.
        Filter = "zzzzzzz.zzzzzzzz"
    End If
    
    filFiles.Pattern = Filter
End Sub

Private Sub optPrintDocuments_Click()
    ' Disable the check boxes.
    chkPart.Enabled = False
    chkAssembly.Enabled = False
    chkDraft.Enabled = False
    
    ' Set the filter for Draft documents.
    filFiles.Pattern = "*.dft"
End Sub

Private Sub optSelected_Click()
    UserSelectedMode = True
End Sub


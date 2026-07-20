VERSION 5.00
Object = "{F9043C88-F6F2-101A-A3C9-08002B2F49FB}#1.2#0"; "comdlg32.ocx"
Begin VB.Form frmChngLcl 
   BorderStyle     =   3  'Fixed Dialog
   Caption         =   "Set Document CreationLocale"
   ClientHeight    =   6270
   ClientLeft      =   4200
   ClientTop       =   3360
   ClientWidth     =   6060
   FillColor       =   &H000000FF&
   ForeColor       =   &H00C0C0C0&
   LinkTopic       =   "Form1"
   MaxButton       =   0   'False
   MinButton       =   0   'False
   PaletteMode     =   1  'UseZOrder
   ScaleHeight     =   6270
   ScaleWidth      =   6060
   ShowInTaskbar   =   0   'False
   Begin MSComDlg.CommonDialog CommonDialog1 
      Left            =   120
      Top             =   5760
      _ExtentX        =   847
      _ExtentY        =   847
      _Version        =   393216
   End
   Begin VB.Frame Frame2 
      Caption         =   "Files"
      Height          =   2175
      Left            =   120
      TabIndex        =   8
      Top             =   2640
      Width           =   5775
      Begin VB.CheckBox chkSubFolders 
         Caption         =   "Process files in sub-folders"
         Enabled         =   0   'False
         Height          =   255
         Left            =   360
         TabIndex        =   14
         Top             =   960
         Value           =   1  'Checked
         Width           =   4335
      End
      Begin VB.CommandButton cmdBrowse 
         Caption         =   "Browse"
         Enabled         =   0   'False
         Height          =   255
         Left            =   4800
         TabIndex        =   13
         Top             =   600
         Width           =   735
      End
      Begin VB.TextBox txtLogFile 
         Enabled         =   0   'False
         Height          =   285
         Left            =   360
         TabIndex        =   12
         Text            =   "ChangeLocale.txt"
         Top             =   600
         Width           =   4335
      End
      Begin VB.TextBox Text1 
         Height          =   285
         Left            =   360
         TabIndex        =   11
         Top             =   1680
         Width           =   5055
      End
      Begin VB.OptionButton optOneFile 
         Caption         =   "Process only this one file:"
         Height          =   255
         Left            =   120
         TabIndex        =   10
         Top             =   1440
         Value           =   -1  'True
         Width           =   5295
      End
      Begin VB.OptionButton optAllFiles 
         Caption         =   "Process all Solid Edge files in the selected folder and log results to this file:"
         Height          =   255
         Left            =   120
         TabIndex        =   9
         Top             =   240
         Width           =   5535
      End
   End
   Begin VB.Frame Frame1 
      Caption         =   "Look in:"
      Height          =   2415
      Left            =   120
      TabIndex        =   4
      Top             =   120
      Width           =   5775
      Begin VB.FileListBox FileList 
         Height          =   2040
         Left            =   2400
         TabIndex        =   7
         Top             =   230
         Width           =   3135
      End
      Begin VB.DirListBox dirList 
         Height          =   1665
         Left            =   120
         TabIndex        =   6
         Top             =   580
         Width           =   2280
      End
      Begin VB.DriveListBox Drive1 
         Height          =   315
         Left            =   120
         TabIndex        =   5
         Top             =   240
         Width           =   2295
      End
   End
   Begin VB.CommandButton Command2 
      Caption         =   "Exit"
      Height          =   375
      Left            =   4800
      TabIndex        =   3
      Top             =   5760
      Width           =   1095
   End
   Begin VB.CommandButton Command1 
      Caption         =   "Process"
      Height          =   375
      Left            =   3480
      TabIndex        =   2
      Top             =   5760
      Width           =   1095
   End
   Begin VB.ComboBox Combo1 
      Height          =   315
      Left            =   120
      TabIndex        =   1
      Top             =   5280
      Width           =   5775
   End
   Begin VB.Label Label1 
      Caption         =   "New CreationLocale for the document :"
      Height          =   255
      Left            =   120
      TabIndex        =   0
      Top             =   5040
      Width           =   4095
   End
End
Attribute VB_Name = "frmChngLcl"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Option Explicit
Dim fileName As String
Dim flag As Boolean

Function GetValueFromIndex(IndexValue As Long) As String

Dim i As Integer
Dim GotIt As Boolean

GotIt = False
For i = 0 To (Combo1.ListCount - 1)
    If Combo1.ItemData(i) = IndexValue Then
        GetValueFromIndex = Combo1.List(i)
        GotIt = True
        Exit For
    End If
Next i
If GotIt = False Then
    GetValueFromIndex = "Unknown CreationLocale value!"
    End
End If

End Function


Private Function IsDir(strDir As String) As Boolean

    Dim strTest As String
    
    On Error GoTo ErrExit
    strTest = Dir(strDir)
    IsDir = Not ("" = strTest)
    Exit Function
    
ErrExit:
    Err.Clear
    IsDir = False
    
End Function

Private Function IsInitializedArrayOfStrings(strArray() As String) As Boolean

    Dim lL As Long 'lower bound of array
    Dim lU As Long 'upper bound of array
    
    On Error GoTo ErrExit
    
    lL = LBound(strArray)
    lU = UBound(strArray)
    
    IsInitializedArrayOfStrings = (lU >= lL)
    Exit Function
    
ErrExit:
    Err.Clear
    IsInitializedArrayOfStrings = False
    
End Function

Private Sub cmdBrowse_Click()

CommonDialog1.ShowSave
If CommonDialog1.fileName <> "" Then
    txtLogFile.Text = CommonDialog1.fileName
End If

End Sub

Public Sub OpenFile(TxtBox As VB.TextBox)

Dim TaskID As Long
Const lpOperation = "open"

If FileExists(TxtBox.Text) Then
    Call ShellExecute(TxtBox.Parent.hwnd, lpOperation, TxtBox.Text, "", "", SW_SHOW)
Else
    MsgBox "File " & TxtBox.Text & " does not exist."
End If

End Sub

Private Sub Combo1_KeyPress(KeyAscii As Integer)

    KeyAscii = 0
    MsgBox "Don't key in a value.  Select one from the list."
    
End Sub


Private Sub Command1_Click()
    
Dim PropSets As PropertySets
Dim Properties As Properties
Dim Prop As Property
Dim VerifyValue As Long
Dim NewLine As String
Dim strTitle As String
Dim Message As String
Dim Response
Dim strFiles() As String
Dim bIsInputFile As Boolean
Dim i As Integer
Dim LogFile As Integer
Dim LogFileClosed As Boolean
Dim bNotReady As Boolean

bNotReady = False
LogFileClosed = True
bIsInputFile = False
strTitle = "Change Solid Edge CreationLocale Property"
NewLine = Chr(10) & Chr(13)

'Disable this button until processing is complete
Command1.Enabled = False

bNotReady = (("" = txtLogFile.Text) And optAllFiles.value = True)
bNotReady = (("" = fileName) And optOneFile.value = True)
bNotReady = ("" = Combo1.Text)

If bNotReady Then
    Message = "You must select a Solid Edge file and set the target CreationLocale first."
    MsgBox Message, vbOKOnly, strTitle
    GoTo GracefulExit
End If

If optAllFiles Then
    If FileExists(txtLogFile.Text) Then
        Response = MsgBox(txtLogFile.Text & " exists.  Do you want to overwrite it?", vbYesNo, strTitle)
        If Response = vbYes Then
            If Not LogFileClosed Then
                Close LogFile
                LogFileClosed = True
            End If
            Kill txtLogFile.Text
        Else
            GoTo GracefulExit
        End If
    End If
    LogFile = FreeFile
    Open txtLogFile.Text For Output Access Write As LogFile
    LogFileClosed = False
    Call LoadSEFiles(FileList.Path, strFiles, bIsInputFile)
    If Not bIsInputFile Then
        Message = "There are no Solid Edge files in the path you selected."
        MsgBox Message, vbOKOnly, strTitle
        GoTo GracefulExit
    End If
Else
    ReDim strFiles(0)
    strFiles(0) = fileName
    bIsInputFile = Not ("" = fileName)
End If

For i = LBound(strFiles) To UBound(strFiles)
    If optAllFiles Then
        Text1.Text = strFiles(i)
        Message = "Setting creation locale of " & strFiles(i) & " to " & Combo1.Text & "."
        Write #LogFile, Message
    End If
    ' Connect to the Applicaiton
    On Error Resume Next
    Set PropSets = Nothing
    Set PropSets = CreateObject("SolidEdge.FileProperties")
    If Err <> 0 Then
        Message = "ERROR while accessing the File Properties client." & NewLine
        Message = Message & "Ensure Solid Edge is installed but not running."
        If optOneFile.value = True Then
            MsgBox Message, vbOKOnly, strTitle
        Else
            Write #LogFile, Message
        End If
        GoTo GracefulExit
    End If
    
    PropSets.Open (strFiles(i))
    If Err <> 0 Then
        Message = "ERROR while opening " & strFiles(i) & "." & NewLine
        Message = Message & "Ensure no other application is accessing strFiles(i)." & NewLine
        Message = Message & "Ensure strFiles(i) is not write-protected."
        If optOneFile.value = True Then
            MsgBox Message, vbOKOnly, strTitle
        Else
            Write #LogFile, Message
        End If
        GoTo NextLoop
    End If
    On Error GoTo BadError
    Set Properties = PropSets("ExtendedSummaryInformation")
    Set Prop = Properties.PropertyByID(igExtSumInfoCreationLocale)
'    MsgBox "Current CreationLocale value: " & Prop.Value & Chr(13) & "Requested new value: " & Combo1.ItemData(Combo1.ListIndex)
    If Prop.value = Combo1.ItemData(Combo1.ListIndex) Then
        If optOneFile.value = True Then
            Message = "The CreationLocale of " & strFiles(i) & " is already set to " & Combo1.Text & "." & NewLine
            Message = Message & "If you reset the CreationLocale to " & Combo1.Text & " now, the Modified attribute of this file will be set to the current time and date." & NewLine
            Message = Message & "Is this what you want?"
            If MsgBox(Message, vbYesNo, strTitle) = vbNo Then
                GoTo GracefulExit
            End If
        Else
            Message = "Skipped this file because the CreationLocale of " & strFiles(i) & " is already set to " & Combo1.Text & "." & NewLine
            Write #LogFile, Message
            GoTo NextLoop
        End If
    End If
    Prop.value = Combo1.ItemData(Combo1.ListIndex)
    VerifyValue = Prop.value
    Set Prop = Nothing
    Properties.Save
    Set Properties = Nothing
    Set PropSets = Nothing

'Do it all again to verify the new value
    On Error Resume Next
    Set PropSets = CreateObject("SolidEdge.fileproperties")
    If Err <> 0 Then
        Message = "ERROR: could not verify the changed CreationLocale property."
        If optOneFile.value = True Then
            MsgBox Message, vbOKOnly, strTitle
        Else
            Write #LogFile, Message
        End If
        GoTo NextLoop
    End If
    On Error GoTo BadError
    PropSets.Open (strFiles(i))
    Set Properties = PropSets("ExtendedSummaryInformation")
    Set Prop = Properties.PropertyByID(igExtSumInfoCreationLocale)
'    MsgBox "New CreationLocale value: " & Prop.Value
    If VerifyValue = Prop.value Then
        Message = "The CreationLocale of the document has been set to " & GetValueFromIndex(VerifyValue)
        If optOneFile.value = True Then
            MsgBox Message, vbOKOnly, strTitle
        Else
            Write #LogFile, Message
        End If
    Else
        Message = "ERROR: Could not find CreationLocale property in " & strFiles(i) & "." & NewLine
        Message = Message & "The CreationLocale was not reset."
        If optOneFile.value = True Then
            MsgBox Message, vbOKOnly, strTitle
        Else
            Write #LogFile, Message
        End If
    End If
    GoTo NextLoop
    
BadError:
    Err.Clear
    Message = "ERROR reading from or writing to " & strFiles(i) & "." & NewLine
    Message = Message & "This could be caused by a corrupt file."
    If optOneFile.value = True Then
        MsgBox Message, vbOKOnly, strTitle
    Else
        Write #LogFile, Message
    End If
    
NextLoop:
    Set Prop = Nothing
    Set Properties = Nothing
    Set PropSets = Nothing
    If optAllFiles Then Write #LogFile, NewLine

Next i

GracefulExit:
Close LogFile
Set Prop = Nothing
Set Properties = Nothing
Set PropSets = Nothing

'Re-enable this button
Command1.Enabled = True

End Sub


Function FileExists(TestFile As String) As Boolean

Dim value As Boolean
Dim ret As String

On Error Resume Next
ret = FileDateTime(TestFile)
value = Err.Number = 0
If Err.Number <> 0 Then
    Debug.Print Err.Number
    Debug.Print Err.Description
End If
FileExists = value

End Function
Sub LoadSEFiles(strDir As String, strFiles() As String, bFoundAnSEFile As Boolean)
' Find all Solid Edge files in the strDir folder and put them into the input
' array of strings.  Let the calling function know whether you found anything.

Dim courier As String
Dim i As Integer
Dim strNewDirs() As String
Dim bNestedFoundAnSeFile As Boolean
Dim strSEFileType(4) As String 'asm, dft, par, psm, pwd

strSEFileType(0) = "*.asm"
strSEFileType(1) = "*.dft"
strSEFileType(2) = "*.par"
strSEFileType(3) = "*.psm"
strSEFileType(4) = "*.pwd"

bFoundAnSEFile = False 'Keep track of whether or not you found any files

ChDrive strDir 'FileList.Path
ChDir strDir

For i = LBound(strSEFileType) To UBound(strSEFileType)
' Loop through all of the SE file types and read all the files
    'Find a file of the current type
    courier = Dir(strSEFileType(i))
    Do While courier <> "" 'if you found a file, keep going
        ' Debug.Print courier
        bFoundAnSEFile = True 'Keep track of whether or not you found any files
        If Not IsInitializedArrayOfStrings(strFiles) Then 'only do this once
            ReDim strFiles(0) 'initialize the array
        Else
            ReDim Preserve strFiles(UBound(strFiles) + 1) 'increment the array
        End If
        strFiles(UBound(strFiles)) = strDir & "\" & courier
        courier = Dir
    Loop
Next i

If chkSubFolders.value = vbChecked Then
    ' Build an array of subdirectories
    courier = Dir(strDir & "\", vbDirectory)   ' Retrieve the first entry.
    Do While courier <> ""   ' Start the loop.
        ' Ignore the current directory and the encompassing directory.
        If courier <> "." And courier <> ".." Then
            ' Use bitwise comparison to make sure MyName is a directory.
            If (GetAttr(strDir & "\" & courier) And vbDirectory) = vbDirectory Then
                If Not IsInitializedArrayOfStrings(strNewDirs) Then
                    ReDim strNewDirs(0)
                Else
                    ReDim Preserve strNewDirs(UBound(strNewDirs) + 1)
                End If
                strNewDirs(UBound(strNewDirs)) = strDir & "\" & courier
            End If   ' it represents a directory.
       End If
       courier = Dir   ' Get next entry.
    Loop
End If

If IsInitializedArrayOfStrings(strNewDirs) Then
    'We can only get here if chkSubFolders.value is true and the previous block
    'resulted in finding subfolders.  Now we'll recursively call ourself in each subfolder
    For i = LBound(strNewDirs) To UBound(strNewDirs)
        Call LoadSEFiles(strNewDirs(i), strFiles, bNestedFoundAnSeFile)
        If Not bFoundAnSEFile Then     'if we already found a file, dont reset
            bFoundAnSEFile = bNestedFoundAnSeFile
        End If
    Next i
End If

End Sub

Private Sub Command2_Click()
    
    Unload Me
    
End Sub




Private Sub dirList_Change()
    FileList.Path = dirList.Path
End Sub


Private Sub Drive1_Change()
    On Error GoTo DriveHandler
    dirList.Path = Drive1.Drive
    Exit Sub

DriveHandler:
    Drive1.Drive = dirList.Path
    Exit Sub

End Sub


Private Sub fileList_Click()
    Text1.Text = FileList.Path + "\" + FileList.fileName
    fileName = Text1.Text
End Sub


Private Sub Form_Load()
    Combo1.AddItem "Afrikaans"
    Combo1.ItemData(Combo1.NewIndex) = Val("&H0436")
    Combo1.AddItem "Arabic (Saudi Arabia)"
    Combo1.ItemData(Combo1.NewIndex) = Val("&H0401")
    Combo1.AddItem "Arabic (Iraq)"
    Combo1.ItemData(Combo1.NewIndex) = Val("&H0801")
    Combo1.AddItem "Arabic (Egypt)"
    Combo1.ItemData(Combo1.NewIndex) = Val("&H0C01")
    Combo1.AddItem "Arabic (Libya)"
    Combo1.ItemData(Combo1.NewIndex) = Val("&H1001")
    Combo1.AddItem "Arabic (Algeria)"
    Combo1.ItemData(Combo1.NewIndex) = Val("&H1401")
    Combo1.AddItem "Arabic (Morocco)"
    Combo1.ItemData(Combo1.NewIndex) = Val("&H1801")
    Combo1.AddItem "Arabic (Tunisia)"
    Combo1.ItemData(Combo1.NewIndex) = Val("&H1C01")
    Combo1.AddItem "Arabic (Oman)"
    Combo1.ItemData(Combo1.NewIndex) = Val("&H2001")
    Combo1.AddItem "Arabic (Yemen)"
    Combo1.ItemData(Combo1.NewIndex) = Val("&H2401")
    Combo1.AddItem "Arabic (Syria)"
    Combo1.ItemData(Combo1.NewIndex) = Val("&H2801")
    Combo1.AddItem "Arabic (Jordan)"
    Combo1.ItemData(Combo1.NewIndex) = Val("&H2C01")
    Combo1.AddItem "Arabic (Lebanon)"
    Combo1.ItemData(Combo1.NewIndex) = Val("&H3001")
    Combo1.AddItem "Arabic (Kuwait)"
    Combo1.ItemData(Combo1.NewIndex) = Val("&H3401")
    Combo1.AddItem "Arabic (U.A.E)"
    Combo1.ItemData(Combo1.NewIndex) = Val("&H3801")
    Combo1.AddItem "Arabic (Bahrain)"
    Combo1.ItemData(Combo1.NewIndex) = Val("&H3C01")
    Combo1.AddItem "Araboc (Qata)"
    Combo1.ItemData(Combo1.NewIndex) = Val("&H4001")
    Combo1.AddItem "Basque"
    Combo1.ItemData(Combo1.NewIndex) = Val("&H042D")
    Combo1.AddItem "Byelorussian"
    Combo1.ItemData(Combo1.NewIndex) = Val("&H0423")
    Combo1.AddItem "Bulgarian"
    Combo1.ItemData(Combo1.NewIndex) = Val("&H0402")
    Combo1.AddItem "Catalan"
    Combo1.ItemData(Combo1.NewIndex) = Val("&H0403")
    Combo1.AddItem "Chinese (Taiwan)"
    Combo1.ItemData(Combo1.NewIndex) = Val("&H0404")
    Combo1.AddItem "Chinese (PRC)"
    Combo1.ItemData(Combo1.NewIndex) = Val("&H0804")
    Combo1.AddItem "Chinese (Hong Kong)"
    Combo1.ItemData(Combo1.NewIndex) = Val("&H0C04")
    Combo1.AddItem "Chinese (Singapore)"
    Combo1.ItemData(Combo1.NewIndex) = Val("&H1004")
    Combo1.AddItem "Czech"
    Combo1.ItemData(Combo1.NewIndex) = Val("&H0405")
    Combo1.AddItem "Danish"
    Combo1.ItemData(Combo1.NewIndex) = Val("&H0406")
    Combo1.AddItem "Dutch (Standard)"
    Combo1.ItemData(Combo1.NewIndex) = Val("&H0413")
    Combo1.AddItem "Dutch (Belgian)"
    Combo1.ItemData(Combo1.NewIndex) = Val("&H0813")
    Combo1.AddItem "English (American)"
    Combo1.ItemData(Combo1.NewIndex) = Val("&H0409")
    Combo1.AddItem "English (British)"
    Combo1.ItemData(Combo1.NewIndex) = Val("&H0809")
    Combo1.AddItem "English (Canadian)"
    Combo1.ItemData(Combo1.NewIndex) = Val("&H1009")
    Combo1.AddItem "English (New Zealand)"
    Combo1.ItemData(Combo1.NewIndex) = Val("&H1409")
    Combo1.AddItem "English (Australian)"
    Combo1.ItemData(Combo1.NewIndex) = Val("&H0C09")
    Combo1.AddItem "English (Ireland)"
    Combo1.ItemData(Combo1.NewIndex) = Val("&H1809")
    Combo1.AddItem "English (South Africa)"
    Combo1.ItemData(Combo1.NewIndex) = Val("&H1C09")
    Combo1.AddItem "Estonian"
    Combo1.ItemData(Combo1.NewIndex) = Val("&H0425")
    Combo1.AddItem "Farsi"
    Combo1.ItemData(Combo1.NewIndex) = Val("&H0429")
    Combo1.AddItem "Finnish"
    Combo1.ItemData(Combo1.NewIndex) = Val("&H040B")
    Combo1.AddItem "French (Standard)"
    Combo1.ItemData(Combo1.NewIndex) = Val("&H040C")
    Combo1.AddItem "French (Belgian)"
    Combo1.ItemData(Combo1.NewIndex) = Val("&H080C")
    Combo1.AddItem "French (Swiss)"
    Combo1.ItemData(Combo1.NewIndex) = Val("&H100C")
    Combo1.AddItem "French (Canadian)"
    Combo1.ItemData(Combo1.NewIndex) = Val("&H0C0C")
    Combo1.AddItem "French (Luxembourg)"
    Combo1.ItemData(Combo1.NewIndex) = Val("&H140C")
    Combo1.AddItem "German (Standard)"
    Combo1.ItemData(Combo1.NewIndex) = Val("&H0407")
    Combo1.AddItem "German (Swiss)"
    Combo1.ItemData(Combo1.NewIndex) = Val("&H0807")
    Combo1.AddItem "German (Austrian)"
    Combo1.ItemData(Combo1.NewIndex) = Val("&H0C07")
    Combo1.AddItem "German (Liechtenstein)"
    Combo1.ItemData(Combo1.NewIndex) = Val("&H1407")
    Combo1.AddItem "Greek"
    Combo1.ItemData(Combo1.NewIndex) = Val("&H0408")
    Combo1.AddItem "Hebrew"
    Combo1.ItemData(Combo1.NewIndex) = Val("&H040D")
    Combo1.AddItem "Hungarian"
    Combo1.ItemData(Combo1.NewIndex) = Val("&H040E")
    Combo1.AddItem "Icelandic"
    Combo1.ItemData(Combo1.NewIndex) = Val("&H040F")
    Combo1.AddItem "Indoniesian"
    Combo1.ItemData(Combo1.NewIndex) = Val("&H0421")
    Combo1.AddItem "Italian (Standard)"
    Combo1.ItemData(Combo1.NewIndex) = Val("&H0410")
    Combo1.AddItem "Italian (Swiss)"
    Combo1.ItemData(Combo1.NewIndex) = Val("&H0810")
    Combo1.AddItem "Japanese"
    Combo1.ItemData(Combo1.NewIndex) = Val("&H0411")
    Combo1.AddItem "Korean"
    Combo1.ItemData(Combo1.NewIndex) = Val("&H0412")
    Combo1.AddItem "Latvian"
    Combo1.ItemData(Combo1.NewIndex) = Val("&H0426")
    Combo1.AddItem "Lithuanian"
    Combo1.ItemData(Combo1.NewIndex) = Val("&H0427")
    Combo1.AddItem "Norwegian (Bokmal)"
    Combo1.ItemData(Combo1.NewIndex) = Val("&H0414")
    Combo1.AddItem "Norwegian (Nynorsk)"
    Combo1.ItemData(Combo1.NewIndex) = Val("&H0814")
    Combo1.AddItem "Polish"
    Combo1.ItemData(Combo1.NewIndex) = Val("&H0415")
    Combo1.AddItem "Portuguese (Standard)"
    Combo1.ItemData(Combo1.NewIndex) = Val("&H0816")
    Combo1.AddItem "Portuguese (Brazilian)"
    Combo1.ItemData(Combo1.NewIndex) = Val("&H0416")
    Combo1.AddItem "Romanian"
    Combo1.ItemData(Combo1.NewIndex) = Val("&H0418")
    Combo1.AddItem "Russian"
    Combo1.ItemData(Combo1.NewIndex) = Val("&H0419")
    Combo1.AddItem "Slovak"
    Combo1.ItemData(Combo1.NewIndex) = Val("&H041B")
    Combo1.AddItem "Slovenian"
    Combo1.ItemData(Combo1.NewIndex) = Val("&H0424")
    Combo1.AddItem "Spanish (Mexican)"
    Combo1.ItemData(Combo1.NewIndex) = Val("&H080A")
    Combo1.AddItem "Spanish (Castilian)"
    Combo1.ItemData(Combo1.NewIndex) = Val("&H040A")
    Combo1.AddItem "Spanish (Modern)"
    Combo1.ItemData(Combo1.NewIndex) = Val("&H0C0A")
    Combo1.AddItem "Swedish"
    Combo1.ItemData(Combo1.NewIndex) = Val("&H041D")
    Combo1.AddItem "Thai"
    Combo1.ItemData(Combo1.NewIndex) = Val("&H041E")
    Combo1.AddItem "Turkish"
    Combo1.ItemData(Combo1.NewIndex) = Val("&H041F")
    Combo1.AddItem "Ukrainian"
    Combo1.ItemData(Combo1.NewIndex) = Val("&H0422")
    

End Sub





Private Sub optAllFiles_Click()

    If optOneFile.value = True Then
        Text1.Enabled = True
        txtLogFile.Enabled = False
        cmdBrowse.Enabled = False
        chkSubFolders.Enabled = False
    Else
        Text1.Enabled = False
        txtLogFile.Enabled = True
        cmdBrowse.Enabled = True
        chkSubFolders.Enabled = True
    End If
    
End Sub


Private Sub optOneFile_Click()
    
    If optOneFile.value = True Then
        Text1.Enabled = True
        txtLogFile.Enabled = False
        cmdBrowse.Enabled = False
        chkSubFolders.Enabled = False
    Else
        Text1.Enabled = False
        txtLogFile.Enabled = True
        cmdBrowse.Enabled = True
        chkSubFolders.Enabled = True
    End If

End Sub


Private Sub txtLogFile_DblClick()

    OpenFile txtLogFile

End Sub



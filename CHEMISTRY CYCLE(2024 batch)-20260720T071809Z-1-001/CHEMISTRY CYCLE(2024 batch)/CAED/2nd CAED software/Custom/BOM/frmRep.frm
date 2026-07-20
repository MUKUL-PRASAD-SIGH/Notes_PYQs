VERSION 5.00
Object = "{6B7E6392-850A-101B-AFC0-4210102A8DA7}#1.3#0"; "comctl32.ocx"
Begin VB.Form frmReport 
   BorderStyle     =   3  'Fixed Dialog
   Caption         =   "[Report Title]"
   ClientHeight    =   8655
   ClientLeft      =   3840
   ClientTop       =   1635
   ClientWidth     =   10965
   ControlBox      =   0   'False
   LinkTopic       =   "Form1"
   MaxButton       =   0   'False
   MinButton       =   0   'False
   PaletteMode     =   1  'UseZOrder
   ScaleHeight     =   8655
   ScaleWidth      =   10965
   ShowInTaskbar   =   0   'False
   Begin VB.CommandButton cmdCopy 
      Caption         =   "&Report Designer"
      Height          =   345
      Left            =   8280
      TabIndex        =   1
      Top             =   8250
      Width           =   1395
   End
   Begin VB.CommandButton cmdAnotherReport 
      Caption         =   "&Another Report"
      Height          =   345
      Left            =   6840
      TabIndex        =   0
      Top             =   8250
      Width           =   1395
   End
   Begin VB.CommandButton cmdExit 
      Caption         =   "Cancel"
      Height          =   345
      Left            =   9720
      TabIndex        =   2
      Top             =   8250
      Width           =   1155
   End
   Begin ComctlLib.ListView lvwReportList 
      Height          =   8115
      Left            =   60
      TabIndex        =   3
      Top             =   60
      Width           =   10815
      _ExtentX        =   19076
      _ExtentY        =   14314
      View            =   3
      LabelEdit       =   1
      LabelWrap       =   -1  'True
      HideSelection   =   -1  'True
      _Version        =   327682
      ForeColor       =   -2147483640
      BackColor       =   -2147483643
      BorderStyle     =   1
      Appearance      =   1
      BeginProperty Font {0BE35203-8F91-11CE-9DE3-00AA004BB851} 
         Name            =   "Courier New"
         Size            =   9
         Charset         =   0
         Weight          =   400
         Underline       =   0   'False
         Italic          =   0   'False
         Strikethrough   =   0   'False
      EndProperty
      NumItems        =   0
   End
End
Attribute VB_Name = "frmReport"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Option Explicit

Private Sub cmdAnotherReport_Click()
    Me.Visible = False
End Sub

Private Sub cmdCopy_Click()
    frmRepDes.Show 1
End Sub

Private Sub cmdExit_Click()
    End
End Sub

Private Sub Form_Load()
    DisplayBOM
End Sub
Sub CreatePropertyColumns()
    Dim intX As Integer
    
    ' Create the columns in the list view as necessary.
    For intX = 0 To NUM_OF_PROPERTIES - 2
        With frmProperties.chkAvailableProperties(intX)
            If .Value = vbChecked Then
                lvwReportList.ColumnHeaders.Add , .Caption, .Caption
            End If
        End With
    Next intX
    
    ' Size the column headers as necessary.
    With lvwReportList
        For intX = 1 To .ColumnHeaders.Count
           .ColumnHeaders.Item(intX).Width = (.Width \ .ColumnHeaders.Count) * 0.8
        Next intX
    End With

End Sub
Sub DisplayBOM()
    Dim intNodeNum As Integer
    Dim intColNum As Integer
    Dim strKey As String
    Dim strSpace As String
    Dim itmItem As ListItem
    
    'Create "Level" column for this report if necessary.
    If (gintReportType = OPT_BOM) Or (gintReportType = OPT_EX_BOM) Then
        lvwReportList.ColumnHeaders.Add , "Level", "Level"
    End If
    
    'Create the other columns.
    CreatePropertyColumns
    
    For intNodeNum = 1 To gintNodeCount
        For intColNum = 1 To lvwReportList.ColumnHeaders.Count
            With gusrNodeArray(intNodeNum)
                If .intLevel > 0 Then
                    strSpace = Space(.intLevel - 1)
                Else
                    strSpace = ""
                End If
                Select Case lvwReportList.ColumnHeaders(intColNum).Key
                    Case PROP_LEVEL
                        If intColNum = 1 Then
                            Set itmItem = lvwReportList.ListItems.Add(, , strSpace & CStr(.intLevel))
                        Else
                            itmItem.SubItems(intColNum - 1) = strSpace & CStr(.intLevel)
                        End If
                    Case PROP_PNAME
                        If intColNum = 1 Then
                            Set itmItem = lvwReportList.ListItems.Add(, , CStr(.strOccurrenceName))
                        Else
                            itmItem.SubItems(intColNum - 1) = CStr(.strOccurrenceName)
                        End If
                    Case PROP_PNUMBER
                        If intColNum = 1 Then
                            Set itmItem = lvwReportList.ListItems.Add(, , CStr(.strDocNumber))
                        Else
                            itmItem.SubItems(intColNum - 1) = CStr(.strDocNumber)
                        End If
                    Case PROP_PREV
                        If intColNum = 1 Then
                            Set itmItem = lvwReportList.ListItems.Add(, , CStr(.strDocRevision))
                        Else
                            itmItem.SubItems(intColNum - 1) = CStr(.strDocRevision)
                        End If
                    Case PROP_PQUANT
                        If intColNum = 1 Then
                            Set itmItem = lvwReportList.ListItems.Add(, , CStr(.intCount))
                        Else
                            itmItem.SubItems(intColNum - 1) = CStr(.intCount)
                        End If
                    Case PROP_TITLE
                        If intColNum = 1 Then
                            Set itmItem = lvwReportList.ListItems.Add(, , CStr(.strDocTitle))
                        Else
                            itmItem.SubItems(intColNum - 1) = CStr(.strDocTitle)
                        End If
                    Case PROP_CREATION
                        If intColNum = 1 Then
                            Set itmItem = lvwReportList.ListItems.Add(, , CStr(.strDocCreationDate))
                        Else
                            itmItem.SubItems(intColNum - 1) = CStr(.strDocCreationDate)
                        End If
                End Select
            End With
        Next intColNum
    Next intNodeNum
End Sub

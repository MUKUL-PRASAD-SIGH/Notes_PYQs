VERSION 5.00
Begin VB.Form frmRepDes 
   BackColor       =   &H00C0C0C0&
   Caption         =   "Report Designer"
   ClientHeight    =   4590
   ClientLeft      =   6075
   ClientTop       =   2565
   ClientWidth     =   3555
   FillColor       =   &H00C0C0C0&
   ForeColor       =   &H00C0C0C0&
   LinkTopic       =   "Form1"
   PaletteMode     =   1  'UseZOrder
   ScaleHeight     =   4590
   ScaleWidth      =   3555
   Begin VB.Frame Frame2 
      Caption         =   "Column Width Definition Type"
      Height          =   855
      Left            =   120
      TabIndex        =   20
      Top             =   3180
      Width           =   3315
      Begin VB.OptionButton optSpecifiedWidths 
         Caption         =   "Specified Widths"
         Height          =   240
         Left            =   780
         TabIndex        =   2
         Top             =   240
         Value           =   -1  'True
         Width           =   1515
      End
      Begin VB.OptionButton optTabbed 
         Caption         =   "Tabbed Delimiters"
         Height          =   240
         Left            =   780
         TabIndex        =   21
         Top             =   540
         Width           =   1590
      End
   End
   Begin VB.Frame Frame1 
      Caption         =   "Column Definitions"
      Height          =   3015
      Left            =   120
      TabIndex        =   3
      Top             =   60
      Width           =   3315
      Begin VB.TextBox txtOptSpaces 
         Height          =   300
         Index           =   3
         Left            =   2805
         TabIndex        =   17
         Text            =   "15"
         Top             =   1500
         Width           =   375
      End
      Begin VB.TextBox txtOptSpaces 
         Height          =   330
         Index           =   2
         Left            =   2805
         TabIndex        =   16
         Text            =   "15"
         Top             =   1140
         Width           =   375
      End
      Begin VB.TextBox txtOptSpaces 
         Height          =   300
         Index           =   1
         Left            =   2805
         TabIndex        =   15
         Text            =   "15"
         Top             =   780
         Width           =   375
      End
      Begin VB.TextBox txtOptSpaces 
         Height          =   300
         Index           =   0
         Left            =   2805
         TabIndex        =   14
         Text            =   "15"
         Top             =   420
         Width           =   375
      End
      Begin VB.TextBox txtOptSpaces 
         Height          =   300
         Index           =   4
         Left            =   2805
         TabIndex        =   13
         Text            =   "15"
         Top             =   1860
         Width           =   375
      End
      Begin VB.TextBox txtOptSpaces 
         Height          =   300
         Index           =   5
         Left            =   2805
         TabIndex        =   12
         Text            =   "15"
         Top             =   2220
         Width           =   375
      End
      Begin VB.TextBox txtOptSpaces 
         Height          =   300
         Index           =   6
         Left            =   2805
         TabIndex        =   11
         Text            =   "15"
         Top             =   2580
         Width           =   375
      End
      Begin VB.TextBox txtColumnName 
         Height          =   300
         Index           =   6
         Left            =   120
         TabIndex        =   10
         Top             =   2580
         Width           =   2655
      End
      Begin VB.TextBox txtColumnName 
         Height          =   300
         Index           =   5
         Left            =   120
         TabIndex        =   9
         Top             =   2220
         Width           =   2655
      End
      Begin VB.TextBox txtColumnName 
         Height          =   300
         Index           =   4
         Left            =   120
         TabIndex        =   8
         Top             =   1860
         Width           =   2655
      End
      Begin VB.TextBox txtColumnName 
         Height          =   300
         Index           =   3
         Left            =   120
         TabIndex        =   7
         Top             =   1500
         Width           =   2655
      End
      Begin VB.TextBox txtColumnName 
         Height          =   300
         Index           =   2
         Left            =   120
         TabIndex        =   6
         Top             =   1140
         Width           =   2655
      End
      Begin VB.TextBox txtColumnName 
         Height          =   300
         Index           =   1
         Left            =   120
         TabIndex        =   5
         Top             =   780
         Width           =   2655
      End
      Begin VB.TextBox txtColumnName 
         Height          =   300
         Index           =   0
         Left            =   120
         TabIndex        =   4
         Top             =   420
         Width           =   2655
      End
      Begin VB.Label Label2 
         Caption         =   "Width"
         ForeColor       =   &H80000008&
         Height          =   195
         Index           =   0
         Left            =   2760
         TabIndex        =   19
         Top             =   240
         Width           =   495
      End
      Begin VB.Label Label1 
         Caption         =   "Name"
         ForeColor       =   &H80000008&
         Height          =   195
         Index           =   0
         Left            =   120
         TabIndex        =   18
         Top             =   240
         Width           =   2595
      End
   End
   Begin VB.CommandButton cmdAbort 
      Caption         =   "C&ancel"
      Height          =   375
      Left            =   1800
      TabIndex        =   1
      Top             =   4140
      Width           =   1635
   End
   Begin VB.CommandButton cmdCopy 
      Caption         =   "&Copy To Clipboard"
      Height          =   375
      Left            =   105
      TabIndex        =   0
      Top             =   4140
      Width           =   1635
   End
End
Attribute VB_Name = "frmRepDes"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Option Explicit

Private Sub cmdAbort_Click()
    Unload Me
End Sub

Private Sub cmdCopy_Click()
    Dim strText As String
    Dim strTitle As String
    Dim strCRLF As String
    Dim strTemp As String
    Dim intRowNum As Integer
    Dim intColNum As Integer
    Dim intTotalWidth As Integer
    
    strCRLF = Chr(13) & Chr(10)
    
    If optSpecifiedWidths.Value = True Then
        intTotalWidth = 0
        With frmReport.lvwReportList
            ' Find total width so we can center the title.
            For intColNum = 1 To .ColumnHeaders.Count
                intTotalWidth = intTotalWidth + Val(txtOptSpaces(intColNum - 1))
            Next intColNum
        
            intTotalWidth = intTotalWidth + 2 * (.ColumnHeaders.Count - 1)
            
            strTitle = frmReport.Caption
            
            If intTotalWidth > Len(strTitle) Then
                ' Make sure title is centered.
                strText = Space((intTotalWidth - Len(strTitle)) \ 2) & strTitle & strCRLF & strCRLF
            Else
                strText = strTitle & strCRLF & strCRLF
            End If
            
            ' Print the date and time.
            strText = strText & "Date: " & Date & "  Time: " & Time & strCRLF & strCRLF
            
            ' Print the headings given in the columns of the report.
            For intColNum = 1 To .ColumnHeaders.Count
                ' This makes sure it is wide enough.
                strTemp = Format(txtColumnName(intColNum - 1), _
                          "!" & String(Val(txtOptSpaces(intColNum - 1)), "@"))
                ' And this makes sure its not too wide.
                strTemp = Left(strTemp, Val(txtOptSpaces(intColNum - 1)))
                strText = strText & strTemp
                If intColNum < .ColumnHeaders.Count Then
                    strText = strText & "  "
                End If
            Next intColNum
            
            ' Add a carriage return and line feed to advance to the next line.
            strText = strText & strCRLF
            
            ' Add dashes under each field.
            For intColNum = 1 To .ColumnHeaders.Count
                strText = strText & String(Val(txtOptSpaces(intColNum - 1)), "-")
                If intColNum < .ColumnHeaders.Count Then
                    strText = strText & "  "
                End If
            Next intColNum
            
            ' Add a carriage return and line feed to advance to the next line.
            strText = strText & strCRLF & strCRLF
            
            ' Print the values in each column.
            For intRowNum = 1 To .ListItems.Count
                ' This makes sure it is wide enough.
                strTemp = Format(.ListItems(intRowNum), _
                          "!" & String(Val(txtOptSpaces(0)), "@"))
                ' And this makes sure its not too wide.
                strTemp = Left(strTemp, Val(txtOptSpaces(0)))
                strText = strText & strTemp & "  "
                For intColNum = 1 To .ColumnHeaders.Count - 1
                    ' This makes sure it is wide enough.
                    strTemp = Format(.ListItems(intRowNum).SubItems(intColNum), _
                              "!" & String(Val(txtOptSpaces(intColNum)), "@"))
                    ' And this makes sure its not too wide.
                    strTemp = Left(strTemp, Val(txtOptSpaces(intColNum)))
                    If strTemp = "" Then
                        strTemp = Space(Val(txtOptSpaces(intColNum)))
                    End If
                    strText = strText & strTemp
                    If intColNum < .ColumnHeaders.Count Then
                        strText = strText & "  "
                    End If
                Next intColNum
                strText = strText & strCRLF
            Next intRowNum
        End With
    Else
        With frmReport.lvwReportList
            ' Print the Title
            strTitle = frmReport.Caption
            strText = strTitle & strCRLF
             
            ' Print the date and time.
            strText = strText & "Date: " & Date & "  Time: " & Time & strCRLF
            
            ' Print the headings given in the columns of the report.
            For intColNum = 1 To .ColumnHeaders.Count
                strText = strText & .ColumnHeaders(intColNum)
                If intColNum < .ColumnHeaders.Count Then
                    strText = strText & Chr(9)
                End If
            Next intColNum
            
            ' Add a carriage return and line feed to advance to the next line.
            strText = strText & strCRLF
            
            ' Print the values in each column.
            For intRowNum = 1 To .ListItems.Count
                strText = strText & .ListItems(intRowNum)
                strText = strText & Chr(9)
                For intColNum = 1 To .ColumnHeaders.Count - 1
                    strTemp = .ListItems(intRowNum).SubItems(intColNum)
                    ' PR5146641 - Pad with spaces here instead of a tab so the clipboard format
                    ' pastes correctly into Excel and text file. Aditya 6/9/05
                    If Len(strTemp) < 15 Then
                        strTemp = strTemp & Space((15 - Len(strTemp)))
                    End If
'                    If strTemp = "" Then
'                        strTemp = Chr(9)
'                    End If
                    strText = strText & strTemp
                    If intColNum < .ColumnHeaders.Count Then
                        strText = strText & Chr(9)
                    End If
                Next intColNum
                strText = strText & strCRLF
            Next intRowNum
        End With
    End If
    
    ' Clear the clipboard.
    Clipboard.Clear
    ' Copy to the clipboard.
    Clipboard.SetText strText
    
    Me.Visible = False
End Sub

Private Sub Form_Load()
    Dim intColNum As Integer
    
    With frmReport.lvwReportList
        For intColNum = 0 To .ColumnHeaders.Count - 1
            txtColumnName(intColNum).Text = .ColumnHeaders(intColNum + 1)
            txtColumnName(intColNum).Enabled = True
            txtOptSpaces(intColNum).Enabled = True
        Next intColNum
    End With
    
    ' I want a default value of 5 characters wide for the level
    ' field when it is present.
    If txtColumnName(0).Text = "Level" Then
        txtOptSpaces(0).Text = "5"
    End If
End Sub



Private Sub optSpecifiedWidths_Click()
    Dim i As Integer
    
    For i = 0 To frmReport.lvwReportList.ColumnHeaders.Count - 1
        txtOptSpaces(i).Enabled = True
    Next
End Sub

Private Sub optTabbed_Click()
    Dim i As Integer
    
    For i = 0 To frmReport.lvwReportList.ColumnHeaders.Count - 1
        txtOptSpaces(i).Enabled = False
    Next
End Sub

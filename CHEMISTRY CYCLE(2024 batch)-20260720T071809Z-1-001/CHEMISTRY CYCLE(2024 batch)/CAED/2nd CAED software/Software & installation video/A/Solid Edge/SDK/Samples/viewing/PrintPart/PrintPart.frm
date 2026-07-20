VERSION 5.00
Object = "{E03935A2-FBAD-11D0-8AC7-0800362FB302}#1.0#0"; "SEpartXd.ocx"
Begin VB.Form Form1 
   Caption         =   "Print Sample for SE Part control"
   ClientHeight    =   11715
   ClientLeft      =   60
   ClientTop       =   345
   ClientWidth     =   15660
   LinkTopic       =   "Form1"
   ScaleHeight     =   11715
   ScaleWidth      =   15660
   StartUpPosition =   3  'Windows Default
   Begin SEPARTXLib.SEpartX SEpartX1 
      Height          =   10320
      Left            =   90
      TabIndex        =   3
      Top             =   90
      Width           =   15495
      _Version        =   65536
      _ExtentX        =   27331
      _ExtentY        =   18203
      _StockProps     =   33
      BorderStyle     =   1
      PartFile        =   ""
   End
   Begin VB.ComboBox ShowTreeViewCombo 
      Height          =   315
      ItemData        =   "PrintPart.frx":0000
      Left            =   2205
      List            =   "PrintPart.frx":000A
      TabIndex        =   2
      Text            =   "ShowTreeViewCombo"
      Top             =   11205
      Width           =   960
   End
   Begin VB.ComboBox VisibleCombo 
      Height          =   315
      ItemData        =   "PrintPart.frx":001B
      Left            =   2205
      List            =   "PrintPart.frx":0025
      Style           =   2  'Dropdown List
      TabIndex        =   1
      Top             =   10800
      Width           =   945
   End
   Begin VB.CommandButton PrintPartFile 
      Caption         =   "Print"
      Height          =   375
      Left            =   4410
      TabIndex        =   0
      Top             =   10710
      Width           =   1755
   End
   Begin VB.Frame Frame1 
      Caption         =   "Settings"
      Height          =   1140
      Left            =   180
      TabIndex        =   4
      Top             =   10530
      Width           =   6045
      Begin VB.CommandButton PrintNoDialog 
         Caption         =   "Print with No dialog"
         Height          =   375
         Left            =   4230
         TabIndex        =   7
         Top             =   720
         Width           =   1770
      End
      Begin VB.Label Label1 
         Caption         =   "Part Control Visible"
         Height          =   285
         Left            =   135
         TabIndex        =   6
         Top             =   360
         Width           =   1770
      End
      Begin VB.Label ShowTreeViewWnd 
         Caption         =   "Show TreeView Wnd"
         Height          =   240
         Left            =   135
         TabIndex        =   5
         Top             =   720
         Width           =   1635
      End
   End
End
Attribute VB_Name = "Form1"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Private Sub Form_Load()
'This procedure is called when the form is first loaded.
'Here we can set the control's "PartFile" property. Modify and uncomment
'the line below to set this property to point to a valid Solid Edge part
'file on disk

'SEpartX1.PartFile = "D:\testcase\sefiles\Part\PartFile.par"
                    '(or)
'SEpartX1.PartFile = "D:\testcase\sefiles\assembly\AsmFile.asm"

SEpartX1.BackColor = RGB(0, 145, 212)
SEpartX1.BackColor2D = RGB(255, 255, 255)

VisibleCombo.ListIndex = 0
SEpartX1.Visible = True
If SEpartX1.ShowTreeViewWindow = True Then
    ShowTreeViewCombo.ListIndex = 0
Else
    ShowTreeViewCombo.ListIndex = 1
End If

End Sub

Private Sub PrintNoDialog_Click()
    'SEpartX1.PrintOut (True)
    Call SEpartX1.CopyEMFToClipboard
End Sub

Private Sub PrintPartFile_Click()
    SEpartX1.PrintOut (False)
End Sub

Private Sub ShowTreeViewCombo_Click()
If (ShowTreeViewCombo.ListIndex = 0) Then
    SEpartX1.ShowTreeViewWindow = True
Else
    SEpartX1.ShowTreeViewWindow = False
End If
End Sub

Private Sub VisibleCombo_Click()
If (VisibleCombo.ListIndex = 0) Then
    SEpartX1.Visible = True
Else
    SEpartX1.Visible = False
End If
End Sub


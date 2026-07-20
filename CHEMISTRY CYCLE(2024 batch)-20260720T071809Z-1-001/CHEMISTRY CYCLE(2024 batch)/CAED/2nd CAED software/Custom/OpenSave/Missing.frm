VERSION 5.00
Begin VB.Form frmMissing 
   Caption         =   "Missing/Unspecified Documents"
   ClientHeight    =   3975
   ClientLeft      =   60
   ClientTop       =   345
   ClientWidth     =   8835
   LinkTopic       =   "Form1"
   ScaleHeight     =   3975
   ScaleWidth      =   8835
   StartUpPosition =   2  'CenterScreen
   Begin VB.CommandButton cmdContinue 
      Caption         =   "Continue"
      Height          =   375
      Left            =   6300
      TabIndex        =   2
      Top             =   3540
      Width           =   1215
   End
   Begin VB.CommandButton cmdCancel 
      Caption         =   "Cancel"
      Height          =   375
      Left            =   7560
      TabIndex        =   1
      Top             =   3540
      Width           =   1215
   End
   Begin VB.ListBox lstFiles 
      Height          =   3375
      Left            =   60
      Sorted          =   -1  'True
      TabIndex        =   0
      Top             =   60
      Width           =   8715
   End
End
Attribute VB_Name = "frmMissing"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Option Explicit

Public ContinueProcessing As Boolean
Public DraftMissing As Boolean


Private Sub cmdCancel_Click()
    ContinueProcessing = False
    Me.Visible = False
End Sub

Private Sub cmdContinue_Click()
    If DraftMissing Then
        If MsgBox("Draft files are dependendent on one or more of the missing files.  When these" & Chr(13) & _
                  "Draft files are processed a dialog will display notifying you the required file" & Chr(13) & _
                  "is missing and will require you to click it before processing can be continued." & Chr(13) & Chr(13) & _
                  "Do you want to continue?", vbExclamation + vbYesNo, "Open & Save") = vbNo Then
            ContinueProcessing = False
        Else
            ContinueProcessing = True
        End If
    Else
        ContinueProcessing = True
    End If
    
    Me.Visible = False
End Sub

Private Sub Form_Load()
    WindowToTop Me.hWnd
End Sub

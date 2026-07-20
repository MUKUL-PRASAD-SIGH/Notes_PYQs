VERSION 5.00
Begin VB.Form frmHelp 
   BorderStyle     =   3  'Fixed Dialog
   Caption         =   "help - code"
   ClientHeight    =   4230
   ClientLeft      =   45
   ClientTop       =   330
   ClientWidth     =   6375
   Icon            =   "Help.frx":0000
   LinkTopic       =   "Form1"
   MaxButton       =   0   'False
   MinButton       =   0   'False
   ScaleHeight     =   4230
   ScaleWidth      =   6375
   ShowInTaskbar   =   0   'False
   StartUpPosition =   3  'Windows Default
   Begin VB.TextBox txtHelp 
      Height          =   4020
      Left            =   90
      MultiLine       =   -1  'True
      ScrollBars      =   2  'Vertical
      TabIndex        =   0
      Text            =   "Help.frx":0442
      Top             =   90
      Width           =   6180
   End
End
Attribute VB_Name = "frmHelp"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Option Explicit
Private Sub Form_Activate()

    Dim strFile As String
    Dim strLine As String
    Dim strHelp As String
    
    strFile = strGlobalPath & "\read-me.txt"
    
    Open strFile For Input As #1
    
    Do While Not EOF(1)
        Line Input #1, strLine
        strHelp = strHelp & strLine & Chr(13) & Chr(10)
    Loop
    
    frmHelp.txtHelp.Text = strHelp

    Close #1
    
End Sub
Private Sub Form_Load()

    On Error Resume Next
    
    ShowHelp
    
    
End Sub

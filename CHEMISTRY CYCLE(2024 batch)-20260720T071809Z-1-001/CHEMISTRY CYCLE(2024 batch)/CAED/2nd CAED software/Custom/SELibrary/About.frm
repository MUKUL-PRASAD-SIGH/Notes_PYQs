VERSION 5.00
Begin VB.Form frmAbout 
   BorderStyle     =   3  'Fixed Dialog
   Caption         =   "code"
   ClientHeight    =   3135
   ClientLeft      =   45
   ClientTop       =   330
   ClientWidth     =   4530
   ClipControls    =   0   'False
   Icon            =   "About.frx":0000
   LinkTopic       =   "Form1"
   MaxButton       =   0   'False
   MinButton       =   0   'False
   ScaleHeight     =   3135
   ScaleWidth      =   4530
   ShowInTaskbar   =   0   'False
   StartUpPosition =   3  'Windows Default
   Begin VB.Frame Frame1 
      Height          =   2850
      Left            =   135
      TabIndex        =   0
      Top             =   135
      Width           =   4200
      Begin VB.Label labAbout2 
         Caption         =   "code"
         Height          =   1545
         Left            =   135
         TabIndex        =   2
         Top             =   1170
         Width           =   3930
      End
      Begin VB.Label labAbout1 
         Caption         =   "code"
         Height          =   690
         Left            =   180
         TabIndex        =   1
         Top             =   225
         Width           =   3840
      End
   End
End
Attribute VB_Name = "frmAbout"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Option Explicit

Private Sub Form_Load()

    On Error Resume Next
    ShowAbout
    
End Sub

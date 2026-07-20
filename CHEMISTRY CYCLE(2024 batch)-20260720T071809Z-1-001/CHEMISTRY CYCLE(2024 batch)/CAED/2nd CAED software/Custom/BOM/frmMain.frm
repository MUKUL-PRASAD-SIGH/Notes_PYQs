VERSION 5.00
Begin VB.Form frmMain 
   BorderStyle     =   3  'Fixed Dialog
   Caption         =   "Bill Of Materials Sample"
   ClientHeight    =   2175
   ClientLeft      =   5175
   ClientTop       =   1755
   ClientWidth     =   3240
   ControlBox      =   0   'False
   LinkTopic       =   "Form1"
   MaxButton       =   0   'False
   MinButton       =   0   'False
   PaletteMode     =   1  'UseZOrder
   ScaleHeight     =   2175
   ScaleWidth      =   3240
   ShowInTaskbar   =   0   'False
   StartUpPosition =   2  'CenterScreen
   Begin VB.OptionButton optBOMTypes 
      Caption         =   "&Parts Lists"
      Height          =   225
      Index           =   3
      Left            =   480
      TabIndex        =   5
      Tag             =   "Parts Lists"
      Top             =   1260
      Width           =   2595
   End
   Begin VB.OptionButton optBOMTypes 
      Caption         =   "&Summary of Atomic Parts"
      Height          =   225
      Index           =   2
      Left            =   480
      TabIndex        =   4
      Tag             =   "Summary of Atomic Parts"
      Top             =   900
      Width           =   2595
   End
   Begin VB.OptionButton optBOMTypes 
      Caption         =   "&Exploded BOM"
      Height          =   225
      Index           =   1
      Left            =   480
      TabIndex        =   3
      Tag             =   "Exploded BOM"
      Top             =   540
      Width           =   2595
   End
   Begin VB.OptionButton optBOMTypes 
      Caption         =   "&BOM (Bill of Materials)"
      Height          =   225
      Index           =   0
      Left            =   480
      TabIndex        =   2
      Tag             =   "BOM (Bill of Materials)"
      Top             =   180
      Value           =   -1  'True
      Width           =   2595
   End
   Begin VB.CommandButton cmdCancel 
      Caption         =   "Cancel"
      Height          =   345
      Left            =   1740
      TabIndex        =   1
      Top             =   1740
      Width           =   1395
   End
   Begin VB.CommandButton cmdSelectProps 
      Caption         =   "Se&lect Properties"
      Height          =   345
      Left            =   120
      TabIndex        =   0
      Top             =   1740
      Width           =   1515
   End
End
Attribute VB_Name = "frmMain"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Option Explicit

Private Sub cmdSelectProps_Click()
    ' Display the form modally, so processing won't continue
    ' until the user is finished with this form.
    frmProperties.Show vbModal
End Sub

Private Sub cmdCancel_Click()
    End
End Sub

Private Sub Form_Load()
    ' Initialize the Public array.
    ReDim Preserve gusrNodeArray(1 To 100)
    gintNodeCountMax = 100
    gintNodeCount = 0
End Sub


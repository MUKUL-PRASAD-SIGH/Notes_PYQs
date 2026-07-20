VERSION 5.00
Object = "{6B7E6392-850A-101B-AFC0-4210102A8DA7}#1.3#0"; "comctl32.ocx"
Begin VB.Form frmProperties 
   BorderStyle     =   3  'Fixed Dialog
   Caption         =   "Properties to Report"
   ClientHeight    =   2910
   ClientLeft      =   6285
   ClientTop       =   2565
   ClientWidth     =   2700
   ControlBox      =   0   'False
   LinkTopic       =   "Form1"
   MaxButton       =   0   'False
   MinButton       =   0   'False
   PaletteMode     =   1  'UseZOrder
   ScaleHeight     =   2910
   ScaleWidth      =   2700
   ShowInTaskbar   =   0   'False
   StartUpPosition =   2  'CenterScreen
   Begin ComctlLib.StatusBar stsStatusBar 
      Align           =   2  'Align Bottom
      Height          =   255
      Left            =   0
      TabIndex        =   8
      Top             =   2655
      Width           =   2700
      _ExtentX        =   4763
      _ExtentY        =   450
      Style           =   1
      SimpleText      =   ""
      _Version        =   327682
      BeginProperty Panels {0713E89E-850A-101B-AFC0-4210102A8DA7} 
         NumPanels       =   1
         BeginProperty Panel1 {0713E89F-850A-101B-AFC0-4210102A8DA7} 
            Key             =   ""
            Object.Tag             =   ""
         EndProperty
      EndProperty
   End
   Begin VB.CheckBox chkAvailableProperties 
      Caption         =   "Part Creation Date"
      Height          =   165
      Index           =   5
      Left            =   360
      TabIndex        =   7
      Tag             =   "Part Quantity"
      Top             =   1800
      Width           =   2295
   End
   Begin VB.CheckBox chkAvailableProperties 
      Caption         =   "Part Title"
      Height          =   165
      Index           =   4
      Left            =   360
      TabIndex        =   6
      Tag             =   "Part Quantity"
      Top             =   1500
      Width           =   2295
   End
   Begin VB.CommandButton cmdGenerate 
      Caption         =   "&Generate"
      Height          =   330
      Left            =   300
      TabIndex        =   0
      Top             =   2220
      Width           =   1035
   End
   Begin VB.CommandButton cmdCancel 
      Caption         =   "&Cancel"
      Height          =   330
      Left            =   1440
      TabIndex        =   5
      Top             =   2220
      Width           =   975
   End
   Begin VB.CheckBox chkAvailableProperties 
      Caption         =   "Part Quantity"
      Height          =   225
      Index           =   3
      Left            =   360
      TabIndex        =   4
      Tag             =   "Part Quantity"
      Top             =   1080
      Value           =   1  'Checked
      Width           =   2295
   End
   Begin VB.CheckBox chkAvailableProperties 
      Caption         =   "Part Revision"
      Height          =   165
      Index           =   2
      Left            =   360
      TabIndex        =   3
      Tag             =   "Part Revision"
      Top             =   780
      Value           =   1  'Checked
      Width           =   2295
   End
   Begin VB.CheckBox chkAvailableProperties 
      Caption         =   "Part Number"
      Height          =   165
      Index           =   1
      Left            =   360
      TabIndex        =   2
      Tag             =   "Part Number"
      Top             =   480
      Value           =   1  'Checked
      Width           =   2295
   End
   Begin VB.CheckBox chkAvailableProperties 
      Caption         =   "Part Name"
      Height          =   225
      Index           =   0
      Left            =   360
      TabIndex        =   1
      Tag             =   "Part Name"
      Top             =   120
      Value           =   1  'Checked
      Width           =   2295
   End
   Begin VB.Line Line1 
      X1              =   240
      X2              =   2400
      Y1              =   1380
      Y2              =   1380
   End
End
Attribute VB_Name = "frmProperties"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Option Explicit

Private Sub cmdCancel_Click()
    Unload Me
End Sub

Private Sub cmdGenerate_Click()
    Dim intX As Integer
    Dim strCaption As String
    
    For intX = 0 To OPT_PARTS
        If frmMain.optBOMTypes(intX).Value Then
            strCaption = frmMain.optBOMTypes(intX).Tag
            Exit For
        End If
    Next intX
        
    ' Now call the correct report display routine based on
    ' the caption heading of this form.
    Select Case strCaption
        Case "BOM (Bill of Materials)"
            gintReportType = OPT_BOM
        Case EXPLODED_BOM
            gintReportType = OPT_EX_BOM
        Case ATOMIC_PARTS
            gintReportType = OPT_ATOMIC
        Case PARTS_LISTS
            gintReportType = OPT_PARTS
    End Select

    CursorWait (True)
    frmProperties.stsStatusBar.SimpleText = "Processing ..."
    If fblnCreateBOMReport() = True Then
        CursorWait (False)
        frmReport.Caption = strCaption & " For " & gstrAssemblyName
        frmReport.Show 1 ' Show Modal
        Unload frmReport
    End If

    CursorWait (False)
    frmProperties.stsStatusBar.SimpleText = "Finished."
    Unload Me
End Sub


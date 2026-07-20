VERSION 5.00
Object = "{6B7E6392-850A-101B-AFC0-4210102A8DA7}#1.2#0"; "comctl32.ocx"
Begin VB.Form frmStock 
   BorderStyle     =   4  'Fixed ToolWindow
   Caption         =   "Stock Wizard Sample"
   ClientHeight    =   480
   ClientLeft      =   1095
   ClientTop       =   1485
   ClientWidth     =   1905
   ControlBox      =   0   'False
   LinkTopic       =   "Form1"
   MaxButton       =   0   'False
   MinButton       =   0   'False
   PaletteMode     =   1  'UseZOrder
   ScaleHeight     =   480
   ScaleWidth      =   1905
   ShowInTaskbar   =   0   'False
   Begin ComctlLib.Toolbar Toolbar1 
      Align           =   1  'Align Top
      Height          =   495
      Left            =   0
      TabIndex        =   0
      Top             =   0
      Width           =   1905
      _ExtentX        =   3360
      _ExtentY        =   873
      ButtonWidth     =   820
      ButtonHeight    =   767
      ImageList       =   "ImageList1"
      _Version        =   327682
      BeginProperty Buttons {0713E452-850A-101B-AFC0-4210102A8DA7} 
         NumButtons      =   5
         BeginProperty Button1 {0713F354-850A-101B-AFC0-4210102A8DA7} 
            Key             =   "Box"
            Object.ToolTipText     =   "Place Box"
            Object.Tag             =   ""
            ImageIndex      =   1
         EndProperty
         BeginProperty Button2 {0713F354-850A-101B-AFC0-4210102A8DA7} 
            Key             =   "Cylinder"
            Object.ToolTipText     =   "Place Cylinder"
            Object.Tag             =   ""
            ImageIndex      =   2
         EndProperty
         BeginProperty Button3 {0713F354-850A-101B-AFC0-4210102A8DA7} 
            Key             =   "Brace"
            Object.ToolTipText     =   "Place Brace"
            Object.Tag             =   ""
            ImageIndex      =   3
         EndProperty
         BeginProperty Button4 {0713F354-850A-101B-AFC0-4210102A8DA7} 
            Key             =   "Exit"
            Object.Tag             =   ""
            ImageIndex      =   4
         EndProperty
         BeginProperty Button5 {0713F354-850A-101B-AFC0-4210102A8DA7} 
            Object.Visible         =   0   'False
            Key             =   ""
            Object.Tag             =   ""
         EndProperty
      EndProperty
   End
   Begin ComctlLib.ImageList ImageList1 
      Left            =   120
      Top             =   660
      _ExtentX        =   1005
      _ExtentY        =   1005
      BackColor       =   -2147483643
      ImageWidth      =   24
      ImageHeight     =   23
      _Version        =   327682
      BeginProperty Images {0713E8C2-850A-101B-AFC0-4210102A8DA7} 
         NumListImages   =   4
         BeginProperty ListImage1 {0713E8C3-850A-101B-AFC0-4210102A8DA7} 
            Picture         =   "Stock.frx":0000
            Key             =   ""
         EndProperty
         BeginProperty ListImage2 {0713E8C3-850A-101B-AFC0-4210102A8DA7} 
            Picture         =   "Stock.frx":01A6
            Key             =   ""
         EndProperty
         BeginProperty ListImage3 {0713E8C3-850A-101B-AFC0-4210102A8DA7} 
            Picture         =   "Stock.frx":034C
            Key             =   ""
         EndProperty
         BeginProperty ListImage4 {0713E8C3-850A-101B-AFC0-4210102A8DA7} 
            Picture         =   "Stock.frx":04F2
            Key             =   ""
         EndProperty
      EndProperty
   End
End
Attribute VB_Name = "frmStock"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Option Explicit

Private Sub Form_Load()
    frmMsgBox.Show
    frmMsgBox.Label1 = "Attaching to Solid Edge..."
    DoEvents
    
    ' Connect to application
    On Error Resume Next
    Set gobjApplication = Nothing
    Set gobjApplication = GetObject(, "SolidEdge.Application")
    
    If gobjApplication Is Nothing Then
        MsgBox "Solid Edge must be running with an active part document...  Aborting.", vbInformation
        End
    End If
   
    ' Get active document
    On Error Resume Next
    Set gobjDocument = Nothing
    Set gobjDocument = gobjApplication.ActiveDocument
    
    If gobjDocument Is Nothing Then
        MsgBox "Solid Edge must be running with an active document for this sample to run...  Aborting.", vbInformation
        End
    End If
    
    Unload frmMsgBox
    
    ' Make sure there hasn't already been a base feature created.
    If gobjDocument.Models.Count <> 0 Then
        MsgBox "This sample creates a base feature.  A base feature already exists in this file.", vbInformation
        End
    End If
    
    Set gobjUOM = gobjDocument.UnitsOfMeasure
    Toolbar1.Refresh
End Sub

Private Sub Toolbar1_ButtonClick(ByVal Button As Button)
    If frmDim.Visible = True Then
        CloseForm
    End If
    
    frmDim.Width = 0
    frmDim.Height = 390
        
    Select Case Button.Key
        Case "Box"
            frmDim.Left = Left
            frmDim.Top = Top + 800
            frmDim.Show
            OpenForm
            frmDim.imgMain.Picture = frmDim.Image1.Picture
            gstrActiveStock = "Box"

            frmDim.Label1.Left = 0
            frmDim.Label1.Top = 2040
            frmDim.Label1.Caption = "Heigth"
            frmDim.Text1.Left = 840
            frmDim.Text1.Top = 2040

            frmDim.Label2.Left = 1320
            frmDim.Label2.Top = 2640
            frmDim.Label2.Caption = "Width"
            frmDim.Text2.Left = 2160
            frmDim.Text2.Top = 2640

            frmDim.Label3.Left = 3120
            frmDim.Label3.Top = 2400
            frmDim.Label3.Caption = "Depth"
            frmDim.Text3.Left = 3960
            frmDim.Text3.Top = 2400
        Case "Cylinder"
            frmDim.Left = Left
            frmDim.Top = Top + 800
            frmDim.Show
            OpenForm
            frmDim.imgMain.Picture = frmDim.Image2.Picture
            gstrActiveStock = "Cylinder"
            
            frmDim.Label1.Left = 0
            frmDim.Label1.Top = 2280
            frmDim.Label1.Caption = "Radius"
            frmDim.Text1.Left = 120
            frmDim.Text1.Top = 2760

            frmDim.Label2.Left = 2160
            frmDim.Label2.Top = 2520
            frmDim.Label2.Caption = "Length"
            frmDim.Text2.Left = 3000
            frmDim.Text2.Top = 2520
        Case "Brace"
            frmDim.Left = Left
            frmDim.Top = Top + 800
            frmDim.Show
            OpenForm
            frmDim.imgMain.Picture = frmDim.Image3.Picture
            gstrActiveStock = "Brace"
           
            frmDim.Label1.Left = 240
            frmDim.Label1.Top = 1320
            frmDim.Label1.Caption = "Height"
            frmDim.Text1.Left = 480
            frmDim.Text1.Top = 1560
            
            frmDim.Label2.Left = 1200
            frmDim.Label2.Top = 2640
            frmDim.Label2.Caption = "Width"
            frmDim.Text2.Left = 2160
            frmDim.Text2.Top = 2640

            frmDim.Label3.Left = 3360
            frmDim.Label3.Top = 2400
            frmDim.Label3.Caption = "Depth"
            frmDim.Text3.Left = 4200
            frmDim.Text3.Top = 2400
            
            frmDim.Label4.Left = 2640
            frmDim.Label4.Top = 1320
            frmDim.Label4.Caption = "Base Height"
            frmDim.Text4.Left = 3600
            frmDim.Text4.Top = 1320
        
            frmDim.Label5.Left = 2640
            frmDim.Label5.Top = 600
            frmDim.Label5.Caption = "Side Width"
            frmDim.Text5.Left = 3480
            frmDim.Text5.Top = 600
        Case "Exit"
            End
    End Select
    
    
    frmDim.imgMain.Visible = True
    frmDim.cmdDraw.Visible = True
    frmDim.imgClose.Visible = True
    
    
End Sub

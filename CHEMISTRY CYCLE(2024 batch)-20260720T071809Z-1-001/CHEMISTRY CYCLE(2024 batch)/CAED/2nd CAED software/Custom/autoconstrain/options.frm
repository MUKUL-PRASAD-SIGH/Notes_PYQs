VERSION 5.00
Object = "{C9A6C580-3817-11D0-BE4E-080036E87B02}#2.0#0"; "secctl.ocx"
Begin VB.Form frmOptions 
   BorderStyle     =   3  'Fixed Dialog
   Caption         =   "Auto Constrain"
   ClientHeight    =   810
   ClientLeft      =   6135
   ClientTop       =   8100
   ClientWidth     =   3000
   LinkTopic       =   "Form1"
   MaxButton       =   0   'False
   MinButton       =   0   'False
   PaletteMode     =   1  'UseZOrder
   ScaleHeight     =   810
   ScaleWidth      =   3000
   ShowInTaskbar   =   0   'False
   Begin SeCmdLib.igCommand igCommand 
      Left            =   120
      Top             =   60
      _Version        =   131072
      _ExtentX        =   741
      _ExtentY        =   741
      _StockProps     =   0
   End
   Begin VB.Label lbInfo 
      Caption         =   "Form does nothing but house the command control."
      Height          =   492
      Left            =   600
      TabIndex        =   0
      Top             =   60
      Width           =   2292
   End
End
Attribute VB_Name = "frmOptions"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Option Explicit



Private Sub igCommand_Activate()
    'Get a reference to the application
    Set oApp = igCommand.Application

    'Check to make sure the user is in the Profile or Layout environment.
    With oApp
        If .ActiveEnvironment <> "Profile" And .ActiveEnvironment <> "ProfileRevolved" And _
           .ActiveEnvironment <> "ProfileHole" And .ActiveEnvironment <> "ProfileCircular" And _
           .ActiveEnvironment <> "Layout" And .ActiveEnvironment <> "LayoutInPart" Then
           
            MsgBox "This macro must be run from the Profile or Layout environment"
            igCommand.Done = True
            GoTo Done
        ElseIf .ActiveSelectSet.Count = 0 Then
            If MsgBox("The select set is empty, so the macro will operate on the entire collection." & vbNewLine & "Continue?", _
            vbYesNo, "Auto-constrain profile") = vbNo Then
                igCommand.Done = True
                GoTo Done
            End If
        End If
        'Change the pointer to an hour class
        MousePointer = 11

        'Delay update of profile until all the constraints are placed
        oApp.DelayCompute = True

        'Call routine to analyze profile place constraints
        Call ConstrainCurves

        oApp.DelayCompute = False
        MousePointer = 0

        igCommand.Done = True
    End With
    
Done:

End Sub

Private Sub Label1_Click()

End Sub


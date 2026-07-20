VERSION 5.00
Begin VB.Form Form1 
   Caption         =   "Form1"
   ClientHeight    =   3150
   ClientLeft      =   1080
   ClientTop       =   1530
   ClientWidth     =   2685
   LinkTopic       =   "Form1"
   ScaleHeight     =   3150
   ScaleWidth      =   2685
   Begin VB.CommandButton Command8 
      Caption         =   "Exit"
      Height          =   495
      Left            =   1440
      TabIndex        =   7
      Top             =   2400
      Width           =   975
   End
   Begin VB.CommandButton Command7 
      Caption         =   "Change CMD1 text"
      Height          =   495
      Left            =   1440
      TabIndex        =   6
      Top             =   1680
      Width           =   975
   End
   Begin VB.CommandButton Command6 
      Caption         =   "Delete CMD2"
      Height          =   495
      Left            =   1440
      TabIndex        =   5
      Top             =   960
      Width           =   975
   End
   Begin VB.CommandButton Command5 
      Caption         =   "Delete CMD1"
      Height          =   495
      Left            =   1440
      TabIndex        =   4
      Top             =   240
      Width           =   975
   End
   Begin VB.CommandButton Command4 
      Caption         =   "Delete Toolbar"
      Height          =   495
      Left            =   240
      TabIndex        =   3
      Top             =   2400
      Width           =   975
   End
   Begin VB.CommandButton Command3 
      Caption         =   "Command3"
      Height          =   495
      Left            =   240
      TabIndex        =   2
      Top             =   960
      Width           =   975
   End
   Begin VB.CommandButton Command2 
      Caption         =   "Show Toolbar"
      Height          =   495
      Left            =   240
      TabIndex        =   1
      Top             =   1680
      Width           =   975
   End
   Begin VB.CommandButton Command1 
      Caption         =   "Command1"
      Height          =   495
      Left            =   240
      TabIndex        =   0
      Top             =   240
      Width           =   975
   End
End
Attribute VB_Name = "Form1"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Dim WithEvents m_ButtonEvents As CommandBarButtonEvents
Attribute m_ButtonEvents.VB_VarHelpID = -1
Dim WithEvents m_ButtonEvents2 As CommandBarButtonEvents
Attribute m_ButtonEvents2.VB_VarHelpID = -1
Dim m_Button As CommandBarButton
Dim m_Button2 As CommandBarButton
Dim WithEvents m_Cmd1 As Command
Attribute m_Cmd1.VB_VarHelpID = -1
Dim WithEvents m_Cmd2 As Command
Attribute m_Cmd2.VB_VarHelpID = -1
Dim WithEvents m_Cmd2Mouse As Mouse
Attribute m_Cmd2Mouse.VB_VarHelpID = -1
Dim WithEvents m_Cmd2Window As CommandWindow
Attribute m_Cmd2Window.VB_VarHelpID = -1
Dim m_Button3 As CommandBarButton
Dim WithEvents m_PopupEvents1 As CommandBarButtonEvents
Attribute m_PopupEvents1.VB_VarHelpID = -1
Dim WithEvents m_PopupEvents2 As CommandBarButtonEvents
Attribute m_PopupEvents2.VB_VarHelpID = -1
Dim m_PopupButton1 As CommandBarButton
Dim m_PopupButton2 As CommandBarButton

Dim m_objApp As Object
Dim WithEvents m_AppEvents As ApplicationEvents
Attribute m_AppEvents.VB_VarHelpID = -1

Option Explicit

' Command1 Toggles button sizes from large to small

Private Sub Command1_Click()
    Dim objEnvironment As Object
    Dim objCommandBars As SolidEdgeFramework.CommandBars
    Dim LargeButtons As Boolean

    For Each objEnvironment In m_objApp.Environments
        
        If objEnvironment.Name = "Part" Then
        
            Set objCommandBars = objEnvironment.CommandBars
            
            LargeButtons = objCommandBars.LargeButtons
            Debug.Print "Large buttons: " & LargeButtons
                       
            If LargeButtons = True Then
                objCommandBars.LargeButtons = False
                Form1.Command1.Caption = "Large Buttons"
            Else
                objCommandBars.LargeButtons = True
                Form1.Command1.Caption = "Small Buttons"
            End If
        End If
    Next

End Sub

' Command 2 adds a toolbar to the app

Private Sub Command2_Click()
    Dim objCommandBars As Object
    Dim objMyCommandBar As SolidEdgeFramework.CommandBar
    
    'Look to see if the bar exists. If so, toggle its display state.
    Set objMyCommandBar = m_objApp.Environments("Part").CommandBars("F2")
    If Not objMyCommandBar Is Nothing Then
        If objMyCommandBar.Visible = False Then
            objMyCommandBar.Visible = True
            Else
            objMyCommandBar.Visible = False
            End If
        
        End If
    'Build the bar. Calling it will either create F2, or add any buttons that
    'have been deleted by the user. User can modify the bar using this sample,
    'or Solid Edge customization.
    Call BuildBar
       
    Form1.Command4.Enabled = True
End Sub

' Command3 toggles tooltip display on and off

Private Sub Command3_Click()
    Dim objEnvironment As Object
    Dim objCommandBars As SolidEdgeFramework.CommandBars
    Dim Tooltips As Boolean

    For Each objEnvironment In m_objApp.Environments
        
        If objEnvironment.Name = "Part" Then
        
            Set objCommandBars = objEnvironment.CommandBars
            
            Tooltips = objCommandBars.DisplayTooltips
            Debug.Print "Tooltips: " & Tooltips
            
            If Tooltips = True Then
                objCommandBars.DisplayTooltips = False
                Form1.Command3.Caption = "Tooltips on"
            Else
                objCommandBars.DisplayTooltips = True
                Form1.Command3.Caption = "Tooltips off"
            End If
        End If
    Next

End Sub

' Command deletes the toolbar

Private Sub Command4_Click()
    Dim objEnvironment As Object
    Dim objCommandBars As SolidEdgeFramework.CommandBars
    Dim objMyCommandBar As SolidEdgeFramework.CommandBar
    
    For Each objEnvironment In m_objApp.Environments
        
        Set objCommandBars = objEnvironment.CommandBars
                
        If objEnvironment.Name = "Part" Then

            Set objMyCommandBar = objCommandBars.Item("F2")

            If Not objMyCommandBar Is Nothing Then
                objMyCommandBar.Delete
                Form1.Command4.Enabled = False
            End If
        End If
    Next

End Sub

Private Sub Command5_Click()
If Not m_Button Is Nothing Then m_Button.Delete
Set m_Button = Nothing
Set m_ButtonEvents = Nothing

End Sub

Private Sub Command6_Click()
If Not m_Button2 Is Nothing Then m_Button2.Delete
Set m_Button2 = Nothing
Set m_ButtonEvents2 = Nothing

End Sub

Private Sub Command7_Click()
If Not m_Button Is Nothing Then
    If m_Button.Caption = "CMD 1" Then
        m_Button.Caption = "Test"
    Else
        m_Button.Caption = "CMD 1"
    End If
End If
End Sub

Private Sub Command8_Click()
End
End Sub

Private Sub Form_Load()
    Dim objCommandBars As Object
    Dim objMyCommandBar As SolidEdgeFramework.CommandBar
    Dim LargeButtons As Boolean
    Dim Tooltips As Boolean
    
    'Get the SolidEdge Application object
    Set m_objApp = GetObject(, "SolidEdge.Application")
    
    'Get ApplicationEvents; Need to know when the app exits so I can release any
    'objects
    Set m_AppEvents = m_objApp.ApplicationEvents
    
    'Get CommandBars collection of the Part environment
    Set objCommandBars = m_objApp.Environments("Part").CommandBars
    
    If Not objCommandBars Is Nothing Then
    
        LargeButtons = objCommandBars.LargeButtons
    
        Tooltips = objCommandBars.DisplayTooltips
    
        If LargeButtons = True Then
            Form1.Command1.Caption = "Small Buttons"
        Else
            Form1.Command1.Caption = "Large Buttons"
        End If
    
        If Tooltips = True Then
            Form1.Command3.Caption = "Tooltips off"
        Else
            Form1.Command3.Caption = "Tooltips on"
        End If
    
        'See if my toolbar already exists and set form text appropriately
        Set objMyCommandBar = objCommandBars.Item("F2")
    
        If Not objMyCommandBar Is Nothing Then
            'Bar already exists. Call BuildBar in order to connect to the
            'buttons.
            Call BuildBar
            Form1.Command4.Enabled = True
        Else
            Form1.Command4.Enabled = False
        End If
    End If
End Sub
Sub BuildBar()

Dim objCommandBars As Object
Dim objCommandBarControls As SolidEdgeFramework.CommandBarControls
Dim objMyCommandBar As SolidEdgeFramework.CommandBar
Dim objPopup As SolidEdgeFramework.CommandBarPopup
Dim SepIndex As Long

Set objCommandBars = m_objApp.Environments("Part").CommandBars

If Not objCommandBars Is Nothing Then
'First find each control to see if they already exist (previously created by this code)
'Later, I'll create them if they don't exist.
    Set m_Button = objCommandBars.FindControl(seControlButton, 1, "VB Sample Command 1")
    
    If Not m_Button Is Nothing Then
        'Button exists. Simply connect up to the events to enable the button
        Set m_ButtonEvents = m_Button.CommandBarButtonEvents
    End If
    
    Set m_Button2 = objCommandBars.FindControl(seControlButton, 1, "VB Sample Command 2")
    
    If Not m_Button2 Is Nothing Then
        'Button exists. Simply connect up to the events to enable the button
        Set m_ButtonEvents2 = m_Button2.CommandBarButtonEvents
    End If
    
    'Button3 is a macro (runs MS notepad). Hence, no need for events! I get it
    'so it is not created below.
    Set m_Button3 = objCommandBars.FindControl(seControlButton, 1, "VB Sample Command 3")
    
    Set m_PopupButton1 = objCommandBars.FindControl(seControlButton, 1, "VB Sample Popup 1")
    If Not m_PopupButton1 Is Nothing Then
        'Button exists. Simply connect up to the events to enable the button
        Set m_PopupEvents1 = m_PopupButton1.CommandBarButtonEvents
    End If
    
    Set m_PopupButton2 = objCommandBars.FindControl(seControlButton, 1, "VB Sample Popup 2")
    If Not m_PopupButton2 Is Nothing Then
        'Button exists. Simply connect up to the events to enable the button
        Set m_PopupEvents2 = m_PopupButton2.CommandBarButtonEvents
    End If
    
    If m_Button Is Nothing Or m_Button2 Is Nothing Or m_Button3 Is Nothing Or m_PopupButton1 Is Nothing Or m_PopupButton2 Is Nothing Then
    
        Set objMyCommandBar = objCommandBars.Item("F2")
    
        If objMyCommandBar Is Nothing Then
            Set objMyCommandBar = objCommandBars.Add("F2", seBarFloating)
            Form1.Command4.Enabled = True
        End If
    
        If Not objMyCommandBar Is Nothing Then
            Set objCommandBarControls = objMyCommandBar.Controls
            
            Set objPopup = objMyCommandBar.FindControl(seControlPopup, 1, "Popup Group")
            
            If objPopup Is Nothing Then
                Set objPopup = objMyCommandBar.Controls.Add(1, 1)
                
                If Not objPopup Is Nothing Then
                    objPopup.Caption = "Popup 1"
                    objPopup.ToolTipText = "First popup"
                    objPopup.DescriptionText = "VB Sample popup command 1"
                    objPopup.Tag = "Popup Group"
                    'objPopup.LoadFace ("g:\ingr\froot\tmp\bitmap1.bmp")
                    Set m_PopupButton1 = objPopup.Controls(1)
                    End If
                
                If Not m_PopupButton1 Is Nothing Then
                    Set m_PopupEvents1 = m_PopupButton1.CommandBarButtonEvents
                    m_PopupButton1.Caption = "Popup 1"
                    m_PopupButton1.ToolTipText = "VB Sample popup command 1"
                    m_PopupButton1.DescriptionText = "VB Sample popup command 1"
                    m_PopupButton1.Tag = "VB Sample Popup 1"
                    'm_PopupButton1.LoadFace ("g:\ingr\froot\tmp\bitmap1.bmp")
                End If
            
                If Not objPopup Is Nothing Then
                    Set m_PopupButton2 = objPopup.Controls.Add(, 1)
                    If Not m_PopupButton2 Is Nothing Then
                        Set m_PopupEvents2 = m_PopupButton2.CommandBarButtonEvents
                        m_PopupButton2.Caption = "Popup 2"
                        m_PopupButton2.ToolTipText = "VB Sample popup command 2"
                        m_PopupButton2.DescriptionText = "VB Sample popup command 2"
                        m_PopupButton2.Tag = "VB Sample Popup 2"
                    End If
                End If
            End If
                
            If m_Button Is Nothing Then
                Call objMyCommandBar.Controls.Add(seControlSeparator, 0)
               
                Set m_Button = objMyCommandBar.Controls.Add(, 1)
                Set m_ButtonEvents = m_Button.CommandBarButtonEvents
                m_Button.Caption = "CMD 1"
                m_Button.ToolTipText = "VB Sample Command 1"
                m_Button.Tag = "VB Sample Command 1"
                m_Button.DescriptionText = "VB Sample Command 1"
            End If
            
            If m_Button2 Is Nothing Then
                Set m_Button2 = objMyCommandBar.Controls.Add(, 1)
                Set m_ButtonEvents2 = m_Button2.CommandBarButtonEvents
                m_Button2.Caption = "CMD 2"
                m_Button2.ToolTipText = "VB Sample Command 2"
                m_Button2.Tag = "VB Sample Command 2"
                m_Button2.DescriptionText = "VB Sample Command 2"
            End If
            
            If m_Button3 Is Nothing Then
                Set m_Button3 = objMyCommandBar.Controls.Add(, 1)
                m_Button3.Caption = "Notepad"
                m_Button3.ToolTipText = "Notepad macro"
                m_Button3.DescriptionText = "Macro which runs Notepad"
                m_Button3.Tag = "VB Sample Command 3"
                m_Button3.OnAction = "notepad.exe"
                m_Button3.ParameterText = "test.txt"
                ' Get the index of this button so I can add a separator. I need it
                ' because I've already added a separator and the "Before" parameter
                ' is no longer the same as the button index.
                SepIndex = m_Button3.Index
                Call objMyCommandBar.Controls.Add(seControlSeparator, 0, SepIndex)
            End If
        End If
    End If
End If

End Sub


Private Sub Form_Unload(Cancel As Integer)

Call m_AppEvents_BeforeQuit

'Call End. I do so because if the Tip of the Day dialog box command
'is invoked, and later the user closes the main form, this program
'fails to shut down completely.
End

End Sub

Private Sub m_AppEvents_BeforeQuit()

Set m_AppEvents = Nothing
Set m_Button = Nothing
Set m_Button2 = Nothing
Set m_Button3 = Nothing
Set m_PopupButton1 = Nothing
Set m_PopupButton2 = Nothing
Set m_ButtonEvents = Nothing
Set m_ButtonEvents2 = Nothing
Set m_PopupEvents1 = Nothing
Set m_PopupEvents2 = Nothing

End Sub
Private Sub m_ButtonEvents_Click()
Set m_Cmd1 = m_objApp.CreateCommand(seTerminateAfterActivation)
m_Cmd1.Start
End Sub


Private Sub m_ButtonEvents_Help(ByVal hFrameWnd As Long, ByVal uHelpCommand As Long)
Dim x As Long
Debug.Print "Command 2 help invoked"

End Sub

Private Sub m_ButtonEvents_UpdateUI()
Dim CommandBars As CommandBars
Dim Button As CommandBarButton

Set CommandBars = m_objApp.Environments("Part").CommandBars
If Not CommandBars Is Nothing Then
    Set Button = CommandBars.FindControl(seControlButton, 1, "VB Sample Command 1")
    If Not Button Is Nothing Then Button.Enabled = True
End If
End Sub

Private Sub m_ButtonEvents2_Click()
Set m_Cmd2 = m_objApp.CreateCommand(0)
Set m_Cmd2Mouse = m_Cmd2.Mouse
Set m_Cmd2Window = m_Cmd2.Window
m_Cmd2.Start
End Sub


Private Sub m_ButtonEvents2_Help(ByVal hFrameWnd As Long, ByVal uHelpCommand As Long)
Dim x As Long
Debug.Print "Command 2 help invoked"
End Sub

Private Sub m_ButtonEvents2_UpdateUI()
Dim CommandBars As CommandBars
Dim Button As CommandBarButton
Set CommandBars = m_objApp.Environments("Part").CommandBars
If Not CommandBars Is Nothing Then
    Set Button = CommandBars.FindControl(seControlButton, 1, "VB Sample Command 2")
    If Not Button Is Nothing Then Button.Enabled = True
End If
End Sub
Private Sub m_Cmd1_Activate()
Debug.Print "Cmd1 activated"
End Sub

Private Sub m_Cmd1_Deactivate()
Debug.Print "Cmd1 deactivated"
End Sub

Private Sub m_Cmd1_Terminate()
Debug.Print "Cmd1 terminated!!!"
Set m_Cmd1 = Nothing
End Sub

Private Sub m_Cmd2_Activate()
frmTip.SetCmd m_Cmd2
frmTip.Show
Debug.Print "Cmd2 Activated!"
End Sub

Private Sub m_Cmd2_Deactivate()
frmTip.Hide
Debug.Print "Cmd2 Decativated"
End Sub

Private Sub m_Cmd2_Terminate()
frmTip.Hide
Set m_Cmd2Mouse = Nothing
Set m_Cmd2Window = Nothing
Set m_Cmd2 = Nothing
Debug.Print "Cmd2 terminated!"
End Sub

Private Sub m_DocEvents_BeforeClose()
Debug.Print "Before doc close event"
End Sub

Private Sub m_DocEvents_BeforeSave()
Debug.Print "Before doc save event"
End Sub
Private Sub m_PopupEvents1_Click()
Dim x As Long

End Sub

Private Sub m_PopupEvents1_UpdateUI()
Dim CommandBars As CommandBars
Dim Button As CommandBarButton
Set CommandBars = m_objApp.Environments("Part").CommandBars
If Not CommandBars Is Nothing Then
    Set Button = CommandBars.FindControl(seControlButton, 1, "VB Sample Popup 1")
    If Not Button Is Nothing Then
        Button.Enabled = True
    End If
End If

End Sub

Private Sub m_PopupEvents2_Click()
Dim x As Long

End Sub

Private Sub m_PopupEvents2_UpdateUI()
Dim CommandBars As CommandBars
Dim Button As CommandBarButton
Set CommandBars = m_objApp.Environments("Part").CommandBars
If Not CommandBars Is Nothing Then
    Set Button = CommandBars.FindControl(seControlButton, 1, "VB Sample Popup 2")
    If Not Button Is Nothing Then
    Button.Enabled = True
    End If
End If
End Sub

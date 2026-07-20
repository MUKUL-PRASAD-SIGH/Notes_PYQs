Attribute VB_Name = "CreateButton"
Option Explicit
Public Sub Main()

    On Error Resume Next
    
    Dim i As Integer
    Dim strAppPath As String
    Dim bmpExists As String
    Dim exeExists As String
    Dim myEnvironment As Object
    Dim myCommandbar As Object
    Dim myToolbar As Object
    Dim myControl As Object
    
    strAppPath = App.Path
        
    If Right$(strAppPath, 1) <> "\" Then
        strAppPath = strAppPath & "\"
    End If
    
    bmpExists = Dir(strAppPath & "SE-Library.bmp")
    exeExists = Dir(strAppPath & "SE-Library.exe")
    
    If bmpExists = "" Or exeExists = "" Then
        MsgBox "Could not Locate SE-Library.bmp or SE-Library.exe"
        End
    End If

    ConnectToSolidEdge

    objApp.Documents.Add "SolidEdge.AssemblyDocument"
    
    'Check to see if SE Standard Part toolbar exists

    For Each myEnvironment In objApp.Environments
        If myEnvironment.Name = objApp.ActiveEnvironment Then Exit For
    Next myEnvironment

    For i = 1 To myEnvironment.CommandBars.Count
        If myEnvironment.CommandBars(i).Name = "SE-Library" Then
            myEnvironment.CommandBars(i).Delete
        End If
    Next i

    '********************************
    'Add toolbar in Assembly Environment
    
    For Each myEnvironment In objApp.Environments
        If myEnvironment.Name = objApp.ActiveEnvironment Then Exit For
    Next myEnvironment
    
    
    Set myCommandbar = myEnvironment.CommandBars
    Set myToolbar = myCommandbar.Add("SE-Library", seBarFloating)


    'The next section adds VB macros
    Set myControl = myToolbar.Controls.Add()
    'Mycontrol.DescriptionText = "This command runs a custom macro"
    myControl.Enabled = True
    myControl.LoadFace (strAppPath & "SE-Library.bmp")
    myControl.OnAction = strAppPath & "SE-Library.exe" 'Note that for your own custom macro, you'd supply a full path here
    myControl.ToolTipText = "Solid Edge Standard Parts Library"
    myControl.Visible = True
    'Mycontrol.Name = "ShowHide"
    myControl.Tag = "SELibrary"

    DoEvents
    
    Set myControl = Nothing
    Set myToolbar = Nothing
    Set myCommandbar = Nothing
    Set myEnvironment = Nothing

    objApp.Documents.Close
    DoEvents
    objApp.Quit
    
    Set objApp = Nothing
    
    MsgBox "Solid Edge Standard Parts Library Successfully Registered", vbOKCancel + vbInformation + vbSystemModal, "Solid Edge Parts Library"
    
    End
    
End Sub

Public Sub ConnectToSolidEdge()
On Error Resume Next

' Connect to application
    On Error Resume Next
    Set objApp = Nothing
    
    Set objApp = GetObject(, "solidedge.application")
    
    If Err <> 0 Then
        Err.Clear
        Set objApp = CreateObject("SolidEdge.Application")
        objApp.WindowState = 2
        objApp.Visible = False
        'Set objDoc = objApp.Documents
    
        If Err Then
            MsgBox "Could Not Start Solid Edge....Aborting"
            End
        End If
   
   End If
   
   
   
End Sub

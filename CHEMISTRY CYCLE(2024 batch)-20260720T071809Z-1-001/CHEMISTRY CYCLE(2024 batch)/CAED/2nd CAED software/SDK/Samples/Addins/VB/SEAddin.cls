VERSION 1.0 CLASS
BEGIN
  MultiUse = -1  'True
END
Attribute VB_Name = "Sample"
Attribute VB_GlobalNameSpace = True
Attribute VB_Creatable = True
Attribute VB_PredeclaredId = False
Attribute VB_Exposed = True
Attribute VB_Description = "VB5-authored Add-in"
Option Explicit

Private m_Commands As Commands
Private CATID_SEPart    As String

Implements ISolidEdgeAddIn

Private Sub Class_Initialize()
'MsgBox "The Solid Edge Sample Addin object is being initialized upon creation"
End Sub

' This method is called when the Addin is first loaded by Solid Edge
Private Sub ISolidEdgeAddIn_OnConnection(ByVal Application As Object, ByVal ConnectMode As SolidEdgeFramework.SeConnectMode, ByVal AddInInstance As SolidEdgeFramework.AddIn)
    Set m_Commands = New Commands
    
    ' Store the app dispatch for future use
    Set m_Commands.m_SEapp = Application
    
    ' store the SolidEdge created addin object corresponding to myself
    Set m_Commands.m_myAddIn = AddInInstance
    
    ' Connect up the addin event set (can connect up here to any event set the addin is interested in)
    Set m_Commands.m_addinEvents = AddInInstance.AddInEvents
    
    
    ' Bring up a message box indicating the reason for the connection
    If ConnectMode = seConnectAtStartup Then
        MsgBox "Connecting SolidEdge sample addin  at startup"
    End If
    
    ' Give SolidEdge a description of myself
    AddInInstance.Description = "SolidEdge Sample Addin"
      
    ' information
    MsgBox "The addin's VB assigned GUID is " & AddInInstance.Guid
    
    ' Give SolidEdge the current version of the addin's GUI, which will be stored
    ' by SolidEdge. If this changes the next time it connects to SolidEdge, the
    ' SolidEdge will purge any menu entries and comman buttons it put up there earlier
    ' and the addin will have to redo those.
    AddInInstance.GuiVersion = 1 ' Addin has to update this when GUI version changes
     
    ' Make sure I am visible to the SolidEdge user in the Addins menu
    ' (this is the default, so not really necessary)
    AddInInstance.Visible = True
    
          
        
End Sub

' This method is called the first time the environment is switched to in Solid Edge AND
' the addin has registered itself as interested in adding commands to that environment.
' The input CATID is the CATID of the environment being switched to. This is called ONCE per
' addin for each environent that addin is interested in.

Private Sub ISolidEdgeAddIn_OnConnectToEnvironment(ByVal EnvCatID As String, ByVal pEnvironmentDispatch As Object, ByVal bFirstTime As Boolean)
    Dim CommandNames(2) As String
    Dim CommandIDs(2) As Long
        
    ' There are the CATIDs currently supported for the SolidEdge enviroments.
    ' These are exposed in the SDK in an include file. We will expose all the
    ' environments eventually.
    '
    ' CATID_SEApplication   = {26618394-09D6-11d1-BA07-080036230602}
    ' CATID_SEAssembly      = {26618395-09D6-11d1-BA07-080036230602}
    ' CATID_SEPart          = {26618396-09D6-11d1-BA07-080036230602}
    ' CATID_SEProfile       = {26618397-09D6-11d1-BA07-080036230602}
    ' CATID_SESheetMetal    = {26618398-09D6-11d1-BA07-080036230602}


    ' Finally, set up the AddInInfo that SolidEdge needs.
    '
    '
    ' The command string consists of the following six parts:
    ' part 1: The name of the command. This should be as unique as possible becasue this will
    '         become the tag of the command. Use the company name etc. to make it unique.
    '         Since this tag is stored by SolidEdge to ensure identity, it SHOULD NOT BE
    '         internationalized/localized.
    ' part 2: Text displayed on the menu entry for the command
    ' part 3: String displayed on the status bar
    ' part 4: Tootip string
    ' part 5: The string that will be the "OnAction" string. If this string is specified, it means
    '         the addin is adding a macro button and not a command
    ' part 6: If the "OnAction" is specified, then this is the "Parameter Text" string, i.e. additional
    '         parameters for the macro button.
    
    ' Since no option base statement is present, "0" is the first index. Also, internal
    ' SE code currently expects a zero index to be the first entry, for now.
    
    CommandNames(0) = "My Company's Command 1" & Chr(10) & "Addin Command 1" & Chr(10) & "Runs notepad" & Chr(10) & "Sample addin command 1"
    CommandNames(1) = "My Company's Macro 1" & Chr(10) & "Addin Macro 1" & Chr(10) & "Also runs notepad" & Chr(10) & "Sample addin macro 1" & Chr(10) & "Notepad.exe" & Chr(10) & "macro.txt"
    CommandIDs(0) = 1 ' Addin needs to keep track of these
    CommandIDs(1) = 2 ' Addin needs to keep track of these
   
    ' set up the environment category CATID string
    CATID_SEPart = "{26618396-09D6-11d1-BA07-080036230602}"

    ' We are not interested in connecting to an environment to which we are not adding buttons
    If (LCase(EnvCatID) = LCase(CATID_SEPart)) Then
    
        MsgBox "Addin connecting to Part Environment..."
        
        
        ' IMPORTANT: The SetAddinInfo method MUST be called EVEY time an addin connects up
        ' ---------  with Solid Edge, unlike the "AddCommandBarButton" method below, which
        '            must be called ONLY during the very first time the addin is connecting.
        '            Solid Edge is geared to remember the GUI that the user added but not the
        '            commands.
        '
        ' The parameters in order are:
        ' - Handle to the resource DLL
        ' - Catergory ID of the Solid Edge environment that we want our commands to run in
        ' - The string that we want to appear in the Toolbar category box, during customization
        '   (i.e. when we run Tools->Customize in SolidEdge)
        ' - Resource ID of the medium color bitmap resource glyph
        ' - Resource ID of the large  color bitmap resource glyph
        ' - Resource ID of the medium monochrome bitmap resource glyph
        ' - Resource ID of the large monochrome bitmap resource glyph
        ' - Number of commands being added
        ' - array of IDs of the commands added(these IDs are maintained by the addin)
        
        ' NOTE: The monochrome bitmaps are IDs of the color bitmaps, which is not right.
        '       (This needs to be changed)
        Call m_Commands.m_myAddIn.SetAddInInfo( _
            App.hInstance, _
            CATID_SEPart, _
            "PartAddinCommands", _
            1, _
            2, _
            1, _
            2, _
            2, _
            CommandNames, _
            CommandIDs)
    
        ' This is output in CommandIDs above, which is an input/output array. The output
        ' IDs are those assigned to the commands within Solid Edge
        m_Commands.m_CommandID = CommandIDs(0)
        m_Commands.m_MacroID = CommandIDs(1)
        
        If bFirstTime = True Then
        
            ' Add toolbar buttons since this is the FIRST time the add-in is being loaded into
            ' the environment that is being made active.  Toolbar buttons are automatically
            ' remembered from session to session, so we should only add the commands and
            ' toolbar buttons once, and not very time Solid Edge starts up.
            '
            ' The parameters are:
            ' - The CATID of the environment to which this button is being added
            ' - The toolbar name which this button needs to be added to
            ' - The command ID (the addin's command id and not the one assigned by Solid Edge)
            
            Set m_Commands.m_CommandButton = m_Commands.m_myAddIn.AddCommandBarButton _
                (CATID_SEPart, "SolidEdge Sample Addins", 1)
    
            Set m_Commands.m_MacroButton = m_Commands.m_myAddIn.AddCommandBarButton _
                (CATID_SEPart, "SolidEdge Sample Addins", 2)
            
        End If
    End If


End Sub

Private Sub ISolidEdgeAddIn_OnDisconnection(ByVal DisconnectMode As SolidEdgeFramework.SeDisconnectMode)
    
    ' VERY VERY important to free any Solid Edge resources
    Set m_Commands.m_SEapp = Nothing
    Set m_Commands.m_addinEvents = Nothing
    Set m_Commands.m_myAddIn = Nothing
    Set m_Commands.m_CommandButton = Nothing
    Set m_Commands.m_MacroButton = Nothing

End Sub

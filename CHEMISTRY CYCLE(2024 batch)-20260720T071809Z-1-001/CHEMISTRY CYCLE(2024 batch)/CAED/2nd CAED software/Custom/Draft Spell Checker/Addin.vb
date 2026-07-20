
Option Strict Off
Option Explicit On

Imports Microsoft.VisualBasic
Imports Microsoft.Win32
Imports SolidEdgeFramework
Imports System
Imports System.Runtime.InteropServices
Imports System.Windows.Forms
Imports System.Reflection   'Modified for VS 2005 and V19 


<GuidAttribute("A416DD12-8422-4C4A-B68E-EAD316A9EF2A"), ProgIdAttribute("SpellCheckerForSolidEdgeDraft.Addin")> _
Public Class Addin
    Implements SolidEdgeFramework.ISolidEdgeAddIn
    Public ResourceHandle As Integer
    Private pAddin As IntPtr



    Private mCommands As Commands  'Modified for VS 2005 and V19
    Private strCommandNames(11) As String   'Modified for VS 2005 and V19

    Private pApplication As IntPtr
    Private objApplication As SolidEdgeFramework.Application  'Modified for VS 2005 and V19


    Private addinEventsHandler As SpellCheckerForSolidEdgeDraft.AddinEventsHandler


    'Private applicationEventsHandler As SpellCheckerForSolidEdgeDraft.ApplicationEventsHandler
    Private WithEvents applicationEventsHandler As SolidEdgeFramework.ISEApplicationEvents_Event   'Modified for VS 2005 and V19  'must explicitly type not in intellisense

    'Private applicationWindowEventsHandler As SpellCheckerForSolidEdgeDraft.ApplicationWindowEventsHandler
    Private WithEvents applicationWindowEventsHandler As SolidEdgeFramework.ISEApplicationWindowEvents   'Modified for VS 2005 and V19 'must explicitly type not in intellisense


    'old framework 1.1 compatible
    ' '' '' ''Public Sub OnConnection(ByVal Application As Object, ByVal ConnectMode As SolidEdgeFramework.SeConnectMode, ByVal AddInInstance As SolidEdgeFramework.AddIn) Implements SolidEdgeFramework.ISolidEdgeAddIn.OnConnection
    ' '' '' ''    On Error Resume Next

    ' '' '' ''    ' Set Addin's GUI Version.
    ' '' '' ''    AddInInstance.GuiVersion = 1

    ' '' '' ''    ' Store pointers to the RCW's.
    ' '' '' ''    Me.pAddin = Marshal.GetIUnknownForObject(AddInInstance)
    ' '' '' ''    Me.pApplication = Marshal.GetIUnknownForObject(Application)

    ' '' '' ''    ' Instantiate  Event Handler Wrapper Classes.
    ' '' '' ''    addinEventsHandler = New SpellCheckerForSolidEdgeDraft.AddinEventsHandler(Me.pAddin, Me.pApplication)
    ' '' '' ''    applicationEventsHandler = New SpellCheckerForSolidEdgeDraft.ApplicationEventsHandler(Me.pAddin, Me.pApplication)
    ' '' '' ''    applicationWindowEventsHandler = New SpellCheckerForSolidEdgeDraft.ApplicationWindowEventsHandler(Me.pAddin, Me.pApplication)
    ' '' '' ''End Sub


    Private Sub ISolidEdgeAddIn_OnConnection(ByVal Application As Object, ByVal ConnectMode As SolidEdgeFramework.SeConnectMode, ByVal AddInInstance As SolidEdgeFramework.AddIn) Implements SolidEdgeFramework.ISolidEdgeAddIn.OnConnection
        On Error Resume Next

        ' Set Addin's GUI Version.
        AddInInstance.GuiVersion = 1

        objAddin = AddInInstance   'Modified for VS 2005 and V19

        ' Store pointers to the RCW's.
        Me.pAddin = Marshal.GetIUnknownForObject(AddInInstance)
        Me.pApplication = Marshal.GetIUnknownForObject(Application)

        ' '' '' '' Instantiate  Event Handler Wrapper Classes.  'Modified for VS 2005 and V19
        '' '' ''addinEventsHandler = New SpellCheckerForSolidEdgeDraft.AddinEventsHandler(Me.pAddin, Me.pApplication)
        '' '' ''applicationEventsHandler = New SpellCheckerForSolidEdgeDraft.ApplicationEventsHandler(Me.pAddin, Me.pApplication)
        '' '' ''applicationWindowEventsHandler = New SpellCheckerForSolidEdgeDraft.ApplicationWindowEventsHandler(Me.pAddin, Me.pApplication)



        objAddin = AddInInstance   'Modified for VS 2005 and V19
        pApplication = Application
        applicationEventsHandler = objApplication.ApplicationEvents
        applicationWindowEventsHandler = objApplication.ApplicationWindowEvents


        mCommands = New Commands
        mCommands.m_SEapp = Application
        mCommands.m_myAddIn = AddInInstance
        mCommands.m_addinEvents = AddInInstance.AddInEvents

    End Sub






    'old framework 1.1 compatible

    '' '' ''Public Sub OnConnectToEnvironment(ByVal EnvCatID As String, ByVal pEnvironmentDispatch As Object, ByVal bFirstTime As Boolean) Implements SolidEdgeFramework.ISolidEdgeAddIn.OnConnectToEnvironment
    '' '' ''    On Error Resume Next


    '' '' ''    ' Allocate room for required arrays for CommandBars.
    '' '' ''    Dim commandNames As Array = Array.CreateInstance(Type.GetType("System.String"), 1)
    '' '' ''    Dim commandIDs As Array = Array.CreateInstance(Type.GetType("System.Int32"), 1)

    '' '' ''    ' Populate arrays.
    '' '' ''    commandNames.SetValue("Spell Checker" & Chr(10) & "Spell Checker" & Chr(10) & "Spell Checker" & Chr(10) & "Spell Checker", 0)
    '' '' ''    commandIDs.SetValue(1, 0)

    '' '' ''    ' Retrieve the Addin RCW from the pointer.
    '' '' ''    Dim addin As SolidEdgeFramework.AddIn = Marshal.GetObjectForIUnknown(Me.pAddin)

    '' '' ''    'Call SetAddInInfo
    '' '' ''    addin.SetAddInInfo(Marshal.GetHINSTANCE(Me.GetType().Module).ToInt32(), EnvCatID, "SE_SpellChecker", 1, 2, 1, 2, 1, commandNames, commandIDs)

    '' '' ''    ' Check for 1st time.
    '' '' ''    If bFirstTime Then

    '' '' ''        If EnvCatID = "{08244193-B78D-11D2-9216-00C04F79BE98}" Then
    '' '' ''            addin.AddCommandBarButton(EnvCatID, "SE_SpellChecker", 1)
    '' '' ''        Else
    '' '' ''            'do nothing only want in draft
    '' '' ''        End If
    '' '' ''    End If

    '' '' ''    'Release RCW.
    '' '' ''    While Marshal.ReleaseComObject(addin) > 0
    '' '' ''    End While

    '' '' ''    addin = Nothing

    '' '' ''End Sub


    Private Sub ISolidEdgeAddIn_OnConnectToEnvironment(ByVal EnvCatID As String, ByVal pEnvironmentDispatch As Object, ByVal bFirstTime As Boolean) Implements SolidEdgeFramework.ISolidEdgeAddIn.OnConnectToEnvironment
        'On Error Resume Next

        Dim resoPath As String


        Try

            ' Allocate room for required arrays for CommandBars.
            'Dim commandNames As Array = Array.CreateInstance(Type.GetType("System.String"), 1)

            Dim CommandNames(0) As String
            CommandNames(0) = "Spell Checker" & Chr(10) & "Spell Checker" & Chr(10) & "Spell Checker" & Chr(10) & "Spell Checker"
            'Dim commandIDs As Array = Array.CreateInstance(Type.GetType("System.Int32"), 1)
            Dim commandIDs(0) As Integer
            '' '' '' Populate arrays.
            ' '' ''commandNames.SetValue("Spell Checker" & Chr(10) & "Spell Checker" & Chr(10) & "Spell Checker" & Chr(10) & "Spell Checker", 0)
            ' '' ''commandIDs.SetValue(1, 0)

            ' Retrieve the Addin RCW from the pointer.
            'Dim addin As SolidEdgeFramework.AddIn = Marshal.GetObjectForIUnknown(Me.pAddin)

            'old framework 1.1 compatible
            '' '' ''Call SetAddInInfo
            '' '' ''addin.SetAddInInfo(Marshal.GetHINSTANCE(Me.GetType().Module).ToInt32(), EnvCatID, "SE_SpellChecker", 1, 2, 1, 2, 1, commandNames, commandIDs)


            'Modified for VS 2005 and V19  'framework 2.0 compatible 
            commandIDs(0) = 1


            'got to get the handle to the bitmap resources



            Dim asm As System.Reflection.Assembly = System.Reflection.Assembly.GetExecutingAssembly
            resoPath = asm.Location


            ' the image resources are now read from the DLL file.
            ResourceHandle = api_LoadLibrary(resoPath)



            Dim p As New ParameterModifier(10)
            Dim objMethodArgs() As Object = {ResourceHandle, EnvCatID, "SE_SpellChecker", 1, 2, 1, 2, 1, commandNames, commandIDs}
            p(9) = True

            Dim mods() As ParameterModifier = {p}

            CType(objAddin, Object).GetType().InvokeMember("SetAddInInfo", System.Reflection.BindingFlags.InvokeMethod, _
                                                         Nothing, objAddin, objMethodArgs, mods, Nothing, Nothing)



            ' Check for 1st time.
            If bFirstTime Then

                If EnvCatID = "{08244193-B78D-11D2-9216-00C04F79BE98}" Then
                    objAddin.AddCommandBarButton(EnvCatID, "SE_SpellChecker", 1)

                Else
                    'do nothing only want in draft
                End If
            End If

            'Release RCW.
            While Marshal.ReleaseComObject(objAddin) > 0
            End While

            objAddin = Nothing



        Catch ex As Exception
            Beep()

        End Try



      

    End Sub





    'old framework 1.1 compatible
    ' '' '' '' ''Public Sub OnDisconnection(ByVal DisconnectMode As SolidEdgeFramework.SeDisconnectMode) Implements SolidEdgeFramework.ISolidEdgeAddIn.OnDisconnection
    ' '' '' '' ''    On Error Resume Next

    ' '' '' '' ''    ' Dispose Event Handler Wrapper Classes.
    ' '' '' '' ''    Me.addinEventsHandler.Dispose()
    ' '' '' '' ''    Me.applicationEventsHandler.Dispose()
    ' '' '' '' ''    Me.applicationWindowEventsHandler.Dispose()
    ' '' '' '' ''End Sub




    Private Sub ISolidEdgeAddIn_OnDisconnection(ByVal DisconnectMode As SolidEdgeFramework.SeDisconnectMode) Implements SolidEdgeFramework.ISolidEdgeAddIn.OnDisconnection
        On Error Resume Next

        'Dispose Event Handler Wrapper Classes.
        Me.addinEventsHandler.Dispose()
        Me.applicationEventsHandler.Dispose()
        Me.applicationWindowEventsHandler.Dispose()


    End Sub


    ' When Regasm is run on this project, either through IDE or command window, these functions will be called.

    ' Here we setup the required Solid Edge registry values for an addin.
    <ComRegisterFunctionAttribute()> _
    Public Shared Sub RegisterFunction(ByVal t As Type)
        On Error Resume Next

        Dim baseKey As RegistryKey = Registry.ClassesRoot.CreateSubKey("CLSID\{" + t.GUID.ToString() + "}")

        If Not (baseKey Is Nothing) Then
            baseKey.SetValue("AutoConnect", 1)
            baseKey.SetValue("409", "SpellCheckerForSolidEdgeDraft")
            baseKey.CreateSubKey("Implemented Categories\" & CATID_SolidEdgeAddIn)
            'baseKey.CreateSubKey("Environment Categories\" & CATID_SEAssembly)
            baseKey.CreateSubKey("Environment Categories\" & CATID_SEDraft)
            'baseKey.CreateSubKey("Environment Categories\" & CATID_SEPart)
            'baseKey.CreateSubKey("Environment Categories\" & CATID_SESheetMetal)
            'baseKey.CreateSubKey("Environment Categories\" & CATID_SEWeldment)

            baseKey.Close()
        End If
    End Sub

    ' Here we cleanup any registry values left from Regasm /u.
    <ComUnregisterFunctionAttribute()> _
    Public Shared Sub UnregisterFunction(ByVal t As Type)
        On Error Resume Next

        Registry.ClassesRoot.DeleteSubKeyTree("CLSID\{" + t.GUID.ToString() + "}")
    End Sub
End Class

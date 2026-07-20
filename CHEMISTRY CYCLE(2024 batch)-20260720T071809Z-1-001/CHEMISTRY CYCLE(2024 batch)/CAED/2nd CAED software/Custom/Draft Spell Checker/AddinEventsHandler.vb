
Option Strict Off
Option Explicit On

Imports SolidEdgeFramework
Imports System
Imports System.Runtime.InteropServices
Imports System.Windows.Forms

Public Class AddinEventsHandler
    Implements IDisposable, SolidEdgeFramework.ISEAddInEvents

    Dim pAddin As IntPtr
    Dim pApplication As IntPtr
    'Dim connectionPoint As UCOMIConnectionPoint  'Modified for VS 2005 and V19
    Dim connectionPoint As System.Runtime.InteropServices.ComTypes.IConnectionPoint
    Dim cookie As Int32

    Public Sub New(ByVal pAddin As IntPtr, ByVal pApplication As IntPtr)
        On Error Resume Next

        ' Store pointers to RCW's for later use.
        Me.pAddin = pAddin
        Me.pApplication = pApplication

        ' Cast the Addin RCW as UCOMIConnectionPointContainer so that we can hook into events.
        'Dim icpc As UCOMIConnectionPointContainer = Marshal.GetObjectForIUnknown(pAddin)   'Modified for VS 2005 and V19
        Dim icpc As System.Runtime.InteropServices.ComTypes.IConnectionPointContainer = Marshal.GetObjectForIUnknown(pAddin)
        ' The following statement works in C#, but not VB
        ' Had to do it the hard way.  Any suggestions?
        ' Guid g = typeof(SolidEdgeFramework.ISEAddInEvents).GUID;
        Dim g As Guid = New Guid("0F539244-4816-11D2-B5AC-080036E8B802")

        ' Attempt to find a Connection Point for ISEAddInEvents.
        icpc.FindConnectionPoint(g, connectionPoint)

        ' Establish the Event Hook.
        If Not (Me.connectionPoint Is Nothing) Then        
            Me.connectionPoint.Advise(Me, cookie)
        End If

        Do While (Marshal.ReleaseComObject(icpc) > 0)
        Loop

        icpc = Nothing

        GC.Collect()
        GC.WaitForPendingFinalizers()

    End Sub

    Public Sub Dispose() Implements System.IDisposable.Dispose
        On Error Resume Next

        ' Unhook from the events.
        If Not (Me.connectionPoint Is Nothing) Then
            Me.connectionPoint.Unadvise(cookie)
        End If

    End Sub

    Public Sub OnCommand(ByVal CommandID As Integer) Implements SolidEdgeFramework.ISEAddInEvents.OnCommand
        Select Case CommandID
            Case 1  ' Spell Checker Command
                ProcessActiveDraftDocument()
        End Select
    End Sub

    Public Sub OnCommandHelp(ByVal hFrameWnd As Integer, ByVal HelpCommandID As Integer, ByVal CommandID As Integer) Implements SolidEdgeFramework.ISEAddInEvents.OnCommandHelp

    End Sub

    Public Sub OnCommandUpdateUI(ByVal CommandID As Integer, ByRef CommandFlags As Integer, ByRef MenuItemText As String, ByRef BitmapID As Integer) Implements SolidEdgeFramework.ISEAddInEvents.OnCommandUpdateUI

    End Sub
End Class

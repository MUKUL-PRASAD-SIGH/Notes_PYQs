Option Strict Off
Option Explicit On


Imports SolidEdgeFramework
Imports System
Imports System.Runtime.InteropServices
Imports System.Windows.Forms

Public Class ApplicationWindowEventsHandler
    Implements IDisposable, SolidEdgeFramework.ISEApplicationWindowEvents

    Dim pAddin As IntPtr
    Dim pApplication As IntPtr
    'Dim connectionPoint As UCOMIConnectionPoint 'Modified for VS 2005 and V19
    Dim connectionPoint As System.Runtime.InteropServices.ComTypes.IConnectionPoint

    Dim cookie As Int32

    Public Sub New(ByVal pAddin As IntPtr, ByVal pApplication As IntPtr)
        On Error Resume Next

        ' Store pointers to RCW's for later use.
        Me.pAddin = pAddin
        Me.pApplication = pApplication

        ' Cast the Addin RCW as UCOMIConnectionPointContainer so that we can hook into events.
        'Dim icpc As UCOMIConnectionPointContainer = Marshal.GetObjectForIUnknown(pApplication)   'Modified for VS 2005 and V19
        Dim icpc As System.Runtime.InteropServices.ComTypes.IConnectionPointContainer = Marshal.GetObjectForIUnknown(pApplication)

        ' The following statement works in C#, but not VB
        ' Had to do it the hard way.  Any suggestions?
        'Guid g = typeof(SolidEdgeFramework.ISEApplicationWindowEvents).GUID;
        Dim g As Guid = New Guid("25045F7B-965C-11D1-BA90-080036230602")

        ' Attempt to find a Connection Point for ISEApplicationWindowEvents.
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

    Public Sub WindowProc(ByVal hWnd As Integer, ByVal nMsg As Integer, ByVal wParam As Integer, ByVal lParam As Integer) Implements SolidEdgeFramework.ISEApplicationWindowEvents.WindowProc

    End Sub

End Class

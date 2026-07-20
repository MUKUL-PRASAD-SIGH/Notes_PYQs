Option Strict Off
Option Explicit On

Imports SolidEdgeFramework
Imports System
Imports System.Runtime.InteropServices
Imports System.Windows.Forms

Public Class ApplicationEventsHandler
    Implements IDisposable, SolidEdgeFramework.ISEApplicationEvents

    Dim pAddin As IntPtr
    Dim pApplication As IntPtr
    'Dim connectionPoint As UCOMIConnectionPoint   'Modified for VS 2005 and V19 
    Dim connectionPoint As System.Runtime.InteropServices.ComTypes.IConnectionPoint
    Dim cookie As Int32

    Public Sub New(ByVal pAddin As IntPtr, ByVal pApplication As IntPtr)
        On Error Resume Next

        ' Store pointers to RCW's for later use.
        Me.pAddin = pAddin
        Me.pApplication = pApplication
        
        ' Cast the Addin RCW as UCOMIConnectionPointContainer so that we can hook into events.
        'Dim icpc As UCOMIConnectionPointContainer = Marshal.GetObjectForIUnknown(pApplication)    'Modified for VS 2005 and V19 
        Dim icpc As System.Runtime.InteropServices.ComTypes.IConnectionPointContainer = Marshal.GetObjectForIUnknown(pApplication)

        ' The following statement works in C#, but not VB
        ' Had to do it the hard way.  Any suggestions?
        'Guid g = typeof(SolidEdgeFramework.ISEApplicationEvents).GUID;
        Dim g As Guid = New Guid("90223887-09CD-11D1-BA07-080036230602")

        ' Attempt to find a Connection Point for ISEApplicationEvents.
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

    Public Sub AfterActiveDocumentChange(ByVal theDocument As Object) Implements SolidEdgeFramework.ISEApplicationEvents.AfterActiveDocumentChange
        Marshal.ReleaseComObject(theDocument)

    End Sub

    Public Sub AfterCommandRun(ByVal theCommandID As Integer) Implements SolidEdgeFramework.ISEApplicationEvents.AfterCommandRun

    End Sub

    Public Sub AfterDocumentOpen(ByVal theDocument As Object) Implements SolidEdgeFramework.ISEApplicationEvents.AfterDocumentOpen
        Marshal.ReleaseComObject(theDocument)
    End Sub

    Public Sub AfterDocumentPrint(ByVal theDocument As Object, ByVal hDC As Integer, ByRef ModelToDC As Double, ByRef Rect As Integer) Implements SolidEdgeFramework.ISEApplicationEvents.AfterDocumentPrint
        Marshal.ReleaseComObject(theDocument)
    End Sub

    Public Sub AfterDocumentSave(ByVal theDocument As Object) Implements SolidEdgeFramework.ISEApplicationEvents.AfterDocumentSave
        Marshal.ReleaseComObject(theDocument)
    End Sub

    Public Sub AfterEnvironmentActivate(ByVal theEnvironment As Object) Implements SolidEdgeFramework.ISEApplicationEvents.AfterEnvironmentActivate
        Marshal.ReleaseComObject(theEnvironment)
    End Sub

    Public Sub AfterNewDocumentOpen(ByVal theDocument As Object) Implements SolidEdgeFramework.ISEApplicationEvents.AfterNewDocumentOpen
        Marshal.ReleaseComObject(theDocument)
    End Sub

    Public Sub AfterNewWindow(ByVal theWindow As Object) Implements SolidEdgeFramework.ISEApplicationEvents.AfterNewWindow
        Marshal.ReleaseComObject(theWindow)
    End Sub

    Public Sub AfterWindowActivate(ByVal theWindow As Object) Implements SolidEdgeFramework.ISEApplicationEvents.AfterWindowActivate
        Marshal.ReleaseComObject(theWindow)
    End Sub

    Public Sub BeforeCommandRun(ByVal theCommandID As Integer) Implements SolidEdgeFramework.ISEApplicationEvents.BeforeCommandRun

    End Sub

    Public Sub BeforeDocumentClose(ByVal theDocument As Object) Implements SolidEdgeFramework.ISEApplicationEvents.BeforeDocumentClose
        Marshal.ReleaseComObject(theDocument)
    End Sub

    Public Sub BeforeDocumentPrint(ByVal theDocument As Object, ByVal hDC As Integer, ByRef ModelToDC As Double, ByRef Rect As Integer) Implements SolidEdgeFramework.ISEApplicationEvents.BeforeDocumentPrint
        Marshal.ReleaseComObject(theDocument)
    End Sub

    Public Sub BeforeDocumentSave(ByVal theDocument As Object) Implements SolidEdgeFramework.ISEApplicationEvents.BeforeDocumentSave
        Marshal.ReleaseComObject(theDocument)
    End Sub

    Public Sub BeforeEnvironmentDeactivate(ByVal theEnvironment As Object) Implements SolidEdgeFramework.ISEApplicationEvents.BeforeEnvironmentDeactivate
        Marshal.ReleaseComObject(theEnvironment)
    End Sub

    Public Sub BeforeQuit() Implements SolidEdgeFramework.ISEApplicationEvents.BeforeQuit
        On Error Resume Next

        Me.connectionPoint.Unadvise(Me.cookie)
        Me.cookie = -1
    End Sub

    Public Sub BeforeWindowDeactivate(ByVal theWindow As Object) Implements SolidEdgeFramework.ISEApplicationEvents.BeforeWindowDeactivate
        Marshal.ReleaseComObject(theWindow)
    End Sub

End Class

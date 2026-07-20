' IONA does not set the option for the the node daemon service
' to be able to interact with the desktop. This is a property
' of the node daemon service under the "Log On" tab. The
' consequence of this value not being set is that any GUI
' application (such as I-DEAS in interactive mode) started
' on-demand by the node daemon will not be displayed to the
' desktop. This simple script sets this property so that GUI
' applications will properly be displayed to the user when
' started by the node dameon.
'
Option Explicit
Dim WSHShell, Host, RegKey, theType, Result, Args, Hostname, ConfigDomain

Set Args = WScript.Arguments
If args.count <> 2 Then
   WScript.echo "Usage: script <hostname> <config domain>"
   WScript.quit(1)
End If
Hostname = Args(0)
ConfigDomain = Args(1)

Set WSHShell = CreateObject("WScript.Shell")

RegKey = "HKEY_LOCAL_MACHINE\SYSTEM\CurrentControlSet\Services\IT iona_services.node_daemon." & Hostname & " " & ConfigDomain & "\"

theType = WSHShell.RegRead (regkey & "Type")
If theType <> 272 Then 'Allow interaction with desktop is not set

   WSHShell.RegWrite regkey & "Type", 272, "REG_DWORD"
   WScript.echo "The registry has been updated to allow the node daemon to interact with the desktop"

Else

   WScript.echo "The node daemon service can interact with the desktop (no action needed)"

End If


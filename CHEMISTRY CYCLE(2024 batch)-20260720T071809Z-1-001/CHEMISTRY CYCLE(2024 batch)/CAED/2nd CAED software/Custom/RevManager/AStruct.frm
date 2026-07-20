VERSION 5.00
Object = "{F9043C88-F6F2-101A-A3C9-08002B2F49FB}#1.2#0"; "comdlg32.ocx"
Begin VB.Form frmAssembly 
   Caption         =   "Assembly Structure"
   ClientHeight    =   4950
   ClientLeft      =   60
   ClientTop       =   345
   ClientWidth     =   4695
   LinkTopic       =   "Form1"
   LockControls    =   -1  'True
   ScaleHeight     =   4950
   ScaleWidth      =   4695
   StartUpPosition =   3  'Windows Default
   Begin VB.CommandButton cmdBrowse 
      Caption         =   "Browse..."
      Height          =   375
      Left            =   2460
      TabIndex        =   2
      Top             =   4440
      Width           =   1035
   End
   Begin VB.CommandButton cmdCancel 
      Caption         =   "Cancel"
      Height          =   375
      Left            =   3540
      TabIndex        =   1
      Top             =   4440
      Width           =   1035
   End
   Begin MSComDlg.CommonDialog cmnBrowse 
      Left            =   60
      Top             =   4380
      _ExtentX        =   847
      _ExtentY        =   847
      _Version        =   393216
      DialogTitle     =   "Select Assembly Document"
      Filter          =   "Assembly Documents (*.asm)|*.asm"
   End
   Begin VB.ListBox lstAssembly 
      Height          =   4155
      Left            =   60
      TabIndex        =   0
      Top             =   120
      Width           =   4575
   End
End
Attribute VB_Name = "frmAssembly"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Option Explicit

Private Sub cmdBrowse_Click()
    Dim objApp As Object
    Dim objDocument As Object

    
    ' Set the flag to hide the read only check box on the open dialog.
    cmnBrowse.Flags = cdlOFNHideReadOnly
    
    ' Display the open dialog.
    cmnBrowse.ShowOpen
    
    ' Make sure a filename was specified.
    If cmnBrowse.FileName <> "" Then
        ' Clear the list box.
        lstAssembly.Clear

        ' Create the revision manager object
        Set objApp = CreateObject("RevisionManager.Application")
        
        ' Write the top level assembly to the list.
        lstAssembly.AddItem cmnBrowse.FileName
        
        ' Open the top level assembly.
        Set objDocument = objApp.Open(cmnBrowse.FileName)

        ' CAll the recursive function to get the full
        ' link tree for the top level assembly.
        Call ShowAssemblyStructure(objDocument, 1)
        
        Set objDocument = Nothing
        Set objApp = Nothing
    End If
End Sub

'
' Purpose: This subroutine uses the Revision Manager Automation to determine all of the
'          links that the document being passed in contains.  Each link is written to
'          the list box.  If a link is an assembly file this function is recursively
'          called to get the links within the assembly file.
'
' Input: Document - The input Revision Manager document object.
'        AssemblyDepth - Integer that specifies the current assembly depth.
'
' Output: All output is to the list box.
'
Private Sub ShowAssemblyStructure(Document As Object, AssemblyDepth As Integer)
    Dim i As Integer
    Dim objLinkedDocs As Object
    
    
    ' Loop through the items in the assembly
    Set objLinkedDocs = Document.LinkedDocuments
    For i = 1 To objLinkedDocs.Count
        lstAssembly.AddItem AssemblyDepth & Space(3 * AssemblyDepth) & objLinkedDocs(i).FullName
        If UCase(Right(objLinkedDocs(i).FullName, 3)) = "ASM" Then
            Call ShowAssemblyStructure(objLinkedDocs(i), AssemblyDepth + 1)
        End If
    Next
    
    Set objLinkedDocs = Nothing
    
End Sub

Private Sub cmdCancel_Click()
    
    Unload Me
    
End Sub


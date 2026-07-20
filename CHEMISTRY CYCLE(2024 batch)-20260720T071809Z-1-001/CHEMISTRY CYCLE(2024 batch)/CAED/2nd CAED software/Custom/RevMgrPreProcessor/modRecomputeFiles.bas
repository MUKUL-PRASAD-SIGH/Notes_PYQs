Attribute VB_Name = "modRecomputeFiles"
Option Explicit


Sub Main()

frmOpenFiles.Visible = True
frmOpenFiles.Caption = "RevMgr Tools"
Debug.Print frmOpenFiles.filFiles.Pattern
frmOpenFiles.Label1.Caption = "ASM Files:"
frmOpenFiles.lblTypeUtility.Caption = "Rev-Mgr Preprocessor Tool"
frmOpenFiles.lblVersion.Caption = "V10.1"
frmOpenFiles.txtStopAfter.Visible = False
frmOpenFiles.chkStop.Visible = False
frmOpenFiles.chkSave.Visible = False

frmOpenFiles.lblBottomNotes.Caption = " Look for 4 files, BatchZZZZZZZZ.txt in c:\temp for results."
frmOpenFiles.lblInstructions.Caption = "Select files to use and then Process."
frmOpenFiles.lblInstructions.Caption = "Select the directory containing " & _
                    "the ASM files.  Click the Process button to " & _
                    "start the process of extracting information."
frmOpenFiles.lblPath.Caption = "Path: " & frmOpenFiles.dirDirectory.Path
frmOpenFiles.chkDontRecompute.Visible = False
'frmOpenFiles.chkStop.Visible = False
frmOpenFiles.txtStopAfter.Text = 10
frmOpenFiles.filFiles.Pattern = "*.asm"
frmOpenFiles.filList.Pattern = "*.asm"
frmProcessing.Visible = True
Debug.Print frmOpenFiles.filFiles.Pattern

End Sub
Public Sub Process()
    Dim I As Integer
    Dim J As Integer
    Dim K As Integer
    Dim MyAttr As Integer
    
    Dim oRevMgrApp As Object
    Dim oDocument As Object
    Dim oLinkedDocCollection As Object
    Dim oThisLink As Object
    
    Dim LinkCnt As Integer
    Dim LinkName As String
    
    Dim MissingFileString As String
    Dim IsLinkMissing As Boolean
    Dim IsFileWriteProtected As Boolean
    
    Dim CntDocsWithMissingLinks As Integer
    Dim CntDocsWriteProtected As Integer
    
    
    ' Initialize flag to indicate if the user wants to stop processing files.
    StopProcess = False
        
    ' Build up list of files to process depending on which option was selected.

    MissingFileString = ""
    IsLinkMissing = False
    IsFileWriteProtected = False
    CntDocsWithMissingLinks = 0
    CntDocsWriteProtected = 0
    
    Open "c:\temp\BatchResults.txt" For Output As #1
    Open "c:\temp\BatchErrorDetails.txt" For Output As #2
    Open "c:\temp\BatchMissingLinks.txt" For Output As #3
    Open "c:\temp\BatchWriteProtectedFiles.txt" For Output As #4
    
     
    ' Check to be sure at least one part file has been specified.
    If intFileNameCount = 0 Then
        If frmOpenFiles.optAllFiles Then
            Status
        End If
        If frmOpenFiles.optSelected Then
            MsgBox "No part files are selected."
        ElseIf frmOpenFiles.optAllInDirectory Then
            MsgBox "No part files exist in the directory specified."
        ElseIf frmOpenFiles.optAllFiles Then
            MsgBox "No part files exist in the directories specified."
        End If
        
        Exit Sub
    End If
        
    frmOpenFiles.Visible = False
         
    On Error Resume Next
    Set oRevMgrApp = CreateObject("RevisionManager.Application")
    
    If Err Then
            MsgBox "Cannot start Revision Manager."
            Err.Clear
            Exit Sub
    End If
        
    On Error GoTo ErrorFound
    
    Print #1, "Summary Results Processing Files"
    Print #1, "Total files to process = " & intFileNameCount
    For I = 1 To intFileNameCount
        
        ' Check the global variable to see if the stop process command button has been selected
        DoEvents
        If StopProcess Then
            MsgBox "Processing aborted."
            GoTo RegularEnd
        End If
        
        Status "Processing file " & I & " of " & intFileNameCount & ":", strFileNames(I)
             
        On Error Resume Next
        Set oDocument = oRevMgrApp.Open(strFileNames(I))
        If Err Then
            Debug.Print Err.Description
            Err.Clear
        End If
        
        'Before doing anything, need to see if the container is write-protected.
        'If it is, don't process and write to file it's write-protected.
        
        MyAttr = GetAttr(strFileNames(I))
        If MyAttr <> 32 Then
            If MyAttr <> 0 Then
               ' MsgBox "This file is write protected"
                Print #4, strFileNames(I)
                IsFileWriteProtected = True
                CntDocsWriteProtected = CntDocsWriteProtected + 1
            End If
        End If
        
        Set oLinkedDocCollection = oDocument.LinkedDocuments
        If Err Then
            Debug.Print Err.Description
            Err.Clear
        End If
        
        'start processing each of the linked documents
        LinkCnt = oLinkedDocCollection.Count
        
        If LinkCnt > 0 Then
            For J = 1 To LinkCnt
                Set oThisLink = oLinkedDocCollection(J)
                LinkName = oThisLink.FullName
            
                'check to see if the linked name exists, if not write it out
                If FileExists(LinkName) = False Then
                    MissingFileString = MissingFileString + "     " + LinkName + vbCrLf
                    IsLinkMissing = True
                End If
                'Print #1, "     " & LinkName
            
                Debug.Print I & oLinkedDocCollection(J).FullName
                Set oThisLink = Nothing
                LinkName = ""
            Next ' end looping thru collection of links in the document
        
            If IsLinkMissing Then
                Print #2, I & ";" & strFileNames(I)
                Print #2, MissingFileString
                Print #1, strFileNames(I) & "-MissingLinks"
                Print #3, strFileNames(I)
                CntDocsWithMissingLinks = CntDocsWithMissingLinks + 1
            
            ElseIf IsFileWriteProtected Then
                Print #1, strFileNames(I) & "-WRITEPROTECTED"
            Else
                Print #1, strFileNames(I) & "-OK"
            End If
        Else
            Print #1, strFileNames(I) & "-NOLINKS"
        End If ' end of if  for LinkCnt > 0
        
        IsLinkMissing = False
        IsFileWriteProtected = False
        MissingFileString = ""
        LinkCnt = 0
        
        Debug.Print "File " & I & "of " & intFileNameCount & "is " & strFileNames(I)
P:
    Next
    Set oThisLink = Nothing
    Set oLinkedDocCollection = Nothing
    Set oDocument = Nothing
    Set oRevMgrApp = Nothing
    
    Print #1, "Total Docs with Missing Links = " & CntDocsWithMissingLinks
    Print #1, "Total Docs write protected = " & CntDocsWriteProtected
    
RegularEnd:
    ' Dismiss the status form.
    Status
    Set oRevMgrApp = Nothing
    
    Close #1
    Close #2
    Close #3
    Close #4
    
    frmOpenFiles.Visible = True
    Exit Sub

ErrorFound:
    ' Dismiss the status form.
    Status
    
    'AssyDoc.Close False
    Set oDocument = Nothing

    
    MsgBox "An error has occurred.  Processing has been stopped." + Chr(13) + "Last file " _
    + "processed is " & strFileNames(I)

    Close #1
    Close #2

    frmOpenFiles.Visible = True
    Exit Sub
End Sub

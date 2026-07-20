Attribute VB_Name = "modGlob"
Option Explicit

' Application program ID.
Public Const SOLID_EDGE = "SolidEdge.Application"
Public Const DO_NOT_CREATE = False

Public Const FIRST_LEVEL = 1 ' The value representing the first level in an assembly.

Public Const OPT_BOM = 0     ' Index of BOM option control
Public Const OPT_EX_BOM = 1  ' Index of Exploded BOM option control
Public Const OPT_ATOMIC = 2  ' Index of Atomic option control
Public Const OPT_PARTS = 3   ' Index of Parts list option control

' Titles of reports.
Public Const BOM = "BOM (Bill of Materials)"
Public Const EXPLODED_BOM = "Exploded BOM"
Public Const ATOMIC_PARTS = "Summary of Atomic Parts"
Public Const PARTS_LISTS = "Parts Lists"

' Property Tag/Caption Values
Public Const PROP_LEVEL = "Level"
Public Const PROP_PNAME = "Part Name"
Public Const PROP_PNUMBER = "Part Number"
Public Const PROP_PREV = "Part Revision"
Public Const PROP_PQUANT = "Part Quantity"
Public Const PROP_TITLE = "Part Title"
Public Const PROP_CREATION = "Part Creation Date"
Public Const NUM_OF_PROPERTIES = 7

' Constants for properties retrieved from Solid Edge
Public Const PROJECT_INFORMATION = "ProjectInformation"
Public Const DOC_NUMBER = "Document Number"
Public Const DOC_REVISION = "Revision"
Public Const SUMMARY_INFORMATION = "SummaryInformation"
Public Const DOC_CREATION_DATE = "Origination date"
Public Const DOC_TITLE = "Title"

' Node type information
Type typeNode
    strDocName As String
    strOccurrenceName As String
    strDocNumber As String
    strDocRevision As String
    strDocCreationDate As String
    strDocTitle As String
    objDocument As Object ' This might be a SolidEdgeAssembly.AssemblyDocument or SolidEdgePart.PartDocument or SolidEdgePart.SheetMetalDocument, so we use late binding here
    intLevel As Integer
    intCount As Integer
End Type

' Store the elements found in the assembly.
Public gusrNodeArray() As typeNode
Public gintNodeCount As Integer
Public gintNodeCountMax As Integer
Public gintReportType As Integer
Public gstrAssemblyName As String

Sub UpdateNodeArray(objOccurrence As SolidEdgeAssembly.Occurrence, intLevel As Integer)
    
    Dim intX As Integer
    Dim strFileName As String
    Dim bMissingDocument As Boolean
    
    strFileName = UCase(objOccurrence.OccurrenceFileName)
    intX = 1
    
    Select Case gintReportType
        Case OPT_BOM, OPT_PARTS
            Do While intX <= gintNodeCount
                If (UCase(gusrNodeArray(intX).strDocName) = strFileName) And (gusrNodeArray(intX).intLevel = intLevel) Then
                    ' We have this node already.  Increment count and exit sub.
                    gusrNodeArray(intX).intCount = gusrNodeArray(intX).intCount + objOccurrence.Quantity
                    Exit Sub
                End If
                intX = intX + 1
            Loop
        Case OPT_ATOMIC
            Do While intX <= gintNodeCount
                If UCase(gusrNodeArray(intX).strDocName) = strFileName Then
                    ' We have this node already.  Increment count and exit sub.
                    gusrNodeArray(intX).intCount = gusrNodeArray(intX).intCount + objOccurrence.Quantity
                    Exit Sub
                End If
                intX = intX + 1
            Loop
        Case Else
            intX = gintNodeCount + 1
    End Select
    
    ' If this is the Atomic Part Report, don't save nodes that are sub-assemblies.
    If (gintReportType = OPT_ATOMIC) And (objOccurrence.Subassembly) Then
        Exit Sub
    End If
    
    ' This is a new node.  Make sure we have room in the
    ' array to store this new information.
    If intX > gintNodeCountMax Then
        gintNodeCountMax = gintNodeCountMax + 100
        ReDim Preserve gusrNodeArray(1 To gintNodeCountMax)
    End If
    gintNodeCount = intX
    
    ' Now store the information in the new node.
    With gusrNodeArray(intX)
        .strDocName = strFileName
        .strOccurrenceName = objOccurrence.Name
        On Error Resume Next
        bMissingDocument = True
        bMissingDocument = objOccurrence.OccurrenceDocument Is Nothing
        If Not bMissingDocument Then
            Set .objDocument = objOccurrence.OccurrenceDocument
            .strDocNumber = .objDocument.Properties(PROJECT_INFORMATION).Item(DOC_NUMBER).Value
            .strDocRevision = .objDocument.Properties(PROJECT_INFORMATION).Item(DOC_REVISION).Value
            .strDocCreationDate = .objDocument.Properties(SUMMARY_INFORMATION).Item(DOC_CREATION_DATE).Value
            .strDocTitle = .objDocument.Properties(SUMMARY_INFORMATION).Item(DOC_TITLE).Value
        Else 'The document referenced by the assembly structure is missing; what should we do?
            'set default string values
            .strDocNumber = "Not available"
            .strDocRevision = "Not available"
            .strDocCreationDate = "Not available"
            .strDocTitle = "Not available"
        End If
        .intLevel = intLevel
        .intCount = 1
    End With
    
End Sub


' This is a recursive function that is called once externally and then
' continually calls itself at each level of the assembly to navigate
' through the entire assembly tree.
Sub ObtainAssemblyInformation(objDoc As SolidEdgeAssembly.AssemblyDocument, intLevel As Integer)
    Dim objOccurrence As SolidEdgeAssembly.Occurrence
    
    ' Iterate through all of the parts in the current assembly.
    For Each objOccurrence In objDoc.Occurrences
        ' Make sure it should be included in the BOM by checking the IncludeInBom flag.
        If objOccurrence.IncludeInBom Then
            ' Find the object in the array, create if necessary
            UpdateNodeArray objOccurrence, intLevel
            
            ' If this is a subassembly, then recurse into it unless this is a top level parts listing.
            If (objOccurrence.Subassembly) And (gintReportType <> OPT_PARTS) Then
                ObtainAssemblyInformation objOccurrence.OccurrenceDocument, intLevel + 1
            End If
        End If
    Next
End Sub


Function fblnCreateBOMReport() As Boolean
    Dim objSolidEdge As SolidEdgeFramework.Application
    
    fblnCreateBOMReport = False
    
    ' Turn on error trapping.
    On Error Resume Next
    
    ' Attempt to connect to a running instance of Solid Edge.
    Set objSolidEdge = GetObject(, "SolidEdge.Application")
    If Err Then
        ' Couldn't connect to Solid Edge, so exit.
        MsgBox "You must first open an assembly in Solid Edge."
        Exit Function
    End If
    
    gstrAssemblyName = objSolidEdge.ActiveDocument.Name
    
    ' Initialize global count.
    gintNodeCount = 0
    
    ' Make sure the assembly environment is open.
    ' This also guarantees that an assembly document is open.
    If objSolidEdge.ActiveEnvironment <> "Assembly" Then
        ' An assembly document is not open, notify user and then exit.
        MsgBox "This program must be run with an assembly document open." & _
               Chr(10) & Chr(13) & "Please open an assembly document and retry."
        Exit Function
    End If

    ' Get the assembly information by calling this recursive function.
    ObtainAssemblyInformation objSolidEdge.ActiveDocument, FIRST_LEVEL
    
    fblnCreateBOMReport = True
End Function

'
' CursorWait
'   If a TRUE value is passed in as the parameter to this procedure,
'   then the cursor will be changed to an hour glass, otherwise the
'   cursor is set to normal.
'
Sub CursorWait(waitCursor As Integer)
    If waitCursor Then
        Screen.MousePointer = vbHourglass
    Else
        Screen.MousePointer = vbDefault
    End If
End Sub

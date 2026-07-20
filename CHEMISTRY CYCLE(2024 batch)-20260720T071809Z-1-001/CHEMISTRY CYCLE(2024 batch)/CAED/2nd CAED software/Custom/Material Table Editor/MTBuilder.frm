VERSION 5.00
Object = "{F9043C88-F6F2-101A-A3C9-08002B2F49FB}#1.2#0"; "comdlg32.ocx"
Begin VB.Form Form1 
   BorderStyle     =   3  'Fixed Dialog
   Caption         =   "Solid Edge Material Library Editor"
   ClientHeight    =   6480
   ClientLeft      =   48
   ClientTop       =   444
   ClientWidth     =   8340
   Icon            =   "MTBuilder.frx":0000
   LinkTopic       =   "Form1"
   MaxButton       =   0   'False
   MinButton       =   0   'False
   ScaleHeight     =   6480
   ScaleWidth      =   8340
   ShowInTaskbar   =   0   'False
   StartUpPosition =   3  'Windows Default
   Begin VB.CommandButton cmdTempFile 
      Caption         =   "Browse"
      Height          =   396
      Left            =   6000
      TabIndex        =   18
      Top             =   5280
      Width           =   972
   End
   Begin VB.CommandButton Command2 
      Caption         =   "Browse"
      Height          =   348
      Left            =   5952
      TabIndex        =   14
      Top             =   7440
      Width           =   972
   End
   Begin MSComDlg.CommonDialog Browse 
      Left            =   7344
      Top             =   1872
      _ExtentX        =   677
      _ExtentY        =   677
      _Version        =   393216
      DialogTitle     =   "code"
      FilterIndex     =   2
      PrinterDefault  =   0   'False
   End
   Begin VB.CommandButton Command1 
      Caption         =   "Close"
      Height          =   350
      Left            =   7152
      TabIndex        =   13
      Top             =   1056
      Width           =   1000
   End
   Begin VB.CommandButton cmdGetMTL 
      Caption         =   "Extract"
      Height          =   350
      Left            =   7152
      TabIndex        =   12
      Top             =   192
      Width           =   1000
   End
   Begin VB.TextBox txtMaterialFile 
      BackColor       =   &H00FFFFFF&
      ForeColor       =   &H00000000&
      Height          =   375
      Left            =   180
      TabIndex        =   11
      Text            =   "c:\temp\Material.mtl"
      Top             =   7428
      Width           =   5616
   End
   Begin VB.Frame Frame3 
      Caption         =   "Instructions"
      Height          =   4572
      Left            =   192
      TabIndex        =   3
      Top             =   192
      Width           =   6768
      Begin VB.Label Label9 
         Caption         =   "2. Excel will need to be running for the Import Step. A property formatted material table will also need to be open."
         Height          =   396
         Left            =   672
         TabIndex        =   17
         Top             =   3504
         Width           =   5676
      End
      Begin VB.Label Label8 
         Caption         =   "Notes"
         Height          =   252
         Left            =   96
         TabIndex        =   16
         Top             =   2688
         Width           =   540
      End
      Begin VB.Label Label7 
         Caption         =   "3. Importing WILL override all current material data in the Solid Edge material library."
         Height          =   444
         Left            =   672
         TabIndex        =   15
         Top             =   3984
         Width           =   5724
      End
      Begin VB.Label Label3 
         Caption         =   "1. Solid Edge and Excel do not need to be running for the Extract Step, they will be started automatically"
         Height          =   444
         Left            =   672
         TabIndex        =   8
         Top             =   2928
         Width           =   5688
      End
      Begin VB.Label Label2 
         Caption         =   $"MTBuilder.frx":000C
         Height          =   636
         Left            =   144
         TabIndex        =   7
         Top             =   960
         Width           =   6408
      End
      Begin VB.Label Label1 
         Caption         =   $"MTBuilder.frx":00F2
         Height          =   540
         Left            =   144
         TabIndex        =   6
         Top             =   288
         Width           =   6552
      End
      Begin VB.Label Label5 
         Caption         =   $"MTBuilder.frx":01A2
         Height          =   576
         Index           =   1
         Left            =   144
         TabIndex        =   4
         Top             =   1872
         Width           =   6360
      End
   End
   Begin VB.TextBox txtFileName 
      BackColor       =   &H00FFFFFF&
      ForeColor       =   &H00000000&
      Height          =   375
      Left            =   192
      TabIndex        =   1
      Text            =   "C:\Temp\SolidEdgeTempMaterialFile.xml"
      Top             =   5280
      Width           =   5604
   End
   Begin VB.CommandButton CreateMTL 
      Caption         =   "Import"
      Height          =   350
      Left            =   7152
      TabIndex        =   0
      Top             =   624
      Width           =   1000
   End
   Begin VB.Label Label6 
      Caption         =   "Solid Edge Material library file"
      Height          =   288
      Left            =   180
      TabIndex        =   10
      Top             =   7152
      Width           =   3852
   End
   Begin VB.Label Label4 
      Caption         =   "Status"
      Height          =   240
      Left            =   192
      TabIndex        =   9
      Top             =   5760
      Width           =   1452
   End
   Begin VB.Label labStatus 
      BorderStyle     =   1  'Fixed Single
      Height          =   336
      Left            =   192
      TabIndex        =   5
      Top             =   6000
      Width           =   6804
   End
   Begin VB.Label XMLFileName 
      Caption         =   "Temporary file location (XML File Name)"
      Height          =   252
      Left            =   192
      TabIndex        =   2
      Top             =   4992
      Width           =   3756
   End
End
Attribute VB_Name = "Form1"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Option Explicit
Dim strMaterialLib As String
Const lngColor = 16764057
Const strMessageCaption = "Solid Edge Material Library Edit Utility"
Private Sub cmdGetMTL_Click()
  
    On Error Resume Next
    
    Dim objSolidEdge As Object
    Dim objMaterial As Object
    Dim objUOM As Object
    Dim SEMTL As DOMDocument
    Dim MTLDefinition As Object
    Dim MTLCollection As Object
    Dim MTLMaterial As Object
    Dim MTLSheetName As String
    Dim MTLProperty  As Object
    Dim MTLPropertyID As String
    Dim MTLPropFieldName As String
    Dim MTLPropFieldValue As String
    Dim PSMCollection As Object
    Dim MTLPropertyValue(11) As String
    Dim MTLFieldName(11) As String
    Dim PSMPropertyValue(7) As String
    Dim objXLApp As Excel.Application
    Dim objWorkBook As Excel.Workbook
    Dim intCol As Integer
    Dim intRow As Integer
    Dim strText As String
    
    MTLPropertyValue(0) = ""
    MTLPropertyValue(1) = ""
    MTLPropertyValue(2) = ""
    MTLPropertyValue(3) = "[kg/m^3["
    MTLPropertyValue(4) = "[1/degK["
    MTLPropertyValue(5) = "[W/m*degK["
    MTLPropertyValue(6) = "[Joule/kg*degK["
    MTLPropertyValue(7) = "[Pascal["
    MTLPropertyValue(9) = " "
    MTLPropertyValue(9) = "[Pascal["
    MTLPropertyValue(10) = "[Pascal["
    MTLPropertyValue(11) = "[%["
    
    PSMPropertyValue(0) = "[m]"
    PSMPropertyValue(1) = "[m]"
    PSMPropertyValue(2) = "[m]"
    PSMPropertyValue(3) = "[m]"
    PSMPropertyValue(4) = "Scalar"
    PSMPropertyValue(4) = "0 to 1"
    PSMPropertyValue(5) = "1=standard, 2=custom"
    PSMPropertyValue(6) = "class.ID"
    
    MTLFieldName(0) = "Face Style"
    MTLFieldName(1) = "Fill Style"
    MTLFieldName(2) = "VSPlus Style"
    MTLFieldName(3) = "Density"
    MTLFieldName(4) = "Coef. of Thermal Exp"
    MTLFieldName(5) = "Thermal Conductivity"
    MTLFieldName(6) = "Specific Heat"
    MTLFieldName(7) = "Modulus of Elasticity"
    MTLFieldName(8) = "Poission's Ratio"
    MTLFieldName(9) = "Yield Stress"
    MTLFieldName(10) = "Ultimate Stress"
    MTLFieldName(11) = "Elongation"

    strMaterialLib = GetMaterialFile()
    
    If strMaterialLib = "" Then
        MsgBox "The material file can't be found."
        Exit Sub
    End If
    
    strXMLFile = Me.txtFileName
        
    Me.Hide
    
    labStatus.Caption = "Starting Solid Edge (it will be invisible)"
    Set objSolidEdge = CreateObject("solidedge.application")
    
    DoEvents
    If Err Then
        MsgBox "Solid Edge could not be started.", vbOKOnly + vbCritical + vbSystemModal, strMessageCaption
        Me.Show
        Exit Sub
    End If
    objSolidEdge.Visible = False
    DoEvents
    

    ' labStatus.Caption = "Accessing the material table data"
    DoEvents
    'get the material table object
    Set objMaterial = objSolidEdge.GetMaterialTable
    DoEvents

    objMaterial.WriteMaterialDataToXML (strXMLFile)
    DoEvents
    
    objSolidEdge.Quit
    
    DoEvents
    labStatus.Caption = "Starting Excel"
    Set objXLApp = CreateObject("Excel.Application")
    If Err Then
        MsgBox "Could not start Excel.", vbOKOnly + vbCritical + vbSystemModal, strMessageCaption
        Me.Show
        Exit Sub
    End If
    DoEvents
    objXLApp.Visible = True

    If Len(Dir$(strXMLFile)) = 0 Then
        MsgBox "The material library file: " & strMaterialLib & " cannot be found." & Chr(10) _
        & "There was probably an error extracting it from Solid Edge. Make sure Solid Edge is " & Chr(10) & _
        "closed and retry.", vbOKOnly + vbCritical + vbSystemModal, strMessageCaption
        Me.Show
        Exit Sub
    End If
    
    Set objWorkBook = objXLApp.Workbooks.Add
    
    objXLApp.StatusBar = "Writing instructions to the spreadsheet"
    DoEvents
    ' first wirte some instructions
    objWorkBook.Worksheets(1).Name = "Instructions"
    objWorkBook.Worksheets(1).Cells(1, 1).Value = "Welcome to the Solid Edge Excel-based Material library editor."
    objWorkBook.Worksheets(1).Cells(2, 1).Value = "This program wil create a properly formated XLS file that can be edited."
    objWorkBook.Worksheets(1).Cells(3, 1).Value = "Feel free to add, remove, or edit both materials or sheet metal gages."
    objWorkBook.Worksheets(1).Cells(4, 1).Value = "Once all materials edits have been made, run the program and choose Import."
    objWorkBook.Worksheets(1).Cells(5, 1).Value = "The data will be written back in to the Solid Edge Material.mtl file."
    objWorkBook.Worksheets(1).Cells(6, 1).Value = "All existing materials will be overwritten with this data."
    objWorkBook.Worksheets(1).Cells(7, 1).Value = "A temporary XML file is created, so make sure the path listed below is not"
    objWorkBook.Worksheets(1).Cells(8, 1).Value = "being used. You can change the location if needed."
    
    objWorkBook.Worksheets(1).Cells(10, 1).Value = "Warning:"
    objWorkBook.Worksheets(1).Cells(11, 1).Value = "1. Do not change the tab names."
    objWorkBook.Worksheets(1).Cells(12, 1).Value = "2. Do not change add or remove columns"
    objWorkBook.Worksheets(1).Cells(13, 1).Value = "3. Do not change the cells with a colored background."
 
    objXLApp.StatusBar = "Opening the temporary XML document."
    DoEvents
    Set SEMTL = CreateObject("Microsoft.XMLDOM")
    SEMTL.async = "false"
    SEMTL.Load strXMLFile

    ' second wirte the materials section
    Set MTLDefinition = SEMTL.FirstChild.childNodes(1)
    
    Set MTLCollection = MTLDefinition.FirstChild.childNodes
    ' set the tab name
    labStatus.Caption = "Writing the materials to the spreadsheet."
    DoEvents
    objWorkBook.Worksheets(2).Name = "Materials"
    ' objWorkBook.Worksheets(2).Cells(1, 1).Value = "ID"
    objWorkBook.Worksheets(2).Cells(1, 1).Interior.Color = lngColor
    objWorkBook.Worksheets(2).Cells(2, 1).Value = "UOM"
    objWorkBook.Worksheets(2).Cells(2, 1).Interior.Color = lngColor
    objWorkBook.Worksheets(2).Cells(3, 1).Value = "Property"
    objWorkBook.Worksheets(2).Cells(3, 1).Interior.Color = lngColor
    objWorkBook.Worksheets(2).Cells(4, 1).Value = "Material"
    objWorkBook.Worksheets(2).Cells(4, 1).Interior.Color = lngColor
    intRow = 1
  
    ' rip through all materials
    For Each MTLMaterial In MTLCollection
        
        objWorkBook.Worksheets(2).Cells(intRow + 4, 1).Value = MTLMaterial.Attributes(0).Value
        
        
        objXLApp.StatusBar = "Processing: " & Format$(100 * intRow / MTLCollection.Length, 0#) & " % complete, reading material: " & MTLMaterial.Attributes(0).Value
        DoEvents
        ' get the properties for the current material
        intCol = 1
        For Each MTLProperty In MTLMaterial.childNodes
            MTLPropertyID = MTLProperty.Attributes(0).Value
            ' objWorkBook.Worksheets(2).Cells(1, 1 + intCol).Value = MTLPropertyID
            objWorkBook.Worksheets(2).Cells(1, 1 + intCol).Interior.Color = lngColor
            objWorkBook.Worksheets(2).Cells(2, 1 + intCol).Value = MTLPropertyValue(MTLPropertyID - 20)
            
            objWorkBook.Worksheets(2).Cells(2, 1 + intCol).Interior.Color = lngColor
            'objWorkBook.Worksheets(2).Cells(3, 1 + intCol).Value = MTLProperty.Attributes(1).Value
            objWorkBook.Worksheets(2).Cells(3, 1 + intCol).Value = MTLFieldName(MTLPropertyID - 20)
            objWorkBook.Worksheets(2).Cells(3, 1 + intCol).Interior.Color = lngColor
            objWorkBook.Worksheets(2).Cells(4, 1 + intCol).Interior.Color = lngColor
            If intCol > 3 Then
            objWorkBook.Worksheets(2).Cells(intRow + 4, 1 + intCol).Value = Round(MTLProperty.Attributes(2).Value, 12)
            Else
            objWorkBook.Worksheets(2).Cells(intRow + 4, 1 + intCol).Value = MTLProperty.Attributes(2).Value
            End If
            
            intCol = intCol + 1
        Next
        intRow = intRow + 1
    Next
    
    
    'objXLApp.StatusBar =  "Writing the sheet metal data to the spreadsheet."
    DoEvents
    ' finally wirte the sheetmetal section
    Set MTLDefinition = SEMTL.FirstChild.childNodes(2)
    
    Set MTLCollection = MTLDefinition.FirstChild.childNodes
    ' set the tab name
    objWorkBook.Worksheets(3).Name = "Sheetmetal"
    ' objWorkBook.Worksheets(3).Cells(1, 1).Value = "ID"
    objWorkBook.Worksheets(3).Cells(1, 1).Interior.Color = lngColor
    objWorkBook.Worksheets(3).Cells(2, 1).Value = "UOM"
    objWorkBook.Worksheets(3).Cells(2, 1).Interior.Color = lngColor
    objWorkBook.Worksheets(3).Cells(3, 1).Value = "Property"
    objWorkBook.Worksheets(3).Cells(3, 1).Interior.Color = lngColor
    objWorkBook.Worksheets(3).Cells(4, 1).Value = "Material"
    objWorkBook.Worksheets(3).Cells(4, 1).Interior.Color = lngColor
    intRow = 1
    
    
    ' rip through all gages
    For Each MTLMaterial In MTLCollection
        objWorkBook.Worksheets(3).Cells(intRow + 4, 1).Value = MTLMaterial.Attributes(0).Value
        objXLApp.StatusBar = "Processing: " & Format$(100 * intRow / MTLCollection.Length, 0#) & " % complete, reading gage: " & MTLMaterial.Attributes(0).Value
 
        DoEvents
        ' get the properties for the current material
        intCol = 1
        For Each MTLProperty In MTLMaterial.childNodes
            If intCol = 7 Then
                MTLPropertyID = 6
            Else
                MTLPropertyID = MTLProperty.Attributes(0).Value
            End If
            ' objWorkBook.Worksheets(3).Cells(1, 1 + intCol).Value = MTLPropertyID
            objWorkBook.Worksheets(3).Cells(1, 1 + intCol).Interior.Color = lngColor
            objWorkBook.Worksheets(3).Cells(2, 1 + intCol).Value = PSMPropertyValue(MTLPropertyID)
            objWorkBook.Worksheets(3).Cells(2, 1 + intCol).Interior.Color = lngColor
            objWorkBook.Worksheets(3).Cells(3, 1 + intCol).Interior.Color = lngColor
            objWorkBook.Worksheets(3).Cells(4, 1 + intCol).Interior.Color = lngColor
            If intCol = 7 Then
                objWorkBook.Worksheets(3).Cells(3, 1 + intCol).Value = MTLProperty.Attributes(0).Value
                objWorkBook.Worksheets(3).Cells(intRow + 4, 1 + intCol).Value = MTLProperty.Attributes(1).Value
            Else
                objWorkBook.Worksheets(3).Cells(3, 1 + intCol).Value = MTLProperty.Attributes(1).Value
                objWorkBook.Worksheets(3).Cells(intRow + 4, 1 + intCol).Value = Round(MTLProperty.Attributes(2).Value, 12)
            End If

            intCol = intCol + 1
        Next
        intRow = intRow + 1
    Next
    objXLApp.StatusBar = "Writing to the spreadsheet is complete."
    DoEvents
    Beep
    
    MsgBox "The material library has been written to Excel", vbOKCancel + vbInformation + vbSystemModal, strMessageCaption
    
    objXLApp.StatusBar = " "
    Me.Show
    
End Sub

Private Sub cmdTempFile_Click()


    Dim strFilename As String
    
    
    Browse.InitDir = "C:\temp"
    Browse.DialogTitle = "Solid Edge Material Editor - Temp Path"
    Browse.FileName = "TempMaterial.xml"
    Browse.ShowOpen
    
    strFilename = LCase$(Browse.FileName)

    Me.txtFileName.Text = strFilename

End Sub

Private Sub Command1_Click()

    End
    
End Sub

Private Sub Command2_Click()
    
    On Error Resume Next
    
    Dim strFilename As String
    
    Browse.DefaultExt = ".mtl"
    Browse.Filter = "*.mtl"
    Browse.FileName = "material.mtl"
    Browse.DialogTitle = "Solid Edge Material Editor - Material File"
    Browse.ShowOpen
    
    strFilename = LCase$(Browse.FileName)

    strXMLFile = LCase$(Left$(strFilename, Len(strFilename) - 12)) & "tempmaterial.xml"
    Me.txtFileName.Text = LCase$(strXMLFile)
    
    Me.CreateMTL.Enabled = False
    
    If UCase$(Right$(strFilename, 12)) = "MATERIAL.MTL" Then
        txtMaterialFile.Text = strFilename
        If Len(Dir$(strFilename)) > 0 Then
            Me.CreateMTL.Enabled = True
        End If
    Else
        MsgBox "Please choose the correct file", vbOKOnly + vbCritical, strMessageCaption
        Browse.FileName = "Material.mtl"
        txtMaterialFile.Text = ""
    End If



End Sub

Private Sub CreateMTL_Click()

    On Error Resume Next
    
    Dim objXLApp As Excel.Application
    Dim objSolidEdge As Object
    Dim objMaterial As Object
    Dim strCell As String
    Dim intRow As Long
    Dim i As Integer
    Dim MTLDefinition As Object
    Dim MTLCollection As Object
    Dim MTLMaterial As Object
    Dim MTLSheetName As String
    Dim xmlDoc As MSXML2.DOMDocument
    Dim xmlTopElement As MSXML2.IXMLDOMElement
    Dim xmlTopNode  As MSXML2.IXMLDOMNode
    Dim xmlElement As MSXML2.IXMLDOMElement
    Dim xmlSubElement As MSXML2.IXMLDOMElement
    Dim xmlMatElement As MSXML2.IXMLDOMElement
    Dim xmlProElement As MSXML2.IXMLDOMElement
    Dim xmlMTLElement As MSXML2.IXMLDOMElement
    Dim objTemp As Object
    Dim objSheet As Object
    Dim dblIndex As Double
           
    strMaterialLib = GetMaterialFile()
    strXMLFile = Me.txtFileName.Text
    
    Me.Hide
    
    If Len(Dir$(strXMLFile)) = 0 Then
        MsgBox "The temp material library file: " & strXMLFile & " cannot be found." & Chr(10) _
        & "This file was created by this program.", vbOKOnly + vbCritical + vbSystemModal, strMessageCaption
        Me.Show
        Exit Sub
    End If
    
    ' labStatus.Caption = "Finding the applications"

    Set objXLApp = GetObject(, "Excel.Application")
    If Err Then
        MsgBox "Make sure Excel is running with the properly formated spreadsheet.", vbOKOnly + vbCritical + vbSystemModal, strMessageCaption
        Me.Show
        Exit Sub
    End If
    DoEvents
    objXLApp.Visible = True
    
    Set xmlDoc = CreateObject("Microsoft.XMLDOM")
    xmlDoc.async = False
    
    Set xmlTopElement = xmlDoc.createElement("MaterialLibraryFile")
    Set xmlElement = xmlDoc.createElement("Version")
    xmlElement.setAttribute "value", "1"
    Set objTemp = xmlTopElement.appendChild(xmlElement)
    
    Set xmlElement = xmlDoc.createElement("MaterialData")
    Set objTemp = xmlTopElement.appendChild(xmlElement)
    
    Set xmlSubElement = xmlDoc.createElement("Materials")
    Set objTemp = xmlElement.appendChild(xmlSubElement)
    
    ' loop around the materials
    
    Set objSheet = objXLApp.Sheets("Materials")
    intRow = 4
    
    Do While True
        
        
        intRow = intRow + 1
        strCell = objSheet.Cells(intRow, 1).Value
        objXLApp.StatusBar = "Writing XML data for: " & Format$(intRow, "0")
        DoEvents
        
        If (strCell = "") Then
            Exit Do
        Else
   
            Set xmlMatElement = xmlDoc.createElement("Material")
            ' go through each property
            For i = 0 To 11
                Set xmlProElement = xmlDoc.createElement("Property")
                Set objTemp = xmlMatElement.appendChild(xmlProElement)

                xmlProElement.setAttribute "Index", i + 20
                xmlProElement.setAttribute "Name", objSheet.Cells(3, i + 2).Value
                xmlProElement.setAttribute "Value", objSheet.Cells(intRow, i + 2).Value
            Next
            
            Set objTemp = xmlSubElement.appendChild(xmlMatElement)
            xmlMatElement.setAttribute "Name", objSheet.Cells(intRow, 1).Value
            
            
        End If
    Loop
    
    Set xmlElement = xmlDoc.createElement("PSMGaugeData")
    Set objTemp = xmlTopElement.appendChild(xmlElement)
    
    Set xmlSubElement = xmlDoc.createElement("PSMGauges")
    Set objTemp = xmlElement.appendChild(xmlSubElement)
    
     ' loop around the sheetmetal
    
    Set objSheet = objXLApp.Sheets("Sheetmetal")
    intRow = 4
    
    Do While True
        
        
        intRow = intRow + 1
        strCell = objSheet.Cells(intRow, 1).Value
        objXLApp.StatusBar = "Writing XML data for: " & Format$(intRow, "0")
        DoEvents
        
        If (strCell = "") Then
            Exit Do
        Else
   
            Set xmlMatElement = xmlDoc.createElement("PSMGauge")
            ' go through each property
            For i = 0 To 6
                
                Set xmlProElement = xmlDoc.createElement("Property")
                Set objTemp = xmlMatElement.appendChild(xmlProElement)

                If i = 6 Then
                    ' special case bend equation to not write the index for the bend equation
                    xmlProElement.setAttribute "Name", objSheet.Cells(3, i + 2).Value
                    xmlProElement.setAttribute "Value", objSheet.Cells(intRow, i + 2).Value
                Else
                    xmlProElement.setAttribute "Index", i
                    xmlProElement.setAttribute "Name", objSheet.Cells(3, i + 2).Value
                    xmlProElement.setAttribute "Value", objSheet.Cells(intRow, i + 2).Value
                End If
            Next
            
            Set objTemp = xmlSubElement.appendChild(xmlMatElement)
            xmlMatElement.setAttribute "Name", objSheet.Cells(intRow, 1).Value
            
        End If
    Loop
   
     
    objXLApp.StatusBar = "Saving the temporary material library"
     
    ' closes the whole thing
    Set xmlTopNode = xmlDoc.appendChild(xmlTopElement)
    xmlDoc.Save strXMLFile
    
    objXLApp.StatusBar = " "
    
    objXLApp.StatusBar = "Accessing the material table data"

    Set objSolidEdge = CreateObject("solidedge.application")
    If Err Then
        MsgBox "Could not start Solid Edge.", vbOKOnly + vbCritical + vbSystemModal, strMessageCaption
        Me.Show
        Exit Sub
    End If
    objSolidEdge.Visible = False

    DoEvents
    
    'get the material table object
    Set objMaterial = objSolidEdge.GetMaterialTable
    DoEvents
    
    objXLApp.StatusBar = "Updating the material table data with the XML data"

    objMaterial.WriteMatLibFileFromXML strXMLFile, strMaterialLib
    DoEvents

    objSolidEdge.Quit
    
    DoEvents
    
    objXLApp.StatusBar = ""

    DoEvents

    MsgBox "The Material Table import is complete." & Chr(10) & "Be sure (Tools|Options, File Locations) points to the file: " & strMaterialLib _
        , vbOKOnly + vbInformation + vbSystemModal, strMessageCaption

    Me.Show
    
End Sub
Private Sub Form_Load()

    labStatus.Caption = " "
    
    ' OnTop Me
    
End Sub

Private Sub x_saveAsUTF8(Path As String)
    Dim objUTF8 As ADODB.Stream
    Set objUTF8 = New ADODB.Stream


    objUTF8.Open
    objUTF8.LoadFromFile Path 'Loads a File
    objUTF8.Charset = "UTF-16" 'sets the stream encoding to UTF-8
    objUTF8.SaveToFile Path, adSaveCreateOverWrite 'Save File
    objUTF8.Close


    Set objUTF8 = Nothing
End Sub





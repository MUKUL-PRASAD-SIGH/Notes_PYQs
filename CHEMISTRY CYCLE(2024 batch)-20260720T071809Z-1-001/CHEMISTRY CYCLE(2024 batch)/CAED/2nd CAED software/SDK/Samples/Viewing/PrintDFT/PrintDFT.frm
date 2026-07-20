VERSION 5.00
Object = "{4B3C83C2-1ADC-11D2-B1D1-08003669EA02}#1.0#0"; "SEDraftXd.ocx"
Begin VB.Form Form1 
   Caption         =   "Drawing Print Form"
   ClientHeight    =   9285
   ClientLeft      =   60
   ClientTop       =   345
   ClientWidth     =   13410
   LinkTopic       =   "Form1"
   ScaleHeight     =   9285
   ScaleWidth      =   13410
   StartUpPosition =   3  'Windows Default
   Begin VB.CheckBox CheckBnWPrint 
      Caption         =   "Black on White print format (Black graphics on a white background will be printed)"
      Height          =   375
      Left            =   630
      TabIndex        =   3
      Top             =   8775
      Value           =   1  'Checked
      Width           =   5685
   End
   Begin SEDRAFTXLib.SEDraftX SEDraftX1 
      Height          =   8430
      Left            =   180
      TabIndex        =   2
      Top             =   180
      Width           =   13065
      _Version        =   65536
      _ExtentX        =   23045
      _ExtentY        =   14870
      _StockProps     =   33
      BackColor       =   -2147483634
      BorderStyle     =   1
      DraftFile       =   ""
   End
   Begin VB.CommandButton PrintAllBtn 
      Caption         =   "Print All Sheets"
      Height          =   375
      Left            =   8730
      TabIndex        =   1
      Top             =   8775
      Width           =   1575
   End
   Begin VB.CommandButton PrintBtn 
      Caption         =   "Print Active Sheet"
      Height          =   375
      Left            =   6885
      TabIndex        =   0
      Top             =   8775
      Width           =   1575
   End
End
Attribute VB_Name = "Form1"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False

Private Sub Form_Load()
'This procedure is called when the form is first loaded.
'Here we can set the control's "DraftFile" property. Modify and uncomment
'the line below to set this property to point to a valid Solid Edge draft
'file on disk

'SEDraftX1.DraftFile = "D:\testcase\sefiles\draft\DftFile.dft"

End Sub


Private Sub PrintBtn_Click()

'This Sub is called when the "Print Active Sheet" button is clicked.
'Here, we get the control's active sheet to copy its enhanced
'metafile (EMF) into the system clipboard. We then read this EMF into
'a "Picture" object. Finally, we call our procedure, PrintDrawing, to print
'the picture.

Dim sts As Boolean
Dim PicObj As Picture
Dim AspectRatio As Double
Dim BnWPrint As Boolean

' First check if a draft file has been opened
If (SEDraftX1.ReadyState <> 4) Then
    MsgBox (" A SE draft file has to be open")
    Exit Sub
End If

'Show the hour-glass cursor
OldMousePointer = Form1.MousePointer
Form1.MousePointer = vbHourglass

AspectRatio = 1#
If (CheckBnWPrint.Value = 1) Then
   BnWPrint = True
Else
   BnWPrint = False
End If

Call SEDraftX1.ActiveSheet.CopyEMFToClipboard(AspectRatio, BnWPrint)

sts = Clipboard.GetFormat(vbCFMetafile)
If (sts = True) Then
    Set PicObj = Clipboard.GetData(vbCFMetafile)
    PrintDrawing PicObj, Printer, SEDraftX1.ActiveSheet.Name, AspectRatio
End If
    
'Restore the old cursor
Form1.MousePointer = OldMousePointer

End Sub


Private Sub PrintAllBtn_Click()

'This Sub is called when the "Print All Sheets" button is clicked.
'Here, we access each drawing sheet one by one and invoke its method to copy
'its enhanced metafile (EMF) picture into the system clipboard. We then read
'this EMF into a "Picture" object. Finally we hand the picture over to the printer
'for printing.

Dim sts As Boolean
Dim PicObj As Picture
Dim objsheet As Object
Dim objsheets As Object
Dim LeftMargin As Double
Dim TopMargin As Double
Dim AspectRatio As Double
Dim BnWPrint As Boolean

' First check if a draft file has been opened
If (SEDraftX1.ReadyState <> 4) Then
    MsgBox (" A SE draft file has to be open")
    Exit Sub
End If

'Show the hour-glass cursor
OldMousePointer = Form1.MousePointer
Form1.MousePointer = vbHourglass
If (CheckBnWPrint.Value = 1) Then
   BnWPrint = True
Else
   BnWPrint = False
End If

Set objsheets = SEDraftX1.Sheets

For Each objsheet In objsheets
    Clipboard.Clear
    AspectRatio = 1#
    Call objsheet.CopyEMFToClipboard(AspectRatio, BnWPrint)
    sts = Clipboard.GetFormat(vbCFMetafile)
    If (sts = True) Then
        Set PicObj = Clipboard.GetData(vbCFMetafile)
        PrintDrawing PicObj, Printer, objsheet.Name, AspectRatio
    End If
Next

'Restore the old cursor
Form1.MousePointer = OldMousePointer

End Sub


Sub PrintDrawing(PicObj As Picture, Device As Printer, Name As String, AspectRatio As Double)

'This Sub takes in a picture object and sends it to the printer object
'(2nd parameter) for printing.
'By using the width and height information of the picture and the printer
'device we fit the picture to the paper. Also, we set the paper orientation
'to landscape

Dim LeftMargin As Single
Dim TopMargin As Single
Dim PaperWidth As Single
Dim PaperHeight As Single
Dim PicWidth As Single
Dim PicHeight As Single
Dim PaperRatio As Double
Dim PicRatio As Double
Dim OldFontSize As Integer

'Set paper size to A4
'Device.PaperSize = vbPRPSA4  'UNCOMMENT AND MODIFY THIS LINE TO SET DESIRED PAPER SIZE

'Set paper orientation to landscape.
Device.Orientation = vbPRORLandscape

'Calculate the Left and Top margins (in TWIPS)
LeftMargin = 1000
TopMargin = LeftMargin

'Calculate the actual drawing area on the page (in TWIPS)
PaperWidth = Device.Width - LeftMargin * 2
PaperHeight = Device.Height - TopMargin * 2
    
'To maintain the aspect ratio re-calculate the paper width or height
PaperRatio = Device.Width / Device.Height
'PicRatio = PicObj.Width / PicObj.Height
PicRatio = AspectRatio
If (PaperRatio >= PicRatio) Then
    PaperWidth = PaperHeight * PicRatio
Else
    PaperHeight = PaperWidth / PicRatio
End If
    
'Convert Picture size from HIMETRIC to TWIPS
PicWidth = 567 * (PicObj.Width / 1000)
PicHeight = 567 * (PicObj.Height / 1000)

'Print the drawing
Device.PaintPicture PicObj, LeftMargin, TopMargin, PaperWidth, PaperHeight, 0, 0, PicWidth, PicHeight

'Set font size
OldFontSize = Device.FontSize
Device.FontSize = 10
'Set the location to print the sheet name
Device.CurrentX = LeftMargin + (PaperWidth - TextWidth(Name)) / 2
Device.CurrentY = TopMargin + PaperHeight + TextHeight(Name) / 2
'Print the sheet name
Device.Print Name
'Restore old font-size
Device.FontSize = OldFontSize

Device.EndDoc

End Sub

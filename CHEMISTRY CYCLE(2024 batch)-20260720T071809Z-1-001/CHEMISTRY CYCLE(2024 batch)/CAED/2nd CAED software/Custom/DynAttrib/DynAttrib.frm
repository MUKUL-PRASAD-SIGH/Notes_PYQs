VERSION 5.00
Begin VB.Form frmMain 
   BorderStyle     =   3  'Fixed Dialog
   Caption         =   "Dynamic Attribute Sample"
   ClientHeight    =   3270
   ClientLeft      =   1140
   ClientTop       =   1515
   ClientWidth     =   4815
   LinkTopic       =   "Form1"
   MaxButton       =   0   'False
   MinButton       =   0   'False
   PaletteMode     =   1  'UseZOrder
   ScaleHeight     =   3270
   ScaleWidth      =   4815
   ShowInTaskbar   =   0   'False
   Begin VB.CommandButton cmdCancel 
      Caption         =   "Cancel"
      Height          =   375
      Left            =   3420
      TabIndex        =   4
      Top             =   2820
      Width           =   1275
   End
   Begin VB.CommandButton cmdReadAttribute 
      Caption         =   "Get Attribute"
      Height          =   375
      Left            =   780
      TabIndex        =   3
      Top             =   2820
      Width           =   1275
   End
   Begin VB.CommandButton cmdApply 
      Caption         =   "Apply Attribute"
      Height          =   375
      Left            =   2100
      TabIndex        =   2
      Top             =   2820
      Width           =   1275
   End
   Begin VB.TextBox txtAttribute 
      Height          =   1155
      Left            =   120
      MultiLine       =   -1  'True
      TabIndex        =   0
      Top             =   300
      Width           =   4575
   End
   Begin VB.Label Label3 
      Caption         =   "To view the attributes that have already been applied to an object, select the object and click the Get Attribute button."
      Height          =   435
      Left            =   180
      TabIndex        =   6
      Top             =   2220
      Width           =   4455
   End
   Begin VB.Label Label2 
      Caption         =   $"DynAttrib.frx":0000
      Height          =   615
      Left            =   180
      TabIndex        =   5
      Top             =   1560
      Width           =   4455
   End
   Begin VB.Label Label1 
      Alignment       =   1  'Right Justify
      Caption         =   "Attribute Text:"
      Height          =   195
      Left            =   60
      TabIndex        =   1
      Top             =   60
      Width           =   1095
   End
End
Attribute VB_Name = "frmMain"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Option Explicit
Private objApp As Object
Private objObject As Object
Private objAttrSet As Object
Dim objAttribute As Object
Private AlreadyExists As Boolean

'
' Purpose: This subroutine applies or replaces a dynamic attribute on
'          the selected object.  The dynamic attribute is a single
'          text attribute.
'
' Arguments: No arguments are supplied.  The input string is obtained
'            from the text box.
'
Private Sub cmdApply_Click()
    ' Make sure some text has been keyed in for the attribute.
    If txtAttribute.Text = "" Then
        MsgBox "You must enter some text.", vbOKOnly + vbInformation, "Attribute Sample"
        Exit Sub
    End If

    ' Make sure there is a single item in the select set and get it.
    If objApp.ActiveDocument.SelectSet.Count <> 1 Then
        MsgBox "Select a single object to add/edit attributes.", vbOKOnly + vbInformation, "Attribute Sample"
        Exit Sub
    Else
        ' Set a reference to the selected object.  If it fails then an
        ' invalid object has been selected.  Most Solid Edge persistent objects support
        ' dynamic attributes, although there may be some that do not.  You can see
        ' for yourself whether an object supports dynamic attributes by setting a watch
        ' on the object in debug, and then seeing if the object has an AttributeSets collection.
        On Error Resume Next
        Set objObject = objApp.ActiveDocument.SelectSet(1)
        If Err Then
            MsgBox "You must select a top level part/subassembly.", vbOKOnly + vbInformation, "Attribute Sample"
            Err.Clear
            Exit Sub
        End If
    End If

    If Not objObject.IsAttributeSetPresent("UserDefined") Then
        ' Create the attribute set called 'UserDefined'.
        Set objAttrSet = objObject.AttributeSets.Add("UserDefined")
    
        ' Add the string attribute called 'StringAttribute'.  This sample
        ' just adds a single attribute to the attribute set, but any number
        ' of attributes can be added and they can be of many different types
        ' including: seByte, seInteger, seLong, seSingle, seDouble, seCurrency
        ' seDate, seStringANSI, seStringUnicode, or seBoolean.  These constants
        ' are defined in the Solid Edge Constants type library
        objAttrSet.Add "StringAttribute", seStringANSI
        objAttrSet.StringAttribute = txtAttribute.Text
    Else
        ' Edit the existing attribute.
        objAttrSet.StringAttribute = txtAttribute.Text
    End If
End Sub

Private Sub cmdCancel_Click()
    End
End Sub

Private Sub cmdReadAttribute_Click()
    ' Clear out the text field.
    txtAttribute.Text = ""
    
    ' Make sure there is a single item in the select set and get it.
    If objApp.ActiveDocument.SelectSet.Count <> 1 Then
        MsgBox "Select a single object to add/edit attributes."
        Exit Sub
    Else
        ' Set a reference to the selected object.  If it fails then an
        ' invalid object has been selected.  (The only case I know of
        ' is a part that is part of a subassembly.)
        On Error Resume Next
        Set objObject = objApp.ActiveDocument.SelectSet(1)
        If Err Then
            MsgBox "You must select a Feature or top level part/subassembly.", vbOKOnly + vbInformation, "Attribute Sample"
            Exit Sub
        End If
    End If
    

    
    If objObject.IsAttributeSetPresent("UserDefined") Then
        ' Display the value of the attribute in the text box.
        Set objAttrSet = objObject.AttributeSets("UserDefined")
        Set objAttribute = objAttrSet("StringAttribute")
        txtAttribute.Text = objAttribute.Value
    Else
        MsgBox "The selected object does not have the dynamic attribute.", vbOKOnly + vbInformation, "Attribute Sample"
    End If
End Sub

Private Sub Form_Load()
    ' Connect to Solid Edge.
    On Error Resume Next
    Set objApp = GetObject(, "SolidEdge.Application")
    If Err Then
        MsgBox "Solid Edge must be running", vbOKOnly + vbInformation, "Attribute Sample"
        Set objApp = Nothing
        End
    End If
    On Error GoTo 0
End Sub

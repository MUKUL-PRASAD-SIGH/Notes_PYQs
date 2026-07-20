Option Strict Off
Option Explicit On


Imports System.Runtime.InteropServices
Imports SolidEdgeFileProperties
Imports Microsoft.VisualBasic
Imports Word
Imports SolidEdgeFramework
Imports SolidEdgeDraft


'Author: Greg Chasteen


' Description:  
'
' Issues:   

Public Class Form1
    Inherits System.Windows.Forms.Form



#Region " Windows Form Designer generated code "

    Public Sub New()
        MyBase.New()

        'This call is required by the Windows Form Designer.
        InitializeComponent()

        'Add any initialization after the InitializeComponent() call

    End Sub

    'Form overrides dispose to clean up the component list.
    Protected Overloads Overrides Sub Dispose(ByVal disposing As Boolean)
        If disposing Then
            If Not (components Is Nothing) Then
                components.Dispose()
            End If
        End If
        MyBase.Dispose(disposing)
    End Sub

    'Required by the Windows Form Designer
    Private components As System.ComponentModel.IContainer

    'NOTE: The following procedure is required by the Windows Form Designer
    'It can be modified using the Windows Form Designer.  
    'Do not modify it using the code editor.
    Friend WithEvents Label1 As System.Windows.Forms.Label
    Friend WithEvents Label2 As System.Windows.Forms.Label
    Friend WithEvents Button1 As System.Windows.Forms.Button
    Friend WithEvents Button2 As System.Windows.Forms.Button
    Friend WithEvents Button3 As System.Windows.Forms.Button
    Friend WithEvents RTxtMispelled As System.Windows.Forms.RichTextBox
    Friend WithEvents RTxtSuggestions As System.Windows.Forms.RichTextBox
    Friend WithEvents ListBox1 As System.Windows.Forms.ListBox
    <System.Diagnostics.DebuggerStepThrough()> Private Sub InitializeComponent()
        Me.Label1 = New System.Windows.Forms.Label
        Me.Label2 = New System.Windows.Forms.Label
        Me.Button1 = New System.Windows.Forms.Button
        Me.Button2 = New System.Windows.Forms.Button
        Me.Button3 = New System.Windows.Forms.Button
        Me.RTxtMispelled = New System.Windows.Forms.RichTextBox
        Me.RTxtSuggestions = New System.Windows.Forms.RichTextBox
        Me.ListBox1 = New System.Windows.Forms.ListBox
        Me.SuspendLayout()
        '
        'Label1
        '
        Me.Label1.Location = New System.Drawing.Point(16, 8)
        Me.Label1.Name = "Label1"
        Me.Label1.Size = New System.Drawing.Size(104, 16)
        Me.Label1.TabIndex = 1
        Me.Label1.Text = "Not in dictionary:"
        '
        'Label2
        '
        Me.Label2.Location = New System.Drawing.Point(16, 120)
        Me.Label2.Name = "Label2"
        Me.Label2.Size = New System.Drawing.Size(168, 16)
        Me.Label2.TabIndex = 2
        Me.Label2.Text = "Suggestions:"
        '
        'Button1
        '
        Me.Button1.Location = New System.Drawing.Point(328, 24)
        Me.Button1.Name = "Button1"
        Me.Button1.Size = New System.Drawing.Size(80, 24)
        Me.Button1.TabIndex = 4
        Me.Button1.Text = "Ignore"
        '
        'Button2
        '
        Me.Button2.Location = New System.Drawing.Point(328, 144)
        Me.Button2.Name = "Button2"
        Me.Button2.Size = New System.Drawing.Size(80, 32)
        Me.Button2.TabIndex = 5
        Me.Button2.Text = "Change"
        '
        'Button3
        '
        Me.Button3.Location = New System.Drawing.Point(328, 224)
        Me.Button3.Name = "Button3"
        Me.Button3.Size = New System.Drawing.Size(72, 32)
        Me.Button3.TabIndex = 6
        Me.Button3.Text = "Cancel"
        '
        'RTxtMispelled
        '
        Me.RTxtMispelled.Location = New System.Drawing.Point(16, 24)
        Me.RTxtMispelled.Name = "RTxtMispelled"
        Me.RTxtMispelled.ReadOnly = True
        Me.RTxtMispelled.Size = New System.Drawing.Size(304, 72)
        Me.RTxtMispelled.TabIndex = 7
        Me.RTxtMispelled.Text = ""
        '
        'RTxtSuggestions
        '
        Me.RTxtSuggestions.AutoWordSelection = True
        Me.RTxtSuggestions.Location = New System.Drawing.Point(8, 280)
        Me.RTxtSuggestions.Name = "RTxtSuggestions"
        Me.RTxtSuggestions.Size = New System.Drawing.Size(304, 96)
        Me.RTxtSuggestions.TabIndex = 8
        Me.RTxtSuggestions.Text = ""
        Me.RTxtSuggestions.Visible = False
        '
        'ListBox1
        '
        Me.ListBox1.Location = New System.Drawing.Point(16, 144)
        Me.ListBox1.Name = "ListBox1"
        Me.ListBox1.Size = New System.Drawing.Size(304, 95)
        Me.ListBox1.TabIndex = 9
        '
        'Form1
        '
        Me.AutoScaleBaseSize = New System.Drawing.Size(5, 13)
        Me.ClientSize = New System.Drawing.Size(424, 266)
        Me.Controls.Add(Me.ListBox1)
        Me.Controls.Add(Me.RTxtSuggestions)
        Me.Controls.Add(Me.RTxtMispelled)
        Me.Controls.Add(Me.Button3)
        Me.Controls.Add(Me.Button2)
        Me.Controls.Add(Me.Button1)
        Me.Controls.Add(Me.Label2)
        Me.Controls.Add(Me.Label1)
        Me.MaximizeBox = False
        Me.MinimizeBox = False
        Me.Name = "Form1"
        Me.StartPosition = System.Windows.Forms.FormStartPosition.CenterScreen
        Me.Text = "Solid Edge Spell Checker"
        Me.TopMost = True
        Me.ResumeLayout(False)

    End Sub

#End Region


    




    Private Sub Button3_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles Button3.Click
        Me.Hide()
        Me.Dispose()


        If Not (SpellCheckForm Is Nothing) Then
            SpellCheckForm.Dispose()
            SpellCheckForm = Nothing
        End If

        If Not (MSWord Is Nothing) Then
            MSWord.Quit()
            Marshal.ReleaseComObject(MSWord)
            MSWord = Nothing
        End If

        If Not (objSheets Is Nothing) Then
            Marshal.ReleaseComObject(objSheets)
            objSheets = Nothing
        End If

        If Not (objSEApp Is Nothing) Then
            Marshal.ReleaseComObject(objSEApp)
            objSEApp = Nothing
        End If

        If Not (objDraftDoc Is Nothing) Then
            Marshal.ReleaseComObject(objDraftDoc)
            objDraftDoc = Nothing
        End If



        CleanUpMemory()
    End Sub

    Private Sub Form1_Load(ByVal sender As Object, ByVal e As System.EventArgs) Handles MyBase.Load


        'ProcessActiveDraftDocument()
        'Me.LstMispelled.Items.Add(strTextStringToBeChecked)
        Me.RTxtMispelled.AppendText(strTextStringToBeChecked)

        Me.RTxtMispelled.SelectionStart = Me.RTxtMispelled.Find(strParsedString)
        Me.RTxtMispelled.SelectionColor = System.Drawing.Color.Red


        'originally put in rich text box control but had to double click to select replacement word
        '''''For Each w In suggestions
        '''''    Me.RTxtSuggestions.AppendText(w + vbLf)
        '''''Next

        ' instead put into listbox single click will select the word
        For Each w In suggestions
            Me.ListBox1.Items.Add(w)
        Next

    End Sub

    Private Sub Button2_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles Button2.Click
        'Dim intIndex As Integer

        'strTextStringCorrected = Me.RTxtSuggestions.SelectedText()

        strTextStringCorrected = Me.ListBox1.SelectedItem
        If strTextStringCorrected = "" Then
            MsgBox("Replacement word not selected.  Please double click the replacement word")
            Exit Sub
        End If



        Me.RTxtMispelled.Clear()
        Me.ListBox1.Items.Clear()
        ' Me.RTxtSuggestions.Clear()
        suggestions.Clear()
        Me.Hide()



    End Sub

    Private Sub Button1_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles Button1.Click
        strTextStringCorrected = ""
        Me.RTxtMispelled.Clear()
        'Me.RTxtSuggestions.Clear()
        Me.ListBox1.Items.Clear()
        suggestions.Clear()
        Me.Hide()
    End Sub

    Private Sub RTxtSuggestions_TextChanged(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles RTxtSuggestions.TextChanged

    End Sub

    Private Sub RTxtSuggestions_Click(ByVal sender As Object, ByVal e As System.EventArgs) Handles RTxtSuggestions.Click

    End Sub

    Private Sub ListBox1_SelectedIndexChanged(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles ListBox1.SelectedIndexChanged

    End Sub
End Class

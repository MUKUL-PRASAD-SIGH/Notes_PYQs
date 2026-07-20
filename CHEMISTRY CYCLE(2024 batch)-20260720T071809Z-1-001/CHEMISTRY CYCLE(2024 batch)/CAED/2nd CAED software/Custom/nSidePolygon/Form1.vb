Imports System.Object

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
    Friend WithEvents GroupBox1 As System.Windows.Forms.GroupBox
    Friend WithEvents radRadFrmFlt As System.Windows.Forms.RadioButton
    Friend WithEvents radRadFrmPt As System.Windows.Forms.RadioButton
    Friend WithEvents radFlatLength As System.Windows.Forms.RadioButton
    Friend WithEvents lblNumSides As System.Windows.Forms.Label
    Friend WithEvents txtNumSides As System.Windows.Forms.TextBox
    Friend WithEvents chkConstrain As System.Windows.Forms.CheckBox
    Friend WithEvents labStatus As System.Windows.Forms.Label
    Friend WithEvents txtSize As System.Windows.Forms.TextBox
    Friend WithEvents labType As System.Windows.Forms.Label
    Friend WithEvents pbxFL As System.Windows.Forms.PictureBox
    Friend WithEvents pbxRFP As System.Windows.Forms.PictureBox
    Friend WithEvents pbxRFF As System.Windows.Forms.PictureBox
    <System.Diagnostics.DebuggerStepThrough()> Private Sub InitializeComponent()
        Dim resources As System.Resources.ResourceManager = New System.Resources.ResourceManager(GetType(Form1))
        Me.GroupBox1 = New System.Windows.Forms.GroupBox
        Me.radFlatLength = New System.Windows.Forms.RadioButton
        Me.radRadFrmPt = New System.Windows.Forms.RadioButton
        Me.radRadFrmFlt = New System.Windows.Forms.RadioButton
        Me.labType = New System.Windows.Forms.Label
        Me.lblNumSides = New System.Windows.Forms.Label
        Me.txtSize = New System.Windows.Forms.TextBox
        Me.txtNumSides = New System.Windows.Forms.TextBox
        Me.chkConstrain = New System.Windows.Forms.CheckBox
        Me.pbxFL = New System.Windows.Forms.PictureBox
        Me.labStatus = New System.Windows.Forms.Label
        Me.pbxRFP = New System.Windows.Forms.PictureBox
        Me.pbxRFF = New System.Windows.Forms.PictureBox
        Me.GroupBox1.SuspendLayout()
        Me.SuspendLayout()
        '
        'GroupBox1
        '
        Me.GroupBox1.Controls.Add(Me.radFlatLength)
        Me.GroupBox1.Controls.Add(Me.radRadFrmPt)
        Me.GroupBox1.Controls.Add(Me.radRadFrmFlt)
        Me.GroupBox1.Location = New System.Drawing.Point(7, 7)
        Me.GroupBox1.Name = "GroupBox1"
        Me.GroupBox1.Size = New System.Drawing.Size(140, 90)
        Me.GroupBox1.TabIndex = 0
        Me.GroupBox1.TabStop = False
        Me.GroupBox1.Text = "Definition Type"
        '
        'radFlatLength
        '
        Me.radFlatLength.Location = New System.Drawing.Point(7, 62)
        Me.radFlatLength.Name = "radFlatLength"
        Me.radFlatLength.Size = New System.Drawing.Size(113, 21)
        Me.radFlatLength.TabIndex = 2
        Me.radFlatLength.Text = "Flat Length"
        '
        'radRadFrmPt
        '
        Me.radRadFrmPt.Location = New System.Drawing.Point(7, 42)
        Me.radRadFrmPt.Name = "radRadFrmPt"
        Me.radRadFrmPt.Size = New System.Drawing.Size(113, 20)
        Me.radRadFrmPt.TabIndex = 1
        Me.radRadFrmPt.Text = "Radius from point"
        '
        'radRadFrmFlt
        '
        Me.radRadFrmFlt.Checked = True
        Me.radRadFrmFlt.Location = New System.Drawing.Point(7, 21)
        Me.radRadFrmFlt.Name = "radRadFrmFlt"
        Me.radRadFrmFlt.Size = New System.Drawing.Size(113, 21)
        Me.radRadFrmFlt.TabIndex = 0
        Me.radRadFrmFlt.TabStop = True
        Me.radRadFrmFlt.Text = "Radius from flat"
        '
        'labType
        '
        Me.labType.Location = New System.Drawing.Point(7, 104)
        Me.labType.Name = "labType"
        Me.labType.Size = New System.Drawing.Size(93, 21)
        Me.labType.TabIndex = 1
        Me.labType.Text = "Label1"
        '
        'lblNumSides
        '
        Me.lblNumSides.Location = New System.Drawing.Point(7, 153)
        Me.lblNumSides.Name = "lblNumSides"
        Me.lblNumSides.Size = New System.Drawing.Size(93, 20)
        Me.lblNumSides.TabIndex = 2
        Me.lblNumSides.Text = "Number of sides:"
        '
        'txtSize
        '
        Me.txtSize.Location = New System.Drawing.Point(40, 125)
        Me.txtSize.Name = "txtSize"
        Me.txtSize.Size = New System.Drawing.Size(107, 20)
        Me.txtSize.TabIndex = 3
        Me.txtSize.Text = "TextBox1"
        '
        'txtNumSides
        '
        Me.txtNumSides.Location = New System.Drawing.Point(40, 180)
        Me.txtNumSides.Name = "txtNumSides"
        Me.txtNumSides.Size = New System.Drawing.Size(107, 20)
        Me.txtNumSides.TabIndex = 4
        Me.txtNumSides.Text = "6"
        '
        'chkConstrain
        '
        Me.chkConstrain.Location = New System.Drawing.Point(7, 215)
        Me.chkConstrain.Name = "chkConstrain"
        Me.chkConstrain.Size = New System.Drawing.Size(140, 14)
        Me.chkConstrain.TabIndex = 5
        Me.chkConstrain.Text = "Apply Relationships"
        '
        'pbxFL
        '
        Me.pbxFL.BorderStyle = System.Windows.Forms.BorderStyle.Fixed3D
        Me.pbxFL.Image = CType(resources.GetObject("pbxFL.Image"), System.Drawing.Image)
        Me.pbxFL.Location = New System.Drawing.Point(152, 8)
        Me.pbxFL.Name = "pbxFL"
        Me.pbxFL.Size = New System.Drawing.Size(216, 216)
        Me.pbxFL.SizeMode = System.Windows.Forms.PictureBoxSizeMode.StretchImage
        Me.pbxFL.TabIndex = 6
        Me.pbxFL.TabStop = False
        '
        'labStatus
        '
        Me.labStatus.BorderStyle = System.Windows.Forms.BorderStyle.Fixed3D
        Me.labStatus.Location = New System.Drawing.Point(7, 236)
        Me.labStatus.Name = "labStatus"
        Me.labStatus.Size = New System.Drawing.Size(361, 27)
        Me.labStatus.TabIndex = 7
        Me.labStatus.Text = "Label1"
        '
        'pbxRFP
        '
        Me.pbxRFP.BorderStyle = System.Windows.Forms.BorderStyle.Fixed3D
        Me.pbxRFP.Image = CType(resources.GetObject("pbxRFP.Image"), System.Drawing.Image)
        Me.pbxRFP.Location = New System.Drawing.Point(152, 8)
        Me.pbxRFP.Name = "pbxRFP"
        Me.pbxRFP.Size = New System.Drawing.Size(216, 216)
        Me.pbxRFP.SizeMode = System.Windows.Forms.PictureBoxSizeMode.StretchImage
        Me.pbxRFP.TabIndex = 8
        Me.pbxRFP.TabStop = False
        '
        'pbxRFF
        '
        Me.pbxRFF.BorderStyle = System.Windows.Forms.BorderStyle.Fixed3D
        Me.pbxRFF.Image = CType(resources.GetObject("pbxRFF.Image"), System.Drawing.Image)
        Me.pbxRFF.Location = New System.Drawing.Point(152, 8)
        Me.pbxRFF.Name = "pbxRFF"
        Me.pbxRFF.Size = New System.Drawing.Size(216, 216)
        Me.pbxRFF.SizeMode = System.Windows.Forms.PictureBoxSizeMode.StretchImage
        Me.pbxRFF.TabIndex = 9
        Me.pbxRFF.TabStop = False
        '
        'Form1
        '
        Me.AutoScaleBaseSize = New System.Drawing.Size(5, 13)
        Me.ClientSize = New System.Drawing.Size(378, 270)
        Me.Controls.Add(Me.pbxRFF)
        Me.Controls.Add(Me.pbxRFP)
        Me.Controls.Add(Me.labStatus)
        Me.Controls.Add(Me.pbxFL)
        Me.Controls.Add(Me.chkConstrain)
        Me.Controls.Add(Me.txtNumSides)
        Me.Controls.Add(Me.txtSize)
        Me.Controls.Add(Me.lblNumSides)
        Me.Controls.Add(Me.labType)
        Me.Controls.Add(Me.GroupBox1)
        Me.FormBorderStyle = System.Windows.Forms.FormBorderStyle.FixedDialog
        Me.Name = "Form1"
        Me.StartPosition = System.Windows.Forms.FormStartPosition.CenterScreen
        Me.Text = "N-Sided Polygon"
        Me.GroupBox1.ResumeLayout(False)
        Me.ResumeLayout(False)

    End Sub

#End Region

    'Private Declarations
    Dim objApp As SolidEdgeFramework.Application
    Dim WithEvents objMouse As SolidEdgeFramework.Mouse
    Dim WithEvents objCmd As SolidEdgeFramework.Command
    Const WelcomeText = "Set options to define the polygon, or click to place it"
    Dim Origin(1) As Double
    Dim UOM As SolidEdgeFramework.UnitsOfMeasure
    'This variable is just to improve readability
    Dim UnitDistance As SolidEdgeConstants.UnitTypeConstants = SolidEdgeConstants.UnitTypeConstants.igUnitDistance
    'For readability
    Dim LineEnd As SolidEdgeConstants.KeypointIndexConstants = SolidEdgeConstants.KeypointIndexConstants.igLineEnd
    Dim LineStart As SolidEdgeConstants.KeypointIndexConstants = SolidEdgeConstants.KeypointIndexConstants.igLineStart

    'Form1 subs
    Private Sub Form1_Load(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles MyBase.Load
        labStatus.Text = "Getting Solid Edge"
        labType.Text = "Radius from flat"
        Try
            'Get Solid Edge
            objApp = GetObject(, "SolidEdge.Application")
            'Commands created with the seNoDeactivate constant run until deactivate is called;
            objCmd = objApp.CreateCommand(SolidEdgeConstants.seCmdFlag.seNoDeactivate)
            objMouse = objCmd.Mouse
            objCmd.Start()
            objApp.Activate()
            labStatus.Text = WelcomeText
        Catch ex As Exception
            Call MsgBox("Solid Edge must be running before you start this macro.", MsgBoxStyle.Critical, "Place Polygon")
            End
        End Try
    End Sub
    Private Sub objCmd_Activate() Handles objCmd.Activate

        Try
            If objApp.ActiveDocument.ActiveSketch Is Nothing Then
                If Not objApp.activedocment.type = 2 Then 'igDraftDocument
                    MsgBox("This macro must be run from within Draft or a sketching environment.")
                    End
                End If
            End If

            ' Get a reference to the UnitsOfMeasure object.
            UOM = objApp.ActiveDocument.UnitsOfMeasure

            ' Initialize size
            txtSize.Text = UOM.FormatUnit(UnitDistance, 0.5 * 0.0254)

            objMouse.ClearLocateFilter()
            objMouse.AddToLocateFilter(SolidEdgeConstants.seLocateFilterConstants.seLocateGeometry2d)
            objMouse.AddToLocateFilter(SolidEdgeConstants.seLocateFilterConstants.seLocateKeyPoint)

        Catch ex As Exception

        End Try

    End Sub

    Private Sub objCmd_Terminate() Handles objCmd.Terminate

        'Terminate the program
        End

    End Sub

    Private Sub objMouse_MouseDown(ByVal sButton As Short, ByVal sShift As Short, ByVal dX As Double, ByVal dY As Double, ByVal dZ As Double, ByVal pWindowDispatch As Object, ByVal lKeyPointType As Integer, ByVal pGraphicDispatch As Object) Handles objMouse.MouseClick
        Dim cMsg As String
        Dim Profile As SolidEdgePart.Profile
        Dim ProfileSets As Object
        Dim Profiles As SolidEdgePart.Profiles
        Dim Lines As SolidEdgeFrameworkSupport.Lines2d
        Dim SegmentLength As Double
        Dim Relations As SolidEdgeFrameworkSupport.Relations2d
        Dim P1(1) As Double, P2(1) As Double
        Dim nSides As Integer
        Dim nSide As Integer

        Dim nAngle As Double
        Dim nRadius As Double
        Dim L() As SolidEdgeFrameworkSupport.Line2d
        Const PI = 3.14159265358979

        Try
            If Not sButton = 1 Then Exit Try
            If objApp.ActiveEnvironment.ToUpper = "LAYOUTINPART" _
            Or objApp.ActiveEnvironment.ToUpper = "PROFILE" Then
                Profile = objApp.ActiveDocument.ActiveSketch
                Lines = Profile.Lines2d
                Relations = Profile.Relations2d
            ElseIf (Not 0 > objApp.ActiveEnvironment.ToUpper.IndexOf("DETAIL")) _
            Or objApp.ActiveEnvironment.ToUpper = "TWODMODEL" Then
                ProfileSets = objApp.ActiveDocument.ActiveSheet
                Lines = ProfileSets.Lines2d
                Relations = ProfileSets.Relations2d
            Else
                MsgBox("You are not in a valid environment", vbOKOnly + vbCritical)
                End
            End If

            nSides = Int(Val(txtNumSides.Text))

            If nSides < 3 Then
                MsgBox("The minimum number of sides is 3", vbInformation + vbOKOnly, "Solid Edge Polygon Tool")
                txtNumSides.Text = 3
                Exit Try
            ElseIf nSides > 360 Then
                MsgBox("The maximum number of sides is 360", vbInformation + vbOKOnly, "Solid Edge Polygon Tool")
                txtNumSides.Text = 360
                Exit Try
            End If

            If nSides > 20 And chkConstrain.Checked Then
                If MsgBox("The number of sides with automatic constraining will take time to generate. Select yes to autoconstrain, No to abort the process", vbInformation + vbYesNo, "Solid Edge Polygon Tool") = vbNo Then
                    Exit Sub
                End If
            End If

            ReDim L(nSides - 1)

            nAngle = 360.0# / nSides
            nAngle = nAngle * PI / 180.0#

            If radRadFrmFlt.Checked Then
                ' from flat
                nRadius = objApp.ActiveDocument.UnitsOfMeasure.ParseUnit(UnitDistance, txtSize.Text)
                SegmentLength = 2 * nRadius * (Math.Tan(nAngle / 2.0#))
                P2(0) = -(nRadius - dX)
                P2(1) = -((SegmentLength / 2.0#) - dY)
            ElseIf radRadFrmPt.Checked Then
                ' point
                nRadius = objApp.ActiveDocument.UnitsOfMeasure.ParseUnit(UnitDistance, txtSize.Text)
                SegmentLength = 2 * Math.Sin(nAngle / 2) * nRadius
                P2(0) = -((Math.Cos(nAngle / 2) * nRadius) - dX)
                P2(1) = -((SegmentLength / 2.0#) - dY)
            Else
                ' flat distance
                SegmentLength = objApp.ActiveDocument.UnitsOfMeasure.ParseUnit(UnitDistance, txtSize.Text)
                P2(0) = -((SegmentLength / 2.0#) / (Math.Tan(nAngle / 2.0#)) - dX)
                P2(1) = -((SegmentLength / 2.0#) - dY)
            End If

            For nSide = 0 To nSides - 1
                P1(0) = P2(0)
                P1(1) = P2(1)
                P2(0) = P1(0) + (Math.Sin(nAngle * nSide) * SegmentLength)
                P2(1) = P1(1) + (Math.Cos(nAngle * nSide) * SegmentLength)
                L(nSide) = Lines.AddBy2Points(P1(0), P1(1), P2(0), P2(1))
                labStatus.Text = "Creating line: " & Format$(nSide, "0")
            Next
            If chkConstrain.Checked Then
                For nSide = 0 To nSides - 1
                    labStatus.Text = "Adding connect: " & Format$(nSide, "0")
                    If nSide = nSides - 1 Then
                        Call Relations.AddKeypoint(L(nSide), LineEnd, L(0), LineStart)
                    Else
                        Call Relations.AddKeypoint(L(nSide), LineEnd, L(nSide + 1), LineStart)
                        Call Relations.AddEqual(L(nSide), L(nSide + 1))
                    End If
                Next
                objApp.StartCommand(32876) 'View > Refresh
            End If
        Catch ex As Exception
            cMsg = "Error # " & Str(Err.Number) & " was generated by " _
                & Err.Source & Chr(13) & "( " & Err.Description & " )"
            Call MsgBox(cMsg, vbInformation + vbOKOnly, "Solid Edge Polygon Tool")
        End Try

        labStatus.Text = WelcomeText

    End Sub

    Private Sub radRadFrmFlt_CheckedChanged(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles radRadFrmFlt.CheckedChanged
        Call DefinitionTypeChanged()
    End Sub

    Private Sub radRadFrmPt_CheckedChanged(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles radRadFrmPt.CheckedChanged
        Call DefinitionTypeChanged()
    End Sub

    Private Sub radFlatLength_CheckedChanged(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles radFlatLength.CheckedChanged
        Call DefinitionTypeChanged()
    End Sub
    Private Sub DefinitionTypeChanged()
        If radRadFrmFlt.Checked Then
            labType.Text = "Radius from flat"
            pbxRFF.Visible = True
            pbxRFP.Visible = False
            pbxFL.Visible = False
        ElseIf radRadFrmPt.Checked Then
            labType.Text = "Radius from point"
            pbxRFF.Visible = False
            pbxRFP.Visible = True
            pbxFL.Visible = False
        Else
            labType.Text = "Flat length"
            pbxRFF.Visible = False
            pbxRFP.Visible = False
            pbxFL.Visible = True
        End If

    End Sub

End Class

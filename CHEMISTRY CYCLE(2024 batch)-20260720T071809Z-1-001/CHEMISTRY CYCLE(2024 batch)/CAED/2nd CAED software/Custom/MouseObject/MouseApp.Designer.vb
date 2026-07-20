<Global.Microsoft.VisualBasic.CompilerServices.DesignerGenerated()> _
Partial Class MouseApp
    Inherits System.Windows.Forms.Form

    'Form overrides dispose to clean up the component list.
    <System.Diagnostics.DebuggerNonUserCode()> _
    Protected Overrides Sub Dispose(ByVal disposing As Boolean)
        If disposing AndAlso components IsNot Nothing Then
            components.Dispose()
        End If
        MyBase.Dispose(disposing)
    End Sub

    'Required by the Windows Form Designer
    Private components As System.ComponentModel.IContainer

    'NOTE: The following procedure is required by the Windows Form Designer
    'It can be modified using the Windows Form Designer.  
    'Do not modify it using the code editor.
    <System.Diagnostics.DebuggerStepThrough()> _
    Private Sub InitializeComponent()
        Me.GroupBox1 = New System.Windows.Forms.GroupBox
        Me.chkEnableMove = New System.Windows.Forms.CheckBox
        Me.chkEnableDrag = New System.Windows.Forms.CheckBox
        Me.chkEnableMouse = New System.Windows.Forms.CheckBox
        Me.GroupBox2 = New System.Windows.Forms.GroupBox
        Me.optDynRect = New System.Windows.Forms.RadioButton
        Me.optDynCircle = New System.Windows.Forms.RadioButton
        Me.optDynLine = New System.Windows.Forms.RadioButton
        Me.optDynOff = New System.Windows.Forms.RadioButton
        Me.GroupBox3 = New System.Windows.Forms.GroupBox
        Me.chkInterDoc = New System.Windows.Forms.CheckBox
        Me.txtPause = New System.Windows.Forms.TextBox
        Me.lblPause = New System.Windows.Forms.Label
        Me.optLocQPick = New System.Windows.Forms.RadioButton
        Me.optLocSimple = New System.Windows.Forms.RadioButton
        Me.optLocOff = New System.Windows.Forms.RadioButton
        Me.GroupBox4 = New System.Windows.Forms.GroupBox
        Me.txtWindow = New System.Windows.Forms.TextBox
        Me.lblWindow = New System.Windows.Forms.Label
        Me.GroupBox7 = New System.Windows.Forms.GroupBox
        Me.optUserUnits = New System.Windows.Forms.RadioButton
        Me.optModelUnits = New System.Windows.Forms.RadioButton
        Me.GroupBox6 = New System.Windows.Forms.GroupBox
        Me.optWindowCoord = New System.Windows.Forms.RadioButton
        Me.optModelCoord = New System.Windows.Forms.RadioButton
        Me.txtCurMouseEvent = New System.Windows.Forms.TextBox
        Me.lblCurMouseEvent = New System.Windows.Forms.Label
        Me.lblState = New System.Windows.Forms.Label
        Me.lblGrapicObj = New System.Windows.Forms.Label
        Me.lblGraphicName = New System.Windows.Forms.Label
        Me.lblKeyptType = New System.Windows.Forms.Label
        Me.lblShift = New System.Windows.Forms.Label
        Me.lblButton = New System.Windows.Forms.Label
        Me.txtState = New System.Windows.Forms.TextBox
        Me.txtGraphicObj = New System.Windows.Forms.TextBox
        Me.txtGraphicName = New System.Windows.Forms.TextBox
        Me.txtKeypType = New System.Windows.Forms.TextBox
        Me.txtShift = New System.Windows.Forms.TextBox
        Me.txtButton = New System.Windows.Forms.TextBox
        Me.txtZCoord = New System.Windows.Forms.TextBox
        Me.txtYCoord = New System.Windows.Forms.TextBox
        Me.txtXCoord = New System.Windows.Forms.TextBox
        Me.lblZCoord = New System.Windows.Forms.Label
        Me.lblYCoord = New System.Windows.Forms.Label
        Me.lblXCoord = New System.Windows.Forms.Label
        Me.GroupBox5 = New System.Windows.Forms.GroupBox
        Me.optWindowAll = New System.Windows.Forms.RadioButton
        Me.optWindowGraph = New System.Windows.Forms.RadioButton
        Me.GroupBox8 = New System.Windows.Forms.GroupBox
        Me.btnClearAll = New System.Windows.Forms.Button
        Me.lstLocate = New System.Windows.Forms.ListBox
        Me.GroupBox9 = New System.Windows.Forms.GroupBox
        Me.txtGraphicType = New System.Windows.Forms.TextBox
        Me.txtPointOnGraphicZ = New System.Windows.Forms.TextBox
        Me.txtPointOnGraphicY = New System.Windows.Forms.TextBox
        Me.txtPointOnGraphicX = New System.Windows.Forms.TextBox
        Me.txtPointOnGraphicFlag = New System.Windows.Forms.TextBox
        Me.btnCancel = New System.Windows.Forms.Button
        Me.GroupBox1.SuspendLayout()
        Me.GroupBox2.SuspendLayout()
        Me.GroupBox3.SuspendLayout()
        Me.GroupBox4.SuspendLayout()
        Me.GroupBox7.SuspendLayout()
        Me.GroupBox6.SuspendLayout()
        Me.GroupBox5.SuspendLayout()
        Me.GroupBox8.SuspendLayout()
        Me.GroupBox9.SuspendLayout()
        Me.SuspendLayout()
        '
        'GroupBox1
        '
        Me.GroupBox1.Controls.Add(Me.chkEnableMove)
        Me.GroupBox1.Controls.Add(Me.chkEnableDrag)
        Me.GroupBox1.Controls.Add(Me.chkEnableMouse)
        Me.GroupBox1.Location = New System.Drawing.Point(13, 5)
        Me.GroupBox1.Name = "GroupBox1"
        Me.GroupBox1.Size = New System.Drawing.Size(63, 85)
        Me.GroupBox1.TabIndex = 0
        Me.GroupBox1.TabStop = False
        Me.GroupBox1.Text = "Enabled"
        '
        'chkEnableMove
        '
        Me.chkEnableMove.AutoSize = True
        Me.chkEnableMove.Location = New System.Drawing.Point(4, 55)
        Me.chkEnableMove.Margin = New System.Windows.Forms.Padding(1)
        Me.chkEnableMove.Name = "chkEnableMove"
        Me.chkEnableMove.Size = New System.Drawing.Size(53, 17)
        Me.chkEnableMove.TabIndex = 2
        Me.chkEnableMove.Text = "Move"
        Me.chkEnableMove.UseVisualStyleBackColor = True
        '
        'chkEnableDrag
        '
        Me.chkEnableDrag.AutoSize = True
        Me.chkEnableDrag.Location = New System.Drawing.Point(4, 36)
        Me.chkEnableDrag.Margin = New System.Windows.Forms.Padding(1)
        Me.chkEnableDrag.Name = "chkEnableDrag"
        Me.chkEnableDrag.Size = New System.Drawing.Size(49, 17)
        Me.chkEnableDrag.TabIndex = 1
        Me.chkEnableDrag.Text = "Drag"
        Me.chkEnableDrag.UseVisualStyleBackColor = True
        '
        'chkEnableMouse
        '
        Me.chkEnableMouse.AutoSize = True
        Me.chkEnableMouse.Checked = True
        Me.chkEnableMouse.CheckState = System.Windows.Forms.CheckState.Checked
        Me.chkEnableMouse.Location = New System.Drawing.Point(4, 17)
        Me.chkEnableMouse.Margin = New System.Windows.Forms.Padding(1)
        Me.chkEnableMouse.Name = "chkEnableMouse"
        Me.chkEnableMouse.Size = New System.Drawing.Size(58, 17)
        Me.chkEnableMouse.TabIndex = 0
        Me.chkEnableMouse.Text = "Mouse"
        Me.chkEnableMouse.UseVisualStyleBackColor = True
        '
        'GroupBox2
        '
        Me.GroupBox2.Controls.Add(Me.optDynRect)
        Me.GroupBox2.Controls.Add(Me.optDynCircle)
        Me.GroupBox2.Controls.Add(Me.optDynLine)
        Me.GroupBox2.Controls.Add(Me.optDynOff)
        Me.GroupBox2.Location = New System.Drawing.Point(82, 5)
        Me.GroupBox2.Name = "GroupBox2"
        Me.GroupBox2.Size = New System.Drawing.Size(97, 108)
        Me.GroupBox2.TabIndex = 1
        Me.GroupBox2.TabStop = False
        Me.GroupBox2.Text = "Dynamics Mode"
        '
        'optDynRect
        '
        Me.optDynRect.AutoSize = True
        Me.optDynRect.Location = New System.Drawing.Point(4, 73)
        Me.optDynRect.Margin = New System.Windows.Forms.Padding(1)
        Me.optDynRect.Name = "optDynRect"
        Me.optDynRect.Size = New System.Drawing.Size(74, 17)
        Me.optDynRect.TabIndex = 3
        Me.optDynRect.Text = "Rectangle"
        Me.optDynRect.UseVisualStyleBackColor = True
        '
        'optDynCircle
        '
        Me.optDynCircle.AutoSize = True
        Me.optDynCircle.Location = New System.Drawing.Point(4, 54)
        Me.optDynCircle.Margin = New System.Windows.Forms.Padding(1)
        Me.optDynCircle.Name = "optDynCircle"
        Me.optDynCircle.Size = New System.Drawing.Size(51, 17)
        Me.optDynCircle.TabIndex = 2
        Me.optDynCircle.Text = "Circle"
        Me.optDynCircle.UseVisualStyleBackColor = True
        '
        'optDynLine
        '
        Me.optDynLine.AutoSize = True
        Me.optDynLine.Location = New System.Drawing.Point(4, 35)
        Me.optDynLine.Margin = New System.Windows.Forms.Padding(1)
        Me.optDynLine.Name = "optDynLine"
        Me.optDynLine.Size = New System.Drawing.Size(45, 17)
        Me.optDynLine.TabIndex = 1
        Me.optDynLine.Text = "Line"
        Me.optDynLine.UseVisualStyleBackColor = True
        '
        'optDynOff
        '
        Me.optDynOff.AutoSize = True
        Me.optDynOff.Location = New System.Drawing.Point(4, 16)
        Me.optDynOff.Margin = New System.Windows.Forms.Padding(1)
        Me.optDynOff.Name = "optDynOff"
        Me.optDynOff.Size = New System.Drawing.Size(39, 17)
        Me.optDynOff.TabIndex = 0
        Me.optDynOff.Text = "Off"
        Me.optDynOff.UseVisualStyleBackColor = True
        '
        'GroupBox3
        '
        Me.GroupBox3.Controls.Add(Me.chkInterDoc)
        Me.GroupBox3.Controls.Add(Me.txtPause)
        Me.GroupBox3.Controls.Add(Me.lblPause)
        Me.GroupBox3.Controls.Add(Me.optLocQPick)
        Me.GroupBox3.Controls.Add(Me.optLocSimple)
        Me.GroupBox3.Controls.Add(Me.optLocOff)
        Me.GroupBox3.Location = New System.Drawing.Point(185, 5)
        Me.GroupBox3.Name = "GroupBox3"
        Me.GroupBox3.Size = New System.Drawing.Size(110, 120)
        Me.GroupBox3.TabIndex = 2
        Me.GroupBox3.TabStop = False
        Me.GroupBox3.Text = "Locate"
        '
        'chkInterDoc
        '
        Me.chkInterDoc.AutoSize = True
        Me.chkInterDoc.Location = New System.Drawing.Point(5, 94)
        Me.chkInterDoc.Margin = New System.Windows.Forms.Padding(1)
        Me.chkInterDoc.Name = "chkInterDoc"
        Me.chkInterDoc.Size = New System.Drawing.Size(67, 17)
        Me.chkInterDoc.TabIndex = 5
        Me.chkInterDoc.Text = "InterDoc"
        Me.chkInterDoc.UseVisualStyleBackColor = True
        '
        'txtPause
        '
        Me.txtPause.Location = New System.Drawing.Point(41, 72)
        Me.txtPause.Margin = New System.Windows.Forms.Padding(1)
        Me.txtPause.Name = "txtPause"
        Me.txtPause.Size = New System.Drawing.Size(31, 20)
        Me.txtPause.TabIndex = 4
        '
        'lblPause
        '
        Me.lblPause.AutoSize = True
        Me.lblPause.Location = New System.Drawing.Point(4, 75)
        Me.lblPause.Name = "lblPause"
        Me.lblPause.Size = New System.Drawing.Size(37, 13)
        Me.lblPause.TabIndex = 3
        Me.lblPause.Text = "Pause"
        '
        'optLocQPick
        '
        Me.optLocQPick.AutoSize = True
        Me.optLocQPick.Location = New System.Drawing.Point(4, 54)
        Me.optLocQPick.Margin = New System.Windows.Forms.Padding(1)
        Me.optLocQPick.Name = "optLocQPick"
        Me.optLocQPick.Size = New System.Drawing.Size(74, 17)
        Me.optLocQPick.TabIndex = 2
        Me.optLocQPick.Text = "QuickPick"
        Me.optLocQPick.UseVisualStyleBackColor = True
        '
        'optLocSimple
        '
        Me.optLocSimple.AutoSize = True
        Me.optLocSimple.Location = New System.Drawing.Point(4, 35)
        Me.optLocSimple.Margin = New System.Windows.Forms.Padding(1)
        Me.optLocSimple.Name = "optLocSimple"
        Me.optLocSimple.Size = New System.Drawing.Size(56, 17)
        Me.optLocSimple.TabIndex = 1
        Me.optLocSimple.Text = "Simple"
        Me.optLocSimple.UseVisualStyleBackColor = True
        '
        'optLocOff
        '
        Me.optLocOff.AutoSize = True
        Me.optLocOff.Location = New System.Drawing.Point(4, 16)
        Me.optLocOff.Margin = New System.Windows.Forms.Padding(1)
        Me.optLocOff.Name = "optLocOff"
        Me.optLocOff.Size = New System.Drawing.Size(39, 17)
        Me.optLocOff.TabIndex = 0
        Me.optLocOff.Text = "Off"
        Me.optLocOff.UseVisualStyleBackColor = True
        '
        'GroupBox4
        '
        Me.GroupBox4.Controls.Add(Me.txtWindow)
        Me.GroupBox4.Controls.Add(Me.lblWindow)
        Me.GroupBox4.Controls.Add(Me.GroupBox7)
        Me.GroupBox4.Controls.Add(Me.GroupBox6)
        Me.GroupBox4.Controls.Add(Me.txtCurMouseEvent)
        Me.GroupBox4.Controls.Add(Me.lblCurMouseEvent)
        Me.GroupBox4.Controls.Add(Me.lblState)
        Me.GroupBox4.Controls.Add(Me.lblGrapicObj)
        Me.GroupBox4.Controls.Add(Me.lblGraphicName)
        Me.GroupBox4.Controls.Add(Me.lblKeyptType)
        Me.GroupBox4.Controls.Add(Me.lblShift)
        Me.GroupBox4.Controls.Add(Me.lblButton)
        Me.GroupBox4.Controls.Add(Me.txtState)
        Me.GroupBox4.Controls.Add(Me.txtGraphicObj)
        Me.GroupBox4.Controls.Add(Me.txtGraphicName)
        Me.GroupBox4.Controls.Add(Me.txtKeypType)
        Me.GroupBox4.Controls.Add(Me.txtShift)
        Me.GroupBox4.Controls.Add(Me.txtButton)
        Me.GroupBox4.Controls.Add(Me.txtZCoord)
        Me.GroupBox4.Controls.Add(Me.txtYCoord)
        Me.GroupBox4.Controls.Add(Me.txtXCoord)
        Me.GroupBox4.Controls.Add(Me.lblZCoord)
        Me.GroupBox4.Controls.Add(Me.lblYCoord)
        Me.GroupBox4.Controls.Add(Me.lblXCoord)
        Me.GroupBox4.Location = New System.Drawing.Point(10, 129)
        Me.GroupBox4.Margin = New System.Windows.Forms.Padding(1)
        Me.GroupBox4.Name = "GroupBox4"
        Me.GroupBox4.Size = New System.Drawing.Size(366, 260)
        Me.GroupBox4.TabIndex = 5
        Me.GroupBox4.TabStop = False
        Me.GroupBox4.Text = "Readout"
        '
        'txtWindow
        '
        Me.txtWindow.Location = New System.Drawing.Point(176, 193)
        Me.txtWindow.Name = "txtWindow"
        Me.txtWindow.Size = New System.Drawing.Size(181, 20)
        Me.txtWindow.TabIndex = 23
        '
        'lblWindow
        '
        Me.lblWindow.AutoSize = True
        Me.lblWindow.Location = New System.Drawing.Point(176, 177)
        Me.lblWindow.Name = "lblWindow"
        Me.lblWindow.Size = New System.Drawing.Size(46, 13)
        Me.lblWindow.TabIndex = 22
        Me.lblWindow.Text = "Window"
        '
        'GroupBox7
        '
        Me.GroupBox7.Controls.Add(Me.optUserUnits)
        Me.GroupBox7.Controls.Add(Me.optModelUnits)
        Me.GroupBox7.Location = New System.Drawing.Point(6, 193)
        Me.GroupBox7.Margin = New System.Windows.Forms.Padding(1)
        Me.GroupBox7.Name = "GroupBox7"
        Me.GroupBox7.Size = New System.Drawing.Size(133, 61)
        Me.GroupBox7.TabIndex = 21
        Me.GroupBox7.TabStop = False
        Me.GroupBox7.Text = "Units"
        '
        'optUserUnits
        '
        Me.optUserUnits.AutoSize = True
        Me.optUserUnits.Location = New System.Drawing.Point(4, 36)
        Me.optUserUnits.Margin = New System.Windows.Forms.Padding(1)
        Me.optUserUnits.Name = "optUserUnits"
        Me.optUserUnits.Size = New System.Drawing.Size(47, 17)
        Me.optUserUnits.TabIndex = 1
        Me.optUserUnits.TabStop = True
        Me.optUserUnits.Text = "User"
        Me.optUserUnits.UseVisualStyleBackColor = True
        '
        'optModelUnits
        '
        Me.optModelUnits.AutoSize = True
        Me.optModelUnits.Location = New System.Drawing.Point(4, 17)
        Me.optModelUnits.Margin = New System.Windows.Forms.Padding(1)
        Me.optModelUnits.Name = "optModelUnits"
        Me.optModelUnits.Size = New System.Drawing.Size(54, 17)
        Me.optModelUnits.TabIndex = 0
        Me.optModelUnits.TabStop = True
        Me.optModelUnits.Text = "Model"
        Me.optModelUnits.UseVisualStyleBackColor = True
        '
        'GroupBox6
        '
        Me.GroupBox6.Controls.Add(Me.optWindowCoord)
        Me.GroupBox6.Controls.Add(Me.optModelCoord)
        Me.GroupBox6.Location = New System.Drawing.Point(7, 129)
        Me.GroupBox6.Margin = New System.Windows.Forms.Padding(1)
        Me.GroupBox6.Name = "GroupBox6"
        Me.GroupBox6.Size = New System.Drawing.Size(132, 62)
        Me.GroupBox6.TabIndex = 20
        Me.GroupBox6.TabStop = False
        Me.GroupBox6.Text = "Scale"
        '
        'optWindowCoord
        '
        Me.optWindowCoord.AutoSize = True
        Me.optWindowCoord.Location = New System.Drawing.Point(4, 36)
        Me.optWindowCoord.Margin = New System.Windows.Forms.Padding(1)
        Me.optWindowCoord.Name = "optWindowCoord"
        Me.optWindowCoord.Size = New System.Drawing.Size(123, 17)
        Me.optWindowCoord.TabIndex = 1
        Me.optWindowCoord.TabStop = True
        Me.optWindowCoord.Text = "Window Coordinates"
        Me.optWindowCoord.UseVisualStyleBackColor = True
        '
        'optModelCoord
        '
        Me.optModelCoord.AutoSize = True
        Me.optModelCoord.Location = New System.Drawing.Point(4, 17)
        Me.optModelCoord.Margin = New System.Windows.Forms.Padding(1)
        Me.optModelCoord.Name = "optModelCoord"
        Me.optModelCoord.Size = New System.Drawing.Size(113, 17)
        Me.optModelCoord.TabIndex = 0
        Me.optModelCoord.TabStop = True
        Me.optModelCoord.Text = "Model Coordinates"
        Me.optModelCoord.UseVisualStyleBackColor = True
        '
        'txtCurMouseEvent
        '
        Me.txtCurMouseEvent.Location = New System.Drawing.Point(7, 105)
        Me.txtCurMouseEvent.Name = "txtCurMouseEvent"
        Me.txtCurMouseEvent.Size = New System.Drawing.Size(160, 20)
        Me.txtCurMouseEvent.TabIndex = 19
        '
        'lblCurMouseEvent
        '
        Me.lblCurMouseEvent.AutoSize = True
        Me.lblCurMouseEvent.Location = New System.Drawing.Point(12, 86)
        Me.lblCurMouseEvent.Name = "lblCurMouseEvent"
        Me.lblCurMouseEvent.Size = New System.Drawing.Size(107, 13)
        Me.lblCurMouseEvent.TabIndex = 18
        Me.lblCurMouseEvent.Text = "Current Mouse Event"
        '
        'lblState
        '
        Me.lblState.AutoSize = True
        Me.lblState.Location = New System.Drawing.Point(219, 130)
        Me.lblState.Name = "lblState"
        Me.lblState.Size = New System.Drawing.Size(32, 13)
        Me.lblState.TabIndex = 17
        Me.lblState.Text = "State"
        Me.lblState.TextAlign = System.Drawing.ContentAlignment.MiddleRight
        '
        'lblGrapicObj
        '
        Me.lblGrapicObj.Anchor = CType((System.Windows.Forms.AnchorStyles.Top Or System.Windows.Forms.AnchorStyles.Right), System.Windows.Forms.AnchorStyles)
        Me.lblGrapicObj.AutoSize = True
        Me.lblGrapicObj.Location = New System.Drawing.Point(173, 86)
        Me.lblGrapicObj.Name = "lblGrapicObj"
        Me.lblGrapicObj.Size = New System.Drawing.Size(78, 13)
        Me.lblGrapicObj.TabIndex = 16
        Me.lblGrapicObj.Text = "Graphic Object"
        Me.lblGrapicObj.TextAlign = System.Drawing.ContentAlignment.MiddleRight
        '
        'lblGraphicName
        '
        Me.lblGraphicName.AutoSize = True
        Me.lblGraphicName.Location = New System.Drawing.Point(176, 108)
        Me.lblGraphicName.Name = "lblGraphicName"
        Me.lblGraphicName.Size = New System.Drawing.Size(75, 13)
        Me.lblGraphicName.TabIndex = 15
        Me.lblGraphicName.Text = "Graphic Name"
        Me.lblGraphicName.TextAlign = System.Drawing.ContentAlignment.MiddleRight
        '
        'lblKeyptType
        '
        Me.lblKeyptType.AutoSize = True
        Me.lblKeyptType.Location = New System.Drawing.Point(176, 64)
        Me.lblKeyptType.Name = "lblKeyptType"
        Me.lblKeyptType.Size = New System.Drawing.Size(75, 13)
        Me.lblKeyptType.TabIndex = 14
        Me.lblKeyptType.Text = "Keypoint Type"
        Me.lblKeyptType.TextAlign = System.Drawing.ContentAlignment.MiddleRight
        '
        'lblShift
        '
        Me.lblShift.AutoSize = True
        Me.lblShift.Location = New System.Drawing.Point(223, 42)
        Me.lblShift.Name = "lblShift"
        Me.lblShift.Size = New System.Drawing.Size(28, 13)
        Me.lblShift.TabIndex = 13
        Me.lblShift.Text = "Shift"
        Me.lblShift.TextAlign = System.Drawing.ContentAlignment.MiddleRight
        '
        'lblButton
        '
        Me.lblButton.AutoSize = True
        Me.lblButton.Location = New System.Drawing.Point(213, 20)
        Me.lblButton.Name = "lblButton"
        Me.lblButton.Size = New System.Drawing.Size(38, 13)
        Me.lblButton.TabIndex = 12
        Me.lblButton.Text = "Button"
        '
        'txtState
        '
        Me.txtState.Location = New System.Drawing.Point(257, 127)
        Me.txtState.Margin = New System.Windows.Forms.Padding(1)
        Me.txtState.Name = "txtState"
        Me.txtState.Size = New System.Drawing.Size(100, 20)
        Me.txtState.TabIndex = 11
        '
        'txtGraphicObj
        '
        Me.txtGraphicObj.Location = New System.Drawing.Point(257, 83)
        Me.txtGraphicObj.Margin = New System.Windows.Forms.Padding(1)
        Me.txtGraphicObj.Name = "txtGraphicObj"
        Me.txtGraphicObj.Size = New System.Drawing.Size(100, 20)
        Me.txtGraphicObj.TabIndex = 10
        '
        'txtGraphicName
        '
        Me.txtGraphicName.Location = New System.Drawing.Point(257, 105)
        Me.txtGraphicName.Margin = New System.Windows.Forms.Padding(1)
        Me.txtGraphicName.Name = "txtGraphicName"
        Me.txtGraphicName.Size = New System.Drawing.Size(100, 20)
        Me.txtGraphicName.TabIndex = 9
        '
        'txtKeypType
        '
        Me.txtKeypType.Location = New System.Drawing.Point(257, 61)
        Me.txtKeypType.Margin = New System.Windows.Forms.Padding(1)
        Me.txtKeypType.Name = "txtKeypType"
        Me.txtKeypType.Size = New System.Drawing.Size(100, 20)
        Me.txtKeypType.TabIndex = 8
        '
        'txtShift
        '
        Me.txtShift.Location = New System.Drawing.Point(257, 39)
        Me.txtShift.Margin = New System.Windows.Forms.Padding(1)
        Me.txtShift.Name = "txtShift"
        Me.txtShift.Size = New System.Drawing.Size(100, 20)
        Me.txtShift.TabIndex = 7
        '
        'txtButton
        '
        Me.txtButton.Location = New System.Drawing.Point(257, 17)
        Me.txtButton.Margin = New System.Windows.Forms.Padding(1)
        Me.txtButton.Name = "txtButton"
        Me.txtButton.Size = New System.Drawing.Size(100, 20)
        Me.txtButton.TabIndex = 6
        '
        'txtZCoord
        '
        Me.txtZCoord.Location = New System.Drawing.Point(30, 61)
        Me.txtZCoord.Margin = New System.Windows.Forms.Padding(1)
        Me.txtZCoord.Name = "txtZCoord"
        Me.txtZCoord.Size = New System.Drawing.Size(100, 20)
        Me.txtZCoord.TabIndex = 5
        '
        'txtYCoord
        '
        Me.txtYCoord.Location = New System.Drawing.Point(30, 39)
        Me.txtYCoord.Margin = New System.Windows.Forms.Padding(1)
        Me.txtYCoord.Name = "txtYCoord"
        Me.txtYCoord.Size = New System.Drawing.Size(100, 20)
        Me.txtYCoord.TabIndex = 4
        '
        'txtXCoord
        '
        Me.txtXCoord.Location = New System.Drawing.Point(30, 17)
        Me.txtXCoord.Margin = New System.Windows.Forms.Padding(1)
        Me.txtXCoord.Name = "txtXCoord"
        Me.txtXCoord.Size = New System.Drawing.Size(100, 20)
        Me.txtXCoord.TabIndex = 3
        '
        'lblZCoord
        '
        Me.lblZCoord.AutoSize = True
        Me.lblZCoord.Location = New System.Drawing.Point(9, 64)
        Me.lblZCoord.Name = "lblZCoord"
        Me.lblZCoord.Size = New System.Drawing.Size(17, 13)
        Me.lblZCoord.TabIndex = 2
        Me.lblZCoord.Text = "Z:"
        '
        'lblYCoord
        '
        Me.lblYCoord.AutoSize = True
        Me.lblYCoord.Location = New System.Drawing.Point(7, 42)
        Me.lblYCoord.Name = "lblYCoord"
        Me.lblYCoord.Size = New System.Drawing.Size(17, 13)
        Me.lblYCoord.TabIndex = 1
        Me.lblYCoord.Text = "Y:"
        '
        'lblXCoord
        '
        Me.lblXCoord.AutoSize = True
        Me.lblXCoord.Location = New System.Drawing.Point(7, 20)
        Me.lblXCoord.Name = "lblXCoord"
        Me.lblXCoord.Size = New System.Drawing.Size(17, 13)
        Me.lblXCoord.TabIndex = 0
        Me.lblXCoord.Text = "X:"
        '
        'GroupBox5
        '
        Me.GroupBox5.Controls.Add(Me.optWindowAll)
        Me.GroupBox5.Controls.Add(Me.optWindowGraph)
        Me.GroupBox5.Location = New System.Drawing.Point(301, 12)
        Me.GroupBox5.Name = "GroupBox5"
        Me.GroupBox5.Size = New System.Drawing.Size(75, 77)
        Me.GroupBox5.TabIndex = 6
        Me.GroupBox5.TabStop = False
        Me.GroupBox5.Text = "Window Types"
        '
        'optWindowAll
        '
        Me.optWindowAll.AutoSize = True
        Me.optWindowAll.Location = New System.Drawing.Point(4, 47)
        Me.optWindowAll.Margin = New System.Windows.Forms.Padding(1)
        Me.optWindowAll.Name = "optWindowAll"
        Me.optWindowAll.Size = New System.Drawing.Size(36, 17)
        Me.optWindowAll.TabIndex = 1
        Me.optWindowAll.TabStop = True
        Me.optWindowAll.Text = "All"
        Me.optWindowAll.UseVisualStyleBackColor = True
        '
        'optWindowGraph
        '
        Me.optWindowGraph.AutoSize = True
        Me.optWindowGraph.Location = New System.Drawing.Point(4, 28)
        Me.optWindowGraph.Margin = New System.Windows.Forms.Padding(1)
        Me.optWindowGraph.Name = "optWindowGraph"
        Me.optWindowGraph.Size = New System.Drawing.Size(62, 17)
        Me.optWindowGraph.TabIndex = 0
        Me.optWindowGraph.TabStop = True
        Me.optWindowGraph.Text = "Graphic"
        Me.optWindowGraph.UseVisualStyleBackColor = True
        '
        'GroupBox8
        '
        Me.GroupBox8.Controls.Add(Me.btnClearAll)
        Me.GroupBox8.Controls.Add(Me.lstLocate)
        Me.GroupBox8.Location = New System.Drawing.Point(10, 394)
        Me.GroupBox8.Name = "GroupBox8"
        Me.GroupBox8.Size = New System.Drawing.Size(194, 189)
        Me.GroupBox8.TabIndex = 7
        Me.GroupBox8.TabStop = False
        Me.GroupBox8.Text = "Locate Filter"
        '
        'btnClearAll
        '
        Me.btnClearAll.Location = New System.Drawing.Point(132, 19)
        Me.btnClearAll.Name = "btnClearAll"
        Me.btnClearAll.Size = New System.Drawing.Size(54, 23)
        Me.btnClearAll.TabIndex = 1
        Me.btnClearAll.Text = "Clear All"
        Me.btnClearAll.UseVisualStyleBackColor = True
        '
        'lstLocate
        '
        Me.lstLocate.FormattingEnabled = True
        Me.lstLocate.Location = New System.Drawing.Point(6, 20)
        Me.lstLocate.Name = "lstLocate"
        Me.lstLocate.SelectionMode = System.Windows.Forms.SelectionMode.MultiExtended
        Me.lstLocate.Size = New System.Drawing.Size(120, 160)
        Me.lstLocate.TabIndex = 0
        '
        'GroupBox9
        '
        Me.GroupBox9.Controls.Add(Me.txtGraphicType)
        Me.GroupBox9.Controls.Add(Me.txtPointOnGraphicZ)
        Me.GroupBox9.Controls.Add(Me.txtPointOnGraphicY)
        Me.GroupBox9.Controls.Add(Me.txtPointOnGraphicX)
        Me.GroupBox9.Controls.Add(Me.txtPointOnGraphicFlag)
        Me.GroupBox9.Location = New System.Drawing.Point(210, 394)
        Me.GroupBox9.Name = "GroupBox9"
        Me.GroupBox9.Size = New System.Drawing.Size(166, 140)
        Me.GroupBox9.TabIndex = 8
        Me.GroupBox9.TabStop = False
        Me.GroupBox9.Text = "Point on Graphic"
        '
        'txtGraphicType
        '
        Me.txtGraphicType.Location = New System.Drawing.Point(7, 107)
        Me.txtGraphicType.Margin = New System.Windows.Forms.Padding(1)
        Me.txtGraphicType.Name = "txtGraphicType"
        Me.txtGraphicType.Size = New System.Drawing.Size(150, 20)
        Me.txtGraphicType.TabIndex = 4
        '
        'txtPointOnGraphicZ
        '
        Me.txtPointOnGraphicZ.Location = New System.Drawing.Point(7, 85)
        Me.txtPointOnGraphicZ.Margin = New System.Windows.Forms.Padding(1)
        Me.txtPointOnGraphicZ.Name = "txtPointOnGraphicZ"
        Me.txtPointOnGraphicZ.Size = New System.Drawing.Size(150, 20)
        Me.txtPointOnGraphicZ.TabIndex = 3
        '
        'txtPointOnGraphicY
        '
        Me.txtPointOnGraphicY.Location = New System.Drawing.Point(7, 63)
        Me.txtPointOnGraphicY.Margin = New System.Windows.Forms.Padding(1)
        Me.txtPointOnGraphicY.Name = "txtPointOnGraphicY"
        Me.txtPointOnGraphicY.Size = New System.Drawing.Size(150, 20)
        Me.txtPointOnGraphicY.TabIndex = 2
        '
        'txtPointOnGraphicX
        '
        Me.txtPointOnGraphicX.Location = New System.Drawing.Point(7, 41)
        Me.txtPointOnGraphicX.Margin = New System.Windows.Forms.Padding(1)
        Me.txtPointOnGraphicX.Name = "txtPointOnGraphicX"
        Me.txtPointOnGraphicX.Size = New System.Drawing.Size(150, 20)
        Me.txtPointOnGraphicX.TabIndex = 1
        '
        'txtPointOnGraphicFlag
        '
        Me.txtPointOnGraphicFlag.Location = New System.Drawing.Point(7, 19)
        Me.txtPointOnGraphicFlag.Margin = New System.Windows.Forms.Padding(1)
        Me.txtPointOnGraphicFlag.Name = "txtPointOnGraphicFlag"
        Me.txtPointOnGraphicFlag.Size = New System.Drawing.Size(150, 20)
        Me.txtPointOnGraphicFlag.TabIndex = 0
        '
        'btnCancel
        '
        Me.btnCancel.Location = New System.Drawing.Point(254, 551)
        Me.btnCancel.Name = "btnCancel"
        Me.btnCancel.Size = New System.Drawing.Size(75, 23)
        Me.btnCancel.TabIndex = 9
        Me.btnCancel.Text = "Cancel"
        Me.btnCancel.UseVisualStyleBackColor = True
        '
        'Form1
        '
        Me.AutoScaleDimensions = New System.Drawing.SizeF(6.0!, 13.0!)
        Me.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font
        Me.ClientSize = New System.Drawing.Size(383, 590)
        Me.Controls.Add(Me.btnCancel)
        Me.Controls.Add(Me.GroupBox9)
        Me.Controls.Add(Me.GroupBox8)
        Me.Controls.Add(Me.GroupBox5)
        Me.Controls.Add(Me.GroupBox4)
        Me.Controls.Add(Me.GroupBox3)
        Me.Controls.Add(Me.GroupBox2)
        Me.Controls.Add(Me.GroupBox1)
        Me.Name = "Form1"
        Me.Text = "Mouse Sample"
        Me.GroupBox1.ResumeLayout(False)
        Me.GroupBox1.PerformLayout()
        Me.GroupBox2.ResumeLayout(False)
        Me.GroupBox2.PerformLayout()
        Me.GroupBox3.ResumeLayout(False)
        Me.GroupBox3.PerformLayout()
        Me.GroupBox4.ResumeLayout(False)
        Me.GroupBox4.PerformLayout()
        Me.GroupBox7.ResumeLayout(False)
        Me.GroupBox7.PerformLayout()
        Me.GroupBox6.ResumeLayout(False)
        Me.GroupBox6.PerformLayout()
        Me.GroupBox5.ResumeLayout(False)
        Me.GroupBox5.PerformLayout()
        Me.GroupBox8.ResumeLayout(False)
        Me.GroupBox9.ResumeLayout(False)
        Me.GroupBox9.PerformLayout()
        Me.ResumeLayout(False)

    End Sub
    Friend WithEvents GroupBox1 As System.Windows.Forms.GroupBox
    Friend WithEvents chkEnableMove As System.Windows.Forms.CheckBox
    Friend WithEvents chkEnableDrag As System.Windows.Forms.CheckBox
    Friend WithEvents chkEnableMouse As System.Windows.Forms.CheckBox
    Friend WithEvents GroupBox2 As System.Windows.Forms.GroupBox
    Friend WithEvents optDynRect As System.Windows.Forms.RadioButton
    Friend WithEvents optDynCircle As System.Windows.Forms.RadioButton
    Friend WithEvents optDynLine As System.Windows.Forms.RadioButton
    Friend WithEvents optDynOff As System.Windows.Forms.RadioButton
    Friend WithEvents GroupBox3 As System.Windows.Forms.GroupBox
    Friend WithEvents optLocQPick As System.Windows.Forms.RadioButton
    Friend WithEvents optLocSimple As System.Windows.Forms.RadioButton
    Friend WithEvents optLocOff As System.Windows.Forms.RadioButton
    Friend WithEvents lblPause As System.Windows.Forms.Label
    Friend WithEvents txtPause As System.Windows.Forms.TextBox
    Friend WithEvents chkInterDoc As System.Windows.Forms.CheckBox
    Friend WithEvents GroupBox4 As System.Windows.Forms.GroupBox
    Friend WithEvents txtZCoord As System.Windows.Forms.TextBox
    Friend WithEvents txtYCoord As System.Windows.Forms.TextBox
    Friend WithEvents txtXCoord As System.Windows.Forms.TextBox
    Friend WithEvents lblZCoord As System.Windows.Forms.Label
    Friend WithEvents lblYCoord As System.Windows.Forms.Label
    Friend WithEvents lblXCoord As System.Windows.Forms.Label
    Friend WithEvents GroupBox5 As System.Windows.Forms.GroupBox
    Friend WithEvents optWindowAll As System.Windows.Forms.RadioButton
    Friend WithEvents optWindowGraph As System.Windows.Forms.RadioButton
    Friend WithEvents lblState As System.Windows.Forms.Label
    Friend WithEvents lblGrapicObj As System.Windows.Forms.Label
    Friend WithEvents lblGraphicName As System.Windows.Forms.Label
    Friend WithEvents lblKeyptType As System.Windows.Forms.Label
    Friend WithEvents lblShift As System.Windows.Forms.Label
    Friend WithEvents lblButton As System.Windows.Forms.Label
    Friend WithEvents txtState As System.Windows.Forms.TextBox
    Friend WithEvents txtGraphicObj As System.Windows.Forms.TextBox
    Friend WithEvents txtGraphicName As System.Windows.Forms.TextBox
    Friend WithEvents txtKeypType As System.Windows.Forms.TextBox
    Friend WithEvents txtShift As System.Windows.Forms.TextBox
    Friend WithEvents txtButton As System.Windows.Forms.TextBox
    Friend WithEvents txtCurMouseEvent As System.Windows.Forms.TextBox
    Friend WithEvents lblCurMouseEvent As System.Windows.Forms.Label
    Friend WithEvents GroupBox6 As System.Windows.Forms.GroupBox
    Friend WithEvents optWindowCoord As System.Windows.Forms.RadioButton
    Friend WithEvents optModelCoord As System.Windows.Forms.RadioButton
    Friend WithEvents GroupBox7 As System.Windows.Forms.GroupBox
    Friend WithEvents optUserUnits As System.Windows.Forms.RadioButton
    Friend WithEvents optModelUnits As System.Windows.Forms.RadioButton
    Friend WithEvents txtWindow As System.Windows.Forms.TextBox
    Friend WithEvents lblWindow As System.Windows.Forms.Label
    Friend WithEvents GroupBox8 As System.Windows.Forms.GroupBox
    Friend WithEvents btnClearAll As System.Windows.Forms.Button
    Friend WithEvents lstLocate As System.Windows.Forms.ListBox
    Friend WithEvents GroupBox9 As System.Windows.Forms.GroupBox
    Friend WithEvents txtGraphicType As System.Windows.Forms.TextBox
    Friend WithEvents txtPointOnGraphicZ As System.Windows.Forms.TextBox
    Friend WithEvents txtPointOnGraphicY As System.Windows.Forms.TextBox
    Friend WithEvents txtPointOnGraphicX As System.Windows.Forms.TextBox
    Friend WithEvents txtPointOnGraphicFlag As System.Windows.Forms.TextBox
    Friend WithEvents btnCancel As System.Windows.Forms.Button

End Class

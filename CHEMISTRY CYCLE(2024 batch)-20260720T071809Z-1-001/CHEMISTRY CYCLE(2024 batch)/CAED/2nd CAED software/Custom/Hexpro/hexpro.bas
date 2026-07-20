Attribute VB_Name = "HexProfile"
Option Explicit
'
' This is the main module for the macro project.  It includes constants and Windows API
' declarations needed for the macro.
'
'
' Declare the rectangle type for use in GetWindowRect
'
Type RectType
    iLeft As Long
    iTop As Long
    iright As Long
    ibottom As Long
End Type
'
' Declare the Windows function that allows us to center a form either on the screen
' or within the application.
'
Declare Function GetWindowRect Lib "user32" (ByVal hWnd As Long, lpRect As RectType) As Long

Public Hex As Object
Public PlacingHex As Boolean
Public Origin(1 To 2) As Double
Public UOM As Object
'
' This is the main function which is the entry point for the OLE server.
' Only initialization logic which is common to all macros in this server
' should be placed in this subroutine.
'
Sub main()
End Sub
'
' This function centers a form either on the screen if the hWndParent is 0 or within
' the parent.  Copied from VBProgrammers Journal OCT 95 and modified for our needs.
'
Sub CenterForm(ByVal hWndParent As Long, frmForm As Form)

    Dim iLeft As Long
    Dim iTop As Long
    Dim iMidX As Long
    Dim iMidY As Long
    Dim rcParent As RectType

    'Find the ideal center point
    If hWndParent = 0 Then
        ' No parent, center over the screen using the screen object
        iMidX = Screen.Width / 2
        iMidY = Screen.Height / 2
    Else
        ' Center within the form's parent
        Call GetWindowRect(hWndParent, rcParent)

        ' in calculating mid x it seems to me that we should left*twipsX and right*twipsX
        ' rather than right*twipsY
        iMidX = ((rcParent.iLeft * Screen.TwipsPerPixelX) + _
                 (rcParent.iright * Screen.TwipsPerPixelY)) / 2
        iMidY = ((rcParent.iTop * Screen.TwipsPerPixelY) + _
                 (rcParent.ibottom * Screen.TwipsPerPixelY)) / 2

        ' If the application is maximized or the app for some reason returns all 0 in the
        ' rectangle type, then center on the screen
        If (rcParent.iLeft = 0 And rcParent.iright = 0 And _
            rcParent.iTop = 0 And rcParent.ibottom = 0) Then
            iMidX = Screen.Width / 2
            iMidY = Screen.Height / 2
        End If
    End If


    ' Find the form's upper left based on that
    iLeft = iMidX - (frmForm.Width / 2)
    iTop = iMidY - (frmForm.Height / 2)

    ' If the form is outside the screen, move it inside
    If iLeft < 0 Then
        iLeft = 0
    ElseIf (iLeft + frmForm.Width) > Screen.Width Then
        iLeft = Screen.Width - frmForm.Width
    End If

    If iTop < 0 Then
        iTop = 0
    ElseIf (iTop + frmForm.Height) > Screen.Height Then
        iTop = Screen.Height - frmForm.Height
    End If

    ' Move the form to its new position
    frmForm.Move iLeft, iTop
End Sub

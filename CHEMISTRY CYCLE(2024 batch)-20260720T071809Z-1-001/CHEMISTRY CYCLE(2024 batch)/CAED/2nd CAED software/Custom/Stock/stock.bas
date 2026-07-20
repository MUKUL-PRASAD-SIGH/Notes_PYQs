Attribute VB_Name = "Module1"
Option Explicit

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

Public gstrActiveStock As String
Public gobjApplication As Object
Public gobjDocument As Object
Public gobjUOM As Object


Sub CloseForm()
    Dim intCount As Integer
    
    For intCount = 4305 To 390 Step -150
        frmDim.Height = intCount
    Next intCount
    
    For intCount = 5415 To 0 Step -150
        frmDim.Width = intCount
    Next intCount
    
    Unload frmDim
End Sub
Sub OpenForm()
    Dim intCount As Integer

    For intCount = 0 To 5415 Step 150
        frmDim.Width = intCount
    Next intCount
    
    For intCount = 390 To 4305 Step 150
        frmDim.Height = intCount
    Next intCount

End Sub


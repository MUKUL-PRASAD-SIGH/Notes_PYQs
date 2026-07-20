Attribute VB_Name = "LoadRoutines"
Option Explicit
Option Base 1

Function LoadGrid(intPartID As Integer) As Integer

    On Error Resume Next
    
    Dim i As Integer
    Dim j As Integer
    Dim sinWidth As Single
    
    frmSELibrary.grdData.Visible = False
    
    frmSELibrary.grdData.Clear
    
    frmSELibrary.grdData.Rows = SEData(intPartID).SizeCount + 1
    frmSELibrary.grdData.Cols = SEData(intPartID).VariableCount
    
    If SEData(intPartID).SizeCount > 13 Then
        sinWidth = (frmSELibrary.grdData.Width - 287) / frmSELibrary.grdData.Cols
    Else
        sinWidth = (frmSELibrary.grdData.Width - 53) / frmSELibrary.grdData.Cols
    End If
    
    frmSELibrary.grdData.Row = 0
    
    ' load the header
    For i = 1 To SEData(intPartID).VariableCount
        ' add to control column width 11-2-1999 KCK
        If i = 1 Then
            frmSELibrary.grdData.ColWidth(i - 1) = sinWidth * 1.5
        Else
            frmSELibrary.grdData.ColWidth(i - 1) = sinWidth
        End If
        frmSELibrary.grdData.Col = i - 1
        frmSELibrary.grdData.Text = SEData(intPartID).Variables(i)
    Next
    
    ' load the data
    For i = 1 To SEData(intPartID).SizeCount
        frmSELibrary.grdData.Row = i
        For j = 1 To SEData(intPartID).VariableCount
            frmSELibrary.grdData.Col = j - 1
            frmSELibrary.grdData.Text = SEData(intPartID).Sizes(i, j)
        Next
    Next
    
    frmSELibrary.grdData.Row = 0
    frmSELibrary.grdData.Col = 0
    frmSELibrary.grdData.ColSel = frmSELibrary.grdData.Cols - 1

    frmSELibrary.grdData.Visible = True
    
End Function
Function LoadClassList() As Integer

    On Error Resume Next
    
    Dim i As Integer
    
    frmSELibrary.cboClasses.Clear
    DoEvents
        For i = (LBound(SEData)) To UBound(SEData)
       
        If SEData(i).TypeID = intCurrentTab Then
            frmSELibrary.cboClasses.AddItem SEData(i).Class
            frmSELibrary.cboClasses.ItemData(frmSELibrary.cboClasses.NewIndex) = SEData(i).PartID
        End If
        
    Next
    DoEvents
    frmSELibrary.cboClasses.ListIndex = 0
    
End Function


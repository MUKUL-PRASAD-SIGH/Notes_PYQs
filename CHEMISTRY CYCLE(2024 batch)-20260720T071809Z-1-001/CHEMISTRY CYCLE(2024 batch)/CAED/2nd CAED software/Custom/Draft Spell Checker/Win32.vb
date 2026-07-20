Module Win32
    Public Declare Auto Function SetParent Lib "user32.dll" (ByVal hWndChild As Integer, ByVal hWndNewParent As Integer) As Integer
    Public Declare Auto Function SendMessage Lib "user32.dll" (ByVal hWnd As Integer, ByVal wMsg As Integer, ByVal wParam As Integer, ByVal lParam As Integer) As Integer
    Public Declare Auto Function LockWindowUpdate Lib "user32.dll" (ByVal hWnd As Integer) As Integer

    Declare Function LoadImage Lib "user32" Alias "LoadImageA" (ByVal hInst As Integer, ByVal lpsz As String, ByVal un1 As Integer, ByVal N1 As Integer, ByVal N2 As Integer, ByVal un2 As Integer) As Integer  'Modified for VS 2005 and V19
    Declare Function api_LoadLibrary Lib "kernel32" Alias "LoadLibraryA" (ByVal lpLibFileName As String) As Integer   'Modified for VS 2005 and V19
    Declare Function api_LoadString Lib "user32" Alias "LoadStringA" (ByVal hInstance As Integer, ByVal wID As Integer, ByVal lpBuffer As String, ByVal nBufferMax As Integer) As Integer  'Modified for VS 2005 and V19
    Declare Function FreeLibrary Lib "kernel32" (ByVal hLibModule As Integer) As Integer   'Modified for VS 2005 and V19


    Public Const LVM_FIRST As Integer = 4096   'Modified for VS 2005 and V19
    Public Const LVM_SETCOLUMNWIDTH As Integer = (LVM_FIRST + 30)   'Modified for VS 2005 and V19
    Public Const LVSCW_AUTOSIZE_USEHEADER As Integer = 65534   'Modified for VS 2005 and V19

    Public Sub AutoSizeColumnHeader(ByVal hWnd As Integer, ByVal colIndex As Integer)
        SendMessage(hWnd, LVM_SETCOLUMNWIDTH, colIndex, LVSCW_AUTOSIZE_USEHEADER)
    End Sub

End Module

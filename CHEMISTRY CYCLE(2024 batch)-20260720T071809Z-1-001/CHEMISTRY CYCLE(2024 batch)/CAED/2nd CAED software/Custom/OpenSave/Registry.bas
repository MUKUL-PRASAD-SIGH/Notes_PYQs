Attribute VB_Name = "modRegistry"
Option Explicit

Public Type FILETIME
        dwLowDateTime As Long
        dwHighDateTime As Long
End Type

Public Const DELETE& = &H10000
Public Const READ_CONTROL& = &H20000
Public Const WRITE_DAC& = &H40000
Public Const WRITE_OWNER& = &H80000
Public Const SYNCHRONIZE& = &H100000

Public Const STANDARD_RIGHTS_REQUIRED& = &HF0000
Public Const STANDARD_RIGHTS_READ& = READ_CONTROL
Public Const STANDARD_RIGHTS_WRITE& = READ_CONTROL
Public Const STANDARD_RIGHTS_EXECUTE& = READ_CONTROL
Public Const STANDARD_RIGHTS_ALL& = &H1F0000
Public Const SPECIFIC_RIGHTS_ALL& = &HFFFF

Public Const KEY_QUERY_VALUE& = &H1
Public Const KEY_SET_VALUE& = &H2
Public Const KEY_CREATE_SUB_KEY& = &H4
Public Const KEY_ENUMERATE_SUB_KEYS& = &H8
Public Const KEY_NOTIFY& = &H10
Public Const KEY_CREATE_LINK& = &H20

Public Const KEY_READ& = ((STANDARD_RIGHTS_READ Or KEY_QUERY_VALUE Or KEY_ENUMERATE_SUB_KEYS Or KEY_NOTIFY) And (Not SYNCHRONIZE))
Public Const HKEY_CURRENT_USER& = &H80000001
Public Const HKEY_LOCAL_MACHINE = &H80000002
Public Const KEY_ALL_ACCESS& = ((STANDARD_RIGHTS_ALL Or KEY_QUERY_VALUE Or KEY_SET_VALUE Or KEY_CREATE_SUB_KEY Or KEY_ENUMERATE_SUB_KEYS Or KEY_NOTIFY Or KEY_CREATE_LINK) And (Not SYNCHRONIZE))

Public Const ERROR_SUCCESS = 0&
Public Const ERROR_NO_MORE_ITEMS = 259&
Public Const ERROR_FILE_NOT_FOUND = 2&
Public Const ERROR_MORE_DATA = 234

Public Const REG_DWORD& = 4&                ' 32-bit number
Public Const REG_SZ = 1                     ' Unicode nul terminated string
Public Const ERROR_NONE = 0

Declare Function RegCloseKey Lib "advapi32" (ByVal hKey As Long) As Long
Declare Function RegCreateKeyEx Lib "advapi32" Alias "RegCreateKeyExA" (ByVal hKey As Long, ByVal lpSubKey As String, ByVal Reserved As Long, ByVal lpClass As String, ByVal dwOptions As Long, ByVal samDesired As Long, lpSecurityAttributes As Any, phkResult As Long, lpdwDisposition As Long) As Long
Declare Function RegOpenKeyEx Lib "advapi32" Alias "RegOpenKeyExA" (ByVal hKey As Long, ByVal lpSubKey As String, ByVal ulOptions As Long, ByVal samDesired As Long, phkResult As Long) As Long
Declare Function RegQueryValueEx Lib "advapi32" Alias "RegQueryValueExA" (ByVal hKey As Long, ByVal lpValueName As String, ByVal lpReserved As Long, lpType As Long, lpData As Any, lpcbData As Long) As Long
Declare Function RegEnumKey Lib "advapi32" Alias "RegEnumKeyA" (ByVal hKey As Long, ByVal dwIndex As Long, ByVal lpName As String, ByVal cbName As Long) As Long
Declare Function RegEnumKeyEx Lib "advapi32.dll" Alias "RegEnumKeyExA" (ByVal hKey As Long, ByVal dwIndex As Long, ByVal lpName As String, lpcbName As Long, ByVal lpReserved As Long, ByVal lpClass As String, lpcbClass As Long, lpftLastWriteTime As FILETIME) As Long
Declare Function RegEnumValue Lib "advapi32.dll" Alias "RegEnumValueA" (ByVal hKey As Long, ByVal dwIndex As Long, ByVal lpValueName As String, lpcbValueName As Long, ByVal lpReserved As Long, lpType As Long, ByVal lpData As String, lpcbData As Long) As Long
Declare Function RegCreateKey Lib "advapi32" Alias "RegCreateKeyA" (ByVal hKey As Long, ByVal lpSubKey As String, phkResult As Long) As Long
Declare Function RegSetValueEx Lib "advapi32" Alias "RegSetValueExA" (ByVal hKey As Long, ByVal lpszValueName As String, ByVal dwReserved As Long, ByVal fdwType As Long, lpbData As Any, ByVal cbData As Long) As Long
Declare Function RegQueryValueExNULL Lib "advapi32.dll" Alias "RegQueryValueExA" (ByVal hKey As Long, ByVal lpValueName As String, ByVal lpReserved As Long, lpType As Long, ByVal lpData As Long, lpcbData As Long) As Long
Declare Function RegQueryValueExString Lib "advapi32.dll" Alias "RegQueryValueExA" (ByVal hKey As Long, ByVal lpValueName As String, ByVal lpReserved As Long, lpType As Long, ByVal lpData As String, lpcbData As Long) As Long
Declare Function RegQueryValueExLong Lib "advapi32.dll" Alias "RegQueryValueExA" (ByVal hKey As Long, ByVal lpValueName As String, ByVal lpReserved As Long, lpType As Long, lpData As Long, lpcbData As Long) As Long
Declare Function RegSetValueExString Lib "advapi32.dll" Alias "RegSetValueExA" (ByVal hKey As Long, ByVal lpValueName As String, ByVal Reserved As Long, ByVal dwType As Long, ByVal lpValue As String, ByVal cbData As Long) As Long
Declare Function RegSetValueExLong Lib "advapi32.dll" Alias "RegSetValueExA" (ByVal hKey As Long, ByVal lpValueName As String, ByVal Reserved As Long, ByVal dwType As Long, lpValue As Long, ByVal cbData As Long) As Long
Declare Function RegDeleteValue Lib "advapi32.dll" Alias "RegDeleteValueA" (ByVal hKey As Long, ByVal lpValueName As String) As Long


Public Function GetAssemblyMode(Value As Integer) As Boolean
    Dim lResult As Long
    Dim hkGlobal As Long
    Dim dwType As Long
    Dim lpReserved As Long
    Dim lngDataBuffer As Long
    Dim strSEsubkey As String
    
    GetAssemblyMode = True
    strSEsubkey = "Software\Unigraphics Solutions\Solid Edge\Version " & SEVersion

    'Open Registry
    lResult = RegOpenKeyEx(HKEY_CURRENT_USER, strSEsubkey & "\FileOpen", 0, KEY_READ, hkGlobal)
    If lResult <> ERROR_SUCCESS Then
        GetAssemblyMode = False
        Exit Function
    End If

    'Read the mode value.
    lResult = RegQueryValueEx(hkGlobal, "Mode", lpReserved, dwType, lngDataBuffer, 4)
    If lResult <> ERROR_SUCCESS Then
        GetAssemblyMode = False
        Exit Function
    Else
        Value = lngDataBuffer
    End If
    
    ' Close the key.
    Call RegCloseKey(hkGlobal)
End Function

Public Function SetAssemblyMode(Value As Integer) As Boolean
    Dim lResult As Long
    Dim hkGlobal As Long
    Dim cbData As Long
    Dim lngDataBuffer As Long
    Dim lpReserved As Long
    Dim strSEsubkey As String
    
    SetAssemblyMode = True
    strSEsubkey = "Software\Unigraphics Solutions\Solid Edge\Version " & SEVersion

    'Open Registry
    lResult = RegOpenKeyEx(HKEY_CURRENT_USER, strSEsubkey & "\FileOpen", 0, KEY_SET_VALUE, hkGlobal)
    If lResult <> ERROR_SUCCESS Then
        lResult = RegCreateKey&(HKEY_CURRENT_USER, strSEsubkey & "\FileOpen", hkGlobal)
        
        If lResult <> ERROR_SUCCESS Then
            SetAssemblyMode = False
            Exit Function
        End If
    End If
        
    ' Edit or write the mode.
    lngDataBuffer = Value
    cbData = 4
    lResult = RegSetValueEx(hkGlobal, "Mode", lpReserved, REG_DWORD, lngDataBuffer, cbData)
    If lResult <> ERROR_SUCCESS Then
        SetAssemblyMode = False
        Exit Function
    End If
    
    ' Close the key.
    Call RegCloseKey(hkGlobal)
End Function


Public Function GetSolidEdgePath(SolidEdgePath As String) As Boolean
' This function used RegOpenKeyEx to search the HKLM registry hive for
' the currently installed version of SE.  This is not reliable, so I've
' changed it to use SEInstallData.  RKR 5-14-03

    Dim oSEID As SEInstallData
    
    On Error GoTo ErrorHandler
    Set oSEID = CreateObject("SolidEdge.InstallData")
    SolidEdgePath = oSEID.GetInstalledPath
    GetSolidEdgePath = True
    strSEVersion = oSEID.GetMajorVersion
    
    Set oSEID = Nothing
    Exit Function
    
ErrorHandler:
    Err.Clear
    GetSolidEdgePath = False
    Set oSEID = Nothing

End Function


Public Function SetOpenSaveMacroFlag(Value As Integer) As Boolean
    Dim lResult As Long
    Dim hkGlobal As Long
    Dim dwType As Long
    Dim cbData As Long
    Dim lpReserved As Long
    Dim lngDataBuffer As Long
    Dim lngSubKeyHandle As Long
    Dim strSEsubkey As String
    
    SetOpenSaveMacroFlag = True
    strSEsubkey = "Software\Unigraphics Solutions\Solid Edge\Version " & SEVersion
    
    'Open Registry
    lResult = RegOpenKeyEx(HKEY_CURRENT_USER, strSEsubkey & "\FileOpen", 0, KEY_SET_VALUE, hkGlobal)
    If lResult <> ERROR_SUCCESS Then
        lResult = RegCreateKey&(HKEY_CURRENT_USER, strSEsubkey & "\FileOpen", hkGlobal)
        
        If lResult <> ERROR_SUCCESS Then
            SetOpenSaveMacroFlag = False
            Exit Function
        End If
    End If

    ' Edit or write the mode.
    lngDataBuffer = Value
    cbData = 4
    lResult = RegSetValueEx(hkGlobal, "OpenSaveMacro", lpReserved, REG_DWORD, lngDataBuffer, cbData)
    If lResult <> ERROR_SUCCESS Then
        SetOpenSaveMacroFlag = False
        Exit Function
    End If
    
    ' Close the key.
    Call RegCloseKey(hkGlobal)
End Function


Private Function SEVersion() As String
' This function used RegOpenKeyEx to search the HKLM registry hive for
' the newest version of SE.  This is not reliable, so I've
' changed it to use SEInstallData.  RKR 5-14-03

    Dim oSEID As SEInstallData
    
    On Error GoTo ErrorHandler
    Set oSEID = CreateObject("SolidEdge.InstallData")
    SEVersion = oSEID.GetMajorVersion
    Set oSEID = Nothing
    Exit Function
    
ErrorHandler:
    Err.Clear
    Set oSEID = Nothing
 
End Function






Public Function QueryValue(lPredefinedKey As Long, sKeyName As String, sValueName As String)
' Description:
'   This Function will return the data field of a value
'
' Syntax:
'   Variable = QueryValue(Location, KeyName, ValueName)
'
'   Location must equal HKEY_CLASSES_ROOT, HKEY_CURRENT_USER, HKEY_lOCAL_MACHINE
'   , HKEY_USERS
'
'   KeyName is the key that the value is under (example: "Software\Microsoft\Windows\CurrentVersion\Explorer")
'
'   ValueName is the name of the value you want to access (example: "link")

       Dim lRetVal As Long         'result of the API functions
       Dim hKey As Long         'handle of opened key
       Dim vValue As Variant      'setting of queried value


       lRetVal = RegOpenKeyEx(lPredefinedKey, sKeyName, 0, KEY_ALL_ACCESS, hKey)
       lRetVal = QueryValueEx(hKey, sValueName, vValue)
       'MsgBox vValue
       QueryValue = vValue
       RegCloseKey (hKey)
End Function

Function QueryValueEx(ByVal lhKey As Long, ByVal szValueName As String, vValue As Variant) As Long
    Dim cch As Long
    Dim lrc As Long
    Dim lType As Long
    Dim lValue As Long
    Dim sValue As String

    On Error GoTo QueryValueExError



    ' Determine the size and type of data to be read

    lrc = RegQueryValueExNULL(lhKey, szValueName, 0&, lType, 0&, cch)
    If lrc <> ERROR_NONE Then Error 5

    Select Case lType
        ' For strings
        Case REG_SZ:
            sValue = String(cch, 0)
            lrc = RegQueryValueExString(lhKey, szValueName, 0&, lType, sValue, cch)
            If lrc = ERROR_NONE Then
                vValue = Left$(sValue, cch)
            Else
                vValue = Empty
            End If

        ' For DWORDS
        Case REG_DWORD:
            lrc = RegQueryValueExLong(lhKey, szValueName, 0&, lType, lValue, cch)
            If lrc = ERROR_NONE Then vValue = lValue
        Case Else
            'all other data types not supported
            lrc = -1
    End Select

QueryValueExExit:

    QueryValueEx = lrc
    Exit Function

QueryValueExError:

    Resume QueryValueExExit

End Function


Public Function SetKeyValue(lPredefinedKey As Long, sKeyName As String, sValueName As String, vValueSetting As Variant, lValueType As Long)
' Description:
'   This Function will set the data field of a value
'
' Syntax:
'   QueryValue Location, KeyName, ValueName, ValueSetting, ValueType
'
'   Location must equal HKEY_CLASSES_ROOT, HKEY_CURRENT_USER, HKEY_lOCAL_MACHINE
'   , HKEY_USERS
'
'   KeyName is the key that the value is under (example: "Key1\SubKey1")
'
'   ValueName is the name of the value you want create, or set the value of (example: "ValueTest")
'
'   ValueSetting is what you want the value to equal
'
'   ValueType must equal either REG_SZ (a string) Or REG_DWORD (an integer)

       Dim lRetVal As Long         'result of the SetValueEx function
       Dim hKey As Long         'handle of open key

       'open the specified key

       lRetVal = RegOpenKeyEx(lPredefinedKey, sKeyName, 0, KEY_ALL_ACCESS, hKey)
       lRetVal = SetValueEx(hKey, sValueName, lValueType, vValueSetting)
       RegCloseKey (hKey)

End Function



Public Function SetValueEx(ByVal hKey As Long, sValueName As String, lType As Long, vValue As Variant) As Long
    Dim lValue As Long
    Dim sValue As String

    Select Case lType
        Case REG_SZ
            sValue = vValue
            SetValueEx = RegSetValueExString(hKey, sValueName, 0&, lType, sValue, Len(sValue))
        Case REG_DWORD
            lValue = vValue
            SetValueEx = RegSetValueExLong(hKey, sValueName, 0&, lType, lValue, 4)
        End Select

End Function

Public Function DeleteValue(lPredefinedKey As Long, sKeyName As String, Value As String) As Long
Dim lRetVal As Long         'result of the SetValueEx function
Dim hKey As Long         'handle of open key

lRetVal = RegOpenKeyEx(lPredefinedKey, sKeyName, 0, KEY_ALL_ACCESS, hKey)
lRetVal = RegDeleteValue(hKey, Value)
RegCloseKey (hKey)

End Function

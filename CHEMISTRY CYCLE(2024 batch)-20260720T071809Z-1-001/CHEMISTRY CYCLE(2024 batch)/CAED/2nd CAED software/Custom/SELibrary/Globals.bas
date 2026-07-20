Attribute VB_Name = "Globals"
Option Explicit
Option Base 1

    Declare Function SetWindowPos Lib "user32" (ByVal hwnd As Long, _
    ByVal hWndInsertAfter As Long, ByVal X As Long, ByVal Y As Long, _
    ByVal cx As Long, ByVal cy As Long, ByVal wFlags As Long) As Long
    
    Declare Function GetUserName Lib "advapi32.dll" Alias "GetUserNameA" _
    (ByVal lpbuffer As String, nSize As Long) As Long

    Declare Function GetLocaleInfo Lib "kernel32" Alias "GetLocaleInfoA" (ByVal Locale As Long, ByVal LCType As Long, ByVal lpLCData As String, ByVal cchData As Long) As Long

    Declare Sub Sleep Lib "kernel32" (ByVal dwMilliseconds As Long) '11/30/2005 ccprestr PR5342372

    Global Const LOCALE_SENGLANGUAGE = &H1001
    Global Const LOCALE_ENGLISH = &H409
    Global Const LOCALE_USER_DEFAULT = &H400

    ' window position constants
    Global Const HWND_TOPMOST = -1
    Global Const SWP_NOACTIVATE = &H10
    Global Const SWP_SHOWWINDOW = &H40
    Global Const SWP_HIDEWINDOW = &H80
    Global Const SWP_NOZORDER = &H4
    Global Const SWP_NOMOVE = &H2
    Global Const SWP_NOREPOSITION = &H200
    Global Const SWP_NOSIZE = &H1
    
    ' global data structures and variables
    Global SEData() As SELibrary
    Global SECurrent As Current
    Global strDataFile As String
    Global intFirstTab As Integer
    Global intCurrentTab As Integer
    Global intTotalTabs As Integer
    
    Global objApp As SolidEdgeFramework.Application
    Global objDoc As SolidEdgePart.PartDocument
    Global objVariables As SolidEdgeFramework.Variables
    Global objParts As SolidEdgeAssembly.Occurrences
    
    ' Global objApp As Object
    
    Global objFileUIEvents As Object
    Global intCurrentPartID As Integer
    Global intTypeID As Integer
    Global intLastTypeID As Integer
    Global intParts As Integer
    Global strGlobalPath As String
    Global intVersion As Integer
    Global intTabArray() As Integer
    
    ' error constants
    Global Const ER_NOERROR = 0
    Global Const ER_FATALERROR = 1
    Global Const ER_NEWPARTFAIL = 2
    Global Const ER_MINORERROR = 3
    Global Const ER_NOVARIABLES = 4
    Global Const ER_FILENOTFOUND = 5
    Global Const ER_NOSOURCEFILE = 6
    Global Const ER_FILEEXISTS = 7
    Global Const ER_COPYFAIL = 8
    Global Const ER_NOOPEN = 9
    Global Const ER_NOUPDATE = 10
    Global Const ER_NOSAVE = 11
    Global Const ER_FILEFOUND = 12
    Global Const ER_ADDPARTERROR = 13
    Global Const ER_BADFILENAME = 14
    Global Const ER_VALIDFAIL = 15
    Global Const ER_INVALIDDAT = 16
    Global Const ER_NOASSEMBLY = 17
    Global Const ER_REPLACED = 18
    Global Const ER_ENGLISH = 19
    Global Const ER_NONENGLISH = 20
    
    Global Const NEED_VERSION = 10 ' for SE-V10, formerly 9.
    
    ' locations constants
    Global Const LO_OPEN = 1
    Global Const LO_IMPORT = 2
        
    ' constant for controlling how many tabs based on characters
    Global Const MAX_TABWIDTH = 60
    
    ' UDF data structure for the main data table (all records)
    Type SELibrary
        PartID As Integer
        TypeID As Integer
        Type As String
        Class As String
        DraftName As String
        BasePart As String
        Found As Byte
        Sizes() As String
        Variables() As String
        SizeCount As Integer
        VariableCount As Integer
    End Type
    
    ' global structure for a single set of data (one record)
    Type Current
        ParentName As String
        ChildName As String
        MemberName As String
        Sizes() As String
        Variables() As String
    End Type
        


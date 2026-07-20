
Option Strict Off
Option Explicit On


Imports System.Runtime.InteropServices
Imports System.Windows.Forms
Imports SolidEdgeFileProperties
Imports Microsoft.VisualBasic
Imports Word
Imports SolidEdgeFramework
Imports SolidEdgeDraft
Imports System
Imports System.Collections.ArrayList

Module SolidEdge
    
    Public Const CATID_SolidEdgeAddIn As String = "{26B1D2D1-2B03-11d2-B589-080036E8B802}"
    Public Const CATID_SEPart As String = "{26618396-09D6-11d1-BA07-080036230602}"
    Public Const CATID_SEAssembly As String = "{26618395-09D6-11d1-BA07-080036230602}"
    Public Const CATID_SESheetMetal As String = "{26618398-09D6-11D1-BA07-080036230602}"
    Public Const CATID_SEDraft As String = "{08244193-B78D-11D2-9216-00C04F79BE98}"
    Public Const CATID_SEWeldment As String = "{7313526A-276F-11D4-B64E-00C04F79B2BF}"

    Public objSheets As SolidEdgeDraft.Sheets
    Public objSheet As SolidEdgeDraft.Sheet
    Public objTextboxes As SolidEdgeFrameworkSupport.TextBoxes
    Public objTextBox As SolidEdgeFrameworkSupport.TextBox
    Public objBalloons As SolidEdgeFrameworkSupport.Balloons
    Public objBalloon As SolidEdgeFrameworkSupport.Balloon
    Public objDimensions As SolidEdgeFrameworkSupport.Dimensions
    Public objDimension As SolidEdgeFrameworkSupport.Dimension
    Public objSEApp As SolidEdgeFramework.Application
    Public objDraftDoc As SolidEdgeDraft.DraftDocument
    Public strTextStringToBeChecked As String
    Public strTextStringCorrected As String
    Public MSWord As New Word.Application
    Public WordType As Type
    Public suggestions As System.Collections.ArrayList, w As Object
    Public SpellCheckForm As Form
    Public strParsedString As String
    Public strLinkedFileName As String
    Public SEFilePropertiesType As Type

    Public propertySets As PropertySetsClass
    Public objAddin As SolidEdgeFramework.AddIn  'Modified for VS 2005 and V19
    



    Public Function ProcessActiveDraftDocument() As Boolean

        Dim ii As Integer
        Dim intLinkDocsCount As Integer

        Try
            objSEApp = Marshal.GetActiveObject("SolidEdge.Application")

        Catch ex As Exception
            MsgBox("Solid Edge does not appear to be running.  Please start Solid Edge", MsgBoxStyle.OKOnly)
            GoTo Finished
        End Try

        Try
            objDraftDoc = objSEApp.ActiveDocument
            intLinkDocsCount = objDraftDoc.ModelLinks.Count
        Catch ex As Exception
            MsgBox("Open a SOlid Edge Draft Document", MsgBoxStyle.OKOnly)
            GoTo Finished
        End Try

        Try
            objSEApp = Marshal.GetActiveObject("SolidEdge.Application")
            strLinkedFileName = objSEApp.ActiveDocument.activesheet.drawingviews.item(1).modellink.filename
        Catch ex As Exception

        End Try



        WordType = Type.GetTypeFromProgID("Word.Application")

        Try

            MSWord = Marshal.GetActiveObject("Word.Application")

        Catch ex As System.Exception

            MSWord = Activator.CreateInstance(WordType)
            MSWord.Visible = False

            If MSWord Is Nothing Then
                MsgBox("Could not create Excel", MsgBoxStyle.OKOnly)
                GoTo Finished
            End If
        End Try




        'need to set up big loop to process each sheet in the current draft file

        objSheets = objDraftDoc.Sheets


        For ii = 1 To objSheets.Count
            Call ProcessDraftSheet(objSheets.Item(ii))
        Next


        'spell check current draft file property values in case they are used in linked property text
        PullSEPropertyFromOpenedFile()



        'spell check linked file property values in case they are used in linked property text
        For ii = 1 To intLinkDocsCount
            strLinkedFileName = objDraftDoc.ModelLinks.Item(ii).FileName
            PullSEPropertyFromFile(strLinkedFileName)
        Next


        objSEApp.StartCommand(32901)

        'one remaining hole is parts list for an assembly


Finished:

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

        MsgBox("Finished spell check", MsgBoxStyle.OKOnly)





    End Function

    Public Function CleanUpMemory() As Boolean

        GC.Collect(GC.MaxGeneration)
        GC.WaitForPendingFinalizers()
        GC.Collect(GC.MaxGeneration)
        GC.WaitForPendingFinalizers()


    End Function

    Public Function ProcessDraftSheet(ByVal objSheet As SolidEdgeDraft.Sheet) As Boolean
        
        'Dim strtmp As String
        Dim jj As Integer
        Dim nstart As Integer
        Dim replacestart As Integer
        'Dim replaceend As Integer
        Dim strTmpString As String
        Dim strFirstString As String
        Dim strSecondString As String
        Dim strMergedString As String


        suggestions = New System.Collections.ArrayList

        Try
            objTextboxes = objSheet.TextBoxes
            For jj = 1 To objTextboxes.Count
                strTextStringToBeChecked = objTextboxes.Item(jj).Text
                nstart = InStr(1, strTextStringToBeChecked, " ", CompareMethod.Text)
                If nstart = 0 Then
                    strParsedString = strTextStringToBeChecked
                    strTextStringCorrected = ""
                    TextStringToSpellCheck(strTextStringToBeChecked)

                    'replace the misspelled word
                    If strTextStringCorrected <> "" Then
                        replacestart = InStr(strTextStringToBeChecked, strParsedString, CompareMethod.Text)
                        strFirstString = Mid(strTextStringToBeChecked, 1, replacestart - 1)
                        strSecondString = Mid(strTextStringToBeChecked, replacestart + Len(strParsedString), Len(strTextStringToBeChecked))
                        strMergedString = strFirstString + strTextStringCorrected + strSecondString

                        objTextboxes.Item(jj).Text = strMergedString
                    End If

                End If
                If nstart <> 0 Then
                    strTmpString = strTextStringToBeChecked
                    Do While nstart <> 0
                        strParsedString = Mid(strTmpString, 1, nstart - 1)
                        strTmpString = Mid(strTmpString, nstart + 1, Len(strTextStringToBeChecked))
                        strTextStringCorrected = ""
                        TextStringToSpellCheck(strParsedString)
                        'replace the misspelled word
                        If strTextStringCorrected <> "" Then
                            replacestart = InStr(strTextStringToBeChecked, strParsedString, CompareMethod.Text)
                            strFirstString = Mid(strTextStringToBeChecked, 1, replacestart - 1)
                            strSecondString = Mid(strTextStringToBeChecked, replacestart + Len(strParsedString), Len(strTextStringToBeChecked))
                            strMergedString = strFirstString + strTextStringCorrected + strSecondString
                            strTextStringToBeChecked = strMergedString
                            objTextboxes.Item(jj).Text = strMergedString
                        End If

                        nstart = InStr(1, strTmpString, " ", CompareMethod.Text)
                        If nstart = 0 Then
                            strParsedString = strTmpString
                            strTextStringCorrected = ""
                            TextStringToSpellCheck(strParsedString)

                            'replace the misspelled word
                            If strTextStringCorrected <> "" Then
                                replacestart = InStr(strTextStringToBeChecked, strParsedString, CompareMethod.Text)
                                strFirstString = Mid(strTextStringToBeChecked, 1, replacestart - 1)
                                strSecondString = Mid(strTextStringToBeChecked, replacestart + Len(strParsedString), Len(strTextStringToBeChecked))
                                strMergedString = strFirstString + strTextStringCorrected + strSecondString
                                objTextboxes.Item(jj).Text = strMergedString
                            End If
                        End If
                        strTextStringCorrected = ""
                    Loop
                End If

                strMergedString = ""
                strSecondString = ""
                strFirstString = ""
                replacestart = 0
                strParsedString = ""
                nstart = 0
                strTextStringCorrected = ""
            Next


            objBalloons = objSheet.Balloons

            For jj = 1 To objBalloons.Count
                If objBalloons.Item(jj).BalloonText <> "" Then
                    If Mid(objBalloons.Item(jj).BalloonText, 1, 1) = "%" Then
                        GoTo skip
                    End If
                    strTextStringToBeChecked = objBalloons.Item(jj).BalloonText
                    nstart = InStr(1, strTextStringToBeChecked, " ", CompareMethod.Text)
                    If nstart = 0 Then
                        strParsedString = strTextStringToBeChecked
                        strTextStringCorrected = ""
                        TextStringToSpellCheck(strTextStringToBeChecked)

                        'replace the misspelled word
                        If strTextStringCorrected <> "" Then
                            replacestart = InStr(strTextStringToBeChecked, strParsedString, CompareMethod.Text)
                            strFirstString = Mid(strTextStringToBeChecked, 1, replacestart - 1)
                            strSecondString = Mid(strTextStringToBeChecked, replacestart + Len(strParsedString), Len(strTextStringToBeChecked))
                            strMergedString = strFirstString + strTextStringCorrected + strSecondString
                            objBalloons.Item(jj).BalloonText = strMergedString
                        End If

                    End If
                    If nstart <> 0 Then
                        strTmpString = strTextStringToBeChecked
                        Do While nstart <> 0
                            strParsedString = Mid(strTmpString, 1, nstart - 1)
                            strTmpString = Mid(strTmpString, nstart + 1, Len(strTextStringToBeChecked))
                            strTextStringCorrected = ""
                            TextStringToSpellCheck(strParsedString)
                            'replace the misspelled word
                            If strTextStringCorrected <> "" Then
                                replacestart = InStr(strTextStringToBeChecked, strParsedString, CompareMethod.Text)
                                strFirstString = Mid(strTextStringToBeChecked, 1, replacestart - 1)
                                strSecondString = Mid(strTextStringToBeChecked, replacestart + Len(strParsedString), Len(strTextStringToBeChecked))
                                strMergedString = strFirstString + strTextStringCorrected + strSecondString
                                strTextStringToBeChecked = strMergedString
                                objBalloons.Item(jj).BalloonText = strMergedString
                            End If

                            nstart = InStr(1, strTmpString, " ", CompareMethod.Text)
                            If nstart = 0 Then
                                strParsedString = strTmpString
                                strTextStringCorrected = ""
                                TextStringToSpellCheck(strParsedString)

                                'replace the misspelled word
                                If strTextStringCorrected <> "" Then
                                    replacestart = InStr(strTextStringToBeChecked, strParsedString, CompareMethod.Text)
                                    strFirstString = Mid(strTextStringToBeChecked, 1, replacestart - 1)
                                    strSecondString = Mid(strTextStringToBeChecked, replacestart + Len(strParsedString), Len(strTextStringToBeChecked))
                                    strMergedString = strFirstString + strTextStringCorrected + strSecondString
                                    objBalloons.Item(jj).BalloonText = strMergedString
                                End If
                            End If
                            strTextStringCorrected = ""
                        Loop
                    End If

                    strMergedString = ""
                    strSecondString = ""
                    strFirstString = ""
                    replacestart = 0
                    strParsedString = ""
                    nstart = 0
                    strTextStringCorrected = ""
                End If
skip:
                If objBalloons.Item(jj).BalloonTextLower <> "" Then
                    strTextStringToBeChecked = objBalloons.Item(jj).BalloonTextLower
                    nstart = InStr(1, strTextStringToBeChecked, " ", CompareMethod.Text)
                    If nstart = 0 Then
                        strParsedString = strTextStringToBeChecked
                        strTextStringCorrected = ""
                        TextStringToSpellCheck(strTextStringToBeChecked)

                        'replace the misspelled word
                        If strTextStringCorrected <> "" Then
                            replacestart = InStr(strTextStringToBeChecked, strParsedString, CompareMethod.Text)
                            strFirstString = Mid(strTextStringToBeChecked, 1, replacestart - 1)
                            strSecondString = Mid(strTextStringToBeChecked, replacestart + Len(strParsedString), Len(strTextStringToBeChecked))
                            strMergedString = strFirstString + strTextStringCorrected + strSecondString
                            objBalloons.Item(jj).BalloonTextLower = strMergedString
                        End If

                    End If
                    If nstart <> 0 Then
                        strTmpString = strTextStringToBeChecked
                        Do While nstart <> 0
                            strParsedString = Mid(strTmpString, 1, nstart - 1)
                            strTmpString = Mid(strTmpString, nstart + 1, Len(strTextStringToBeChecked))
                            strTextStringCorrected = ""
                            TextStringToSpellCheck(strParsedString)
                            'replace the misspelled word
                            If strTextStringCorrected <> "" Then
                                replacestart = InStr(strTextStringToBeChecked, strParsedString, CompareMethod.Text)
                                strFirstString = Mid(strTextStringToBeChecked, 1, replacestart - 1)
                                strSecondString = Mid(strTextStringToBeChecked, replacestart + Len(strParsedString), Len(strTextStringToBeChecked))
                                strMergedString = strFirstString + strTextStringCorrected + strSecondString
                                strTextStringToBeChecked = strMergedString
                                objBalloons.Item(jj).BalloonTextLower = strMergedString
                            End If

                            nstart = InStr(1, strTmpString, " ", CompareMethod.Text)
                            If nstart = 0 Then
                                strParsedString = strTmpString
                                strTextStringCorrected = ""
                                TextStringToSpellCheck(strParsedString)

                                'replace the misspelled word
                                If strTextStringCorrected <> "" Then
                                    replacestart = InStr(strTextStringToBeChecked, strParsedString, CompareMethod.Text)
                                    strFirstString = Mid(strTextStringToBeChecked, 1, replacestart - 1)
                                    strSecondString = Mid(strTextStringToBeChecked, replacestart + Len(strParsedString), Len(strTextStringToBeChecked))
                                    strMergedString = strFirstString + strTextStringCorrected + strSecondString
                                    objBalloons.Item(jj).BalloonTextLower = strMergedString
                                End If
                            End If
                            strTextStringCorrected = ""
                        Loop
                    End If

                    strMergedString = ""
                    strSecondString = ""
                    strFirstString = ""
                    replacestart = 0
                    strParsedString = ""
                    nstart = 0
                    strTextStringCorrected = ""
                End If

                If objBalloons.Item(jj).BalloonTextPrefix <> "" Then
                    strTextStringToBeChecked = objBalloons.Item(jj).BalloonTextPrefix
                    nstart = InStr(1, strTextStringToBeChecked, " ", CompareMethod.Text)
                    If nstart = 0 Then
                        strParsedString = strTextStringToBeChecked
                        strTextStringCorrected = ""
                        TextStringToSpellCheck(strTextStringToBeChecked)

                        'replace the misspelled word
                        If strTextStringCorrected <> "" Then
                            replacestart = InStr(strTextStringToBeChecked, strParsedString, CompareMethod.Text)
                            strFirstString = Mid(strTextStringToBeChecked, 1, replacestart - 1)
                            strSecondString = Mid(strTextStringToBeChecked, replacestart + Len(strParsedString), Len(strTextStringToBeChecked))
                            strMergedString = strFirstString + strTextStringCorrected + strSecondString
                            objBalloons.Item(jj).BalloonTextPrefix = strMergedString
                        End If

                    End If
                    If nstart <> 0 Then
                        strTmpString = strTextStringToBeChecked
                        Do While nstart <> 0
                            strParsedString = Mid(strTmpString, 1, nstart - 1)
                            strTmpString = Mid(strTmpString, nstart + 1, Len(strTextStringToBeChecked))
                            strTextStringCorrected = ""
                            TextStringToSpellCheck(strParsedString)
                            'replace the misspelled word
                            If strTextStringCorrected <> "" Then
                                replacestart = InStr(strTextStringToBeChecked, strParsedString, CompareMethod.Text)
                                strFirstString = Mid(strTextStringToBeChecked, 1, replacestart - 1)
                                strSecondString = Mid(strTextStringToBeChecked, replacestart + Len(strParsedString), Len(strTextStringToBeChecked))
                                strMergedString = strFirstString + strTextStringCorrected + strSecondString
                                strTextStringToBeChecked = strMergedString
                                objBalloons.Item(jj).BalloonTextPrefix = strMergedString
                            End If

                            nstart = InStr(1, strTmpString, " ", CompareMethod.Text)
                            If nstart = 0 Then
                                strParsedString = strTmpString
                                strTextStringCorrected = ""
                                TextStringToSpellCheck(strParsedString)

                                'replace the misspelled word
                                If strTextStringCorrected <> "" Then
                                    replacestart = InStr(strTextStringToBeChecked, strParsedString, CompareMethod.Text)
                                    strFirstString = Mid(strTextStringToBeChecked, 1, replacestart - 1)
                                    strSecondString = Mid(strTextStringToBeChecked, replacestart + Len(strParsedString), Len(strTextStringToBeChecked))
                                    strMergedString = strFirstString + strTextStringCorrected + strSecondString
                                    objBalloons.Item(jj).BalloonTextPrefix = strMergedString
                                End If
                            End If
                            strTextStringCorrected = ""
                        Loop
                    End If

                    strMergedString = ""
                    strSecondString = ""
                    strFirstString = ""
                    replacestart = 0
                    strParsedString = ""
                    nstart = 0
                    strTextStringCorrected = ""
                End If

                If objBalloons.Item(jj).BalloonTextSuffix <> "" Then
                    strTextStringToBeChecked = objBalloons.Item(jj).BalloonTextSuffix
                    nstart = InStr(1, strTextStringToBeChecked, " ", CompareMethod.Text)
                    If nstart = 0 Then
                        strParsedString = strTextStringToBeChecked
                        strTextStringCorrected = ""
                        TextStringToSpellCheck(strTextStringToBeChecked)

                        'replace the misspelled word
                        If strTextStringCorrected <> "" Then
                            replacestart = InStr(strTextStringToBeChecked, strParsedString, CompareMethod.Text)
                            strFirstString = Mid(strTextStringToBeChecked, 1, replacestart - 1)
                            strSecondString = Mid(strTextStringToBeChecked, replacestart + Len(strParsedString), Len(strTextStringToBeChecked))
                            strMergedString = strFirstString + strTextStringCorrected + strSecondString
                            objBalloons.Item(jj).BalloonTextSuffix = strMergedString
                        End If

                    End If
                    If nstart <> 0 Then
                        strTmpString = strTextStringToBeChecked
                        Do While nstart <> 0
                            strParsedString = Mid(strTmpString, 1, nstart - 1)
                            strTmpString = Mid(strTmpString, nstart + 1, Len(strTextStringToBeChecked))
                            strTextStringCorrected = ""
                            TextStringToSpellCheck(strParsedString)
                            'replace the misspelled word
                            If strTextStringCorrected <> "" Then
                                replacestart = InStr(strTextStringToBeChecked, strParsedString, CompareMethod.Text)
                                strFirstString = Mid(strTextStringToBeChecked, 1, replacestart - 1)
                                strSecondString = Mid(strTextStringToBeChecked, replacestart + Len(strParsedString), Len(strTextStringToBeChecked))
                                strMergedString = strFirstString + strTextStringCorrected + strSecondString
                                strTextStringToBeChecked = strMergedString
                                objBalloons.Item(jj).BalloonTextSuffix = strMergedString
                            End If

                            nstart = InStr(1, strTmpString, " ", CompareMethod.Text)
                            If nstart = 0 Then
                                strParsedString = strTmpString
                                strTextStringCorrected = ""
                                TextStringToSpellCheck(strParsedString)

                                'replace the misspelled word
                                If strTextStringCorrected <> "" Then
                                    replacestart = InStr(strTextStringToBeChecked, strParsedString, CompareMethod.Text)
                                    strFirstString = Mid(strTextStringToBeChecked, 1, replacestart - 1)
                                    strSecondString = Mid(strTextStringToBeChecked, replacestart + Len(strParsedString), Len(strTextStringToBeChecked))
                                    strMergedString = strFirstString + strTextStringCorrected + strSecondString
                                    objBalloons.Item(jj).BalloonTextSuffix = strMergedString
                                End If
                            End If
                            strTextStringCorrected = ""
                        Loop
                    End If

                    strMergedString = ""
                    strSecondString = ""
                    strFirstString = ""
                    replacestart = 0
                    strParsedString = ""
                    nstart = 0
                    strTextStringCorrected = ""
                End If


            Next

            objDimensions = objSheet.Dimensions
            For jj = 1 To objDimensions.Count
                If objDimensions.Item(jj).OverrideString <> "" Then

                    strTextStringToBeChecked = objDimensions.Item(jj).OverrideString
                    nstart = InStr(1, strTextStringToBeChecked, " ", CompareMethod.Text)
                    If nstart = 0 Then
                        strParsedString = strTextStringToBeChecked
                        strTextStringCorrected = ""
                        TextStringToSpellCheck(strTextStringToBeChecked)

                        'replace the misspelled word
                        If strTextStringCorrected <> "" Then
                            replacestart = InStr(strTextStringToBeChecked, strParsedString, CompareMethod.Text)
                            strFirstString = Mid(strTextStringToBeChecked, 1, replacestart - 1)
                            strSecondString = Mid(strTextStringToBeChecked, replacestart + Len(strParsedString), Len(strTextStringToBeChecked))
                            strMergedString = strFirstString + strTextStringCorrected + strSecondString
                            objDimensions.Item(jj).OverrideString = strMergedString
                        End If

                    End If
                    If nstart <> 0 Then
                        strTmpString = strTextStringToBeChecked
                        Do While nstart <> 0
                            strParsedString = Mid(strTmpString, 1, nstart - 1)
                            strTmpString = Mid(strTmpString, nstart + 1, Len(strTextStringToBeChecked))
                            strTextStringCorrected = ""
                            TextStringToSpellCheck(strParsedString)
                            'replace the misspelled word
                            If strTextStringCorrected <> "" Then
                                replacestart = InStr(strTextStringToBeChecked, strParsedString, CompareMethod.Text)
                                strFirstString = Mid(strTextStringToBeChecked, 1, replacestart - 1)
                                strSecondString = Mid(strTextStringToBeChecked, replacestart + Len(strParsedString), Len(strTextStringToBeChecked))
                                strMergedString = strFirstString + strTextStringCorrected + strSecondString
                                strTextStringToBeChecked = strMergedString
                                objDimensions.Item(jj).OverrideString = strMergedString
                            End If

                            nstart = InStr(1, strTmpString, " ", CompareMethod.Text)
                            If nstart = 0 Then
                                strParsedString = strTmpString
                                strTextStringCorrected = ""
                                TextStringToSpellCheck(strParsedString)

                                'replace the misspelled word
                                If strTextStringCorrected <> "" Then
                                    replacestart = InStr(strTextStringToBeChecked, strParsedString, CompareMethod.Text)
                                    strFirstString = Mid(strTextStringToBeChecked, 1, replacestart - 1)
                                    strSecondString = Mid(strTextStringToBeChecked, replacestart + Len(strParsedString), Len(strTextStringToBeChecked))
                                    strMergedString = strFirstString + strTextStringCorrected + strSecondString
                                    objDimensions.Item(jj).OverrideString = strMergedString
                                End If
                            End If
                            strTextStringCorrected = ""
                        Loop
                    End If

                    strMergedString = ""
                    strSecondString = ""
                    strFirstString = ""
                    replacestart = 0
                    strParsedString = ""
                    nstart = 0
                    strTextStringCorrected = ""
                End If

                If objDimensions.Item(jj).PrefixString <> "" Then

                    strTextStringToBeChecked = objDimensions.Item(jj).PrefixString
                    nstart = InStr(1, strTextStringToBeChecked, " ", CompareMethod.Text)
                    If nstart = 0 Then
                        strParsedString = strTextStringToBeChecked
                        strTextStringCorrected = ""
                        TextStringToSpellCheck(strTextStringToBeChecked)

                        'replace the misspelled word
                        If strTextStringCorrected <> "" Then
                            replacestart = InStr(strTextStringToBeChecked, strParsedString, CompareMethod.Text)
                            strFirstString = Mid(strTextStringToBeChecked, 1, replacestart - 1)
                            strSecondString = Mid(strTextStringToBeChecked, replacestart + Len(strParsedString), Len(strTextStringToBeChecked))
                            strMergedString = strFirstString + strTextStringCorrected + strSecondString
                            objDimensions.Item(jj).PrefixString = strMergedString
                        End If

                    End If
                    If nstart <> 0 Then
                        strTmpString = strTextStringToBeChecked
                        Do While nstart <> 0
                            strParsedString = Mid(strTmpString, 1, nstart - 1)
                            strTmpString = Mid(strTmpString, nstart + 1, Len(strTextStringToBeChecked))
                            strTextStringCorrected = ""
                            TextStringToSpellCheck(strParsedString)
                            'replace the misspelled word
                            If strTextStringCorrected <> "" Then
                                replacestart = InStr(strTextStringToBeChecked, strParsedString, CompareMethod.Text)
                                strFirstString = Mid(strTextStringToBeChecked, 1, replacestart - 1)
                                strSecondString = Mid(strTextStringToBeChecked, replacestart + Len(strParsedString), Len(strTextStringToBeChecked))
                                strMergedString = strFirstString + strTextStringCorrected + strSecondString
                                strTextStringToBeChecked = strMergedString
                                objDimensions.Item(jj).PrefixString = strMergedString
                            End If

                            nstart = InStr(1, strTmpString, " ", CompareMethod.Text)
                            If nstart = 0 Then
                                strParsedString = strTmpString
                                strTextStringCorrected = ""
                                TextStringToSpellCheck(strParsedString)

                                'replace the misspelled word
                                If strTextStringCorrected <> "" Then
                                    replacestart = InStr(strTextStringToBeChecked, strParsedString, CompareMethod.Text)
                                    strFirstString = Mid(strTextStringToBeChecked, 1, replacestart - 1)
                                    strSecondString = Mid(strTextStringToBeChecked, replacestart + Len(strParsedString), Len(strTextStringToBeChecked))
                                    strMergedString = strFirstString + strTextStringCorrected + strSecondString
                                    objDimensions.Item(jj).PrefixString = strMergedString
                                End If
                            End If
                            strTextStringCorrected = ""
                        Loop
                    End If

                    strMergedString = ""
                    strSecondString = ""
                    strFirstString = ""
                    replacestart = 0
                    strParsedString = ""
                    nstart = 0
                    strTextStringCorrected = ""
                End If


                If objDimensions.Item(jj).SubfixString <> "" Then

                    strTextStringToBeChecked = objDimensions.Item(jj).SubfixString
                    nstart = InStr(1, strTextStringToBeChecked, " ", CompareMethod.Text)
                    If nstart = 0 Then
                        strParsedString = strTextStringToBeChecked
                        strTextStringCorrected = ""
                        TextStringToSpellCheck(strTextStringToBeChecked)

                        'replace the misspelled word
                        If strTextStringCorrected <> "" Then
                            replacestart = InStr(strTextStringToBeChecked, strParsedString, CompareMethod.Text)
                            strFirstString = Mid(strTextStringToBeChecked, 1, replacestart - 1)
                            strSecondString = Mid(strTextStringToBeChecked, replacestart + Len(strParsedString), Len(strTextStringToBeChecked))
                            strMergedString = strFirstString + strTextStringCorrected + strSecondString
                            objDimensions.Item(jj).SubfixString = strMergedString
                        End If

                    End If
                    If nstart <> 0 Then
                        strTmpString = strTextStringToBeChecked
                        Do While nstart <> 0
                            strParsedString = Mid(strTmpString, 1, nstart - 1)
                            strTmpString = Mid(strTmpString, nstart + 1, Len(strTextStringToBeChecked))
                            strTextStringCorrected = ""
                            TextStringToSpellCheck(strParsedString)
                            'replace the misspelled word
                            If strTextStringCorrected <> "" Then
                                replacestart = InStr(strTextStringToBeChecked, strParsedString, CompareMethod.Text)
                                strFirstString = Mid(strTextStringToBeChecked, 1, replacestart - 1)
                                strSecondString = Mid(strTextStringToBeChecked, replacestart + Len(strParsedString), Len(strTextStringToBeChecked))
                                strMergedString = strFirstString + strTextStringCorrected + strSecondString
                                strTextStringToBeChecked = strMergedString
                                objDimensions.Item(jj).SubfixString = strMergedString
                            End If

                            nstart = InStr(1, strTmpString, " ", CompareMethod.Text)
                            If nstart = 0 Then
                                strParsedString = strTmpString
                                strTextStringCorrected = ""
                                TextStringToSpellCheck(strParsedString)

                                'replace the misspelled word
                                If strTextStringCorrected <> "" Then
                                    replacestart = InStr(strTextStringToBeChecked, strParsedString, CompareMethod.Text)
                                    strFirstString = Mid(strTextStringToBeChecked, 1, replacestart - 1)
                                    strSecondString = Mid(strTextStringToBeChecked, replacestart + Len(strParsedString), Len(strTextStringToBeChecked))
                                    strMergedString = strFirstString + strTextStringCorrected + strSecondString
                                    objDimensions.Item(jj).SubfixString = strMergedString
                                End If
                            End If
                            strTextStringCorrected = ""
                        Loop
                    End If

                    strMergedString = ""
                    strSecondString = ""
                    strFirstString = ""
                    replacestart = 0
                    strParsedString = ""
                    nstart = 0
                    strTextStringCorrected = ""
                End If


                If objDimensions.Item(jj).SuffixString <> "" Then

                    strTextStringToBeChecked = objDimensions.Item(jj).SuffixString
                    nstart = InStr(1, strTextStringToBeChecked, " ", CompareMethod.Text)
                    If nstart = 0 Then
                        strParsedString = strTextStringToBeChecked
                        strTextStringCorrected = ""
                        TextStringToSpellCheck(strTextStringToBeChecked)

                        'replace the misspelled word
                        If strTextStringCorrected <> "" Then
                            replacestart = InStr(strTextStringToBeChecked, strParsedString, CompareMethod.Text)
                            strFirstString = Mid(strTextStringToBeChecked, 1, replacestart - 1)
                            strSecondString = Mid(strTextStringToBeChecked, replacestart + Len(strParsedString), Len(strTextStringToBeChecked))
                            strMergedString = strFirstString + strTextStringCorrected + strSecondString
                            objDimensions.Item(jj).SuffixString = strMergedString
                        End If

                    End If
                    If nstart <> 0 Then
                        strTmpString = strTextStringToBeChecked
                        Do While nstart <> 0
                            strParsedString = Mid(strTmpString, 1, nstart - 1)
                            strTmpString = Mid(strTmpString, nstart + 1, Len(strTextStringToBeChecked))
                            strTextStringCorrected = ""
                            TextStringToSpellCheck(strParsedString)
                            'replace the misspelled word
                            If strTextStringCorrected <> "" Then
                                replacestart = InStr(strTextStringToBeChecked, strParsedString, CompareMethod.Text)
                                strFirstString = Mid(strTextStringToBeChecked, 1, replacestart - 1)
                                strSecondString = Mid(strTextStringToBeChecked, replacestart + Len(strParsedString), Len(strTextStringToBeChecked))
                                strMergedString = strFirstString + strTextStringCorrected + strSecondString
                                strTextStringToBeChecked = strMergedString
                                objDimensions.Item(jj).SuffixString = strMergedString
                            End If

                            nstart = InStr(1, strTmpString, " ", CompareMethod.Text)
                            If nstart = 0 Then
                                strParsedString = strTmpString
                                strTextStringCorrected = ""
                                TextStringToSpellCheck(strParsedString)

                                'replace the misspelled word
                                If strTextStringCorrected <> "" Then
                                    replacestart = InStr(strTextStringToBeChecked, strParsedString, CompareMethod.Text)
                                    strFirstString = Mid(strTextStringToBeChecked, 1, replacestart - 1)
                                    strSecondString = Mid(strTextStringToBeChecked, replacestart + Len(strParsedString), Len(strTextStringToBeChecked))
                                    strMergedString = strFirstString + strTextStringCorrected + strSecondString
                                    objDimensions.Item(jj).SuffixString = strMergedString
                                End If
                            End If
                            strTextStringCorrected = ""
                        Loop
                    End If

                    strMergedString = ""
                    strSecondString = ""
                    strFirstString = ""
                    replacestart = 0
                    strParsedString = ""
                    nstart = 0
                    strTextStringCorrected = ""
                End If



                If objDimensions.Item(jj).SuperfixString <> "" Then

                    strTextStringToBeChecked = objDimensions.Item(jj).SuperfixString
                    nstart = InStr(1, strTextStringToBeChecked, " ", CompareMethod.Text)
                    If nstart = 0 Then
                        strParsedString = strTextStringToBeChecked
                        strTextStringCorrected = ""
                        TextStringToSpellCheck(strTextStringToBeChecked)

                        'replace the misspelled word
                        If strTextStringCorrected <> "" Then
                            replacestart = InStr(strTextStringToBeChecked, strParsedString, CompareMethod.Text)
                            strFirstString = Mid(strTextStringToBeChecked, 1, replacestart - 1)
                            strSecondString = Mid(strTextStringToBeChecked, replacestart + Len(strParsedString), Len(strTextStringToBeChecked))
                            strMergedString = strFirstString + strTextStringCorrected + strSecondString
                            objDimensions.Item(jj).SuperfixString = strMergedString
                        End If

                    End If
                    If nstart <> 0 Then
                        strTmpString = strTextStringToBeChecked
                        Do While nstart <> 0
                            strParsedString = Mid(strTmpString, 1, nstart - 1)
                            strTmpString = Mid(strTmpString, nstart + 1, Len(strTextStringToBeChecked))
                            strTextStringCorrected = ""
                            TextStringToSpellCheck(strParsedString)
                            'replace the misspelled word
                            If strTextStringCorrected <> "" Then
                                replacestart = InStr(strTextStringToBeChecked, strParsedString, CompareMethod.Text)
                                strFirstString = Mid(strTextStringToBeChecked, 1, replacestart - 1)
                                strSecondString = Mid(strTextStringToBeChecked, replacestart + Len(strParsedString), Len(strTextStringToBeChecked))
                                strMergedString = strFirstString + strTextStringCorrected + strSecondString
                                strTextStringToBeChecked = strMergedString
                                objDimensions.Item(jj).SuperfixString = strMergedString
                            End If

                            nstart = InStr(1, strTmpString, " ", CompareMethod.Text)
                            If nstart = 0 Then
                                strParsedString = strTmpString
                                strTextStringCorrected = ""
                                TextStringToSpellCheck(strParsedString)

                                'replace the misspelled word
                                If strTextStringCorrected <> "" Then
                                    replacestart = InStr(strTextStringToBeChecked, strParsedString, CompareMethod.Text)
                                    strFirstString = Mid(strTextStringToBeChecked, 1, replacestart - 1)
                                    strSecondString = Mid(strTextStringToBeChecked, replacestart + Len(strParsedString), Len(strTextStringToBeChecked))
                                    strMergedString = strFirstString + strTextStringCorrected + strSecondString
                                    objDimensions.Item(jj).SuperfixString = strMergedString
                                End If
                            End If
                            strTextStringCorrected = ""
                        Loop
                    End If

                    strMergedString = ""
                    strSecondString = ""
                    strFirstString = ""
                    replacestart = 0
                    strParsedString = ""
                    nstart = 0
                    strTextStringCorrected = ""
                End If




            Next

        Catch ex As Exception

        End Try

        strMergedString = ""
        strSecondString = ""
        strFirstString = ""
        replacestart = 0
        strParsedString = ""
        nstart = 0
        strTextStringCorrected = ""

        If Not (objTextboxes Is Nothing) Then
            Marshal.ReleaseComObject(objTextboxes)
            objTextboxes = Nothing
        End If


        If Not (objBalloons Is Nothing) Then
            Marshal.ReleaseComObject(objBalloons)
            objBalloons = Nothing
        End If


        If Not (objDimensions Is Nothing) Then
            Marshal.ReleaseComObject(objDimensions)
            objDimensions = Nothing
        End If

        CleanUpMemory()


    End Function





    ' check the spelling of a word
    '
    ' returns True if the word is correct
    ' returns False if the word is not correct, and in this case it optionally
    ' returns a collection that contains all the suggested alternate words
    '
    ' NOTE: requires a reference to the Microsoft Word Object Library



    Function CheckSpelling(ByVal Word As String, ByRef suggestions As System.Collections.ArrayList) As Boolean
        Dim splSuggestion As Word.SpellingSuggestion
        Dim splSuggestions As Word.SpellingSuggestions

        ' Add a document, if there aren't any
        ' this is needed to get suggestions
        If MSWord.Documents.Count = 0 Then MSWord.Documents.Add()

        ' ensure there are no extra spaces
        Word = Trim$(Word)
        If MSWord.CheckSpelling(Word) Then

            ' the word is correct
            CheckSpelling = True
        Else
            ' the word is incorrect
            ' get the list of suggested words
            splSuggestions = MSWord.GetSpellingSuggestions(Word)
            For Each splSuggestion In splSuggestions
                suggestions.Add(splSuggestion.Name)
            Next
        End If

    End Function


    Public Function TextStringToSpellCheck(ByVal thing As String) As Boolean


        If Not CheckSpelling(strParsedString, suggestions) Then
            If SpellCheckForm Is Nothing Then
                SpellCheckForm = New Form1
                SpellCheckForm.ShowDialog()
            Else
                SpellCheckForm.ShowDialog()
            End If
        Else

        End If


    End Function

    Public Function ProcessText(ByVal strText As String, ByVal objObject As Object) As Boolean

    End Function

    Public Function WriteSEPropertyToOpenedFile(ByVal PropName As String, ByVal PropValue As String) As String
        Dim objProperties As Object
        Dim objProperty As Object
        Dim ii As Integer

        WriteSEPropertyToOpenedFile = " "

        Try
            objProperties = objSEApp.ActiveDocument.Properties


            For Each objProperty In objProperties
                For ii = 1 To objProperty.count

                    If objProperty.item(ii).Name.ToUpper = PropName.ToUpper Then
                        objProperty.item(ii).Value = PropValue
                        objProperties.save()

                        If Not (objProperty Is Nothing) Then
                            Marshal.ReleaseComObject(objProperty)
                            objProperty = Nothing
                        End If
                        If Not (objProperties Is Nothing) Then
                            Marshal.ReleaseComObject(objProperties)
                            objProperties = Nothing
                        End If
                        CleanUpMemory()
                        'Exit Function
                    End If
                Next

            Next



        Catch ex As Exception
            WriteSEPropertyToOpenedFile = "Error"
        Finally
            '' ''If Not (objProperty Is Nothing) Then
            '' ''    Marshal.ReleaseComObject(objProperty)
            '' ''    objProperty = Nothing
            '' ''End If
            '' ''If Not (objProperties Is Nothing) Then
            '' ''    Marshal.ReleaseComObject(objProperties)
            '' ''    objProperties = Nothing
            '' ''End If
        End Try

        CleanUpMemory()

    End Function


    Public Function WriteSEPropertyToFile(ByVal name As String, ByVal PropName As String, ByVal PropValue As String) As Boolean
        Dim objProperties As SolidEdgeFileProperties.Properties
        Dim objProperty As SolidEdgeFileProperties.Property

        CleanUpMemory()
        CleanUpMemory()


        SEFilePropertiesType = Type.GetTypeFromProgID("SolidEdge.FileProperties")
        Try
            propertySets = New SolidEdgeFileProperties.PropertySets
            propertySets.Open(name, True)
            For Each objProperties In propertySets

                For Each objProperty In objProperties
                    If objProperty.Name.ToUpper = PropName.ToUpper Then
                        objProperty.Value = PropValue
                        propertySets.Save()
                        WriteSEPropertyToFile = True
                        If Not (objProperty Is Nothing) Then
                            Marshal.ReleaseComObject(objProperty)
                            objProperty = Nothing
                        End If
                        If Not (objProperties Is Nothing) Then
                            Marshal.ReleaseComObject(objProperties)
                            objProperties = Nothing
                        End If
                        If Not (propertySets Is Nothing) Then
                            Marshal.ReleaseComObject(propertySets)
                            propertySets = Nothing
                        End If

                        CleanUpMemory()
                        Exit Function
                    End If
                Next
            Next


        Catch ex As Exception
            WriteSEPropertyToFile = False
        Finally
            'If Not (objProperty Is Nothing) Then
            '    Marshal.ReleaseComObject(objProperty)
            '    objProperty = Nothing
            'End If
            'If Not (objProperties Is Nothing) Then
            '    Marshal.ReleaseComObject(objProperties)
            '    objProperties = Nothing
            'End If
        End Try

        CleanUpMemory()

    End Function


    Public Function PullSEPropertyFromFile(ByVal name As String) As String
        Dim objProperties As SolidEdgeFileProperties.Properties
        Dim objProperty As SolidEdgeFileProperties.Property
        Dim nstart As Integer
        Dim replacestart As Integer
        Dim replaceend As Integer
        Dim strTmpString As String
        Dim strFirstString As String
        Dim strSecondString As String
        Dim strMergedString As String

        CleanUpMemory()
        CleanUpMemory()
        PullSEPropertyFromFile = ""
        On Error Resume Next

        'Try

        propertySets = New SolidEdgeFileProperties.PropertySets
        propertySets.Open(name, False)
        For Each objProperties In propertySets
            objProperties.Name.ToString()
            For Each objProperty In objProperties
                'If objProperty.Name.ToUpper = PropName.ToUpper Then
                'PullSEPropertyFromFile = CStr(objProperty.Value)
                If Trim(objProperty.Value) <> "" Then
                    strTextStringToBeChecked = CStr(objProperty.Value)
                    If Err.Number <> 0 Then
                        Err.Clear()
                        GoTo skip
                    End If
                    nstart = InStr(1, strTextStringToBeChecked, " ", CompareMethod.Text)
                    If nstart = 0 Then
                        strParsedString = strTextStringToBeChecked
                        strTextStringCorrected = ""
                        TextStringToSpellCheck(strTextStringToBeChecked)

                        'replace the misspelled word
                        If strTextStringCorrected <> "" Then
                            replacestart = InStr(strTextStringToBeChecked, strParsedString, CompareMethod.Text)
                            strFirstString = Mid(strTextStringToBeChecked, 1, replacestart - 1)
                            strSecondString = Mid(strTextStringToBeChecked, replacestart + Len(strParsedString), Len(strTextStringToBeChecked))
                            strMergedString = strFirstString + strTextStringCorrected + strSecondString

                            objProperty.Value = strMergedString
                        End If

                    End If
                    If nstart <> 0 Then
                        strTmpString = strTextStringToBeChecked
                        Do While nstart <> 0
                            strParsedString = Mid(strTmpString, 1, nstart - 1)
                            strTmpString = Mid(strTmpString, nstart + 1, Len(strTextStringToBeChecked))
                            strTextStringCorrected = ""
                            TextStringToSpellCheck(strParsedString)
                            'replace the misspelled word
                            If strTextStringCorrected <> "" Then
                                replacestart = InStr(strTextStringToBeChecked, strParsedString, CompareMethod.Text)
                                strFirstString = Mid(strTextStringToBeChecked, 1, replacestart - 1)
                                strSecondString = Mid(strTextStringToBeChecked, replacestart + Len(strParsedString), Len(strTextStringToBeChecked))
                                strMergedString = strFirstString + strTextStringCorrected + strSecondString
                                strTextStringToBeChecked = strMergedString
                                objProperty.Value = strMergedString
                            End If

                            nstart = InStr(1, strTmpString, " ", CompareMethod.Text)
                            If nstart = 0 Then
                                strParsedString = strTmpString
                                strTextStringCorrected = ""
                                TextStringToSpellCheck(strParsedString)

                                'replace the misspelled word
                                If strTextStringCorrected <> "" Then
                                    replacestart = InStr(strTextStringToBeChecked, strParsedString, CompareMethod.Text)
                                    strFirstString = Mid(strTextStringToBeChecked, 1, replacestart - 1)
                                    strSecondString = Mid(strTextStringToBeChecked, replacestart + Len(strParsedString), Len(strTextStringToBeChecked))
                                    strMergedString = strFirstString + strTextStringCorrected + strSecondString
                                    objProperty.Value = strMergedString
                                End If
                            End If
                            strTextStringCorrected = ""
                        Loop
                    End If
                    strMergedString = ""
                    strSecondString = ""
                    strFirstString = ""
                    replacestart = 0
                    strParsedString = ""
                    nstart = 0
                    strTextStringCorrected = ""


                End If
skip:
            Next
        Next

        propertySets.Save()


err:
        ' Catch ex As Exception

        'Finally
        'If Not (objProperty Is Nothing) Then
        '    Marshal.ReleaseComObject(objProperty)
        '    objProperty = Nothing
        'End If
        'If Not (objProperties Is Nothing) Then
        '    Marshal.ReleaseComObject(objProperties)
        '    objProperties = Nothing
        'End If
        If Not (propertySets Is Nothing) Then
            Marshal.ReleaseComObject(propertySets)
            propertySets = Nothing
        End If
        'End Try

        strMergedString = ""
        strSecondString = ""
        strFirstString = ""
        replacestart = 0
        strParsedString = ""
        nstart = 0
        strTextStringCorrected = ""

        CleanUpMemory()

    End Function

    Public Function PullSEPropertyFromOpenedFile() As String
        Dim objProperties As Object
        Dim objProperty As Object
        Dim ii As Integer

        Dim nstart As Integer
        Dim replacestart As Integer
        Dim replaceend As Integer
        Dim strTmpString As String
        Dim strFirstString As String
        Dim strSecondString As String
        Dim strMergedString As String

        On Error Resume Next



        'Try
        objProperties = objSEApp.ActiveDocument.Properties

        For Each objProperty In objProperties
            For ii = 1 To objProperty.count
                objProperty.item(ii).name.ToString()
                If Trim(objProperty.item(ii).value) <> "" Then
                    'If objProperty.item(ii).Name.ToUpper = PropName.ToUpper Then
                    'PullSEPropertyFromOpenedFile = CStr(objProperty.item(ii).Value)
                    strTextStringToBeChecked = CStr(objProperty.item(ii).Value)
                    If Err.Number <> 0 Then
                        Err.Clear()
                        GoTo skip
                    End If
                    nstart = InStr(1, strTextStringToBeChecked, " ", CompareMethod.Text)
                    If nstart = 0 Then
                        strParsedString = strTextStringToBeChecked
                        strTextStringCorrected = ""
                        TextStringToSpellCheck(strTextStringToBeChecked)

                        'replace the misspelled word
                        If strTextStringCorrected <> "" Then
                            replacestart = InStr(strTextStringToBeChecked, strParsedString, CompareMethod.Text)
                            strFirstString = Mid(strTextStringToBeChecked, 1, replacestart - 1)
                            strSecondString = Mid(strTextStringToBeChecked, replacestart + Len(strParsedString), Len(strTextStringToBeChecked))
                            strMergedString = strFirstString + strTextStringCorrected + strSecondString

                            objProperty.item(ii).Value = strMergedString
                        End If

                    End If
                    If nstart <> 0 Then
                        strTmpString = strTextStringToBeChecked
                        Do While nstart <> 0
                            strParsedString = Mid(strTmpString, 1, nstart - 1)
                            strTmpString = Mid(strTmpString, nstart + 1, Len(strTextStringToBeChecked))
                            strTextStringCorrected = ""
                            TextStringToSpellCheck(strParsedString)
                            'replace the misspelled word
                            If strTextStringCorrected <> "" Then
                                replacestart = InStr(strTextStringToBeChecked, strParsedString, CompareMethod.Text)
                                strFirstString = Mid(strTextStringToBeChecked, 1, replacestart - 1)
                                strSecondString = Mid(strTextStringToBeChecked, replacestart + Len(strParsedString), Len(strTextStringToBeChecked))
                                strMergedString = strFirstString + strTextStringCorrected + strSecondString
                                strTextStringToBeChecked = strMergedString
                                objProperty.item(ii).Value = strMergedString
                            End If

                            nstart = InStr(1, strTmpString, " ", CompareMethod.Text)
                            If nstart = 0 Then
                                strParsedString = strTmpString
                                strTextStringCorrected = ""
                                TextStringToSpellCheck(strParsedString)

                                'replace the misspelled word
                                If strTextStringCorrected <> "" Then
                                    replacestart = InStr(strTextStringToBeChecked, strParsedString, CompareMethod.Text)
                                    strFirstString = Mid(strTextStringToBeChecked, 1, replacestart - 1)
                                    strSecondString = Mid(strTextStringToBeChecked, replacestart + Len(strParsedString), Len(strTextStringToBeChecked))
                                    strMergedString = strFirstString + strTextStringCorrected + strSecondString
                                    objProperty.item(ii).Value = strMergedString
                                End If
                            End If


                            strTextStringCorrected = ""
                        Loop
                    End If

                    strMergedString = ""
                    strSecondString = ""
                    strFirstString = ""
                    replacestart = 0
                    strParsedString = ""
                    nstart = 0
                    strTextStringCorrected = ""


                End If


skip:


            Next

        Next

        ' Catch ex As Exception
        PullSEPropertyFromOpenedFile = ""
        ' Finally
        
        If Not (objProperties Is Nothing) Then
            Marshal.ReleaseComObject(objProperties)
            objProperties = Nothing
        End If

        'If Not (objProperty Is Nothing) Then
        '    Marshal.ReleaseComObject(objProperty)
        '    objProperty = Nothing
        'End If
        'End Try

        strMergedString = ""
        strSecondString = ""
        strFirstString = ""
        replacestart = 0
        strParsedString = ""
        nstart = 0
        strTextStringCorrected = ""

        CleanUpMemory()

    End Function

End Module

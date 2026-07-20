
Last modified: 4/6/2006
Source code: SpellCheckerForSolidEdgeDraft.sln

__________________________________
Requirements
This SE Draft add-in is developed in Microsoft Visual Studio .NET as a Visual Basic project.
-Solide Edge V19 or later
-Microsoft Word



__________________________________
Installation

The compiled executable, nSidePolygon.exe, is dependent on several interop assemblies:
- Interop.Microsoft.Office.Core.dll
- Interop.SolidEdgeFileProperties.dll
- Interop.VBIDE.dll
- Interop.Office.dll
- Interop.SolidEdgeFramework.dll
- Interop.Word.dll
- Interop.SolidEdgeDraft.dll
- Interop.SolidEdgeFrameworkSupport.dll



These files are delivered in the bin folder of the SpellCheckerForDraft folder.  If you copy SpellCheckerForSolidEdgeDraft.dll to a new location, copy the interop assembly files to the same location.

Double click the register.bat file to register the add-in.
If necessary double click the unregister.bat file to remove the command.





__________________________________
Known Limitations

-This tool uses the spell checker engine from Microsoft Word.  Therefore, Microsoft Word must be installed on the machine where this tool is going to be used.

-If you need to add words to the dictionary, currently this tool does not support this directly.  Instead, open a word document and use the WORD tools to add  the necessary word(s) to the dictionary.  Since this tool uses the WORD spell checker, this will allow this tool to take advantage of the updated dictionary.





__________________________________
General Usage

-SpellCheckerForSolidEdgeDraft.dll is an add-in tool, written in Visual Basic .Net, to spell check all text in a draft document.

-After registering the addin, an icon should be visible on the SE interface.  If it is not, use the add-in manager to make sure it is turned ON.  To spell check the draft document, simply click the icon and follow instructions on the UI.

-This tool uses Microsoft WORD as the spell checking engine.  Therefore, Microsoft WORD must be installed on each machine this tool will be used on.  If you   want to add words to the dictionary, simply open WORD and use it's functionality to add a word to the default dictionary.

-This tool should scan all sheets including background and working for any text.  The text can be in textboxes, dimensions, callouts, etc.  This tool will also  spell check all property values for any linked 3D models found.

-Make sure the spell checker add-in is truned on in the Add-In manager.  Simply double click the spell checker button to run the command.  The tool allows you   to ignore or change the mis-spelled word highlighted in RED with the selected suggested word on the dialog.
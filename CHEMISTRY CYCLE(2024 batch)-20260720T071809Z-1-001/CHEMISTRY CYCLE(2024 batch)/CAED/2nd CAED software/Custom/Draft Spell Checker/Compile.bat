ECHO OFF
CLS

SETLOCAL
PUSHD %VS71COMNTOOLS%
@call vsvars32.bat
POPD

C:\WINDOWS\Microsoft.NET\Framework\v2.0.50727\vbc.exe /win32resource:Addin.res /target:library /rootnamespace:SpellCheckerForSolidEdgeDraft /out:./bin/SpellCheckerForSolidEdgeDraft.dll /reference:System.dll,System.Drawing.dll,System.Windows.Forms.dll,./bin/Interop.SolidEdgeFramework.dll,./bin/Interop.Microsoft.Office.Core.dll,./bin/Interop.Office.dll,./bin/Interop.SolidEdgeDraft.dll,./bin/Interop.SolidEdgeFileProperties.dll,./bin/Interop.SolidEdgeFrameworkSupport.dll,./bin/INterop.VBIDE.dll,./bin/Interop.Word.dll *.vb

ENDLOCAL

ECHO Compile Complete
pause
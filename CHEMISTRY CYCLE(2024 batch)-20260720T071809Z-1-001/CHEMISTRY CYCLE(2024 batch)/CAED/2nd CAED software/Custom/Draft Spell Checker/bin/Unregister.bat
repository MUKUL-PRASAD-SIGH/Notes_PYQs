ECHO OFF
CLS



SET REGASMEXE=%SystemRoot%\Microsoft.Net\Framework\v2.0.50727\RegAsm.exe


CALL %REGASMEXE% /u ./SpellCheckerForSolidEdgeDraft.dll

ENDLOCAL

ECHO regasm Complete
pause
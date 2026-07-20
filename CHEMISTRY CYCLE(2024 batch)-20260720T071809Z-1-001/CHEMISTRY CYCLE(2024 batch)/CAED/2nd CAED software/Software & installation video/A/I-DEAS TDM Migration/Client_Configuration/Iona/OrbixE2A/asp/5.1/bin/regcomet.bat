@ECHO OFF
ECHO Registering COMet components.
ECHO.
IF "%IT_PRODUCT_DIR%" == "" SET IT_PRODUCT_DIR = C:\Progra~1\Iona
ECHO Registering it_c2k_simple_type_marshaller4_vc60.dll
CALL oleregit it_c2k_simple_type_marshaller4_vc60.dll /REGSERVER
ECHO Registering it_c2k_std_objects4_vc60.dll
CALL oleregit it_c2k_std_objects4_vc60.dll /REGSERVER
ECHO Registering it_c2k_complex_type_marshaller4_vc60.dll
CALL oleregit it_c2k_complex_type_marshaller4_vc60.dll /REGSERVER
ECHO Registering it_c2k_proxy_stub4_vc60.dll
CALL oleregit it_c2k_proxy_stub4_vc60.dll /REGSERVER
ECHO Registering it_c2k_cciexwrapper4_vc60.dll
CALL oleregit it_c2k_cciexwrapper4_vc60.dll /REGSERVER
IF EXIST "%IT_PRODUCT_DIR%\asp\5.1\bin\ts2idlsrv.exe" ECHO Registering ts2idlsrv.exe
IF EXIST "%IT_PRODUCT_DIR%\asp\5.1\bin\ts2idlsrv.exe" CALL "%IT_PRODUCT_DIR%\asp\5.1\bin\ts2idlsrv.exe" /REGSERVER
IF EXIST "%IT_PRODUCT_DIR%\asp\5.1\bin\it_c2k_wizard4_vb98.dll" ECHO Registering it_c2k_wizard4_vb98.dll
IF EXIST "%IT_PRODUCT_DIR%\asp\5.1\bin\it_c2k_wizard4_vb98.dll" CALL oleregit "%IT_PRODUCT_DIR%\asp\5.1\bin\it_c2k_wizard4_vb98.dll" /REGSERVER
ECHO.
ECHO COMet registration finished.

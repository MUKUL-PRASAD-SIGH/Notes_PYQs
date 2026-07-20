@echo off


:: If the script is called from InstallAnywhere, use the parmeters:
:: <IT_PRODUCT_DIR> <TEMP_DIR> [<JAVA_HOME>]

:: Do Windows NT & 2000 stuff here:
if NOT "%OS%" == "Windows_NT" goto SkipNTStart
:: Save current directory
for %%v in (.) do set CURR_DIR=%%~fv

:SkipNTStart
if [%1]==[] goto noparam

:: Change to some temprorary directory.  This avoids the FileChooser
:: bug when in the root directory (such as C:\):
if exist %2 cd %2

::If there is a directory parameter passed in, remove the quotes, if any.
::Sets IT_PRODUCT_DIR
echo %1 > %2\userinstalldir.bat
if exist %2\strip_quotes.exe call %2\strip_quotes.exe %2\userinstalldir.bat
if exist %2\userinstalldir.bat call %2\userinstalldir.bat

if "%IT_PRODUCT_VER%" == "" set IT_PRODUCT_VER=5.1

::If JAVA_HOME is passed in, use it.  If not, get it from the environment.
if NOT [%3]==[] set JAVA_HOME=%3

::Java executable
	set JAVA_EXEC=java
	if NOT "%JAVA_HOME%" == "" set JAVA_EXEC=%JAVA_HOME%\bin\java

if "%IT_LICENSE_FILE%" == "" set DESTINATION="%IT_PRODUCT_DIR%\etc\licenses.txt"
if NOT "%IT_LICENSE_FILE%" == "" set DESTINATION="%IT_LICENSE_FILE%"

::Include current settings in PATH
set PATH=%IT_PRODUCT_DIR%\asp\%IT_PRODUCT_VER%\bin;%IT_PRODUCT_DIR%\bin;%PATH%

echo %JAVA_EXEC% -classpath "%IT_PRODUCT_DIR%\asp\%IT_PRODUCT_VER%\lib\runtime\ifc.jar;%IT_PRODUCT_DIR%\asp\%IT_PRODUCT_VER%\lib\tools\license_installer.jar" com.iona.common.license.install.LicenseInstaller -name "Orbix" -dest %DESTINATION%

%JAVA_EXEC% -classpath "%IT_PRODUCT_DIR%\asp\%IT_PRODUCT_VER%\lib\runtime\ifc.jar;%IT_PRODUCT_DIR%\asp\%IT_PRODUCT_VER%\lib\tools\license_installer.jar" com.iona.common.license.install.LicenseInstaller -name "Orbix" -dest %DESTINATION%

del %2\userinstalldir.bat

goto end

:noparam
:: Avoid FileChooser bug, save current directory and change to
:: some temp dir:
if NOT "%TEMP%" == "" if exist %TEMP% cd %TEMP%
if NOT "%TMP%" == "" if exist %TMP% cd %TMP%

if "%IT_PRODUCT_VER%" == "" set IT_PRODUCT_VER=5.1

set DESTINATION="C:\Program Files\IONA\etc\licenses.txt"
if NOT "%IT_PRODUCT_DIR%" == "" set DESTINATION="%IT_PRODUCT_DIR%\etc\licenses.txt"
if NOT "%IT_CONFIG_DIR%" == "" set DESTINATION="%IT_CONFIG_DIR%\licenses.txt"
if NOT "%IT_LICENSE_FILE%" == "" set DESTINATION="%IT_LICENSE_FILE%"

if "%IT_PRODUCT_DIR%" == ""  set IT_PRODUCT_DIR=C:\Program Files\IONA
if "%IT_PRODUCT_DIR%" == "" if not exist "C:\Program Files\IONA" goto errorIPD

::Honor JAVA_HOME setting for Java executable, if set
set JAVA_EXEC=java
if NOT "%JAVA_HOME%" == "" set JAVA_EXEC=%JAVA_HOME%\bin\java

::Include current settings in PATH
set PATH=%IT_PRODUCT_DIR%\asp\%IT_PRODUCT_VER%\bin;%IT_PRODUCT_DIR%\bin;%PATH%

echo %JAVA_EXEC% -classpath "%IT_PRODUCT_DIR%\asp\%IT_PRODUCT_VER%\lib\runtime\ifc.jar;%IT_PRODUCT_DIR%\asp\%IT_PRODUCT_VER%\lib\tools\license_installer.jar" com.iona.common.license.install.LicenseInstaller -name "Orbix" -dest %DESTINATION%

%JAVA_EXEC% -classpath "%IT_PRODUCT_DIR%\asp\%IT_PRODUCT_VER%\lib\runtime\ifc.jar;%IT_PRODUCT_DIR%\asp\%IT_PRODUCT_VER%\lib\tools\license_installer.jar" com.iona.common.license.install.LicenseInstaller -name "Orbix" -dest %DESTINATION%

goto end


:errorIPD
echo Please set IT_PRODUCT_DIR to the directory that contains your Orbix installation.
goto end

:end
:: Do Windows NT & 2000 stuff here:
if NOT "%OS%" == "Windows_NT" goto SkipNTEnd
:: Restore current directory:
cd %CURR_DIR%

:SkipNTEnd
set DESTINATION=
set JAVA_EXEC=








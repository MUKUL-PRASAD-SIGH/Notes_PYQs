@echo off

setlocal

rem:

rem: nxna.bat: DOS script to run NX Nastran SOL 601/701 spawned from ISHELL

rem:

rem: Revision History:

rem: - 07/22/04: Revision 0

rem: - 03/29/05: Revision 1 (NXN 4)

rem:

set iret=0

echo *** ADVANCED NONLINEAR ANALYSIS ***

rem

rem Check that input file is ok

rem

set NASTBF=advnlin.op2

if not exist %NASTBF% goto ERROR0

rem

rem Make sure executables are ok

rem

set ADINADIR=%NXN_BASE%\%NXN_VERSD%\%NXN_ARCH%\adina

set progA=%ADINADIR%\adnast.exe

set progB=%ADINADIR%\nxadina.exe

if not exist "%progA%" goto ERROR1

if not exist "%progB%" goto ERROR2

rem

rem Check argument 8 for solution option

rem

if "%8" == "" goto ERROR3

rem

rem PROCESS NASTRAN FILE

rem

set TMPNAME=tmpadvnlin

echo *** TEMPORARY FILES %TMPNAME%.* WILL BE CREATED DURING ANALYSIS RUN ***

echo *** PROCESS NASTRAN DATA ***

if not "%NXNA_DEBUG%" == "" echo "%progA%" -nx %8 -o %TMPNAME%.dat %NASTBF%

rem

"%progA%" -nx %8 -o %TMPNAME%.dat %NASTBF%

if not exist "%TMPNAME%.dat" goto ERROR4

rem

rem Check argument 7 for memory in MB

rem

set rmem=

if not "%7" == "" set rmem=-R %7mb

if not "%NXNA_MEMORY%" == "" set rmem=-m %7mb

rem

rem EXECUTE SOLUTION

rem

echo.

echo *** EXECUTE SOLUTION ***

if not "%NXNA_DEBUG%" == "" echo "%progB%" -nx %8 %rmem% %TMPNAME%

rem

"%progB%" -nx %8 %rmem% %TMPNAME%

set iret=%errorlevel%

if %iret%==0 goto ERROR5

rem

if exist "%TMPNAME%.op2" move /Y %TMPNAME%.op2 fort.22

rem

if "%NXNA_FILEKEEP%" == "" goto FINISH

move /Y %TMPNAME%.dat %NXN_OUT%-1.dat

move /Y %NASTBF% %NXN_OUT%-1.nas

goto FINISH

rem

:ERROR0

echo *** FATAL ERROR: INPUT FILE %NASTBF% NOT FOUND.

echo *** PLEASE MAKE SURE THE NASTRAN INPUT FILE CONTAINS THE FOLLOWING LINE

echo ASSIGN OUTPUT2='advnlin.op2',UNIT=21

echo *** AT THE BEGINNING OF THE FILE.

goto FINISH

rem

:ERROR1

echo *** FATAL ERROR: %progA% CANNOT BE FOUND.

goto FINISH

rem

:ERROR2

echo *** FATAL ERROR: %progB% CANNOT BE FOUND.

goto FINISH

rem

:ERROR3

echo *** FATAL ERROR: SOLUTION OPTION NOT PASSED IN ARGUMENT 8 OF ISHELL.

goto FINISH

rem

:ERROR4

echo *** FATAL ERROR: PROCESSING OF NASTRAN DATA FAILED.

goto FINISH

rem

:ERROR5

echo *** FATAL ERROR: ADVANCED NONLINEAR ANALYSIS DID NOT FINISH SUCCESSFULLY.

rem

:FINISH

del %TMPNAME%.*

if exist %NASTBF% del %NASTBF%

echo *** ADVANCED NONLINEAR EXIT CODE %iret% ***

exit %iret%


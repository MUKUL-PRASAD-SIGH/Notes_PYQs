@echo off

REM Rahul R. Kajave 02/13/2007 PR5674974: Web Parts are not working when using 64bit Solid Edge.
REM Added script to Install/Uninstall 64 bit InsightUtils.dll into the GAC with 64 bit Solid Edge setup. 
REM	I have considered that the Win32 folder is residing under the Solid Edge Program directory.

@set UNINSTALL=NO
@set SILENT=NO

if "%1" == "/u" set UNINSTALL=YES
if "%1" == "/U" set UNINSTALL=YES
if "%1" == "-u" set UNINSTALL=YES
if "%1" == "-U" set UNINSTALL=YES
if "%1" == "/s" set SILENT=YES
if "%1" == "/S" set SILENT=YES
if "%1" == "-s" set SILENT=YES
if "%1" == "-S" set SILENT=YES

if "%2" == "/s" set SILENT=YES
if "%2" == "/S" set SILENT=YES
if "%2" == "-s" set SILENT=YES
if "%2" == "-S" set SILENT=YES

if "%UNINSTALL%" == "NO" goto Install

if "%SILENT%" == "NO" @echo *********** Uninstalling from GAC ***********
if "%SILENT%" == "YES" goto SilentUninstall

InstallAssemblyToGAC.exe WebServiceClient.dll /gac /u
InstallAssemblyToGAC.exe InsightUtils.dll /gac /u
if exist ..\InsightUtils.dll InstallAssemblyToGAC.exe InsightUtils.dll /gac /u

if "%UNINSTALL%" == "YES" goto done 
if "%UNINSTALL%" == "NO" goto Install

:SilentUninstall
InstallAssemblyToGAC.exe WebServiceClient.dll /gac /u /silent
InstallAssemblyToGAC.exe InsightUtils.dll /gac /u /silent
if exist ..\InsightUtils.dll InstallAssemblyToGAC.exe InsightUtils.dll /gac /u /silent

if "%UNINSTALL%" == "YES" goto done 

:Install
if "%SILENT%" == "NO" @echo *********** Installing to GAC ***********
if "%SILENT%" == "YES" goto SilentInstall

InstallAssemblyToGAC.exe WebServiceClient.dll /gac
InstallAssemblyToGAC.exe InsightUtils.dll /gac
if exist ..\InsightUtils.dll InstallAssemblyToGAC.exe ..\InsightUtils.dll /gac

if "%SILENT%" == "NO" goto done
:SilentInstall
InstallAssemblyToGAC.exe WebServiceClient.dll /gac /silent
InstallAssemblyToGAC.exe InsightUtils.dll /gac /silent
if exist ..\InsightUtils.dll InstallAssemblyToGAC.exe ..\InsightUtils.dll /gac /silent

:done

if "%SILENT%" == "NO" @echo *********** Done ***********

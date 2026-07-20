@echo off

set mydir=%~dp0
start javaw -classpath %mydir%\..\lib\j2ee-product.jar COM.cloudscape.tools.cview

@echo off
set EXE=%EDS_BASE%\%EDS_VERSD%\%EDS_ARCH%
echo cd "%EDS_BASE%\%EDS_VERSD%\util"
cd "%EDS_BASE%\%EDS_VERSD%\util"
echo nmake -e -f makefile.%EDS_ARCH% %1 %2 %3 %4 %5 %6 %7 %8 %9
nmake -e -f makefile.%EDS_ARCH% %1 %2 %3 %4 %5 %6 %7 %8 %9
echo cd "%EXE%"
cd "%EXE%"

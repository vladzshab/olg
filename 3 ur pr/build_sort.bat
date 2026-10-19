@echo off
chcp 1251 > nul

cd /d "%~dp0"

set CPP_FILES=main.cpp menu_function.cpp menu_items.cpp
set EXE=menu.exe
set CHARSET=-finput-charset=utf-8 -fexec-charset=windows-1251

if exist "%EXE%" del "%EXE%"

g++ %CHARSET% %CPP_FILES% -o "%EXE%"

if errorlevel 1 (
    echo Compilation error!
    pause
    exit /b 1
)

"%EXE%"
pause


pause
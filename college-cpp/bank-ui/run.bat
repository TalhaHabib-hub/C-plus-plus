@echo off
cd /d "%~dp0"
g++ -std=c++17 -Wall -Wextra server.cpp -lws2_32 -o bank-server.exe
if errorlevel 1 (
  echo.
  echo Could not compile the C++ server. Make sure MinGW g++ is installed and on PATH.
  pause
  exit /b 1
)
echo.
echo Starting the C++ banking server...
bank-server.exe
pause

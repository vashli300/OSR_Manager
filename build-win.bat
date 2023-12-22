@echo off
set SRC_DIR=src
set INCLUDE_DIR=include
set BIN_DIR=bin
set CC=gcc
set CFLAGS=-I%INCLUDE_DIR% -Wall

if not exist %BIN_DIR% mkdir %BIN_DIR%

for %%i in (%SRC_DIR%\*.c) do (
    echo %%i
    %CC% -o %BIN_DIR%\%%~ni.exe %%i %CFLAGS%
)

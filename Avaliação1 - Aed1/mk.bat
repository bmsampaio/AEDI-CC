REM @echo off
REM
REM Windows
REM
REM mk program input.txt output.txt
REM
REM
REM Compile
REM
gcc -o %1.exe %1.c
REM gcc -Wall -o %1.exe %1.c

REM
REM Execute
REM
%1<%2>%3

REM
REM Show output file
REM
type %3

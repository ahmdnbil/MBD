

call  "\\'hostname' is not recognized as an internal or external command,
operable program or batch file.\D$\Program Files\MATLAB\R2024a\bin\win64\checkMATLABRootForDriveMap.exe" "\\'hostname' is not recognized as an internal or external command,
operable program or batch file.\D$\Program Files\MATLAB\R2024a"  > mlEnv.txt
for /f %%a in (mlEnv.txt) do set "%%a"\n
cd .

if "%1"=="" ("D:\Program Files\MATLAB\R2024a\bin\win64\gmake" MATLAB_ROOT=%MATLAB_ROOT% ALT_MATLAB_ROOT=%ALT_MATLAB_ROOT% MATLAB_BIN=%MATLAB_BIN% ALT_MATLAB_BIN=%ALT_MATLAB_BIN%  -f untitled.mk all) else ("D:\Program Files\MATLAB\R2024a\bin\win64\gmake" MATLAB_ROOT=%MATLAB_ROOT% ALT_MATLAB_ROOT=%ALT_MATLAB_ROOT% MATLAB_BIN=%MATLAB_BIN% ALT_MATLAB_BIN=%ALT_MATLAB_BIN%  -f untitled.mk %1)
@if errorlevel 1 goto error_exit

exit /B 0

:error_exit
echo The make command returned an error of %errorlevel%
exit /B 1
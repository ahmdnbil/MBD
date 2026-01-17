
call "setup_mingw.bat"


call  "\\LAPTOP-SN15O4FK\D$\Program Files\MATLAB\R2024a\bin\win64\checkMATLABRootForDriveMap.exe" "\\LAPTOP-SN15O4FK\D$\Program Files\MATLAB\R2024a"  > mlEnv.txt
for /f %%a in (mlEnv.txt) do set "%%a"\n
cd .

if "%1"=="" ("%MINGW_ROOT%\mingw32-make.exe" MATLAB_ROOT=%MATLAB_ROOT% ALT_MATLAB_ROOT=%ALT_MATLAB_ROOT% MATLAB_BIN=%MATLAB_BIN% ALT_MATLAB_BIN=%ALT_MATLAB_BIN%  -f Subsystem.mk all) else ("%MINGW_ROOT%\mingw32-make.exe" MATLAB_ROOT=%MATLAB_ROOT% ALT_MATLAB_ROOT=%ALT_MATLAB_ROOT% MATLAB_BIN=%MATLAB_BIN% ALT_MATLAB_BIN=%ALT_MATLAB_BIN%  -f Subsystem.mk %1)
@if errorlevel 1 goto error_exit

exit /B 0

:error_exit
echo The make command returned an error of %errorlevel%
exit /B 1
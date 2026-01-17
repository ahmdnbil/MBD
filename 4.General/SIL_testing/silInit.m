setenv('MW_MINGW64_LOC', 'C:\MinGW');
mex -setup C++
set_param(gcs, 'MakeCommand', 'mingw32-make');
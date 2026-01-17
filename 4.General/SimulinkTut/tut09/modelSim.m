clc
clear 
new_system('test');
open_system('test');
add_block('simulink/Sources/Sine Wave','test/SineWave');
add_block('simulink/Sinks/Scope','test/SineScope');

set_param('test/SineWave','Position',[100 100 130 130]);   % Sine at (100,100)
set_param('test/SineScope','Position',[220 100 240 130]);   % Sine at (100,100)

add_line('test','SineWave/1','SineScope/1');

save_system('test');
function create_multirate_control_model()
    model = 'multirate_control_model';
    new_system(model);
    open_system(model);

    % Set solver to fixed-step discrete
    set_param(model, 'Solver', 'FixedStepDiscrete', ...
                     'SystemTargetFile', 'ert.tlc');

    % Base positions
    x0 = 100; y0 = 100; dx = 200;

    %% Add Subsystems
    add_block('built-in/Subsystem', [model '/SensorSubsystem'], ...
              'Position', [x0 y0 x0+100 y0+60]);

    add_block('built-in/Subsystem', [model '/ControllerSubsystem'], ...
              'Position', [x0+dx y0 x0+dx+100 y0+60]);

    add_block('built-in/Subsystem', [model '/LoggerSubsystem'], ...
              'Position', [x0+2*dx y0 x0+2*dx+100 y0+60]);

    %% Fill SensorSubsystem (Sine Wave -> Out)
    blk = [model '/SensorSubsystem'];
    add_block('simulink/Sources/Sine Wave', ...
              [blk '/SineWave'], 'Position', [30 50 80 80], ...
              'SampleTime', '0.001');
    add_block('simulink/Ports & Subsystems/Out1', ...
              [blk '/Out1'], 'Position', [130 50 160 80]);
    add_line(blk, 'SineWave/1', 'Out1/1');

    %% Fill ControllerSubsystem (In -> PID -> Out)
    blk = [model '/ControllerSubsystem'];
    add_block('simulink/Ports & Subsystems/In1', ...
              [blk '/In1'], 'Position', [20 50 50 80]);
    add_block('simulink/Discrete/Discrete PID Controller', ...
              [blk '/PID'], 'Position', [90 50 170 80], ...
              'SampleTime', '0.01');
    add_block('simulink/Ports & Subsystems/Out1', ...
              [blk '/Out1'], 'Position', [220 50 250 80]);
    add_line(blk, 'In1/1', 'PID/1');
    add_line(blk, 'PID/1', 'Out1/1');

    %% Fill LoggerSubsystem (In -> Scope)
    blk = [model '/LoggerSubsystem'];
    add_block('simulink/Ports & Subsystems/In1', ...
              [blk '/In1'], 'Position', [20 50 50 80]);
    add_block('simulink/Sinks/Scope', ...
              [blk '/Scope'], 'Position', [100 50 180 80]);
    set_param([blk '/Scope'], 'SampleTime', '0.1');
    add_line(blk, 'In1/1', 'Scope/1');

    %% Connect top-level subsystems
    add_line(model, 'SensorSubsystem/1', 'ControllerSubsystem/1', 'autorouting', 'on');
    add_line(model, 'ControllerSubsystem/1', 'LoggerSubsystem/1', 'autorouting', 'on');

    %% Save model
    save_system(model);
    fprintf('✅ Model "%s" created successfully.\n', model);
end

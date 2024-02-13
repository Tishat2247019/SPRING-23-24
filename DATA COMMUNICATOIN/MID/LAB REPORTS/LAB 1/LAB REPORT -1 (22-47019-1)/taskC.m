% ID = 22-47019-1 AB = 22, GH = 91, CDEF = 4701, DG = 79
t = linspace(-5, 5,80); % 80 samples
CDEF = 4701;
A1 = 22; %AB
phase_degree1 = 79; %j1
phase_rad1 = deg2rad(phase_degree1); %j1 
x1 = A1*sin(2*pi*CDEF*t + phase_rad1);
figure;
plot(t, abs(x1), 'r')
title('Amplitude plot of x1')
ylabel('Amplitude')
xlabel('t')
grid on;

figure;
plot(t, angle(x1), 'r')
title('Angle plot of x1')
grid on

% ID = 22-47019-1 , AB = 22, GH = 91, CDEF = 4701
A2 = 91; %GH
phase_degree2 = 30;% j2
phase_rad2 = deg2rad(phase_degree2); %j2
x2 = A2*cos(2*pi*CDEF*t + phase_rad2); % Here phase_rad2 = j2
figure;
plot(t, abs(x2))
title('Amplitude plot of x2')
ylabel('Amplitude')
xlabel('t')
grid on


figure;
plot(t, angle(x2))
title('Angle plot of x2')
grid on

% Phase verification
x1_phase_at_0_deg = phase_degree1; % Phase of x1 at t = 0 in degrees
x2_phase_at_0_deg = phase_degree2; % Phase of x2 at t = 0 in degrees

disp(['Phase of x1(t) at t = 0: ', num2str(x1_phase_at_0_deg), ' degrees']);
disp(['Phase of x2(t) at t = 0: ', num2str(x2_phase_at_0_deg), ' degrees']);

% Maximum amplitude verification
x1_max_amplitude = max(abs(x1)); % Maximum amplitude of x1
x2_max_amplitude = max(abs(x2)); % Maximum amplitude of x2

disp(['Maximum amplitude of x1(t): ', num2str(x1_max_amplitude)]);
disp(['Maximum amplitude of x2(t): ', num2str(x2_max_amplitude)]);

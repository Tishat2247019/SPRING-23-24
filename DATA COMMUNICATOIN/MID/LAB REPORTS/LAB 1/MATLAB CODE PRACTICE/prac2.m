% Constants
CDEF = 1; % Assume a value for CDEF
AB = 2; % Amplitude of x1
GH = 3; % Amplitude of x2
DG_deg = 45; % Phase of x1 in degrees
j2_deg = 30; % Phase of x2 in degrees

% Convert degrees to radians
DG_rad = deg2rad(DG_deg);
j2_rad = deg2rad(j2_deg);

% Time vector
t = linspace(-2, 2, 1000); % Adjust time range as needed

% Signal equations
x1 = AB * cos(2 * pi * CDEF * t + DG_rad);
x2 = GH * cos(2 * pi * CDEF * t + j2_rad);

% Plotting
plot(t, x1, 'b', t, x2, 'r');
xlabel('Time (s)');
ylabel('Amplitude');
title('Plot of x1(t) and x2(t)');
legend('x1(t)', 'x2(t)');
grid on;

figure, plot(t, abs(x1)), title('Amplitude plot')
figure, plot(t, angle(x1)), title('Phase plot')

% Phase verification
x1_phase_at_0_deg = rad2deg(DG_rad); % Phase of x1 at t = 0 in degrees
x2_phase_at_0_deg = j2_deg; % Phase of x2 at t = 0 in degrees

disp(['Phase of x1(t) at t = 0: ', num2str(x1_phase_at_0_deg), ' degrees']);
disp(['Phase of x2(t) at t = 0: ', num2str(x2_phase_at_0_deg), ' degrees']);

% Maximum amplitude verification
x1_max_amplitude = max(abs(x1)); % Maximum amplitude of x1
x2_max_amplitude = max(abs(x2)); % Maximum amplitude of x2

disp(['Maximum amplitude of x1(t): ', num2str(x1_max_amplitude)]);
disp(['Maximum amplitude of x2(t): ', num2str(x2_max_amplitude)]);


%{
ID = 22-47019-1
C = 4, F = 1
SO, F1 = C * 100 = 4 * 100 = 400
F2 = F * 100 = 1 * 100 = 100
A1 = GD = 97
A2 = AF = 21
%}
fs = 1000; % Sampling frequency
t = linspace(-2, 2, 1000); % 20 samples
f1 = 400; % Frequency of first signal
f2 = 100; % Frequency of second signal
A1 = 97; % Amplitude of first signal
A2 = 21; % Amplitude of second signal
x1 = A1 * cos(2 * pi * f1 * t); % First Signal
x2 = A2 * cos(2 * pi * f2 * t); % Second Signal

x3 = x1 + x2; % Composite signal x3

fx3 = fft(x3);

% Normalize the FFT
fx3 = fftshift(fx3) / length(x3);

% Define frequency vector based on the sampling frequency
f = fs/2 * linspace(-1, 1, length(x3));

plot(f, abs(fx3), 'LineWidth', 1.5)
title('Magnitude FFT of x3')
xlabel('Frequency (Hz)')
ylabel('Magnitude');

bandwidth = obw(x3,fs) %calculating the bandwith


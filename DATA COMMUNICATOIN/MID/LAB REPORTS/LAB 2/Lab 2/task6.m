% Define the parameters of the composite signal
Fs = 1000;          % Sampling frequency (Hz)
T = 1;              % Total duration of the signal (seconds)
t = 0:1/Fs:T-1/Fs;  % Time vector

% Define parameters for individual sine waves
frequencies = [5,15,25];      % Frequencies of sine waves (Hz)
amplitudes = [1, 0.5, 0.2];      % Amplitudes of sine waves
phases = [0, pi/4, pi/2];        % Phase offsets of sine waves

% Initialize the composite signal
composite_signal = zeros(1, length(t));

% Generate individual sine waves and add them to the composite signal
for i = 1:length(frequencies)
    sine_wave = amplitudes(i) * sin(2 * pi * frequencies(i) * t + phases(i));
    composite_signal = composite_signal + sine_wave;
end

% Plot the composite signal
figure;
plot(t, composite_signal);
xlabel('Time (s)');
ylabel('Amplitude');
title('Composite Signal');

% Optionally, you can play the composite signal
% sound(composite_signal, Fs);

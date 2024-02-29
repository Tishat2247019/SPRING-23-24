% Given values
AB = 2; % Amplitude A1
AF = 3; % Amplitude A2
AH = 1; % Amplitude s
C = 2; % Frequency C
G = 3; % Frequency G

% Generate time vector
t = linspace(0, 1, 1000);

% Generate composite signal
x = AB * sin(2*pi*(C*100)*t) + AF * cos(2*pi*(G*100)*t) + AH * randn(size(t));

% Calculate SNR
signal_power = AB^2 + AF^2;
noise_power = var(AH * randn(size(t)));
SNR = signal_power / noise_power;

disp(['SNR of the composite signal: ' num2str(SNR)]);

% Calculate bandwidth
bandwidth = max([C*100, G*100]);
disp(['Bandwidth of the signal: ' num2str(bandwidth) ' Hz']);

% Calculate maximum capacity of the channel using Shannon's formula
B = bandwidth;
C = B * log2(1 + SNR);
disp(['Maximum capacity of the channel: ' num2str(C) ' bits per second']);

% To achieve a certain data rate, you would typically need to adjust the
% signal level (amplitudes AB and AF). The specific level depends on the
% desired data rate and the noise characteristics.

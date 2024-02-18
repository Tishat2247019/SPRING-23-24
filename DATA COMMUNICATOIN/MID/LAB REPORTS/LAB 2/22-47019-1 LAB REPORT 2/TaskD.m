%{
ID = 22-47019-1
C = 4, F = 1
SO, F1 = C * 100 = 4 * 100 = 400
F2 = F * 100 = 1 * 100 = 100
A1 = GD = 97
A2 = AF = 21
%}

fs = 1000; % Sampling frequency
t = [0:1/fs:0.1];
fs = 1000; % Sampling frequency
t = linspace(-3, +3, 400);
f1 = 400; % Frequency of first signal
f2 = 100; % Frequency of second signal
A1 = 97; % Amplitude of first signal
A2 = 21; % Amplitude of second signal
x1 = A1 * cos(2 * pi * f1 * t); % First Signal
x2 = A2 * cos(2 * pi * f2 * t); % Second Signal

x3  = x1 + x2; % Composite signal x3

partition = [-2.5, -1.5, 0.0, 0.5,  1.5]; 

codebook = [-3:2]; 
[index, quants] = quantiz(x3, partition, codebook); % Quantize.
figure
plot(t, x3, 'x', t, quants, '.')
legend('Original signal', 'Quantized signal')





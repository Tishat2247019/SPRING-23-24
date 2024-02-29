%{
 ID: 22-47019-1 (AB-CDEFG-H)
SO, C = 4;
    G = 9;
    A1 = AB = 22;
    A2 = AF = 21;
    s = AH = 21;
%}
C = 4;
G = 9;
A1 = 22;
A2 = 21;
s = 21;
fs = 4000; % Sampling frequency
t = 0:1/fs:1-1/fs; % Time duration
x = A1*sin(2 * pi * (C*100) * t ) + A2*cos(2*pi*(G*100) * t) + s*randn(size(t)); %composite signal

powfund = A1^2/2 + A2^2/2;
varnoise = s^2;
%noise
noise = s*randn(size(x));

%noisy signal
noisySignal = x  + noise;
SNR = snr(noisySignal); %calculating the SNR using the snr function

bandwidth = obw(x,fs) % Bandwidth of the signal
C = bandwidth * log2(1+SNR) % Capacity of the channel
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


bandwidth = obw(x,fs); % Bandwidth of the signal
L=2; % Level of the signal
BitRate = 2*bandwidth*log2(L)
L = 2.^(BitRate/(2*bandwidth)) %Signal level to achieve data rate
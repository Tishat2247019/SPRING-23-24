%{
ID = 22-47018-1 , C = 4, F = 1
SO, F1 = C * 100 = 4 * 100 = 400
F2 = F * 100 = 1 * 100 = 100
A1 = GD = 87, A2 = AF = 21
%}
fs = 2000; 
t = linspace(-3, 3, 2000); 
f1 = 400; 
f2 = 100;
A1 = 87; 
A2 = 21;
x1 = A1 * cos(2 * pi * f1 * t); 
x2 = A2 * cos(2 * pi * f2 * t); 

x3 = x1 + x2; 

fx3 = fft(x3);


fx3 = fftshift(fx3) / length(x3);


f = fs/2 * linspace(-1, 1, length(x3));

bandwidth = obw(x3,fs) 

plot(f, abs(fx3), 'LineWidth', 1.5)
title('Magnitude FFT of x3')
xlabel('Frequency')
ylabel('Magnitude');




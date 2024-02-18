
%{
ID = 22-47018-1 , C = 4, F = 1
SO, F1 = C * 100 = 4 * 100 = 400
F2 = F * 100 = 1 * 100 = 100
A1 = GD = 87, A2 = AF = 21
%}

fs = 2000; 
t = [0:1/fs:0.1];
fs = 2000; 
t = linspace(-1, +1, 400);
f1 = 400; 
f2 = 100;
A1 = 87; 
A2 = 21; 
x1 = A1 * cos(2 * pi * f1 * t); 
x2 = A2 * cos(2 * pi * f2 * t); 

x3  = x1 + x2;

partition = [-2.5, -1.5, 0.0, 0.5,  1.5]; 

codebook = [-3:2]; 
[index, quants] = quantiz(x3, partition, codebook); 
figure
plot(t, x3, 'x', t, quants, '.')
legend('Original signal', 'Quantized signal')





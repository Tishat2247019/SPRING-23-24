%{
ID = 22-47018-1 , C = 4, F = 1
SO, F1 = C * 100 = 4 * 100 = 400
F2 = F * 100 = 1 * 100 = 100
A1 = GD = 87, A2 = AF = 21
%}

t = linspace(-3, + 3, 60); 
f1 = 400; 
f2 = 100;
A1 = 87; 
A2 = 21; 
x1 = A1*cos(2*pi*f1*t); 
x2 = A2*cos(2*pi*f2*t); 

x3  = x1 + x2; 
plot(t,x3,'LineWidth',1.5)
xlabel('time')
ylabel('Amplitude')
title('x1 + x2 =  x3')
%{ 
ID = 22-47018-1 AB-CDEFG-H
AB = 22
GH = 81
CDEF = 4701
DG = 78 
%}
t = linspace(-3, 3,90); 
CDEF = 4701;
A1 = 22; 
ph_deg01 = 78; 
ph_rad01 = deg2rad(ph_deg01);
x1 = A1*sin(2*pi*CDEF*t + ph_rad01);
figure;
plot(t, x1)
xlabel('t')
ylabel('X1')
title('This is plot of sin function')
grid on;

%{ 
ID = 22-47018-1 AB-CDEFG-H
AB = 22
GH = 81
CDEF = 4701
DG = 78 
%}
A2 = 81; 
ph_deg02 = 30;
ph_rad02 = deg2rad(ph_deg02); 
x2 = A2*cos(2*pi*CDEF*t + ph_rad02); 
figure;
plot(t, x2)
xlabel('t')
ylabel('X2')
title('This is the plot of cos function')
grid on;



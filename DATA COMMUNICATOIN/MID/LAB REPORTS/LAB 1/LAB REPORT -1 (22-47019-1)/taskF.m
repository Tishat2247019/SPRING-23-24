% ID = 22-47019-1 AB = 22, GH = 91, CDEF = 4701, DG = 79
t = linspace(-5, 5,80); % 80 samples
CDEF = 4701;
A1 = 22; %AB
phase_degree1 = 79; %j1
phase_rad1 = deg2rad(phase_degree1); %j1 
x1 = A1*sin(2*pi*CDEF*t + phase_rad1);


% ID = 22-47019-1 , AB = 22, GH = 91, CDEF = 4701
A2 = 91; %GH
phase_degree2 = 30;% j2
phase_rad2 = deg2rad(phase_degree2); %j2
x2 = A2*cos(2*pi*CDEF*t + phase_rad2); % Here phase_rad2 = j2


x3 = x1 + x2;
figure;
plot(t, abs(x3), 'r')
xlabel('t')
ylabel('x3')
title('Amplitude plot of x3')
ylabel('Amplitude')
xlabel('t')
grid on

figure;
plot(t, angle(x3))
xlabel('t')
ylabel('x3')
title('Angle plot of x3')
grid on
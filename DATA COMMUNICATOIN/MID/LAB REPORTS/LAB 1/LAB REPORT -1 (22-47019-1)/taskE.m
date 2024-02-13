% ID = 22-47019-1 AB = 22, GH = 91, CDEF = 4701, DG = 79
t = linspace(-5, 5,80); % 80 samples
CDEF = 4701;
A1 = 22; %AB
phase_degree1 = 79; %j1
phase_rad1 = deg2rad(phase_degree1); %j1 
x1 = A1*sin(2*pi*CDEF*t + phase_rad1);
subplot(3, 1, 1)
plot(t, x1, 'r')
xlabel('t')
ylabel('X1')
title('sin function')
grid on;

% ID = 22-47019-1 , AB = 22, GH = 91, CDEF = 4701
A2 = 91; %GH
phase_degree2 = 30;% j2
phase_rad2 = deg2rad(phase_degree2); %j2
x2 = A2*cos(2*pi*CDEF*t + phase_rad2); % Here phase_rad2 = j2
subplot(3, 1, 2)
plot(t, x2)
xlabel('t')
ylabel('X2')
title('cosine function')
grid on

x3 = x1 + x2;
subplot(3, 1, 3);
plot(t, x3, 'k');
xlabel('t')
ylabel('x3')
title('This is x3 = x1 + x2')
grid on
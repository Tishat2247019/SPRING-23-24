clc;
clear;

fs = 1000; % Sampling frequency
t = 0:1/fs:1-1/fs; % Time duration
f1 = 12; % Frequency of first signal
f2 = 6; % Frequency of second signal
A1 = 1.5; % Amplitude of first signal
A2 = 1.1; % Amplitude of second signal

x1 = A1*sin(2*pi*f1*t); % First Signal
x2 = A2*sin(2*pi*f2*t); % Second Signal

x=x1+x2;

%Plotting both signals in time domain
plot(t,x1,'k--o','LineWidth',1.5)
hold on
plot(t,x2,'b-*','LineWidth',2)
hold off
xlabel('time in seconds')
ylabel('Amplitude in volts')
title('Signals of different Frequencies')

%Take fourier transform
fx1 = fft(x1);
fx2 = fft(x2);

fx3=fft(x);

%apply fftshift to put it in the form we are used to (see documentation)

fx1 = fftshift(fx1)/(fs/2);
fx2 = fftshift(fx2)/(fs/2);
fx3= fftshift(fx3)/(fs/2);

%Next, calculate the frequency axis, which is defined by the sampling rate
f = fs/2*linspace(-1,1,fs);
%f = linspace(-1,1,fs);
%Since the signal is complex, we need to plot the magnitude to get it to
%look right, so we use abs (absolute value)

figure;
plot(f, abs(fx1), f, abs(fx2),'LineWidth',1.5);
%plot (f,abs(fx3),'LineWidth',1.5)
title('magnitude FFT of sine');
axis([-100 100 0 2])
xlabel('Frequency (Hz)');
ylabel('magnitude');

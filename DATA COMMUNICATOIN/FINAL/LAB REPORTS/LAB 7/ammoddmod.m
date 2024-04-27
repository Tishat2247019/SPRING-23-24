clc;
clear;

fs=3000;
t = 0:1/fs:1-1/fs;
fm=5; %frequency of your modulating signal/baseband signal (orginal information signal frequency) 
fc=100; % frequency of your carrier signal, we will use for AM modulation  

% Baseband Signal (Modulating Signal)
Am=20; % amplitude of your baseband signal 
m = Am.*sin(2*pi*fm*t); 

% Carrier Signal
Ac=20; % amplitude of your carrier singal
c= Ac.*sin(2*pi*fc*t);

% modulation index
mu=Am/Ac; % mu=10/20=0.5

% AM Modulated Signal
cam=(Ac.*(1+mu*sin(2*pi*fm*t))).*sin(2*pi*fc*t);

fftSignal = fft(cam); % This is frequency response of amplitude modulated signal (cam).
fftSignal = fftshift(fftSignal)/(fs/2);
f = fs/2*linspace(-1,1,fs);

% AM demodulatation part 
%am_demodulated = abs(hilbert(cam))-20;

%multiplying the am modulated signal with carrier signal
am_demodulated =cam.*c;
%Applying Low-Pass filter
[k,l] = butter(6,(100).*2/fs);
filtered_signal = filtfilt(k,l,(am_demodulated-200)./10) ;

% Plot the signals
figure;
subplot(4,1,1);
plot(t,m);
ylabel('amplitude');xlabel('time');
title('Modulating/Baseband Signal');
grid on

subplot(4,1,2);
plot(t,c);
ylabel('amplitude');xlabel('time');
title('Carrier Signal');
grid on

subplot(4,1,3);
plot(t,cam);
ylabel('amplitude');xlabel('time');
title('Amplitude Modulated Signal');
xlabel('Time (s)');
grid on

subplot(4,1,4);
%plot(t,am_demodulated);
plot(t,filtered_signal);
ylabel('Amplitude');xlabel('time');
title('Demodulated signal');
grid on

figure;
plot(f, abs(fftSignal));
axis([-200 200 0 25]);
title('FFT of AM modulated signal');
xlabel('Frequency (Hz)');
ylabel('Amplitude');


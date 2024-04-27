clc;
clear all;

fc=100; % frequency of the carrier signal
fm=20; % frequency of the modulating/baseband signal

fs=1000; % sampling frequency 
t = 0:1/fs:1-1/fs; % time domain range
A = 10;
M=A * cos(2*pi*fm*t);% modulating signal/message signal/baseband signal

c= A * sin(2*pi*fc*t); %carrier signal

fms =sin(2*pi*fc*t+2.*sin(2*pi*fm*t)); %FM modulated signal

fmdemod=2.*fmdemod(fms,fc,fs,(fc-fm)); % FM demodulated signal

subplot(4,1,1);
plot(t,M);
ylabel('amplitude');xlabel('time');title('Modulating/Baseband signal');

subplot(4,1,2);
plot(t,c);
ylabel('amplitude');xlabel('time');title('Carrier signal');

subplot(4,1,3);
plot(t,fms);
ylabel('amplitude');xlabel('time');title('Frequency Modulated signal');

subplot(4,1,4);
plot(t,fmdemod);
ylabel('amplitude');xlabel('time');title('Demodulated signal');

fftSignal = fft(fms);
fftSignal = fftshift(fftSignal)/(fs/2);
f = fs/2*linspace(-1,1,fs);

figure;
stem(f, abs(fftSignal));
title('FFT of FM modulated signal');
xlabel('Frequency (Hz)');
ylabel('magnitude');

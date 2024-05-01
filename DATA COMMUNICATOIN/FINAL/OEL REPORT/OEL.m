% Parameters 
Fs = 1000;              
% Sampling frequency 
T = 1/Fs;               
% Sampling period 
t = 0:T:1-T;   % Time vector 
 
% Digital data streams 
data1 = randi([0, 1], 1, length(t));   
% Example data stream 1 
data2 = randi([0, 1], 1, length(t));  
% Example data stream 2 

% ASK Modulation 
carrier_freq = 50;      % Carrier frequency 
A = 1;                  % Amplitude of the carrier wave 
 
% Modulate data streams into analog signals 
ask_signal1 = A * (data1 .* sin(2*pi*carrier_freq*t));  
% Modulated signal 1 
ask_signal2 = A * (data2 .* sin(2*pi*carrier_freq*t));   
% Modulated signal 2 
 
% Plot ASK-modulated signals figure; 
subplot(2,1,1); 
plot(t, ask_signal1); 
title('ASK-modulated Signal 1'); 
xlabel('Time'); 
ylabel('Amplitude'); 
subplot(2,1,2); 
plot(t, ask_signal2); 
title('ASK-modulated Signal 2'); 
xlabel('Time'); 
ylabel('Amplitude'); 
 
% Frequency Division Multiplexing (FDM) 
f1 = 50;    
% Frequency of signal 1 
f2 = 75;    
% Frequency of signal 2 
composite_signal = ask_signal1 + ask_signal2; 
% Composite FDM signal 
 
% Plot composite FDM signal 
figure; 
plot(t, composite_signal);
title('Composite FDM Signal'); 
xlabel('Time'); 
ylabel('Amplitude'); 
 
% Demultiplexing the composite FDM signal 
demux_signal1 = A * (sin(2*pi*f1*t) .* composite_signal);   
% Demodulated signal 1 
demux_signal2 = A * (sin(2*pi*f2*t) .* composite_signal);   
% Demodulated signal 2 
 
% Plot demultiplexed signals 
figure; 
subplot(2,1,1); 
plot(t, demux_signal1); 
title('Demultiplexed Signal 1'); 
xlabel('Time'); 
ylabel('Amplitude'); 
subplot(2,1,2); 
plot(t, demux_signal2);

title('Demultiplexed Signal 2'); 
xlabel('Time'); 
ylabel('Amplitude'); 

%{
ID: 22-47019-1 (AB-CDEFG-H);
A1 = GD = 97;
F = CDE = 470;


%}
A1 = 97; % Amplitude of the analog signal,  
Sampling_Frequency = 60e3; % Sampling frequency
CDE = 470; %Frequency of the analog signal
Num_Quantization_Levels = 8; % Number of quantization levels
Duration = 3; % Duration of the signal in seconds
Resolution = (2 * A1) / (2^Num_Quantization_Levels); % Step size 
t=0:1/Sampling_Frequency:0.001;

% Defining the analog signal
x1 = A1 * cos(2 * pi * (CDE * 100) * t); 

L=(2^Num_Quantization_Levels)-1;

delta=(max(x1)-min(x1))/L;

% Quantization
Quantized_Signal = min(x1)+(round((x1-min(x1))/delta)).*delta; %xq


% Plotting
stem(t, Quantized_Signal, 'r')
title('Quantized Signal')
xlabel('Time (s)')
ylabel('Amplitude')


clc;
clear all;

Transmitted_Message= 'FARJANA YESMIN OPI'

% Converting Information Message to bit%
x=asc2bn(Transmitted_Message); % Decimal to Binary conversion
bp=.000001; % bit duration
disp(' Binary information at Trans mitter :');
disp(x); %1x24

% Representation of transmitting binary information as digital signal
bit=[]; 
for n=1:1:length(x)  %1 to 24
    if x(n)==1;
       se=5*ones(1,100);
    else x(n)==0;
       se=zeros(1,100);
    end
     bit=[bit se]; %24x100=2400 % Dimnension will be 1x2400
end

% bit dimension is 1x2400=1x(24x100)

t1=bp/100:bp/100:100*length(x)*(bp/100); % dimension is 1x2400

subplot(4,1,1);
plot(t1,bit,'lineWidth',2.5);grid on;
axis([ 0 bp*length(x) -.5 6]);
ylabel('amplitude(volt)');
xlabel(' time(sec)');
title('Transmitting information as digital signal');

% Binary-ASK modulation 
A1=5;  % Amplitude of carrier signal for information 1
A2=0;  % Amplitude of carrier signal for information 0 bit
br=1/bp;  % bp is bit duration 
f=br*10;  % carrier frequency 

t2=bp/99:bp/99:bp; % size will be 1x99                 
ss=length(t2);

m=[]; % variable m will save the samples of ASK modulated signal (Tx side)

for (i=1:1:length(x))
    if (x(i)==1)
        y=A1*cos(2*pi*f*t2);
    else
        y=A2*cos(2*pi*f*t2); % output will be zero if original bit is 0
    end
    m=[m y]; % dimension of m 1x (24x99)=2376, 1x2376
end

t3=bp/99:bp/99:bp*length(x); %Dimension of t3 is 1x2376

subplot(4,1,2);
plot(t3,m);
axis([ 0 bp*length(x) -6 6]);
xlabel('time(sec)');
ylabel('amplitude(volt)');
title('Modulated Signal at Transmitter');
disp(' Message transmitted through a Transmission medium');

% Transmitter side task is done. We have ASK modulated signal 'm'

%Channel Noise (using mathematical formula)
%signal_power = mean(abs(m).^2);
%snr_dB=10;
%snr = 10^(snr_dB/10);
%noise_power = signal_power / snr;
%noise = sqrt(noise_power) * randn(size(m));
%Rec=m+noise;


%Channel Noise (using builtin 'agwn' function)

Rec=awgn(m,10); % Rec is the received signal at the receiver side

subplot(4,1,3);
plot(t3,Rec);
%axis([ 0 bp*length(x) -6 6]);
xlabel('time(sec)');
ylabel('amplitude(volt)');
title('Received signal at Receiver (Adding AWGN)');

%Receiver side task started from here
% Binary ASK demodulation 

mn=[]; % ASK demodulated signal for received signal 'Rec'

for n=ss:ss:length(Rec)
  t=bp/99:bp/99:bp;
  y=cos(2*pi*f*t);  % Carrier siignal 
  mm=y.*Rec((n-(ss-1)):n); % multifying the carrier signal with received ASK modulated signal
  % Arry index in mm signal: 99-(99-1)=99-98=1:n
  %to amplify the received ASK modulated signal amplitude
  z=trapz(t,mm) ; % intregation 
  zz=round((2*z/bp));
  %disp('vlaue of zz is')
  %disp(zz)
  if(zz>2.5)
    a=1;
  else
    a=0;
  end
  mn=[mn a];
end
disp('Binary information at Reciver :');
disp(mn);

% Representation of binary information as digital signal which achived 
% After ASK demodulation 

bit=[];
for n=1:length(mn);
    if mn(n)==1;
       se=5*ones(1,100);
    else mn(n)==0;
        se=zeros(1,100);
    end
     bit=[bit se];
end

t5=bp/100:bp/100:100*length(mn)*(bp/100);
subplot(4,1,4)
plot(t5,bit,'LineWidth',2.5);grid on;
axis([ 0 bp*length(mn) -.5 6]);
ylabel('amplitude(volt)');
xlabel(' time(sec)');
title('Demodulated signal at receiver');

%Converting Information bit to Message
Received_Message=bin2asc(mn)
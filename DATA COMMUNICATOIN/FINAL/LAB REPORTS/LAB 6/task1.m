
ff = 10;
f=4;
f2=8;


x=[1 0 1 0 1 1 1 0]; % input signal x

%nx=size(x,2); %length of the input signal (8)

nx=length(x); %nx=8

i=1;
while i<nx+1 % i<9 while loop start run till i=8 to catch each element in x
     t = i:0.001:i+1;  %represent the time domain for each sin signal 

    if x(i)==0
       ask=sin(2*pi*ff*t); % to represent 1 bit
       fsk=sin(2*pi*f*t); % low frequency to represent 1 bit, f=5 Hz
       psk=sin(2*pi*f*t + pi); % 0 degree phase shift for psk signal to represent 1 bit
   
    else %signal element will be 0 bit 
        ask=0;  %making almplitude 0 to represent 0 bit
        fsk=sin(2*pi*f2*t); %higher frequency to represent 0 bit, f2=10 Hz
        psk=sin(2*pi*f*t); % 180 degree phase shift to represent 0 bit 
    end
    
    subplot(3,1,1);
    plot(t,ask);
    hold on;
    grid on;
    axis([1 10 -1 1]); % define the range of the x- and y axis 
   
 title('Amplitude Shift Key')

    subplot(3,1,2);
    plot(t,fsk);
    hold on;
    grid on;
    axis([1 10 -1 1]);
title('Frequency Shift Key')

    subplot(3,1,3);
    plot(t,psk);
    hold on;
    grid on;
    axis([1 10 -1 1]);
 title('Phase Shift Key')

    i=i+1;
end
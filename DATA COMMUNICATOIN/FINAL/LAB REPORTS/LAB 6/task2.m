
f=5;

x=[00 10 01 11] % input signal ;

x1=[0 1 0 1]; % first bit stream
x2=[0 0 1 1]; % second bit stream 

%nx=size(x1,2);

nx=length(x1);

i=1; % array element 

while i<nx+1  % while loop condition 
    t = i:0.001:i+1; % define the domain t for each sin waveform

    if x1(i)==1  % checking if array element bit is 1 in x1 signal
       psk1=sin(2*pi*f*t); % 0 degree phase shift if bit is 1 in x1
    else
       psk1=sin(2*pi*f*t+pi); % 180 degree phase shift if bit is 0 in x1
    end
    
    if x2(i)==1
       psk2=sin(2*pi*f*t+pi/2); % 90 degree phase shift if bit is 1 in x2
    else
       psk2=sin(2*pi*f*t+pi+pi/2); % 270 degree phase shift if bit is 0 in x2
    end
    
    QPSK = psk1+psk2; % addition of psk1 and psk2 to obtain QPSK signal
    
    subplot(3,1,1);
    plot(t,psk1);
    hold on;
    grid on;
    axis([1 4 -1 1]);
    title('PSK1')
    
    subplot(3,1,2);
    plot(t,psk2);
    hold on;
    grid on;
    axis([1 4 -1 1]);
    title('PSK2')
 
    subplot(3,1,3);
    plot(t,QPSK);
    hold on;
    grid on;
    axis([1 4 -2 2]);
    title('QPSK')
 
    i=i+1;
end
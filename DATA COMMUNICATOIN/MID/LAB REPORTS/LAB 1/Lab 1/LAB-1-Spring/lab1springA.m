x=0:pi/100:2*pi;
y=sin(x);
y1=cos(x);
%plot(x,y)
%hold on
%plot (x,y1)

subplot(2,1,1)
plot(x,y)
xlabel('x')
ylabel('y')
title ('y=sin(x)')
grid on;

subplot(2,1,2)
plot(x,y1)
xlabel('x')
ylabel('y')
title ('y=cos(x)')
grid on;



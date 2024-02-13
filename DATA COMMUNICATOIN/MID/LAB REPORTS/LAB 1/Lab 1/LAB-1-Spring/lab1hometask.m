%t=0:pi/200:2*pi;
t=linspace(0,2*pi,1000);
A1=10;
A2=5;

x1=A1.*sin(2*pi*5*t);
x2=A2.*sin(2*pi*10*t+pi/2);

x3=x1+x2;


subplot(3,1,1)
plot (t,x1)
xlabel('t')
ylabel('x1')
grid on;

subplot(3,1,2)
plot(t,x2)
xlabel('t')
ylabel('x2')
grid on;

subplot(3,1,3)
plot(t,x3)
xlabel('t')
ylabel('x3=x1+x2')
grid on;
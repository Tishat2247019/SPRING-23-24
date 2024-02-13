clc;
clear;
t=0:pi/10000:2.*pi;


y=sin(2*pi*1*t);
y1=sin(2*pi*10*t);
y2=sin(2*pi*20*t);
y3=sin(2*pi*30*t);
y4=sin(2*pi*40*t);
y5=sin(2*pi*50*t);
y6=sin(2*pi*60*t);
y7=sin(2*pi*70*t);

y10=y+y1+y2+y3+y4+y5+y6+y7;

plot(t,y10)

%plot(t,y,t,y1,t,y3)
x1=0:pi/100:2*pi;
y1=sin(x1);
y2=sin(x1-0.25);
y3=sin(x1-0.5);

subplot (3,1,1)
plot(x1,y1)
subplot (3,1,2)
plot(x1,y2)
subplot (3,1,3)
plot(x1,y3)


%plot(x1,y1,x1,y2,x1,y3)
%plot(x1,y1,'b-*')
%hold on 
%plot(x1,y2,'g--')
%hold on
%plot (x1,y3,'r-+')

%grid on
%xlabel ('x')
%ylabel ('y')
%legend('y1','y2','y3')
%title ('sine wave plot')
%A=1
%theta=0

%y=Asin(w*t+theta)
%w=2*pi*f
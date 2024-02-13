x1 = 0:pi/100:2*pi; 
y1 = sin(x1); 
y2 = sin(x1-0.25); 
y3 = sin(x1-0.5); 
plot (x1,y1,'o-k')
hold on 
plot (x1,y2,'square-b')
hold on
plot (x1,y3,'diamond-r')
grid on
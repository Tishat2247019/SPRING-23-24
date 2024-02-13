 t = -pi:pi/100:pi;
 s = cos(t);
 subplot(2, 1, 1);
 plot(t,s)
 axis([-pi pi -1 1])
 xlabel('-\pi \leq t \leq \pi')
 ylabel('cos(t)')
title('The cosine function')
text(-1.5, -0.5,'This is a note at position (-2, -0)')

x = 0:pi/100:2*pi;
y = sin (x);
subplot(2, 1, 2);
plot(x, y);
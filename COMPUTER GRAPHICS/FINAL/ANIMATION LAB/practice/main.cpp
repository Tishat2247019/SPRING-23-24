#include <iostream>
#include<GL/gl.h>
#include <GL/glut.h>
using namespace std;


float scale = 1;
float scalex = 1;
float _movey2 = 0;
float _movex  = 0;

void lava(){
glPushMatrix();

glTranslatef(_movex, _movey2, 0);
glScalef(scalex,scale, 0);
glColor3f(1, 0, 0);
glBegin(GL_POLYGON);

//glVertex2f(-80, 48);
glVertex2f(-90, 50);
glVertex2f(-100, 40);
glVertex2f(-95, 35);
glVertex2f(-90, 40);
glVertex2f(-85, 35);
glVertex2f(-80, 40);
glVertex2f(-75, 35);
glVertex2f(-70, 40);
glVertex2f(-65, 35);
glVertex2f(-60, 40);
glVertex2f(-70, 50);

glEnd();

glPopMatrix();

}

int state = 1;
void animation_lava(int value){
switch(state){
case 1:
if (scale < 6){
    scale += 0.05;
scalex += 0.01;
_movey2 -= 2.5;
_movex += 0.9;
}
else
    state = 2;
break;

case 2:
if(scale > 3){
      scale -= 0.05;
    scalex -= 0.01;
    _movey2 += 2.5;
_movex -= 0.9;
}

else {
  state = 1;
}
break;

}

cout << scale << endl;
glutPostRedisplay();
glutTimerFunc(20, animation_lava, 0);
}

void display() {

glClearColor(1.0f, 1.0f, 1.0f, 1.0f);

glClear(GL_COLOR_BUFFER_BIT); // Clear the color buffer with current clearing color

//BOX1();
//BOX2();

//box1();
glPushMatrix();
glTranslatef(50, 0, 0);
lava();
glFlush(); // Render now
glPopMatrix();

}

/* Main function: GLUT runs as a console application starting at main() */

int main(int argc, char** argv) {

glutInitWindowSize(920, 720); // Set the window's initial width & height
glutInit(&argc, argv);

glutCreateWindow("Rotating Wheel"); // Create window with the given title


glutInitWindowPosition(50, 50); // Position the window's initial top-left corner

glutDisplayFunc(display); // Register callback handler for window re-paint event

//gluOrtho2D(0,+11,0,+10);
	gluOrtho2D(-140, +140, -80, +80);

//glutTimerFunc(20, box1move, 0);
//glutTimerFunc(20, box2move, 0);
glutTimerFunc(20, animation_lava, 0);


glutMainLoop(); // Enter the event-processing loop

return 0;

}

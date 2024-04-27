#include <iostream>
#include<GL/gl.h>
#include <GL/glut.h>
using namespace std;


float _move = 0.0f;
float _move1 = -7.0f;
int state1 = 1;
int state2 = 2;

void BOX1(){


//glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);


glPushMatrix();


glTranslatef(_move, 0.0f, 0.0f);
glBegin(GL_POLYGON); // These vertices form a closed polygon

glColor3f(1,0,0);

glVertex2f(4, 2);
glVertex2f(7, 2);
glVertex2f(7, 4);
glVertex2f(4, 4);


glEnd();

//glFlush();
glPopMatrix();

}

BOX2(){

glMatrixMode(GL_MODELVIEW);


glPushMatrix();

glTranslatef(_move1, 0.0f, 0.0f);

glBegin(GL_POLYGON); // These vertices form a closed polygon

glColor3f(1,1,0);

glVertex2f(4,6);
glVertex2f(7, 6);
glVertex2f(7, 8);
glVertex2f(4, 8);

glEnd();

glPopMatrix();


}


void box1move(int value) {

switch(state1){
  case 1:
if (_move < 4.0){
    _move += 0.4;
}
else{
    state1 = -1;
}
break;

    case -1:
if (_move > -4 ){
    _move  -= 0.4;
}
else {
    state1  = 1;
}
break;


}

glutPostRedisplay();
glutTimerFunc(20, box1move, 0);
}


//for animation bottom to up
void  box2move(int value) {

switch(state2){

    case 2:
if (_move1 < 4.0){
    _move1 += 0.43;
}
else{
    state2 = -2;
}
break;


    case -2:
if (_move1 > -4 ){
    _move1  -= 0.43;
}
else {
    state2  = 2;
}
break;

}
//cout << _move1 << endl;
glutPostRedisplay();
glutTimerFunc(20, box2move, 0);
}
void box1()

{

glMatrixMode(GL_MODELVIEW);
glPushMatrix();

glBegin(GL_QUADS);
glVertex2f(-0.8f, 1.0f);
glVertex2f(-0.8f, 0.8f);
glVertex2f(-0.6f, 0.8f);
glVertex2f(-0.6f, 1.0f);

glEnd();
glPopMatrix();

}

void box2(){

glMatrixMode(GL_MODELVIEW);
 glPushMatrix();
glBegin(GL_QUADS);
glVertex2f(-0.8f, -0.8f);
glVertex2f(-0.8f, -1.0f);
glVertex2f(-0.6f, -1.0f);
glVertex2f(-0.6f, -0.8f);

glEnd();
glPopMatrix();


}

void box3(){
glMatrixMode(GL_MODELVIEW);
glPushMatrix();

glBegin(GL_QUADS);
glVertex2f(0.6f, -0.8f);
glVertex2f(0.6f, -1.0f);
glVertex2f(0.8f,-1.0f);
glVertex2f(-0.8f, -0.8f);

glEnd();
glPopMatrix();

}

void box4(){
glMatrixMode(GL_MODELVIEW);


glPushMatrix();



glBegin(GL_QUADS);
glVertex2f(0.6f, 1.0f);
glVertex2f(0.6f, 0.8f);
glVertex2f(0.8f, 0.8f);
glVertex2f(0.8f, 1.0f);

glEnd();
glPopMatrix();

}

void display() {

glClearColor(0.0f, 0.0f, 0.0f, 1.0f);

glClear(GL_COLOR_BUFFER_BIT); // Clear the color buffer with current clearing color

//BOX1();
//BOX2();

box1();

glFlush(); // Render now

}

/* Main function: GLUT runs as a console application starting at main() */

int main(int argc, char** argv) {

glutInitWindowSize(720, 420); // Set the window's initial width & height
glutInit(&argc, argv);

glutCreateWindow("Rotating Wheel"); // Create window with the given title


glutInitWindowPosition(50, 50); // Position the window's initial top-left corner

glutDisplayFunc(display); // Register callback handler for window re-paint event

//gluOrtho2D(0,+11,0,+10);

//glutTimerFunc(20, box1move, 0);
//glutTimerFunc(20, box2move, 0);


glutMainLoop(); // Enter the event-processing loop

return 0;

}

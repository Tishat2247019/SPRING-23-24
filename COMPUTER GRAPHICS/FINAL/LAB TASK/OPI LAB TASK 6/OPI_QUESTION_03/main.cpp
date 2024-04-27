#include <windows.h>
#include <GL/glut.h>
#include<iostream>

using namespace std;

float _move = 0.0f;
float _move1 = 0.0f;
float _move3 = 0.0f;
float _move4= 0.0f;

int state1 = 1;
int state2 = 2;
int state3 = 3;
int state4 = 4;

void LINES() {

glLineWidth(2.5);


glBegin(GL_LINES);

glColor3f(0.0f, 0.0f, 0.0f);

glVertex2f(-1.0f, 0.0f);
glVertex2f(1.0f, 0.0f);

glVertex2f(0.0f, -1.0f);
glVertex2f(0.0f, 1.0f);

glEnd();

glFlush();
}

//Green Arrow
OBJECT1(){
    glLoadIdentity();

glMatrixMode(GL_MODELVIEW);
glPushMatrix();

glTranslatef(0.0f,_move,  0.0f);

glBegin(GL_POLYGON);
glColor3f(0.0f, 1.0f, 0.0f);

glVertex2f(0.2f, 0.3f);

glVertex2f(0.7f, 0.3f);

glVertex2f(0.7f, 0.5f);

glVertex2f(0.2f, 0.5f);

glEnd();

glBegin(GL_TRIANGLES);

glColor3f(0.0f, 1.0f, 0.0f);

glVertex2f(0.7f, 0.2f);

glVertex2f(0.9f, 0.4f);

glVertex2f(0.7f, 0.6f);

glEnd();


glPopMatrix();
glutSwapBuffers();

}

//Red object
OBJECT2(){
        glMatrixMode(GL_MODELVIEW);
glPushMatrix();

glTranslatef(_move3,0.0f,  0.0f);

glBegin(GL_QUADS);

glColor3f(1.0f, 0.0f, 0.0f);

glVertex2f(-0.6f, 0.2f);

glVertex2f(-0.2f, 0.2f);

glVertex2f(-0.2f, 0.6f);

glVertex2f(-0.6f, 0.6f);

glEnd();

glPopMatrix();
}

//Purple Triangle
OBJECT3(){

    glMatrixMode(GL_MODELVIEW);
glPushMatrix();

glTranslatef(0.0f,_move1,  0.0f);
glBegin(GL_TRIANGLES);//

glColor3ub(75,0,130);

glVertex2f(-0.6f, -0.5f);

glVertex2f(-0.2f,-0.8f);

glVertex2f(-.2f, -0.2f);

glEnd();

glPopMatrix();

}

//Yellow Triangle
OBJECT4(){

glMatrixMode(GL_MODELVIEW);
glPushMatrix();

glTranslatef(_move4,0.0f,  0.0f);
glBegin(GL_TRIANGLES);

glColor3ub(255,255,0);

glVertex2f(0.2f, -0.6f);

glVertex2f(0.8f,-0.6f);

glVertex2f(0.5f, -0.3f);

glEnd();

glPopMatrix();

}

//for object 1
void update(int value) {

switch(state1){

    case 1:
if (_move >  -1.2){
    _move -= 0.03;
}
else{
    state1 = -1;
}
break;

    case -1:
if (_move < 0.3 ){
    _move  += 0.03;
}
else {
    state1  = 1;
}
break;
}


//_move -= 0.02;


//cout << _move << endl;

/* _move -= .02;
if(_move < -2)
{
_move = 0.0f;
}*/
glutPostRedisplay();
glutTimerFunc(20, update, 0);
}


//for animation bottom to up
void update1(int value) {

switch(state2){

    case 2:
if (_move1 < 1.2){
    _move1 += 0.03;
}
else{
    state2 = -2;
}
break;

    case -2:
if (_move1 > -0.2 ){
    _move1  -= 0.03;
}
else {
    state2  = 2;
}
break;


}
  /*_move1 += .02;
if(_move1 > 2)
{
_move1 = 0.0f;
}*/
glutPostRedisplay();
glutTimerFunc(20, update1, 0);
}

void update3(int value) {

switch(state3){
    case 3:
if (_move3 < 1.2 ){
    _move3  += 0.03;
}
else {
    state3  = -3;
}
break;
    case -3:
if (_move3 > -0.4){
    _move3 -= 0.03;
}
else{
    state3 = 3;
}


break;
}
glutPostRedisplay();
glutTimerFunc(20, update3, 0);

}

void update4(int value) {

switch(state4){
    case 4:
if (_move4  > -1.2 ){
    _move4  -= 0.03;
}
else {
    state4  = -4;
}
break;

    case -4:
if (_move4 < 0.2){
    _move4 += 0.03;
}
else{
    state4 = 4;
}
break;
}

glutPostRedisplay();
glutTimerFunc(20, update4, 0);

}


void display() {

glClearColor(1.0f, 1.0f, 1.0f, 1.0f);

glClear(GL_COLOR_BUFFER_BIT); // Clear the color buffer with current clearing color

LINES();
OBJECT1();
OBJECT2();
OBJECT3();
OBJECT4();

glFlush(); // Render now

}


/* Main function: GLUT runs as a console application starting at main() */

int main(int argc, char** argv) {

glutInit(&argc, argv); // Initialize GLUT

glutInitWindowSize(720, 620); // Set the window's initial width & height
glutCreateWindow("2"); // Create window with the given title


glutDisplayFunc(display); // Register callback handler for window re-paint event
glutTimerFunc(20, update, 0);
glutTimerFunc(20, update1, 0);
glutTimerFunc(20, update3, 0);
glutTimerFunc(20, update4, 0);


glutMainLoop(); // Enter the event-processing loop

return 0;

}

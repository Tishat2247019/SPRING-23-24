#include <iostream>
#include<GL/gl.h>
#include <GL/glut.h>
#include<math.h>
using namespace std;



float _move = 0.0f;
float _move1 = 0.0f;
void flood_cirlce();
int state1 = 1;
int state2 = 2;


void drawScene() {
glClear(GL_COLOR_BUFFER_BIT);
glColor3d(1,0,0);

glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);

glPushMatrix();


glTranslatef(_move,0.0f,  0.0f); // for bottom to up movement
glBegin(GL_POLYGON);
glVertex2f(0.6f, 1.0f);
glVertex2f(0.6f, 0.8f);
glVertex2f(0.8f, 0.8f);
glVertex2f(0.8f, 1.0f);

glEnd();
glPopMatrix();



 glPushMatrix();


//glTranslatef(0.0f,_move1,  0.0f); // for bottom to up movement
glBegin(GL_POLYGON);
glVertex2f(-0.8f, -0.8f);
glVertex2f(-0.8f, -1.0f);
glVertex2f(-0.6f, -1.0f);
glVertex2f(-0.6f, -0.8f);

glEnd();
glPopMatrix();





glutSwapBuffers();
}



//for object 1
void update(int value) {

switch(state1){



    case 1:
if (_move < 0.2){
    _move += 0.03;
}
else{
    state1 = -1;
}
break;

    case -1:
if (_move > -1.6 ){
    _move  -= 0.03;
}
else {
    state1  = 1;
}
break;


}

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
if (_move1 > 0.0){
    _move1 -= 0.03;
}
else{
    state2 = -2;
}
break;

    case -2:
if (_move1 < 1.8 ){
    _move1  += 0.03;
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



int main(int argc, char** argv) {
glutInit(&argc, argv);
glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
glutInitWindowSize(800, 800);
glutCreateWindow("Transformation");
//gluOrtho2D(-2,2,-2,2);
glutDisplayFunc(drawScene);
glutTimerFunc(20, update, 0); //Add a timer
glutTimerFunc(20, update1, 0); //Add a timer
glutMainLoop();
return 0;
}

#include <iostream>
#include<GL/gl.h>
#include <GL/glut.h>
using namespace std;



float _move = 0.0f;
int state = 1;
void drawScene() {

glClear(GL_COLOR_BUFFER_BIT);
glColor3d(1,0,0);
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);

glPushMatrix();

glTranslatef(_move, 0.0f, 0.0f); //for right to left movement

//glTranslatef(0.0f,_move,  0.0f); // for bottom to up movement
glBegin(GL_QUADS);
glVertex2f(0.5f, 0.0f);
glVertex2f(0.1f, 0.0f);
glVertex2f(0.1f, 0.2f);
glVertex2f(0.5f, 0.2);
glEnd();
glPopMatrix();
glutSwapBuffers();
}


//for animation right to left
void update(int value) {

switch(state){
case 1:
    if (_move < 0.5){
        _move += 0.03;
    }
    else{
        state = -1;
    }
    break;

case -1:
    if (_move > - 1.1){
        _move -= 0.03;
    }

    else{
        state = 1;
    }
    break;

}

 /*_move -= .02;
if(_move < -1.6)
{
_move = 0.5;
}*/
glutPostRedisplay();
glutTimerFunc(20, update, 0);
}


//for animation bottom to up
void update1(int value) {

 _move += .02;
if(_move > 0.5)
{
_move = -1.6;
}
glutPostRedisplay();
glutTimerFunc(20, update1, 0);
}



int main(int argc, char** argv) {
glutInit(&argc, argv);
glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
glutInitWindowSize(800, 800);
glutCreateWindow("Transformation");
glutDisplayFunc(drawScene);
gluOrtho2D(-10, 10, -5, 5);
glutTimerFunc(20, update1, 0); //Add a timer
glutMainLoop();
return 0;
}

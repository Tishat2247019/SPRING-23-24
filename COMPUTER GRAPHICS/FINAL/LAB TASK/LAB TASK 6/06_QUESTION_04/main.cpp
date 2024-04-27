#include <iostream>
#include<GL/gl.h>
#include <GL/glut.h>
using namespace std;



float _move = 0.0f;
float _move1 = 0.0f;
float _move3 = 0.0f;
float _move4= 0.0f;

int state1 = 1;
int state2 = 2;
int state3 = 3;
int state4 = 4;

bool a = false;
bool b = false;
bool c = false;
bool d = false;


void drawScene() {
glClear(GL_COLOR_BUFFER_BIT);
glColor3d(1,0,0);
//glLoadIdentity(); //Reset the drawing perspective


glMatrixMode(GL_MODELVIEW);


glPushMatrix();


glTranslatef(0.0f,_move,  0.0f); // for bottom to up movement
glBegin(GL_QUADS);
glVertex2f(0.6f, 1.0f);
glVertex2f(0.6f, 0.8f);
glVertex2f(0.8f, 0.8f);
glVertex2f(0.8f, 1.0f);

glEnd();
glPopMatrix();



 glPushMatrix();


glTranslatef(0.0f,_move1,  0.0f); // for bottom to up movement
glBegin(GL_QUADS);
glVertex2f(-0.8f, -0.8f);
glVertex2f(-0.8f, -1.0f);
glVertex2f(-0.6f, -1.0f);
glVertex2f(-0.6f, -0.8f);

glEnd();
glPopMatrix();


glPushMatrix();
glTranslatef(_move3, 0.0f, 0.0f); // for bottom to up movement
glBegin(GL_QUADS);
    glVertex2f(-0.8f, 1.0f);
    glVertex2f(-0.8f, 0.8f);
    glVertex2f(-0.6f, 0.8f);
    glVertex2f(-0.6f, 1.0f);
    glEnd();

glPopMatrix();

glPushMatrix();
glTranslatef(_move4, 0.0f, 0.0f); // for bottom to up movement
 glBegin(GL_QUADS);
    glVertex2f(0.6f, -0.8f);
    glVertex2f(0.6f, -1.0f);
    glVertex2f(0.8f, -1.0f);
    glVertex2f(0.8f, -0.8f);
    glEnd();

glPopMatrix();



glutSwapBuffers();
}


//for object 1
void update(int value) {
if (a){
switch(state1){

    case 1:
if (_move < 0.0){
    _move += 0.03;
}
else{
    state1 = -1;
}
break;

    case -1:
if (_move > -1.8 ){
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
}
glutTimerFunc(20, update, 0);
}


//for animation bottom to up
void update1(int value) {

if (b){
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
    }
glutTimerFunc(20, update1, 0);
}

void update3(int value) {
if (c){
switch(state3){
    case 3:
if (_move3 < 1.6 ){
    _move3  += 0.03;
}
else {
    state3  = -3;
}
break;
    case -3:
if (_move3 > -0.2){
    _move3 -= 0.03;
}
else{
    state3 = 3;
}


break;
}
glutPostRedisplay();
}
glutTimerFunc(20, update3, 0);

}

void update4(int value) {
if (d){
switch(state4){
    case 4:
if (_move4  > -1.6 ){
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
}
glutTimerFunc(20, update4, 0);

}

void handleKeypress(unsigned char key, int x, int y) {
	switch (key) {
case 'i':
    a = !a;
cout << "I pressed" << endl;

    break;
case 'j':
    b = !b;
cout <<" j pressed" << endl;
    break;
case 'k':
    c = !c;
cout << "k pressed" << endl;

    break;
case 'l':
    d = !d;
cout << "d pressed" << endl;
    break;

	}
glutPostRedisplay();

	}





int main(int argc, char** argv) {
glutInit(&argc, argv);
glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
glutInitWindowSize(800, 800);
glutCreateWindow("Transformation");
//gluOrtho2D(-2,2,-2,2);
glutDisplayFunc(drawScene);
 glutKeyboardFunc(handleKeypress);
glutTimerFunc(20, update, 0); //Add a timer
glutTimerFunc(20, update1, 0); //Add a timer
glutTimerFunc(20, update3, 0); //Add a timer
glutTimerFunc(20, update4, 0); //Add a timer
glutMainLoop();
return 0;
}

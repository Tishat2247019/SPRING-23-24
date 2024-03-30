#include <iostream>
#include<GL/gl.h>
#include <GL/glut.h>
#include <windows.h>
using namespace std;

float pos = 0.0f;
void drawScene() {
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3d(1,0,0);
	glLoadIdentity(); //Reset the drawing perspective
	glMatrixMode(GL_MODELVIEW);

    glPushMatrix();
    //glTranslatef(0.3,0.1,0.0);
	//glRotatef(_angle1, 0.0f, 0.0f,1.0f);
	//glTranslatef(-0.3,-0.1,0.0);

    //glTranslatef(0.3,0.1,0.0);
	glScalef(pos, pos, 0.0f);
	glTranslatef(-0.3,-0.1,0.0);
    glBegin(GL_QUADS);
        glVertex2f(0.1f, 0.0f);
        glVertex2f(0.5f, 0.0f);
        glVertex2f(0.5f, 0.2f);
        glVertex2f(0.1f, 0.2);
	glEnd();
    glPopMatrix();

	glutSwapBuffers();
}

void update1(int value){

pos += 0.1f;
if (pos > 10.0){
    pos = 0.0;
}
glutPostRedisplay(); //Notify GLUT that the display has changed

	glutTimerFunc(20, update1, 0); //Notify GLUT to call update again in 20 milliseconds
}

/*void update(int value) {

    _angle1+=2.0f;
    if(_angle1 > 360.0)
    {
        _angle1-=360;
    }
	glutPostRedisplay(); //Notify GLUT that the display has changed

	glutTimerFunc(20, update, 0); //Notify GLUT to call update again in 20 milliseconds
}
*/

int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
	glutInitWindowSize(800, 800);
	glutCreateWindow("Transformation");
	glutDisplayFunc(drawScene);
	glutTimerFunc(20, update1, 0); //Add a timer
	glutMainLoop();
	return 0;
}

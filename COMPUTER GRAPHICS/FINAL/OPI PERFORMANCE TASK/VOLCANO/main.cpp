#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h
#include <cstdlib>
#include <ctime>
#include<iostream>
using namespace std;


/* Handler for window-repaint event. Call back when the window first appears and
whenever the window needs to be re-painted. */



int max_lava_ground = 1;
float scale = 1;
int state = 1;

float scale_groundy = 1;
float scale_groundx = 1;
float tans_groundx = 0;
float tans_groundy = 0;

float _move = 1;
float _movey = 0;

float _movey2 = 0;

void flood(int value){
if (_move < 220)
 _move += 0.3;
if (_move >= 220){
    _movey += 0.1;
    //_move = 0;
}
 //cout << _move << endl;
glutPostRedisplay();

glutTimerFunc(20, flood, 0);


}
void river(){

glPushMatrix();
glColor3f(0,0,1);
glBegin(GL_POLYGON);

glVertex2f(-140, -80);
glVertex2f(-140, -20);
glVertex2f(140, -20);
glVertex2f(140, -80);

glEnd();



glPopMatrix();
}

void green_ground(){

glColor3f(0, 1, 0);
glBegin(GL_POLYGON);

glVertex2f(-140,-20);
glVertex2f(-140,0);
glVertex2f(140,0);
glVertex2f(140,-20);


glEnd();

}







void hill_lava02(){



glColor3f(0.839, 0.529, 0.157);
glBegin(GL_POLYGON);

glVertex2f(-140, 0);
glVertex2f(-90, 50);
glVertex2f(-80, 48);
glVertex2f(-70, 50);
glVertex2f(-20, 00);

glEnd();

    glLineWidth(4.5);
glBegin(GL_LINES);
glColor3f(0, 0, 0);
glVertex2f(-140, 0);
glVertex2f(-90, 50);
glVertex2f(-90, 50);
glVertex2f(-80, 48);
glVertex2f(-80, 48);
glVertex2f(-70, 50);
glVertex2f(-70, 50);
glVertex2f(-20, 00);
glEnd();

//lava

glPushMatrix();

glTranslatef(0,_movey2, 0);
glScalef(1, scale, 0);
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
glutSwapBuffers();




}








void animation_lava(int value){
if (scale < 6.90){
scale += 0.01;
_movey2 -= 0.5;
}



//cout << scale << endl;
glutPostRedisplay();
glutTimerFunc(20, animation_lava, 0);
}



void display() {
    //cout << cound_gound << endl;
	glClearColor(0.11, 0.51, 0.88, 1.0f); // Set background color to black and opaque
	glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)

    green_ground();


    glPushMatrix();
    glTranslatef(70, 0, 0);
    hill_lava02();

    glPopMatrix();
    river();

	glFlush();  // Render now

}

/* Main function: GLUT runs as a console application starting at main()  */
int main(int argc, char** argv) {
	glutInit(&argc, argv);                 // Initialize GLUT
	glutInitWindowSize(920, 520);   // Set the window's initial width & height
	glutCreateWindow("OpenGL Setup Test"); // Create a window with the given title
		glutDisplayFunc(display); // Register display callback handler for window re-paint
	gluOrtho2D(-140, +140, -80, +80);


	glutTimerFunc(20, animation_lava, 0);

	glutMainLoop();           // Enter the event-processing loop
	return 0;
}

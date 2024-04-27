#include <windows.h>
#include <GL/glut.h>
#include<iostream>

using namespace std;
float r = 0;
float g = 0;
float b = 0;

void WINDOW() {


glBegin(GL_POLYGON);

glColor3f(0.545f, 0.271f, 0.075f);

glVertex2f(1.79, 1.8);

glVertex2f(2.03, 1.797);

glVertex2f(2.03, 6.51);

glVertex2f(1.79, 6.48);

glEnd();

glBegin(GL_POLYGON);

glVertex2f(2.03, 6.51);

glVertex2f(2.03, 1.797);

glVertex2f(3.18, 1.92);

glVertex2f(3.18, 5.72);

glEnd();

glBegin(GL_POLYGON);

glVertex2f(3.18, 5.72);

glVertex2f(7.16, 5.72);

glVertex2f(7.466, 5.938);

glVertex2f(2.862, 5.938);

glEnd();

glBegin(GL_POLYGON);

glVertex2f(7.16, 1.92);

glVertex2f(8.27, 1.79);

glVertex2f(8.27, 6.51);

glVertex2f(7.16, 5.72);

glEnd();

glBegin(GL_POLYGON);

glVertex2f(2.797, 1.72);

glVertex2f(7.449, 1.72);

glVertex2f(7.449, 1.89);

glVertex2f(7.16, 1.92);

glVertex2f(3.18, 1.92);

glVertex2f(2.797, 1.89);

glEnd();

//view

glMatrixMode(GL_MODELVIEW);

glPushMatrix();

glColor3f(r, g, b);

glBegin(GL_POLYGON);

glVertex2f(3.18, 1.92);

glVertex2f(7.16, 1.92);

glVertex2f(7.16, 5.72);

glVertex2f(3.18, 5.72);

glEnd();

//glFlush();

glPopMatrix();

}


void change(int valule){

    r += 0.02;
    g += 0.02;
  //  b -= 0.2;
//cout << r << endl;
    glutPostRedisplay();
    glutTimerFunc(200, change, 0);
}

void display() {

glClearColor(1.0f, 1.0f, 1.0f, 1.0f);

glClear(GL_COLOR_BUFFER_BIT); // Clear the color buffer with current clearing color

WINDOW();

glFlush(); // Render now

}


/* Main function: GLUT runs as a console application starting at main() */

int main(int argc, char** argv) {

glutInit(&argc, argv); // Initialize GLUT

glutInitWindowSize(720, 520); // Set the window's initial width & height
glutCreateWindow("WINDOW VIEW"); // Create window with the given title

//glutInitWindowPosition(50, 50); // Position the window's initial top-left corner

glutDisplayFunc(display); // Register callback handler for window re-paint event

gluOrtho2D(0,+10,0,+8);
glutTimerFunc(200, change, 0);

glutMainLoop(); // Enter the event-processing loop

return 0;

}

#include <math.h>
#include <windows.h> // for MS Windows

#include <GL/glut.h> // GLUT, include glu.h and gl.h

/* Handler for window-repaint event. Call back when the window first appears and

whenever the window needs to be re-painted. */
void WORD_B(){

glBegin(GL_POLYGON);

glColor3f(0, 0.0, 0);

glVertex2f(-11, 3);

glVertex2f(-11 , -3);

glVertex2f(-10, -3);
glVertex2f(-10, 3);

glEnd();
glBegin(GL_POLYGON);
glVertex2f(- 10, 3);

glVertex2f(-10, 2);

glVertex2f(-7, 2);
glVertex2f(-7, 3);


glEnd();
glBegin(GL_POLYGON);

glVertex2f(-10, 1.2);

glVertex2f(-10, 0.5);
glVertex2f(-7, 0.5);
glVertex2f(-7, 1.2);

glEnd();




glBegin(GL_POLYGON);

glVertex2f(-10, 0);

glVertex2f(-11, -3);
glVertex2f(-9, -3);
glVertex2f(-9, 0);

glEnd();

glBegin(GL_POLYGON);

glVertex2f(-8, 0);

glVertex2f(-8, -3);
glVertex2f(-7, -3);
glVertex2f(-7, 0);

glEnd();

glBegin(GL_POLYGON);
glVertex2f(- 10, 0);

glVertex2f(-10, -1);

glVertex2f(-7, -1);
glVertex2f(-7, 0);


glEnd();
glBegin(GL_POLYGON);

glVertex2f(-10, -2);

glVertex2f(-10, -3);
glVertex2f(-7, -3);
glVertex2f(-7, -2);

glEnd();

glBegin(GL_POLYGON);

glVertex2f(-10, 3);

glVertex2f(-10, 0.5);
glVertex2f(-8.99, 0.5);
glVertex2f(-9, 3);

glEnd();

glBegin(GL_POLYGON);

glVertex2f(-8, 3);

glVertex2f(-8, 0.5);
glVertex2f(-7, 0.5);
glVertex2f(-7, 3);

glEnd();






}

void WORD_R(){

glBegin(GL_POLYGON);

glColor3f(0, 0.0, 0);

glVertex2f(-6, 3);
glVertex2f(-6, -3);
glVertex2f(-5, -3);
glVertex2f(-5, 3);

glEnd();

glBegin(GL_POLYGON);

glVertex2f(-5, 3);
glVertex2f(-5, 1);
glVertex2f(-4, 1);
glVertex2f(-4, 3);
glEnd();
glBegin(GL_POLYGON);

glVertex2f(-3, 3);
glVertex2f(-3, 1);
glVertex2f(-2, 1);
glVertex2f(-2, 3);
glEnd();

glBegin(GL_POLYGON);
glVertex2f(-5, 0);
glVertex2f(-2, -3);
glVertex2f(-2, -1.5);
glVertex2f(-5, 1);
glEnd();

glBegin(GL_POLYGON);
glVertex2f(-5, 3);
glVertex2f(-5, 2.5);
glVertex2f(-2, 2.5);
glVertex2f(-2, 3);
glEnd();

glBegin(GL_POLYGON);
glVertex2f(-5, 1.5);
glVertex2f(-5, 1);
glVertex2f(-2, 1);
glVertex2f(-2, 1.5);
glEnd();


}

void WORD_A(){

glBegin(GL_POLYGON);

glColor3f(0, 0.0, 0);

glVertex2f(-1, 3);
glVertex2f(-1, -3);
glVertex2f(0, -3);
glVertex2f(0, 3);

glEnd();

glBegin(GL_POLYGON);

glVertex2f(0, 3);
glVertex2f(0, 2);
glVertex2f( 1, 2);
glVertex2f(1, 3);
glEnd();

glBegin(GL_POLYGON);
glVertex2f(1, 3);
glVertex2f(1, -3);
glVertex2f(2, -3);
glVertex2f(2, 3);
glEnd();

glBegin(GL_POLYGON);
glVertex2f(0, 0.5);
glVertex2f(0, -0.5);
glVertex2f(1, -0.5);
glVertex2f(1, 0.5);
glEnd();

}
void WORD_V(){

glBegin(GL_POLYGON);

glColor3f(0, 0.0, 0);

glVertex2f(3, 3);
glVertex2f(5, -3);
glVertex2f(5, 0);
glVertex2f(4, 3);

glEnd();

glBegin(GL_POLYGON);

glVertex2f(6, 3);
glVertex2f(5, 0);
glVertex2f(5, -3);
glVertex2f(7, 3);
glEnd();


}

void WORD_O(){

glBegin(GL_POLYGON);

glColor3f(0, 0.0, 0);

glVertex2f(8,3);
glVertex2f(8, -3);
glVertex2f(9, -3);
glVertex2f(9,3);

glEnd();

glBegin(GL_POLYGON);

glVertex2f(8, 3);
glVertex2f(8, 2);
glVertex2f(11, 2);
glVertex2f(11,3);
glEnd();

glBegin(GL_POLYGON);

glVertex2f(10.1, 3);
glVertex2f(10.1, -3);
glVertex2f(11, -3);
glVertex2f(11, 3);
glEnd();

glBegin(GL_POLYGON);

glVertex2f(8, -2);
glVertex2f(8, -3);
glVertex2f(11, -3);
glVertex2f(11, -2);
glEnd();

}



void display() {

glClearColor(1.0f, 1.0f, 1.0f, 1.0f);

glClear(GL_COLOR_BUFFER_BIT);

glLineWidth(3.5);


WORD_B();
WORD_R();
WORD_A();
WORD_V();
WORD_O();

glFlush(); // Render now

}

/* Main function: GLUT runs as a console application starting at main() */

int main(int argc, char** argv) {

glutInitWindowSize(920, 520); // Set the window's initial width & height
glutInit(&argc, argv); // Initialize GLUT

glutCreateWindow("OpenGL Setup"); // Create a window with the given title


glutDisplayFunc(display); // Register display callback handler for window re-paint

gluOrtho2D(-12, +12, -4, +4);
glutMainLoop(); // Enter the event-processing loop
return 0;

}





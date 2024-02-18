#include <math.h>
#include <windows.h> // for MS Windows

#include <GL/glut.h> // GLUT, include glu.h and gl.h

/* Handler for window-repaint event. Call back when the window first appears and

whenever the window needs to be re-painted. */
void WORD_N(){

glBegin(GL_POLYGON);

glColor3f(0, 0.0, 0);

glVertex2f(-9, 1.5);

glVertex2f(-9, -1.5);

glVertex2f(-8.5, -1.5);
glVertex2f(-8.5, 1.5);

glEnd();
glBegin(GL_POLYGON);
glVertex2f(-8.5, 0.8);

glVertex2f(-7, -1.5);

glVertex2f(-7, -0.8);
glVertex2f(-8.5, 1.5);


glEnd();
glBegin(GL_POLYGON);

glVertex2f(-7, 1.5);

glVertex2f(-7, -1.5);
glVertex2f(-6.5, -1.5);
glVertex2f(-6.5, 1.5);

glEnd();







}

void WORD_E(){

glBegin(GL_POLYGON);

glColor3f(0, 0.0, 0);

glVertex2f(-6, 1.5);
glVertex2f(-6, -1.5);
glVertex2f(-5.5, -1.5);
glVertex2f(-5.5, 1.5);

glEnd();

glBegin(GL_POLYGON);

glVertex2f(-5.5, 1.5);
glVertex2f(-5.5, 1);
glVertex2f(-4, 1);
glVertex2f(-4, 1.5);
glEnd();

glBegin(GL_POLYGON);
glVertex2f(-5.5, -0.2);
glVertex2f(-4.6, -0.2);
glVertex2f(-4.6, 0.2);
glVertex2f(-5.5, 0.2);
glEnd();

glBegin(GL_POLYGON);
glVertex2f(-5.5, -1.5);
glVertex2f(-4, -1.5);
glVertex2f(-4, -1);
glVertex2f(-5.5, -1);
glEnd();

}

void WORD_P(){

glBegin(GL_POLYGON);

glColor3f(0, 0.0, 0);

glVertex2f(-3.5, 1.5);
glVertex2f(-3.5, -1.5);
glVertex2f(-3, -1.5);
glVertex2f(-3, 1.5);

glEnd();

glBegin(GL_POLYGON);

glVertex2f(-3, 1.5);
glVertex2f(-1.5, 1.5);
glVertex2f(-1.5, 1);
glVertex2f(-3, 1);
glEnd();

glBegin(GL_POLYGON);
glVertex2f(-2, 1);
glVertex2f(-2, 0);
glVertex2f(-1.5, 0);
glVertex2f(-1.5, 1);
glEnd();

glBegin(GL_POLYGON);
glVertex2f(-3, 0);
glVertex2f(-1.5, 0);
glVertex2f(-1.5, -0.5);
glVertex2f(-3, -0.5);
glEnd();

}
void WORD_T(){

glBegin(GL_POLYGON);

glColor3f(0, 0.0, 0);

glVertex2f(-1, 1);
glVertex2f(1, 1);
glVertex2f(1, 1.5);
glVertex2f(-1, 1.5);

glEnd();

glBegin(GL_POLYGON);

glVertex2f(-0.2, 1);
glVertex2f(-0.2, -1.5);
glVertex2f(0.2, -1.5);
glVertex2f(0.2, 1);
glEnd();


}

void WORD_U(){

glBegin(GL_POLYGON);

glColor3f(0, 0.0, 0);

glVertex2f(1.5, 1.5);
glVertex2f(1.5, -1.5);
glVertex2f(2, -1.5);
glVertex2f(2, 1.5);

glEnd();

glBegin(GL_POLYGON);

glVertex2f(2, -1);
glVertex2f(2, -1.5);
glVertex2f(3, -1.5);
glVertex2f(3, -1);
glEnd();

glBegin(GL_POLYGON);

glVertex2f(3, 1.5);
glVertex2f(3, -1.5);
glVertex2f(3.5, -1.5);
glVertex2f(3.5, 1.5);
glEnd();

}

void WORD_N2(){

glBegin(GL_POLYGON);

glColor3f(0, 0.0, 0);

glVertex2f(4, 1.5);
glVertex2f(4, -1.5);
glVertex2f(4.5, -1.5);
glVertex2f(4.5, 1.5);

glEnd();

glBegin(GL_POLYGON);

glVertex2f(4.5, 0.8);
glVertex2f(6, -1.5);
glVertex2f(6, -0.8);
glVertex2f(4.5, 1.5);
glEnd();


glBegin(GL_POLYGON);

glVertex2f(6, 1.5);
glVertex2f(6, -1.5);
glVertex2f(6.5, -1.5);
glVertex2f(6.5, 1.5);
glEnd();

}
void WORD_E2(){

glBegin(GL_POLYGON);

glColor3f(0, 0.0, 0);

glVertex2f(7, 1.5);
glVertex2f(7, -1.5);
glVertex2f(7.5, -1.5);
glVertex2f(7.5, 1.5);

glEnd();

glBegin(GL_POLYGON);

glVertex2f(7.5, 1.5);
glVertex2f(7.5, 1);
glVertex2f(9, 1);
glVertex2f(9, 1.5);
glEnd();

glBegin(GL_POLYGON);
glVertex2f(7.5, 0.2);
glVertex2f(7.5, -0.2);
glVertex2f(8.6, -0.2);
glVertex2f(8.6, 0.2);
glEnd();

glBegin(GL_POLYGON);
glVertex2f(7.5, -1);
glVertex2f(7.5, -1.5);
glVertex2f(9, -1.5);
glVertex2f(9, -1);
glEnd();

}




void display() {

glClearColor(1.0f, 1.0f, 1.0f, 1.0f);

glClear(GL_COLOR_BUFFER_BIT);

glLineWidth(3.5);


WORD_N();
WORD_E();
WORD_P();
WORD_T();
WORD_U();
WORD_N2();
WORD_E2();


glFlush(); // Render now

}

/* Main function: GLUT runs as a console application starting at main() */

int main(int argc, char** argv) {

glutInitWindowSize(920, 520); // Set the window's initial width & height
glutInit(&argc, argv); // Initialize GLUT

glutCreateWindow("OpenGL Setup"); // Create a window with the given title


glutDisplayFunc(display); // Register display callback handler for window re-paint

gluOrtho2D(-10, +10, -2, +2);
glutMainLoop(); // Enter the event-processing loop
return 0;

}





#include <math.h>
#include <windows.h> // for MS Windows

#include <GL/glut.h> // GLUT, include glu.h and gl.h

/* Handler for window-repaint event. Call back when the window first appears and

whenever the window needs to be re-painted. */
void WORD_B(){

glBegin(GL_POLYGON);

glColor3f(1, 1.0, 0);
glVertex2f(-8, 1.5);
glVertex2f(-8 , -1.5);
glVertex2f(-7.5, -2);
glVertex2f(-6.5, -2);
glVertex2f(-6, -1.5);
glVertex2f(-6, 0);
glVertex2f(-6.5, 0.5);
glVertex2f(-6, 1);
glVertex2f(-6, 1.5);
glVertex2f(-6.5, 2);
glVertex2f(-7.5, 2);

glEnd();


glBegin(GL_POLYGON);
glColor3f(1, 0, 0);
glVertex2f(- 7.5, 0.8);
glVertex2f(-6.9, 0.8);
glVertex2f(-6.7, 1);
glVertex2f(-6.7, 1.2);
glVertex2f(-6.9, 1.4);
glVertex2f(-7.5, 1.4);


glEnd();

glBegin(GL_POLYGON);
glColor3f(1, 0, 0);
glVertex2f(-7.5, -1.4);
glVertex2f(-6.7, -1.4);
glVertex2f(-6.5, -1.2);
glVertex2f(-6.5, -0.2);
glVertex2f(-6.7, 0);
glVertex2f(-7.5, 0);

glEnd();

}

void WORD_R(){

glBegin(GL_POLYGON);

glColor3f(0, 0, 0);

glVertex2f(-5.5, 1.5);
glVertex2f(-5.5, -2);
glVertex2f(-5, -2);
glVertex2f(-5, 0);
glVertex2f(-4.7, 0);
glVertex2f(-3.5, -2);
glVertex2f(-3.15, -1.65);
glVertex2f(-4.15, 0);
glVertex2f(-3.5, 0.4);
glVertex2f(-3.5, 1.4);
glVertex2f(-4, 2);
glVertex2f(-5, 2);

glEnd();

glBegin(GL_POLYGON);
glColor3f(1, 0.0, 0);
glVertex2f(-5, 0.4);
glVertex2f(-4.3, 0.4);
glVertex2f(-4.1, 0.6);
glVertex2f(-4.1, 1);
glVertex2f(-4.3, 1.2);
glVertex2f(-5, 1.2);
glEnd();

}

void WORD_A(){

glBegin(GL_POLYGON);

glColor3f(1, 1.0, 1);

glVertex2f(-1.3, 2);
glVertex2f(-2.7, -1.5);
glVertex2f(-2.3, -2);
glVertex2f(-1.6, -0.6);
glVertex2f(-0.6, -0.6);
glVertex2f(0.1, -2);
glVertex2f(0.6, -1.5);
glVertex2f(-0.8, 2);

glEnd();

glBegin(GL_POLYGON);
glColor3f(1, 0.0, 0);
glVertex2f(-1.5, 0);
glVertex2f(-0.7, 0);
glVertex2f( -1.05, 1);

glEnd();

}
void WORD_V(){

glBegin(GL_POLYGON);

glColor3f(0, 0, 0.7);

glVertex2f(0.2, 1.5);
glVertex2f(1.9, -2);
glVertex2f(2.9, -2);
glVertex2f(4.3, 1.5);
glVertex2f(3.7, 2);
glVertex2f(2.3, -0.7);
glVertex2f(0.8, 2);

glEnd();

glBegin(GL_POLYGON);

glColor3f(1, 0.0, 0);
glVertex2f(3.7, 2);
glVertex2f(2.3, -0.6);
glVertex2f(0.8, 2);
glEnd();
}

void WORD_O(){

glBegin(GL_POLYGON);

glColor3f(0, 0.4, 0);

glVertex2f(5.7,1.9);
glVertex2f(5.2, 1.7);
glVertex2f(4.8, 1.3);
glVertex2f(4.6, 0.9);
glVertex2f(4.5, 0.3);
glVertex2f(4.5, -0.5);
glVertex2f(4.6,-1.1);
glVertex2f(4.8,-1.5);
glVertex2f(5.15,-1.9);
glVertex2f(5.7,-2.1);
glVertex2f(6.7,-2.1);
glVertex2f(7.2,-1.9);
glVertex2f(7.6,-1.5);
glVertex2f(7.8,-1.1);
glVertex2f(7.9,-0.5);
glVertex2f(7.9,0.4);
glVertex2f(7.8,0.9);
glVertex2f(7.6, 1.3);
glVertex2f(7.2, 1.7);
glVertex2f(6.7, 1.9);
glVertex2f(5.7, 1.9);

glEnd();

glBegin(GL_POLYGON);

glColor3f(1, 0.0, 0);
glVertex2f(6, 0.9);
glVertex2f(5.8, 0.85);
glVertex2f(5.7, 0.75);
glVertex2f(5.65, 0.65);
glVertex2f(5.6, 0.55);
glVertex2f(5.6, -0.85);
glVertex2f(5.64, -0.92);
glVertex2f(5.7, -0.98);
glVertex2f(5.8, -1.04);
glVertex2f(6, -1.1);
glVertex2f(6.4, -1.1);
glVertex2f(6.6, -1.04);
glVertex2f(6.7, -0.96);
glVertex2f(6.76, -0.86);
glVertex2f(6.8, -0.74);
glVertex2f(6.8, 0.6);
glVertex2f(6.7, 0.75);
glVertex2f(6.6, 0.85);
glVertex2f(6.4, 0.9);

glEnd();


}



void display() {

glClearColor(1.0f, 0.0f, 0.0f, 0.0f);

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

glutInitWindowSize(920, 320); // Set the window's initial width & height
glutInit(&argc, argv); // Initialize GLUT

glutCreateWindow("OpenGL Setup"); // Create a window with the given title


glutDisplayFunc(display); // Register display callback handler for window re-paint

gluOrtho2D(-8.5, +8.5, -2.5, +2.5);
glutMainLoop(); // Enter the event-processing loop
return 0;

}





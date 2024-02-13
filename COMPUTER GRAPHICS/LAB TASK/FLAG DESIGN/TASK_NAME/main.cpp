#include <math.h>
#include <windows.h> // for MS Windows

#include <GL/glut.h> // GLUT, include glu.h and gl.h

/* Handler for window-repaint event. Call back when the window first appears and

whenever the window needs to be re-painted. */
void WORD_T(){

glBegin(GL_LINES);

glColor3f(0, 0.0, 0);

glVertex2f(-0.6, 0.1);

glVertex2f(-.5, 0.1);

glVertex2f(-.5, 0.1);

glVertex2f(-0.4, 0.1);

glVertex2f(-.5, 0.1);
glVertex2f(-0.5, -0.05);

glEnd();

}

void WORD_O(){

glBegin(GL_LINES);

glColor3f(0, 0.0, 0);

glVertex2f(-0.35, 0.0);
glVertex2f(-.3, -0.05);

glVertex2f(-.3, -0.05);
glVertex2f(-.2, -0.05);

glVertex2f(-.2, -0.05);
glVertex2f(-0.15, 0.0);

glVertex2f(-0.15, 0.0);
glVertex2f(-0.15, 0.05);

glVertex2f(-0.15, 0.05);
glVertex2f(-.2, 0.1);

glVertex2f(-.2, 0.1);
glVertex2f(-.3, 0.1);

glVertex2f(-.3, 0.1);
glVertex2f(-.35, 0.05);

glVertex2f(-.35, 0.05);
glVertex2f(-0.35, 0.0);

glEnd();

}

void WORD_W(){

glBegin(GL_LINES);

glColor3f(0, 0.0, 0);

glVertex2f(-0.1, 0.1);
glVertex2f(-0.05, -0.05);

glVertex2f(-0.05, -0.05);
glVertex2f(0, 0.05);

glVertex2f(0, 0.05);
glVertex2f(0.05, -0.05);

glVertex2f(0.05, -0.05);
glVertex2f(0.1, 0.1);



glEnd();

}

void WORD_S(){

glBegin(GL_LINES);

glColor3f(0, 0.0, 0);

glVertex2f(0.25, 0.1);
glVertex2f(0.15, 0.1);

glVertex2f(0.15, 0.1);
glVertex2f(.15, 0.03);

glVertex2f(.15, 0.03);
glVertex2f(0.25, 0.03);

glVertex2f(0.25, 0.04);
glVertex2f(0.25, -0.05);

glVertex2f(0.25, -0.05);
glVertex2f(0.15, -0.05);

glVertex2f(-.2, 0.1);
glVertex2f(-.3, 0.1);

glVertex2f(-.3, 0.1);
glVertex2f(-.35, 0.05);

glVertex2f(-.35, 0.05);
glVertex2f(-0.35, 0.0);

glEnd();

}
void WORD_I(){

glBegin(GL_LINES);

glColor3f(0, 0.0, 0);

glVertex2f(0.45, 0.1);
glVertex2f(0.4, 0.1);

glVertex2f(0.4, 0.1);
glVertex2f(0.35, 0.1);

glVertex2f(0.4, 0.1);
glVertex2f(0.4, -0.05);

glVertex2f(0.35, -0.05);
glVertex2f(0.45, -0.05);





glEnd();

}

void WORD_F(){

glBegin(GL_LINES);

glColor3f(0, 0.0, 0);

glVertex2f(0.6, 0.1);
glVertex2f(0.51, 0.1);

glVertex2f(0.51, 0.1);
glVertex2f(0.51, -0.05);

glVertex2f(0.51, 0.04);
glVertex2f(0.56, 0.04);

glEnd();

}


void display() {

glClearColor(1.0f, 1.0f, 1.0f, 1.0f);

glClear(GL_COLOR_BUFFER_BIT);

glLineWidth(2.5);

WORD_T();
WORD_O();
WORD_W();
WORD_S();
WORD_I();
WORD_F();
glFlush(); // Render now

}

/* Main function: GLUT runs as a console application starting at main() */

int main(int argc, char** argv) {

glutInitWindowSize(720, 620); // Set the window's initial width & height
glutInit(&argc, argv); // Initialize GLUT

glutCreateWindow("OpenGL Setup"); // Create a window with the given title


glutDisplayFunc(display); // Register display callback handler for window re-paint

glutMainLoop(); // Enter the event-processing loop

return 0;

}





#include <math.h>
#include <windows.h> // for MS Windows

#include <GL/glut.h> // GLUT, include glu.h and gl.h

/* Handler for window-repaint event. Call back when the window first appears and

whenever the window needs to be re-painted. */
void WORD_A(){

glBegin(GL_LINES);

glColor3f(0, 0.0, 0);

glVertex2f(-5.5, 3);
glVertex2f(-7, -1);

glVertex2f(-5.5, 3);
glVertex2f(-4, -1);

glVertex2f(- 6.25, 1);
glVertex2f(-4.7499, 1);

glEnd();

}

void WORD_I(){

glBegin(GL_LINES);

glColor3f(0, 0.0, 0);

glVertex2f(-3, 3);
glVertex2f(-1, 3);

glVertex2f(-2, 3);
glVertex2f(-2, -1);

glVertex2f(-3, -1);
glVertex2f(-1, -1);



glEnd();

}

void WORD_U(){

glBegin(GL_LINES);

glColor3f(0, 0.0, 0);

glVertex2f(0, 3);
glVertex2f(0, -1);

glVertex2f(0, -1);
glVertex2f(2, -1);

glVertex2f(2, -1);
glVertex2f(2, 3);



glEnd();

}

void WORD_B(){

glBegin(GL_LINES);

glColor3f(0, 0.0, 0);

glVertex2f(3, 3);
glVertex2f(3, -1);

glVertex2f(3, -1);
glVertex2f(5, -1);

glVertex2f(5, -1);
glVertex2f(5, 0);

glVertex2f(5, 0);
glVertex2f(4, 1);

glVertex2f(4, 1);
glVertex2f(5, 2);

glVertex2f(5, 2);
glVertex2f(5, 3);

glVertex2f(5, 3);
glVertex2f(3, 3);

glEnd();
}





void display() {

glClearColor(1.0f, 1.0f, 1.0f, 1.0f);

glClear(GL_COLOR_BUFFER_BIT);

glLineWidth(2.5);

WORD_A();
WORD_I();
WORD_U();
WORD_B();

glFlush(); // Render now

}

/* Main function: GLUT runs as a console application starting at main() */

int main(int argc, char** argv) {

glutInitWindowSize(720, 620); // Set the window's initial width & height
glutInit(&argc, argv); // Initialize GLUT

glutCreateWindow("OpenGL Setup"); // Create a window with the given title


glutDisplayFunc(display); // Register display callback handler for window re-paint
gluOrtho2D(-8, +8, -5, + 5);
glutMainLoop(); // Enter the event-processing loop

return 0;

}





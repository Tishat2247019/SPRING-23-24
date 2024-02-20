#include <math.h>
#include <windows.h> // for MS Windows

#include <GL/glut.h> // GLUT, include glu.h and gl.h

/* Handler for window-repaint event. Call back when the window first appears and

whenever the window needs to be re-painted. */

void rectangle_outline(){

glLineWidth(2.5);
glBegin(GL_LINES);

glColor3f(0.0f, 0.0f, 0.0f);

glVertex2f(-8, 9);
glVertex2f(-8, 0);

glVertex2f(-8, 0);
glVertex2f(8, 0);

glVertex2f(8, 0);
glVertex2f(8, 9);

glVertex2f(8, 9);
glVertex2f(-8, 9);



glEnd();


}

void blue_rectangle(){

glColor3f(0, 0.6, 1);
glBegin(GL_POLYGON);

glVertex2f(-8, 9);
glVertex2f(-8, 8);
glVertex2f(8, 8);
glVertex2f(8, 9);
glEnd();

glBegin(GL_POLYGON);
glVertex2f(-8, 6);
glVertex2f(8, 6);
glVertex2f(8, 7);
glVertex2f(-8, 7);
glEnd();

glBegin(GL_POLYGON);
glVertex2f(-8, 4);
glVertex2f(8, 4);
glVertex2f(8, 5);
glVertex2f(-8, 5);
glEnd();

glBegin(GL_POLYGON);
glVertex2f(-8, 2);
glVertex2f(8, 2);
glVertex2f(8, 3);
glVertex2f(-8, 3);
glEnd();

glBegin(GL_POLYGON);
glVertex2f(-8, 0);
glVertex2f(8, 0);
glVertex2f(8, 1);
glVertex2f(-8, 1);
glEnd();

}

void blue_square()
{
glColor3f(0, 0.6, 1);

glBegin(GL_POLYGON);
glVertex2f(-8, 4);
glVertex2f(-3, 4);
glVertex2f(-3, 9);
glVertex2f(-8, 9);

glEnd();
}

void plus_sign()
{
glColor3f(1, 1, 1);

glBegin(GL_POLYGON);
glVertex2f(-6, 9);
glVertex2f(-6, 4);
glVertex2f(-5, 4);
glVertex2f(-5, 9);

glEnd();

glBegin(GL_POLYGON);
glVertex2f(-8, 7);
glVertex2f(-3, 7);
glVertex2f(-3, 6);
glVertex2f(-8, 6);

glEnd();
}



void display() {

glClearColor(1.0f, 1.0f, 1.0f, 1.0f);

glClear(GL_COLOR_BUFFER_BIT);


blue_rectangle();
blue_square();
plus_sign();
rectangle_outline();

glFlush(); // Render now

}

/* Main function: GLUT runs as a console application starting at main() */

int main(int argc, char** argv) {

glutInitWindowSize(920, 600); // Set the window's initial width & height
glutInit(&argc, argv); // Initialize GLUT
glutInitWindowPosition((glutGet(GLUT_SCREEN_WIDTH)-920)/2,
                       (glutGet(GLUT_SCREEN_HEIGHT)-600)/2);
glutCreateWindow("OpenGL Setup"); // Create a window with the given title


glutDisplayFunc(display); // Register display callback handler for window re-paint
gluOrtho2D(-8.5, +8.5, -0.5, 9.5);

glutMainLoop(); // Enter the event-processing loop

return 0;

}





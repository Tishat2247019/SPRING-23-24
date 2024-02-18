#include <math.h>
#include <windows.h> // for MS Windows

#include <GL/glut.h> // GLUT, include glu.h and gl.h

/* Handler for window-repaint event. Call back when the window first appears and

whenever the window needs to be re-painted. */

void outline(){

glLineWidth(1.5);
glBegin(GL_LINES);

glColor3f(0.0f, 0.0f, 0.0f);


glVertex2f(-5, 3);
glVertex2f( -5, -3);

glVertex2f( -5, -3);
glVertex2f(4, -3);

glVertex2f(4, -3);
glVertex2f(4, 3);

glVertex2f(4, 3);
glVertex2f(-5, 3);

glEnd();
}

void rectangle_Black(){

glBegin(GL_POLYGON);

glColor3f(0.0f, 0.0f, 0.0f);

glVertex2f(-5, 3);

glVertex2f( -5, -3);

glVertex2f(-2, -3);

glVertex2f(-2, 3);

glEnd();


}

void rectangle_yellow(){
//glLineWidth(2.5);
glBegin(GL_POLYGON);

glColor3f(1, 1, 0);

glVertex2f(-2, 3);

glVertex2f(-2, -3);
glVertex2f(1, -3);
glVertex2f(1, 3);


glEnd();
}

void rectangle_red(){
//glLineWidth(2.5);
glBegin(GL_POLYGON);

glColor3f(1.0f, 0.0f, 0.0f);

glVertex2f(1, 3);
glVertex2f(1, -3);
glVertex2f(4, -3);
glVertex2f(4, 3);


glEnd();
}

void display() {

glClearColor(1.0f, 1.0f, 1.0f, 1.0f);

glClear(GL_COLOR_BUFFER_BIT);

rectangle_Black();
rectangle_yellow();
rectangle_red();
outline();

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
gluOrtho2D(-6, +5.5, -3.5, +3.5);

glutMainLoop(); // Enter the event-processing loop

return 0;

}





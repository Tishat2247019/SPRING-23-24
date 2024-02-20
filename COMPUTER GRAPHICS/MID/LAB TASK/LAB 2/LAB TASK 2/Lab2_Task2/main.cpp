/*
 * GLUT Shapes Demo
 *
 * Written by Nigel Stewart November 2003
 *
 * This program is test harness for the sphere, cone
 * and torus shapes in GLUT.
 *
 * Spinning wireframe and smooth shaded shapes are
 * displayed until the ESC or q key is pressed.  The
 * number of geometry stacks and slices can be adjusted
 * using the + and - keys.
 *///Draw Points

#include <windows.h> // for MS Windows

#include <GL/glut.h> // GLUT, include glu.h and gl.h

/* Handler for window-repaint event. Call back when the window first appears and

whenever the window needs to be re-painted. */

void outer_rectangle(){

glBegin(GL_LINES); // Each set of 4 vertices form a quad


glColor3f(0.0f, 0.0f, 0.0f);

glVertex2f(-4.0f, -4.0f); // x, y
glVertex2f(4.0f, -4.0f); // x, y

glVertex2f(4.0f, -4.0f); // x, y
glVertex2f(4.0f, 4.0f); // x, y

glVertex2f(4.0f, 4.0f); // x, y
glVertex2f(-4.0f, 4.0f); // x, y

glVertex2f(-4.0f, 4.0f); // x, y
glVertex2f(-4.0f, -4.0f); // x, y

glEnd();

}

void black_squares(){
glColor3f(0.0f, 0.0f, 0.0f);
glBegin(GL_POLYGON); // Each set of 4 vertices form a quad



glVertex2f(-4.0f, 2.0f); // x, y
glVertex2f(-2.0f, 2.0f); // x, y

glVertex2f(-2.0f, 4.0f); // x, y
glVertex2f(-4.0f, 4.0f); // x, y

glEnd();

glBegin(GL_POLYGON);
glVertex2f(0.0f, 2.0f); // x, y
glVertex2f(2.0f, 2.0f); // x, y

glVertex2f(2.0f, 4.0f); // x, y
glVertex2f(0.0f, 4.0f); // x, y


glEnd();

glBegin(GL_POLYGON); // Each set of 4 vertices form a quad


glVertex2f(-2.0f, -0.0f); // x, y
glVertex2f(0.0f, 0.0f); // x, y

glVertex2f(0.0f, 2.0f); // x, y
glVertex2f(-2.0f, 2.0f); // x, y

glEnd();

glBegin(GL_POLYGON); // Each set of 4 vertices form a quad


glVertex2f(2.0f, -0.0f); // x, y
glVertex2f(4.0f, 0.0f); // x, y

glVertex2f(4.0f, 2.0f); // x, y
glVertex2f(2.0f, 2.0f); // x, y

glEnd();





glBegin(GL_POLYGON); // Each set of 4 vertices form a quad


glVertex2f(-4.0f, -2.0f); // x, y
glVertex2f(-2.0f, -2.0f); // x, y

glVertex2f(-2.0f, 0.0f); // x, y
glVertex2f(-4.0f, 0.0f); // x, y

glEnd();

glBegin(GL_POLYGON);
glVertex2f(0.0f, -2.0f); // x, y
glVertex2f(2.0f, -2.0f); // x, y

glVertex2f(2.0f, 0.0f); // x, y
glVertex2f(0.0f, 0.0f); // x, y


glEnd();


glBegin(GL_POLYGON);
glVertex2f(-2.0f, -4.0f); // x, y
glVertex2f(0.0f, -4.0f); // x, y

glVertex2f(0.0f, -2.0f); // x, y
glVertex2f(-2.0f, -2.0f); // x, y


glEnd();

glBegin(GL_POLYGON); // Each set of 4 vertices form a quad
glVertex2f(2.0f, -4.0f); // x, y
glVertex2f(4.0f, -4.0f); // x, y

glVertex2f(4.0f, -2.0f); // x, y
glVertex2f(2.0f, -2.0f); // x, y

glEnd();


}



void display() {

glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // Set background color to black and opaque

glClear(GL_COLOR_BUFFER_BIT); // Clear the color buffer (background)

glLineWidth(3 );

outer_rectangle();


black_squares();
glFlush(); // Render now

}



/* Main function: GLUT runs as a console application starting at main() */

int main(int argc, char** argv) {

glutInit(&argc, argv); // Initialize GLUT
glutInitWindowSize(620, 620); // Set the window's initial width & height

glutCreateWindow("OpenGL Setup Test"); // Create a window with the given title


gluOrtho2D(-5, +5,-5, +5);

glutDisplayFunc(display); // Register display callback handler for window re-paint

glutMainLoop(); // Enter the event-processing loop

return 0;

}



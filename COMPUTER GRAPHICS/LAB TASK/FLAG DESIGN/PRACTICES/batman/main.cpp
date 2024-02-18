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



void display() {

glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // Set background color to black and opaque

glClear(GL_COLOR_BUFFER_BIT); // Clear the color buffer (background)



glColor3f(0.0f, 0.0f, 0.0f);
glBegin(GL_POLYGON); // Each set of 4 vertices form a quad



glVertex2f(0.0f, -1.0f);
glVertex2f(2.5f, 2.4f);

glVertex2f(2.8f, 2.7f);
glVertex2f(4.6f, 2.8f);
glVertex2f(4.5f, 3.0f);
glVertex2f(4.5f, 3.5f);
glVertex2f(4.8f, 4.2f);
glVertex2f(6.2f, 4.8f);
glVertex2f(1.5f, 4.8f);
glVertex2f(1.5f, 4.2f);
glVertex2f(1.4f, 3.8f);
glVertex2f(1.25f, 3.6f);
glVertex2f(1.0f, 3.5f);
glVertex2f(0.78f, 3.8f);
glVertex2f(0.6f, 4.6f);
glVertex2f(0.6f, 4.6f);
glVertex2f(0.4f, 3.8f);
glVertex2f(0.0f, 3.9f);
glVertex2f(-0.4f, 3.8f);
glVertex2f(-0.6f, 4.6f);
glVertex2f(-0.83f, 3.82f);
glVertex2f(-1.0f, 3.5f);
glVertex2f(-1.25f, 3.6f);
glVertex2f(-1.4f, 3.8f);
glVertex2f(-1.5f, 4.2f);
glVertex2f(-1.5f, 4.8f);
glVertex2f(-6.4f, 4.8f);
glVertex2f(-4.8f, 4.2f);
glVertex2f(-4.5f, 3.5f);
glVertex2f(-4.5f, 3.0f);
glVertex2f(-4.6f, 2.8f);
glVertex2f(-2.8f, 2.7f);

glEnd();



glFlush(); // Render now

}

/* Main function: GLUT runs as a console application starting at main() */

int main(int argc, char** argv) {

glutInit(&argc, argv); // Initialize GLUT
glutInitWindowSize(620, 320); // Set the window's initial width & height

glutCreateWindow("OpenGL Setup Test"); // Create a window with the given title


gluOrtho2D(-8, +8,-2, 6);

glutDisplayFunc(display); // Register display callback handler for window re-paint

glutMainLoop(); // Enter the event-processing loop

return 0;

}



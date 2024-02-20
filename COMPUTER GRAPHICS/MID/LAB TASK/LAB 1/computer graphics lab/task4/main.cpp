#include <windows.h> // for MS Windows

#include <GL/glut.h> // GLUT, include glu.h and gl.h

/* Initialize OpenGL Graphics */


void xy_axis(){

glLineWidth(4);
glBegin(GL_LINES);

glColor3f(0.0f, 0.0f, 0.0f);

glVertex2f(0.0f, 0.0f);

glVertex2f(1.0f, 0.0f);

glVertex2f(0.0f, 0.0f);

glVertex2f(0.0f, 1.0f);

glVertex2f(0.0f, 0.0f);

glVertex2f(-1.0f, 0.0f);

glVertex2f(0.0f, 0.0f);

glVertex2f(0.0f, -1.0f);

glEnd();
}

void Arrow(){
glBegin(GL_POLYGON);

glColor3ub(67,156,73);

glVertex2f(0.1f, 0.3f);

glVertex2f(0.5f, 0.3f);

glVertex2f(0.5f, 0.5f);

glVertex2f(0.1f, 0.5f);

glEnd();



glBegin(GL_POLYGON);

glColor3ub(67,156,73);

glVertex2f(0.5f, 0.2f);

glVertex2f(0.7f, 0.4f);

glVertex2f(0.5f, 0.6f);

glEnd();

}


void yellow_triangle()
{
glBegin(GL_TRIANGLES);

glColor3ub(255, 255, 20);

glVertex2f(+0.4f, -0.1f);

glVertex2f(+0.1f,-0.6f);

glVertex2f(+0.7f, -0.6f);

glEnd();
}

void purple_triangle()
{
glBegin(GL_TRIANGLES);
glColor3ub(112,36,125);

glVertex2f(-0.3f, -0.1f); // x, y

glVertex2f(-0.3f, -0.7f);

glVertex2f(-0.7f, -0.4f); // x, y
glEnd();
}

void red_rectangle()
{
glBegin(GL_POLYGON);

glColor3f(1.0f, 0.0f, 0.0f);

glVertex2f(-0.7, 0.3);

glVertex2f(-0.3, 0.3);

glVertex2f(-0.3, 0.6);

glVertex2f(-0.7, 0.6);
glEnd();

}

void initGL() {

// Set "clearing" or background color

glClearColor(0.0f, 0.0f, 0.0f, 1.0f); // Black and opaque

}



void display() {
glClearColor(1.0f, 1.0f, 1.0f, 1.0f);

glClear(GL_COLOR_BUFFER_BIT); // Clear the color buffer with current clearing color


xy_axis();
Arrow();
yellow_triangle();
purple_triangle();
red_rectangle();


glFlush();

}

/* Main function: GLUT runs as a console application starting at main() */

int main(int argc, char** argv) {

glutInit(&argc, argv); // Initialize GLUT
glutInitWindowSize(620, 520); // Set the window's initial width & height

glutCreateWindow("Task 4"); // Create window with the given title


glutDisplayFunc(display); // Register callback handler for window re-paint event

initGL(); // Our own OpenGL initialization

glutMainLoop(); // Enter the event-processing loop

return 0;

}

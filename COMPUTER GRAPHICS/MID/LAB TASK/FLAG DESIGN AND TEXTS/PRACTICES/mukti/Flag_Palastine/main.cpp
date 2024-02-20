#include <math.h>
#include <windows.h> // for MS Windows

#include <GL/glut.h> // GLUT, include glu.h and gl.h

/* Handler for window-repaint event. Call back when the window first appears and

whenever the window needs to be re-painted. */

void rectangle(){

glLineWidth(2.5);
glBegin(GL_LINES);

glColor3f(0.0f, 0.0f, 0.0f);

glVertex2f(-5.01, -3.01);
glVertex2f(5.01, -3.01);

glVertex2f(5.01, -3.01);
glVertex2f(5.01, 3.01);

glVertex2f(5.01, 3.01);
glVertex2f(-5.01, 3.01);

glVertex2f(-5.01, 3.01);
glVertex2f(-5.01, -3.01);

glVertex2f(-5, -0.99);
glVertex2f(5, -0.99);

glVertex2f(-4.99, 3);
glVertex2f(-0.99, 0);
glEnd();

glLineWidth(3.5);
glBegin(GL_LINES);

glVertex2f(-0.98, 0);
glVertex2f(-4.98, -3);

glEnd();


}

void rectangle_black(){
//glLineWidth(2.5);
glBegin(GL_POLYGON);

glColor3f(0.0, 0.0f, 0.0f);

glVertex2f(-5, 3);

glVertex2f(-5, 1);

glVertex2f(5, 1);

glVertex2f(5, 3);
glEnd();
}

void rectangle_deepgreen(){
//glLineWidth(2.5);
glBegin(GL_POLYGON);

glColor3f(0.0f, 0.7f, 0.0f);

glVertex2f(-5, -3);
glVertex2f(5, -3);
glVertex2f(5, -1);
glVertex2f(-5, -1);
glEnd();
}

void triangle(){
glBegin(GL_POLYGON);
glColor3f(1, 0, 0);
glVertex2f(-5, 3);
glVertex2f(-5, -3);
glVertex2f(-1, 0);
glEnd();
}


void display() {

glClearColor(1.0f, 1.0f, 1.0f, 1.0f);

glClear(GL_COLOR_BUFFER_BIT);




rectangle_black();
rectangle_deepgreen();
rectangle();
triangle();

glFlush(); // Render now

}

/* Main function: GLUT runs as a console application starting at main() */

int main(int argc, char** argv) {

glutInitWindowSize(920, 600); // Set the window's initial width & height
glutInit(&argc, argv); // Initialize GLUT
glutCreateWindow("OpenGL Setup"); // Create a window with the given title


glutDisplayFunc(display); //

gluOrtho2D(-6, +6, -4, +4); // Register display callback handler for window re-paint

glutMainLoop(); // Enter the event-processing loop

return 0;

}





#include <math.h>
#include <windows.h> // for MS Windows

#include <GL/glut.h> // GLUT, include glu.h and gl.h

/* Handler for window-repaint event. Call back when the window first appears and

whenever the window needs to be re-painted. */

void rectangle_outline(){

glLineWidth(1.5);
glBegin(GL_LINES);

glColor3f(0.0f, 0.0f, 0.0f);

glVertex2f(-5, 3);
glVertex2f(-5, -3);
glVertex2f(-5, -3);
glVertex2f(5, -3);

glVertex2f(5, -3);
glVertex2f(5, 3);

glVertex2f(5, 3);
glVertex2f(-5, 3);

/*
glVertex2f(-0.8, 3);
glVertex2f(-0.8, -3);

glVertex2f(0.8, -3);
glVertex2f(0.8, 3);

glVertex2f(-5, 1.5);
glVertex2f(-0.8, 1.5);

glVertex2f(0.8, 1.5);
glVertex2f(5, 1.5);


glVertex2f(-5, 0);
glVertex2f(-0.8, 0);

glVertex2f(0.8, 0);
glVertex2f(5, 0);

glVertex2f(-5, -1.5);
glVertex2f(-0.8, -1.5);

glVertex2f(0.8, -1.5);
glVertex2f(5, -1.5);
*/

glEnd();

}


void rectangle_deepblue()
{
glColor3f(0, 0, 1);
glBegin(GL_POLYGON);

glVertex2f(-5, 3);
glVertex2f(-5, 1.5);
glVertex2f(5, 1.5);
glVertex2f(5, 3);
glEnd();
}

void rectangle_green(){
glColor3f(0, 0.8,0);
glBegin(GL_POLYGON);

glVertex2f(-5, -1.5);
glVertex2f(5, -1.5);
glVertex2f(5, 0);
glVertex2f(-5, 0);
glEnd();
}

void rectangle_yellow(){
glColor3f(1, 1,0);
glBegin(GL_POLYGON);

glVertex2f(-5, -3);
glVertex2f(5, -3);
glVertex2f(5, -1.5);
glVertex2f(-5, -1.5);
glEnd();

}

void rectangle_red(){
glColor3f(0.8, 0,0);
glBegin(GL_POLYGON);

glVertex2f(-0.8, 3);
glVertex2f(-0.8, -3);
glVertex2f(0.8, -3);
glVertex2f(0.8, 3);
glEnd();

}

void star(){

glColor3f(1, 1,0);
glBegin(GL_POLYGON);

glVertex2f(-3.4, 2);
glVertex2f(-3.9, 1.6);
glVertex2f(-3.4, 2.95);
glVertex2f(-2.9, 1.6);

glEnd();

glBegin(GL_POLYGON);

glVertex2f(-3.4, 2);
glVertex2f(-4.2, 2.4);
glVertex2f(-2.6, 2.4);

glEnd();


}


void display() {

glClearColor(1.0f, 1.0f, 1.0f, 1.0f);

glClear(GL_COLOR_BUFFER_BIT);

rectangle_deepblue();
rectangle_green();
rectangle_yellow();
rectangle_red();
star();
rectangle_outline();

glFlush(); // Render now

}

/* Main function: GLUT runs as a console application starting at main() */

int main(int argc, char** argv) {

glutInitWindowSize(920, 620); // Set the window's initial width & height
glutInit(&argc, argv); // Initialize GLUT

glutCreateWindow("OpenGL Setup"); // Create a window with the given title


glutDisplayFunc(display); // Register display callback handler for window re-paint
gluOrtho2D(-5.5, +5.5, -3.5, +3.5);

glutMainLoop(); // Enter the event-processing loop

return 0;

}





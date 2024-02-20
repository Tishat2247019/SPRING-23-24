#include <math.h>
#include <windows.h> // for MS Windows

#include <GL/glut.h> // GLUT, include glu.h and gl.h

/* Handler for window-repaint event. Call back when the window first appears and

whenever the window needs to be re-painted. */

void rectangle(){

glLineWidth(2.5);
glBegin(GL_LINES);

glColor3f(0.0f, 0.0f, 0.0f);

glVertex2f(-0.6, -0.2);

glVertex2f(0.6, -0.2);

glVertex2f(0.6, -0.2);

glVertex2f(0.6, 0.7);

glVertex2f(0.6, 0.7);

glVertex2f(-0.6, 0.7);

glVertex2f(-0.6, 0.7);

glVertex2f(-0.6, -0.2);

glEnd();


}

void rectangle_red(){
glBegin(GL_POLYGON);

glColor3f(1.0f, 0.0f, 0.0f);

glVertex2f(-0.6, -0.2);

glVertex2f(0.6, -0.2);

glVertex2f(0.6, 0.3);

glVertex2f(0.0, 0.3);

glVertex2f(-0.6, 0.3);

glEnd();
}

void display() {

glClearColor(1.0f, 1.0f, 1.0f, 1.0f);

glClear(GL_COLOR_BUFFER_BIT);

glLineWidth(2);


glBegin(GL_LINES);


rectangle_red();
rectangle();

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





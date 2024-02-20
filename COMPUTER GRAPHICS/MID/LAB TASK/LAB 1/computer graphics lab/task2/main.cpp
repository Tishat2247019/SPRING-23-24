//Draw Line

#include <windows.h> // for MS Windows

#include <GL/glut.h> // GLUT, include glu.h and gl.h

/* Handler for window-repaint event. Call back when the window first appears and

whenever the window needs to be re-painted. */

void display() {


glClearColor(1.0f, 0.0f, 1.0f, 1.0f); // Set background color to black and opaque

glClear(GL_COLOR_BUFFER_BIT); // Clear the color buffer (background)

glLineWidth(3.5);



glBegin(GL_POLYGON);

glColor3f(1.0f, 0.0f, 0.0f); // Red

glVertex2f(-0.7, -0.5);

glVertex2f(0.7, -0.5);


glVertex2f(0.4, 0.5);

glVertex2f(-0.4, 0.5);

glEnd();

glFlush();

}

/* Main function: GLUT runs as a console application starting at main() */

int main(int argc, char** argv) {

glutInitWindowSize(620, 520); // Set the window's initial width & height
glutInit(&argc, argv); // Initialize GLUT

glutCreateWindow("OpenGL Setup"); // Create a window with the given title


glutDisplayFunc(display); // Register display callback handler for window re-paint

glutMainLoop(); // Enter the event-processing loop

return 0;

}


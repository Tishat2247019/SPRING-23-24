#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h

/* Handler for window-repaint event. Call back when the window first appears and
whenever the window needs to be re-painted. */

void Word_T(){
glBegin(GL_LINES);
glColor3f(0.0f, 0.0f, 0.0f); // Red

glVertex2f(-4.8, 0.5);
glVertex2f(-4.3, 0.5);

glVertex2f(-4.3, 0.5);
glVertex2f(-4.3, -1);

glVertex2f(-4.3, -1);
glVertex2f(-3.8, -1);

glVertex2f(-3.8, -1);
glVertex2f(-3.8, 0.5);

glVertex2f(-3.8, 0.5);
glVertex2f(-3.3, 0.5);

glVertex2f(-3.3, 0.5);
glVertex2f(-3.3, 1);

glVertex2f(-3.3, 1);
glVertex2f(-4.8, 1);

glVertex2f(-4.8, 1);
glVertex2f(-4.8, 0.5);


glEnd();
}
void display() {


glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // Set background color to black and opaque

glClear(GL_COLOR_BUFFER_BIT); // Clear the color buffer (background)

glLineWidth(2.5);

Word_T();

glFlush();

}

/* Main function: GLUT runs as a console application starting at main()  */
int main(int argc, char** argv) {
	glutInit(&argc, argv);                 // Initialize GLUT
	glutInitWindowSize(620, 620);   // Set the window's initial width & height
	glutCreateWindow("OpenGL Setup Test"); // Create a window with the given title
	gluOrtho2D(-5, +5, -5, +5);
	glutDisplayFunc(display); // Register display callback handler for window re-paint
	glutMainLoop();           // Enter the event-processing loop
	return 0;
}

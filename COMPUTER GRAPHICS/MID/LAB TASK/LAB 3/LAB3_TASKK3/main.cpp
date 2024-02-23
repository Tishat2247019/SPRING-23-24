#include <math.h>
#include <windows.h> // for MS Windows

#include <GL/glut.h> // GLUT, include glu.h and gl.h

/* Handler for window-repaint event. Call back when the window first appears and

whenever the window needs to be re-painted. */
void bench(){

//lower supports
glBegin(GL_POLYGON);
glColor3f(0.5, 0.3, 0);
glVertex2f(212, -70);
glVertex2f(212, -84);
glVertex2f(215, -84);
glVertex2f(215, -70);

glEnd();

glBegin(GL_POLYGON);
glColor3f(0.5, 0.5, 0);
glVertex2f(220, -70);
glVertex2f(220, -84);
glVertex2f(222, -84);
glVertex2f(222, -70);
glEnd();

glBegin(GL_POLYGON);
glColor3f(0.5, 0.5, 0);
glVertex2f(272, -70);
glVertex2f(272, -84);
glVertex2f(274, -84);
glVertex2f(274, -70);
glEnd();

glBegin(GL_POLYGON);
glColor3f(0.5, 0.3, 0);
glVertex2f(279, -70);
glVertex2f(279, -84);
glVertex2f(282, -84);
glVertex2f(282, -70);

glEnd();

glBegin(GL_POLYGON);
glColor3f(0.5, 0.5, 0);
glVertex2f(206, -68);
glVertex2f(206, -70);
glVertex2f(288, -70);
glVertex2f(288, -68);
glEnd();

//sitting space
glBegin(GL_POLYGON);
glColor3f(0.5, 0.3, 0);
glVertex2f(215, -55);
glVertex2f(206, -68);
glVertex2f(288, -68);
glVertex2f(280, -55);

glEnd();

//two vertical support pillers
glColor3f(0.5, 0.5, 0);
glBegin(GL_POLYGON);
glVertex2f(220, -23);
glVertex2f(220, -55);
glVertex2f(222, -55);
glVertex2f(222, -23);
glEnd();

glBegin(GL_POLYGON);
glVertex2f(273, -23);
glVertex2f(273, -55);
glVertex2f(275, -55);
glVertex2f(275, -23);
glEnd();

// outline of two vertical support pillers
glColor3f(0, 0, 0);
glLineWidth(1.5);
glBegin(GL_LINES);
glVertex2f(220, -23);
glVertex2f(220, -55);

glVertex2f(220, -55);
glVertex2f(222, -55);

glVertex2f(222, -55);
glVertex2f(222, -23);

glVertex2f(222, -23);
glVertex2f(220, -23);
glEnd();

glBegin(GL_LINES);
glVertex2f(273, -23);
glVertex2f(273, -55);

glVertex2f(273, -55);
glVertex2f(275, -55);

glVertex2f(275, -55);
glVertex2f(275, -23);

glVertex2f(275, -23);
glVertex2f(273, -23);
glEnd();

//four horizontal support
glColor3f(0.5, 0.3, 0);
glBegin(GL_POLYGON);
glVertex2f(215, -44);
glVertex2f(215, -48);
glVertex2f(280, -48);
glVertex2f(280, -44);
glEnd();

glBegin(GL_POLYGON);
glVertex2f(215, -38);
glVertex2f(215, -42);
glVertex2f(280, -42);
glVertex2f(280, -38);
glEnd();

glBegin(GL_POLYGON);
glVertex2f(215, -31.5);
glVertex2f(215, -35.5);
glVertex2f(280, -35.5);
glVertex2f(280, -31.5);
glEnd();

glBegin(GL_POLYGON);
glVertex2f(215, -25);
glVertex2f(215, -29);
glVertex2f(280, -29);
glVertex2f(280, -25);
glEnd();


//outlines

//LOWER SUPPORTS
glColor3f(0, 0, 0);
glLineWidth(1.5);
glBegin(GL_LINES);
glVertex2f(212, -70);
glVertex2f(212, -84);

glVertex2f(212, -84);
glVertex2f(215, -84);

glVertex2f(215, -84);
glVertex2f(215, -70);

glVertex2f(215, -70);
glVertex2f(212, -70);

glEnd();

glBegin(GL_LINES);

glVertex2f(220, -70);
glVertex2f(220, -84);

glVertex2f(220, -84);
glVertex2f(222, -84);

glVertex2f(222, -84);
glVertex2f(222, -70);

glVertex2f(222, -70);
glVertex2f(220, -70);
glEnd();

glBegin(GL_LINES);
glVertex2f(272, -70);
glVertex2f(272, -84);

glVertex2f(272, -84);
glVertex2f(274, -84);

glVertex2f(274, -84);
glVertex2f(274, -70);

glVertex2f(274, -70);
glVertex2f(272, -70);
glEnd();


glBegin(GL_LINES);
glVertex2f(279, -70);
glVertex2f(279, -84);

glVertex2f(279, -84);
glVertex2f(282, -84);

glVertex2f(282, -84);
glVertex2f(282, -70);

glVertex2f(282, -70);
glVertex2f(279, -70);

glEnd();



//ABOVE THE LOWER SUPPORTS
glBegin(GL_LINES);
glVertex2f(206, -68);
glVertex2f(206, -70);

glVertex2f(206, -70);
glVertex2f(288, -70);

glVertex2f(288, -70);
glVertex2f(288, -68);

glVertex2f(288, -68);
glVertex2f(206, -68);
glEnd();

//sitting space
glBegin(GL_LINES);
glVertex2f(215, -55);
glVertex2f(206, -68);

glVertex2f(206, -68);
glVertex2f(288, -68);

glVertex2f(288, -68);
glVertex2f(280, -55);

glVertex2f(280, -55);
glVertex2f(215, -55);

glEnd();





//four horizontal support

glBegin(GL_LINES);
glVertex2f(215, -44);
glVertex2f(215, -48);

glVertex2f(215, -48);
glVertex2f(280, -48);

glVertex2f(280, -48);
glVertex2f(280, -44);

glVertex2f(280, -44);
glVertex2f(215, -44);
glEnd();

glBegin(GL_LINES);
glVertex2f(215, -38);
glVertex2f(215, -42);

glVertex2f(215, -42);
glVertex2f(280, -42);

glVertex2f(280, -42);
glVertex2f(280, -38);

glVertex2f(280, -38);
glVertex2f(215, -38);
glEnd();

glBegin(GL_LINES);
glVertex2f(215, -31.5);
glVertex2f(215, -35.5);

glVertex2f(215, -35.5);
glVertex2f(280, -35.5);

glVertex2f(280, -35.5);
glVertex2f(280, -31.5);

glVertex2f(280, -31.5);
glVertex2f(215, -31.5);
glEnd();

glBegin(GL_LINES);
glVertex2f(215, -25);
glVertex2f(215, -29);

glVertex2f(215, -29);
glVertex2f(280, -29);

glVertex2f(280, -29);
glVertex2f(280, -25);

glVertex2f(280, -25);
glVertex2f(215, -25);
glEnd();

}



void display() {

glClearColor(1.0f, 1.0f, 1.0f, 1.0f);

glClear(GL_COLOR_BUFFER_BIT);

bench();


glFlush(); // Render now

}

/* Main function: GLUT runs as a console application starting at main() */

int main(int argc, char** argv) {

glutInitWindowSize(900, 600); // Set the window's initial width & height
glutInit(&argc, argv); // Initialize GLUT
glutInitWindowPosition((glutGet(GLUT_SCREEN_WIDTH)-900)/2,
                       (glutGet(GLUT_SCREEN_HEIGHT)-600)/2);
glutCreateWindow("OpenGL Setup"); // Create a window with the given title


glutDisplayFunc(display); // Register display callback handler for window re-paint

gluOrtho2D(190, 300, -90, -20);
glutMainLoop(); // Enter the event-processing loop

return 0;

}





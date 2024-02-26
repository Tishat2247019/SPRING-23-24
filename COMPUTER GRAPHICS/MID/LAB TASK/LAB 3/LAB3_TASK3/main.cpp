#include <math.h>
#include <windows.h> // for MS Windows

#include <GL/glut.h> // GLUT, include glu.h and gl.h

/* Handler for window-repaint event. Call back when the window first appears and

whenever the window needs to be re-painted. */

void outline(){
glColor3f(0, 0, 0);
glLineWidth(1.5);
glBegin(GL_LINES);
glVertex2f(183, -74);
glVertex2f(180, -80);

glVertex2f(180, -80);
glVertex2f(200, -80);

glVertex2f(200, -80);
glVertex2f(197, -74);

glVertex2f(197, -74);
glVertex2f(183, -74);
glEnd();

glBegin(GL_LINES);
glVertex2f(186, -71);
glVertex2f(185, -74);

glVertex2f(185, -74);
glVertex2f(195, -74);

glVertex2f(195, -74);
glVertex2f(193.5, -71);

glVertex2f(193.5, -71);
glVertex2f(186, -71);

glEnd();

glBegin(GL_LINES);
glVertex2f(187.5, 9.6);
glVertex2f(185, 9.6);

glVertex2f(185, 9.6);
glVertex2f(182.9, 27.1);

glVertex2f(182.9, 27.1);
glVertex2f(196.6, 27.2);

glVertex2f(196.6, 27.2);
glVertex2f(194.2, 9.6);

glVertex2f(194.2, 9.6);
glVertex2f(191.8, 9.6);

glVertex2f(191.8, 9.6);
glVertex2f(191.625, -71);

glVertex2f(191.625, -71);
glVertex2f(187.5, -71);

glVertex2f(187.5, -71);
glVertex2f(187.5, 9.6);
glEnd();

glBegin(GL_LINES);

glVertex2f(181.6, 28.6);
glVertex2f(181.6, 27.2);

glVertex2f(181.6, 27.2);
glVertex2f(197.8, 27.2);

glVertex2f(197.8, 27.2);
glVertex2f(197.8, 28.6);

glVertex2f(197.8, 28.6);
glVertex2f(181.6, 28.6);

glEnd();

glBegin(GL_LINES);

glVertex2f(182.5, 29.4);
glVertex2f(182.5, 28.6);

glVertex2f(182.5, 28.6);
glVertex2f(196.8, 28.6);

glVertex2f(196.8, 28.6);
glVertex2f(196.8, 29.4);

glVertex2f(196.8, 29.4);
glVertex2f(182.5, 29.4);

glEnd();

glBegin(GL_LINES);

glVertex2f(183.3, 29.4);
glVertex2f(183.7, 34);

glVertex2f(183.7, 34);
glVertex2f(184.9, 36.1);

glVertex2f(184.9, 36.1);
glVertex2f(186.9, 37.5);

glVertex2f(186.9, 37.5);
glVertex2f(189, 37.8);

glVertex2f(189, 37.8);
glVertex2f(190.8, 37.7);

glVertex2f(190.8, 37.7);
glVertex2f(192.9, 36.5);

glVertex2f(192.9, 36.5);
glVertex2f(194.8, 34.4);

glVertex2f(194.8, 34.4);
glVertex2f(195.6, 31.6);

glVertex2f(195.6, 31.6);
glVertex2f(195.5701992480065, 29.4);

glEnd();

glBegin(GL_LINES);

glVertex2f(188.499790461081, 37.730989124382);
glVertex2f(188.5, 40);

glVertex2f(188.5, 40);
glVertex2f(189.5, 40);

glVertex2f(189.5, 40);
glVertex2f(189.5028454998969, 37.7720488899183);

glEnd();

glBegin(GL_LINES);

glVertex2f(184.495930978, 27.1116491312282);
glVertex2f(185, 20);

glVertex2f(185, 20);
glVertex2f(188.5, 20);

glVertex2f(188.5, 20);
glVertex2f(188.592557196, 27.1415515123092);

glVertex2f(188.592557196, 27.1415515123092);
glVertex2f(184.495930978, 27.1116491312282);

glEnd();

glBegin(GL_LINES);

glVertex2f(190.6003196590304, 27.1562067128396);
glVertex2f(190.5, 20);

glVertex2f(190.5, 20);
glVertex2f(194, 20);

glVertex2f(194, 20);
glVertex2f(194.8000958977091, 27.1868620138519);

glVertex2f(194.8000958977091, 27.1868620138519);
glVertex2f(190.6003196590304, 27.1562067128396);

glEnd();

glBegin(GL_LINES);

glVertex2f(185.2, 18);
glVertex2f(186, 11);

glVertex2f(186, 11);
glVertex2f(188.6, 11);

glVertex2f(188.6, 11);
glVertex2f(188.6, 18);

glVertex2f(188.6, 18);
glVertex2f(185.2, 18);

glEnd();

glBegin(GL_LINES);

glVertex2f(190.3, 18);
glVertex2f(190.2, 11);

glVertex2f(190.2, 11);
glVertex2f(193, 11);

glVertex2f(193, 11);
glVertex2f(194, 18);

glVertex2f(194, 18);
glVertex2f(190.3, 18);

glEnd();
}

void lampPost(){

glColor3f(0.5, 0.4, 0.0);
glBegin(GL_POLYGON);
glVertex2f(183, -74);
glVertex2f(180, -80);
glVertex2f(200, -80);
glVertex2f(197, -74);
glEnd();

glBegin(GL_POLYGON);
glVertex2f(186, -71);
glVertex2f(185, -74);
glVertex2f(195, -74);
glVertex2f(193.5, -71);

glEnd();

glBegin(GL_POLYGON);
glVertex2f(187.5, 9.6);
glVertex2f(185, 9.6);
glVertex2f(182.9, 27.1);
glVertex2f(196.6, 27.2);
glVertex2f(194.2, 9.6);
glVertex2f(191.8, 9.6);
glVertex2f(191.625, -71);
glVertex2f(187.5, -71);
glEnd();

glBegin(GL_POLYGON);

glVertex2f(181.6, 28.6);
glVertex2f(181.6, 27.2);
glVertex2f(197.8, 27.2);
glVertex2f(197.8, 28.6);

glEnd();


glBegin(GL_POLYGON);

glVertex2f(182.5, 29.4);
glVertex2f(182.5, 28.6);
glVertex2f(196.8, 28.6);
glVertex2f(196.8, 29.4);

glEnd();
glBegin(GL_POLYGON);

glVertex2f(183.3, 29.4);
glVertex2f(183.7, 34);
glVertex2f(184.9, 36.1);
glVertex2f(186.9, 37.5);
glVertex2f(189, 37.8);
glVertex2f(190.8, 37.7);
glVertex2f(192.9, 36.5);
glVertex2f(194.8, 34.4);
glVertex2f(195.6, 31.6);
glVertex2f(195.5701992480065, 29.4);

glEnd();

glBegin(GL_POLYGON);

glVertex2f(188.499790461081, 37.730989124382);
glVertex2f(188.5, 40);
glVertex2f(189.5, 40);
glVertex2f(189.5028454998969, 37.7720488899183);

glEnd();

glBegin(GL_POLYGON);
glColor3f(1, 1, 0);
glVertex2f(184.495930978, 27.1116491312282);
glVertex2f(185, 20);
glVertex2f(188.5, 20);
glVertex2f(188.592557196, 27.1415515123092);

glEnd();

glBegin(GL_POLYGON);
glColor3f(1, 1, 0);
glVertex2f(190.6003196590304, 27.1562067128396);
glVertex2f(190.5, 20);
glVertex2f(194, 20);
glVertex2f(194.8000958977091, 27.1868620138519);
glEnd();

glBegin(GL_POLYGON);
glColor3f(1, 1, 0);
glVertex2f(185.2, 18);
glVertex2f(186, 11);
glVertex2f(188.6, 11);
glVertex2f(188.6, 18);

glEnd();

glBegin(GL_POLYGON);
glColor3f(1, 1, 0);
glVertex2f(190.3, 18);
glVertex2f(190.2, 11);
glVertex2f(193, 11);
glVertex2f(194, 18);

glEnd();


}



void display() {

glClearColor(0.0f, 0.0f, 0.0f, 0.0f);

glClear(GL_COLOR_BUFFER_BIT);


lampPost();
outline();

glFlush(); // Render now

}

/* Main function: GLUT runs as a console application starting at main() */

int main(int argc, char** argv) {

glutInitWindowSize(600, 900); // Set the window's initial width & height
glutInit(&argc, argv); // Initialize GLUT
glutInitWindowPosition((glutGet(GLUT_SCREEN_WIDTH)-600)/2,
                       (glutGet(GLUT_SCREEN_HEIGHT)-900)/2);
glutCreateWindow("OpenGL Setup"); // Create a window with the given title


glutDisplayFunc(display); // Register display callback handler for window re-paint

gluOrtho2D(160, 220, -90, +55);
glutMainLoop(); // Enter the event-processing loop

return 0;

}





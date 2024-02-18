#include <math.h>
#include <windows.h> // for MS Windows

#include <GL/glut.h> // GLUT, include glu.h and gl.h

/* Handler for window-repaint event. Call back when the window first appears and

whenever the window needs to be re-painted. */
void WORD_N(){

glBegin(GL_POLYGON);

glColor3f(0, 1.0, 0);

glVertex2f(-16.5, 2.2);

glVertex2f(-16.5, -2);

glVertex2f(-15.5, -2);
glVertex2f(-15.5, 2.5);

glEnd();

glBegin(GL_POLYGON);
glVertex2f(-15.5, 0.8);

glVertex2f(-13.5, -2);

glVertex2f(-13.5, -0.5);
glVertex2f(-15.5, 2.5);


glEnd();
glBegin(GL_POLYGON);

glVertex2f(-13.5, 2.5);

glVertex2f(-13.5, -2);
glVertex2f(-12.5, -1.5);
glVertex2f(-12.5, 2.5);

glEnd();


}

void WORD_E(){

glBegin(GL_POLYGON);

glColor3f(1, 1.0, 1);

glVertex2f(-11.5, 2.2);
glVertex2f(-11.5, -1.5);
glVertex2f(-10.5, -2);
glVertex2f(-10.5, 2.5);

glEnd();

glBegin(GL_POLYGON);
glVertex2f(-10.5, -2);
glVertex2f(-7.7, -2);
glVertex2f(-7.7, -1.2);
glVertex2f(-10.5, -1.2);
glEnd();

glBegin(GL_POLYGON);

glVertex2f(-10.5, -0.2);
glVertex2f(-8.5, -0.2);
glVertex2f(-8.5, 0.8);
glVertex2f(-10.5, 0.8);
glEnd();


glBegin(GL_POLYGON);
glVertex2f(-10.5, 1.7);
glVertex2f(-7.7, 1.7);
glVertex2f(-7.7, 2.5);
glVertex2f(-10.5, 2.5);
glEnd();

}

void WORD_P(){

glBegin(GL_POLYGON);

glColor3f(1, 0, 1);

glVertex2f(-7, 2 );
glVertex2f(-7, -2);
glVertex2f(-6, -2 );
glVertex2f(-6, 2.5);
glVertex2f(-6.5, 2.5);

glEnd();

glBegin(GL_POLYGON);

glVertex2f(-6, 0);
glVertex2f(-3.7, 0);
glVertex2f(-3.3, 0.4);
glVertex2f(-3.3, 1.7);
glVertex2f(-4, 2.5);
glVertex2f(-6, 2.5);
glEnd();

glBegin(GL_POLYGON);
glColor3f(1, 0,0);

glVertex2f(-6, 0.7);
glVertex2f(-4.5, 0.7);
glVertex2f(-4.1, 1);
glVertex2f(-4.1, 1.4);
glVertex2f(-4.5, 1.7);
glVertex2f(-6, 1.7);
glEnd();


}
void WORD_T(){

glBegin(GL_POLYGON);

glColor3f(0.0f, 0.0f, 0.0f);//Brown

glVertex2f(-2.5, 1.5);
glVertex2f(2.5, 1.5);
glVertex2f(2.5, 2.5);
glVertex2f(-2.5, 2.5);

glEnd();

glBegin(GL_POLYGON);

glVertex2f(-0.6, 1.5);
glVertex2f(-0.6, -2);
glVertex2f(0.6, -2);
glVertex2f(0.6, 1.5);
glEnd();


}

void WORD_U(){

glBegin(GL_POLYGON);

glColor3f(0.1, 0.1, 0.5);

glVertex2f(3, 2.5);
glVertex2f(3, -0.5);
glVertex2f(3.5, -1.5);
glVertex2f(4.5, -2);
glVertex2f(6, -2);
glVertex2f(7, -1.5);
glVertex2f(7.5, -0.5);
glVertex2f(7.5, 2.5);
glVertex2f(6.5, 2.5);
glVertex2f(6.5, 0);
glVertex2f(6, -1);
glVertex2f(4.5, -1);
glVertex2f(4, 0);
glVertex2f(4, 2.5);

glEnd();



glBegin(GL_POLYGON);
glColor3f(1, 0, 0);

glVertex2f(4,2.5);
glVertex2f(4, 0);
glVertex2f(4.5, -1);
glVertex2f(6, -1);
glVertex2f(6.5, 0);
glVertex2f(6.5, 2.5);

glEnd();
}

void WORD_N2(){

glBegin(GL_POLYGON);

glColor3f(0, 0.5, 0.5);

glVertex2f(8.5, 2.5);
glVertex2f(8, 2);
glVertex2f(8, -2);
glVertex2f(9, -2);
glVertex2f(9, 2.5);



glEnd();

glBegin(GL_POLYGON);

glVertex2f(9, 0.8);
glVertex2f(11, -2);
glVertex2f(11, -0.5);
glVertex2f(9, 2.5);
glEnd();


glBegin(GL_POLYGON);

glVertex2f(11, 2.5);
glVertex2f(11, -2);
glVertex2f(12, -1.5);
glVertex2f(12, 2.5);
glEnd();

}
void WORD_E2(){

glBegin(GL_POLYGON);

glColor3f(1, 1.0, 0);

glVertex2f(12.5, 2);
glVertex2f(12.5, -1.5);
glVertex2f(13.5, -2);
glVertex2f(13.5,2.5);
glVertex2f(13.5, 2.5);

glEnd();

glBegin(GL_POLYGON);
glVertex2f(13.5, 1.5);
glVertex2f(16.5, 1.5);
glVertex2f(16.5, 2.5);
glVertex2f(13.5, 2.5);
glEnd();


glBegin(GL_POLYGON);

glVertex2f(13.5, 0.7);
glVertex2f(13.5, -0.3);
glVertex2f(15.8, -0.3);
glVertex2f(15.8, 0.7);
glEnd();

glBegin(GL_POLYGON);
glVertex2f(13.5, -1);
glVertex2f(13.5, -2);
glVertex2f(16.5, -2);
glVertex2f(16.5, -1);
glEnd();


}




void display() {

glClearColor(1.0f, 0.0f, 0.0f, 0.0f);

glClear(GL_COLOR_BUFFER_BIT);

glLineWidth(3.5);


WORD_N();
WORD_E();
WORD_P();
WORD_T();
WORD_U();
WORD_N2();
WORD_E2();



glFlush(); // Render now

}

/* Main function: GLUT runs as a console application starting at main() */

int main(int argc, char** argv) {

glutInitWindowSize(1020, 280); // Set the window's initial width & height
glutInit(&argc, argv); // Initialize GLUT
glutInitWindowPosition((glutGet(GLUT_SCREEN_WIDTH)-1020)/2,
                       (glutGet(GLUT_SCREEN_HEIGHT)-280)/2);

glutCreateWindow("OpenGL Setup"); // Create a window with the given title


glutDisplayFunc(display); // Register display callback handler for window re-paint

gluOrtho2D(-17, +17, -2.5, +3);
glutMainLoop(); // Enter the event-processing loop
return 0;

}





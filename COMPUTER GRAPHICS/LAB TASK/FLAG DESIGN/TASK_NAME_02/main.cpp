#include <math.h>
#include <windows.h> // for MS Windows

#include <GL/glut.h> // GLUT, include glu.h and gl.h

/* Handler for window-repaint event. Call back when the window first appears and

whenever the window needs to be re-painted. */
void WORD_T(){

glBegin(GL_LINES);

glColor3f(0.8, 1.0, 0);

glVertex2f(-30.7, 3.1);
glVertex2f(-26.7, 3.1);

glVertex2f(-26.7, 3.1);
glVertex2f(-26.7, -4.9);

glVertex2f(-26.7, -4.9);
glVertex2f(-24.7, -4.9);

glVertex2f(-24.7, -4.9);
glVertex2f(-24.7, 3.1);

glVertex2f(-24.7, 3.1);
glVertex2f(-20.5, 3.1);

glVertex2f(-20.5, 3.1);
glVertex2f(-20.5, 5.1);

glVertex2f(-20.5, 5.1);
glVertex2f(-30.7, 5.1);

glVertex2f(-30.7, 5.1);
glVertex2f(-30.7, 3.1);



glEnd();

}

void WORD_O(){

glBegin(GL_LINES);

glColor3f(1, 0.0, 1);

glVertex2f(-16.1, 5.1);
glVertex2f(-17.3, 4.7);

glVertex2f(-17.3, 4.7);
glVertex2f(-18.4, 4.1);

glVertex2f(-18.4, 4.1);
glVertex2f(-19.2, 3.2);

glVertex2f(-19.2, 3.2);
glVertex2f(-19.7, 2.1);

glVertex2f(-19.7, 2.1);
glVertex2f(-20.1, 0.7);

glVertex2f(-20.1, 0.7);
glVertex2f(-20.1, -1.1);

glVertex2f(-20.1, -1.1);
glVertex2f(-19.9, -2.6);

glVertex2f(-19.9, -2.6);
glVertex2f(-19.2, -3.7);

glVertex2f(-19.2, -3.7);
glVertex2f(-18.3, -4.5);

glVertex2f(-18.3, -4.5);
glVertex2f(-17.2, -5);

glVertex2f(-17.2, -5);
glVertex2f(-15.4, -5.2);


glVertex2f(-15.4, -5.2);
glVertex2f(-13.4, -4.7);

glVertex2f(-13.4, -4.7);
glVertex2f(-12, -3.6);

glVertex2f(-12, -3.6);
glVertex2f(-10.9, -1.4);

glVertex2f(-10.9, -1.4);
glVertex2f(-10.8, 0.5);

glVertex2f(-10.8, 0.5);
glVertex2f(-11.1, 1.9);

glVertex2f(-11.1, 1.9);
glVertex2f(-11.7, 3.3);

glVertex2f(-11.7, 3.3);
glVertex2f(-13, 4.6);

glVertex2f(-13, 4.6);
glVertex2f(-14.5, 5.1);

glVertex2f(-14.5, 5.1);
glVertex2f(-16.1, 5.1);


glVertex2f(-16, 2.5);
glVertex2f(-16.9, 2.3);


glVertex2f(-16.9, 2.3);
glVertex2f(-17.5, 1.5);

glVertex2f(-17.5, 1.5);
glVertex2f(-17.8, 0.6);

glVertex2f(-17.8, 0.6);
glVertex2f(-17.8, -1);

glVertex2f(-17.8, -1);
glVertex2f(-17.3, -2.1);

glVertex2f(-17.3, -2.1);
glVertex2f(-16, -2.6);

glVertex2f(-16, -2.6);
glVertex2f(-14.8, -2.6);

glVertex2f(-14.8, -2.6);
glVertex2f(-13.7, -1.9);

glVertex2f(-13.7, -1.9);
glVertex2f(-13.3, -0.8);

glVertex2f(-13.3, -0.8);
glVertex2f(-13.3, 0.3);

glVertex2f(-13.3, 0.3);
glVertex2f(-13.3, 1.4);

glVertex2f(-13.3, 1.4);
glVertex2f(-14.2, 2.2);

glVertex2f(-14.2, 2.2);
glVertex2f(-15.1, 2.5);

glVertex2f(-15.1, 2.5);
glVertex2f(-16, 2.5);

glEnd();

}

void WORD_W(){

glBegin(GL_LINES);

glColor3f(0, 0.0, 0.8);

glVertex2f(-9.5, 4.5);
glVertex2f(-4.5, -4.5);

glVertex2f(-4.5, -4.5);
glVertex2f(-1.5, -4.5);


glVertex2f(-1.5, -4.5);
glVertex2f(0.5, 1.5);


glVertex2f(0.5, 1.5);
glVertex2f(2.5, -4.5);

glVertex2f(2.5, -4.5);
glVertex2f(5.5, -4.5);

glVertex2f(5.5, -4.5);
glVertex2f(9.5, 4.5);

glVertex2f(9.5, 4.5);
glVertex2f(7.5, 5.5);


glVertex2f(7.5, 5.5);
glVertex2f(4, -1.5);

glVertex2f(4, -1.5);
glVertex2f(1.4, 5.5);

glVertex2f(1.4, 5.5);
glVertex2f(1, 5.3);

glVertex2f(1, 5.3);
glVertex2f(0.6, 5.2);

glVertex2f(0.6, 5.2);
glVertex2f(0.2, 5.2);

glVertex2f(0.2, 5.2);
glVertex2f(-0.2, 5.3);

glVertex2f(-0.2, 5.3);
glVertex2f(-0.6, 5.5);

glVertex2f(-0.6, 5.5);
glVertex2f(-3.1, -1.5);

glVertex2f(-3.1, -1.5);
glVertex2f(-7.5, 5.5);

glVertex2f(-7.5, 5.5);
glVertex2f(-9.5, 4.5);





glEnd();

}

void WORD_S(){

glBegin(GL_LINES);

glColor3f(0, 1.0, 0);

glVertex2f(16.9, 2.75);
glVertex2f(15.9, 4.3);

glVertex2f(15.9, 4.3);
glVertex2f(14.7, 5.3);

glVertex2f(14.7, 5.3);
glVertex2f(13.6, 5.5);

glVertex2f(13.6, 5.5);
glVertex2f(11.9, 5.5);

glVertex2f(11.9, 5.5);
glVertex2f(11.4, 5.3);

glVertex2f(11.4, 5.3);
glVertex2f(10.8, 4.9);

glVertex2f(10.8, 4.9);
glVertex2f(10.6, 4.5);

glVertex2f(10.6, 4.5);
glVertex2f(10.6, 4.1);

glVertex2f(10.6, 4.1);
glVertex2f(10.6, 3.7);

glVertex2f(10.6, 3.7);
glVertex2f(10.7, 3.3);

glVertex2f(10.7, 3.3);
glVertex2f(11, 2.7);

glVertex2f(11, 2.7);
glVertex2f(11.8, 1.9);


glVertex2f(11.8, 1.9);
glVertex2f(12.4, 1.1);

glVertex2f(12.4, 1.1);
glVertex2f(13.2, 0.3);

glVertex2f(13.2, 0.3);
glVertex2f(13.9, -0.5);

glVertex2f(13.9, -0.5);
glVertex2f(14.2, -1.5);

glVertex2f(14.2, -1.5);
glVertex2f(14.1, -2.2);

glVertex2f(14.1, -2.2);
glVertex2f(13.7, -3.1);


glVertex2f(13.7, -3.1);
glVertex2f(12.2, -3.1);

glVertex2f(12.2, -3.1);
glVertex2f(11.2, -2.1);

glVertex2f(11.2, -2.1);
glVertex2f(10.2, -0.1);

glVertex2f(10.2, -0.1);
glVertex2f(9.7, 0.9);

glVertex2f(9.7, 0.9);
glVertex2f(8.7, -0.6);

glVertex2f(8.7, -0.6);
glVertex2f(9.7, -2.6);

glVertex2f(9.7, -2.6);
glVertex2f(10.7, -3.6);

glVertex2f(10.7, -3.6);
glVertex2f(11.6, -4.3);

glVertex2f(11.6, -4.3);
glVertex2f(12.2, -4.5);

glVertex2f(12.2, -4.5);
glVertex2f(14.7, -4.5);

glVertex2f(14.7, -4.5);
glVertex2f(15.2, -3.6);

glVertex2f(15.2, -3.6);
glVertex2f(15.7, -2.6);

glVertex2f(15.7, -2.6);
glVertex2f(15.9, -1.4);

glVertex2f(15.9, -1.4);
glVertex2f(15.8, -0.4);

glVertex2f(15.8, -0.4);
glVertex2f(15.5, 0.6);

glVertex2f(15.5, 0.6);
glVertex2f(14.9, 1.3);

glVertex2f(14.9, 1.3);
glVertex2f(14.3, 1.8);

glVertex2f(14.3, 1.8);
glVertex2f(13.85, 2.2);

glVertex2f(13.85, 2.2);
glVertex2f(13.4, 2.5);

glVertex2f(13.4, 2.5);
glVertex2f(13, 2.9);

glVertex2f(13, 2.9);
glVertex2f(12.8, 3.25);

glVertex2f(12.8, 3.25);
glVertex2f(12.65, 3.55);

glVertex2f(12.65, 3.55);
glVertex2f(12.65, 3.85);

glVertex2f(12.65, 3.85);
glVertex2f(12.95, 4.2);

glVertex2f(12.95, 4.2);
glVertex2f(13.4, 4.2);

glVertex2f(13.4, 4.2);
glVertex2f(13.9, 4.05);

glVertex2f(13.9, 4.05);
glVertex2f(14.5, 3.7);

glVertex2f(14.5, 3.7);
glVertex2f(15, 3.25);

glVertex2f(15, 3.25);
glVertex2f(15.4, 2.8);

glVertex2f(15.4, 2.8);
glVertex2f(15.9, 2.1);

glVertex2f(15.9, 2.1);
glVertex2f(16.9, 2.75);




glEnd();

}
void WORD_I(){

glBegin(GL_LINES);

glColor3f(0, 0.0, 0);

glVertex2f(18.4, 3.5);
glVertex2f(20.4, 3.5);

glVertex2f(20.4, 3.5);
glVertex2f(20.4, -2.5);

glVertex2f(20.4, -2.5);
glVertex2f(18.4, -2.5);

glVertex2f(18.4, -2.5);
glVertex2f(18.4, -4.5);

glVertex2f(18.4, -4.5);
glVertex2f(24.4, -4.5);

glVertex2f(24.4, -4.5);
glVertex2f(24.4, -2.5);

glVertex2f(24.4, -2.5);
glVertex2f(22.4, -2.5);

glVertex2f(22.4, -2.5);
glVertex2f(22.4, 3.5);

glVertex2f(22.4, 3.5);
glVertex2f(24.4, 3.5);

glVertex2f(24.4, 3.5);
glVertex2f(24.4, 5.5);

glVertex2f(24.4, 5.5);
glVertex2f(18.4, 5.5);

glVertex2f(18.4, 5.5);
glVertex2f(18.4, 3.5);






glEnd();

}

void WORD_F(){

glBegin(GL_LINES);

glColor3f(1, 0.0, 0);

glVertex2f(27.4, 5.5);
glVertex2f(26.4, 4.6);

glVertex2f(26.4, 4.6);
glVertex2f(26.4, -4.5);

glVertex2f(26.4, -4.5);
glVertex2f(28.4, -4.5);

glVertex2f(28.4, -4.5);
glVertex2f(28.4, 0);

glVertex2f(28.4, 0);
glVertex2f(32.4, 0);

glVertex2f(32.4, 0);
glVertex2f(32.4, 2);

glVertex2f(32.4, 2);
glVertex2f(28.4, 2);

glVertex2f(28.4, 2);
glVertex2f(28.4, 3.5);


glVertex2f(28.4, 3.5);
glVertex2f(34.4, 3.5);

glVertex2f(34.4, 3.5);
glVertex2f(34.4, 5.5);

glVertex2f(34.4, 5.5);
glVertex2f(27.4, 5.5);

glEnd();

}


void display() {

glClearColor(1.0f, 1.0f, 1.0f, 1.0f);

glClear(GL_COLOR_BUFFER_BIT);

glLineWidth(5);

WORD_T();
WORD_O();
WORD_W();
WORD_S();
WORD_I();
WORD_F();


glFlush(); // Render now

}

/* Main function: GLUT runs as a console application starting at main() */

int main(int argc, char** argv) {


glutInit(&argc, argv); // Initialize GLUT
glutInitWindowSize(920, 320); // Set the window's initial width & height
glutInitWindowPosition((glutGet(GLUT_SCREEN_WIDTH)-920)/2,
                       (glutGet(GLUT_SCREEN_HEIGHT)-320)/2);

glutCreateWindow("OpenGL Setup"); // Create a window with the given title

glutDisplayFunc(display); // Register display callback handler for window re-paint

gluOrtho2D(-32, +35, -6, +6);
glutMainLoop(); // Enter the event-processing loop

return 0;

}





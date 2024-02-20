#include <math.h>
#include <windows.h> // for MS Windows

#include <GL/glut.h> // GLUT, include glu.h and gl.h

/* Handler for window-repaint event. Call back when the window first appears and

whenever the window needs to be re-painted. */
void WORD_A(){

glBegin(GL_LINES);

glColor3f(1, 0.0, 0);

glVertex2f(-10.8, 4);
glVertex2f(-13.8, -3);\

glVertex2f(-13.8, -3);
glVertex2f(-12.8, -4);

glVertex2f(-12.8, -4);
glVertex2f(-11.3, -0.5);

glVertex2f(-11.3, -0.5);
glVertex2f(-9.3, -0.5);

glVertex2f(-9.3, -0.5);
glVertex2f(-7.8, -4);

glVertex2f(-7.8, -4);
glVertex2f(-6.8, -3);

glVertex2f(-6.8, -3);
glVertex2f(-9.8, 4);

glVertex2f(-9.8, 4);
glVertex2f(-10.8,4);

glVertex2f(-10.3, 2.5);
glVertex2f(-11, 0.5);

glVertex2f(-11, 0.5);
glVertex2f(-9.3, 0.5);

glVertex2f(-9.3, 0.5);
glVertex2f(-10.3, 2.5);




glEnd();

}

void WORD_I(){

glBegin(GL_LINES);

glColor3f(0, 1, 0);

glVertex2f(-5.8, 4);
glVertex2f(-5.8, 3);

glVertex2f(-5.8, 3);
glVertex2f(-4.8, 3);

glVertex2f(-4.8, 3);
glVertex2f(-4.8, -3);

glVertex2f(-4.8, -3);
glVertex2f(-5.8, -3);

glVertex2f(-5.8, -3);
glVertex2f(-5.8, -4);

glVertex2f(-5.8, -4);
glVertex2f(-2.8, -4);

glVertex2f(-2.8, -4);
glVertex2f(-2.8, -3);

glVertex2f(-2.8, -3);
glVertex2f(-3.8, -3);

glVertex2f(-3.8, -3);
glVertex2f(-3.8, 3);

glVertex2f(-3.8, 3);
glVertex2f(-2.8, 3);

glVertex2f(-2.8, 3);
glVertex2f(-2.8, 4);

glVertex2f(-2.8, 4);
glVertex2f(-5.8, 4);







glEnd();

}

void WORD_U(){

glBegin(GL_LINES);

glColor3f(0, 0.0, 0.8);

glVertex2f(-0.8, 4);
glVertex2f(-0.8, -1);

glVertex2f(-0.8, -1);
glVertex2f(-0.4, -2);

glVertex2f(-0.4, -2);
glVertex2f(0.4, -3);

glVertex2f(0.4, -3);
glVertex2f(1.6, -3.6);

glVertex2f(1.6, -3.6);
glVertex2f(2.6, -4);

glVertex2f(2.6, -4);
glVertex2f(4, -4);

glVertex2f(4, -4);
glVertex2f(5, -3.6);

glVertex2f(5, -3.6);
glVertex2f(5.8, -3);

glVertex2f(5.8, -3);
glVertex2f(6.8, -2);

glVertex2f(6.8, -2);
glVertex2f(7.2, -1);

glVertex2f(7.2, -1);
glVertex2f(7.2, 4);

glVertex2f(7.2, 4);
glVertex2f(5.6, 4);

glVertex2f(5.6, 4);
glVertex2f(5.6, 0);

glVertex2f(5.6, 0);
glVertex2f(5.2, -1);

glVertex2f(5.2, -1);
glVertex2f(4.8, -1.6);

glVertex2f(4.8, -1.6);
glVertex2f(4.4, -2.2);

glVertex2f(4.4, -2.2);
glVertex2f(3, -2.4);

glVertex2f(3, -2.4);
glVertex2f(1.65, -2.1);

glVertex2f(1.65, -2.1);
glVertex2f(1, -1.2);

glVertex2f(1, -1.2);
glVertex2f(0.8, 0);

glVertex2f(0.8, 0);
glVertex2f(0.8, 4);

glVertex2f(0.8, 4);
glVertex2f(-0.8, 4);



glEnd();

}

void WORD_B(){

glBegin(GL_LINES);


glColor3f(0, 0.0, 0);

glVertex2f(10.2, 4);
glVertex2f(9.2, 3);

glVertex2f(9.2, 3);
glVertex2f(9.2, -3);

glVertex2f(9.2, -3);
glVertex2f(10.2, -4);

glVertex2f(10.2, -4);
glVertex2f(12.2, -4);

glVertex2f(12.2, -4);
glVertex2f(13.2, -3.5);

glVertex2f(13.2, -3.5);
glVertex2f(14, -2.6);

glVertex2f(14, -2.6);
glVertex2f(14.2, -1.6);

glVertex2f(14.2, -1.6);
glVertex2f(14.1, -0.6);

glVertex2f(14.1, -0.6);
glVertex2f(13.4, 0.3);

glVertex2f(13.4, 0.3);
glVertex2f(12.5, 0.8);

glVertex2f(12.5, 0.8);
glVertex2f(12, 1.1);


glVertex2f(12, 1.1);
glVertex2f(12.3, 1.6);

glVertex2f(12.3, 1.6);
glVertex2f(12.6, 2.5);

glVertex2f(12.6, 2.5);
glVertex2f(12, 3.7);

glVertex2f(12, 3.7);
glVertex2f(11.2, 4);

glVertex2f(11.2, 4);
glVertex2f(10.2, 4);

glVertex2f(10.2, 0.4);
glVertex2f(10.2, -2.65);

glVertex2f(10.2, -2.65);
glVertex2f(12.45, -2.65);

glVertex2f(12.45, -2.65);
glVertex2f(12.9, -2);

glVertex2f(12.9, -2);
glVertex2f(13.1, -1.2);

glVertex2f(13.1, -1.2);
glVertex2f(12.6, -0.4);

glVertex2f(12.6, -0.4);
glVertex2f(11.6, 0.3);

glVertex2f(11.6, 0.3);
glVertex2f(10.8, 0.4);

glVertex2f(10.8, 0.4);
glVertex2f(10.2, 0.4);

glVertex2f(10.2, 1.5);
glVertex2f(11.2, 1.5);

glVertex2f(11.2, 1.5);
glVertex2f(11.5, 2.2);

glVertex2f(11.5, 2.2);
glVertex2f(11.35, 2.85);

glVertex2f(11.35, 2.85);
glVertex2f(10.65, 3.1);

glVertex2f(10.65, 3.1);
glVertex2f(10.2, 2.8);

glVertex2f(10.2, 2.8);
glVertex2f(10.2, 1.5);




glEnd();
}





void display() {

glClearColor(1.0f, 1.0f, 1.0f, 1.0f);

glClear(GL_COLOR_BUFFER_BIT);

glLineWidth(5);

//glLineWidth(2.5);

WORD_A();
WORD_I();
WORD_U();
WORD_B();
/*
*/

glFlush(); // Render now

}

/* Main function: GLUT runs as a console application starting at main() */

int main(int argc, char** argv) {

glutInitWindowSize(920, 320); // Set the window's initial width & height
glutInit(&argc, argv); // Initialize GLUT
glutInitWindowPosition((glutGet(GLUT_SCREEN_WIDTH)-920)/2,
                       (glutGet(GLUT_SCREEN_HEIGHT)-320)/2);

glutCreateWindow("OpenGL Setup"); // Create a window with the given title


glutDisplayFunc(display); // Register display callback handler for window re-paint
gluOrtho2D(-14.5, +14.5, -4.5, +4.5);
glutMainLoop(); // Enter the event-processing loop

return 0;

}





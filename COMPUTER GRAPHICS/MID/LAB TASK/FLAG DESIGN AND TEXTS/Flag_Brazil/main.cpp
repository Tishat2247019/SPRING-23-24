#include <math.h>
#include <windows.h> // for MS Windows

#include <GL/glut.h> // GLUT, include glu.h and gl.h

/* Handler for window-repaint event. Call back when the window first appears and

whenever the window needs to be re-painted. */


void outline(){
glLineWidth(1.5);
glBegin(GL_LINES);

glColor3f(0.0f, 0.0f, 0.0f);


glVertex2f(-5, 3);
glVertex2f( -5, -3);

glVertex2f( -5, -3);
glVertex2f(5, -3);

glVertex2f(5, -3);
glVertex2f(5, 3);

glVertex2f(5, 3);
glVertex2f(-5, 3);

glEnd();
}

void rectangle_green(){

glBegin(GL_POLYGON);

glColor3f(0, 0.50, 0);

glVertex2f(-5, -3);

glVertex2f(5, -3);

glVertex2f(5, 3);

glVertex2f(-5, 3);

glEnd();


}

void rectangle_yellow(){

glBegin(GL_POLYGON);

glColor3f(1, 0.8, 0);

glVertex2f(-5, 0);

glVertex2f(0, -3);

glVertex2f(5, 0);

glVertex2f(0, 3);

glEnd();


}

void circle()
{
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {
            glColor3f(0.0,0.0,0.7);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=1.794373412;;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x,y);
        }

    //glVertex2f(0.3f,0.4f);
    //glVertex2f(0.1f,0.4f);

	glEnd();
}

void white_curve(){
glBegin(GL_POLYGON);

glColor3f(1, 1, 1);

glVertex2f(-1.70820839, 0.549363296018);

glVertex2f(-1.05, 0.4);

glVertex2f(-0.44, 0.18);

glVertex2f(0.06, -0.04);
glVertex2f(0.5, -0.26);
glVertex2f(0.9, -0.53);
glVertex2f(1.45602370, -1.0486996274501);

glVertex2f(1.521879014436, -0.95061042873932);
glVertex2f(1.5859206795637, -0.839423371823);
glVertex2f(1.6361185518763, -0.7366633486094);

glVertex2f(1.67166157, -0.6521683277);
glVertex2f(1.03, -0.07);
glVertex2f(0.49, 0.27);
glVertex2f(-0.2, 0.6);
glVertex2f(-0.94, 0.83);
glVertex2f(-1.55235362, 0.89998549);

glVertex2f(-1.5911393540027, 0.829469321);
glVertex2f(-1.634432601, 0.7405444022056);
glVertex2f(-1.67593126095, 0.6411164866366);

glEnd();

}

void display() {

glClearColor(1.0f, 1.0f, 1.0f, 1.0f);

glClear(GL_COLOR_BUFFER_BIT);

glLineWidth(2.5);

rectangle_green();
rectangle_yellow();
circle();
white_curve();
outline();

glFlush(); // Render now

}

/* Main function: GLUT runs as a console application starting at main() */

int main(int argc, char** argv) {

glutInitWindowSize(920, 600); // Set the window's initial width & height
glutInit(&argc, argv); // Initialize GLUT
glutInitWindowPosition((glutGet(GLUT_SCREEN_WIDTH)-920)/2,
                       (glutGet(GLUT_SCREEN_HEIGHT)-600)/2);
glutCreateWindow("OpenGL Setup"); // Create a window with the given title


glutDisplayFunc(display); // Register display callback handler for window re-paint

gluOrtho2D(-5.5, +5.5, -3.5, +3.5);
glutMainLoop(); // Enter the event-processing loop

return 0;

}





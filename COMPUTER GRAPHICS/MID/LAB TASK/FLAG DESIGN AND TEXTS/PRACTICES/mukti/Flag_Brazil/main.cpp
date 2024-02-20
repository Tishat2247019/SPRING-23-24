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



void display() {

glClearColor(1.0f, 1.0f, 1.0f, 1.0f);

glClear(GL_COLOR_BUFFER_BIT);

glLineWidth(2.5);

rectangle_green();
rectangle_yellow();
circle();
outline();

glFlush(); // Render now

}

/* Main function: GLUT runs as a console application starting at main() */

int main(int argc, char** argv) {

glutInitWindowSize(920, 600); // Set the window's initial width & height
glutInit(&argc, argv); // Initialize GLUT
glutCreateWindow("OpenGL Setup"); // Create a window with the given title


glutDisplayFunc(display); // Register display callback handler for window re-paint

gluOrtho2D(-5.5, +5.5, -3.5, +3.5);
glutMainLoop(); // Enter the event-processing loop

return 0;

}





#include <math.h>
#include <windows.h> // for MS Windows

#include <GL/glut.h> // GLUT, include glu.h and gl.h

/* Handler for window-repaint event. Call back when the window first appears and

whenever the window needs to be re-painted. */

void rectangle_green(){

glBegin(GL_POLYGON);

glColor3f(0, 0.70, 0);

glVertex2f(-0.6, -0.2);

glVertex2f(0.6, -0.2);

glVertex2f(0.6, 0.7);

glVertex2f(-0.6, 0.7);

glEnd();


}

void rectangle_yellow(){

glBegin(GL_POLYGON);

glColor3f(1, 1, 0);

glVertex2f(-0.4, 0.25);

glVertex2f(0.0, -0.1);

glVertex2f(0.4, 0.25);

glVertex2f(0, 0.6);

glEnd();


}

void circle()
{
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {
            glColor3f(0.0,0.0,0.8);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.17;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x,y+.25);
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





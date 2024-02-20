#include <math.h>
#include <windows.h> // for MS Windows

#include <GL/glut.h> // GLUT, include glu.h and gl.h

/* Handler for window-repaint event. Call back when the window first appears and

whenever the window needs to be re-painted. */

void outline(){
glLineWidth(2.5);
glBegin(GL_LINES);

glColor3f(0, 0, 0);

glVertex2f(-5.01, 3.01);
glVertex2f(-5.01, -3.01);

glVertex2f(-5.01, -3.01);
glVertex2f(5.01, -3.01);

glVertex2f(5.01, -3.01);
glVertex2f(5.01, 3.01);

glVertex2f(5.01, 3.01);
glVertex2f(-5.01, 3.01);

glEnd();


}

void rectangle(){

glBegin(GL_POLYGON);

glColor3f(0, 0.60, 0);

glVertex2f(-5, 3);

glVertex2f(-5, -3);

glVertex2f(5, -3);

glVertex2f(5, 3);

glEnd();


}

void circle()
{
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {
            glColor3f(1.0,0.0,0.0);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.106;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x + 0,y + 0);
        }

    //glVertex2f(0.3f,0.4f);
    //glVertex2f(0.1f,0.4f);

	glEnd();
}

void display() {

glClearColor(1.0f, 1.0f, 1.0f, 1.0f);

glClear(GL_COLOR_BUFFER_BIT);


rectangle();
circle();
outline();

glFlush(); // Render now

}

/* Main function: GLUT runs as a console application starting at main() */

int main(int argc, char** argv) {

glutInitWindowSize(920, 650); // Set the window's initial width & height
glutInit(&argc, argv); // Initialize GLUT
glutInitWindowPosition((glutGet(GLUT_SCREEN_WIDTH)-920)/2,
                       (glutGet(GLUT_SCREEN_HEIGHT)-600)/2);


glutCreateWindow("OpenGL Setup"); // Create a window with the given title


glutDisplayFunc(display); // Register display callback handler for window re-paint
gluOrtho2D(-6, +6, -4, +4);
;
glutMainLoop(); // Enter the event-processing loop

return 0;

}





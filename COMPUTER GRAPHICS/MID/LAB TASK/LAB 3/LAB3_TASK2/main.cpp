#include <math.h>
#include <windows.h> // for MS Windows

#include <GL/glut.h> // GLUT, include glu.h and gl.h

/* Handler for window-repaint event. Call back when the window first appears and

whenever the window needs to be re-painted. */


void tree(){

glBegin(GL_POLYGON);

glColor3f(0.0f, 1.0f, 0.0f);
glVertex2f(-140, 30.5);
glVertex2f(-152.5, 17.5);
glVertex2f(-168, 16.5);
glVertex2f(-179, 27);
glVertex2f(-180, 40);
glVertex2f(-189, 44);
glVertex2f(-197.2, 53.4);
glVertex2f(-200.2, 68);
glVertex2f(-197.5,80.5);
glVertex2f(-192.5,87.5);
glVertex2f(-184.3,91.3);
glVertex2f(-182.6,101.1);
glVertex2f(-176,109);
glVertex2f(-166,111.5);
glVertex2f(-155.8,111.85 );
glVertex2f(-150.8,110.2 );
glVertex2f(-145.4,109.2 );
glVertex2f(-140.4,114 );
glVertex2f(-129.8,117.6 );
glVertex2f(-119.05,117.35 );
glVertex2f(-111.1,113.7 );
glVertex2f(-104.4,106.2 );
glVertex2f(-100,100 );
glVertex2f(-92,100.6 );
glVertex2f(-82,97.4 );
glVertex2f(-76.1,88.8);
glVertex2f(-76,78.8);
glVertex2f(-78.45, 71.9);
glVertex2f(-73.6, 67.8);
glVertex2f(-70.2, 61.4);
glVertex2f(-71, 51);
glVertex2f(-75.86, 43.68);
glVertex2f(-73.04, 37.78);
glVertex2f(-70, 30);
glVertex2f(-73, 19);
glVertex2f(-85, 8.5);
glVertex2f(-99, 7.2);
glVertex2f(-112, 10);
glVertex2f(-120, 24.5);

glEnd();


glColor3f(0.5f, 0.3f, 0.0f);
glBegin(GL_POLYGON);
/*
glVertex2f(-120, 24.5);
glVertex2f(-140, 24.5);
glVertex2f(-140, -65);
glVertex2f(-162, -83);
glVertex2f(-108, -83);
glVertex2f(-120, -65);
glVertex2f(-120, -24.5);
*/

glVertex2f(-140, -65);
glVertex2f(-162, -83);
glVertex2f(-108, -83);
glVertex2f(-120, -65);
glVertex2f(-120, 24.5);
glVertex2f(-140, 24.5);
/*
*/

glEnd();

glBegin(GL_POLYGON);
glVertex2f(-120, 24.5);
glVertex2f(-107.7, 35);
glVertex2f(-113.7, 42);
glVertex2f(-119.7, 37);
glVertex2f(-119.7, 61);
glVertex2f(-131.7, 61);
glVertex2f(-131.7, 43);
glVertex2f(-140.2, 50.6);
glVertex2f(-144.7, 42);
glVertex2f(-140, 37);
glVertex2f(-140, 24.5);
glEnd();


}

void outline_tree(){

glColor3f(0, 0, 0);
glLineWidth(1.5);
glBegin(GL_LINES);

glVertex2f(-140, -65);
glVertex2f(-162, -83);

glVertex2f(-162, -83);
glVertex2f(-108, -83);

glVertex2f(-108, -83);
glVertex2f(-120, -65);

glVertex2f(-120, -65);
glVertex2f(-120, 24.5);

glVertex2f(-120, 24.5);
glVertex2f(-107.7, 35);

glVertex2f(-107.7, 35);
glVertex2f(-113.7, 42);

glVertex2f(-113.7, 42);
glVertex2f(-119.7, 37);

glVertex2f(-119.7, 37);
glVertex2f(-119.7, 61);

glVertex2f(-119.7, 61);
glVertex2f(-131.7, 61);

glVertex2f(-131.7, 61);
glVertex2f(-131.7, 43);

glVertex2f(-131.7, 43);
glVertex2f(-140.2, 50.6);

glVertex2f(-140.2, 50.6);
glVertex2f(-144.7, 42);

glVertex2f(-144.7, 42);
glVertex2f(-140, 37);

glVertex2f(-140, 37);
glVertex2f(-140, 24.5);

glVertex2f(-140, 24.5);
glVertex2f(-140, -65);


//round green leafs

glVertex2f(-140, 30.5);
glVertex2f(-152.5, 17.5);

glVertex2f(-152.5, 17.5);
glVertex2f(-168, 16.5);

glVertex2f(-168, 16.5);
glVertex2f(-179, 27);

glVertex2f(-179, 27);
glVertex2f(-180, 40);

glVertex2f(-180, 40);
glVertex2f(-189, 44);

glVertex2f(-189, 44);
glVertex2f(-197.2, 53.4);

glVertex2f(-197.2, 53.4);
glVertex2f(-200.2, 68);

glVertex2f(-200.2, 68);
glVertex2f(-197.5,80.5);

glVertex2f(-197.5,80.5);
glVertex2f(-192.5,87.5);

glVertex2f(-192.5,87.5);
glVertex2f(-184.3,91.3);

glVertex2f(-184.3,91.3);
glVertex2f(-182.6,101.1);

glVertex2f(-182.6,101.1);
glVertex2f(-176,109);

glVertex2f(-176,109);
glVertex2f(-166,111.5);

glVertex2f(-166,111.5);
glVertex2f(-155.8,111.85 );

glVertex2f(-155.8,111.85 );
glVertex2f(-150.8,110.2 );

glVertex2f(-150.8,110.2 );
glVertex2f(-145.4,109.2 );

glVertex2f(-145.4,109.2 );
glVertex2f(-140.4,114 );

glVertex2f(-140.4,114 );
glVertex2f(-129.8,117.6 );

glVertex2f(-129.8,117.6 );
glVertex2f(-119.05,117.35 );

glVertex2f(-119.05,117.35 );
glVertex2f(-111.1,113.7 );

glVertex2f(-111.1,113.7 );
glVertex2f(-104.4,106.2 );

glVertex2f(-104.4,106.2 );
glVertex2f(-100,100 );

glVertex2f(-100,100 );
glVertex2f(-92,100.6 );

glVertex2f(-92,100.6 );
glVertex2f(-82,97.4 );

glVertex2f(-82,97.4 );
glVertex2f(-76.1,88.8);

glVertex2f(-76.1,88.8);
glVertex2f(-76,78.8);

glVertex2f(-76,78.8);
glVertex2f(-78.45, 71.9);

glVertex2f(-78.45, 71.9);
glVertex2f(-73.6, 67.8);

glVertex2f(-73.6, 67.8);
glVertex2f(-70.2, 61.4);

glVertex2f(-70.2, 61.4);
glVertex2f(-71, 51);

glVertex2f(-71, 51);
glVertex2f(-75.86, 43.68);

glVertex2f(-75.86, 43.68);
glVertex2f(-73.04, 37.78);

glVertex2f(-73.04, 37.78);
glVertex2f(-70, 30);

glVertex2f(-70, 30);
glVertex2f(-73, 19);

glVertex2f(-73, 19);
glVertex2f(-85, 8.5);

glVertex2f(-85, 8.5);
glVertex2f(-99, 7.2);

glVertex2f(-99, 7.2);
glVertex2f(-112, 10);

glVertex2f(-112, 10);
glVertex2f(-120, 16.5);
//glVertex2f(-120, 24.5);


glEnd();

}





void display() {

glClearColor(1.0f, 1.0f, 1.0f, 1.0f);

glClear(GL_COLOR_BUFFER_BIT);


tree();
outline_tree();

glFlush(); // Render now

}

/* Main function: GLUT runs as a console application starting at main() */

int main(int argc, char** argv) {

glutInitWindowSize(600, 600); // Set the window's initial width & height
glutInit(&argc, argv); // Initialize GLUT
glutInitWindowPosition((glutGet(GLUT_SCREEN_WIDTH)-600)/2,
                       (glutGet(GLUT_SCREEN_HEIGHT)-600)/2);
glutCreateWindow("OpenGL Setup"); // Create a window with the given title


glutDisplayFunc(display); // Register display callback handler for window re-paint

gluOrtho2D(-210, -60, -100, +130);
glutMainLoop(); // Enter the event-processing loop

return 0;

}





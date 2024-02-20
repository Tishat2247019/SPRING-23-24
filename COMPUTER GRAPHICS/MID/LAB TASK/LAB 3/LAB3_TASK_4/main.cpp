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

void outlilne(){
glColor3f(0, 0, 0);
glLineWidth(1.5);

glBegin(GL_LINES);
 glVertex2f(10, 270);
glVertex2f(-32, 210);

glVertex2f(-32, 210);
glVertex2f(-44, 210);

glVertex2f(-44, 210);
glVertex2f(10, 285);

glVertex2f(10, 285);
glVertex2f(64, 210);

glVertex2f(64, 210);
glVertex2f(52, 210);

glVertex2f(52, 210);
glVertex2f(10, 270);



 glEnd();


 glBegin(GL_LINES);
glVertex2f(-32, 210);
glVertex2f(-32, 20);

glVertex2f(-32, 20);
glVertex2f(52, 20);

glVertex2f(52, 20);
glVertex2f(52, 210);


glEnd();

glBegin(GL_LINES);
glVertex2f(-39.9, 20);
glVertex2f(-60, 0);

glVertex2f(-60, 0);
glVertex2f(80, 0);

glVertex2f(80, 0);
glVertex2f(60, 20);

glVertex2f(60, 20);
glVertex2f(-39.9, 20);

glEnd();

//lowere portion outline
glBegin(GL_LINES);
glVertex2f(-40, 0);
glVertex2f(-40, -83);

glVertex2f(-40, -83);
glVertex2f(60, -83);

glVertex2f(60, -83);
glVertex2f(60, 0);


glEnd();

glBegin(GL_LINES);

glVertex2f(52, 75.66478);
glVertex2f(160, 0);

glVertex2f(160, 0);
glVertex2f(140, 0);

glVertex2f(140, 0);
glVertex2f(52, 60.576048);

glVertex2f(52, 60.576048);
glVertex2f(52, 75.66478);
glEnd();

glBegin(GL_LINES);

glVertex2f(100, 60);
glVertex2f(99.9899323003119, 42.04304600);

glVertex2f(99.9899323003119, 42.04304600);
glVertex2f(119.9380400662845, 28.0674041695164);

glVertex2f(119.9380400662845, 28.0674041695164);
glVertex2f(120,60);

glVertex2f(120,60);
glVertex2f(100, 60);


glEnd();

//right window
glBegin(GL_LINES);

glVertex2f(80,-30);
glVertex2f(80,-60);

glVertex2f(80,-60);
glVertex2f(110,-60);

glVertex2f(110,-60);
glVertex2f(110,-30);

glVertex2f(110,-30);
glVertex2f(80,-30);

glEnd();

//LOWER OUTLILNE UNDER THE RIGHT WINDOW\

glBegin(GL_LINES);

glVertex2f(60,-80);
glVertex2f(140,-80);

glVertex2f(140,-80);
glVertex2f(140,0);


glEnd();


}

void building(){

// buildin right extension
glBegin(GL_POLYGON);

glColor3f(1, 0.5, 0);

glVertex2f(52, 75.66478);
glVertex2f(160, 0);
glVertex2f(140, 0);
glVertex2f(52, 60.576048);
glEnd();

glBegin(GL_POLYGON);

glColor3f(1, 0.6, 0);

glVertex2f(52, 60.576048);
glVertex2f(140, 0);
glVertex2f(140, -80);
glVertex2f(52, -80);
glEnd();



glBegin(GL_POLYGON);

glColor3f(1, 0.7, 0);

glVertex2f(10, 270);

glVertex2f(-32, 210);

glVertex2f(-32, 20);

glVertex2f(52, 20);
glVertex2f(52, 210);


glEnd();

glBegin(GL_POLYGON);

glColor3f(1, 0.5, 0);

glVertex2f(-39.9, 20);

glVertex2f(-60, 0);

glVertex2f(80, 0);

glVertex2f(60, 20);

glEnd();


glBegin(GL_POLYGON);

glColor3f(1, 0.7, 0);

glVertex2f(-40, 0);

glVertex2f(-40, -83);

glVertex2f(60, -83);

glVertex2f(60, 0);

glEnd();


glBegin(GL_POLYGON);

glColor3f(0.7, 0.8, 0.8);
glVertex2f(-20, -83);
glVertex2f(-20, -20);
glVertex2f(-8.5, -13.5);
glVertex2f(3, -9.5);
glVertex2f(16, -9.5);
glVertex2f(28, -13);
glVertex2f(40, -20);
glVertex2f(40, -83);

glEnd();



glBegin(GL_POLYGON);

glColor3f(1, 0.5, 0);

glVertex2f(10, 270);
glVertex2f(-32, 210);
glVertex2f(-44, 210);
glVertex2f(10, 285);
glVertex2f(64, 210);
glVertex2f(52, 210);
glEnd();

//right window
glBegin(GL_POLYGON);

glColor3f(0.6, 0.6, 0.6);

glVertex2f(80,-30);
glVertex2f(80,-60);
glVertex2f(110,-60);
glVertex2f(110,-30);

glEnd();



//windows
glColor3f(0.6, 0.6, 0.6);
glBegin(GL_POLYGON);


glVertex2f(-20, 60);
glVertex2f(-20, 30);
glVertex2f(0, 30);
glVertex2f(0, 60);

glEnd();


glBegin(GL_POLYGON);

//glColor3f(1, 1.0, 1);

glVertex2f(20, 60);
glVertex2f(20, 30);
glVertex2f(40, 30);
glVertex2f(40, 60);

glEnd();

glBegin(GL_POLYGON);

//glColor3f(1, 1.0, 1);

glVertex2f(-20, 100);
glVertex2f(-20, 70);
glVertex2f(0, 70);
glVertex2f(0, 100);

glEnd();


glBegin(GL_POLYGON);

//glColor3f(1, 1.0, 1);

glVertex2f(20, 100);
glVertex2f(20, 70);
glVertex2f(40, 70);
glVertex2f(40,100);

glEnd();


glBegin(GL_POLYGON);

//glColor3f(1, 1.0, 1);

glVertex2f(-20, 140);
glVertex2f(-20, 110);
glVertex2f(0, 110);
glVertex2f(0, 140);

glEnd();


glBegin(GL_POLYGON);

//glColor3f(1, 1.0, 1);

glVertex2f(20, 140);
glVertex2f(20, 110);
glVertex2f(40, 110);
glVertex2f(40,140);

glEnd();


glBegin(GL_POLYGON);

//glColor3f(1, 1.0, 1);

glVertex2f(-20, 180);
glVertex2f(-20, 150);
glVertex2f(0, 150);
glVertex2f(0, 180);

glEnd();


glBegin(GL_POLYGON);

//glColor3f(1, 1.0, 1);

glVertex2f(20, 180);
glVertex2f(20, 150);
glVertex2f(40, 150);
glVertex2f(40,180);

glEnd();

glBegin(GL_POLYGON);

//glColor3f(1, 1.0, 1);

glVertex2f(-20, 220);
glVertex2f(-20, 190);
glVertex2f(0, 190);
glVertex2f(0, 220);

glEnd();


glBegin(GL_POLYGON);

//glColor3f(1, 1.0, 1);

glVertex2f(20, 220);
glVertex2f(20, 190);
glVertex2f(40, 190);
glVertex2f(40,220);

glEnd();

//right chimni

glBegin(GL_POLYGON);

glColor3f(0.6, 0.6, 0.6);

glVertex2f(100, 60);
glVertex2f(99.9899323003119, 42.04304600);
glVertex2f(119.9380400662845, 28.0674041695164);
glVertex2f(120,60);

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


tree();
building();
outlilne();

glFlush(); // Render now

}

/* Main function: GLUT runs as a console application starting at main() */

int main(int argc, char** argv) {

glutInitWindowSize(1020, 700); // Set the window's initial width & height
glutInit(&argc, argv); // Initialize GLUT
glutCreateWindow("OpenGL Setup"); // Create a window with the given title


glutDisplayFunc(display); // Register display callback handler for window re-paint

gluOrtho2D(-210, +300, -90, +300);
glutMainLoop(); // Enter the event-processing loop

return 0;

}





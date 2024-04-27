#include<GL/gl.h>
#include <GL/glut.h>

float r = 0;
float g = 0;
float b = 0;

void window(){
   glColor3f(0.5, 0.3, 0);
glBegin(GL_POLYGON);


//upper black portion
glBegin(GL_POLYGON);

glVertex2f(-95, 60);
glVertex2f(-80, 52);
glVertex2f(70, 52);
glVertex2f(82, 60);

glEnd();


//left window
glBegin(GL_POLYGON);
glVertex2f(-80, 52);
glVertex2f(-120, 75);
glVertex2f(-125,70);
glVertex2f(-125,-75);
glVertex2f(-120,-80);
glVertex2f(-80,-68);
glVertex2f(-80,-68);
glEnd();

//under black portion
glBegin(GL_POLYGON);
glVertex2f(-80,-68);
glVertex2f(-80,-73);
glVertex2f(70,-73);
glVertex2f(70,-68);

glEnd();


//right window
glBegin(GL_POLYGON);
glVertex2f(70,-68);
glVertex2f(110,-75);
glVertex2f(118,-72);
glVertex2f(118,74);
glVertex2f(110,80);
glVertex2f(70,52);

glEnd();


//left window part 2 square like shape
glColor3f(1, 1, 1);
glBegin(GL_POLYGON);
glVertex2f(-85, 45);
glVertex2f(-115, 60);
glVertex2f(-115, 5);
glVertex2f(-85, 1);

glEnd();

glBegin(GL_POLYGON);
glVertex2f(-85, -10);
glVertex2f(-115, -5);
glVertex2f(-115, -70);
glVertex2f(-85, -60);

glEnd();


//Right window 2 square like shape
glBegin(GL_POLYGON);
glVertex2f(76, 48);
glVertex2f(102, 66);
glVertex2f(101.5, 5.5);
glVertex2f(76, 0);

glEnd();

glBegin(GL_POLYGON);
glVertex2f(76, -10);
glVertex2f(76, -60);
glVertex2f(102, -64);
glVertex2f(102, -6);


glEnd();

//plus sign in the middle of the window

glColor3f(0,0,0);
glBegin(GL_POLYGON);
glVertex2f(-80,0);
glVertex2f(-80,-5);
glVertex2f(70,-5);
glVertex2f(70,0);

glEnd();

glColor3f(0,0,0);
glBegin(GL_POLYGON);
glVertex2f(-10,52);
glVertex2f(-10,-68);
glVertex2f(-5,-68);
glVertex2f(-5,52);

glEnd();

// under window extension
glColor3f(0.5, 0.3, 0);
glBegin(GL_POLYGON);
glVertex2f(-80,-73);
glVertex2f(-60,-90);
glVertex2f(50,-90);
glVertex2f(70,-73);
glEnd();



}

void window_background(){

//window background
glMatrixMode(GL_MODELVIEW);
glPushMatrix();

glColor3f(r, g, b);
glBegin(GL_POLYGON);

glVertex2f(-80,52);
glVertex2f(-80,-68);
glVertex2f(70,-68);
glVertex2f(70,52);
glEnd();

glPopMatrix();
}


void update_color(int value){
r += 0.01;
g += 0.01;


if (r >= 1){
    r = 0;
}
if (g >= 1){
    g = 0.5;
}
//b += 0.01;

glutPostRedisplay();
glutTimerFunc(20, update_color, 0);

}


void display() {

glClearColor(1.0f, 1.0f, 1.0f, 1.0f);

glClear(GL_COLOR_BUFFER_BIT); // Clear the color buffer with current clearing color
window_background();
window();
//BOX1();
//BOX2();

glFlush(); // Render now

}

/* Main function: GLUT runs as a console application starting at main() */

int main(int argc, char** argv) {

glutInitWindowSize(720, 620); // Set the window's initial width & height
glutInit(&argc, argv);

glutCreateWindow("Rotating Wheel"); // Create window with the given title


glutInitWindowPosition(50, 50); // Position the window's initial top-left corner

glutDisplayFunc(display); // Register callback handler for window re-paint event

gluOrtho2D(-140,+140,-100,+100);

//glutTimerFunc(20, box1move, 0);
//glutTimerFunc(20, box2move, 0);
glutTimerFunc(20, update_color, 0);


glutMainLoop(); // Enter the event-processing loop

return 0;

}

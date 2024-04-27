#include <windows.h>
#include <GL/glut.h>


void LINES() {

glLineWidth(2.5);

glBegin(GL_LINES);

glColor3f(0.0f, 0.0f, 0.0f);

glVertex2f(-1.0f, 0.0f);
glVertex2f(1.0f, 0.0f);

glVertex2f(0.0f, -1.0f);
glVertex2f(0.0f, 1.0f);

glEnd();

glFlush();
}

//Green Arrow
OBJECT1(){
glBegin(GL_POLYGON);

glColor3f(0.0f, 1.0f, 0.0f);

glVertex2f(0.2f, 0.3f);

glVertex2f(0.7f, 0.3f);

glVertex2f(0.7f, 0.5f);

glVertex2f(0.2f, 0.5f);

glEnd();

glBegin(GL_TRIANGLES);

glColor3f(0.0f, 1.0f, 0.0f);

glVertex2f(0.7f, 0.2f);

glVertex2f(0.9f, 0.4f);

glVertex2f(0.7f, 0.6f);

glEnd();

glFlush();
}

//Red object
OBJECT2(){
glBegin(GL_QUADS);

glColor3f(1.0f, 0.0f, 0.0f);

glVertex2f(-0.6f, 0.2f);

glVertex2f(-0.2f, 0.2f);

glVertex2f(-0.2f, 0.6f);

glVertex2f(-0.6f, 0.6f);

glEnd();

glFlush();
}

//Purple Triangle
OBJECT3(){
glBegin(GL_TRIANGLES);//

glColor3ub(75,0,130);

glVertex2f(-0.6f, -0.5f);

glVertex2f(-0.2f,-0.8f);

glVertex2f(-.2f, -0.2f);

glEnd();

glFlush();

}

//Yellow Triangle
OBJECT4(){
glBegin(GL_TRIANGLES);

glColor3ub(255,255,0);

glVertex2f(0.2f, -0.6f);

glVertex2f(0.8f,-0.6f);

glVertex2f(0.5f, -0.3f);

glEnd();

glFlush();

}
int s = 1;
void appear(int value){
s++;
if (s < 5){
glutPostRedisplay();
    glutTimerFunc(1000, appear, 0);
}
else{
        glutPostRedisplay();
    s = 1;
    glutTimerFunc(1000, appear, 0);
}

}


void display() {

glClearColor(1.0f, 1.0f, 1.0f, 1.0f);

glClear(GL_COLOR_BUFFER_BIT); // Clear the color buffer with current clearing color

LINES();

switch(s){
case 1:
OBJECT1();
break;

case 2 :
OBJECT2();
break;

case 3:
OBJECT3();

case 4:
OBJECT4();
break;

    }

glFlush(); // Render now

}


/* Main function: GLUT runs as a console application starting at main() */

int main(int argc, char** argv) {

glutInit(&argc, argv); // Initialize GLUT

glutCreateWindow("2"); // Create window with the given title

glutInitWindowSize(320, 320); // Set the window's initial width & height

glutDisplayFunc(display); // Register callback handler for window re-paint event

glutTimerFunc(1000, appear, 0);

glutMainLoop(); // Enter the event-processing loop

return 0;

}

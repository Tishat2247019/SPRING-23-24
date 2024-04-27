#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h
#include <cstdlib>
#include <ctime>
#include<iostream>
using namespace std;


/* Handler for window-repaint event. Call back when the window first appears and
whenever the window needs to be re-painted. */
const int numDrops = 70;
int winWidth = 280, winHeight = 160;

struct Raindrop {
    float x, y;
    float speed;
    float length;
};

Raindrop drops[numDrops];

// Define the boundaries of the square area
float minX = -140.0;
float maxX = 140.0;
float minY = -80.0;
float maxY = +80.0;

void init() {
  // glClearColor(0.0, 0.0, 0.0, 0.0);
    glMatrixMode(GL_PROJECTION);
   // gluOrtho2D(0, winWidth, 0, winHeight);

    // Initialize random seed
    srand(time(NULL));

    // Initialize raindrops within the square area
    for (int i = 0; i < numDrops; ++i) {
        drops[i].x = minX + rand() % (int)(maxX - minX);
        drops[i].y = minY + rand() % (int)(maxY - minY);
        drops[i].speed = 3.0 + (rand() % 10) / 10.0; // Random speed between 2 and 3
        drops[i].length = 5.0 + (rand() % 20); // Random length between 5 and 25
    }
}

void drawRain() {
    //glPointSize(2.0);
    glLineWidth(2.5);
    glBegin(GL_LINES);
    glColor3f(0.7, 0.7, 1.0); // Light blue color
    for (int i = 0; i < numDrops; ++i) {
        glVertex2f(drops[i].x, drops[i].y);
        glVertex2f(drops[i].x, drops[i].y - drops[i].length);
    }
    glEnd();
}

void updateRain() {
    for (int i = 0; i < numDrops; ++i) {
        drops[i].y -= drops[i].speed;
        if (drops[i].y < minY) { // Check if the raindrop has reached the lower boundary
            drops[i].y = maxY; // Reset the raindrop's position to the upper boundary
        }
    }
}

/*void display() {
    glClear(GL_COLOR_BUFFER_BIT);
    drawRain();
    glutSwapBuffers();
}*/

void update(int value) {
    updateRain();
    glutPostRedisplay();
    glutTimerFunc(10, update, 0);
}

float _move = 1;
float _movey = 0;

void flood(int value){
if (_move < 220)
 _move += 0.3;
if (_move >= 220){
    _movey += 0.1;
    //_move = 0;
}
 //cout << _move << endl;
glutPostRedisplay();

glutTimerFunc(20, flood, 0);


}
void river(){

glPushMatrix();
//glScalef(_move, 1, 0);
glTranslatef(-_move,_movey, 0);
//glTranslatef(_move, -_move, 0);

glColor3f(0, 0, 1);
glBegin(GL_POLYGON);

glVertex2f(-140,-220);
glVertex2f(-120, -70);
glVertex2f(-91, -73);
glVertex2f(-59, -74);
glVertex2f(-20, -70);
glVertex2f(-20, -220);
glVertex2f(-140,-220);
glEnd();

glBegin(GL_POLYGON);

glVertex2f(-20, -70);
glVertex2f(-25, -60);
glVertex2f(-20, -50);
glVertex2f(-10, -40);
glVertex2f(25, -40);
glVertex2f(51, -45);
glVertex2f(51, -220);
glVertex2f(-20, -220);
glEnd();

glBegin(GL_POLYGON);
glVertex2f(75, -25);
glVertex2f(80, -35);
glVertex2f(400,-35);
glVertex2f(400,0);
glVertex2f(0,0);
//glVertex2f(80, -35);
glEnd();


glBegin(GL_POLYGON);
glVertex2f(51,-220);
glVertex2f(51, -45);
glVertex2f(71, -39);
glVertex2f(80, -35);glVertex2f(400, -35);
glVertex2f(400,-220);


glEnd();

glPopMatrix();
}

void green_ground(){

glColor3f(0, 1, 0);
glBegin(GL_POLYGON);

glVertex2f(-140,-80);
glVertex2f(-140,0);
glVertex2f(80,0);
glVertex2f(80,-80);

glEnd();

}


void hills(){
glColor3f(0, 0.7, 0);
glBegin(GL_POLYGON);
glVertex2f(-140, 0);
glVertex2f(-80, 60);
glVertex2f(-20, 0);

glEnd();

glLineWidth(4.5);
glBegin(GL_LINES);
glColor3f(0, 0, 0);
glVertex2f(-140, 0);
glVertex2f(-80, 60);
glVertex2f(-80, 60);
glVertex2f(-20, 0);
glEnd();


glPushMatrix();
glColor3f(0, 0.7, 0);
glTranslatef(40, 0, 0);
glBegin(GL_POLYGON);
glVertex2f(-140, 0);
glVertex2f(-80, 60);
glVertex2f(-20, 0);

glEnd();

glLineWidth(4.5);
glBegin(GL_LINES);
glColor3f(0, 0, 0);
glVertex2f(-140, 0);
glVertex2f(-80, 60);
glVertex2f(-80, 60);
glVertex2f(-20, 0);
glEnd();

glPopMatrix();

glPushMatrix();
glColor3f(0, 0.7, 0);
glTranslatef(40+40, 0, 0);
glBegin(GL_POLYGON);
glVertex2f(-140, 0);
glVertex2f(-80, 60);
glVertex2f(-20, 0);

glEnd();

glLineWidth(4.5);
glBegin(GL_LINES);
glColor3f(0, 0, 0);
glVertex2f(-140, 0);
glVertex2f(-80, 60);
glVertex2f(-80, 60);
glVertex2f(-20, 0);
glEnd();

glPopMatrix();


glPushMatrix();
glColor3f(0, 0.7, 0);
glTranslatef(40+40+40, 0, 0);
glBegin(GL_POLYGON);
glVertex2f(-140, 0);
glVertex2f(-80, 60);
glVertex2f(-20, 0);

glEnd();

glLineWidth(4.5);
glBegin(GL_LINES);
glColor3f(0, 0, 0);
glVertex2f(-140, 0);
glVertex2f(-80, 60);
glVertex2f(-80, 60);
glVertex2f(-20, 0);
glEnd();

glPopMatrix();

glPushMatrix();
glColor3f(0, 0.7, 0);
glTranslatef(40+40+40+40, 0, 0);
glBegin(GL_POLYGON);
glVertex2f(-140, 0);
glVertex2f(-80, 60);
glVertex2f(-20, 0);

glEnd();

glLineWidth(4.5);
glBegin(GL_LINES);
glColor3f(0, 0, 0);
glVertex2f(-140, 0);
glVertex2f(-80, 60);
glVertex2f(-80, 60);
glVertex2f(-20, 0);
glEnd();

glPopMatrix();



}

void display() {
	glClearColor(0.11, 0.51, 0.88, 1.0f); // Set background color to black and opaque
	glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)

    green_ground();
    hills();
    river();
    drawRain();

	glFlush();  // Render now
    glutSwapBuffers();
}

/* Main function: GLUT runs as a console application starting at main()  */
int main(int argc, char** argv) {
	glutInit(&argc, argv);                 // Initialize GLUT
	glutInitWindowSize(920, 520);   // Set the window's initial width & height
	glutCreateWindow("OpenGL Setup Test"); // Create a window with the given title
	init();
	glutDisplayFunc(display); // Register display callback handler for window re-paint
	gluOrtho2D(-140, +140, -80, +80);
	glutTimerFunc(10, update, 0);
	glutTimerFunc(20, flood, 0);
	glutMainLoop();           // Enter the event-processing loop
	return 0;
}

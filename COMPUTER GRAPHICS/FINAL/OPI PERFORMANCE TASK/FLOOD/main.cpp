#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h
#include <cstdlib>
#include <ctime>
#include<iostream>
using namespace std;
const int numDrops = 150;
int winWidth = 11, winHeight = 6;

struct Raindrop {
    float x, y;
    float speed;
    float length;
};

Raindrop drops[numDrops];

// Define the boundaries of the square area
float minX = 0;
float maxX = 11;
float minY = 0;
float maxY = 6;

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
        drops[i].speed = 0.05 + (rand() % 10) / 2000.0; // Random speed between 0.5 and 1
        drops[i].length = 0.07 + (rand() % 5) / 20.0; // Random length between 0.05 and 0.25
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

float _movey = 0;

void RIVER(){
glPushMatrix();
glTranslatef(0, _movey, 0);
glBegin(GL_POLYGON); // These vertices form a closed polygon

glColor3f(0.14, 0.25, 0.81);

glVertex2f(0,-10);
glVertex2f(11,-10);
glVertex2f(11, 1.8);
glVertex2f(0, 1.8);

glEnd();
glPopMatrix();

}

void change(int value){
_movey += 0.005;

cout << _movey << endl;
glutPostRedisplay();
glutTimerFunc(20, change, 0);


}

void SOIL(){



glBegin(GL_POLYGON); // These vertices form a closed polygon

glColor3f(0.58, 0.35, 0.18);

glVertex2f(0, 1.8);
glVertex2f(11, 1.8);
glVertex2f(11, 2.15);
glVertex2f(0, 2.15);

glEnd();



}

void GROUND(){

glBegin(GL_POLYGON); // These vertices form a closed polygon

glColor3f(0.19, 0.73, 0.12);

glVertex2f(0, 2);
glVertex2f(11, 2);
glVertex2f(11, 3.38);
glVertex2f(0, 3.38);

glEnd();

}

void SKY(){

glBegin(GL_POLYGON); // These vertices form a closed polygon

glColor3f(0.54, 0.85, 1);

glVertex2f(0, 3.38);
glVertex2f(11, 3.38);
glVertex2f(11, 6);
glVertex2f(0, 6);

glEnd();

}

void MOUNTAIN(){

glBegin(GL_POLYGON); // These vertices form a closed polygon

glColor3f(0.09, 0.37, 0.05);

glVertex2f(0, 3.38);
glVertex2f(8.5, 3.38);
glVertex2f(2.4, 5.4);
glVertex2f(0, 3.8);

glEnd();

glBegin(GL_POLYGON); // These vertices form a closed polygon

glColor3f(0.09, 0.37, 0.05);

glVertex2f(3.5, 3.38);
glVertex2f(11, 3.38);
glVertex2f(11, 4.3);
glVertex2f(8.7, 5.7);

glEnd();

}


void display() {

glClearColor(0.0f, 0.0f, 0.0f, 1.0f);

glClear(GL_COLOR_BUFFER_BIT); // Clear the color buffer with current clearing color

SOIL();
GROUND();
SKY();
MOUNTAIN();
RIVER();
  drawRain();

glFlush(); // Render now
glutSwapBuffers();

}

/* Main function: GLUT runs as a console application starting at main() */

int main(int argc, char** argv) {

	glutInitWindowSize(920, 520); // Set the window's initial width & height

glutInit(&argc, argv);

glutCreateWindow("Rain & Flood"); // Create window with the given title

glutInitWindowPosition(50, 50); // Position the window's initial top-left corner
init();
glutDisplayFunc(display); // Register callback handler for window re-paint event

gluOrtho2D(0,+11,0,+6);
glutTimerFunc(10, update, 0);
glutTimerFunc(20, change, 0);

glutMainLoop(); // Enter the event-processing loop

return 0;

}

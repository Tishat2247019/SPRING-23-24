#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h
#include <cstdlib>
#include <ctime>
#include<iostream>
using namespace std;
const int numDrops = 150;
int winWidth = 12, winHeight = 10;

struct Raindrop {
    float x, y;
    float speed;
    float length;
};

Raindrop drops[numDrops];

// Define the boundaries of the square area
float minX = 106;
float maxX = 118;
float minY = 35;
float maxY = 72;

void init() {
    // glClearColor(0.0, 0.0, 0.0, 0.0);
   // glMatrixMode(GL_PROJECTION);
    // gluOrtho2D(0, winWidth, 0, winHeight);

     // Initialize random seed
    srand(time(NULL));

    // Initialize raindrops within the square area
    for (int i = 0; i < numDrops; ++i) {
        drops[i].x = minX + rand() % (int)(maxX - minX);
        drops[i].y = minY + rand() % (int)(maxY - minY);
        drops[i].speed = 0.01 + (rand() % 10) / 20.0; // Random speed between 0.5 and 1
        drops[i].length = 0.5 + (rand() % 5) / 20.0; // Random length between 0.05 and 0.25
    }
}

void drawRain() {
    //glPointSize(2.0);
    glLineWidth(1.5);
    glBegin(GL_LINES);
    glColor3f(0.04, 0.06, 0.99); // Light blue color
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


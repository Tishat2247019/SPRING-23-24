#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <GL/gl.h>
#include <GL/glut.h>

#define RAINSIZE 150
int winWidth = 1000, winHeight = 1000;
int counter = 0;
time_t t;
float rotationAngle = 0;
float objectScale = 1.0f;

struct drop {
    float x = 400;
    float y = 400;
    float inc = 0.01;
    float radius = 5;
    float scale = 1.0;
    float rotationAngle = 45.0f;
    float rotationInc = 1;
};

drop rain[RAINSIZE];

void initRain() {
    srand((unsigned)time(&t));
    for (int i = 0; i < RAINSIZE; i++) {
        rain[i].x = rand() % winWidth;
        rain[i].y = rand() % winHeight;
        rain[i].inc = 0.6 ;
        rain[i].radius = (float)(rand() % 8);
        rain[i].scale = (float)(rand() % 20000) / 1000.0;
        rain[i].rotationAngle = (float)(rand() % 3000) / 1000.0;
        rain[i].rotationInc = (float)(rand() % 100) / 1000.0;
        if ((rand() % 100) > 50) {
            rain[i].rotationInc = -rain[i].rotationInc;
        }
    }
}

void drawParticleShape(int i) {
    glBegin(GL_POINTS);
    glVertex2d(rain[i].x, rain[i].y);
    glEnd();
    glBegin(GL_LINES);
    glVertex2d(rain[i].x, rain[i].y);
    glVertex2d(rain[i].x, rain[i].y + rain[i].radius * 2);
    glEnd();
}

void drawDrop(int i) {
    glColor3f(1.0, 1.0, 1.0);
    glLineWidth(3);
    drawParticleShape(i);
    rain[i].y -= rain[i].inc;
    if (rain[i].y < 0) {
        rain[i].y = winHeight;
    }
}

void drawRain() {
    for (int i = 0; i < RAINSIZE; i++) {
        drawDrop(i);
    }
}


void flood_animtion(int value){

objectScale += 0.002;

if (objectScale > 3){
    objectScale = -objectScale;
}

glutPostRedisplay();

glutTimerFunc(20, flood_animtion, 0); // 60 FPS
}

void flood_circle() {
    glPushMatrix();
    glTranslatef(winWidth / 2, -50, 0.0); // Translate to the center of the window
    glColor3f(0.0, 0.0, 1.0); // Set color to blue
    glScalef(3.3, 1, 0);

    glScalef(objectScale, objectScale, 0);
    // Calculate the scaling factors to fit the ellipse within the window
    float scaleX = (float)winWidth / 5.0;
    float scaleY = (float)winHeight / 5.0;

    glBegin(GL_POLYGON);
    for (int i = 0; i < 360; i++) {
        float angle = i * (3.14159 / 180); // Convert degrees to radians
        float x = cos(angle) * scaleX; // Scale the ellipse based on window width
        float y = sin(angle) * scaleY * (1.0 + 0.1 * sin(angle * 5)); // Add a sine wave oscillation
        glVertex2f(x, y);
    }
    glEnd();
    glPopMatrix();
}




void init() {
    glClearColor(0.0, 0.0, 0.0, 0.0);
    glMatrixMode(GL_PROJECTION);
    gluOrtho2D(0.0, winWidth, 0.0, winHeight);
}

float elapsedTime = 0, base_time = 0, fps = 0, frames;

void calcFPS() {
    elapsedTime = glutGet(GLUT_ELAPSED_TIME);
    if ((elapsedTime - base_time) > 1000.0) {
        fps = frames * 1000.0 / (elapsedTime - base_time);
        printf("fps: %f", fps);
        base_time = elapsedTime;
        frames = 0;
    }
    frames++;
}

void display() {
    glClear(GL_COLOR_BUFFER_BIT);
    drawRain(); // Draw the rain
    flood_circle(); // Draw the flood effect
    calcFPS();
    glFlush();
    counter++;
    glutPostRedisplay();
}

void idle() {}

int main(int argc, char** argv) {
    srand(1);
    initRain();
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
    glutInitWindowSize(winWidth, winHeight);
    glutInitWindowPosition(0, 0);
    glutCreateWindow("Flood with Rain");
    glEnable(GL_BLEND);
    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
    init();
    glutIdleFunc(idle);
    glutDisplayFunc(display);
     glutTimerFunc(20, flood_animtion, 0); // 60 FPS
    glutMainLoop();
    return 0;
}

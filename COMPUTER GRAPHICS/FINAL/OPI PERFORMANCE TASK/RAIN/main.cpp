#include <GL/glut.h>
#include <cstdlib>
#include <ctime>

const int numDrops = 70;
int winWidth = 800, winHeight = 600;

struct Raindrop {
    float x, y;
    float speed;
    float length;
};

Raindrop drops[numDrops];

// Define the boundaries of the square area
float minX = 0.0;
float maxX = 800.0;
float minY = 0.0;
float maxY = 600.0;

void init() {
    glClearColor(1.0, 1.0, 1.0, 0.0);
    glMatrixMode(GL_PROJECTION);
    gluOrtho2D(0, winWidth, 0, winHeight);

    // Initialize random seed
    srand(time(NULL));

    // Initialize raindrops within the square area
    for (int i = 0; i < numDrops; ++i) {
        drops[i].x = minX + rand() % (int)(maxX - minX);
        drops[i].y = minY + rand() % (int)(maxY - minY);
        drops[i].speed = 3.0 + (rand() % 10) / 10.0;
        drops[i].length = 5.0 + (rand() % 20);
    }
}

void drawRain() {
    glPointSize(2.0);
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

void display() {
    glClear(GL_COLOR_BUFFER_BIT);
    drawRain();
    glutSwapBuffers();
}

void update(int value) {
    updateRain();
    glutPostRedisplay();
    glutTimerFunc(10, update, 0);
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(winWidth, winHeight);
    glutCreateWindow("Rain Effect");

    init();

    glutDisplayFunc(display);
    glutTimerFunc(10, update, 0);

    glutMainLoop();
    return 0;
}

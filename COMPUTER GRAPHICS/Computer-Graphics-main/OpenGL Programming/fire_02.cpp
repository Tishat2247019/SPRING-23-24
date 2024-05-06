#include <GL/glut.h>
#include <cmath>
#include <ctime>

#define WIDTH 800
#define HEIGHT 600

#define NUM_REGIONS 1
#define REGION_WIDTH 200

// Define positions for the building
int buildingPosition[2] = { WIDTH / 4, HEIGHT / 4 }; // Position the building in the center

// Define size and color for the building
int buildingWidth = WIDTH / 2;
int buildingHeight = HEIGHT / 2;
float buildingColor[3] = { 0.5f, 0.5f, 0.5f }; // Gray color for the building

float fire[REGION_WIDTH][HEIGHT];

void drawBuilding() {
    glBegin(GL_QUADS);
    glColor3fv(buildingColor);
    glVertex2i(buildingPosition[0], buildingPosition[1]);
    glVertex2i(buildingPosition[0] + buildingWidth, buildingPosition[1]);
    glVertex2i(buildingPosition[0] + buildingWidth, buildingPosition[1] + buildingHeight);
    glVertex2i(buildingPosition[0], buildingPosition[1] + buildingHeight);
    glEnd();
}

void drawFire() {
    for (int y = 1; y < HEIGHT; ++y) {
        for (int x = 80; x < REGION_WIDTH; ++x) {
            float avg = (fire[x][y - 1] + fire[(x - 1 + REGION_WIDTH) % REGION_WIDTH][y - 1] + fire[(x + 1) % REGION_WIDTH][y - 1]) / 3.0;
            fire[x][y] = (avg + rand() % 20 - 10);
            glColor3f(fire[x][y] / 100.0, 0.0, 0.0);
            glBegin(GL_POINTS);
            glVertex2i(x, y + 70);
            glEnd();
        }
    }
}

void display() {
    glClear(GL_COLOR_BUFFER_BIT);
    //drawBuilding();
    drawFire();
    glutSwapBuffers();
}

void update(int value) {
    glutPostRedisplay();
    glutTimerFunc(50, update, 0);
}

int main(int argc, char** argv) {
    srand(time(NULL)); // Initialize random seed

    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(WIDTH, HEIGHT);
    glutCreateWindow("Fire Effect on Building");

    glClearColor(0.0, 0.0, 0.0, 1.0);
    glMatrixMode(GL_PROJECTION);
    gluOrtho2D(0.0, WIDTH, 0.0, HEIGHT);

    // Initialize fire array
    for (int i = 0; i < REGION_WIDTH; ++i)
        fire[i][0] = rand() % 100;

    glutDisplayFunc(display);
    glutTimerFunc(50, update, 0);
    glutMainLoop();

    return 0;
}

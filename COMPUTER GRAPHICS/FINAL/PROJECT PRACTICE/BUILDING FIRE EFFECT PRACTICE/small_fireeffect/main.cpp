#include <GL/glut.h>
#include <cmath>
#include <ctime>

#define WIDTH 800
#define HEIGHT 600

#define NUM_REGIONS 4
#define REGION_WIDTH (WIDTH / NUM_REGIONS)

// Define positions for each fire effect
int firePositions[NUM_REGIONS][2] = {
    {0, 0},             // Top-left
    {WIDTH / 2, 0},     // Top-right
    {0, HEIGHT / 2},    // Bottom-left
    {WIDTH / 2, HEIGHT / 2} // Bottom-right
};

float fire[NUM_REGIONS][REGION_WIDTH][HEIGHT];

void init() {
    glClearColor(0.0, 0.0, 0.0, 1.0);
    glMatrixMode(GL_PROJECTION);
    gluOrtho2D(0.0, WIDTH, 0.0, HEIGHT);
    srand(time(NULL));
    for (int r = 0; r < NUM_REGIONS; ++r) {
        for(int i = 0; i < REGION_WIDTH; ++i)
            fire[r][i][0] = rand() % 100;
    }
}

void drawFire() {
    for (int r = 0; r < NUM_REGIONS; ++r) {
        for(int y = 1; y < HEIGHT; ++y) {
            for(int x = 0; x < REGION_WIDTH; ++x) {
                float avg = (fire[r][x][y-1] + fire[r][(x-1+REGION_WIDTH)%REGION_WIDTH][y-1] + fire[r][(x+1)%REGION_WIDTH][y-1]) / 3.0;
                fire[r][x][y] = (avg + rand() % 20 - 10);
                glColor3f(fire[r][x][y] / 100.0, 0.0, 0.0);
                glBegin(GL_POINTS);
                glVertex2i(x + firePositions[r][0], y + firePositions[r][1]);
                glEnd();
            }
        }
    }
}

void display() {
    glClear(GL_COLOR_BUFFER_BIT);
    drawFire();
    glutSwapBuffers();
}

void update(int value) {
    glutPostRedisplay();
    glutTimerFunc(50, update, 0);
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(WIDTH, HEIGHT);
    glutCreateWindow("Fire Effect");
    init();
    glutDisplayFunc(display);
    glutTimerFunc(50, update, 0);
    glutMainLoop();
    return 0;
}

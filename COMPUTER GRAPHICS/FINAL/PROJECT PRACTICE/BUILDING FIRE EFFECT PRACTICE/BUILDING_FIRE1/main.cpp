#include <GL/glut.h>
#include <cmath>
#include <ctime>

#define WIDTH 800
#define HEIGHT 600

float fire[WIDTH][HEIGHT];

void init() {
    glClearColor(0.0, 0.0, 0.0, 1.0);
    glMatrixMode(GL_PROJECTION);
    gluOrtho2D(0.0, WIDTH, 0.0, HEIGHT);
    srand(time(NULL));
    for(int i = 0; i < WIDTH; ++i)
        fire[i][0] = rand() % 100;
}


void drawFire() {
    for(int y = 1; y < HEIGHT; ++y) {
        for(int x = 0; x < WIDTH; ++x) {
            float avg = (fire[x][y-1] + fire[(x-1+WIDTH)%WIDTH][y-1] + fire[(x+1)%WIDTH][y-1]) / 3.0;
            fire[x][y] = (avg + rand() % 20 - 10);
            glColor3f(fire[x][y] / 100.0, 0.0, 0.0);
            glBegin(GL_POINTS);
            glVertex2i(x, y);
            glEnd();
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

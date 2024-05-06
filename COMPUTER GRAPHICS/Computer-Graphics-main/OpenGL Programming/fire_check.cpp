#include <GL/glut.h>
#include <cstdlib>
#include <ctime>
#include <cmath>

#define WIDTH 80
#define HEIGHT 80

float fire[WIDTH][HEIGHT];

void initFire() {
    srand(time(NULL));
    for (int i = 0; i < WIDTH; ++i)
        fire[i][0] = rand() % 100;
}

void drawFire() {
    for (int y = 1; y < HEIGHT; ++y) {
        for (int x = 0; x < WIDTH; ++x) {
            float avg = (fire[x][y - 1] + fire[(x - 1 + WIDTH) % WIDTH][y - 1] + fire[(x + 1) % WIDTH][y - 1]) / 3.0;
            fire[x][y] = (avg + rand() % 20 - 10) * 0.98; // Reduce intensity gradually
            float intensity = fire[x][y] / 100.0; // Scale intensity for color
            glColor3f(1.0, intensity * 0.5, 0.0); // Adjust color based on intensity
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

void reshape(int w, int h) {
    glViewport(0, 0, w, h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0, WIDTH, 0, HEIGHT);
    glMatrixMode(GL_MODELVIEW);
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(800, 800);
    glutCreateWindow("Fire Effect");

    glClearColor(0.0, 0.0, 0.0, 1.0);
    glPointSize(3.0); // Set point size for better visualization

    initFire();

    glutDisplayFunc(display);
    glutReshapeFunc(reshape);
    glutTimerFunc(50, update, 0);
    glutMainLoop();

    return 0;
}

#include <GL/glut.h>
#include <stdlib.h>
#include <math.h>

#define MAX_PARTICLES 100

typedef struct {
    float x, y;
    float vx, vy;
    float lifespan;
} particle_t;

particle_t particles[MAX_PARTICLES];

void initParticles() {
    for (int i = 0; i < MAX_PARTICLES; i++) {
        particles[i].x = 0.0;
        particles[i].y = 0.0;
        particles[i].vx = ((rand() % 100) / 100.0) - 0.5; // Random horizontal speed
        particles[i].vy = (rand() % 100) / 1000.0 + 0.05; // Random vertical speed
        particles[i].lifespan = (rand() % 100) / 1000.0 + 0.1; // Random lifespan
    }
}

void updateParticles() {
    for (int i = 0; i < MAX_PARTICLES; i++) {
        particles[i].x += particles[i].vx;
        particles[i].y += particles[i].vy;
        particles[i].lifespan -= 0.001;

        if (particles[i].lifespan < 0) {
            particles[i].x = 0.0;
            particles[i].y = 0.0;
            particles[i].vx = ((rand() % 100) / 100.0) - 0.5; // Random horizontal speed
            particles[i].vy = (rand() % 100) / 1000.0 + 0.05; // Random vertical speed
            particles[i].lifespan = (rand() % 100) / 1000.0 + 0.1; // Random lifespan
        }
    }
}

void drawParticles() {
    glPointSize(5.0); // Set particle size
    glBegin(GL_POINTS);
    for (int i = 0; i < MAX_PARTICLES; i++) {
        glColor3f(1.0, 0.5, 0.0); // Orange color
        glVertex2f(particles[i].x, particles[i].y);
    }
    glEnd();
}

void display() {
    glClear(GL_COLOR_BUFFER_BIT);
    updateParticles();
    drawParticles();
    glutSwapBuffers();
}

void reshape(int w, int h) {
    glViewport(0, 0, (GLsizei)w, (GLsizei)h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-1.0, 1.0, -1.0, 1.0); // Set the coordinate system
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
}

void timer(int) {
    glutPostRedisplay();
    glutTimerFunc(1000 / 60, timer, 0); // 60 fps
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(800, 600);
    glutCreateWindow("Fire Effect");

    glClearColor(0.0, 0.0, 0.0, 1.0);

    initParticles();

    glutDisplayFunc(display);
    glutReshapeFunc(reshape);
    glutTimerFunc(0, timer, 0);

    glutMainLoop();
    return 0;
}

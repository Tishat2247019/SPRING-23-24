#include <GL/glut.h>
#include <cmath>
#include <ctime>

#define WIDTH 350
#define HEIGHT 400

float fire[WIDTH][HEIGHT];



void drawFire() {
    for(int y = HEIGHT/2 + 1; y < HEIGHT; ++y) {
        for(int x = 0; x < WIDTH-190; ++x) { // Start from x1 and end before WIDTH - x2
            float avg = (fire[x][y-1] + fire[(x-1+WIDTH)%WIDTH][y-1] + fire[(x+1)%WIDTH][y-1]) / 3.0;
            fire[x][y] = (avg + rand() % 20 - 10);
            glColor3f(fire[x][y] / 1.0, 0.0, 0.0);
            glPointSize(3);
            glBegin(GL_POINTS);
            glVertex2i(x, y);
            glEnd();
        }
    }
}

void building(){

// buildin right extension
glBegin(GL_POLYGON);

glColor3f(1, 0.5, 0);

glVertex2f(52, 75.66478);
glVertex2f(160, 0);
glVertex2f(140, 0);
glVertex2f(52, 60.576048);
glEnd();

glBegin(GL_POLYGON);

glColor3f(1, 0.6, 0);

glVertex2f(52, 60.576048);
glVertex2f(140, 0);
glVertex2f(140, -80);
glVertex2f(52, -80);
glEnd();



glBegin(GL_POLYGON);

glColor3f(1, 0.7, 0);

glVertex2f(10, 270);

glVertex2f(-32, 210);

glVertex2f(-32, 20);

glVertex2f(52, 20);
glVertex2f(52, 210);


glEnd();

glBegin(GL_POLYGON);

glColor3f(1, 0.5, 0);

glVertex2f(-39.9, 20);

glVertex2f(-60, 0);

glVertex2f(80, 0);

glVertex2f(60, 20);

glEnd();


glBegin(GL_POLYGON);

glColor3f(1, 0.7, 0);

glVertex2f(-40, 0);

glVertex2f(-40, -83);

glVertex2f(60, -83);

glVertex2f(60, 0);

glEnd();



// main front door



// main door color
glBegin(GL_POLYGON);
glColor3f(0.7, 0.8, 0.8);
glVertex2f(-20, -83);
glVertex2f(-20, -20);
glVertex2f(-8.5, -13.5);
glVertex2f(3, -9.5);
glVertex2f(16, -9.5);
glVertex2f(28, -13);
glVertex2f(40, -20);
glVertex2f(40, -83);

glEnd();

//two horizontal section

glBegin(GL_POLYGON);
glColor3f(0, 0,  0);

glVertex2f(-12, -30.9999986);
glVertex2f(31.9994665, -30.9999986);
glVertex2f(31.9994665, -29.9999986);
glVertex2f(-12, -30);
glEnd();



glBegin(GL_POLYGON);

glColor3f(1, 0.5, 0);

glVertex2f(10, 270);
glVertex2f(-32, 210);
glVertex2f(-44, 210);
glVertex2f(10, 285);
glVertex2f(64, 210);
glVertex2f(52, 210);
glEnd();

//right window
glBegin(GL_POLYGON);

glColor3f(0.6, 0.6, 0.6);

glVertex2f(80,-30);
glVertex2f(80,-60);
glVertex2f(110,-60);
glVertex2f(110,-30);

glEnd();



//windows
glColor3f(0.6, 0.6, 0.6);
glBegin(GL_POLYGON);


glVertex2f(-20, 60);
glVertex2f(-20, 30);
glVertex2f(0, 30);
glVertex2f(0, 60);

glEnd();


glBegin(GL_POLYGON);

//glColor3f(1, 1.0, 1);

glVertex2f(20, 60);
glVertex2f(20, 30);
glVertex2f(40, 30);
glVertex2f(40, 60);

glEnd();

glBegin(GL_POLYGON);

//glColor3f(1, 1.0, 1);

glVertex2f(-20, 100);
glVertex2f(-20, 70);
glVertex2f(0, 70);
glVertex2f(0, 100);

glEnd();


glBegin(GL_POLYGON);

//glColor3f(1, 1.0, 1);

glVertex2f(20, 100);
glVertex2f(20, 70);
glVertex2f(40, 70);
glVertex2f(40,100);

glEnd();


glBegin(GL_POLYGON);

//glColor3f(1, 1.0, 1);

glVertex2f(-20, 140);
glVertex2f(-20, 110);
glVertex2f(0, 110);
glVertex2f(0, 140);

glEnd();


glBegin(GL_POLYGON);

//glColor3f(1, 1.0, 1);

glVertex2f(20, 140);
glVertex2f(20, 110);
glVertex2f(40, 110);
glVertex2f(40,140);

glEnd();


glBegin(GL_POLYGON);

//glColor3f(1, 1.0, 1);

glVertex2f(-20, 180);
glVertex2f(-20, 150);
glVertex2f(0, 150);
glVertex2f(0, 180);

glEnd();


glBegin(GL_POLYGON);

//glColor3f(1, 1.0, 1);

glVertex2f(20, 180);
glVertex2f(20, 150);
glVertex2f(40, 150);
glVertex2f(40,180);

glEnd();

glBegin(GL_POLYGON);

//glColor3f(1, 1.0, 1);

glVertex2f(-20, 220);
glVertex2f(-20, 190);
glVertex2f(0, 190);
glVertex2f(0, 220);

glEnd();


glBegin(GL_POLYGON);

//glColor3f(1, 1.0, 1);

glVertex2f(20, 220);
glVertex2f(20, 190);
glVertex2f(40, 190);
glVertex2f(40,220);

glEnd();

//right chimni

glBegin(GL_POLYGON);

glColor3f(0.6, 0.6, 0.6);

glVertex2f(100, 60);
glVertex2f(99.9899323003119, 42.04304600);
glVertex2f(119.9380400662845, 28.0674041695164);
glVertex2f(120,60);

glEnd();

}

void display() {
    glClear(GL_COLOR_BUFFER_BIT);
    glClearColor(0.0, 0.0, 0.0, 1.0);
    building();
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
    glutInitWindowSize(700, 600);
    glutCreateWindow("Fire Effect");

    gluOrtho2D(-70, 180, -100, 300);
    srand(time(NULL));
    for(int i = 0; i < WIDTH-150 ; ++i)
        fire[i][HEIGHT/2] = rand() % 100;

    glutDisplayFunc(display);
    glutTimerFunc(50, update, 0);
    glutMainLoop();

    return 0;
}


#include <GL/freeglut.h>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <iomanip>

using namespace std;

#define M_PI (3.1415926535897932384626433832795)

GLfloat randomNum()
{
    return (rand() % 10000) / 10000.0;
}

GLfloat nx = 0;
GLfloat ny = .8;



#define MAX_POINTS 750
GLfloat numPoints;
GLfloat curx, cury;
GLfloat x[MAX_POINTS], y[MAX_POINTS];
GLfloat xacc[MAX_POINTS], yacc[MAX_POINTS];
GLfloat red, green, blue;
int step; int length;

GLfloat newRed = 0;
GLfloat newGreen = 0;
GLfloat newBlue = 0;

GLint   totPor = 0;
GLint   strontiumPor = 0;
GLfloat bariumPor = 0;
GLfloat copperPor = 0;
GLfloat sodiumPor = 0;
GLfloat phosPor = 0;

GLfloat red2;
GLfloat green2;
GLfloat green3;
GLfloat blue2;

void initialize()
{
    int j; double temp, temp2;

    numPoints = randomNum()*(MAX_POINTS - 1);
    curx = nx;
    cury = ny;

    //Color Mixing



    if (totPor != 0)
    {
        red = newRed   *  strontiumPor / (totPor - strontiumPor);            //s   red
        green = newGreen *  bariumPor / (totPor - bariumPor);            //b   green
        blue = newBlue  *  copperPor / (totPor - copperPor);             //c  blue
        red2 = newRed * sodiumPor / (totPor - sodiumPor);       //d   yellow
        green2 = newGreen * sodiumPor / (totPor - sodiumPor);
        green3 = newGreen * phosPor / (totPor - phosPor);           //p    blue green
        blue2 = newBlue  * phosPor / (totPor - phosPor);

        red = red + red2;
        green = green + green2 + green3;
        blue = blue + blue2;
    }
    else
    {
        red = newRed;
        green = newGreen;
        blue = newBlue;
    }


    glPointSize(1.7);
    step = 0;
    length = 500 + 300 * randomNum();


    /* initialize the blast */
    for (j = 0; j<numPoints; j++) {
        x[j] = curx;
        y[j] = cury;
        temp = randomNum();
        temp2 = randomNum()*2.0*M_PI;
        xacc[j] = (cos(temp2) * temp) / length;
        yacc[j] = (sin(temp2) * temp) / length;
    }

}


void draw_fireworks(void)
{
    int i;
    double glow = (length - (step)) / (double)length;
    glColor3f(red*glow, green*glow, blue*glow);  //glow
    glBegin(GL_POINTS);
    for (i = 0; i<numPoints; i++) {
        x[i] += xacc[i];
        y[i] += yacc[i];
        glVertex2f(x[i], y[i]);
    }
    glEnd();
    glFlush();
    glutSwapBuffers();
}

void display(void)
{

    int i;
    glClear(GL_COLOR_BUFFER_BIT);

        if (step < 0.9*length) {
        for (i = 0; i<numPoints; i++)
            yacc[i] -= 0.02 / length; // gravity
        draw_fireworks();
    }
    step++;
    if (step > length) initialize();

   // DrawScene();
    glutSwapBuffers();

}



int t = 0;

void idle(void)
{


    if (t == 45000)
    {
        glutPostRedisplay();
        t = 0;
    }
    t++;
}


void SpecialKey(int key, int x, int y)
{
    switch (key) {
    case GLUT_KEY_LEFT:
        /* Move fireworks left or right, up or down */
        nx = nx + -.025;
        break;
    case GLUT_KEY_RIGHT:
        nx = nx + .025;
        break;
    case GLUT_KEY_UP:
        ny = ny + .025;
        break;
    case GLUT_KEY_DOWN:
        ny = ny + -.025;
        break;
    }
    glutPostRedisplay();
}



void Keyboard(unsigned char key, int x, int y)
{

    //Select Chemicals
    switch (key)
    {
    case 's':
        newRed = 1;
        strontiumPor = strontiumPor + 1;
        totPor = totPor + 1;
        break;
    case 'b':
        newGreen = 1;
        bariumPor = bariumPor + 1;
        totPor = totPor + 1;
        break;
    case 'c':
        newBlue = 1;
        copperPor = copperPor + 1;
        totPor = totPor + 1;
        break;
    case 'd':
        newRed = 1;
        newGreen = 1;
        sodiumPor = sodiumPor + 1;
        totPor = totPor + 1;
        break;
    case 'p':
        newBlue = 1;
        newGreen = 1;
        phosPor = phosPor + 1;
        totPor = totPor + 1;
        break;


    case 'R':   newRed = newRed + .1;
        break;
    case 'G':   newGreen = newGreen + .1;
        break;
    case 'B':   newBlue = newBlue + .1;
        break;
    case ' ':                                            //Space bar is Reset or start
        newRed = 1;
        newGreen = 1;
        newBlue = 1;
        totPor = 0;
        strontiumPor = 0;
        bariumPor = 0;
        copperPor = 0;
        sodiumPor = 0;
        phosPor = 0;
        break;
    case 'm':   nx = 0; ny = 0.8;                       //M resets target to default
        break;
    case 'q':   exit(0);                                 //Q is quit
    }
    glutPostRedisplay();
}




void reshape(int w, int h)
{
    glViewport(0, 0, (GLsizei)w, (GLsizei)h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    if (w <= h)
        glOrtho(-1.0, 1.0,
        -1.0*(GLfloat)h / (GLfloat)w, 1.0*(GLfloat)h / (GLfloat)w,
        -1.0, 1.0);
    else
        glOrtho(-1.0*(GLfloat)w / (GLfloat)h, 1.0*(GLfloat)w / (GLfloat)h,
        -1.0, 1.0,
        -1.0, 1.0);
    glMatrixMode(GL_MODELVIEW);
}



int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(700, 700);
    glutInitWindowPosition(0, 0);
    glutCreateWindow("Fireworks Display");

    glClearColor(0.0, 0.0, 0.0, 0.0);
    initialize();
   // initText();
    glutDisplayFunc(display);

    glutReshapeFunc(reshape);
    glutIdleFunc(idle);
    glutKeyboardFunc(Keyboard);
    glutSpecialFunc(SpecialKey);

    glutMainLoop();

    return 0;
}

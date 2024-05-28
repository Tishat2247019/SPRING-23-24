#include <windows.h>
#include <GL/glut.h>
#include<math.h>
#include<iostream>
#include "FIRST_SCENARIO_OPI.cpp"

using namespace std;

int main(int argc, char** argv) {


    glutInitWindowSize(1220, 720);
    glutInit(&argc, argv); // Initialize GLUT

    glutInitWindowPosition((glutGet(GLUT_SCREEN_WIDTH) - 1220) / 2,

        (glutGet(GLUT_SCREEN_HEIGHT) - 720) / 2);


    glutCreateWindow("City 1"); // Create window with the given title


    glutDisplayFunc(opi); // Register callback handler for window re-paint event
    initOpi();

    gluOrtho2D(0, +130, 0, +80);

    //initTishat();

    glutMainLoop(); // Enter the event-processing loop

    return 0;

}
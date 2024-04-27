#include <windows.h>
#include<math.h>
#include <GL/glut.h> // GLUT, include glu.h and gl.h
#include<iostream>

using namespace std;


int state = 1;


void SKY(){

glBegin(GL_POLYGON); // These vertices form a closed polygon
if (state == 1){
glColor3f(0.0f, 0.9f, 1.0f);
}
if (state == 2){
    glColor3f(0.0f, 0.0f, 0.5f);
}

glVertex2f(0.77,6.54);
glVertex2f(3, 6.54);
glVertex2f(3, 6.54);
glVertex2f(3,15);
glVertex2f(0.77, 15);

glEnd();

glBegin(GL_POLYGON);
glVertex2f(2.70, 8.27);
glVertex2f(13.41, 8.875);
glVertex2f(13.41,15);
glVertex2f(2.70, 15);

glEnd();

glBegin(GL_POLYGON);
glVertex2f(13.41, 9.65);
glVertex2f(26, 9.65);
glVertex2f(26,15);
glVertex2f(13.41, 15);

glEnd();

glLineWidth(2.5);
if (state == 1){
glBegin(GL_LINES); // These vertices form a closed polygon

glColor3f(1,0,0);

glVertex2f(18.65, 10.84);
glVertex2f(16.04, 11.13);

glVertex2f(18.76, 11.22);
glVertex2f(16.49, 12.22);

glVertex2f(19.07, 11.62);
glVertex2f(17.38, 13.2);

glVertex2f(19.44, 11.8);
glVertex2f(18.63, 13.8);

glVertex2f(19.91, 11.94);
glVertex2f(19.91, 14);

glVertex2f(20.47, 11.82);
glVertex2f(21.5, 13.89);

glVertex2f(20.91, 11.57);
glVertex2f(22.76, 13.27);

glVertex2f(21.2, 11.08);
glVertex2f(23.42, 12);

glVertex2f(21.32, 10.64);
glVertex2f(23.8, 10.86);

glEnd();
}

}

void HOUSE1(){
glBegin(GL_POLYGON); // These vertices form a closed polygon

glColor3f(0.4f, 0.15f, 0.0f);

glVertex2f(2.5, 8);
glVertex2f(3, 8);
glVertex2f(4.3, 9.6);
glVertex2f(4, 10);

glEnd();

glBegin(GL_POLYGON); // These vertices form a closed polygon

glColor3f(0.4f, 0.15f, 0.0f);

glVertex2f(5.58, 8);
glVertex2f(9.1, 8);
glVertex2f(7.5, 10);
glVertex2f(4, 10);

glEnd();

glBegin(GL_POLYGON); // These vertices form a closed polygon

glColor3f(0.4f, 0.15f, 0.0f);

glVertex2f(2.78, 6.16);
glVertex2f(5.56, 5.8);
glVertex2f(5.56, 6);
glVertex2f(2.98, 6.32);

glEnd();

glBegin(GL_POLYGON); // These vertices form a closed polygon

glColor3f(0.4f, 0.15f, 0.0f);

glVertex2f(5.56, 5.8);
glVertex2f(9, 6.06);
glVertex2f(8.82, 6.23);
glVertex2f(5.56, 6);

glEnd();

glBegin(GL_POLYGON); // These vertices form a closed polygon

glColor3f(1.0f, 0.9f, 0.0f);

glVertex2f(3, 6.32);
glVertex2f(5.56, 6);
glVertex2f(5.58, 8);
glVertex2f(4.3, 9.6);
glVertex2f(3, 8);

glEnd();

glBegin(GL_POLYGON); // These vertices form a closed polygon

glColor3f(1.0f, 0.9f, 0.0f);

glVertex2f(5.56, 6);
glVertex2f(8.8, 6.23);
glVertex2f(8.8, 8);
glVertex2f(5.56, 8);

glEnd();

glBegin(GL_POLYGON); // These vertices form a closed polygon

glColor3f(0.4f, 0.15f, 0.0f);

glVertex2f(6.4, 6.8);
glVertex2f(8, 6.8);
glVertex2f(8, 7.6);
glVertex2f(6.4, 7.6);

glEnd();

glBegin(GL_POLYGON); // These vertices form a closed polygon

glColor3f(0.4f, 0.15f, 0.0f);

glVertex2f(3.8, 6.22);
glVertex2f(4.6, 6.12);
glVertex2f(4.6, 7.8);
glVertex2f(3.8, 7.8);

glEnd();

glLineWidth(0.5);
glBegin(GL_LINES); // These vertices form a closed polygon

glColor3f(0,0,0);

glVertex2f(5.56, 6);
glVertex2f(5.56, 8);

glVertex2f(3, 6.32);
glVertex2f(3, 8);

glVertex2f(8.8, 6.23);
glVertex2f(8.8, 8);


glEnd();

}

void HOUSE2(){

glBegin(GL_POLYGON); // These vertices form a closed polygon

glColor3f(0.4f, 0.15f, 0.0f);

glVertex2f(9.03, 8.09);
glVertex2f(10.22, 9.7);
glVertex2f(10, 10);
glVertex2f(8.82, 8.35);

glEnd();

glBegin(GL_POLYGON); // These vertices form a closed polygon

glColor3f(0.4f, 0.15f, 0.0f);

glVertex2f(11.4, 8);
glVertex2f(15.25, 8);
glVertex2f(13.65, 10);
glVertex2f(10, 10);

glEnd();

glBegin(GL_POLYGON); // These vertices form a closed polygon

glColor3f(0.4f, 0.15f, 0.0f);

glVertex2f(8.85, 6.36);
glVertex2f(11.4, 6);
glVertex2f(11.4, 6.19);
glVertex2f(9, 6.5);

glEnd();

glBegin(GL_POLYGON); // These vertices form a closed polygon

glColor3f(0.4f, 0.15f, 0.0f);

glVertex2f(11.4, 6);
glVertex2f(15.24, 6.4);
glVertex2f(15, 6.55);
glVertex2f(11.4, 6.19);

glEnd();

glBegin(GL_POLYGON); // These vertices form a closed polygon

glColor3f(1.0f, 0.9f, 0.0f);

glVertex2f(9, 6.5);
glVertex2f(11.4, 6.19);
glVertex2f(11.4, 8);
glVertex2f(10.22, 9.7);
glVertex2f(9.03, 8.09);
glVertex2f(9.1, 8);
glVertex2f(9,8);

glEnd();

glBegin(GL_POLYGON); // These vertices form a closed polygon

glColor3f(1.0f, 0.9f, 0.0f);

glVertex2f(11.4, 6.19);
glVertex2f(15, 6.55);
glVertex2f(15, 8);
glVertex2f(11.4, 8);

glEnd();

glBegin(GL_POLYGON); // These vertices form a closed polygon

glColor3f(0.4f, 0.15f, 0.0f);

glVertex2f(12.48, 6.68);
glVertex2f(14, 6.81);
glVertex2f(14, 7.57);
glVertex2f(12.48, 7.49);

glEnd();

glBegin(GL_POLYGON); // These vertices form a closed polygon

glColor3f(0.4f, 0.15f, 0.0f);

glVertex2f(9.71, 6.41);
glVertex2f(10.73, 6.28);
glVertex2f(10.73, 7.8);
glVertex2f(9.71, 7.8);

glEnd();

glLineWidth(0.5);
glBegin(GL_LINES); // These vertices form a closed polygon

glColor3f(0,0,0);

glVertex2f(15, 6.55);
glVertex2f(15, 8);

glVertex2f(11.4, 6.19);
glVertex2f(11.4, 8);

glVertex2f(9, 6.5);
glVertex2f(9, 8);


glEnd();

}

void OBJECT1(){

glBegin(GL_POLYGON); // These vertices form a closed polygon

glColor3f(1.0f, 0.8f, 0.0f);

glVertex2f(0.77, 6.54);
glVertex2f(3, 6.54);
glVertex2f(2.97, 7.08);
glVertex2f(2.92, 7.7);
glVertex2f(2.73, 8.23);
glVertex2f(2.43, 8.68);
glVertex2f(2.25, 8.83);
glVertex2f(2.07, 8.86);
glVertex2f(2, 8.87);
glVertex2f(1.95, 8.86);
glVertex2f(1.68, 8.82);
glVertex2f(1.39, 8.62);
glVertex2f(1.13, 8.23);
glVertex2f(0.93, 7.7);
glVertex2f(0.8, 7.08);

glEnd();

glBegin(GL_POLYGON); // These vertices form a closed polygon

glColor3f(0.8f, 0.1f, 0.0f);

glVertex2f(1.95, 8.86);
glVertex2f(2, 8.87);
glVertex2f(2.07, 8.86);
glVertex2f(2.07, 9.05);
glVertex2f(1.95, 9.05);

glEnd();

}

void TREE(){

glBegin(GL_POLYGON); // These vertices form a closed polygon

glColor3f(0.0f, 0.7f, 0.0f);

glVertex2f(8.4, 10.42);
glVertex2f(8.79, 10.42);
glVertex2f(9, 10);
glVertex2f(9.19, 10.42);
glVertex2f(9.6, 10.42);
glVertex2f(9.65, 10.22);
glVertex2f(9.77, 10.1);
glVertex2f(9.92, 10.05);
glVertex2f(10.12, 10.1);
glVertex2f(10.27, 10.21);
glVertex2f(10.33, 10.38);
glVertex2f(10.33, 10.63);
glVertex2f(10.73, 10.43);
glVertex2f(11.02, 10.36);
glVertex2f(11.37, 10.44);
glVertex2f(11.64, 10.88);
glVertex2f(11.57, 11.31);
glVertex2f(11.16, 11.62);
glVertex2f(11.63, 11.98);
glVertex2f(11.83, 12.56);
glVertex2f(11.63, 12.94);
glVertex2f(11.12, 13.16);
glVertex2f(10.54, 13.23);
glVertex2f(10.76, 13.74);
glVertex2f(10.56, 14.36);
glVertex2f(9.9, 14.62);
glVertex2f(9.19, 14.41);
glVertex2f(8.75, 13.72);
glVertex2f(8.36, 14.19);
glVertex2f(7.64, 14.19);
glVertex2f(7.08, 13.62);
glVertex2f(7, 13);
glVertex2f(6.48, 12.94);
glVertex2f(6.14, 12.42);
glVertex2f(6.28, 11.79);
glVertex2f(6.8, 11.5);
glVertex2f(7.35, 11.42);
glVertex2f(7.23, 10.92);
glVertex2f(7.4, 10.43);
glVertex2f(7.93, 10.25);

glEnd();

glBegin(GL_POLYGON); // These vertices form a closed polygon

glColor3f(0.5f, 0.15f, 0.0f);

glVertex2f(8.4, 8.875);
glVertex2f(8.82, 8.35);
glVertex2f(9.6, 9.45);
glVertex2f(9.6, 10.42);
glVertex2f(9.19, 10.42);
glVertex2f(9, 10);
glVertex2f(8.79, 10.42);
glVertex2f(8.4, 10.42);

glEnd();

}

void OBJECT2(){

glBegin(GL_POLYGON); // These vertices form a closed polygon

glColor3f(0.0f, 0.7f, 0.0f);

glVertex2f(13.97, 9.6);
glVertex2f(26, 9.6);
glVertex2f(26, 10.4);
glVertex2f(25.71, 10.53);
glVertex2f(25.36, 10.55);
glVertex2f(25.08, 10.37);
glVertex2f(24.87, 10.16);
glVertex2f(24.48, 10.53);
glVertex2f(23.95, 10.61);
glVertex2f(23.43, 10.5);
glVertex2f(23.02, 10.15);
glVertex2f(22.57, 10.46);
glVertex2f(21.89, 10.6);
glVertex2f(21.3, 10.53);
glVertex2f(20.88, 10.17);
glVertex2f(20.48, 10.41);
glVertex2f(19.94, 10.53);
glVertex2f(19.48, 10.41);
glVertex2f(19.07, 10.16);
glVertex2f(18.6, 10.6);
glVertex2f(17.85, 10.77);
glVertex2f(17.2, 10.6);
glVertex2f(16.66, 10.06);
glVertex2f(16.26, 10.43);
glVertex2f(15.6, 10.6);
glVertex2f(15, 10.48);
glVertex2f(14.52, 10.08);
glVertex2f(14.2, 10.32);
glVertex2f(13.77, 10.39);
glVertex2f(13.21, 10);
glVertex2f(13.65, 10);

glEnd();


}

void SUN(){
if (state == 1){
glBegin(GL_POLYGON); // These vertices form a closed polygon

glColor3f(1.0f, 1.0f, 0.0f);

glVertex2f(21.3, 10.53);
glVertex2f(20.88, 10.17);
glVertex2f(20.48, 10.41);
glVertex2f(19.94, 10.53);
glVertex2f(19.48, 10.41);
glVertex2f(19.07, 10.16);
glVertex2f(18.6, 10.6);
glVertex2f(18.65, 10.84);
glVertex2f(18.72, 11.07);
glVertex2f(18.84, 11.28);
glVertex2f(19, 11.5);
glVertex2f(19.2, 11.66);
glVertex2f(19.44, 11.8);
glVertex2f(19.71, 11.87);
glVertex2f(19.94, 11.88);
glVertex2f(20.26, 11.83);
glVertex2f(20.58, 11.73);
glVertex2f(20.8, 11.6);
glVertex2f(20.97, 11.42);
glVertex2f(21.08, 11.26);
glVertex2f(21.2, 11);
glVertex2f(21.25, 10.8);

glEnd();
}


}

void GROUND(){

glBegin(GL_POLYGON); // These vertices form a closed polygon

glColor3f(0.7f, 0.9f, 0.0f);

glVertex2f(0.77,3);
glVertex2f(3, 3);
glVertex2f(3, 6.54);
glVertex2f(0.77, 6.54);

glEnd();

glBegin(GL_POLYGON); // These vertices form a closed polygon

glColor3f(0.7f, 0.9f, 0.0f);

glVertex2f(3,3);
glVertex2f(26, 3);
glVertex2f(26,8.35);
glVertex2f(3, 8.35);

glEnd();

glBegin(GL_POLYGON); // These vertices form a closed polygon

glColor3f(0.7f, 0.9f, 0.0f);

glVertex2f(13.97, 9.6);
glVertex2f(26, 9.6);
glVertex2f(26,8.35);
glVertex2f(13.97, 8.35);

glEnd();

glBegin(GL_LINES); // These vertices form a closed polygon

glColor3f(0,0,0);

glVertex2f(26, 9.6);
glVertex2f(13.97, 9.6);

glVertex2f(3, 6.54);
glVertex2f(0.77, 6.54);

glEnd();

}


void change(int value) {
    if (state == 1) {
        state = 2;
    } else {
        state = 1; // Reset state if it's neither 1 nor 2
    }
    glutPostRedisplay();
    glutTimerFunc(2000, change, 0);
}

void MOON(){

if (state != 1){
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<300;i++)
        {
            glColor3f(1,1,1);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=1;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+20,y+13);
        }
	glEnd();

}

}

void display() {

glClearColor(1.0f, 1.0f, 1.0f, 1.0f);

glClear(GL_COLOR_BUFFER_BIT); // Clear the color buffer with current clearing color

SKY();
MOON();
GROUND();
OBJECT1();
HOUSE1();
TREE();
OBJECT2();
HOUSE2();
SUN();

glFlush(); // Render now

}

/* Main function: GLUT runs as a console application starting at main() */

int main(int argc, char** argv) {

glutInitWindowSize(920, 520); // Set the window's initial width & height
glutInit(&argc, argv);

glutCreateWindow("Village Scnario"); // Create window with the given title


glutInitWindowPosition(50, 50); // Position the window's initial top-left corner

glutDisplayFunc(display); // Register callback handler for window re-paint event

gluOrtho2D(0.77,+26,3,+15);
glutTimerFunc(2000,change, 0 );

glutMainLoop(); // Enter the event-processing loop

return 0;

}

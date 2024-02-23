#include <math.h>
#include <windows.h> // for MS Windows

#include <GL/glut.h> // GLUT, include glu.h and gl.h

/* Handler for window-repaint event. Call back when the window first appears and

whenever the window needs to be re-painted. */
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

void outlilne_building(){
glColor3f(0, 0, 0);
glLineWidth(1.5);

glBegin(GL_LINES);
 glVertex2f(10, 270);
glVertex2f(-32, 210);

glVertex2f(-32, 210);
glVertex2f(-44, 210);

glVertex2f(-44, 210);
glVertex2f(10, 285);

glVertex2f(10, 285);
glVertex2f(64, 210);

glVertex2f(64, 210);
glVertex2f(52, 210);

glVertex2f(52, 210);
glVertex2f(10, 270);



 glEnd();


 glBegin(GL_LINES);
glVertex2f(-32, 210);
glVertex2f(-32, 20);

glVertex2f(-32, 20);
glVertex2f(52, 20);

glVertex2f(52, 20);
glVertex2f(52, 210);


glEnd();

glBegin(GL_LINES);
glVertex2f(-39.9, 20);
glVertex2f(-60, 0);

glVertex2f(-60, 0);
glVertex2f(80, 0);

glVertex2f(80, 0);
glVertex2f(60, 20);

glVertex2f(60, 20);
glVertex2f(-39.9, 20);

glEnd();

//lowere portion outline
glBegin(GL_LINES);
glVertex2f(-40, 0);
glVertex2f(-40, -83);

glVertex2f(-40, -83);
glVertex2f(60, -83);

glVertex2f(60, -83);
glVertex2f(60, 0);


glEnd();

glBegin(GL_LINES);

glVertex2f(52, 75.66478);
glVertex2f(160, 0);

glVertex2f(160, 0);
glVertex2f(140, 0);

glVertex2f(140, 0);
glVertex2f(52, 60.576048);

glVertex2f(52, 60.576048);
glVertex2f(52, 75.66478);
glEnd();

glBegin(GL_LINES);

glVertex2f(100, 60);
glVertex2f(99.9899323003119, 42.04304600);

glVertex2f(99.9899323003119, 42.04304600);
glVertex2f(119.9380400662845, 28.0674041695164);

glVertex2f(119.9380400662845, 28.0674041695164);
glVertex2f(120,60);

glVertex2f(120,60);
glVertex2f(100, 60);


glEnd();

//right window
glBegin(GL_LINES);

glVertex2f(80,-30);
glVertex2f(80,-60);

glVertex2f(80,-60);
glVertex2f(110,-60);

glVertex2f(110,-60);
glVertex2f(110,-30);

glVertex2f(110,-30);
glVertex2f(80,-30);

glEnd();

//LOWER OUTLILNE UNDER THE RIGHT WINDOW

glBegin(GL_LINES);

glVertex2f(60,-80);
glVertex2f(140,-80);

glVertex2f(140,-80);
glVertex2f(140,0);


glEnd();

//10 small windows outline
glBegin(GL_LINES);
//first
glVertex2f(-20, 60);
glVertex2f(-20, 30);

glVertex2f(-20, 30);
glVertex2f(0, 30);

glVertex2f(0, 30);
glVertex2f(0, 60);

glVertex2f(0, 60);
glVertex2f(-20, 60);

//2nd
glVertex2f(20, 60);
glVertex2f(20, 30);

glVertex2f(20, 30);
glVertex2f(40, 30);

glVertex2f(40, 30);
glVertex2f(40, 60);

glVertex2f(40, 60);
glVertex2f(20, 60);


//3rd
glVertex2f(-20, 100);
glVertex2f(-20, 70);

glVertex2f(-20, 70);
glVertex2f(0, 70);

glVertex2f(0, 70);
glVertex2f(0, 100);

glVertex2f(0, 100);
glVertex2f(-20, 100);


//4th
glVertex2f(20, 100);
glVertex2f(20, 70);

glVertex2f(20, 70);
glVertex2f(40, 70);

glVertex2f(40, 70);
glVertex2f(40,100);

glVertex2f(40,100);
glVertex2f(20, 100);


//5th
glVertex2f(-20, 140);
glVertex2f(-20, 110);

glVertex2f(-20, 110);
glVertex2f(0, 110);

glVertex2f(0, 110);
glVertex2f(0, 140);

glVertex2f(0, 140);
glVertex2f(-20, 140);


//6th
glVertex2f(20, 140);
glVertex2f(20, 110);

glVertex2f(20, 110);
glVertex2f(40, 110);

glVertex2f(40, 110);
glVertex2f(40,140);

glVertex2f(40,140);
glVertex2f(20, 140);


//6th
glVertex2f(-20, 180);
glVertex2f(-20, 150);

glVertex2f(-20, 150);
glVertex2f(0, 150);

glVertex2f(0, 150);
glVertex2f(0, 180);

glVertex2f(0, 180);
glVertex2f(-20, 180);


//7th
glVertex2f(20, 180);
glVertex2f(20, 150);

glVertex2f(20, 150);
glVertex2f(40, 150);

glVertex2f(40, 150);
glVertex2f(40,180);

glVertex2f(40,180);
glVertex2f(20, 180);


//8th
glVertex2f(-20, 220);
glVertex2f(-20, 190);

glVertex2f(-20, 190);
glVertex2f(0, 190);

glVertex2f(0, 190);
glVertex2f(0, 220);

glVertex2f(0, 220);
glVertex2f(-20, 220);


//9th
glVertex2f(20, 220);
glVertex2f(20, 190);

glVertex2f(20, 190);
glVertex2f(40, 190);

glVertex2f(40, 190);
glVertex2f(40,220);

glVertex2f(40,220);
glVertex2f(20, 220);


glEnd();


}

void main_doorL(){
glColor3f(0, 0, 0);
glLineWidth(1.5);
glBegin(GL_LINES);
glVertex2f(-12, -83);
glVertex2f(-12, -22);

glVertex2f(-12, -22);
glVertex2f(-6, -18);

glVertex2f(-6, -18);
glVertex2f(3, -16);

glVertex2f(3, -16);
glVertex2f(16, -16);

glVertex2f(16, -16);
glVertex2f(27, -19);

glVertex2f(27, -19);
glVertex2f(32, -22);

glVertex2f(32, -22);
glVertex2f(32, -83);

glVertex2f(-20, -83);
glVertex2f(-20, -20);

glVertex2f(-20, -20);
glVertex2f(-8.5, -13.5);

glVertex2f(-8.5, -13.5);
glVertex2f(3, -9.5);

glVertex2f(3, -9.5);
glVertex2f(16, -9.5);

glVertex2f(16, -9.5);
glVertex2f(28, -13);

glVertex2f(28, -13);
glVertex2f(40, -20);

glVertex2f(40, -20);
glVertex2f(40, -83);

glVertex2f(40, -83);
glEnd();



// two doors and one open

//left open door
glBegin(GL_LINES);
glVertex2f(-12, -30.999998523);
glVertex2f(-12, -83);

glVertex2f(-12, -83);
glVertex2f(6.5, -79.5);

glVertex2f(6.5, -79.5);
glVertex2f(6.5, -34.5);

glVertex2f(6.5, -34.5);
glVertex2f(-12, -30.999998523);
glEnd();

//right closed door
glBegin(GL_LINES);
glVertex2f(10.00057437, -30.999998523);
glVertex2f(10.033969079, -83);

glVertex2f(10.033969079, -83);
glVertex2f(31.996384, -83);

glVertex2f(31.996384, -83);
glVertex2f(31.996384, -30.999998523);

glEnd();


//four squares of the two doors
//right two squares
glBegin(GL_LINES);
//first square
glVertex2f(13, -34);
glVertex2f(13, -54.5);

glVertex2f(13, -54.5);
glVertex2f(28, -54.5);

glVertex2f(28, -54.5);
glVertex2f(28, -34);

glVertex2f(28, -34);
glVertex2f(13, -34);

//second square
glVertex2f(13, -61);
glVertex2f(13, -80);

glVertex2f(13, -80);
glVertex2f(28, -80);

glVertex2f(28, -80);
glVertex2f(28, -61);

glVertex2f(28, -61);
glVertex2f(13, -61);


//left two squares
//first square
glVertex2f(-9, -35.5);
glVertex2f(-9, -53.5);

glVertex2f(-9, -53.5);
glVertex2f(3.6, -54.6);

glVertex2f(3.6, -54.6);
glVertex2f(3.6, -37.4);

glVertex2f(3.6, -37.4);
glVertex2f(-9, -35.5);

//second square

glVertex2f(-9, -57.5);
glVertex2f(-9, -75.8);

glVertex2f(-9, -75.8);
glVertex2f(3.6, -74.4);

glVertex2f(3.6, -74.4);
glVertex2f(3.6, -59.35);

glVertex2f(3.6, -59.35);
glVertex2f(-9, -57.5);



//two lower curves out of total 4 curves

//3rd lower curve from up
glVertex2f(-3.51056,  -29.880283172);
glVertex2f(-2,  -25.5);

glVertex2f(-2,  -25.5);
glVertex2f(1.06,  -21.68);

glVertex2f(1.06,  -21.68);
glVertex2f(6.15,  -19.95);

glVertex2f(6.15,  -19.95);
glVertex2f(12.6,  -20);

glVertex2f(12.6,  -20);
glVertex2f(16.8,  -22.4);

glVertex2f(16.8,  -22.4);
glVertex2f(20.4,  -26.4);

glVertex2f(20.4,  -26.4);
glVertex2f(21.189489,  -29.999999);


//fourth lower curve from up
glVertex2f(0.9894420866, -29.99999999971);
glVertex2f(3.5, -25.5);

glVertex2f(3.5, -25.5);
glVertex2f(7.2, -24.4);

glVertex2f(7.2, -24.4);
glVertex2f(10.8, -24.4);

glVertex2f(10.8, -24.4);
glVertex2f(15, -26);

glVertex2f(15, -26);
glVertex2f(16.603981, -29.999999817);


glEnd();
}






void display() {

glClearColor(1.0f, 1.0f, 1.0f, 1.0f);

glClear(GL_COLOR_BUFFER_BIT);

building();
outlilne_building();
main_doorL();

glFlush(); // Render now

}

/* Main function: GLUT runs as a console application starting at main() */

int main(int argc, char** argv) {

glutInitWindowSize(600, 800); // Set the window's initial width & height
glutInit(&argc, argv); // Initialize GLUT
glutInitWindowPosition((glutGet(GLUT_SCREEN_WIDTH)-600)/2,
                       (glutGet(GLUT_SCREEN_HEIGHT)-800)/2);
glutCreateWindow("OpenGL Setup"); // Create a window with the given title


glutDisplayFunc(display); // Register display callback handler for window re-paint

gluOrtho2D(-80, 170, -100, 300);
glutMainLoop(); // Enter the event-processing loop

return 0;

}





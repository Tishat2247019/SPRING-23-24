#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h
#include "glutil.h"
#include<iostream>

using  namespace std;


int a = 1;
/* Handler for window-repaint event. Call back when the window first appears and
whenever the window needs to be re-painted. */



void next_text(int value){
a++;
cout << a << endl;
glutPostRedisplay();
glutTimerFunc(200, next_text, 0);

}
void display() {
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // Set background color to black and opaque
	glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)

   // ApplyTexture( 0, 10,26, 10, 26, -6,  0,-6,textures[0].textureID);

    glColor3f(1, 1, 1);
    glBegin(GL_POLYGON);
    glVertex2f(0, -6);
    glVertex2f(26, -6);
    glVertex2f(26, 10);
    glVertex2f(0, 10);

    glEnd();
	  // Render now
    ApplyTexture( 0,-6,26, -6,26, 10, 0, 10,  textures[0].textureID);
   //morphedText("hellp bangle" ,6, 2, .01, 3, 0.8, 0, 0);
   //staticText()
  // glColor3f(1, 1, 0);
  if (a > 5)
   staticText("It is a hot summer day.",-2, 11.99, .004, 1, 0, 0, 0);
 // if (a < 10)
  // staticText("Some kids are bating in river",12, 6, .005, 3, 1, 0, 0);
     //typedText(12,10, "We  ");
 if (a >10)
   //typedText(12, 8, "Ther are enjoying thier bath ");
   staticText("It's about 40 degree celcius temperature outside.",5, 11.99, .004, 1, 0, 0, 0);

    if (a >15)
   //typedText(12, 8, "Ther are enjoying thier bath ");
   staticText("Some children decided to bath ",18, 11.99, .004, 1, 0, 0, 0);


    if (a >20)
   //typedText(12, 8, "Ther are enjoying thier bath ");
   staticText("in the river .So that they can get some relief.",-2, 10, .004, 1, 0, 0, 0);
     if (a >25)
   //typedText(12, 8, "Ther are enjoying thier bath ");
   staticText("So, We are seeing they are enjoying their bath in the river",11, 10, .004, 1, 0, 0, 0);

	glutSwapBuffers();
	glFlush();

}



/* Main function: GLUT runs as a console application starting at main()  */
int main(int argc, char** argv) {
	glutInit(&argc, argv);                 // Initialize GLUT
	//glutInitWindowSize(920, 720);   // Set the window's initial width & height
	glutInitWindowSize(1000, 600);   // Set the window's initial width & height
	glutCreateWindow("OpenGL Setup Test"); // Create a window with the given title
	loadImageAndStore("E:/SPRING 23-24/COMPUTER GRAPHICS/FINAL/PERFORMANCE TASK/QUESTION_05/sample.bmp");

	glutDisplayFunc(display); // Register display callback handler for window re-paint
	gluOrtho2D(-2, 28, -8, 12);
	//gluOrtho2D(0, 50, 0, 50);
	//glutTimerFunc(0, mT_update, 0);
	glutTimerFunc(200, next_text, 0);
	glutTimerFunc(_tDelay, _keyboard_timer, 0);
	//glutTimerFunc(_tDelay, _keyboard_timer, 1);
	glutMainLoop();           // Enter the event-processing loop
	return 0;
}

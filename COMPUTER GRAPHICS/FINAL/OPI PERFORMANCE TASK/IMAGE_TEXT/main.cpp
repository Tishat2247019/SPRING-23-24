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

glutPostRedisplay();
glutTimerFunc(200, next_text, 0);

}
void display() {
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // Set background color to black and opaque
	glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)



    glColor3f(1, 1, 1);
    glBegin(GL_POLYGON);
    glVertex2f(0, -6);
    glVertex2f(26, -6);
    glVertex2f(26, 10);
    glVertex2f(0, 10);

    glEnd();

    ApplyTexture( 0,-6,26, -6,26, 10, 0, 10,  textures[0].textureID);

  if (a > 5)
   staticText("AIUB has achieved another milestone as the first university in Bangladesh to earn recognition from QS Stars",-2, 8, .004, 2, 0, 0, 0);

 if (a >10)

   staticText("securing an esteemed 4-star rating.Securing a 4-star rating elevates AIUB to a distinguished position globally, ",-2, 7.5, .004, 2, 0, 0, 0);

    if (a >15)

   staticText(" highlighting its exceptional teaching standards, cutting-edge facilities, vibrant campus life,and impactful research",-2, 6.5, .004, 2, 0, 0, 0);


    if (a >20)

   staticText(" initiatives. Furthermore, AIUB holds the distinction of being the first internationally accredited university in ",-2, 5.5, .004, 2, 0, 0, 0);

     if (a >30)

   staticText("Bangladesh by the Philippine Accrediting Association of Schools, Colleges, and Universities (PAASCU) since 2011.",-2, 2.5, 004, 2, 0, 0, 0);

	glutSwapBuffers();
	glFlush();

}

int main(int argc, char** argv) {
	glutInit(&argc, argv);                 // Initialize GLUT
	//glutInitWindowSize(920, 720);   // Set the window's initial width & height
	glutInitWindowSize(1000, 600);   // Set the window's initial width & height
	glutCreateWindow("OpenGL Setup Test"); // Create a window with the given title
	loadImageAndStore("E:/SPRING 23-24/COMPUTER GRAPHICS/FINAL/OPI PERFORMANCE TASK/IMAGE_TEXT/sample1.bmp");
	//loadImageAndStore("E:/SPRING 23-24/COMPUTER GRAPHICS/FINAL/PERFORMANCE TASK/QUESTION_05/sample.bmp");
	glutDisplayFunc(display); // Register display callback handler for window re-paint
	gluOrtho2D(-2, 28, -8, 12);

	glutTimerFunc(200, next_text, 0);


	glutMainLoop();           // Enter the event-processing loop
	return 0;
}

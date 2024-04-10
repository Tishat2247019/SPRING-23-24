#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h
#include <math.h>
/* Handler for window-repaint event. Call back when the window first appears and
whenever the window needs to be re-painted. */
float _angle1 = 0.0f;


void windmill(){

    // triangle
    glBegin(GL_POLYGON);
    glColor3f(1,0,0);
    glVertex2f(0, 7);
    glVertex2f(-4, 1);
    glVertex2f(4, 1);

    glEnd();

    // lower portion part

     glBegin(GL_POLYGON);
    glColor3f(1,1,0);
    glVertex2f(-2.9710578, 1);
    glVertex2f(-6.264816429, -10.01450359);
    glVertex2f(6, -10);
    glVertex2f(2.80555117, 1);
    glEnd();

    // circle

     glBegin(GL_POLYGON);
	glLineWidth(2.5);
	for(int i=0;i<360;i++)
        {
            glColor3f(1,1,0.99);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r= 0.464578;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x - 0.0739689526722,y + 1.7006424408778);
        }

    glEnd();


    glMatrixMode(GL_MODELVIEW);

    glPushMatrix();

    glTranslatef(-0.0739689526722, +1.7006424408778,0.0);

	glRotatef(_angle1, 0.0f, 0.0f,1.0f);

    glTranslatef(0.0739689526722, -1.7006424408778,0.0);

    // blades

    glBegin(GL_POLYGON);
    glColor3f(1,1,1);
    glVertex2f(0.46, 2.64);
    glVertex2f(0.089986, 2.13532866);
    glVertex2f(0.18615530, 2.085569);
    glVertex2f(0.56, 2.56);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1,1,1);
    glVertex2f(0.6216717902193, 2.5048083088078);
    glVertex2f(4.2765387485632, 6.5467810761083);
    glVertex2f(3.2909042069108, 7.4843358840215);
    glVertex2f(0.3906217052614, 2.7057214261625);


    glEnd();


     glBegin(GL_POLYGON);
    glColor3f(1,1,1);
    glVertex2f(-0.98, 2.26);
    glVertex2f(-0.4905033, 1.906391);
    glVertex2f(-0.44368376, 1.9819684);
    glVertex2f(-0.9, 2.34);


    glEnd();


    glBegin(GL_POLYGON);
    glColor3f(1,1,1);
    glVertex2f(-0.8084914619834, 2.4370793666386);
    glVertex2f(-4.8419376762044, 6.4907295343387);
    glVertex2f(-5.7912310893285, 5.5414361212145);
    glVertex2f(-1.1142996212191, 2.1253331848934);



    glEnd();


    glBegin(GL_POLYGON);
    glColor3f(1,1,1);
    glVertex2f(-0.78, 0.86);
    glVertex2f(-0.3260878, 1.310425);
    glVertex2f(-0.40942731, 1.3792376);
    glVertex2f(-0.88, 0.94);


    glEnd();


    glBegin(GL_POLYGON);
    glColor3f(1,1,1);
    glVertex2f(-0.9939943291765, 1.0271021476365);
    glVertex2f(-5.5, -2.5);
    glVertex2f(-4.5, -3.5);
    glVertex2f(-0.6660745445086, 0.7702524303681);




    glEnd();



     glBegin(GL_POLYGON);
    glColor3f(1,1,1);
    glVertex2f(0.74, 0.87);
    glVertex2f(0.82, 0.98);
    glVertex2f(0.28616292, 1.40714899);
    glVertex2f(0.201014167, 1.3261859655);


    glEnd();


     glBegin(GL_POLYGON);
    glColor3f(1,1,1);
    glVertex2f(0.55, 0.6);
    glVertex2f(5.4, -3.2);
    glVertex2f(6.2, -2);
    glVertex2f(1, 1.2);



    glEnd();

    glFlush;
    glPopMatrix();




}

void update1(int value) {

    _angle1+=3.0f;
    if(_angle1 > 360.0)
    {
        _angle1-=360;
    }
	glutPostRedisplay(); //Notify GLUT that the display has changed

	glutTimerFunc(20, update1, 0); //Notify GLUT to call update again in 25 milliseconds
}

void display() {

    glClearColor(0.0f, 0.0f,0.0f, 1.0f); // Set background color to black and opaque
	glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)
  windmill();

	glFlush();  // Render now
}

/* Main function: GLUT runs as a console application starting at main()  */
int main(int argc, char** argv) {
	glutInitWindowSize(800, 800);   // Set the window's initial width & height
	glutInit(&argc, argv);                 // Initialize GLUT
	glutCreateWindow("OpenGL Setup Test"); // Create a window with the given title
	glutDisplayFunc(display); // Register display callback handler for window re-paint
	gluOrtho2D(-8, +8, -12, +9);
	glutTimerFunc(20, update1, 0); //Add a timer
	glutMainLoop();           // Enter the event-processing loop
	return 0;
}

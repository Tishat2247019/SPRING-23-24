#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h
#include<iostream>

using namespace std;
/* Handler for window-repaint event. Call back when the window first appears and
whenever the window needs to be re-painted. */


float _angle1 = 0.0f;

float leftt = 0;
float leftty = 0;
float zoom = 1;


int state = 1;
int state1 = 1;

/* void fire() {

    glPushMatrix();

    glTranslatef(108, 30, 0.0);

    glRotatef(_angle1, 0.0f, 0.0f, 1.0f);

    glTranslatef(-108, -30, 0.0);

    glBegin(GL_POLYGON);
    glColor3f(1, 0, 0);

    glVertex2f(118.6214412783762, 69.9279015809375);
    glVertex2f(111.5191623578538, 67.2931852071953);
    glVertex2f(105.676965181295, 63.2838342036745);
    glVertex2f(101.7821670635891, 59.045377428524);
    glVertex2f(98.5746862607726, 52.6304158228908);
    glVertex2f(96.9709458593643, 45.9863484456279);
    glVertex2f(97.0854987451791, 40.6023628123286);
    glVertex2f(106.9012759555653, 35.7058174931598);
    glVertex2f(113.3164816807086, 66.563769082457);
    glVertex2f(118.6214412783762, 69.9279015809375);

    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(97.0854987451791, 40.6023628123286);
    glVertex2f(94.1071237139923, 44.6117138158493);
    glVertex2f(94.1071237139923, 50.7975696498528);
    glVertex2f(88.6085851948782, 42.2061032137369);
    glVertex2f(85.5156572778765, 33.5000838918061);
    glVertex2f(86.2029745927657, 22.5030068535777);
    glVertex2f(91.4724073402501, 12.8805644451279);
    glVertex2f(98.4601333749577, 8.1838961267179);
    glVertex2f(106.1351767245545, 6.6947086111245);
    glVertex2f(116.1012777904489, 7.3820259260138);
    glVertex2f(106.9012759555653, 35.7058174931598);
    glEnd();


    glBegin(GL_POLYGON);
    glVertex2f(118.6214412783762, 69.9279015809375);
    glVertex2f(116.1012777904489, 66.605867892306);
    glVertex2f(116.1012777904489, 59.1599303143389);
    glVertex2f(116.9031479911531, 54.0050504526694);
    glVertex2f(120, 50);
    glVertex2f(122.5162393960821, 42.6643147569964);
    glVertex2f(124.1199797974904, 36.4784589229929);
    glVertex2f(106.9012759555653, 35.7058174931598);
    glVertex2f(113.3164816807086, 66.563769082457);
    glVertex2f(118.6214412783762, 69.9279015809375);


    glEnd();



    glBegin(GL_POLYGON);
    glVertex2f(126.8692490570474, 47.5900888470362);
    glVertex2f(127.0983548286772, 43.9243965009601);
    glVertex2f(129.5039654307896, 37.7385406669566);
    glVertex2f(132.2532346903467, 27.886992486877);
    glVertex2f(129.5039654307896, 18.493655850057);
    glVertex2f(124.8072971123796, 12.0786942444238);
    glVertex2f(115.5902254820253, 8.7457124204054);
    glVertex2f(116.1012777904489, 7.3820259260138);



    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(106.9012759555653, 35.7058174931598);
    glVertex2f(124.1199797974904, 36.4784589229929);
    glVertex2f(116.1012777904489, 7.3820259260138);

    glEnd();

    glPopMatrix();

} */


void fire() {

    glPushMatrix();
    glTranslatef(leftt, leftty, 0);
    glScalef(zoom, zoom, 1);

    glBegin(GL_POLYGON);
    glColor3f(1, 0, 0);

    glVertex2f(94, 52);
    glVertex2f(88, 42);
    glVertex2f(86, 34);
    glVertex2f(96, 42);
    glVertex2f(94, 46);

    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(86, 34);
    glVertex2f(86, 22);
    glVertex2f(92, 12);
    glVertex2f(100, 8);
    glVertex2f(108, 6);
    glVertex2f(118, 8);
    glVertex2f(126, 14);
    glVertex2f(130, 20);
    glVertex2f(132, 28);
    glVertex2f(120, 30);
    glVertex2f(105, 30);
    glVertex2f(96, 42);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(127, 48);
    glVertex2f(128, 44);
    glVertex2f(130, 38);
    glVertex2f(132, 28);
    glVertex2f(120, 30);
    glVertex2f(124, 36);
    glVertex2f(126, 42);


    //glVertex2f(94, 52);

    glEnd();


    glBegin(GL_POLYGON);
    glVertex2f(96, 42);
    glVertex2f(98, 46);
    glVertex2f(100, 54);
    glVertex2f(104, 60);
    glVertex2f(116, 60);
    glVertex2f(118, 54);
    glVertex2f(120, 50);
    glVertex2f(122, 44);
    glVertex2f(124, 36);
    glVertex2f(120, 30);
    glVertex2f(105, 30);
    glVertex2f(105, 30);

    glEnd();

    //TOP MOST LAYER

   /*  glBegin(GL_POLYGON);
    glVertex2f(104, 60);
    glVertex2f(106, 64);
    glVertex2f(108, 68);
    glVertex2f(112, 74);
    glVertex2f(114, 66);
    glVertex2f(116, 60);


    glEnd();
 */


 /*
     //TOP MOST LAYER

     glBegin(GL_POLYGON);
     glVertex2f(104, 60);
     glVertex2f(106, 64);
     glVertex2f(108, 68);
     glVertex2f(110, 58);
     glVertex2f(114, 66);


     glEnd();


     glPushMatrix();

     glTranslatef(111, 67, 0.0);

     glRotatef(_angle1, 0.0f, 1.0f, 1.0f);

     glTranslatef(-111, -67, 0.0);

     glColor3f(1, 1, 0);
     glBegin(GL_POLYGON);
     glVertex2f(112, 74);
     glVertex2f(108, 68);
     glVertex2f(110, 58);
     glVertex2f(114, 66);



     glEnd();


     //glPopMatrix();






     glPopMatrix();
  */


  //middle layer

    if (state == 1) {
        glBegin(GL_POLYGON);
        glVertex2f(110, 76);
        glVertex2f(104, 60);
        glVertex2f(116, 60);

        glEnd();
    }

    //left layer
    if (state == 2) {

        glBegin(GL_POLYGON);
        glVertex2f(104, 76);
        glVertex2f(104, 60);
        glVertex2f(116, 60);

        glEnd();
    }


    //right layer
    if (state == 3) {
        glBegin(GL_POLYGON);
        glVertex2f(116, 76);
        glVertex2f(104, 60);
        glVertex2f(116, 60);

        glEnd();
    }


    glPopMatrix();




}



void update1(int value) {

    /*  if(state == 1) {
         _angle1 = 180;
     }
     if (state == 2) {
         _angle1 = -180;
     } */


    state++;

    if (state > 3) {
        state = 1;
    }



    /*
        switch (state) {
        case 1:
            if (_angle1 < 90) {
                _angle1 += 2.0f;
                //leftt -= 1;
            }
            else {
                state = 2;
            }
            break;
        case 2:
            if (_angle1 > 0) {
                _angle1 -= 2.0f;
                //leftt += 0.2;
            }
            else {
                state = 1;
            }
            break;

            cout << state << endl;
            cout << _angle1 << endl;
        }
     */
     //_angle1 += 2.0f;

    glutPostRedisplay(); //Notify GLUT that the display has changed

    glutTimerFunc(200, update1, 0); //Notify GLUT to call update again in 25 milliseconds
}


void update2(int value) {

    switch (state1) {
    case 1:
        if (zoom < 2) {
            zoom += 0.01;
            leftt -= 0.9;
            leftty -= 0.2;
        }
        else {
            state1 = 2;
        }
        break;
    case 2:
        if (zoom > 1) {
            zoom -= 0.01;
            leftt += 0.9;
            leftty += 0.2;
        }
        else {
            state1 = 1;
        }
        break;

        cout << state1 << endl;

    }

    //_angle1 += 2.0f;

    glutPostRedisplay(); //Notify GLUT that the display has changed

    glutTimerFunc(20, update2, 0); //Notify GLUT to call update again in 25 milliseconds
}





void display() {
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // Set background color to black and opaque
    glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)


    //glPushMatrix();
    //glTranslatef(90, 45, 0);
   // glScalef(0.1, 0.1, 1);
    fire();
    //glPopMatrix();

    glFlush();  // Render now
}

/* Main function: GLUT runs as a console application starting at main()  */
int main(int argc, char** argv) {
    glutInit(&argc, argv);                 // Initialize GLUT
    glutInitWindowSize(800, 600);   // Set the window's initial width & height
    glutCreateWindow("OpenGL Setup Test"); // Create a window with the given title
    gluOrtho2D(20, 200, -20, 100);
    glutTimerFunc(200, update1, 0); //Notify GLUT to call update again in 25 milliseconds
    glutTimerFunc(20, update2, 0); //Notify GLUT to call update again in 25 milliseconds

    glutDisplayFunc(display); // Register display callback handler for window re-paint
    glutMainLoop();           // Enter the event-processing loop
    return 0;
}

#include <windows.h> // for MS Windows
#include<iostream>
#include <GL/glut.h> // GLUT, include glu.h and gl.h
#include <math.h>
//#include "glutil.h"

using namespace std;

float _movetrain = 0;
bool _ismovetrain = false;

//ID - 01
void left_pond() {

    //upper green portion
    glBegin(GL_POLYGON);
    glColor3f(0.27, 0.5, 0.29);
    //glColor3f(0.56, 0.46, 0.29);

    glVertex2f(0, 12);
    glVertex2f(35.5, 12);
    glVertex2f(10, 0);
    glVertex2f(0, 0);

    glEnd();

    //right side deep green portion
    glBegin(GL_POLYGON);
    glColor3f(0.19, 0.26, 0.19);
    //glColor3f(0.19, 0.26, 0.19);

    glVertex2f(10, 0);
    glVertex2f(35.5, 12);
    glVertex2f(35.5, 9);
    glVertex2f(20, 0);


    glEnd();


    // water garden

    glBegin(GL_POLYGON);


    glColor3f(0.32, 0.59, 0.97);

    glVertex2f(0, 10.5);
    glVertex2f(5, 10.5);
    glVertex2f(5, 10.5);
    glVertex2f(11, 9.6);
    glVertex2f(14, 8.5);
    glVertex2f(15.5, 6.5);
    glVertex2f(15.5, 4.5);
    glVertex2f(13, 3);
    glVertex2f(9, 1.5);
    glVertex2f(4.2, 0);
    glVertex2f(0, 0);


    glEnd();



}

// ID - 02
void front_road() {

    //left side light color
    glBegin(GL_POLYGON);
    glColor3f(0.8, 0.57, 0.6);

    glVertex2f(35.2, 0);
    glVertex2f(47.099676, 15.25);
    glVertex2f(48.600006821, 15.25);
    glVertex2f(38, 0);

    glEnd();

    //main deep color area

    glBegin(GL_POLYGON);
    glColor3f(0.92, 0.6, 0.65);

    glVertex2f(38, 0);
    glVertex2f(48.600006821, 15.25);
    glVertex2f(103.47679385, 15.25);
    glVertex2f(90.5, 13.5);
    glVertex2f(90.8, 10.2);
    glVertex2f(130, 2);
    glVertex2f(130, 0);

    glEnd();


}

// ID - 03

void side_green_area() {



    glBegin(GL_POLYGON);
    glColor3f(0.27, 0.5, 0.29);

    glVertex2f(130, 5.5);
    glVertex2f(90.5, 13.5);
    glVertex2f(103.47679385, 15.25);
    glVertex2f(130, 15.25);

    glEnd();


    // left side deep area

    glBegin(GL_POLYGON);
    glColor3f(0.19, 0.26, 0.19);


    glVertex2f(130, 2);
    glVertex2f(90.8, 10.2);
    glVertex2f(90.5, 13.5);
    glVertex2f(130, 5.5);

    glEnd();
}


// ID - 04
void poll_first() {


    // first poll lower portion
    glBegin(GL_POLYGON);

    glColor3f(0.72, 0.42, 0.38);


    glVertex2f(37.7, 2.3);
    glVertex2f(37.7, 12);
    glVertex2f(39.1, 12);
    glVertex2f(39.1, 2.3);

    glEnd();

    // white vertical line
    glLineWidth(7.5);
    glBegin(GL_LINES);

    glColor3f(1, 1, 1);

    glVertex2f(37.78, 11.5);
    glVertex2f(39, 11.5);

    glEnd();


    // first poll upper lower portion  devided in 3 parts
    glColor3f(0.87, 0.4, 0.29);


    glBegin(GL_POLYGON);

    glVertex2f(37.95, 12);
    glVertex2f(37.95, 49.6);
    glVertex2f(38.7, 48.8);
    glVertex2f(38.7, 12);
    glEnd();


    glBegin(GL_POLYGON);

    glVertex2f(38.7, 48.8);
    glVertex2f(37.95, 49.6);
    glVertex2f(48.33596, 50.2505);
    glVertex2f(48.35831, 49.6844234);
    glEnd();


    glBegin(GL_POLYGON);
    glVertex2f(48.4, 49.2);
    glVertex2f(48.3, 50.8);
    glVertex2f(51.75, 51.15);
    glVertex2f(51.85, 49.45);
    glEnd();

    //  square type white object in first poll
    glColor3f(1, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2f(36.5, 21);
    glVertex2f(36.5, 23.5);
    glVertex2f(40, 23.5);
    glVertex2f(40, 21);
    glEnd();

    // cylinder in the first poll
    glColor3f(1, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2f(39.2, 24.5);
    glVertex2f(39.2, 33.6);
    glVertex2f(42, 33.6);
    glVertex2f(42, 24.5);

    glEnd();

    // two black vertical lines in the first poll cylinder
    glLineWidth(4.5);
    glBegin(GL_LINES);

    glColor3f(0, 0, 0);

    glVertex2f(38.7, 26.449548);
    glVertex2f(39.2, 26.449548);

    glVertex2f(38.7, 32);
    glVertex2f(39.2, 32);

    glEnd();

}

// ID - 05
void poll_second() {

    // second poll lower portion
    glBegin(GL_POLYGON);

    glColor3f(0.72, 0.42, 0.38);


    glVertex2f(44.4, 11.4);
    glVertex2f(44.4, 19.75);
    glVertex2f(45.8, 19.75);
    glVertex2f(45.8, 11.4);


    glEnd();

    // white vertical line
    glLineWidth(4.5);
    glBegin(GL_LINES);

    glColor3f(1, 1, 1);

    glVertex2f(44.6, 19.4);
    glVertex2f(45.6, 19.4);

    glEnd();


    // second poll upper lower portion  devided in 3 parts
    glColor3f(0.87, 0.4, 0.29);


    glBegin(GL_POLYGON);

    glVertex2f(44.7, 19.75);
    glVertex2f(44.7, 41.7);
    glVertex2f(45.4, 41);
    glVertex2f(45.4, 19.75);

    glEnd();


    glBegin(GL_POLYGON);

    glVertex2f(45.4, 41);
    glVertex2f(44.7, 41.7);
    glVertex2f(56.411733, 43.35007);
    glVertex2f(56.40078, 42.5985);
    glEnd();


    glBegin(GL_POLYGON);
    glVertex2f(56.4, 42.2);
    glVertex2f(56.4, 44);
    glVertex2f(59, 44.2);
    glVertex2f(59, 42.4);

    glEnd();

    //  square type white object in second poll
    glColor3f(1, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2f(44, 26);
    glVertex2f(44, 27.8);
    glVertex2f(46.2, 27.8);
    glVertex2f(46.2, 26);
    glEnd();

    // cylinder in the first poll
    glColor3f(1, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2f(46, 28.8);
    glVertex2f(46, 36);
    glVertex2f(47.8, 36);
    glVertex2f(47.8, 28.8);


    glEnd();

    // two black vertical lines in the first poll cylinder
    glLineWidth(4.5);
    glBegin(GL_LINES);

    glColor3f(0, 0, 0);

    glVertex2f(45.4, 29.74983);
    glVertex2f(46, 29.75);

    glVertex2f(45.4, 34.900028);
    glVertex2f(46, 34.9);

    glEnd();

}


// ID - 06
void road() {

    glColor3f(0.52, 0.55, 0.64);
    glBegin(GL_POLYGON);

    glVertex2f(0, 15.25);
    glVertex2f(0, 21.9);
    glVertex2f(130, 21.9);
    glVertex2f(130, 15.25);

    glEnd();


    // zebra crossing


    glColor3f(0.85, 0.85, 0.85);
    glBegin(GL_POLYGON);

    glVertex2f(51.5, 16);
    glVertex2f(52, 16.5);
    glVertex2f(60.6, 16.5);
    glVertex2f(60.1, 16);

    glEnd();


    glBegin(GL_POLYGON);

    glVertex2f(52.3, 17);
    glVertex2f(52.8, 17.5);
    glVertex2f(61.6, 17.5);
    glVertex2f(61.1, 17);


    glEnd();



    glBegin(GL_POLYGON);

    glVertex2f(53.1, 18);
    glVertex2f(53.6, 18.5);
    glVertex2f(62.6, 18.5);
    glVertex2f(62.1, 18);


    glEnd();


    glBegin(GL_POLYGON);

    glVertex2f(54.1, 19);
    glVertex2f(54.6, 19.5);
    glVertex2f(63.6, 19.5);
    glVertex2f(63.1, 19);


    glEnd();


    glBegin(GL_POLYGON);

    glVertex2f(55.1, 20);
    glVertex2f(55.6, 20.5);
    glVertex2f(64.6, 20.5);
    glVertex2f(64.1, 20);


    glEnd();



    glBegin(GL_POLYGON);

    glVertex2f(56.1, 21);
    glVertex2f(56.6, 21.5);
    glVertex2f(65.6, 21.5);
    glVertex2f(65.1, 21);


    glEnd();




}

// ID - 08
void ciecle() {

    glPushMatrix();
    glTranslatef(-2, 0.5, 0);

    glPushMatrix();
    glTranslatef(0, -9, 0);
    glScalef(1, 1.8, 1);
    glBegin(GL_POLYGON); // Draw a Red Half Circle centered at origin
    for (int i = 0; i < 70; i++) // Iterate only halfway through the points
    {
        // glColor3f(0.59, 0.52, 0.38);
        glColor3f(0.27, 0.5, 0.29);
        float pi = 4.5009698999936;
        float A = (i * pi) / 100; // Adjusted for half circle
        float r = 3.6088177199518;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 21.5, y + 9.5);
    }

    glEnd();
    glPopMatrix();


    glPushMatrix();
    glTranslatef(0, -10, 0);
    glScalef(1, 1.8, 1);
    glBegin(GL_POLYGON); // Draw a Red Half Circle centered at origin
    for (int i = 0; i < 100; i++) // Iterate only halfway through the points
    {
        //glColor3f(0.21, 0.16, 0.18);
        glColor3f(0.19, 0.26, 0.19);
        float pi = 3.1416;
        float A = (i * pi) / 100; // Adjusted for half circle
        float r = 3.6088177199518;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 21.5, y + 9.5);
    }

    glEnd();
    glPopMatrix();


    glPopMatrix();




    glPushMatrix();
    glTranslatef(0, -9, 0);
    glScalef(1, 1.8, 1);
    glBegin(GL_POLYGON); // Draw a Red Half Circle centered at origin
    for (int i = 0; i < 70; i++) // Iterate only halfway through the points
    {
        //glColor3f(0.59, 0.52, 0.38);
        glColor3f(0.27, 0.5, 0.29);
        float pi = 4.5009698999936;
        float A = (i * pi) / 100; // Adjusted for half circle
        float r = 3.6088177199518;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 21.5, y + 9.5);
    }

    glEnd();
    glPopMatrix();


    glPushMatrix();
    glTranslatef(0, -10, 0);
    glScalef(1, 1.8, 1);
    glBegin(GL_POLYGON); // Draw a Red Half Circle centered at origin
    for (int i = 0; i < 100; i++) // Iterate only halfway through the points
    {
        //glColor3f(0.21, 0.16, 0.18);
        glColor3f(0.19, 0.26, 0.19);
        float pi = 3.1416;
        float A = (i * pi) / 100; // Adjusted for half circle
        float r = 3.6088177199518;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 21.5, y + 9.5);
    }

    glEnd();


    glLineWidth(7.5);
    glBegin(GL_LINES);
    glColor3f(0.19, 0.26, 0.19);

    glVertex2f(18, 7.5);
    glVertex2f(25, 7.5);

    glEnd();

    glPopMatrix();

    glLineWidth(7.5);
    glBegin(GL_LINES);
    glColor3f(0.19, 0.26, 0.19);

    glVertex2f(18, 7.5);
    glVertex2f(25, 7.5);

    glEnd();

}



// ID - 09
void train_platform() {

    //ash color platform
    glColor3f(0.62, 0.61, 0.61);
    glBegin(GL_POLYGON);

    glVertex2f(0, 33.4);
    glVertex2f(0, 36.6);
    glVertex2f(130, 36.6);
    glVertex2f(130, 33.4);


    glEnd();

    //black corlor line between the ash color platform

    glLineWidth(5.5);
    glBegin(GL_LINES);
    glColor3f(0.27, 0.26, 0.26);

    glVertex2f(0, 35);
    glVertex2f(130, 35);



    glEnd();

}


// ID -  10

void train_piller01() {

    // first piller lower portion
    glColor3f(0.5, 0.52, 0.5);
    glBegin(GL_POLYGON);

    glVertex2f(21, 30);
    glVertex2f(19.0356644004177, 31);
    glVertex2f(27.9757298279396, 31);
    glVertex2f(26, 30);
    glVertex2f(26, 21.9);
    glVertex2f(21, 21.9);

    glEnd();

    // first piller upper portion
    glColor3f(0.29, 0.29, 0.29);
    glBegin(GL_POLYGON);


    glVertex2f(19.0356644004177, 31);
    glVertex2f(14.9, 33.4);
    glVertex2f(32.1, 33.4);
    glVertex2f(27.9757298279396, 31);

    glEnd();

    // first piller middle black area
    glColor3f(0.29, 0.29, 0.29);
    glBegin(GL_POLYGON);

    glVertex2f(22.5, 21.9);
    glVertex2f(22.5, 33.4);
    glVertex2f(24.5, 33.4);
    glVertex2f(24.5, 21.9);


    glEnd();

    // first piller horizontal black area

    glColor3f(0.29, 0.29, 0.29);
    glBegin(GL_POLYGON);

    glVertex2f(21, 29);
    glVertex2f(21, 30);
    glVertex2f(26, 30);
    glVertex2f(26, 29);
    glEnd();

    // white small square type area in first piller
    glColor3f(1, 1, 1);
    glBegin(GL_POLYGON);

    glVertex2f(22.5, 32.4);
    glVertex2f(22.5, 33.4);
    glVertex2f(24.5, 33.4);
    glVertex2f(24.5, 32.4);

    glEnd();


}

// ID - 11
void train_piller02() {


    glPushMatrix();
    glTranslatef(34.4, 0, 0);

    // first piller lower portion
    glColor3f(0.5, 0.52, 0.5);
    glBegin(GL_POLYGON);

    glVertex2f(21, 30);
    glVertex2f(19.0356644004177, 31);
    glVertex2f(27.9757298279396, 31);
    glVertex2f(26, 30);
    glVertex2f(26, 21.9);
    glVertex2f(21, 21.9);

    glEnd();

    // first piller upper portion
    glColor3f(0.29, 0.29, 0.29);
    glBegin(GL_POLYGON);


    glVertex2f(19.0356644004177, 31);
    glVertex2f(14.9, 33.4);
    glVertex2f(32.1, 33.4);
    glVertex2f(27.9757298279396, 31);

    glEnd();

    // first piller middle black area
    glColor3f(0.29, 0.29, 0.29);
    glBegin(GL_POLYGON);

    glVertex2f(22.5, 21.9);
    glVertex2f(22.5, 33.4);
    glVertex2f(24.5, 33.4);
    glVertex2f(24.5, 21.9);


    glEnd();

    // first piller horizontal black area

    glColor3f(0.29, 0.29, 0.29);
    glBegin(GL_POLYGON);

    glVertex2f(21, 29);
    glVertex2f(21, 30);
    glVertex2f(26, 30);
    glVertex2f(26, 29);
    glEnd();

    // white small square type area in first piller
    glColor3f(1, 1, 1);
    glBegin(GL_POLYGON);

    glVertex2f(22.5, 32.4);
    glVertex2f(22.5, 33.4);
    glVertex2f(24.5, 33.4);
    glVertex2f(24.5, 32.4);

    glEnd();

    glPopMatrix();
}




// ID - 12
void train_piller03() {


    glPushMatrix();
    glTranslatef(34.4 + 34.4, 0, 0);

    // first piller lower portion
    glColor3f(0.5, 0.52, 0.5);
    glBegin(GL_POLYGON);

    glVertex2f(21, 30);
    glVertex2f(19.0356644004177, 31);
    glVertex2f(27.9757298279396, 31);
    glVertex2f(26, 30);
    glVertex2f(26, 21.9);
    glVertex2f(21, 21.9);

    glEnd();

    // first piller upper portion
    glColor3f(0.29, 0.29, 0.29);
    glBegin(GL_POLYGON);


    glVertex2f(19.0356644004177, 31);
    glVertex2f(14.9, 33.4);
    glVertex2f(32.1, 33.4);
    glVertex2f(27.9757298279396, 31);

    glEnd();

    // first piller middle black area
    glColor3f(0.29, 0.29, 0.29);
    glBegin(GL_POLYGON);

    glVertex2f(22.5, 21.9);
    glVertex2f(22.5, 33.4);
    glVertex2f(24.5, 33.4);
    glVertex2f(24.5, 21.9);


    glEnd();

    // first piller horizontal black area

    glColor3f(0.29, 0.29, 0.29);
    glBegin(GL_POLYGON);

    glVertex2f(21, 29);
    glVertex2f(21, 30);
    glVertex2f(26, 30);
    glVertex2f(26, 29);
    glEnd();

    // white small square type area in first piller
    glColor3f(1, 1, 1);
    glBegin(GL_POLYGON);

    glVertex2f(22.5, 32.4);
    glVertex2f(22.5, 33.4);
    glVertex2f(24.5, 33.4);
    glVertex2f(24.5, 32.4);

    glEnd();

    glPopMatrix();
}

// ID - 13
void train_piller04() {


    glPushMatrix();
    glTranslatef(68.8 + 34.4, 0, 0);

    // first piller lower portion
    glColor3f(0.5, 0.52, 0.5);
    glBegin(GL_POLYGON);

    glVertex2f(21, 30);
    glVertex2f(19.0356644004177, 31);
    glVertex2f(27.9757298279396, 31);
    glVertex2f(26, 30);
    glVertex2f(26, 21.9);
    glVertex2f(21, 21.9);

    glEnd();

    // first piller upper portion
    glColor3f(0.29, 0.29, 0.29);
    glBegin(GL_POLYGON);


    glVertex2f(19.0356644004177, 31);
    glVertex2f(14.9, 33.4);
    glVertex2f(32.1, 33.4);
    glVertex2f(27.9757298279396, 31);

    glEnd();

    // first piller middle black area
    glColor3f(0.29, 0.29, 0.29);
    glBegin(GL_POLYGON);

    glVertex2f(22.5, 21.9);
    glVertex2f(22.5, 33.4);
    glVertex2f(24.5, 33.4);
    glVertex2f(24.5, 21.9);


    glEnd();

    // first piller horizontal black area

    glColor3f(0.29, 0.29, 0.29);
    glBegin(GL_POLYGON);

    glVertex2f(21, 29);
    glVertex2f(21, 30);
    glVertex2f(26, 30);
    glVertex2f(26, 29);
    glEnd();

    // white small square type area in first piller
    glColor3f(1, 1, 1);
    glBegin(GL_POLYGON);

    glVertex2f(22.5, 32.4);
    glVertex2f(22.5, 33.4);
    glVertex2f(24.5, 33.4);
    glVertex2f(24.5, 32.4);

    glEnd();

    glPopMatrix();
}


// ID - 14
void train01() {

    glPushMatrix();
    glTranslatef(0, 1.5, 0);

    glBegin(GL_POLYGON);

    glColor3f(1, 0.65, 0.08);
    glVertex2f(65.7, 42);
    glVertex2f(63.5, 41.8);
    glVertex2f(62.4, 41.3);
    glVertex2f(61, 40.1);
    glVertex2f(60.6, 38.9);
    glVertex2f(60.5, 37.2);
    glVertex2f(60.5, 35.3);
    glVertex2f(61.5, 35.3);
    glVertex2f(61.5, 33.4);
    glVertex2f(84, 33.4);
    glVertex2f(84, 42);

    glEnd();


    // train first window

    glColor3f(0.27, 0.29, 0.33);
    glBegin(GL_POLYGON);

    glVertex2f(62.5, 40.85);
    glVertex2f(61.6, 40);
    glVertex2f(61.3, 39.2);
    glVertex2f(62.5, 39.2);
    glVertex2f(62.25, 39.95);


    glEnd();

    //2nd window

    //glColor3f(0, 0, 1);
    glBegin(GL_POLYGON);

    glVertex2f(65.2, 41);
    glVertex2f(64, 41);
    glVertex2f(63.7, 40.5);
    glVertex2f(63.3, 40.5);
    glVertex2f(62.8, 39.2);
    glVertex2f(64, 39.2);
    glVertex2f(64.2, 39.75);
    glVertex2f(65.2, 39.75);


    glEnd();

    //7th big door

    //glColor3f(0, 0, 1);
    glBegin(GL_POLYGON);

    glVertex2f(81.6, 37);
    glVertex2f(81.6, 41.5);
    glVertex2f(83.3, 41.5);
    glVertex2f(83.3, 37);


    glEnd();

    // 6th window

    //glColor3f(0, 0, 1);
    glBegin(GL_POLYGON);

    glVertex2f(79.5, 39.8);
    glVertex2f(79.5, 41);
    glVertex2f(80.5, 41);
    glVertex2f(80.5, 39.8);



    glEnd();


    glPushMatrix();

    // 5th window
    glTranslatef(-2.1, 0, 0);
    //glColor3f(0, 0, 1);
    glBegin(GL_POLYGON);

    glVertex2f(79.5, 39.8);
    glVertex2f(79.5, 41);
    glVertex2f(80.5, 41);
    glVertex2f(80.5, 39.8);

    glEnd();

    glPopMatrix();

    // 4th window
    glPushMatrix();
    glTranslatef(-2.1 - 2.1, 0, 0);
    //glColor3f(0, 0, 1);
    glBegin(GL_POLYGON);

    glVertex2f(79.5, 39.8);
    glVertex2f(79.5, 41);
    glVertex2f(80.5, 41);
    glVertex2f(80.5, 39.8);

    glEnd();

    glPopMatrix();


    // 2nd window

    //glColor3f(0, 0, 1);
    glBegin(GL_POLYGON);

    glVertex2f(66.3, 39.75);
    glVertex2f(66.3, 41);
    glVertex2f(67.3, 41);
    glVertex2f(67.3, 39.75);


    glEnd();


    //silver color first

    glColor3f(0.84, 0.89, 0.92);
    glBegin(GL_POLYGON);

    glVertex2f(63.6, 36.7);
    glVertex2f(61.7, 34.3);
    glVertex2f(63.8, 35.8);
    glVertex2f(68.6, 35.8);
    glVertex2f(68.6, 36.7);

    glEnd();

    //silver color second

    glColor3f(0.84, 0.89, 0.92);
    glBegin(GL_POLYGON);

    glVertex2f(69.7, 35.8);
    glVertex2f(69.7, 36.7);
    glVertex2f(76.8, 36.7);
    glVertex2f(76.8, 35.8);

    glEnd();

    //silver color third

    glColor3f(0.84, 0.89, 0.92);
    glBegin(GL_POLYGON);

    glVertex2f(78, 35.8);
    glVertex2f(78, 36.7);
    glVertex2f(83.3, 36.7);
    glVertex2f(83.3, 35.8);

    glEnd();


    glPopMatrix();

}


// ID - 15
void train02() {


    glPushMatrix();
    glTranslatef(0, 1.5, 0);

    glBegin(GL_POLYGON);

    glColor3f(1, 0.65, 0.08);
    glVertex2f(86, 33.4);
    glVertex2f(86, 42);
    glVertex2f(112, 42);
    glVertex2f(112, 33.4);


    glEnd();




    // used the code from the first part of the bullet train to
    // the second train.. so factor is 28
    glTranslatef(28, 0, 0);

    //7th big door
    glColor3f(0.27, 0.29, 0.33);
    //glColor3f(0, 0, 1);
    glBegin(GL_POLYGON);

    glVertex2f(81.6, 37);
    glVertex2f(81.6, 41.5);
    glVertex2f(83.3, 41.5);
    glVertex2f(83.3, 37);


    glEnd();

    // 6th window

    //glColor3f(0, 0, 1);
    glBegin(GL_POLYGON);

    glVertex2f(79.5, 39.8);
    glVertex2f(79.5, 41);
    glVertex2f(80.5, 41);
    glVertex2f(80.5, 39.8);



    glEnd();


    glPushMatrix();

    // 5th window
    glTranslatef(-2.1, 0, 0);
    //glColor3f(0, 0, 1);
    glBegin(GL_POLYGON);

    glVertex2f(79.5, 39.8);
    glVertex2f(79.5, 41);
    glVertex2f(80.5, 41);
    glVertex2f(80.5, 39.8);

    glEnd();

    glPopMatrix();

    // 4th window
    glPushMatrix();
    glTranslatef(-2.1 - 2.1, 0, 0);
    //glColor3f(0, 0, 1);
    glBegin(GL_POLYGON);

    glVertex2f(79.5, 39.8);
    glVertex2f(79.5, 41);
    glVertex2f(80.5, 41);
    glVertex2f(80.5, 39.8);

    glEnd();

    glPopMatrix();


    glPopMatrix();


    ////////////////////////////////////

    // 3rd window
    glPushMatrix();
    glTranslatef(15, 1.5, 0);

    //glColor3f(0, 0, 1);
    glBegin(GL_POLYGON);

    glVertex2f(79.5, 39.8);
    glVertex2f(79.5, 41);
    glVertex2f(80.5, 41);
    glVertex2f(80.5, 39.8);



    glEnd();


    glPushMatrix();

    // 5th window
    glTranslatef(-2.1, 0, 0);
    //glColor3f(0, 0, 1);
    glBegin(GL_POLYGON);

    glVertex2f(79.5, 39.8);
    glVertex2f(79.5, 41);
    glVertex2f(80.5, 41);
    glVertex2f(80.5, 39.8);

    glEnd();

    glPopMatrix();

    // 4th window
    glPushMatrix();
    glTranslatef(-2.1 - 2.1, 0, 0);
    //glColor3f(0, 0, 1);
    glBegin(GL_POLYGON);

    glVertex2f(79.5, 39.8);
    glVertex2f(79.5, 41);
    glVertex2f(80.5, 41);
    glVertex2f(80.5, 39.8);

    glEnd();

    glPopMatrix();

    glPopMatrix();


    /////

    //used the code for the first train big door.. just translated 5 in x axis and 1.5 in y axix
    //1st big door
    //glColor3f(0, 0, 1);
    glPushMatrix();

    glTranslatef(5, 1.5, 0);
    glBegin(GL_POLYGON);

    glVertex2f(81.6, 37);
    glVertex2f(81.6, 41.5);
    glVertex2f(83.3, 41.5);
    glVertex2f(83.3, 37);

    glEnd();
    glPopMatrix();
}

//ID - 16
void train03() {

    glPushMatrix();

    glTranslatef(28, 0, 0);

    glPushMatrix();
    glTranslatef(0, 1.5, 0);

    glBegin(GL_POLYGON);

    glColor3f(1, 0.65, 0.08);
    glVertex2f(86, 33.4);
    glVertex2f(86, 42);
    glVertex2f(112, 42);
    glVertex2f(112, 33.4);


    glEnd();




    // used the code from the first part of the bullet train to
    // the second train.. so factor is 28
    glTranslatef(28, 0, 0);

    //7th big door
    glColor3f(0.27, 0.29, 0.33);
    //glColor3f(0, 0, 1);
    glBegin(GL_POLYGON);

    glVertex2f(81.6, 37);
    glVertex2f(81.6, 41.5);
    glVertex2f(83.3, 41.5);
    glVertex2f(83.3, 37);


    glEnd();

    // 6th window

    //glColor3f(0, 0, 1);
    glBegin(GL_POLYGON);

    glVertex2f(79.5, 39.8);
    glVertex2f(79.5, 41);
    glVertex2f(80.5, 41);
    glVertex2f(80.5, 39.8);



    glEnd();


    glPushMatrix();

    // 5th window
    glTranslatef(-2.1, 0, 0);
    //glColor3f(0, 0, 1);
    glBegin(GL_POLYGON);

    glVertex2f(79.5, 39.8);
    glVertex2f(79.5, 41);
    glVertex2f(80.5, 41);
    glVertex2f(80.5, 39.8);

    glEnd();

    glPopMatrix();

    // 4th window
    glPushMatrix();
    glTranslatef(-2.1 - 2.1, 0, 0);
    //glColor3f(0, 0, 1);
    glBegin(GL_POLYGON);

    glVertex2f(79.5, 39.8);
    glVertex2f(79.5, 41);
    glVertex2f(80.5, 41);
    glVertex2f(80.5, 39.8);

    glEnd();

    glPopMatrix();


    glPopMatrix();


    ////////////////////////////////////

    // 3rd window
    glPushMatrix();
    glTranslatef(15, 1.5, 0);

    //glColor3f(0, 0, 1);
    glBegin(GL_POLYGON);

    glVertex2f(79.5, 39.8);
    glVertex2f(79.5, 41);
    glVertex2f(80.5, 41);
    glVertex2f(80.5, 39.8);



    glEnd();


    glPushMatrix();

    // 5th window
    glTranslatef(-2.1, 0, 0);
    //glColor3f(0, 0, 1);
    glBegin(GL_POLYGON);

    glVertex2f(79.5, 39.8);
    glVertex2f(79.5, 41);
    glVertex2f(80.5, 41);
    glVertex2f(80.5, 39.8);

    glEnd();

    glPopMatrix();

    // 4th window
    glPushMatrix();
    glTranslatef(-2.1 - 2.1, 0, 0);
    //glColor3f(0, 0, 1);
    glBegin(GL_POLYGON);

    glVertex2f(79.5, 39.8);
    glVertex2f(79.5, 41);
    glVertex2f(80.5, 41);
    glVertex2f(80.5, 39.8);

    glEnd();

    glPopMatrix();

    glPopMatrix();


    /////

    //used the code for the first train big door.. just translated 5 in x axis and 1.5 in y axix
    //1st big door
    //glColor3f(0, 0, 1);
    glPushMatrix();

    glTranslatef(5, 1.5, 0);
    glBegin(GL_POLYGON);

    glVertex2f(81.6, 37);
    glVertex2f(81.6, 41.5);
    glVertex2f(83.3, 41.5);
    glVertex2f(83.3, 37);

    glEnd();
    glPopMatrix();


    glPopMatrix();
}

// ID - 17
void building_01() {


    //FIRST DOWN AREA OF BUILDING 01
    glBegin(GL_POLYGON);
    glColor3f(0.44, 0.49, 0.65);

    glVertex2f(6.4, 21.9);
    glVertex2f(6.4, 29.1);
    glVertex2f(19, 29.1);
    glVertex2f(19, 21.9);


    glEnd();

    // YELLOW AREA OF DOOR AND WINDOWS
    glColor3f(1, 0.77, 0.29);
    glBegin(GL_POLYGON);
    glVertex2f(13, 29.1);

    glVertex2f(7.2, 29.1);
    glVertex2f(7.2, 25.2);
    glVertex2f(10, 25.2);
    glVertex2f(10, 21.9);
    glVertex2f(13, 21.9);

    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(13, 29.1);
    glVertex2f(18.2, 29.1);
    glVertex2f(18.2, 25.2);
    glVertex2f(15.4, 25.2);
    glVertex2f(15.4, 21.9);
    glVertex2f(13, 21.9);


    glEnd();

    // YELLOW AREA ENDS HERE




    // DOOR OF BUILDING 01 START HERE

    glBegin(GL_POLYGON);
    glColor3f(0.16, 0.28, 0.35);

    glVertex2f(10.7, 21.9);
    glVertex2f(10.7, 29.1);
    glVertex2f(14.7, 29.1);
    glVertex2f(14.7, 21.9);


    glEnd();

    // DOOR OF BUILDING 01 END HERE

    // FIERST WINDOW OF BUIDLING 01 STARTS HERE

    glBegin(GL_POLYGON);
    glColor3f(0.16, 0.28, 0.35);

    glVertex2f(7.5, 25.5);
    glVertex2f(7.5, 29.1);
    glVertex2f(10, 29.1);
    glVertex2f(10, 25.5);


    glEnd();


    // SECOND WINDOW OF BUILDING 01 START HERE

    glBegin(GL_POLYGON);
    glColor3f(0.16, 0.28, 0.35);

    glVertex2f(15.4, 25.5);
    glVertex2f(17.9, 25.5);
    glVertex2f(17.9, 29.1);
    glVertex2f(15.4, 29.1);


    glEnd();

    // FIRST UPPER EXTENSION OF BUILDING 01

    glBegin(GL_POLYGON);
    glColor3f(0.81, 0.82, 0.82);

    glVertex2f(5, 29.1);
    glVertex2f(5, 29.4);
    glVertex2f(19, 29.4);
    glVertex2f(19, 29.1);


    glEnd();

    //SECOND UPPER EXTENTION OF BUILDING 01

    glBegin(GL_POLYGON);
    glColor3f(0.44, 0.49, 0.65);
    glVertex2f(5, 29.4);
    glVertex2f(5, 30);
    glVertex2f(19, 30);
    glVertex2f(19, 29.4);


    glEnd();

    //FIRST ROUNDED AREA OF BUIDLING 01 FORM RIGHT
    //EVERY ROUNDER AREA HAS A X AXIS VALUE OF .8
    glBegin(GL_POLYGON); // FIRST RED ROUNDD AREA
    glColor3f(0.93, 0.31, 0.33);

    glVertex2f(18.2, 29.1);
    glVertex2f(18.2, 27.4);
    glVertex2f(18.4, 27);
    glVertex2f(18.8, 27);
    glVertex2f(19, 27.4);
    glVertex2f(19, 29.1);


    glEnd();


    glPushMatrix();

    glTranslatef(-2 * .8, 0, 0);

    glBegin(GL_POLYGON); // SECOND RED ROUNDED AREA

    glColor3f(0.93, 0.31, 0.33);

    glVertex2f(18.2, 29.1);
    glVertex2f(18.2, 27.4);
    glVertex2f(18.4, 27);
    glVertex2f(18.8, 27);
    glVertex2f(19, 27.4);
    glVertex2f(19, 29.1);


    glEnd();

    glPopMatrix();


    glPushMatrix();

    glTranslatef(-4 * .8, 0, 0);

    glBegin(GL_POLYGON); // THIRD RED ROUNDED AREA

    glColor3f(0.93, 0.31, 0.33);

    glVertex2f(18.2, 29.1);
    glVertex2f(18.2, 27.4);
    glVertex2f(18.4, 27);
    glVertex2f(18.8, 27);
    glVertex2f(19, 27.4);
    glVertex2f(19, 29.1);


    glEnd();

    glPopMatrix();


    glPushMatrix();

    glTranslatef(-6 * .8, 0, 0);

    glBegin(GL_POLYGON); // FOURTH RED ROUNDED AREA

    glColor3f(0.93, 0.31, 0.33);

    glVertex2f(18.2, 29.1);
    glVertex2f(18.2, 27.4);
    glVertex2f(18.4, 27);
    glVertex2f(18.8, 27);
    glVertex2f(19, 27.4);
    glVertex2f(19, 29.1);


    glEnd();

    glPopMatrix();


    glPushMatrix();

    glTranslatef(-8 * .8, 0, 0);

    glBegin(GL_POLYGON); // FIFTH RED ROUNDED AREA

    glColor3f(0.93, 0.31, 0.33);

    glVertex2f(18.2, 29.1);
    glVertex2f(18.2, 27.4);
    glVertex2f(18.4, 27);
    glVertex2f(18.8, 27);
    glVertex2f(19, 27.4);
    glVertex2f(19, 29.1);


    glEnd();

    glPopMatrix();


    glPushMatrix();

    glTranslatef(-10 * .8, 0, 0);

    glBegin(GL_POLYGON); // SIXTH RED ROUNDED AREA

    glColor3f(0.93, 0.31, 0.33);

    glVertex2f(18.2, 29.1);
    glVertex2f(18.2, 27.4);
    glVertex2f(18.4, 27);
    glVertex2f(18.8, 27);
    glVertex2f(19, 27.4);
    glVertex2f(19, 29.1);


    glEnd();

    glPopMatrix();



    glPushMatrix();

    glTranslatef(-12 * .8, 0, 0);

    glBegin(GL_POLYGON); // SEVENTH RED ROUNDED AREA

    glColor3f(0.93, 0.31, 0.33);

    glVertex2f(18.2, 29.1);
    glVertex2f(18.2, 27.4);
    glVertex2f(18.4, 27);
    glVertex2f(18.8, 27);
    glVertex2f(19, 27.4);
    glVertex2f(19, 29.1);


    glEnd();

    glPopMatrix();


    glPushMatrix();

    glTranslatef(-14 * .8, 0, 0);

    glBegin(GL_POLYGON); // EIGTH RED ROUNDED AREA

    glColor3f(0.93, 0.31, 0.33);

    glVertex2f(18.2, 29.1);
    glVertex2f(18.2, 27.4);
    glVertex2f(18.4, 27);
    glVertex2f(18.8, 27);
    glVertex2f(19, 27.4);
    glVertex2f(19, 29.1);


    glEnd();

    glPopMatrix();



    //WHITE COLOR ROUNDED AREA START HERE

    glPushMatrix();

    glTranslatef(-1 * .8, 0, 0);

    glBegin(GL_POLYGON); // SECOND WHITE ROUNDED AREA

    glColor3f(1, 0.98, 0.89);

    glVertex2f(18.2, 29.1);
    glVertex2f(18.2, 27.4);
    glVertex2f(18.4, 27);
    glVertex2f(18.8, 27);
    glVertex2f(19, 27.4);
    glVertex2f(19, 29.1);


    glEnd();

    glPopMatrix();


    glPushMatrix();

    glTranslatef(-3 * .8, 0, 0);

    glBegin(GL_POLYGON); // THIRD WHITE ROUNDED AREA

    glColor3f(1, 0.98, 0.89);

    glVertex2f(18.2, 29.1);
    glVertex2f(18.2, 27.4);
    glVertex2f(18.4, 27);
    glVertex2f(18.8, 27);
    glVertex2f(19, 27.4);
    glVertex2f(19, 29.1);


    glEnd();

    glPopMatrix();


    glPushMatrix();

    glTranslatef(-5 * .8, 0, 0);

    glBegin(GL_POLYGON); // FOURTH WHITE ROUNDED AREA

    glColor3f(1, 0.98, 0.89);

    glVertex2f(18.2, 29.1);
    glVertex2f(18.2, 27.4);
    glVertex2f(18.4, 27);
    glVertex2f(18.8, 27);
    glVertex2f(19, 27.4);
    glVertex2f(19, 29.1);


    glEnd();

    glPopMatrix();


    glPushMatrix();

    glTranslatef(-7 * .8, 0, 0);

    glBegin(GL_POLYGON); // FIFTH WHITE ROUNDED AREA

    glColor3f(1, 0.98, 0.89);

    glVertex2f(18.2, 29.1);
    glVertex2f(18.2, 27.4);
    glVertex2f(18.4, 27);
    glVertex2f(18.8, 27);
    glVertex2f(19, 27.4);
    glVertex2f(19, 29.1);


    glEnd();

    glPopMatrix();


    glPushMatrix();

    glTranslatef(-9 * .8, 0, 0);

    glBegin(GL_POLYGON); // SIXTH WHITE ROUNDED AREA

    glColor3f(1, 0.98, 0.89);

    glVertex2f(18.2, 29.1);
    glVertex2f(18.2, 27.4);
    glVertex2f(18.4, 27);
    glVertex2f(18.8, 27);
    glVertex2f(19, 27.4);
    glVertex2f(19, 29.1);


    glEnd();

    glPopMatrix();



    glPushMatrix();

    glTranslatef(-11 * .8, 0, 0);

    glBegin(GL_POLYGON); // SEVENTH WHITE ROUNDED AREA

    glColor3f(1, 0.98, 0.89);

    glVertex2f(18.2, 29.1);
    glVertex2f(18.2, 27.4);
    glVertex2f(18.4, 27);
    glVertex2f(18.8, 27);
    glVertex2f(19, 27.4);
    glVertex2f(19, 29.1);


    glEnd();

    glPopMatrix();


    glPushMatrix();

    glTranslatef(-13 * .8, 0, 0);

    glBegin(GL_POLYGON); // EIGTH WHITE ROUNDED AREA

    glColor3f(1, 0.98, 0.89);

    glVertex2f(18.2, 29.1);
    glVertex2f(18.2, 27.4);
    glVertex2f(18.4, 27);
    glVertex2f(18.8, 27);
    glVertex2f(19, 27.4);
    glVertex2f(19, 29.1);


    glEnd();

    glPopMatrix();





}



// ID - 18 

void building_02() {


    //UPPER LOWER BODY
    glColor3f(0.67, 0.67, 0.51);
    glBegin(GL_POLYGON);

    glVertex2f(13.3, 21.9);
    glVertex2f(13.3, 58.8);
    glVertex2f(31.95, 58.8);
    glVertex2f(31.95, 21.9);

    glEnd();



    // 2ND UPPER LOWER BODY

    glColor3f(0.44, 0.44, 0.34);
    glBegin(GL_POLYGON);

    glVertex2f(12.45, 58.8);
    glVertex2f(12.45, 59.8);
    glVertex2f(32.8, 59.8);
    glVertex2f(32.8, 58.8);

    glEnd();


    //  3RD UPPER PORTION OF BUILDING 02

    glColor3f(0.67, 0.67, 0.51);
    glBegin(GL_POLYGON);

    glVertex2f(11, 59.8);
    glVertex2f(11, 61.5);
    glVertex2f(33.8, 61.5);
    glVertex2f(33.8, 59.8);

    glEnd();

    // THIN ARE BEFORE TRIANGLE TYPE AREA OF BUILDING 02
    glColor3f(0.44, 0.44, 0.34);
    glBegin(GL_POLYGON);

    glVertex2f(11, 60.7);
    glVertex2f(11, 61.5);
    glVertex2f(33.8, 61.5);
    glVertex2f(33.8, 60.7);

    glEnd();


    // TOP MOST TRIANGLE TYPE AREA OF BUILDING 02




    // FIVE SHADES OF TRIANGLE

    // FIRST SHADE


    glBegin(GL_POLYGON);

    glColor3f(0.67, 0.67, 0.51);
    glVertex2f(11, 61.5);
    glVertex2f(22.4, 66);
    glVertex2f(15.4, 61.5);

    glEnd();

    // SECOND SHADE
    glBegin(GL_POLYGON);

    glColor3f(0.73, 0.73, 0.55);
    glVertex2f(15.4, 61.5);
    glVertex2f(22.4, 66);
    glVertex2f(19.3, 61.5);

    glEnd();


    // THIRD SHADE
    glBegin(GL_POLYGON);

    glColor3f(0.67, 0.67, 0.51);
    glVertex2f(19.3, 61.5);
    glVertex2f(22.4, 66);
    glVertex2f(23.1, 61.5);

    glEnd();


    // FOURTH SHADE
    glBegin(GL_POLYGON);

    glColor3f(0.73, 0.73, 0.55);
    glVertex2f(23.1, 61.5);
    glVertex2f(22.4, 66);
    glVertex2f(28, 61.5);

    glEnd();


    // FIVTH SHADE
    glBegin(GL_POLYGON);
    glColor3f(0.67, 0.67, 0.51);

    glVertex2f(28, 61.5);
    glVertex2f(22.4, 66);
    glVertex2f(33.8, 61.5);

    glEnd();


    // WINDOWS OF BUILDING 02
    // I AM PRINTING THE WINDOWS IN ROW WISE


    glBegin(GL_POLYGON);
    glColor3f(0.85, 0.94, 0.96);

    glVertex2f(15.1, 56);
    glVertex2f(15.1, 58);
    glVertex2f(18.1, 58);
    glVertex2f(18.1, 56);

    glEnd();


    glLineWidth(2);
    glColor3f(0.44, 0.44, 0.34);

    glBegin(GL_LINES);

    glVertex2f(15.1, 56);
    glVertex2f(15.1, 58);

    glVertex2f(15.1, 58);
    glVertex2f(18.1, 58);

    glVertex2f(18.1, 58);
    glVertex2f(18.1, 56);

    glVertex2f(18.1, 56);
    glVertex2f(15.1, 56);

    glEnd();

    // VERTICAL LINE IN THE MIDDLE OF EACH WINDOW


    glLineWidth(3.5);
    glColor3f(0.44, 0.44, 0.34);

    glBegin(GL_LINES);
    glVertex2f(16.5, 58);
    glVertex2f(16.5, 56);
    glEnd();


    glPushMatrix();

    glTranslatef(1 * 4, 0, 0);

    glBegin(GL_POLYGON);
    glColor3f(0.85, 0.94, 0.96);

    glVertex2f(15.1, 56);
    glVertex2f(15.1, 58);
    glVertex2f(18.1, 58);
    glVertex2f(18.1, 56);

    glEnd();


    glLineWidth(2);
    glColor3f(0.44, 0.44, 0.34);

    glBegin(GL_LINES);

    glVertex2f(15.1, 56);
    glVertex2f(15.1, 58);

    glVertex2f(15.1, 58);
    glVertex2f(18.1, 58);

    glVertex2f(18.1, 58);
    glVertex2f(18.1, 56);

    glVertex2f(18.1, 56);
    glVertex2f(15.1, 56);

    glEnd();

    // VERTICAL LINE IN THE MIDDLE OF EACH WINDOW


    glLineWidth(3.5);
    glColor3f(0.44, 0.44, 0.34);

    glBegin(GL_LINES);
    glVertex2f(16.5, 58);
    glVertex2f(16.5, 56);
    glEnd();

    glPopMatrix();

    glPushMatrix();

    glTranslatef(2 * 4, 0, 0);

    glBegin(GL_POLYGON);
    glColor3f(0.85, 0.94, 0.96);

    glVertex2f(15.1, 56);
    glVertex2f(15.1, 58);
    glVertex2f(18.1, 58);
    glVertex2f(18.1, 56);

    glEnd();


    glLineWidth(2);
    glColor3f(0.44, 0.44, 0.34);

    glBegin(GL_LINES);

    glVertex2f(15.1, 56);
    glVertex2f(15.1, 58);

    glVertex2f(15.1, 58);
    glVertex2f(18.1, 58);

    glVertex2f(18.1, 58);
    glVertex2f(18.1, 56);

    glVertex2f(18.1, 56);
    glVertex2f(15.1, 56);

    glEnd();

    // VERTICAL LINE IN THE MIDDLE OF EACH WINDOW


    glLineWidth(3.5);
    glColor3f(0.44, 0.44, 0.34);

    glBegin(GL_LINES);
    glVertex2f(16.5, 58);
    glVertex2f(16.5, 56);
    glEnd();

    glPopMatrix();


    glPushMatrix();

    glTranslatef(3 * 4, 0, 0);

    glBegin(GL_POLYGON);
    glColor3f(0.85, 0.94, 0.96);

    glVertex2f(15.1, 56);
    glVertex2f(15.1, 58);
    glVertex2f(18.1, 58);
    glVertex2f(18.1, 56);

    glEnd();


    glLineWidth(2);
    glColor3f(0.44, 0.44, 0.34);

    glBegin(GL_LINES);

    glVertex2f(15.1, 56);
    glVertex2f(15.1, 58);

    glVertex2f(15.1, 58);
    glVertex2f(18.1, 58);

    glVertex2f(18.1, 58);
    glVertex2f(18.1, 56);

    glVertex2f(18.1, 56);
    glVertex2f(15.1, 56);

    glEnd();

    // VERTICAL LINE IN THE MIDDLE OF EACH WINDOW


    glLineWidth(3.5);
    glColor3f(0.44, 0.44, 0.34);

    glBegin(GL_LINES);
    glVertex2f(16.5, 58);
    glVertex2f(16.5, 56);
    glEnd();

    glPopMatrix();



    //2ND ROW START
    glPushMatrix();

    glTranslatef(1 * 0, 1 * -3, 0);

    glBegin(GL_POLYGON);
    glColor3f(0.85, 0.94, 0.96);

    glVertex2f(15.1, 56);
    glVertex2f(15.1, 58);
    glVertex2f(18.1, 58);
    glVertex2f(18.1, 56);

    glEnd();


    glLineWidth(2);
    glColor3f(0.44, 0.44, 0.34);

    glBegin(GL_LINES);

    glVertex2f(15.1, 56);
    glVertex2f(15.1, 58);

    glVertex2f(15.1, 58);
    glVertex2f(18.1, 58);

    glVertex2f(18.1, 58);
    glVertex2f(18.1, 56);

    glVertex2f(18.1, 56);
    glVertex2f(15.1, 56);

    glEnd();

    // VERTICAL LINE IN THE MIDDLE OF EACH WINDOW


    glLineWidth(3.5);
    glColor3f(0.44, 0.44, 0.34);

    glBegin(GL_LINES);
    glVertex2f(16.5, 58);
    glVertex2f(16.5, 56);
    glEnd();

    glPopMatrix();



    glPushMatrix();

    glTranslatef(1 * 4, 1 * -3, 0);

    glBegin(GL_POLYGON);
    glColor3f(0.85, 0.94, 0.96);

    glVertex2f(15.1, 56);
    glVertex2f(15.1, 58);
    glVertex2f(18.1, 58);
    glVertex2f(18.1, 56);

    glEnd();


    glLineWidth(2);
    glColor3f(0.44, 0.44, 0.34);

    glBegin(GL_LINES);

    glVertex2f(15.1, 56);
    glVertex2f(15.1, 58);

    glVertex2f(15.1, 58);
    glVertex2f(18.1, 58);

    glVertex2f(18.1, 58);
    glVertex2f(18.1, 56);

    glVertex2f(18.1, 56);
    glVertex2f(15.1, 56);

    glEnd();

    // VERTICAL LINE IN THE MIDDLE OF EACH WINDOW


    glLineWidth(3.5);
    glColor3f(0.44, 0.44, 0.34);

    glBegin(GL_LINES);
    glVertex2f(16.5, 58);
    glVertex2f(16.5, 56);
    glEnd();

    glPopMatrix();

    ///////

    glPushMatrix();

    glTranslatef(2 * 4, 1 * -3, 0);

    glBegin(GL_POLYGON);
    glColor3f(0.85, 0.94, 0.96);

    glVertex2f(15.1, 56);
    glVertex2f(15.1, 58);
    glVertex2f(18.1, 58);
    glVertex2f(18.1, 56);

    glEnd();


    glLineWidth(2);
    glColor3f(0.44, 0.44, 0.34);

    glBegin(GL_LINES);

    glVertex2f(15.1, 56);
    glVertex2f(15.1, 58);

    glVertex2f(15.1, 58);
    glVertex2f(18.1, 58);

    glVertex2f(18.1, 58);
    glVertex2f(18.1, 56);

    glVertex2f(18.1, 56);
    glVertex2f(15.1, 56);

    glEnd();

    // VERTICAL LINE IN THE MIDDLE OF EACH WINDOW


    glLineWidth(3.5);
    glColor3f(0.44, 0.44, 0.34);

    glBegin(GL_LINES);
    glVertex2f(16.5, 58);
    glVertex2f(16.5, 56);
    glEnd();

    glPopMatrix();




    glPushMatrix();

    glTranslatef(3 * 4, 1 * -3, 0);

    glBegin(GL_POLYGON);
    glColor3f(0.85, 0.94, 0.96);

    glVertex2f(15.1, 56);
    glVertex2f(15.1, 58);
    glVertex2f(18.1, 58);
    glVertex2f(18.1, 56);

    glEnd();


    glLineWidth(2);
    glColor3f(0.44, 0.44, 0.34);

    glBegin(GL_LINES);

    glVertex2f(15.1, 56);
    glVertex2f(15.1, 58);

    glVertex2f(15.1, 58);
    glVertex2f(18.1, 58);

    glVertex2f(18.1, 58);
    glVertex2f(18.1, 56);

    glVertex2f(18.1, 56);
    glVertex2f(15.1, 56);

    glEnd();

    // VERTICAL LINE IN THE MIDDLE OF EACH WINDOW


    glLineWidth(3.5);
    glColor3f(0.44, 0.44, 0.34);

    glBegin(GL_LINES);
    glVertex2f(16.5, 58);
    glVertex2f(16.5, 56);
    glEnd();

    glPopMatrix();


    // 3rd row start


    glPushMatrix();

    glTranslatef(0 * 4, 2 * -3, 0);

    glBegin(GL_POLYGON);
    glColor3f(0.85, 0.94, 0.96);

    glVertex2f(15.1, 56);
    glVertex2f(15.1, 58);
    glVertex2f(18.1, 58);
    glVertex2f(18.1, 56);

    glEnd();


    glLineWidth(2);
    glColor3f(0.44, 0.44, 0.34);

    glBegin(GL_LINES);

    glVertex2f(15.1, 56);
    glVertex2f(15.1, 58);

    glVertex2f(15.1, 58);
    glVertex2f(18.1, 58);

    glVertex2f(18.1, 58);
    glVertex2f(18.1, 56);

    glVertex2f(18.1, 56);
    glVertex2f(15.1, 56);

    glEnd();

    // VERTICAL LINE IN THE MIDDLE OF EACH WINDOW


    glLineWidth(3.5);
    glColor3f(0.44, 0.44, 0.34);

    glBegin(GL_LINES);
    glVertex2f(16.5, 58);
    glVertex2f(16.5, 56);
    glEnd();

    glPopMatrix();


    glPushMatrix();

    glTranslatef(1 * 4, 2 * -3, 0);

    glBegin(GL_POLYGON);
    glColor3f(0.85, 0.94, 0.96);

    glVertex2f(15.1, 56);
    glVertex2f(15.1, 58);
    glVertex2f(18.1, 58);
    glVertex2f(18.1, 56);

    glEnd();


    glLineWidth(2);
    glColor3f(0.44, 0.44, 0.34);

    glBegin(GL_LINES);

    glVertex2f(15.1, 56);
    glVertex2f(15.1, 58);

    glVertex2f(15.1, 58);
    glVertex2f(18.1, 58);

    glVertex2f(18.1, 58);
    glVertex2f(18.1, 56);

    glVertex2f(18.1, 56);
    glVertex2f(15.1, 56);

    glEnd();

    // VERTICAL LINE IN THE MIDDLE OF EACH WINDOW


    glLineWidth(3.5);
    glColor3f(0.44, 0.44, 0.34);

    glBegin(GL_LINES);
    glVertex2f(16.5, 58);
    glVertex2f(16.5, 56);
    glEnd();

    glPopMatrix();


    glPushMatrix();

    glTranslatef(2 * 4, 2 * -3, 0);

    glBegin(GL_POLYGON);
    glColor3f(0.85, 0.94, 0.96);

    glVertex2f(15.1, 56);
    glVertex2f(15.1, 58);
    glVertex2f(18.1, 58);
    glVertex2f(18.1, 56);

    glEnd();


    glLineWidth(2);
    glColor3f(0.44, 0.44, 0.34);

    glBegin(GL_LINES);

    glVertex2f(15.1, 56);
    glVertex2f(15.1, 58);

    glVertex2f(15.1, 58);
    glVertex2f(18.1, 58);

    glVertex2f(18.1, 58);
    glVertex2f(18.1, 56);

    glVertex2f(18.1, 56);
    glVertex2f(15.1, 56);

    glEnd();

    // VERTICAL LINE IN THE MIDDLE OF EACH WINDOW


    glLineWidth(3.5);
    glColor3f(0.44, 0.44, 0.34);

    glBegin(GL_LINES);
    glVertex2f(16.5, 58);
    glVertex2f(16.5, 56);
    glEnd();

    glPopMatrix();



    glPushMatrix();

    glTranslatef(3 * 4, 2 * -3, 0);

    glBegin(GL_POLYGON);
    glColor3f(0.85, 0.94, 0.96);

    glVertex2f(15.1, 56);
    glVertex2f(15.1, 58);
    glVertex2f(18.1, 58);
    glVertex2f(18.1, 56);

    glEnd();


    glLineWidth(2);
    glColor3f(0.44, 0.44, 0.34);

    glBegin(GL_LINES);

    glVertex2f(15.1, 56);
    glVertex2f(15.1, 58);

    glVertex2f(15.1, 58);
    glVertex2f(18.1, 58);

    glVertex2f(18.1, 58);
    glVertex2f(18.1, 56);

    glVertex2f(18.1, 56);
    glVertex2f(15.1, 56);

    glEnd();

    // VERTICAL LINE IN THE MIDDLE OF EACH WINDOW


    glLineWidth(3.5);
    glColor3f(0.44, 0.44, 0.34);

    glBegin(GL_LINES);
    glVertex2f(16.5, 58);
    glVertex2f(16.5, 56);
    glEnd();

    glPopMatrix();



    //4TH ROW START


    glPushMatrix();

    glTranslatef(0 * 4, 3 * -3, 0);

    glBegin(GL_POLYGON);
    glColor3f(0.85, 0.94, 0.96);

    glVertex2f(15.1, 56);
    glVertex2f(15.1, 58);
    glVertex2f(18.1, 58);
    glVertex2f(18.1, 56);

    glEnd();


    glLineWidth(2);
    glColor3f(0.44, 0.44, 0.34);

    glBegin(GL_LINES);

    glVertex2f(15.1, 56);
    glVertex2f(15.1, 58);

    glVertex2f(15.1, 58);
    glVertex2f(18.1, 58);

    glVertex2f(18.1, 58);
    glVertex2f(18.1, 56);

    glVertex2f(18.1, 56);
    glVertex2f(15.1, 56);

    glEnd();

    // VERTICAL LINE IN THE MIDDLE OF EACH WINDOW


    glLineWidth(3.5);
    glColor3f(0.44, 0.44, 0.34);

    glBegin(GL_LINES);
    glVertex2f(16.5, 58);
    glVertex2f(16.5, 56);
    glEnd();

    glPopMatrix();


    glPushMatrix();

    glTranslatef(1 * 4, 3 * -3, 0);

    glBegin(GL_POLYGON);
    glColor3f(0.85, 0.94, 0.96);

    glVertex2f(15.1, 56);
    glVertex2f(15.1, 58);
    glVertex2f(18.1, 58);
    glVertex2f(18.1, 56);

    glEnd();


    glLineWidth(2);
    glColor3f(0.44, 0.44, 0.34);

    glBegin(GL_LINES);

    glVertex2f(15.1, 56);
    glVertex2f(15.1, 58);

    glVertex2f(15.1, 58);
    glVertex2f(18.1, 58);

    glVertex2f(18.1, 58);
    glVertex2f(18.1, 56);

    glVertex2f(18.1, 56);
    glVertex2f(15.1, 56);

    glEnd();

    // VERTICAL LINE IN THE MIDDLE OF EACH WINDOW


    glLineWidth(3.5);
    glColor3f(0.44, 0.44, 0.34);

    glBegin(GL_LINES);
    glVertex2f(16.5, 58);
    glVertex2f(16.5, 56);
    glEnd();

    glPopMatrix();


    glPushMatrix();

    glTranslatef(2 * 4, 3 * -3, 0);

    glBegin(GL_POLYGON);
    glColor3f(0.85, 0.94, 0.96);

    glVertex2f(15.1, 56);
    glVertex2f(15.1, 58);
    glVertex2f(18.1, 58);
    glVertex2f(18.1, 56);

    glEnd();


    glLineWidth(2);
    glColor3f(0.44, 0.44, 0.34);

    glBegin(GL_LINES);

    glVertex2f(15.1, 56);
    glVertex2f(15.1, 58);

    glVertex2f(15.1, 58);
    glVertex2f(18.1, 58);

    glVertex2f(18.1, 58);
    glVertex2f(18.1, 56);

    glVertex2f(18.1, 56);
    glVertex2f(15.1, 56);

    glEnd();

    // VERTICAL LINE IN THE MIDDLE OF EACH WINDOW


    glLineWidth(3.5);
    glColor3f(0.44, 0.44, 0.34);

    glBegin(GL_LINES);
    glVertex2f(16.5, 58);
    glVertex2f(16.5, 56);
    glEnd();

    glPopMatrix();


    glPushMatrix();

    glTranslatef(3 * 4, 3 * -3, 0);

    glBegin(GL_POLYGON);
    glColor3f(0.85, 0.94, 0.96);

    glVertex2f(15.1, 56);
    glVertex2f(15.1, 58);
    glVertex2f(18.1, 58);
    glVertex2f(18.1, 56);

    glEnd();


    glLineWidth(2);
    glColor3f(0.44, 0.44, 0.34);

    glBegin(GL_LINES);

    glVertex2f(15.1, 56);
    glVertex2f(15.1, 58);

    glVertex2f(15.1, 58);
    glVertex2f(18.1, 58);

    glVertex2f(18.1, 58);
    glVertex2f(18.1, 56);

    glVertex2f(18.1, 56);
    glVertex2f(15.1, 56);

    glEnd();

    // VERTICAL LINE IN THE MIDDLE OF EACH WINDOW


    glLineWidth(3.5);
    glColor3f(0.44, 0.44, 0.34);

    glBegin(GL_LINES);
    glVertex2f(16.5, 58);
    glVertex2f(16.5, 56);
    glEnd();

    glPopMatrix();



    glPushMatrix();

    glTranslatef(0, -12, 0);


    // WINDOWS OF BUILDING 02
   // I AM PRINTING THE WINDOWS IN ROW WISE


    glBegin(GL_POLYGON);
    glColor3f(0.85, 0.94, 0.96);

    glVertex2f(15.1, 56);
    glVertex2f(15.1, 58);
    glVertex2f(18.1, 58);
    glVertex2f(18.1, 56);

    glEnd();


    glLineWidth(2);
    glColor3f(0.44, 0.44, 0.34);

    glBegin(GL_LINES);

    glVertex2f(15.1, 56);
    glVertex2f(15.1, 58);

    glVertex2f(15.1, 58);
    glVertex2f(18.1, 58);

    glVertex2f(18.1, 58);
    glVertex2f(18.1, 56);

    glVertex2f(18.1, 56);
    glVertex2f(15.1, 56);

    glEnd();

    // VERTICAL LINE IN THE MIDDLE OF EACH WINDOW


    glLineWidth(3.5);
    glColor3f(0.44, 0.44, 0.34);

    glBegin(GL_LINES);
    glVertex2f(16.5, 58);
    glVertex2f(16.5, 56);
    glEnd();


    glPushMatrix();

    glTranslatef(1 * 4, 0, 0);

    glBegin(GL_POLYGON);
    glColor3f(0.85, 0.94, 0.96);

    glVertex2f(15.1, 56);
    glVertex2f(15.1, 58);
    glVertex2f(18.1, 58);
    glVertex2f(18.1, 56);

    glEnd();


    glLineWidth(2);
    glColor3f(0.44, 0.44, 0.34);

    glBegin(GL_LINES);

    glVertex2f(15.1, 56);
    glVertex2f(15.1, 58);

    glVertex2f(15.1, 58);
    glVertex2f(18.1, 58);

    glVertex2f(18.1, 58);
    glVertex2f(18.1, 56);

    glVertex2f(18.1, 56);
    glVertex2f(15.1, 56);

    glEnd();

    // VERTICAL LINE IN THE MIDDLE OF EACH WINDOW


    glLineWidth(3.5);
    glColor3f(0.44, 0.44, 0.34);

    glBegin(GL_LINES);
    glVertex2f(16.5, 58);
    glVertex2f(16.5, 56);
    glEnd();

    glPopMatrix();

    glPushMatrix();

    glTranslatef(2 * 4, 0, 0);

    glBegin(GL_POLYGON);
    glColor3f(0.85, 0.94, 0.96);

    glVertex2f(15.1, 56);
    glVertex2f(15.1, 58);
    glVertex2f(18.1, 58);
    glVertex2f(18.1, 56);

    glEnd();


    glLineWidth(2);
    glColor3f(0.44, 0.44, 0.34);

    glBegin(GL_LINES);

    glVertex2f(15.1, 56);
    glVertex2f(15.1, 58);

    glVertex2f(15.1, 58);
    glVertex2f(18.1, 58);

    glVertex2f(18.1, 58);
    glVertex2f(18.1, 56);

    glVertex2f(18.1, 56);
    glVertex2f(15.1, 56);

    glEnd();

    // VERTICAL LINE IN THE MIDDLE OF EACH WINDOW


    glLineWidth(3.5);
    glColor3f(0.44, 0.44, 0.34);

    glBegin(GL_LINES);
    glVertex2f(16.5, 58);
    glVertex2f(16.5, 56);
    glEnd();

    glPopMatrix();


    glPushMatrix();

    glTranslatef(3 * 4, 0, 0);

    glBegin(GL_POLYGON);
    glColor3f(0.85, 0.94, 0.96);

    glVertex2f(15.1, 56);
    glVertex2f(15.1, 58);
    glVertex2f(18.1, 58);
    glVertex2f(18.1, 56);

    glEnd();


    glLineWidth(2);
    glColor3f(0.44, 0.44, 0.34);

    glBegin(GL_LINES);

    glVertex2f(15.1, 56);
    glVertex2f(15.1, 58);

    glVertex2f(15.1, 58);
    glVertex2f(18.1, 58);

    glVertex2f(18.1, 58);
    glVertex2f(18.1, 56);

    glVertex2f(18.1, 56);
    glVertex2f(15.1, 56);

    glEnd();

    // VERTICAL LINE IN THE MIDDLE OF EACH WINDOW


    glLineWidth(3.5);
    glColor3f(0.44, 0.44, 0.34);

    glBegin(GL_LINES);
    glVertex2f(16.5, 58);
    glVertex2f(16.5, 56);
    glEnd();

    glPopMatrix();



    //2ND ROW START
    glPushMatrix();

    glTranslatef(1 * 0, 1 * -3, 0);

    glBegin(GL_POLYGON);
    glColor3f(0.85, 0.94, 0.96);

    glVertex2f(15.1, 56);
    glVertex2f(15.1, 58);
    glVertex2f(18.1, 58);
    glVertex2f(18.1, 56);

    glEnd();


    glLineWidth(2);
    glColor3f(0.44, 0.44, 0.34);

    glBegin(GL_LINES);

    glVertex2f(15.1, 56);
    glVertex2f(15.1, 58);

    glVertex2f(15.1, 58);
    glVertex2f(18.1, 58);

    glVertex2f(18.1, 58);
    glVertex2f(18.1, 56);

    glVertex2f(18.1, 56);
    glVertex2f(15.1, 56);

    glEnd();

    // VERTICAL LINE IN THE MIDDLE OF EACH WINDOW


    glLineWidth(3.5);
    glColor3f(0.44, 0.44, 0.34);

    glBegin(GL_LINES);
    glVertex2f(16.5, 58);
    glVertex2f(16.5, 56);
    glEnd();

    glPopMatrix();



    glPushMatrix();

    glTranslatef(1 * 4, 1 * -3, 0);

    glBegin(GL_POLYGON);
    glColor3f(0.85, 0.94, 0.96);

    glVertex2f(15.1, 56);
    glVertex2f(15.1, 58);
    glVertex2f(18.1, 58);
    glVertex2f(18.1, 56);

    glEnd();


    glLineWidth(2);
    glColor3f(0.44, 0.44, 0.34);

    glBegin(GL_LINES);

    glVertex2f(15.1, 56);
    glVertex2f(15.1, 58);

    glVertex2f(15.1, 58);
    glVertex2f(18.1, 58);

    glVertex2f(18.1, 58);
    glVertex2f(18.1, 56);

    glVertex2f(18.1, 56);
    glVertex2f(15.1, 56);

    glEnd();

    // VERTICAL LINE IN THE MIDDLE OF EACH WINDOW


    glLineWidth(3.5);
    glColor3f(0.44, 0.44, 0.34);

    glBegin(GL_LINES);
    glVertex2f(16.5, 58);
    glVertex2f(16.5, 56);
    glEnd();

    glPopMatrix();

    ///////

    glPushMatrix();

    glTranslatef(2 * 4, 1 * -3, 0);

    glBegin(GL_POLYGON);
    glColor3f(0.85, 0.94, 0.96);

    glVertex2f(15.1, 56);
    glVertex2f(15.1, 58);
    glVertex2f(18.1, 58);
    glVertex2f(18.1, 56);

    glEnd();


    glLineWidth(2);
    glColor3f(0.44, 0.44, 0.34);

    glBegin(GL_LINES);

    glVertex2f(15.1, 56);
    glVertex2f(15.1, 58);

    glVertex2f(15.1, 58);
    glVertex2f(18.1, 58);

    glVertex2f(18.1, 58);
    glVertex2f(18.1, 56);

    glVertex2f(18.1, 56);
    glVertex2f(15.1, 56);

    glEnd();

    // VERTICAL LINE IN THE MIDDLE OF EACH WINDOW


    glLineWidth(3.5);
    glColor3f(0.44, 0.44, 0.34);

    glBegin(GL_LINES);
    glVertex2f(16.5, 58);
    glVertex2f(16.5, 56);
    glEnd();

    glPopMatrix();




    glPushMatrix();

    glTranslatef(3 * 4, 1 * -3, 0);

    glBegin(GL_POLYGON);
    glColor3f(0.85, 0.94, 0.96);

    glVertex2f(15.1, 56);
    glVertex2f(15.1, 58);
    glVertex2f(18.1, 58);
    glVertex2f(18.1, 56);

    glEnd();


    glLineWidth(2);
    glColor3f(0.44, 0.44, 0.34);

    glBegin(GL_LINES);

    glVertex2f(15.1, 56);
    glVertex2f(15.1, 58);

    glVertex2f(15.1, 58);
    glVertex2f(18.1, 58);

    glVertex2f(18.1, 58);
    glVertex2f(18.1, 56);

    glVertex2f(18.1, 56);
    glVertex2f(15.1, 56);

    glEnd();

    // VERTICAL LINE IN THE MIDDLE OF EACH WINDOW


    glLineWidth(3.5);
    glColor3f(0.44, 0.44, 0.34);

    glBegin(GL_LINES);
    glVertex2f(16.5, 58);
    glVertex2f(16.5, 56);
    glEnd();

    glPopMatrix();


    // 3rd row start


    glPushMatrix();

    glTranslatef(0 * 4, 2 * -3, 0);

    glBegin(GL_POLYGON);
    glColor3f(0.85, 0.94, 0.96);

    glVertex2f(15.1, 56);
    glVertex2f(15.1, 58);
    glVertex2f(18.1, 58);
    glVertex2f(18.1, 56);

    glEnd();


    glLineWidth(2);
    glColor3f(0.44, 0.44, 0.34);

    glBegin(GL_LINES);

    glVertex2f(15.1, 56);
    glVertex2f(15.1, 58);

    glVertex2f(15.1, 58);
    glVertex2f(18.1, 58);

    glVertex2f(18.1, 58);
    glVertex2f(18.1, 56);

    glVertex2f(18.1, 56);
    glVertex2f(15.1, 56);

    glEnd();

    // VERTICAL LINE IN THE MIDDLE OF EACH WINDOW


    glLineWidth(3.5);
    glColor3f(0.44, 0.44, 0.34);

    glBegin(GL_LINES);
    glVertex2f(16.5, 58);
    glVertex2f(16.5, 56);
    glEnd();

    glPopMatrix();


    glPushMatrix();

    glTranslatef(1 * 4, 2 * -3, 0);

    glBegin(GL_POLYGON);
    glColor3f(0.85, 0.94, 0.96);

    glVertex2f(15.1, 56);
    glVertex2f(15.1, 58);
    glVertex2f(18.1, 58);
    glVertex2f(18.1, 56);

    glEnd();


    glLineWidth(2);
    glColor3f(0.44, 0.44, 0.34);

    glBegin(GL_LINES);

    glVertex2f(15.1, 56);
    glVertex2f(15.1, 58);

    glVertex2f(15.1, 58);
    glVertex2f(18.1, 58);

    glVertex2f(18.1, 58);
    glVertex2f(18.1, 56);

    glVertex2f(18.1, 56);
    glVertex2f(15.1, 56);

    glEnd();

    // VERTICAL LINE IN THE MIDDLE OF EACH WINDOW


    glLineWidth(3.5);
    glColor3f(0.44, 0.44, 0.34);

    glBegin(GL_LINES);
    glVertex2f(16.5, 58);
    glVertex2f(16.5, 56);
    glEnd();

    glPopMatrix();


    glPushMatrix();

    glTranslatef(2 * 4, 2 * -3, 0);

    glBegin(GL_POLYGON);
    glColor3f(0.85, 0.94, 0.96);

    glVertex2f(15.1, 56);
    glVertex2f(15.1, 58);
    glVertex2f(18.1, 58);
    glVertex2f(18.1, 56);

    glEnd();


    glLineWidth(2);
    glColor3f(0.44, 0.44, 0.34);

    glBegin(GL_LINES);

    glVertex2f(15.1, 56);
    glVertex2f(15.1, 58);

    glVertex2f(15.1, 58);
    glVertex2f(18.1, 58);

    glVertex2f(18.1, 58);
    glVertex2f(18.1, 56);

    glVertex2f(18.1, 56);
    glVertex2f(15.1, 56);

    glEnd();

    // VERTICAL LINE IN THE MIDDLE OF EACH WINDOW


    glLineWidth(3.5);
    glColor3f(0.44, 0.44, 0.34);

    glBegin(GL_LINES);
    glVertex2f(16.5, 58);
    glVertex2f(16.5, 56);
    glEnd();

    glPopMatrix();



    glPushMatrix();

    glTranslatef(3 * 4, 2 * -3, 0);

    glBegin(GL_POLYGON);
    glColor3f(0.85, 0.94, 0.96);

    glVertex2f(15.1, 56);
    glVertex2f(15.1, 58);
    glVertex2f(18.1, 58);
    glVertex2f(18.1, 56);

    glEnd();


    glLineWidth(2);
    glColor3f(0.44, 0.44, 0.34);

    glBegin(GL_LINES);

    glVertex2f(15.1, 56);
    glVertex2f(15.1, 58);

    glVertex2f(15.1, 58);
    glVertex2f(18.1, 58);

    glVertex2f(18.1, 58);
    glVertex2f(18.1, 56);

    glVertex2f(18.1, 56);
    glVertex2f(15.1, 56);

    glEnd();

    // VERTICAL LINE IN THE MIDDLE OF EACH WINDOW


    glLineWidth(3.5);
    glColor3f(0.44, 0.44, 0.34);

    glBegin(GL_LINES);
    glVertex2f(16.5, 58);
    glVertex2f(16.5, 56);
    glEnd();

    glPopMatrix();



    //4TH ROW START


    glPushMatrix();

    glTranslatef(0 * 4, 3 * -3, 0);

    glBegin(GL_POLYGON);
    glColor3f(0.85, 0.94, 0.96);

    glVertex2f(15.1, 56);
    glVertex2f(15.1, 58);
    glVertex2f(18.1, 58);
    glVertex2f(18.1, 56);

    glEnd();


    glLineWidth(2);
    glColor3f(0.44, 0.44, 0.34);

    glBegin(GL_LINES);

    glVertex2f(15.1, 56);
    glVertex2f(15.1, 58);

    glVertex2f(15.1, 58);
    glVertex2f(18.1, 58);

    glVertex2f(18.1, 58);
    glVertex2f(18.1, 56);

    glVertex2f(18.1, 56);
    glVertex2f(15.1, 56);

    glEnd();

    // VERTICAL LINE IN THE MIDDLE OF EACH WINDOW


    glLineWidth(3.5);
    glColor3f(0.44, 0.44, 0.34);

    glBegin(GL_LINES);
    glVertex2f(16.5, 58);
    glVertex2f(16.5, 56);
    glEnd();

    glPopMatrix();


    glPushMatrix();

    glTranslatef(1 * 4, 3 * -3, 0);

    glBegin(GL_POLYGON);
    glColor3f(0.85, 0.94, 0.96);

    glVertex2f(15.1, 56);
    glVertex2f(15.1, 58);
    glVertex2f(18.1, 58);
    glVertex2f(18.1, 56);

    glEnd();


    glLineWidth(2);
    glColor3f(0.44, 0.44, 0.34);

    glBegin(GL_LINES);

    glVertex2f(15.1, 56);
    glVertex2f(15.1, 58);

    glVertex2f(15.1, 58);
    glVertex2f(18.1, 58);

    glVertex2f(18.1, 58);
    glVertex2f(18.1, 56);

    glVertex2f(18.1, 56);
    glVertex2f(15.1, 56);

    glEnd();

    // VERTICAL LINE IN THE MIDDLE OF EACH WINDOW


    glLineWidth(3.5);
    glColor3f(0.44, 0.44, 0.34);

    glBegin(GL_LINES);
    glVertex2f(16.5, 58);
    glVertex2f(16.5, 56);
    glEnd();

    glPopMatrix();


    glPushMatrix();

    glTranslatef(2 * 4, 3 * -3, 0);

    glBegin(GL_POLYGON);
    glColor3f(0.85, 0.94, 0.96);

    glVertex2f(15.1, 56);
    glVertex2f(15.1, 58);
    glVertex2f(18.1, 58);
    glVertex2f(18.1, 56);

    glEnd();


    glLineWidth(2);
    glColor3f(0.44, 0.44, 0.34);

    glBegin(GL_LINES);

    glVertex2f(15.1, 56);
    glVertex2f(15.1, 58);

    glVertex2f(15.1, 58);
    glVertex2f(18.1, 58);

    glVertex2f(18.1, 58);
    glVertex2f(18.1, 56);

    glVertex2f(18.1, 56);
    glVertex2f(15.1, 56);

    glEnd();

    // VERTICAL LINE IN THE MIDDLE OF EACH WINDOW


    glLineWidth(3.5);
    glColor3f(0.44, 0.44, 0.34);

    glBegin(GL_LINES);
    glVertex2f(16.5, 58);
    glVertex2f(16.5, 56);
    glEnd();

    glPopMatrix();


    glPushMatrix();

    glTranslatef(3 * 4, 3 * -3, 0);

    glBegin(GL_POLYGON);
    glColor3f(0.85, 0.94, 0.96);

    glVertex2f(15.1, 56);
    glVertex2f(15.1, 58);
    glVertex2f(18.1, 58);
    glVertex2f(18.1, 56);

    glEnd();


    glLineWidth(2);
    glColor3f(0.44, 0.44, 0.34);

    glBegin(GL_LINES);

    glVertex2f(15.1, 56);
    glVertex2f(15.1, 58);

    glVertex2f(15.1, 58);
    glVertex2f(18.1, 58);

    glVertex2f(18.1, 58);
    glVertex2f(18.1, 56);

    glVertex2f(18.1, 56);
    glVertex2f(15.1, 56);

    glEnd();

    // VERTICAL LINE IN THE MIDDLE OF EACH WINDOW


    glLineWidth(3.5);
    glColor3f(0.44, 0.44, 0.34);

    glBegin(GL_LINES);
    glVertex2f(16.5, 58);
    glVertex2f(16.5, 56);
    glEnd();

    glPopMatrix();


    glPopMatrix();



    glPushMatrix();
    glTranslatef(0, -24, 0);

    // WINDOWS OF BUILDING 02
   // I AM PRINTING THE WINDOWS IN ROW WISE


    glBegin(GL_POLYGON);
    glColor3f(0.85, 0.94, 0.96);

    glVertex2f(15.1, 56);
    glVertex2f(15.1, 58);
    glVertex2f(18.1, 58);
    glVertex2f(18.1, 56);

    glEnd();


    glLineWidth(2);
    glColor3f(0.44, 0.44, 0.34);

    glBegin(GL_LINES);

    glVertex2f(15.1, 56);
    glVertex2f(15.1, 58);

    glVertex2f(15.1, 58);
    glVertex2f(18.1, 58);

    glVertex2f(18.1, 58);
    glVertex2f(18.1, 56);

    glVertex2f(18.1, 56);
    glVertex2f(15.1, 56);

    glEnd();

    // VERTICAL LINE IN THE MIDDLE OF EACH WINDOW


    glLineWidth(3.5);
    glColor3f(0.44, 0.44, 0.34);

    glBegin(GL_LINES);
    glVertex2f(16.5, 58);
    glVertex2f(16.5, 56);
    glEnd();


    glPushMatrix();

    glTranslatef(1 * 4, 0, 0);

    glBegin(GL_POLYGON);
    glColor3f(0.85, 0.94, 0.96);

    glVertex2f(15.1, 56);
    glVertex2f(15.1, 58);
    glVertex2f(18.1, 58);
    glVertex2f(18.1, 56);

    glEnd();


    glLineWidth(2);
    glColor3f(0.44, 0.44, 0.34);

    glBegin(GL_LINES);

    glVertex2f(15.1, 56);
    glVertex2f(15.1, 58);

    glVertex2f(15.1, 58);
    glVertex2f(18.1, 58);

    glVertex2f(18.1, 58);
    glVertex2f(18.1, 56);

    glVertex2f(18.1, 56);
    glVertex2f(15.1, 56);

    glEnd();

    // VERTICAL LINE IN THE MIDDLE OF EACH WINDOW


    glLineWidth(3.5);
    glColor3f(0.44, 0.44, 0.34);

    glBegin(GL_LINES);
    glVertex2f(16.5, 58);
    glVertex2f(16.5, 56);
    glEnd();

    glPopMatrix();

    glPushMatrix();

    glTranslatef(2 * 4, 0, 0);

    glBegin(GL_POLYGON);
    glColor3f(0.85, 0.94, 0.96);

    glVertex2f(15.1, 56);
    glVertex2f(15.1, 58);
    glVertex2f(18.1, 58);
    glVertex2f(18.1, 56);

    glEnd();


    glLineWidth(2);
    glColor3f(0.44, 0.44, 0.34);

    glBegin(GL_LINES);

    glVertex2f(15.1, 56);
    glVertex2f(15.1, 58);

    glVertex2f(15.1, 58);
    glVertex2f(18.1, 58);

    glVertex2f(18.1, 58);
    glVertex2f(18.1, 56);

    glVertex2f(18.1, 56);
    glVertex2f(15.1, 56);

    glEnd();

    // VERTICAL LINE IN THE MIDDLE OF EACH WINDOW


    glLineWidth(3.5);
    glColor3f(0.44, 0.44, 0.34);

    glBegin(GL_LINES);
    glVertex2f(16.5, 58);
    glVertex2f(16.5, 56);
    glEnd();

    glPopMatrix();


    glPushMatrix();

    glTranslatef(3 * 4, 0, 0);

    glBegin(GL_POLYGON);
    glColor3f(0.85, 0.94, 0.96);

    glVertex2f(15.1, 56);
    glVertex2f(15.1, 58);
    glVertex2f(18.1, 58);
    glVertex2f(18.1, 56);

    glEnd();


    glLineWidth(2);
    glColor3f(0.44, 0.44, 0.34);

    glBegin(GL_LINES);

    glVertex2f(15.1, 56);
    glVertex2f(15.1, 58);

    glVertex2f(15.1, 58);
    glVertex2f(18.1, 58);

    glVertex2f(18.1, 58);
    glVertex2f(18.1, 56);

    glVertex2f(18.1, 56);
    glVertex2f(15.1, 56);

    glEnd();

    // VERTICAL LINE IN THE MIDDLE OF EACH WINDOW


    glLineWidth(3.5);
    glColor3f(0.44, 0.44, 0.34);

    glBegin(GL_LINES);
    glVertex2f(16.5, 58);
    glVertex2f(16.5, 56);
    glEnd();

    glPopMatrix();



    //2ND ROW START
    glPushMatrix();

    glTranslatef(1 * 0, 1 * -3, 0);

    glBegin(GL_POLYGON);
    glColor3f(0.85, 0.94, 0.96);

    glVertex2f(15.1, 56);
    glVertex2f(15.1, 58);
    glVertex2f(18.1, 58);
    glVertex2f(18.1, 56);

    glEnd();


    glLineWidth(2);
    glColor3f(0.44, 0.44, 0.34);

    glBegin(GL_LINES);

    glVertex2f(15.1, 56);
    glVertex2f(15.1, 58);

    glVertex2f(15.1, 58);
    glVertex2f(18.1, 58);

    glVertex2f(18.1, 58);
    glVertex2f(18.1, 56);

    glVertex2f(18.1, 56);
    glVertex2f(15.1, 56);

    glEnd();

    // VERTICAL LINE IN THE MIDDLE OF EACH WINDOW


    glLineWidth(3.5);
    glColor3f(0.44, 0.44, 0.34);

    glBegin(GL_LINES);
    glVertex2f(16.5, 58);
    glVertex2f(16.5, 56);
    glEnd();

    glPopMatrix();



    glPushMatrix();

    glTranslatef(1 * 4, 1 * -3, 0);

    glBegin(GL_POLYGON);
    glColor3f(0.85, 0.94, 0.96);

    glVertex2f(15.1, 56);
    glVertex2f(15.1, 58);
    glVertex2f(18.1, 58);
    glVertex2f(18.1, 56);

    glEnd();


    glLineWidth(2);
    glColor3f(0.44, 0.44, 0.34);

    glBegin(GL_LINES);

    glVertex2f(15.1, 56);
    glVertex2f(15.1, 58);

    glVertex2f(15.1, 58);
    glVertex2f(18.1, 58);

    glVertex2f(18.1, 58);
    glVertex2f(18.1, 56);

    glVertex2f(18.1, 56);
    glVertex2f(15.1, 56);

    glEnd();

    // VERTICAL LINE IN THE MIDDLE OF EACH WINDOW


    glLineWidth(3.5);
    glColor3f(0.44, 0.44, 0.34);

    glBegin(GL_LINES);
    glVertex2f(16.5, 58);
    glVertex2f(16.5, 56);
    glEnd();

    glPopMatrix();

    ///////

    glPushMatrix();

    glTranslatef(2 * 4, 1 * -3, 0);

    glBegin(GL_POLYGON);
    glColor3f(0.85, 0.94, 0.96);

    glVertex2f(15.1, 56);
    glVertex2f(15.1, 58);
    glVertex2f(18.1, 58);
    glVertex2f(18.1, 56);

    glEnd();


    glLineWidth(2);
    glColor3f(0.44, 0.44, 0.34);

    glBegin(GL_LINES);

    glVertex2f(15.1, 56);
    glVertex2f(15.1, 58);

    glVertex2f(15.1, 58);
    glVertex2f(18.1, 58);

    glVertex2f(18.1, 58);
    glVertex2f(18.1, 56);

    glVertex2f(18.1, 56);
    glVertex2f(15.1, 56);

    glEnd();

    // VERTICAL LINE IN THE MIDDLE OF EACH WINDOW


    glLineWidth(3.5);
    glColor3f(0.44, 0.44, 0.34);

    glBegin(GL_LINES);
    glVertex2f(16.5, 58);
    glVertex2f(16.5, 56);
    glEnd();

    glPopMatrix();




    glPushMatrix();

    glTranslatef(3 * 4, 1 * -3, 0);

    glBegin(GL_POLYGON);
    glColor3f(0.85, 0.94, 0.96);

    glVertex2f(15.1, 56);
    glVertex2f(15.1, 58);
    glVertex2f(18.1, 58);
    glVertex2f(18.1, 56);

    glEnd();


    glLineWidth(2);
    glColor3f(0.44, 0.44, 0.34);

    glBegin(GL_LINES);

    glVertex2f(15.1, 56);
    glVertex2f(15.1, 58);

    glVertex2f(15.1, 58);
    glVertex2f(18.1, 58);

    glVertex2f(18.1, 58);
    glVertex2f(18.1, 56);

    glVertex2f(18.1, 56);
    glVertex2f(15.1, 56);

    glEnd();

    // VERTICAL LINE IN THE MIDDLE OF EACH WINDOW


    glLineWidth(3.5);
    glColor3f(0.44, 0.44, 0.34);

    glBegin(GL_LINES);
    glVertex2f(16.5, 58);
    glVertex2f(16.5, 56);
    glEnd();

    glPopMatrix();


    // 3rd row start


    glPushMatrix();

    glTranslatef(0 * 4, 2 * -3, 0);

    glBegin(GL_POLYGON);
    glColor3f(0.85, 0.94, 0.96);

    glVertex2f(15.1, 56);
    glVertex2f(15.1, 58);
    glVertex2f(18.1, 58);
    glVertex2f(18.1, 56);

    glEnd();


    glLineWidth(2);
    glColor3f(0.44, 0.44, 0.34);

    glBegin(GL_LINES);

    glVertex2f(15.1, 56);
    glVertex2f(15.1, 58);

    glVertex2f(15.1, 58);
    glVertex2f(18.1, 58);

    glVertex2f(18.1, 58);
    glVertex2f(18.1, 56);

    glVertex2f(18.1, 56);
    glVertex2f(15.1, 56);

    glEnd();

    // VERTICAL LINE IN THE MIDDLE OF EACH WINDOW


    glLineWidth(3.5);
    glColor3f(0.44, 0.44, 0.34);

    glBegin(GL_LINES);
    glVertex2f(16.5, 58);
    glVertex2f(16.5, 56);
    glEnd();

    glPopMatrix();


    glPushMatrix();

    glTranslatef(1 * 4, 2 * -3, 0);

    glBegin(GL_POLYGON);
    glColor3f(0.85, 0.94, 0.96);

    glVertex2f(15.1, 56);
    glVertex2f(15.1, 58);
    glVertex2f(18.1, 58);
    glVertex2f(18.1, 56);

    glEnd();


    glLineWidth(2);
    glColor3f(0.44, 0.44, 0.34);

    glBegin(GL_LINES);

    glVertex2f(15.1, 56);
    glVertex2f(15.1, 58);

    glVertex2f(15.1, 58);
    glVertex2f(18.1, 58);

    glVertex2f(18.1, 58);
    glVertex2f(18.1, 56);

    glVertex2f(18.1, 56);
    glVertex2f(15.1, 56);

    glEnd();

    // VERTICAL LINE IN THE MIDDLE OF EACH WINDOW


    glLineWidth(3.5);
    glColor3f(0.44, 0.44, 0.34);

    glBegin(GL_LINES);
    glVertex2f(16.5, 58);
    glVertex2f(16.5, 56);
    glEnd();

    glPopMatrix();


    glPushMatrix();

    glTranslatef(2 * 4, 2 * -3, 0);

    glBegin(GL_POLYGON);
    glColor3f(0.85, 0.94, 0.96);

    glVertex2f(15.1, 56);
    glVertex2f(15.1, 58);
    glVertex2f(18.1, 58);
    glVertex2f(18.1, 56);

    glEnd();


    glLineWidth(2);
    glColor3f(0.44, 0.44, 0.34);

    glBegin(GL_LINES);

    glVertex2f(15.1, 56);
    glVertex2f(15.1, 58);

    glVertex2f(15.1, 58);
    glVertex2f(18.1, 58);

    glVertex2f(18.1, 58);
    glVertex2f(18.1, 56);

    glVertex2f(18.1, 56);
    glVertex2f(15.1, 56);

    glEnd();

    // VERTICAL LINE IN THE MIDDLE OF EACH WINDOW


    glLineWidth(3.5);
    glColor3f(0.44, 0.44, 0.34);

    glBegin(GL_LINES);
    glVertex2f(16.5, 58);
    glVertex2f(16.5, 56);
    glEnd();

    glPopMatrix();



    glPushMatrix();

    glTranslatef(3 * 4, 2 * -3, 0);

    glBegin(GL_POLYGON);
    glColor3f(0.85, 0.94, 0.96);

    glVertex2f(15.1, 56);
    glVertex2f(15.1, 58);
    glVertex2f(18.1, 58);
    glVertex2f(18.1, 56);

    glEnd();


    glLineWidth(2);
    glColor3f(0.44, 0.44, 0.34);

    glBegin(GL_LINES);

    glVertex2f(15.1, 56);
    glVertex2f(15.1, 58);

    glVertex2f(15.1, 58);
    glVertex2f(18.1, 58);

    glVertex2f(18.1, 58);
    glVertex2f(18.1, 56);

    glVertex2f(18.1, 56);
    glVertex2f(15.1, 56);

    glEnd();

    // VERTICAL LINE IN THE MIDDLE OF EACH WINDOW


    glLineWidth(3.5);
    glColor3f(0.44, 0.44, 0.34);

    glBegin(GL_LINES);
    glVertex2f(16.5, 58);
    glVertex2f(16.5, 56);
    glEnd();

    glPopMatrix();



    //4TH ROW START


    glPushMatrix();

    glTranslatef(0 * 4, 3 * -3, 0);

    glBegin(GL_POLYGON);
    glColor3f(0.85, 0.94, 0.96);

    glVertex2f(15.1, 56);
    glVertex2f(15.1, 58);
    glVertex2f(18.1, 58);
    glVertex2f(18.1, 56);

    glEnd();


    glLineWidth(2);
    glColor3f(0.44, 0.44, 0.34);

    glBegin(GL_LINES);

    glVertex2f(15.1, 56);
    glVertex2f(15.1, 58);

    glVertex2f(15.1, 58);
    glVertex2f(18.1, 58);

    glVertex2f(18.1, 58);
    glVertex2f(18.1, 56);

    glVertex2f(18.1, 56);
    glVertex2f(15.1, 56);

    glEnd();

    // VERTICAL LINE IN THE MIDDLE OF EACH WINDOW


    glLineWidth(3.5);
    glColor3f(0.44, 0.44, 0.34);

    glBegin(GL_LINES);
    glVertex2f(16.5, 58);
    glVertex2f(16.5, 56);
    glEnd();

    glPopMatrix();


    glPushMatrix();

    glTranslatef(1 * 4, 3 * -3, 0);

    glBegin(GL_POLYGON);
    glColor3f(0.85, 0.94, 0.96);

    glVertex2f(15.1, 56);
    glVertex2f(15.1, 58);
    glVertex2f(18.1, 58);
    glVertex2f(18.1, 56);

    glEnd();


    glLineWidth(2);
    glColor3f(0.44, 0.44, 0.34);

    glBegin(GL_LINES);

    glVertex2f(15.1, 56);
    glVertex2f(15.1, 58);

    glVertex2f(15.1, 58);
    glVertex2f(18.1, 58);

    glVertex2f(18.1, 58);
    glVertex2f(18.1, 56);

    glVertex2f(18.1, 56);
    glVertex2f(15.1, 56);

    glEnd();

    // VERTICAL LINE IN THE MIDDLE OF EACH WINDOW


    glLineWidth(3.5);
    glColor3f(0.44, 0.44, 0.34);

    glBegin(GL_LINES);
    glVertex2f(16.5, 58);
    glVertex2f(16.5, 56);
    glEnd();

    glPopMatrix();


    glPushMatrix();

    glTranslatef(2 * 4, 3 * -3, 0);

    glBegin(GL_POLYGON);
    glColor3f(0.85, 0.94, 0.96);

    glVertex2f(15.1, 56);
    glVertex2f(15.1, 58);
    glVertex2f(18.1, 58);
    glVertex2f(18.1, 56);

    glEnd();


    glLineWidth(2);
    glColor3f(0.44, 0.44, 0.34);

    glBegin(GL_LINES);

    glVertex2f(15.1, 56);
    glVertex2f(15.1, 58);

    glVertex2f(15.1, 58);
    glVertex2f(18.1, 58);

    glVertex2f(18.1, 58);
    glVertex2f(18.1, 56);

    glVertex2f(18.1, 56);
    glVertex2f(15.1, 56);

    glEnd();

    // VERTICAL LINE IN THE MIDDLE OF EACH WINDOW


    glLineWidth(3.5);
    glColor3f(0.44, 0.44, 0.34);

    glBegin(GL_LINES);
    glVertex2f(16.5, 58);
    glVertex2f(16.5, 56);
    glEnd();

    glPopMatrix();


    glPushMatrix();

    glTranslatef(3 * 4, 3 * -3, 0);

    glBegin(GL_POLYGON);
    glColor3f(0.85, 0.94, 0.96);

    glVertex2f(15.1, 56);
    glVertex2f(15.1, 58);
    glVertex2f(18.1, 58);
    glVertex2f(18.1, 56);

    glEnd();


    glLineWidth(2);
    glColor3f(0.44, 0.44, 0.34);

    glBegin(GL_LINES);

    glVertex2f(15.1, 56);
    glVertex2f(15.1, 58);

    glVertex2f(15.1, 58);
    glVertex2f(18.1, 58);

    glVertex2f(18.1, 58);
    glVertex2f(18.1, 56);

    glVertex2f(18.1, 56);
    glVertex2f(15.1, 56);

    glEnd();

    // VERTICAL LINE IN THE MIDDLE OF EACH WINDOW


    glLineWidth(3.5);
    glColor3f(0.44, 0.44, 0.34);

    glBegin(GL_LINES);
    glVertex2f(16.5, 58);
    glVertex2f(16.5, 56);
    glEnd();

    glPopMatrix();

    glPopMatrix();


}


// ID - 19
void building_03() {


    // BACK AREA OF BUILDING 03 START HERE
    glBegin(GL_POLYGON);
    glColor3f(0.41, 0.7, 0.64);

    glVertex2f(19, 21.9);
    glVertex2f(19, 35.6);
    glVertex2f(52.6, 35.6);
    glVertex2f(52.6, 21.9);

    glEnd();

    // UPPER EXTENSION PORTION OF BACK AREA OF BUILDING 03
    // START HERE

    glBegin(GL_POLYGON);
    glColor3f(0.29, 0.54, 0.54);

    glVertex2f(18.3, 35.6);
    glVertex2f(18.3, 36.7);
    glVertex2f(53.3, 36.7);
    glVertex2f(53.3, 35.6);

    glEnd();


    // MIDDLE  AREA OF BUIDLING 03 START HERE

    glBegin(GL_POLYGON);
    glColor3f(0.6, 0.84, 0.78);

    glVertex2f(27.6, 21.9);
    glVertex2f(27.6, 42.4);
    glVertex2f(44, 42.4);
    glVertex2f(44, 22);
    glEnd();

    // UPPER EXTENSION PORTION OF MIDDLE AREA OF BUILDING 03

    glBegin(GL_POLYGON);

    glColor3f(0.29, 0.54, 0.54);
    glVertex2f(26.4, 42.4);
    glVertex2f(26.4, 43.5);
    glVertex2f(45, 43.5);
    glVertex2f(45, 42.4);

    glEnd();

    // BACKGROUND MORE DEEPER COLOR OF MIDDLE MAIN DOOR
    glBegin(GL_POLYGON);

    glColor3f(0.35, 0.6, 0.58);
    glVertex2f(32.5, 21.9);
    glVertex2f(32.5, 30.5);
    glVertex2f(38.5, 30.5);
    glVertex2f(38.5, 21.9);

    glEnd();


    // MIDDLE MAIN DOOR OF BUIDLING 03

    glBegin(GL_POLYGON);

    glColor3f(0.87, 0.94, 0.88);
    glVertex2f(33, 21.9);
    glVertex2f(33, 30);
    glVertex2f(38, 30);
    glVertex2f(38, 21.9);

    glEnd();


    // MIDDLE VETICLE LINE OF THE MIDDLE OF THE MAIN DOOR


    glLineWidth(5.5);
    glBegin(GL_LINES);

    glColor3f(0.35, 0.6, 0.58);
    glVertex2f(35.5, 30);
    glVertex2f(35.5, 21.9);


    glEnd();


    // WINDOWS OF BUILDING 03 START HERE


    // BACKGROUND MORE DEEPER COLOR OF EACH WINDOW
    glBegin(GL_POLYGON);

    glColor3f(0.35, 0.6, 0.58);
    glVertex2f(20, 32.3);
    glVertex2f(20, 34.7);
    glVertex2f(26.6, 34.7);
    glVertex2f(26.6, 32.3);

    glEnd();




    // WINDOW MAIN AREA MIDDLE
    glBegin(GL_POLYGON);

    glColor3f(0.87, 0.94, 0.88);
    glVertex2f(20.3, 32.6);
    glVertex2f(20.3, 34.4);
    glVertex2f(26.3, 34.4);
    glVertex2f(26.3, 32.6);

    glEnd();


    // NOW PRINTING ALL THE WINDOWS OF THE LEFT SIDE BUILDING 
    // OF BUILDING 03



    glPushMatrix();
    glTranslatef(0, 1 * -3.1, 0);

    // BACKGROUND MORE DEEPER COLOR OF EACH WINDOW
    glBegin(GL_POLYGON);

    glColor3f(0.35, 0.6, 0.58);
    glVertex2f(20, 32.3);
    glVertex2f(20, 34.7);
    glVertex2f(26.6, 34.7);
    glVertex2f(26.6, 32.3);

    glEnd();




    // WINDOW MAIN AREA MIDDLE
    glBegin(GL_POLYGON);

    glColor3f(0.87, 0.94, 0.88);
    glVertex2f(20.3, 32.6);
    glVertex2f(20.3, 34.4);
    glVertex2f(26.3, 34.4);
    glVertex2f(26.3, 32.6);

    glEnd();

    glPopMatrix();

    glPushMatrix();
    glTranslatef(0, 2 * -3.1, 0);

    // BACKGROUND MORE DEEPER COLOR OF EACH WINDOW
    glBegin(GL_POLYGON);

    glColor3f(0.35, 0.6, 0.58);
    glVertex2f(20, 32.3);
    glVertex2f(20, 34.7);
    glVertex2f(26.6, 34.7);
    glVertex2f(26.6, 32.3);

    glEnd();




    // WINDOW MAIN AREA MIDDLE
    glBegin(GL_POLYGON);

    glColor3f(0.87, 0.94, 0.88);
    glVertex2f(20.3, 32.6);
    glVertex2f(20.3, 34.4);
    glVertex2f(26.3, 34.4);
    glVertex2f(26.3, 32.6);

    glEnd();

    glPopMatrix();



    glPushMatrix();
    glTranslatef(0, 3 * -3.1, 0);

    // BACKGROUND MORE DEEPER COLOR OF EACH WINDOW
    glBegin(GL_POLYGON);

    glColor3f(0.35, 0.6, 0.58);
    glVertex2f(20, 32.3);
    glVertex2f(20, 34.7);
    glVertex2f(26.6, 34.7);
    glVertex2f(26.6, 32.3);

    glEnd();




    // WINDOW MAIN AREA MIDDLE
    glBegin(GL_POLYGON);

    glColor3f(0.87, 0.94, 0.88);
    glVertex2f(20.3, 32.6);
    glVertex2f(20.3, 34.4);
    glVertex2f(26.3, 34.4);
    glVertex2f(26.3, 32.6);

    glEnd();

    glPopMatrix();



    // Using the windows of the first building of building 03
    // just translationg the x axis with value 15
    glPushMatrix();
    glTranslatef(25, 0, 0);



    // WINDOWS OF BUILDING 03 START HERE


    // BACKGROUND MORE DEEPER COLOR OF EACH WINDOW
    glBegin(GL_POLYGON);

    glColor3f(0.35, 0.6, 0.58);
    glVertex2f(20, 32.3);
    glVertex2f(20, 34.7);
    glVertex2f(26.6, 34.7);
    glVertex2f(26.6, 32.3);

    glEnd();




    // WINDOW MAIN AREA MIDDLE
    glBegin(GL_POLYGON);

    glColor3f(0.87, 0.94, 0.88);
    glVertex2f(20.3, 32.6);
    glVertex2f(20.3, 34.4);
    glVertex2f(26.3, 34.4);
    glVertex2f(26.3, 32.6);

    glEnd();


    // NOW PRINTING ALL THE WINDOWS OF THE LEFT SIDE BUILDING 
    // OF BUILDING 03



    glPushMatrix();
    glTranslatef(0, 1 * -3.1, 0);

    // BACKGROUND MORE DEEPER COLOR OF EACH WINDOW
    glBegin(GL_POLYGON);

    glColor3f(0.35, 0.6, 0.58);
    glVertex2f(20, 32.3);
    glVertex2f(20, 34.7);
    glVertex2f(26.6, 34.7);
    glVertex2f(26.6, 32.3);

    glEnd();




    // WINDOW MAIN AREA MIDDLE
    glBegin(GL_POLYGON);

    glColor3f(0.87, 0.94, 0.88);
    glVertex2f(20.3, 32.6);
    glVertex2f(20.3, 34.4);
    glVertex2f(26.3, 34.4);
    glVertex2f(26.3, 32.6);

    glEnd();

    glPopMatrix();

    glPushMatrix();
    glTranslatef(0, 2 * -3.1, 0);

    // BACKGROUND MORE DEEPER COLOR OF EACH WINDOW
    glBegin(GL_POLYGON);

    glColor3f(0.35, 0.6, 0.58);
    glVertex2f(20, 32.3);
    glVertex2f(20, 34.7);
    glVertex2f(26.6, 34.7);
    glVertex2f(26.6, 32.3);

    glEnd();




    // WINDOW MAIN AREA MIDDLE
    glBegin(GL_POLYGON);

    glColor3f(0.87, 0.94, 0.88);
    glVertex2f(20.3, 32.6);
    glVertex2f(20.3, 34.4);
    glVertex2f(26.3, 34.4);
    glVertex2f(26.3, 32.6);

    glEnd();

    glPopMatrix();



    glPushMatrix();
    glTranslatef(0, 3 * -3.1, 0);

    // BACKGROUND MORE DEEPER COLOR OF EACH WINDOW
    glBegin(GL_POLYGON);

    glColor3f(0.35, 0.6, 0.58);
    glVertex2f(20, 32.3);
    glVertex2f(20, 34.7);
    glVertex2f(26.6, 34.7);
    glVertex2f(26.6, 32.3);

    glEnd();




    // WINDOW MAIN AREA MIDDLE
    glBegin(GL_POLYGON);

    glColor3f(0.87, 0.94, 0.88);
    glVertex2f(20.3, 32.6);
    glVertex2f(20.3, 34.4);
    glVertex2f(26.3, 34.4);
    glVertex2f(26.3, 32.6);

    glEnd();

    glPopMatrix();

    glPopMatrix();






    // WINDOWS OF THE MIDDLE BUILDING START HERE

    glBegin(GL_POLYGON);

    glColor3f(0.35, 0.6, 0.58);

    glVertex2f(29, 38.5);
    glVertex2f(29, 41.5);
    glVertex2f(31.5, 41.5);
    glVertex2f(31.5, 38.5);

    glEnd();



    // MIDDLE OF EACH WINDOW    
    glBegin(GL_POLYGON);

    glColor3f(0.87, 0.94, 0.88);


    glVertex2f(29.3, 38.8);
    glVertex2f(29.3, 41.2);
    glVertex2f(31.2, 41.2);
    glVertex2f(31.2, 38.8);

    glEnd();

    // HORIZONTAL LINE IN THE MIDDE OF EACH WINDOW

    glLineWidth(4);
    glBegin(GL_LINES);

    glColor3f(0.35, 0.6, 0.58);
    glVertex2f(29.3, 40);
    glVertex2f(31.2, 40);


    glEnd();


    // NOW PRINTING ALL THW WINDOW'S OF THE FIRST ROW

    glPushMatrix();
    glTranslatef(1 * 4, 0, 0);

    glBegin(GL_POLYGON);

    glColor3f(0.35, 0.6, 0.58);

    glVertex2f(29, 38.5);
    glVertex2f(29, 41.5);
    glVertex2f(31.5, 41.5);
    glVertex2f(31.5, 38.5);

    glEnd();



    // MIDDLE OF EACH WINDOW    
    glBegin(GL_POLYGON);

    glColor3f(0.87, 0.94, 0.88);


    glVertex2f(29.3, 38.8);
    glVertex2f(29.3, 41.2);
    glVertex2f(31.2, 41.2);
    glVertex2f(31.2, 38.8);

    glEnd();

    // HORIZONTAL LINE IN THE MIDDE OF EACH WINDOW

    glLineWidth(4);
    glBegin(GL_LINES);

    glColor3f(0.35, 0.6, 0.58);
    glVertex2f(29.3, 40);
    glVertex2f(31.2, 40);


    glEnd();


    glPopMatrix();




    glPushMatrix();
    glTranslatef(2 * 4, 0, 0);

    glBegin(GL_POLYGON);

    glColor3f(0.35, 0.6, 0.58);

    glVertex2f(29, 38.5);
    glVertex2f(29, 41.5);
    glVertex2f(31.5, 41.5);
    glVertex2f(31.5, 38.5);

    glEnd();



    // MIDDLE OF EACH WINDOW    
    glBegin(GL_POLYGON);

    glColor3f(0.87, 0.94, 0.88);


    glVertex2f(29.3, 38.8);
    glVertex2f(29.3, 41.2);
    glVertex2f(31.2, 41.2);
    glVertex2f(31.2, 38.8);

    glEnd();

    // HORIZONTAL LINE IN THE MIDDE OF EACH WINDOW

    glLineWidth(4);
    glBegin(GL_LINES);

    glColor3f(0.35, 0.6, 0.58);
    glVertex2f(29.3, 40);
    glVertex2f(31.2, 40);


    glEnd();


    glPopMatrix();



    glPushMatrix();
    glTranslatef(3 * 4, 0, 0);

    glBegin(GL_POLYGON);

    glColor3f(0.35, 0.6, 0.58);

    glVertex2f(29, 38.5);
    glVertex2f(29, 41.5);
    glVertex2f(31.5, 41.5);
    glVertex2f(31.5, 38.5);

    glEnd();



    // MIDDLE OF EACH WINDOW    
    glBegin(GL_POLYGON);

    glColor3f(0.87, 0.94, 0.88);


    glVertex2f(29.3, 38.8);
    glVertex2f(29.3, 41.2);
    glVertex2f(31.2, 41.2);
    glVertex2f(31.2, 38.8);

    glEnd();

    // HORIZONTAL LINE IN THE MIDDE OF EACH WINDOW

    glLineWidth(4);
    glBegin(GL_LINES);

    glColor3f(0.35, 0.6, 0.58);
    glVertex2f(29.3, 40);
    glVertex2f(31.2, 40);


    glEnd();


    glPopMatrix();



    //2nd row


    glPushMatrix();
    glTranslatef(0, -3.7, 0);



    glBegin(GL_POLYGON);

    glColor3f(0.35, 0.6, 0.58);

    glVertex2f(29, 38.5);
    glVertex2f(29, 41.5);
    glVertex2f(31.5, 41.5);
    glVertex2f(31.5, 38.5);

    glEnd();



    // MIDDLE OF EACH WINDOW    
    glBegin(GL_POLYGON);

    glColor3f(0.87, 0.94, 0.88);


    glVertex2f(29.3, 38.8);
    glVertex2f(29.3, 41.2);
    glVertex2f(31.2, 41.2);
    glVertex2f(31.2, 38.8);

    glEnd();

    // HORIZONTAL LINE IN THE MIDDE OF EACH WINDOW

    glLineWidth(4);
    glBegin(GL_LINES);

    glColor3f(0.35, 0.6, 0.58);
    glVertex2f(29.3, 40);
    glVertex2f(31.2, 40);


    glEnd();


    // NOW PRINTING ALL THW WINDOW'S OF THE FIRST ROW

    glPushMatrix();
    glTranslatef(1 * 4, 0, 0);

    glBegin(GL_POLYGON);

    glColor3f(0.35, 0.6, 0.58);

    glVertex2f(29, 38.5);
    glVertex2f(29, 41.5);
    glVertex2f(31.5, 41.5);
    glVertex2f(31.5, 38.5);

    glEnd();



    // MIDDLE OF EACH WINDOW    
    glBegin(GL_POLYGON);

    glColor3f(0.87, 0.94, 0.88);


    glVertex2f(29.3, 38.8);
    glVertex2f(29.3, 41.2);
    glVertex2f(31.2, 41.2);
    glVertex2f(31.2, 38.8);

    glEnd();

    // HORIZONTAL LINE IN THE MIDDE OF EACH WINDOW

    glLineWidth(4);
    glBegin(GL_LINES);

    glColor3f(0.35, 0.6, 0.58);
    glVertex2f(29.3, 40);
    glVertex2f(31.2, 40);


    glEnd();


    glPopMatrix();




    glPushMatrix();
    glTranslatef(2 * 4, 0, 0);

    glBegin(GL_POLYGON);

    glColor3f(0.35, 0.6, 0.58);

    glVertex2f(29, 38.5);
    glVertex2f(29, 41.5);
    glVertex2f(31.5, 41.5);
    glVertex2f(31.5, 38.5);

    glEnd();



    // MIDDLE OF EACH WINDOW    
    glBegin(GL_POLYGON);

    glColor3f(0.87, 0.94, 0.88);


    glVertex2f(29.3, 38.8);
    glVertex2f(29.3, 41.2);
    glVertex2f(31.2, 41.2);
    glVertex2f(31.2, 38.8);

    glEnd();

    // HORIZONTAL LINE IN THE MIDDE OF EACH WINDOW

    glLineWidth(4);
    glBegin(GL_LINES);

    glColor3f(0.35, 0.6, 0.58);
    glVertex2f(29.3, 40);
    glVertex2f(31.2, 40);


    glEnd();


    glPopMatrix();



    glPushMatrix();
    glTranslatef(3 * 4, 0, 0);

    glBegin(GL_POLYGON);

    glColor3f(0.35, 0.6, 0.58);

    glVertex2f(29, 38.5);
    glVertex2f(29, 41.5);
    glVertex2f(31.5, 41.5);
    glVertex2f(31.5, 38.5);

    glEnd();



    // MIDDLE OF EACH WINDOW    
    glBegin(GL_POLYGON);

    glColor3f(0.87, 0.94, 0.88);


    glVertex2f(29.3, 38.8);
    glVertex2f(29.3, 41.2);
    glVertex2f(31.2, 41.2);
    glVertex2f(31.2, 38.8);

    glEnd();

    // HORIZONTAL LINE IN THE MIDDE OF EACH WINDOW

    glLineWidth(4);
    glBegin(GL_LINES);

    glColor3f(0.35, 0.6, 0.58);
    glVertex2f(29.3, 40);
    glVertex2f(31.2, 40);


    glEnd();


    glPopMatrix();


    glPopMatrix();


    // 3rd row.. just translating the first row by 3 y axis value

    glPushMatrix();
    glTranslatef(0, 2 * -3.7, 0);


    glBegin(GL_POLYGON);

    glColor3f(0.35, 0.6, 0.58);

    glVertex2f(29, 38.5);
    glVertex2f(29, 41.5);
    glVertex2f(31.5, 41.5);
    glVertex2f(31.5, 38.5);

    glEnd();



    // MIDDLE OF EACH WINDOW    
    glBegin(GL_POLYGON);

    glColor3f(0.87, 0.94, 0.88);


    glVertex2f(29.3, 38.8);
    glVertex2f(29.3, 41.2);
    glVertex2f(31.2, 41.2);
    glVertex2f(31.2, 38.8);

    glEnd();

    // HORIZONTAL LINE IN THE MIDDE OF EACH WINDOW

    glLineWidth(4);
    glBegin(GL_LINES);

    glColor3f(0.35, 0.6, 0.58);
    glVertex2f(29.3, 40);
    glVertex2f(31.2, 40);


    glEnd();


    // NOW PRINTING ALL THW WINDOW'S OF THE FIRST ROW

    glPushMatrix();
    glTranslatef(1 * 4, 0, 0);

    glBegin(GL_POLYGON);

    glColor3f(0.35, 0.6, 0.58);

    glVertex2f(29, 38.5);
    glVertex2f(29, 41.5);
    glVertex2f(31.5, 41.5);
    glVertex2f(31.5, 38.5);

    glEnd();



    // MIDDLE OF EACH WINDOW    
    glBegin(GL_POLYGON);

    glColor3f(0.87, 0.94, 0.88);


    glVertex2f(29.3, 38.8);
    glVertex2f(29.3, 41.2);
    glVertex2f(31.2, 41.2);
    glVertex2f(31.2, 38.8);

    glEnd();

    // HORIZONTAL LINE IN THE MIDDE OF EACH WINDOW

    glLineWidth(4);
    glBegin(GL_LINES);

    glColor3f(0.35, 0.6, 0.58);
    glVertex2f(29.3, 40);
    glVertex2f(31.2, 40);


    glEnd();


    glPopMatrix();




    glPushMatrix();
    glTranslatef(2 * 4, 0, 0);

    glBegin(GL_POLYGON);

    glColor3f(0.35, 0.6, 0.58);

    glVertex2f(29, 38.5);
    glVertex2f(29, 41.5);
    glVertex2f(31.5, 41.5);
    glVertex2f(31.5, 38.5);

    glEnd();



    // MIDDLE OF EACH WINDOW    
    glBegin(GL_POLYGON);

    glColor3f(0.87, 0.94, 0.88);


    glVertex2f(29.3, 38.8);
    glVertex2f(29.3, 41.2);
    glVertex2f(31.2, 41.2);
    glVertex2f(31.2, 38.8);

    glEnd();

    // HORIZONTAL LINE IN THE MIDDE OF EACH WINDOW

    glLineWidth(4);
    glBegin(GL_LINES);

    glColor3f(0.35, 0.6, 0.58);
    glVertex2f(29.3, 40);
    glVertex2f(31.2, 40);


    glEnd();


    glPopMatrix();



    glPushMatrix();
    glTranslatef(3 * 4, 0, 0);

    glBegin(GL_POLYGON);

    glColor3f(0.35, 0.6, 0.58);

    glVertex2f(29, 38.5);
    glVertex2f(29, 41.5);
    glVertex2f(31.5, 41.5);
    glVertex2f(31.5, 38.5);

    glEnd();



    // MIDDLE OF EACH WINDOW    
    glBegin(GL_POLYGON);

    glColor3f(0.87, 0.94, 0.88);

    glVertex2f(29.3, 38.8);
    glVertex2f(29.3, 41.2);
    glVertex2f(31.2, 41.2);
    glVertex2f(31.2, 38.8);

    glEnd();

    // HORIZONTAL LINE IN THE MIDDE OF EACH WINDOW

    glLineWidth(4);
    glBegin(GL_LINES);

    glColor3f(0.35, 0.6, 0.58);
    glVertex2f(29.3, 40);
    glVertex2f(31.2, 40);


    glEnd();


    glPopMatrix();

    glPopMatrix();


}


// ID - 20
void building_04() {

    // LOWER PORTION OF BUILDING 04 START HERE

    glColor3f(0.62, 0.71, 0.76);
    glBegin(GL_POLYGON);

    glVertex2f(35, 21.9);
    glVertex2f(35, 61);
    glVertex2f(50.9, 61);
    glVertex2f(50.9, 21.9);

    glEnd();


    // UPPER MORE DEEP COLOR PORTION OF BUILDING 04

    glColor3f(0.51, 0.58, 0.62);
    glBegin(GL_POLYGON);

    glVertex2f(34.2, 61);
    glVertex2f(34.2, 61.8);
    glVertex2f(51.6, 61.8);
    glVertex2f(51.6, 61);

    glEnd();

    // 2ND UPPER PORTION FROM BELOW OF BUILDING 04
    glColor3f(0.62, 0.71, 0.76);
    glBegin(GL_POLYGON);

    glVertex2f(36.5, 61.8);
    glVertex2f(36.5, 65.4);
    glVertex2f(49.3, 65.4);
    glVertex2f(49.3, 61.8);

    glEnd();

    // 2ND UPPER MORE DEEP COLOR PORTION OF BUILDING 04

    glColor3f(0.51, 0.58, 0.62);
    glBegin(GL_POLYGON);

    glVertex2f(35.8, 65.4);
    glVertex2f(35.8, 66);
    glVertex2f(50, 66);
    glVertex2f(50, 65.4);

    glEnd();


    // 3RD UPPER PORTION FROM BELOW OF BUILDING 04
    glColor3f(0.62, 0.71, 0.76);
    glBegin(GL_POLYGON);

    glVertex2f(39.8, 66);
    glVertex2f(39.8, 69.4);
    glVertex2f(46, 69.4);
    glVertex2f(46, 66);

    glEnd();


    // 3RD UPPER MORE DEEP COLOR PORTION OF BUILDING 04

    glColor3f(0.51, 0.58, 0.62);
    glBegin(GL_POLYGON);

    glVertex2f(39, 69.4);
    glVertex2f(39, 70);
    glVertex2f(46.8, 70);
    glVertex2f(46.8, 69.4);

    glEnd();


    // 4TH UPPER PORTION FROM BELOW OF BUILDING 04
    glColor3f(0.62, 0.71, 0.76);
    glBegin(GL_POLYGON);

    glVertex2f(40.6, 70);
    glVertex2f(40.6, 71);
    glVertex2f(45.2, 71);
    glVertex2f(45.2, 70);

    glEnd();


    // UPPER MORE DEEP VERTICLE ANTENA LIKE PORTION OF BUILDING 04

    glColor3f(0.51, 0.58, 0.62);
    glBegin(GL_POLYGON);

    glVertex2f(42.6, 71);
    glVertex2f(42.6, 75);
    glVertex2f(43.2, 77);
    glVertex2f(43.2, 71);

    glEnd();

    //FIVE VERTICALE LINE OF 3RD UPPER PORTION

    glColor3f(0.51, 0.58, 0.62);
    glBegin(GL_POLYGON);

    glVertex2f(40.2, 66.4);
    glVertex2f(40.2, 69);
    glVertex2f(40.8, 69);
    glVertex2f(40.8, 66.4);

    glEnd();

    // NOW PRINTING ALL THE VERTICLE AREA'S, JUST TRANSLATING
    glPushMatrix();
    glTranslatef(1 * 0.95, 0, 0);
    glBegin(GL_POLYGON);

    glVertex2f(40.2, 66.4);
    glVertex2f(40.2, 69);
    glVertex2f(40.8, 69);
    glVertex2f(40.8, 66.4);

    glEnd();


    glPopMatrix();

    glPushMatrix();
    glTranslatef(2 * 0.95, 0, 0);
    glBegin(GL_POLYGON);

    glVertex2f(40.2, 66.4);
    glVertex2f(40.2, 69);
    glVertex2f(40.8, 69);
    glVertex2f(40.8, 66.4);

    glEnd();


    glPopMatrix();


    glPushMatrix();
    glTranslatef(3 * 0.95, 0, 0);
    glBegin(GL_POLYGON);

    glVertex2f(40.2, 66.4);
    glVertex2f(40.2, 69);
    glVertex2f(40.8, 69);
    glVertex2f(40.8, 66.4);

    glEnd();


    glPopMatrix();


    glPushMatrix();
    glTranslatef(4 * 0.95, 0, 0);
    glBegin(GL_POLYGON);

    glVertex2f(40.2, 66.4);
    glVertex2f(40.2, 69);
    glVertex2f(40.8, 69);
    glVertex2f(40.8, 66.4);

    glEnd();


    glPopMatrix();

    glPushMatrix();
    glTranslatef(5 * 0.95, 0, 0);
    glBegin(GL_POLYGON);

    glVertex2f(40.2, 66.4);
    glVertex2f(40.2, 69);
    glVertex2f(40.8, 69);
    glVertex2f(40.8, 66.4);

    glEnd();


    glPopMatrix();


    //VERTICAL AREARS IN THE 2ND UPPER PORTOIN


    glColor3f(0.79, 0.87, 0.9);
    glBegin(GL_POLYGON);

    glVertex2f(37.5, 61.8);
    glVertex2f(37.5, 65);
    glVertex2f(38.8, 65);
    glVertex2f(38.8, 61.8);

    glEnd();

    // Now printing all the vertical areas with the first code
    // just translating

    glPushMatrix();
    glTranslatef(1 * 1.90, 0, 0);
    glBegin(GL_POLYGON);

    glVertex2f(37.5, 61.8);
    glVertex2f(37.5, 65);
    glVertex2f(38.8, 65);
    glVertex2f(38.8, 61.8);

    glEnd();

    glPopMatrix();



    glPushMatrix();
    glTranslatef(2 * 1.90, 0, 0);
    glBegin(GL_POLYGON);

    glVertex2f(37.5, 61.8);
    glVertex2f(37.5, 65);
    glVertex2f(38.8, 65);
    glVertex2f(38.8, 61.8);

    glEnd();

    glPopMatrix();


    glPushMatrix();
    glTranslatef(3 * 1.90, 0, 0);
    glBegin(GL_POLYGON);

    glVertex2f(37.5, 61.8);
    glVertex2f(37.5, 65);
    glVertex2f(38.8, 65);
    glVertex2f(38.8, 61.8);

    glEnd();

    glPopMatrix();


    glPushMatrix();
    glTranslatef(4 * 1.90, 0, 0);
    glBegin(GL_POLYGON);

    glVertex2f(37.5, 61.8);
    glVertex2f(37.5, 65);
    glVertex2f(38.8, 65);
    glVertex2f(38.8, 61.8);

    glEnd();

    glPopMatrix();


    glPushMatrix();
    glTranslatef(5 * 1.90, 0, 0);
    glBegin(GL_POLYGON);

    glVertex2f(37.5, 61.8);
    glVertex2f(37.5, 65);
    glVertex2f(38.8, 65);
    glVertex2f(38.8, 61.8);

    glEnd();

    glPopMatrix();


    //  WINDOWS OF THE FIRST LOWER PORTION START HERE


    glColor3f(0.79, 0.87, 0.9);
    glBegin(GL_POLYGON);

    glVertex2f(36.5, 57.5);
    glVertex2f(36.5, 60);
    glVertex2f(39, 60);
    glVertex2f(39, 57.5);

    glEnd();


    //NOW PRINTING ALL THE WINDOWS BY USING TRANSLATEF FUNCTION

    glPushMatrix();
    glTranslatef(1 * 3.5, 0, 0);

    glBegin(GL_POLYGON);

    glVertex2f(36.5, 57.5);
    glVertex2f(36.5, 60);
    glVertex2f(39, 60);
    glVertex2f(39, 57.5);

    glEnd();

    glPopMatrix();


    glPushMatrix();
    glTranslatef(2 * 3.5, 0, 0);

    glBegin(GL_POLYGON);

    glVertex2f(36.5, 57.5);
    glVertex2f(36.5, 60);
    glVertex2f(39, 60);
    glVertex2f(39, 57.5);

    glEnd();

    glPopMatrix();


    glPushMatrix();
    glTranslatef(3 * 3.5, 0, 0);

    glBegin(GL_POLYGON);

    glVertex2f(36.5, 57.5);
    glVertex2f(36.5, 60);
    glVertex2f(39, 60);
    glVertex2f(39, 57.5);

    glEnd();

    glPopMatrix();


    //2ND ROW  USING THE CODES OF THE FIRST ROW
    // JUST TRANSLATING IN Y AXIS

    glPushMatrix();

    glTranslatef(0, 1 * -3.5, 0);


    glBegin(GL_POLYGON);

    glVertex2f(36.5, 57.5);
    glVertex2f(36.5, 60);
    glVertex2f(39, 60);
    glVertex2f(39, 57.5);

    glEnd();


    //NOW PRINTING ALL THE WINDOWS BY USING TRANSLATEF FUNCTION

    glPushMatrix();
    glTranslatef(1 * 3.5, 0, 0);

    glBegin(GL_POLYGON);

    glVertex2f(36.5, 57.5);
    glVertex2f(36.5, 60);
    glVertex2f(39, 60);
    glVertex2f(39, 57.5);

    glEnd();

    glPopMatrix();


    glPushMatrix();
    glTranslatef(2 * 3.5, 0, 0);

    glBegin(GL_POLYGON);

    glVertex2f(36.5, 57.5);
    glVertex2f(36.5, 60);
    glVertex2f(39, 60);
    glVertex2f(39, 57.5);

    glEnd();

    glPopMatrix();


    glPushMatrix();
    glTranslatef(3 * 3.5, 0, 0);

    glBegin(GL_POLYGON);

    glVertex2f(36.5, 57.5);
    glVertex2f(36.5, 60);
    glVertex2f(39, 60);
    glVertex2f(39, 57.5);

    glEnd();

    glPopMatrix();

    glPopMatrix();



    //3RD ROW USING THE CODE OF THE FIRST ROW
    // JUST TRANSLATING THE CODES IN Y AXIS


    glPushMatrix();

    glTranslatef(0, 2 * -3.5, 0);


    glBegin(GL_POLYGON);

    glVertex2f(36.5, 57.5);
    glVertex2f(36.5, 60);
    glVertex2f(39, 60);
    glVertex2f(39, 57.5);

    glEnd();


    //NOW PRINTING ALL THE WINDOWS BY USING TRANSLATEF FUNCTION

    glPushMatrix();
    glTranslatef(1 * 3.5, 0, 0);

    glBegin(GL_POLYGON);

    glVertex2f(36.5, 57.5);
    glVertex2f(36.5, 60);
    glVertex2f(39, 60);
    glVertex2f(39, 57.5);

    glEnd();

    glPopMatrix();


    glPushMatrix();
    glTranslatef(2 * 3.5, 0, 0);

    glBegin(GL_POLYGON);

    glVertex2f(36.5, 57.5);
    glVertex2f(36.5, 60);
    glVertex2f(39, 60);
    glVertex2f(39, 57.5);

    glEnd();

    glPopMatrix();


    glPushMatrix();
    glTranslatef(3 * 3.5, 0, 0);

    glBegin(GL_POLYGON);

    glVertex2f(36.5, 57.5);
    glVertex2f(36.5, 60);
    glVertex2f(39, 60);
    glVertex2f(39, 57.5);

    glEnd();

    glPopMatrix();

    glPopMatrix();


    //RTH ROW, SAME USING THE CODSES OF THE FIRST ROW
    //JUST TRANSLATING IN Y AXIS


    glPushMatrix();

    glTranslatef(0, 3 * -3.5, 0);


    glBegin(GL_POLYGON);

    glVertex2f(36.5, 57.5);
    glVertex2f(36.5, 60);
    glVertex2f(39, 60);
    glVertex2f(39, 57.5);

    glEnd();


    //NOW PRINTING ALL THE WINDOWS BY USING TRANSLATEF FUNCTION

    glPushMatrix();
    glTranslatef(1 * 3.5, 0, 0);

    glBegin(GL_POLYGON);

    glVertex2f(36.5, 57.5);
    glVertex2f(36.5, 60);
    glVertex2f(39, 60);
    glVertex2f(39, 57.5);

    glEnd();

    glPopMatrix();


    glPushMatrix();
    glTranslatef(2 * 3.5, 0, 0);

    glBegin(GL_POLYGON);

    glVertex2f(36.5, 57.5);
    glVertex2f(36.5, 60);
    glVertex2f(39, 60);
    glVertex2f(39, 57.5);

    glEnd();

    glPopMatrix();


    glPushMatrix();
    glTranslatef(3 * 3.5, 0, 0);

    glBegin(GL_POLYGON);

    glVertex2f(36.5, 57.5);
    glVertex2f(36.5, 60);
    glVertex2f(39, 60);
    glVertex2f(39, 57.5);

    glEnd();

    glPopMatrix();

    glPopMatrix();


    //5TH ROW SAME USING THE CODES OF THE FIRST ROW
    //JUST TRANSLATING IN Y AXIS

    glPushMatrix();

    glTranslatef(0, 4 * -3.5, 0);


    glBegin(GL_POLYGON);

    glVertex2f(36.5, 57.5);
    glVertex2f(36.5, 60);
    glVertex2f(39, 60);
    glVertex2f(39, 57.5);

    glEnd();


    //NOW PRINTING ALL THE WINDOWS BY USING TRANSLATEF FUNCTION

    glPushMatrix();
    glTranslatef(1 * 3.5, 0, 0);

    glBegin(GL_POLYGON);

    glVertex2f(36.5, 57.5);
    glVertex2f(36.5, 60);
    glVertex2f(39, 60);
    glVertex2f(39, 57.5);

    glEnd();

    glPopMatrix();


    glPushMatrix();
    glTranslatef(2 * 3.5, 0, 0);

    glBegin(GL_POLYGON);

    glVertex2f(36.5, 57.5);
    glVertex2f(36.5, 60);
    glVertex2f(39, 60);
    glVertex2f(39, 57.5);

    glEnd();

    glPopMatrix();


    glPushMatrix();
    glTranslatef(3 * 3.5, 0, 0);

    glBegin(GL_POLYGON);

    glVertex2f(36.5, 57.5);
    glVertex2f(36.5, 60);
    glVertex2f(39, 60);
    glVertex2f(39, 57.5);

    glEnd();

    glPopMatrix();

    glPopMatrix();



    //6TH ROW
    glPushMatrix();

    glTranslatef(0, 5 * -3.5, 0);


    glBegin(GL_POLYGON);

    glVertex2f(36.5, 57.5);
    glVertex2f(36.5, 60);
    glVertex2f(39, 60);
    glVertex2f(39, 57.5);

    glEnd();


    //NOW PRINTING ALL THE WINDOWS BY USING TRANSLATEF FUNCTION

    glPushMatrix();
    glTranslatef(1 * 3.5, 0, 0);

    glBegin(GL_POLYGON);

    glVertex2f(36.5, 57.5);
    glVertex2f(36.5, 60);
    glVertex2f(39, 60);
    glVertex2f(39, 57.5);

    glEnd();

    glPopMatrix();


    glPushMatrix();
    glTranslatef(2 * 3.5, 0, 0);

    glBegin(GL_POLYGON);

    glVertex2f(36.5, 57.5);
    glVertex2f(36.5, 60);
    glVertex2f(39, 60);
    glVertex2f(39, 57.5);

    glEnd();

    glPopMatrix();


    glPushMatrix();
    glTranslatef(3 * 3.5, 0, 0);

    glBegin(GL_POLYGON);

    glVertex2f(36.5, 57.5);
    glVertex2f(36.5, 60);
    glVertex2f(39, 60);
    glVertex2f(39, 57.5);

    glEnd();

    glPopMatrix();

    glPopMatrix();


    //7TH ROW


    glPushMatrix();

    glTranslatef(0, 6 * -3.5, 0);


    glBegin(GL_POLYGON);

    glVertex2f(36.5, 57.5);
    glVertex2f(36.5, 60);
    glVertex2f(39, 60);
    glVertex2f(39, 57.5);

    glEnd();


    //NOW PRINTING ALL THE WINDOWS BY USING TRANSLATEF FUNCTION

    glPushMatrix();
    glTranslatef(1 * 3.5, 0, 0);

    glBegin(GL_POLYGON);

    glVertex2f(36.5, 57.5);
    glVertex2f(36.5, 60);
    glVertex2f(39, 60);
    glVertex2f(39, 57.5);

    glEnd();

    glPopMatrix();


    glPushMatrix();
    glTranslatef(2 * 3.5, 0, 0);

    glBegin(GL_POLYGON);

    glVertex2f(36.5, 57.5);
    glVertex2f(36.5, 60);
    glVertex2f(39, 60);
    glVertex2f(39, 57.5);

    glEnd();

    glPopMatrix();


    glPushMatrix();
    glTranslatef(3 * 3.5, 0, 0);

    glBegin(GL_POLYGON);

    glVertex2f(36.5, 57.5);
    glVertex2f(36.5, 60);
    glVertex2f(39, 60);
    glVertex2f(39, 57.5);

    glEnd();

    glPopMatrix();

    glPopMatrix();










}





bool state = true;
float _move = 0;

void bird01() {
    glPushMatrix();
    glTranslatef(40, 0, 0);//translated 40 value in x axis , so that is appear from the outside screen of the right 
    // side with fly aniomation
    glTranslatef(_move, 0, 0);
    //glScalef(2, 2, 1);
    glColor3f(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2f(97.08, 70.6);
    glVertex2f(96.88, 70.75);
    glVertex2f(96.4, 70.8);
    glVertex2f(96.2, 70.2);
    glVertex2f(95.6, 69.4);
    glVertex2f(96.4, 70);
    glVertex2f(97.25, 69.85);


    glEnd();


    glBegin(GL_POLYGON);
    glVertex2f(99, 70.5);
    glVertex2f(98.22, 70.74);
    glVertex2f(97.08, 70.6);
    glVertex2f(97.25, 69.85);
    glVertex2f(97.75, 69.5);
    glVertex2f(98.45, 69.6);


    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(100.84, 70.26);
    glVertex2f(100.6, 70.4);
    glVertex2f(99.643, 70.4080);
    glVertex2f(99, 70.5);
    glVertex2f(98.22, 70.74);
    glVertex2f(98.45, 69.6);
    glVertex2f(99.2708976830173, 69.7946980991128);
    glVertex2f(100.12, 70.1);


    glEnd();



    //wing 1
    if (state) {
        /*glColor3f(1, 0, 0);
        glBegin(GL_POLYGON);
        glVertex2f(98.4, 71.5);
        glVertex2f(98, 72.8);
        glVertex2f(97.6, 71.4);
        glVertex2f(97.6, 70.2);
        glVertex2f(98.4, 70.4);
        glVertex2f(98.4, 71.5);

        glEnd();*/


        glColor3f(0, 0, 0);
        glBegin(GL_POLYGON);
        glVertex2f(98.8, 71.8);
        glVertex2f(98.38, 72.9);
        glVertex2f(97.4, 71.2);
        glVertex2f(97.35, 70.25);
        glVertex2f(98.85, 70.35);


        glEnd();
    }

    // wing 2
    if (!state) {
        /*
glColor3f(1, 0, 0);
glBegin(GL_POLYGON);
glVertex2f(98.3, 69.9);
glVertex2f(100.2, 69.6);
glVertex2f(98.3, 70.6);
glVertex2f(97.5, 70.4);
glVertex2f(98.3, 69.9);


glEnd();*/


        glColor3f(0, 0, 0);
        glBegin(GL_POLYGON);
        glVertex2f(98, 69.4);
        glVertex2f(100, 68.5);
        glVertex2f(98.6, 70.55);
        glVertex2f(97.4, 70.2);



        glEnd();

        // 3
        /*
        glBegin(GL_POLYGON);
        glVertex2f(98.85, 70.45);
        glVertex2f(99.65, 71.4);
        glVertex2f(97.4, 70.55);
        glVertex2f(98, 70.15);

        glEnd();
        */



    }

    //left leg
    glColor3f(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2f(98.62, 69.34);
    glVertex2f(98.9, 69.25);
    glVertex2f(98.68, 69.38);
    glVertex2f(98.653547, 69.64827);
    glVertex2f(98.45, 69.6);
    glVertex2f(98.59, 69.49);


    glEnd();

    //leg2
    glBegin(GL_POLYGON);
    glVertex2f(98.72, 69.44);
    glVertex2f(98.95, 69.35);
    glVertex2f(98.75, 69.5);
    glVertex2f(98.7270945266668, 69.6650693284027);
    glVertex2f(98.653547, 69.64827);



    glEnd();

    glPopMatrix();


}


void bird02() {
    glPushMatrix();
    glTranslatef(45, -5, 0);
    glTranslatef(_move, 0, 0);
    //glScalef(2, 2, 1);
    glColor3f(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2f(97.08, 70.6);
    glVertex2f(96.88, 70.75);
    glVertex2f(96.4, 70.8);
    glVertex2f(96.2, 70.2);
    glVertex2f(95.6, 69.4);
    glVertex2f(96.4, 70);
    glVertex2f(97.25, 69.85);


    glEnd();


    glBegin(GL_POLYGON);
    glVertex2f(99, 70.5);
    glVertex2f(98.22, 70.74);
    glVertex2f(97.08, 70.6);
    glVertex2f(97.25, 69.85);
    glVertex2f(97.75, 69.5);
    glVertex2f(98.45, 69.6);


    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(100.84, 70.26);
    glVertex2f(100.6, 70.4);
    glVertex2f(99.643, 70.4080);
    glVertex2f(99, 70.5);
    glVertex2f(98.22, 70.74);
    glVertex2f(98.45, 69.6);
    glVertex2f(99.2708976830173, 69.7946980991128);
    glVertex2f(100.12, 70.1);


    glEnd();



    //wing 1
    if (state) {
        /*glColor3f(1, 0, 0);
        glBegin(GL_POLYGON);
        glVertex2f(98.4, 71.5);
        glVertex2f(98, 72.8);
        glVertex2f(97.6, 71.4);
        glVertex2f(97.6, 70.2);
        glVertex2f(98.4, 70.4);
        glVertex2f(98.4, 71.5);

        glEnd();*/


        glColor3f(0, 0, 0);
        glBegin(GL_POLYGON);
        glVertex2f(98.8, 71.8);
        glVertex2f(98.38, 72.9);
        glVertex2f(97.4, 71.2);
        glVertex2f(97.35, 70.25);
        glVertex2f(98.85, 70.35);


        glEnd();
    }

    // wing 2
    if (!state) {
        /*
glColor3f(1, 0, 0);
        glBegin(GL_POLYGON);
        glVertex2f(98.3, 69.9);
        glVertex2f(100.2, 69.6);
        glVertex2f(98.3, 70.6);
        glVertex2f(97.5, 70.4);
        glVertex2f(98.3, 69.9);


        glEnd();*/


        glColor3f(0, 0, 0);
        glBegin(GL_POLYGON);
        glVertex2f(98, 69.4);
        glVertex2f(100, 68.5);
        glVertex2f(98.6, 70.55);
        glVertex2f(97.4, 70.2);



        glEnd();

        // 3
        /*
        glBegin(GL_POLYGON);
        glVertex2f(98.85, 70.45);
        glVertex2f(99.65, 71.4);
        glVertex2f(97.4, 70.55);
        glVertex2f(98, 70.15);

        glEnd();
        */



    }

    //left leg
    glColor3f(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2f(98.62, 69.34);
    glVertex2f(98.9, 69.25);
    glVertex2f(98.68, 69.38);
    glVertex2f(98.653547, 69.64827);
    glVertex2f(98.45, 69.6);
    glVertex2f(98.59, 69.49);


    glEnd();

    //leg2
    glBegin(GL_POLYGON);
    glVertex2f(98.72, 69.44);
    glVertex2f(98.95, 69.35);
    glVertex2f(98.75, 69.5);
    glVertex2f(98.7270945266668, 69.6650693284027);
    glVertex2f(98.653547, 69.64827);



    glEnd();

    glPopMatrix();


}

void bird03() {
    glPushMatrix();
    glTranslatef(50, 0, 0);
    glTranslatef(_move, 0, 0);
    //glScalef(2, 2, 1);
    glColor3f(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2f(97.08, 70.6);
    glVertex2f(96.88, 70.75);
    glVertex2f(96.4, 70.8);
    glVertex2f(96.2, 70.2);
    glVertex2f(95.6, 69.4);
    glVertex2f(96.4, 70);
    glVertex2f(97.25, 69.85);


    glEnd();


    glBegin(GL_POLYGON);
    glVertex2f(99, 70.5);
    glVertex2f(98.22, 70.74);
    glVertex2f(97.08, 70.6);
    glVertex2f(97.25, 69.85);
    glVertex2f(97.75, 69.5);
    glVertex2f(98.45, 69.6);


    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(100.84, 70.26);
    glVertex2f(100.6, 70.4);
    glVertex2f(99.643, 70.4080);
    glVertex2f(99, 70.5);
    glVertex2f(98.22, 70.74);
    glVertex2f(98.45, 69.6);
    glVertex2f(99.2708976830173, 69.7946980991128);
    glVertex2f(100.12, 70.1);


    glEnd();



    //wing 1
    if (state) {
        /*glColor3f(1, 0, 0);
        glBegin(GL_POLYGON);
        glVertex2f(98.4, 71.5);
        glVertex2f(98, 72.8);
        glVertex2f(97.6, 71.4);
        glVertex2f(97.6, 70.2);
        glVertex2f(98.4, 70.4);
        glVertex2f(98.4, 71.5);

        glEnd();*/


        glColor3f(0, 0, 0);
        glBegin(GL_POLYGON);
        glVertex2f(98.8, 71.8);
        glVertex2f(98.38, 72.9);
        glVertex2f(97.4, 71.2);
        glVertex2f(97.35, 70.25);
        glVertex2f(98.85, 70.35);


        glEnd();
    }

    // wing 2
    if (!state) {
        /*
glColor3f(1, 0, 0);
glBegin(GL_POLYGON);
glVertex2f(98.3, 69.9);
glVertex2f(100.2, 69.6);
glVertex2f(98.3, 70.6);
glVertex2f(97.5, 70.4);
glVertex2f(98.3, 69.9);


glEnd();*/


        glColor3f(0, 0, 0);
        glBegin(GL_POLYGON);
        glVertex2f(98, 69.4);
        glVertex2f(100, 68.5);
        glVertex2f(98.6, 70.55);
        glVertex2f(97.4, 70.2);



        glEnd();

        // 3
        /*
        glBegin(GL_POLYGON);
        glVertex2f(98.85, 70.45);
        glVertex2f(99.65, 71.4);
        glVertex2f(97.4, 70.55);
        glVertex2f(98, 70.15);

        glEnd();
        */



    }

    //left leg
    glColor3f(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2f(98.62, 69.34);
    glVertex2f(98.9, 69.25);
    glVertex2f(98.68, 69.38);
    glVertex2f(98.653547, 69.64827);
    glVertex2f(98.45, 69.6);
    glVertex2f(98.59, 69.49);


    glEnd();

    //leg2
    glBegin(GL_POLYGON);
    glVertex2f(98.72, 69.44);
    glVertex2f(98.95, 69.35);
    glVertex2f(98.75, 69.5);
    glVertex2f(98.7270945266668, 69.6650693284027);
    glVertex2f(98.653547, 69.64827);



    glEnd();

    glPopMatrix();


}

void bird04() {
    glPushMatrix();
    glTranslatef(55, -5, 0);
    glTranslatef(_move, 0, 0);
    //glScalef(2, 2, 1);
    glColor3f(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2f(97.08, 70.6);
    glVertex2f(96.88, 70.75);
    glVertex2f(96.4, 70.8);
    glVertex2f(96.2, 70.2);
    glVertex2f(95.6, 69.4);
    glVertex2f(96.4, 70);
    glVertex2f(97.25, 69.85);


    glEnd();


    glBegin(GL_POLYGON);
    glVertex2f(99, 70.5);
    glVertex2f(98.22, 70.74);
    glVertex2f(97.08, 70.6);
    glVertex2f(97.25, 69.85);
    glVertex2f(97.75, 69.5);
    glVertex2f(98.45, 69.6);


    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(100.84, 70.26);
    glVertex2f(100.6, 70.4);
    glVertex2f(99.643, 70.4080);
    glVertex2f(99, 70.5);
    glVertex2f(98.22, 70.74);
    glVertex2f(98.45, 69.6);
    glVertex2f(99.2708976830173, 69.7946980991128);
    glVertex2f(100.12, 70.1);


    glEnd();



    //wing 1
    if (state) {
        /*glColor3f(1, 0, 0);
        glBegin(GL_POLYGON);
        glVertex2f(98.4, 71.5);
        glVertex2f(98, 72.8);
        glVertex2f(97.6, 71.4);
        glVertex2f(97.6, 70.2);
        glVertex2f(98.4, 70.4);
        glVertex2f(98.4, 71.5);

        glEnd();*/


        glColor3f(0, 0, 0);
        glBegin(GL_POLYGON);
        glVertex2f(98.8, 71.8);
        glVertex2f(98.38, 72.9);
        glVertex2f(97.4, 71.2);
        glVertex2f(97.35, 70.25);
        glVertex2f(98.85, 70.35);


        glEnd();
    }

    // wing 2
    if (!state) {
        /*
glColor3f(1, 0, 0);
glBegin(GL_POLYGON);
glVertex2f(98.3, 69.9);
glVertex2f(100.2, 69.6);
glVertex2f(98.3, 70.6);
glVertex2f(97.5, 70.4);
glVertex2f(98.3, 69.9);


glEnd();*/


        glColor3f(0, 0, 0);
        glBegin(GL_POLYGON);
        glVertex2f(98, 69.4);
        glVertex2f(100, 68.5);
        glVertex2f(98.6, 70.55);
        glVertex2f(97.4, 70.2);



        glEnd();

        // 3
        /*
        glBegin(GL_POLYGON);
        glVertex2f(98.85, 70.45);
        glVertex2f(99.65, 71.4);
        glVertex2f(97.4, 70.55);
        glVertex2f(98, 70.15);

        glEnd();
        */



    }

    //left leg
    glColor3f(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2f(98.62, 69.34);
    glVertex2f(98.9, 69.25);
    glVertex2f(98.68, 69.38);
    glVertex2f(98.653547, 69.64827);
    glVertex2f(98.45, 69.6);
    glVertex2f(98.59, 69.49);


    glEnd();

    //leg2
    glBegin(GL_POLYGON);
    glVertex2f(98.72, 69.44);
    glVertex2f(98.95, 69.35);
    glVertex2f(98.75, 69.5);
    glVertex2f(98.7270945266668, 69.6650693284027);
    glVertex2f(98.653547, 69.64827);



    glEnd();

    glPopMatrix();


}

void bird05() {
    glPushMatrix();
    glTranslatef(52.5, -10, 0);//translated 40 value in x axis , so that is appear from the outside screen of the right 
    // side with fly aniomation
    glTranslatef(_move, 0, 0);
    //glScalef(2, 2, 1);
    glColor3f(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2f(97.08, 70.6);
    glVertex2f(96.88, 70.75);
    glVertex2f(96.4, 70.8);
    glVertex2f(96.2, 70.2);
    glVertex2f(95.6, 69.4);
    glVertex2f(96.4, 70);
    glVertex2f(97.25, 69.85);


    glEnd();


    glBegin(GL_POLYGON);
    glVertex2f(99, 70.5);
    glVertex2f(98.22, 70.74);
    glVertex2f(97.08, 70.6);
    glVertex2f(97.25, 69.85);
    glVertex2f(97.75, 69.5);
    glVertex2f(98.45, 69.6);


    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(100.84, 70.26);
    glVertex2f(100.6, 70.4);
    glVertex2f(99.643, 70.4080);
    glVertex2f(99, 70.5);
    glVertex2f(98.22, 70.74);
    glVertex2f(98.45, 69.6);
    glVertex2f(99.2708976830173, 69.7946980991128);
    glVertex2f(100.12, 70.1);


    glEnd();



    //wing 1
    if (state) {
        /*glColor3f(1, 0, 0);
        glBegin(GL_POLYGON);
        glVertex2f(98.4, 71.5);
        glVertex2f(98, 72.8);
        glVertex2f(97.6, 71.4);
        glVertex2f(97.6, 70.2);
        glVertex2f(98.4, 70.4);
        glVertex2f(98.4, 71.5);

        glEnd();*/


        glColor3f(0, 0, 0);
        glBegin(GL_POLYGON);
        glVertex2f(98.8, 71.8);
        glVertex2f(98.38, 72.9);
        glVertex2f(97.4, 71.2);
        glVertex2f(97.35, 70.25);
        glVertex2f(98.85, 70.35);


        glEnd();
    }

    // wing 2
    if (!state) {
        /*
glColor3f(1, 0, 0);
glBegin(GL_POLYGON);
glVertex2f(98.3, 69.9);
glVertex2f(100.2, 69.6);
glVertex2f(98.3, 70.6);
glVertex2f(97.5, 70.4);
glVertex2f(98.3, 69.9);


        glEnd();*/


        glColor3f(0, 0, 0);
        glBegin(GL_POLYGON);
        glVertex2f(98, 69.4);
        glVertex2f(100, 68.5);
        glVertex2f(98.6, 70.55);
        glVertex2f(97.4, 70.2);



        glEnd();

        // 3
        /*
        glBegin(GL_POLYGON);
        glVertex2f(98.85, 70.45);
        glVertex2f(99.65, 71.4);
        glVertex2f(97.4, 70.55);
        glVertex2f(98, 70.15);

        glEnd();
        */



    }

    //left leg
    glColor3f(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2f(98.62, 69.34);
    glVertex2f(98.9, 69.25);
    glVertex2f(98.68, 69.38);
    glVertex2f(98.653547, 69.64827);
    glVertex2f(98.45, 69.6);
    glVertex2f(98.59, 69.49);


    glEnd();

    //leg2
    glBegin(GL_POLYGON);
    glVertex2f(98.72, 69.44);
    glVertex2f(98.95, 69.35);
    glVertex2f(98.75, 69.5);
    glVertex2f(98.7270945266668, 69.6650693284027);
    glVertex2f(98.653547, 69.64827);



    glEnd();

    glPopMatrix();





}



//This funtion is for the wing chaniing functionality of the birds...
void change_wing(int value) {
    state = !state;

    glutPostRedisplay();
    glutTimerFunc(80, change_wing, 0);

}


// This function is for the movement of the birds.. The flying animation...
void fly(int value) {
    _move -= 0.5;
    //cout << _move << endl;

    if (_move < -150) {
        _move = 0;
    }

    glutPostRedisplay();
    glutTimerFunc(20, fly, 0);

}

void PlayMusic(const string& path) {
    // if (_ismovetrain)
    PlaySound(path.c_str(), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);
    glutPostRedisplay();
}

//This function is for the movement of the train..
void _move_train(int value) {


    if (_ismovetrain) {
        _movetrain -= 0.5;
        // PlayMusic("E:/SPRING 23-24/COMPUTER GRAPHICS/Computer-Graphics-main/OpenGL Programming/trainsound.wav");

       // cout << _movetrain << endl;

        if (_movetrain == -0.5) {

            PlayMusic("E:/SPRING 23-24/COMPUTER GRAPHICS/Computer-Graphics-main/OpenGL Programming/trainsound.wav");
        }

        if (_movetrain < -230) {
            _movetrain = 0;

        }

        // train_music("E:/SPRING 23-24/COMPUTER GRAPHICS/Computer-Graphics-main/OpenGL Programming/trainsound.wav");
        glutPostRedisplay();
    }
    glutTimerFunc(20, _move_train, 0);
}





//This function is used for the keypress functionality to the toggle the movement of the train;
void _move_train_keypress(unsigned char key, int x, int y) {
    switch (key) {
    case 'a':
        _ismovetrain = true;;
        break;
    case 'w':
        _ismovetrain = false;
        // PlayMusic(NULL);
        break;
    }
    glutPostRedisplay();
    // cout << _ismovetrain << endl;
}




void play_trainmusic(int value) {
    static bool soundPlaying = false;
    if (_ismovetrain && !soundPlaying) {
        cout << "play_trainmusic function called" << endl; // Debug output
        PlayMusic("E:/SPRING 23-24/COMPUTER GRAPHICS/Computer-Graphics-main/OpenGL Programming/trainsound.wav");
        soundPlaying = true;
    }
    else if (!_ismovetrain && soundPlaying) {
        // Stop the sound
        soundPlaying = false;
        //PlayMusic(NULL); // Stop the currently playing sound
    }
    glutTimerFunc(2000, play_trainmusic, 0);
}



void display() {

    glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // Set background color to black and opaque
    glClear(GL_COLOR_BUFFER_BIT);

    //rain();
    left_pond(); // ID - 01
    front_road(); // ID - 02
    side_green_area(); // ID - 03
    road(); // ID - 06

    //glPushMatrix();
    //glTranslatef(0, 3, 0);
    building_02(); // ID - 18
    building_01(); // ID - 17
    building_04(); // ID - 20
    building_03(); // ID - 19
    //glPopMatrix();


    /*
    train_platform();; // ID - 09
    train_piller01(); // ID - 10
    train_piller02(); // ID - 11
    train_piller03(); // ID - 12
    train_piller04(); // ID - 13





    //This push_pop matrix is for the train movement animation
    glPushMatrix();

    glTranslatef(80, 0, 0);
    glTranslatef(_movetrain, 0, 0);
    train01(); // ID - 14
    train02(); // ID - 15
    train03(); // ID - 16
    glPopMatrix();


    poll_first(); // ID - 04
    poll_second(); // ID - 05

*/

    ciecle();// ID - 08


    //Five birds flying 
    bird01();
    bird02();
    bird03();
    bird04();
    bird05();



    glFlush(); // Render now



}

/* Main function: GLUT runs as a console application starting at main() */

int main(int argc, char** argv) {

    glutInitWindowSize(1420, 920); // Set the window's initial width & height
    glutInit(&argc, argv); // Initialize GLUT
    glutInitWindowPosition((glutGet(GLUT_SCREEN_WIDTH) - 1420) / 2,
        (glutGet(GLUT_SCREEN_HEIGHT) - 950) / 2);

    glutCreateWindow("Futureistic city"); // Create a window with the given title

    glutDisplayFunc(display); // Register display callback handler for window re-paint


    glutTimerFunc(20, change_wing, 0);
    glutTimerFunc(80, fly, 0);
    glutTimerFunc(20, _move_train, 0);

    glutKeyboardUpFunc(_move_train_keypress);
    gluOrtho2D(0, +130, 0, 80);
    glutMainLoop(); // Enter the event-processing loop

    return 0;

}

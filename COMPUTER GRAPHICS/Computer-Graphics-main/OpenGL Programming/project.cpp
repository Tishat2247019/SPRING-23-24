#include <windows.h> // for MS Windows
#include<iostream>
#include <GL/glut.h> // GLUT, include glu.h and gl.h
#include <math.h>
#include "glutil.h"
#include <cmath>
#include <ctime>

using namespace std;

float _movetrain = 0;
bool _ismovetrain = false;
bool _isflybird = false;

float speed = 1;

int statefire = 1;
int statefireedge = 1;
int statefirezoom = 1;

float zoom = 1;

float fireleftmove = 0;
float fireupmove = 0;


//FIRE CONTROLLING VARIABLE

bool showfire = false;
int countfire = 1;



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
    // glColor3f(1, 1, 1);

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
    // glColor3f(0.27, 0.5, 0.29);
    glColor3f(1, 1, 1);

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

    //glColor3f(0.52, 0.55, 0.64);
    glColor3f(1, 1, 1);
    glBegin(GL_POLYGON);

    glVertex2f(0, 15.25);
    glVertex2f(0, 21.9);
    glVertex2f(130, 21.9);
    glVertex2f(130, 15.25);

    glEnd();

    ApplyTexture(0, 15.25, 0, 21.9, 10, 21.9, 10, 15.25, textures[1].textureID);
    ApplyTexture(10, 15.25, 10, 21.9, 20, 21.9, 20, 15.25, textures[1].textureID);
    ApplyTexture(20, 15.25, 20, 21.9, 30, 21.9, 30, 15.25, textures[1].textureID);
    ApplyTexture(30, 15.25, 30, 21.9, 40, 21.9, 40, 15.25, textures[1].textureID);
    ApplyTexture(40, 15.25, 40, 21.9, 50, 21.9, 50, 15.25, textures[1].textureID);
    ApplyTexture(50, 15.25, 50, 21.9, 60, 21.9, 60, 15.25, textures[1].textureID);
    ApplyTexture(60, 15.25, 60, 21.9, 70, 21.9, 70, 15.25, textures[1].textureID);
    ApplyTexture(70, 15.25, 70, 21.9, 80, 21.9, 80, 15.25, textures[1].textureID);
    ApplyTexture(80, 15.25, 80, 21.9, 90, 21.9, 90, 15.25, textures[1].textureID);
    ApplyTexture(90, 15.25, 90, 21.9, 100, 21.9, 100, 15.25, textures[1].textureID);
    ApplyTexture(100, 15.25, 100, 21.9, 110, 21.9, 110, 15.25, textures[1].textureID);
    ApplyTexture(110, 15.25, 110, 21.9, 120, 21.9, 120, 15.25, textures[1].textureID);
    ApplyTexture(120, 15.25, 120, 21.9, 130, 21.9, 130, 15.25, textures[1].textureID);



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


// ID - 21

void building_05() {

    //FIRST LOWER PORTION OF THE BUILDING 05

    glColor3f(0.93, 0.82, 0.65);
    glBegin(GL_POLYGON);


    glVertex2f(51, 21.9);
    glVertex2f(51, 23.5);
    glVertex2f(76.5, 23.5);
    glVertex2f(76.5, 21.9);

    glEnd();


    //SECOND LOWER PORTION OF THE BUILDING 05

    glColor3f(0.8, 0.7, 0.55);
    glBegin(GL_POLYGON);


    glVertex2f(52.5, 23.5);
    glVertex2f(52.5, 24.7);
    glVertex2f(75, 24.7);
    glVertex2f(75, 23.5);

    glEnd();



    //THIRD LOWER PORTION OF THE BUILDING 06


    glColor3f(0.78, 0.56, 0.4);
    glBegin(GL_POLYGON);


    glVertex2f(53.3, 24.7);
    glVertex2f(53.3, 27.35);
    glVertex2f(74.2, 27.35);
    glVertex2f(74.2, 24.7);

    glEnd();

    //BOTH SIDE MORE LIGHTER BACKGROUND OF THE MIDDLE MORE DEEPER 
    //PORTION

    glColor3f(0.93, 0.82, 0.65);
    glBegin(GL_POLYGON);


    glVertex2f(53.9, 27.35);
    glVertex2f(53.9, 32.7);
    glVertex2f(73.6, 32.7);
    glVertex2f(73.6, 27.35);

    glEnd();


    //UPPER SLIGHTHLY DEEPER PORTION OF THE MIDDLE 
    // MORE DEEPER PORTION

    glColor3f(0.8, 0.7, 0.55);
    glBegin(GL_POLYGON);


    glVertex2f(53.9, 32.7);
    glVertex2f(53.9, 34);
    glVertex2f(73.6, 34);
    glVertex2f(73.6, 32.7);

    glEnd();

    //MIDDLE MORE DEEPER PORTION OF THE BUILDING 05

    glColor3f(0.6, 0.39, 0.28);
    glBegin(GL_POLYGON);


    glVertex2f(55.5, 27.35);
    glVertex2f(55.5, 32.7);
    glVertex2f(72, 32.7);
    glVertex2f(72, 27.35);

    glEnd();


    //5TH LOWER PORTION

    glColor3f(0.93, 0.82, 0.65);
    glBegin(GL_POLYGON);


    glVertex2f(55.6, 34);
    glVertex2f(55.6, 34.9);
    glVertex2f(71.9, 34.9);
    glVertex2f(71.9, 34);

    glEnd();


    //6TH ROUNDED LOWER PORTION

    glColor3f(0.8, 0.7, 0.55);
    glBegin(GL_POLYGON);


    glVertex2f(55.6, 34.9);
    glVertex2f(55.2, 35.1);
    glVertex2f(55.1, 35.3);
    glVertex2f(55.1, 35.39);
    glVertex2f(55.2, 35.6);
    glVertex2f(55.4, 35.8);
    glVertex2f(72.1, 35.8);
    glVertex2f(72.3, 35.6);
    glVertex2f(72.4, 35.4);
    glVertex2f(72.4, 35.3);
    glVertex2f(72.3, 35.1);
    glVertex2f(72.3, 35.1);
    glVertex2f(72.1, 34.9);

    glEnd();


    //7TH TRIANGLE TYPE PORTION

    glColor3f(0.93, 0.82, 0.65);
    glBegin(GL_POLYGON);


    glVertex2f(55.9, 35.8);
    glVertex2f(63.75, 38.7);
    glVertex2f(71.6, 35.8);

    glEnd();


    //TWO PILLER CODES START HERE


    // FIRST PILLER

    //FIRST LOWER PORTION OF THE FIRST PILLER

    glColor3f(0.93, 0.82, 0.65);
    glBegin(GL_POLYGON);


    glVertex2f(56.8, 24.7);
    glVertex2f(56.8, 25.4);
    glVertex2f(59.6, 25.4);
    glVertex2f(59.6, 24.7);

    glEnd();

    //SECOND LOWER PORTION OF THE FIRST PILLER

    glColor3f(0.6, 0.39, 0.28);
    glBegin(GL_POLYGON);


    glVertex2f(56.8, 25.4);
    glVertex2f(56.8, 25.8);
    glVertex2f(59.6, 25.8);
    glVertex2f(59.6, 25.4);

    glEnd();

    //MAIN AREA OF THE FIRST PILLER

    glColor3f(0.93, 0.82, 0.65);
    glBegin(GL_POLYGON);


    glVertex2f(57.4, 25.8);
    glVertex2f(57.75, 32);
    glVertex2f(58.65, 32);
    glVertex2f(59, 25.8);

    glEnd();

    //UPPER PORTION OF THE MAIN AREA OF TEH FIRST PILLER
    glColor3f(0.81, 0.71, 0.56);
    glBegin(GL_POLYGON);


    glVertex2f(57.75, 32);
    glVertex2f(57.6, 32.15);
    glVertex2f(58.8, 32.15);
    glVertex2f(58.65, 32);

    glEnd();

    //UPPER UPPER PORTION OF THE MAIN AREA OF THE FIRST PILLER

    glColor3f(0.93, 0.82, 0.65);
    glBegin(GL_POLYGON);


    glVertex2f(57.1, 32.15);
    glVertex2f(57.1, 32.7);
    glVertex2f(59.3, 32.7);
    glVertex2f(59.3, 32.15);

    glEnd();


    //NOW TO DRAW THE SECOND PILLER, 
    // I AM USING THE SAME CODE FROM THE 
    //FIRST PILLER, JUST TRANSLATING
    // X AXIS BY 11.1



    glPushMatrix();
    glTranslatef(11.1, 0, 0);



    glColor3f(0.93, 0.82, 0.65);
    glBegin(GL_POLYGON);


    glVertex2f(56.8, 24.7);
    glVertex2f(56.8, 25.4);
    glVertex2f(59.6, 25.4);
    glVertex2f(59.6, 24.7);

    glEnd();

    //SECOND LOWER PORTION OF THE FIRST PILLER

    glColor3f(0.6, 0.39, 0.28);
    glBegin(GL_POLYGON);


    glVertex2f(56.8, 25.4);
    glVertex2f(56.8, 25.8);
    glVertex2f(59.6, 25.8);
    glVertex2f(59.6, 25.4);

    glEnd();

    //MAIN AREA OF THE FIRST PILLER

    glColor3f(0.93, 0.82, 0.65);
    glBegin(GL_POLYGON);


    glVertex2f(57.4, 25.8);
    glVertex2f(57.75, 32);
    glVertex2f(58.65, 32);
    glVertex2f(59, 25.8);

    glEnd();

    //UPPER PORTION OF THE MAIN AREA OF TEH FIRST PILLER
    glColor3f(0.81, 0.71, 0.56);
    glBegin(GL_POLYGON);


    glVertex2f(57.75, 32);
    glVertex2f(57.6, 32.15);
    glVertex2f(58.8, 32.15);
    glVertex2f(58.65, 32);

    glEnd();

    //UPPER UPPER PORTION OF THE MAIN AREA OF THE FIRST PILLER

    glColor3f(0.93, 0.82, 0.65);
    glBegin(GL_POLYGON);


    glVertex2f(57.1, 32.15);
    glVertex2f(57.1, 32.7);
    glVertex2f(59.3, 32.7);
    glVertex2f(59.3, 32.15);

    glEnd();

    glPopMatrix();


    //SECOND PILLER ENDS HERE


    // NOW DRAWING THE MIDDLE DOOR ROUNDED



    //BACKGROUND MORE LIGHER COLOR OF THE MIDDLE DOOR



    glColor3f(0.93, 0.82, 0.65);
    glBegin(GL_POLYGON);


    glVertex2f(61, 24.7);
    glVertex2f(61, 27.35);
    glVertex2f(61.4, 29.1);
    glVertex2f(62.6, 30);
    glVertex2f(63.65, 30.4);
    glVertex2f(64.9, 29.9);
    glVertex2f(65.7, 29.1);
    glVertex2f(66.25, 27.35);
    glVertex2f(66.25, 24.7);

    glEnd();

    //MAIN AREA MIDDLE OF THE MIDDLE DOOR

    glColor3f(0.78, 0.31, 0.27);
    glBegin(GL_POLYGON);


    glVertex2f(61.2, 24.7);
    glVertex2f(61.2, 27.35);
    glVertex2f(61.6, 29);
    glVertex2f(62.6, 29.8);
    glVertex2f(63.65, 30.2);
    glVertex2f(64.8, 29.8);
    glVertex2f(65.6, 29);
    glVertex2f(66.1, 27.35);
    glVertex2f(66.1, 24.7);

    glEnd();


    //HORIZONTAL LINE IN THE MIDDLE OF THE MAIN MIDDLE DOOR


    glLineWidth(2);
    glColor3f(0.93, 0.82, 0.65);
    glBegin(GL_LINES);


    glVertex2f(61.2, 27.25);
    glVertex2f(66.1, 27.25);

    glEnd();

    //VERTICAL LINE IN THE MIDDLE OF THE MAIN MIDDLE DOOR

    glLineWidth(2);
    glColor3f(0.93, 0.82, 0.65);
    glBegin(GL_LINES);


    glVertex2f(63.75, 27.3);
    glVertex2f(63.75, 24.7);

    glEnd();



    //SIDE MORE DEEPR HORIZONTAL DESIGNS



    //PRINTING COLUMN WISE


    //FIRST COLUMN FROM LEFT

    glColor3f(0.81, 0.7, 0.55);
    glBegin(GL_POLYGON);


    glVertex2f(53.9, 31.4);
    glVertex2f(53.9, 32);
    glVertex2f(55.5, 32);
    glVertex2f(55.5, 31.4);

    glEnd();


    glPushMatrix();

    glTranslatef(0, 1 * -1.2, 0);
    glBegin(GL_POLYGON);

    glVertex2f(53.9, 31.4);
    glVertex2f(53.9, 32);
    glVertex2f(55.5, 32);
    glVertex2f(55.5, 31.4);

    glEnd();

    glPopMatrix();


    glPushMatrix();

    glTranslatef(0, 2 * -1.2, 0);
    glBegin(GL_POLYGON);

    glVertex2f(53.9, 31.4);
    glVertex2f(53.9, 32);
    glVertex2f(55.5, 32);
    glVertex2f(55.5, 31.4);

    glEnd();

    glPopMatrix();

    glPushMatrix();

    glTranslatef(0, 3 * -1.2, 0);
    glBegin(GL_POLYGON);

    glVertex2f(53.9, 31.4);
    glVertex2f(53.9, 32);
    glVertex2f(55.5, 32);
    glVertex2f(55.5, 31.4);

    glEnd();

    glPopMatrix();

    //NOW PRINTING THE SECOND COLUMN OF THE 
    // RIGHT SIDE


    glPushMatrix();
    glTranslatef(18.1, 0, 0);



    glColor3f(0.81, 0.7, 0.55);
    glBegin(GL_POLYGON);


    glVertex2f(53.9, 31.4);
    glVertex2f(53.9, 32);
    glVertex2f(55.5, 32);
    glVertex2f(55.5, 31.4);

    glEnd();


    glPushMatrix();

    glTranslatef(0, 1 * -1.2, 0);
    glBegin(GL_POLYGON);

    glVertex2f(53.9, 31.4);
    glVertex2f(53.9, 32);
    glVertex2f(55.5, 32);
    glVertex2f(55.5, 31.4);

    glEnd();

    glPopMatrix();


    glPushMatrix();

    glTranslatef(0, 2 * -1.2, 0);
    glBegin(GL_POLYGON);

    glVertex2f(53.9, 31.4);
    glVertex2f(53.9, 32);
    glVertex2f(55.5, 32);
    glVertex2f(55.5, 31.4);

    glEnd();

    glPopMatrix();

    glPushMatrix();

    glTranslatef(0, 3 * -1.2, 0);
    glBegin(GL_POLYGON);

    glVertex2f(53.9, 31.4);
    glVertex2f(53.9, 32);
    glVertex2f(55.5, 32);
    glVertex2f(55.5, 31.4);

    glEnd();

    glPopMatrix();

    glPopMatrix();


    //NOW PRINTING THE BD FLAG

    //BACKGROUND MOFR DEEPER COLOR CIRCLE

    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    for (int i = 0;i < 360;i++)
    {
        glColor3f(0.7, 0.6, 0.49);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = 1.554018;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 63.5, y + 33);
    }

    glEnd();

    //GREEN CIRCLE OF BD FLAG

    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    for (int i = 0;i < 360;i++)
    {
        glColor3f(0.04, 0.31, 0.03);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = 1.271368;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 63.5, y + 33);
    }

    glEnd();


    //RED CIRCLE OF BD FLAG

    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    for (int i = 0;i < 360;i++)
    {
        glColor3f(0.72, 0.09, 0.09);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = 0.66014;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 63.5, y + 33);
    }

    glEnd();






}

// ID - 21

void building_06() {

    //FIRST LOWER PORTION OF THE BUILDING 06

    glColor3f(0.57, 0.51, 0.47);
    glBegin(GL_POLYGON);

    glVertex2f(47, 21.9);
    glVertex2f(47, 54);
    glVertex2f(66.5, 54);
    glVertex2f(66.5, 21.9);

    glEnd();


    //SECOND MORE DEEPER PORTION OF THE BUILDING 06


    glColor3f(0.45, 0.4, 0.38);
    glBegin(GL_POLYGON);

    glVertex2f(46, 54);
    glVertex2f(46, 55);
    glVertex2f(67.5, 55);
    glVertex2f(67.5, 54);

    glEnd();

    //THIRD PORTION OF THE BUILDING 06
    //TOP ONE

    glColor3f(0.68, 0.56, 0.51);
    glBegin(GL_POLYGON);

    glVertex2f(45, 55);
    glVertex2f(45, 57);
    glVertex2f(68.5, 57);
    glVertex2f(68.5, 55);

    glEnd();



    //NOW PRINTING THE WINDOWS OF THE BUILDING SIX
    //PRINTING ROW WISE

    //FIRST ROW

    //BACKGROUND MORE DEEPER

    glColor3f(0.45, 0.4, 0.38);
    glBegin(GL_POLYGON);

    glVertex2f(48.5, 49);
    glVertex2f(48.5, 52.5);
    glVertex2f(51, 52.5);
    glVertex2f(51, 49);

    glEnd();

    //MAIN WHITE COLOR LIKE MIDELE AREA OF EACH WINDOW

    glColor3f(1, 0.96, 0.92);
    glBegin(GL_POLYGON);

    glVertex2f(48.7, 49.2);
    glVertex2f(48.7, 52.3);
    glVertex2f(50.8, 52.3);
    glVertex2f(50.8, 49.2);

    glEnd();

    //HORIZONTAL LINE IN THE MIDDLE OF EACH WINDOW

    glColor3f(0.45, 0.4, 0.38);
    glLineWidth(3);
    glBegin(GL_LINES);

    glVertex2f(48.7, 50.95);
    glVertex2f(50.8, 50.95);

    glEnd();


    // NOW PRINTING ALL THE WINDOWS OF THE FIRST ROW

    glPushMatrix();
    glTranslatef(1 * 3.5, 0, 0);

    //BACKGROUND MORE DEEPER

    glColor3f(0.45, 0.4, 0.38);
    glBegin(GL_POLYGON);

    glVertex2f(48.5, 49);
    glVertex2f(48.5, 52.5);
    glVertex2f(51, 52.5);
    glVertex2f(51, 49);

    glEnd();

    //MAIN WHITE COLOR LIKE MIDELE AREA OF EACH WINDOW

    glColor3f(1, 0.96, 0.92);
    glBegin(GL_POLYGON);

    glVertex2f(48.7, 49.2);
    glVertex2f(48.7, 52.3);
    glVertex2f(50.8, 52.3);
    glVertex2f(50.8, 49.2);

    glEnd();

    //HORIZONTAL LINE IN THE MIDDLE OF EACH WINDOW

    glColor3f(0.45, 0.4, 0.38);
    glLineWidth(3);
    glBegin(GL_LINES);

    glVertex2f(48.7, 50.95);
    glVertex2f(50.8, 50.95);

    glEnd();

    glPopMatrix();


    glPushMatrix();
    glTranslatef(2 * 3.5, 0, 0);

    //BACKGROUND MORE DEEPER

    glColor3f(0.45, 0.4, 0.38);
    glBegin(GL_POLYGON);

    glVertex2f(48.5, 49);
    glVertex2f(48.5, 52.5);
    glVertex2f(51, 52.5);
    glVertex2f(51, 49);

    glEnd();

    //MAIN WHITE COLOR LIKE MIDELE AREA OF EACH WINDOW

    glColor3f(1, 0.96, 0.92);
    glBegin(GL_POLYGON);

    glVertex2f(48.7, 49.2);
    glVertex2f(48.7, 52.3);
    glVertex2f(50.8, 52.3);
    glVertex2f(50.8, 49.2);

    glEnd();

    //HORIZONTAL LINE IN THE MIDDLE OF EACH WINDOW

    glColor3f(0.45, 0.4, 0.38);
    glLineWidth(3);
    glBegin(GL_LINES);

    glVertex2f(48.7, 50.95);
    glVertex2f(50.8, 50.95);

    glEnd();

    glPopMatrix();



    glPushMatrix();
    glTranslatef(3 * 3.5, 0, 0);

    //BACKGROUND MORE DEEPER

    glColor3f(0.45, 0.4, 0.38);
    glBegin(GL_POLYGON);

    glVertex2f(48.5, 49);
    glVertex2f(48.5, 52.5);
    glVertex2f(51, 52.5);
    glVertex2f(51, 49);

    glEnd();

    //MAIN WHITE COLOR LIKE MIDELE AREA OF EACH WINDOW

    glColor3f(1, 0.96, 0.92);
    glBegin(GL_POLYGON);

    glVertex2f(48.7, 49.2);
    glVertex2f(48.7, 52.3);
    glVertex2f(50.8, 52.3);
    glVertex2f(50.8, 49.2);

    glEnd();

    //HORIZONTAL LINE IN THE MIDDLE OF EACH WINDOW

    glColor3f(0.45, 0.4, 0.38);
    glLineWidth(3);
    glBegin(GL_LINES);

    glVertex2f(48.7, 50.95);
    glVertex2f(50.8, 50.95);

    glEnd();

    glPopMatrix();


    glPushMatrix();
    glTranslatef(4 * 3.5, 0, 0);

    //BACKGROUND MORE DEEPER

    glColor3f(0.45, 0.4, 0.38);
    glBegin(GL_POLYGON);

    glVertex2f(48.5, 49);
    glVertex2f(48.5, 52.5);
    glVertex2f(51, 52.5);
    glVertex2f(51, 49);

    glEnd();

    //MAIN WHITE COLOR LIKE MIDELE AREA OF EACH WINDOW

    glColor3f(1, 0.96, 0.92);
    glBegin(GL_POLYGON);

    glVertex2f(48.7, 49.2);
    glVertex2f(48.7, 52.3);
    glVertex2f(50.8, 52.3);
    glVertex2f(50.8, 49.2);

    glEnd();

    //HORIZONTAL LINE IN THE MIDDLE OF EACH WINDOW

    glColor3f(0.45, 0.4, 0.38);
    glLineWidth(3);
    glBegin(GL_LINES);

    glVertex2f(48.7, 50.95);
    glVertex2f(50.8, 50.95);

    glEnd();

    glPopMatrix();


    //NOW PRINTING ALL THE WINDOWS OF THE SECOND ROW
    //JUST TRANSLATING ALL THE WINDOWS OF THA FIRST ROW
    // IN Y AXIS

    //2ND ROW
    glPushMatrix();
    glTranslatef(0, 1 * -4.5, 0);

    //BACKGROUND MORE DEEPER

    glColor3f(0.45, 0.4, 0.38);
    glBegin(GL_POLYGON);

    glVertex2f(48.5, 49);
    glVertex2f(48.5, 52.5);
    glVertex2f(51, 52.5);
    glVertex2f(51, 49);

    glEnd();

    //MAIN WHITE COLOR LIKE MIDELE AREA OF EACH WINDOW

    glColor3f(1, 0.96, 0.92);
    glBegin(GL_POLYGON);

    glVertex2f(48.7, 49.2);
    glVertex2f(48.7, 52.3);
    glVertex2f(50.8, 52.3);
    glVertex2f(50.8, 49.2);

    glEnd();

    //HORIZONTAL LINE IN THE MIDDLE OF EACH WINDOW

    glColor3f(0.45, 0.4, 0.38);
    glLineWidth(3);
    glBegin(GL_LINES);

    glVertex2f(48.7, 50.95);
    glVertex2f(50.8, 50.95);

    glEnd();


    // NOW PRINTING ALL THE WINDOWS OF THE FIRST ROW

    glPushMatrix();
    glTranslatef(1 * 3.5, 0, 0);

    //BACKGROUND MORE DEEPER

    glColor3f(0.45, 0.4, 0.38);
    glBegin(GL_POLYGON);

    glVertex2f(48.5, 49);
    glVertex2f(48.5, 52.5);
    glVertex2f(51, 52.5);
    glVertex2f(51, 49);

    glEnd();

    //MAIN WHITE COLOR LIKE MIDELE AREA OF EACH WINDOW

    glColor3f(1, 0.96, 0.92);
    glBegin(GL_POLYGON);

    glVertex2f(48.7, 49.2);
    glVertex2f(48.7, 52.3);
    glVertex2f(50.8, 52.3);
    glVertex2f(50.8, 49.2);

    glEnd();

    //HORIZONTAL LINE IN THE MIDDLE OF EACH WINDOW

    glColor3f(0.45, 0.4, 0.38);
    glLineWidth(3);
    glBegin(GL_LINES);

    glVertex2f(48.7, 50.95);
    glVertex2f(50.8, 50.95);

    glEnd();

    glPopMatrix();


    glPushMatrix();
    glTranslatef(2 * 3.5, 0, 0);

    //BACKGROUND MORE DEEPER

    glColor3f(0.45, 0.4, 0.38);
    glBegin(GL_POLYGON);

    glVertex2f(48.5, 49);
    glVertex2f(48.5, 52.5);
    glVertex2f(51, 52.5);
    glVertex2f(51, 49);

    glEnd();

    //MAIN WHITE COLOR LIKE MIDELE AREA OF EACH WINDOW

    glColor3f(1, 0.96, 0.92);
    glBegin(GL_POLYGON);

    glVertex2f(48.7, 49.2);
    glVertex2f(48.7, 52.3);
    glVertex2f(50.8, 52.3);
    glVertex2f(50.8, 49.2);

    glEnd();

    //HORIZONTAL LINE IN THE MIDDLE OF EACH WINDOW

    glColor3f(0.45, 0.4, 0.38);
    glLineWidth(3);
    glBegin(GL_LINES);

    glVertex2f(48.7, 50.95);
    glVertex2f(50.8, 50.95);

    glEnd();

    glPopMatrix();



    glPushMatrix();
    glTranslatef(3 * 3.5, 0, 0);

    //BACKGROUND MORE DEEPER

    glColor3f(0.45, 0.4, 0.38);
    glBegin(GL_POLYGON);

    glVertex2f(48.5, 49);
    glVertex2f(48.5, 52.5);
    glVertex2f(51, 52.5);
    glVertex2f(51, 49);

    glEnd();

    //MAIN WHITE COLOR LIKE MIDELE AREA OF EACH WINDOW

    glColor3f(1, 0.96, 0.92);
    glBegin(GL_POLYGON);

    glVertex2f(48.7, 49.2);
    glVertex2f(48.7, 52.3);
    glVertex2f(50.8, 52.3);
    glVertex2f(50.8, 49.2);

    glEnd();

    //HORIZONTAL LINE IN THE MIDDLE OF EACH WINDOW

    glColor3f(0.45, 0.4, 0.38);
    glLineWidth(3);
    glBegin(GL_LINES);

    glVertex2f(48.7, 50.95);
    glVertex2f(50.8, 50.95);

    glEnd();

    glPopMatrix();


    glPushMatrix();
    glTranslatef(4 * 3.5, 0, 0);

    //BACKGROUND MORE DEEPER

    glColor3f(0.45, 0.4, 0.38);
    glBegin(GL_POLYGON);

    glVertex2f(48.5, 49);
    glVertex2f(48.5, 52.5);
    glVertex2f(51, 52.5);
    glVertex2f(51, 49);

    glEnd();

    //MAIN WHITE COLOR LIKE MIDELE AREA OF EACH WINDOW

    glColor3f(1, 0.96, 0.92);
    glBegin(GL_POLYGON);

    glVertex2f(48.7, 49.2);
    glVertex2f(48.7, 52.3);
    glVertex2f(50.8, 52.3);
    glVertex2f(50.8, 49.2);

    glEnd();

    //HORIZONTAL LINE IN THE MIDDLE OF EACH WINDOW

    glColor3f(0.45, 0.4, 0.38);
    glLineWidth(3);
    glBegin(GL_LINES);

    glVertex2f(48.7, 50.95);
    glVertex2f(50.8, 50.95);

    glEnd();

    glPopMatrix();
    glPopMatrix();




    //3RD ROW
    glPushMatrix();
    glTranslatef(0, 2 * -4.5, 0);

    //BACKGROUND MORE DEEPER

    glColor3f(0.45, 0.4, 0.38);
    glBegin(GL_POLYGON);

    glVertex2f(48.5, 49);
    glVertex2f(48.5, 52.5);
    glVertex2f(51, 52.5);
    glVertex2f(51, 49);

    glEnd();

    //MAIN WHITE COLOR LIKE MIDELE AREA OF EACH WINDOW

    glColor3f(1, 0.96, 0.92);
    glBegin(GL_POLYGON);

    glVertex2f(48.7, 49.2);
    glVertex2f(48.7, 52.3);
    glVertex2f(50.8, 52.3);
    glVertex2f(50.8, 49.2);

    glEnd();

    //HORIZONTAL LINE IN THE MIDDLE OF EACH WINDOW

    glColor3f(0.45, 0.4, 0.38);
    glLineWidth(3);
    glBegin(GL_LINES);

    glVertex2f(48.7, 50.95);
    glVertex2f(50.8, 50.95);

    glEnd();


    // NOW PRINTING ALL THE WINDOWS OF THE FIRST ROW

    glPushMatrix();
    glTranslatef(1 * 3.5, 0, 0);

    //BACKGROUND MORE DEEPER

    glColor3f(0.45, 0.4, 0.38);
    glBegin(GL_POLYGON);

    glVertex2f(48.5, 49);
    glVertex2f(48.5, 52.5);
    glVertex2f(51, 52.5);
    glVertex2f(51, 49);

    glEnd();

    //MAIN WHITE COLOR LIKE MIDELE AREA OF EACH WINDOW

    glColor3f(1, 0.96, 0.92);
    glBegin(GL_POLYGON);

    glVertex2f(48.7, 49.2);
    glVertex2f(48.7, 52.3);
    glVertex2f(50.8, 52.3);
    glVertex2f(50.8, 49.2);

    glEnd();

    //HORIZONTAL LINE IN THE MIDDLE OF EACH WINDOW

    glColor3f(0.45, 0.4, 0.38);
    glLineWidth(3);
    glBegin(GL_LINES);

    glVertex2f(48.7, 50.95);
    glVertex2f(50.8, 50.95);

    glEnd();

    glPopMatrix();


    glPushMatrix();
    glTranslatef(2 * 3.5, 0, 0);

    //BACKGROUND MORE DEEPER

    glColor3f(0.45, 0.4, 0.38);
    glBegin(GL_POLYGON);

    glVertex2f(48.5, 49);
    glVertex2f(48.5, 52.5);
    glVertex2f(51, 52.5);
    glVertex2f(51, 49);

    glEnd();

    //MAIN WHITE COLOR LIKE MIDELE AREA OF EACH WINDOW

    glColor3f(1, 0.96, 0.92);
    glBegin(GL_POLYGON);

    glVertex2f(48.7, 49.2);
    glVertex2f(48.7, 52.3);
    glVertex2f(50.8, 52.3);
    glVertex2f(50.8, 49.2);

    glEnd();

    //HORIZONTAL LINE IN THE MIDDLE OF EACH WINDOW

    glColor3f(0.45, 0.4, 0.38);
    glLineWidth(3);
    glBegin(GL_LINES);

    glVertex2f(48.7, 50.95);
    glVertex2f(50.8, 50.95);

    glEnd();

    glPopMatrix();



    glPushMatrix();
    glTranslatef(3 * 3.5, 0, 0);

    //BACKGROUND MORE DEEPER

    glColor3f(0.45, 0.4, 0.38);
    glBegin(GL_POLYGON);

    glVertex2f(48.5, 49);
    glVertex2f(48.5, 52.5);
    glVertex2f(51, 52.5);
    glVertex2f(51, 49);

    glEnd();

    //MAIN WHITE COLOR LIKE MIDELE AREA OF EACH WINDOW

    glColor3f(1, 0.96, 0.92);
    glBegin(GL_POLYGON);

    glVertex2f(48.7, 49.2);
    glVertex2f(48.7, 52.3);
    glVertex2f(50.8, 52.3);
    glVertex2f(50.8, 49.2);

    glEnd();

    //HORIZONTAL LINE IN THE MIDDLE OF EACH WINDOW

    glColor3f(0.45, 0.4, 0.38);
    glLineWidth(3);
    glBegin(GL_LINES);

    glVertex2f(48.7, 50.95);
    glVertex2f(50.8, 50.95);

    glEnd();

    glPopMatrix();


    glPushMatrix();
    glTranslatef(4 * 3.5, 0, 0);

    //BACKGROUND MORE DEEPER

    glColor3f(0.45, 0.4, 0.38);
    glBegin(GL_POLYGON);

    glVertex2f(48.5, 49);
    glVertex2f(48.5, 52.5);
    glVertex2f(51, 52.5);
    glVertex2f(51, 49);

    glEnd();

    //MAIN WHITE COLOR LIKE MIDELE AREA OF EACH WINDOW

    glColor3f(1, 0.96, 0.92);
    glBegin(GL_POLYGON);

    glVertex2f(48.7, 49.2);
    glVertex2f(48.7, 52.3);
    glVertex2f(50.8, 52.3);
    glVertex2f(50.8, 49.2);

    glEnd();

    //HORIZONTAL LINE IN THE MIDDLE OF EACH WINDOW

    glColor3f(0.45, 0.4, 0.38);
    glLineWidth(3);
    glBegin(GL_LINES);

    glVertex2f(48.7, 50.95);
    glVertex2f(50.8, 50.95);

    glEnd();

    glPopMatrix();
    glPopMatrix();



    //4TH ROW
    glPushMatrix();
    glTranslatef(0, 3 * -4.5, 0);

    //BACKGROUND MORE DEEPER

    glColor3f(0.45, 0.4, 0.38);
    glBegin(GL_POLYGON);

    glVertex2f(48.5, 49);
    glVertex2f(48.5, 52.5);
    glVertex2f(51, 52.5);
    glVertex2f(51, 49);

    glEnd();

    //MAIN WHITE COLOR LIKE MIDELE AREA OF EACH WINDOW

    glColor3f(1, 0.96, 0.92);
    glBegin(GL_POLYGON);

    glVertex2f(48.7, 49.2);
    glVertex2f(48.7, 52.3);
    glVertex2f(50.8, 52.3);
    glVertex2f(50.8, 49.2);

    glEnd();

    //HORIZONTAL LINE IN THE MIDDLE OF EACH WINDOW

    glColor3f(0.45, 0.4, 0.38);
    glLineWidth(3);
    glBegin(GL_LINES);

    glVertex2f(48.7, 50.95);
    glVertex2f(50.8, 50.95);

    glEnd();


    // NOW PRINTING ALL THE WINDOWS OF THE FIRST ROW

    glPushMatrix();
    glTranslatef(1 * 3.5, 0, 0);

    //BACKGROUND MORE DEEPER

    glColor3f(0.45, 0.4, 0.38);
    glBegin(GL_POLYGON);

    glVertex2f(48.5, 49);
    glVertex2f(48.5, 52.5);
    glVertex2f(51, 52.5);
    glVertex2f(51, 49);

    glEnd();

    //MAIN WHITE COLOR LIKE MIDELE AREA OF EACH WINDOW

    glColor3f(1, 0.96, 0.92);
    glBegin(GL_POLYGON);

    glVertex2f(48.7, 49.2);
    glVertex2f(48.7, 52.3);
    glVertex2f(50.8, 52.3);
    glVertex2f(50.8, 49.2);

    glEnd();

    //HORIZONTAL LINE IN THE MIDDLE OF EACH WINDOW

    glColor3f(0.45, 0.4, 0.38);
    glLineWidth(3);
    glBegin(GL_LINES);

    glVertex2f(48.7, 50.95);
    glVertex2f(50.8, 50.95);

    glEnd();

    glPopMatrix();


    glPushMatrix();
    glTranslatef(2 * 3.5, 0, 0);

    //BACKGROUND MORE DEEPER

    glColor3f(0.45, 0.4, 0.38);
    glBegin(GL_POLYGON);

    glVertex2f(48.5, 49);
    glVertex2f(48.5, 52.5);
    glVertex2f(51, 52.5);
    glVertex2f(51, 49);

    glEnd();

    //MAIN WHITE COLOR LIKE MIDELE AREA OF EACH WINDOW

    glColor3f(1, 0.96, 0.92);
    glBegin(GL_POLYGON);

    glVertex2f(48.7, 49.2);
    glVertex2f(48.7, 52.3);
    glVertex2f(50.8, 52.3);
    glVertex2f(50.8, 49.2);

    glEnd();

    //HORIZONTAL LINE IN THE MIDDLE OF EACH WINDOW

    glColor3f(0.45, 0.4, 0.38);
    glLineWidth(3);
    glBegin(GL_LINES);

    glVertex2f(48.7, 50.95);
    glVertex2f(50.8, 50.95);

    glEnd();

    glPopMatrix();



    glPushMatrix();
    glTranslatef(3 * 3.5, 0, 0);

    //BACKGROUND MORE DEEPER

    glColor3f(0.45, 0.4, 0.38);
    glBegin(GL_POLYGON);

    glVertex2f(48.5, 49);
    glVertex2f(48.5, 52.5);
    glVertex2f(51, 52.5);
    glVertex2f(51, 49);

    glEnd();

    //MAIN WHITE COLOR LIKE MIDELE AREA OF EACH WINDOW

    glColor3f(1, 0.96, 0.92);
    glBegin(GL_POLYGON);

    glVertex2f(48.7, 49.2);
    glVertex2f(48.7, 52.3);
    glVertex2f(50.8, 52.3);
    glVertex2f(50.8, 49.2);

    glEnd();

    //HORIZONTAL LINE IN THE MIDDLE OF EACH WINDOW

    glColor3f(0.45, 0.4, 0.38);
    glLineWidth(3);
    glBegin(GL_LINES);

    glVertex2f(48.7, 50.95);
    glVertex2f(50.8, 50.95);

    glEnd();

    glPopMatrix();


    glPushMatrix();
    glTranslatef(4 * 3.5, 0, 0);

    //BACKGROUND MORE DEEPER

    glColor3f(0.45, 0.4, 0.38);
    glBegin(GL_POLYGON);

    glVertex2f(48.5, 49);
    glVertex2f(48.5, 52.5);
    glVertex2f(51, 52.5);
    glVertex2f(51, 49);

    glEnd();

    //MAIN WHITE COLOR LIKE MIDELE AREA OF EACH WINDOW

    glColor3f(1, 0.96, 0.92);
    glBegin(GL_POLYGON);

    glVertex2f(48.7, 49.2);
    glVertex2f(48.7, 52.3);
    glVertex2f(50.8, 52.3);
    glVertex2f(50.8, 49.2);

    glEnd();

    //HORIZONTAL LINE IN THE MIDDLE OF EACH WINDOW

    glColor3f(0.45, 0.4, 0.38);
    glLineWidth(3);
    glBegin(GL_LINES);

    glVertex2f(48.7, 50.95);
    glVertex2f(50.8, 50.95);

    glEnd();

    glPopMatrix();
    glPopMatrix();



    //5TH ROW
    glPushMatrix();
    glTranslatef(0, 4 * -4.5, 0);

    //BACKGROUND MORE DEEPER

    glColor3f(0.45, 0.4, 0.38);
    glBegin(GL_POLYGON);

    glVertex2f(48.5, 49);
    glVertex2f(48.5, 52.5);
    glVertex2f(51, 52.5);
    glVertex2f(51, 49);

    glEnd();

    //MAIN WHITE COLOR LIKE MIDELE AREA OF EACH WINDOW

    glColor3f(1, 0.96, 0.92);
    glBegin(GL_POLYGON);

    glVertex2f(48.7, 49.2);
    glVertex2f(48.7, 52.3);
    glVertex2f(50.8, 52.3);
    glVertex2f(50.8, 49.2);

    glEnd();

    //HORIZONTAL LINE IN THE MIDDLE OF EACH WINDOW

    glColor3f(0.45, 0.4, 0.38);
    glLineWidth(3);
    glBegin(GL_LINES);

    glVertex2f(48.7, 50.95);
    glVertex2f(50.8, 50.95);

    glEnd();


    // NOW PRINTING ALL THE WINDOWS OF THE FIRST ROW

    glPushMatrix();
    glTranslatef(1 * 3.5, 0, 0);

    //BACKGROUND MORE DEEPER

    glColor3f(0.45, 0.4, 0.38);
    glBegin(GL_POLYGON);

    glVertex2f(48.5, 49);
    glVertex2f(48.5, 52.5);
    glVertex2f(51, 52.5);
    glVertex2f(51, 49);

    glEnd();

    //MAIN WHITE COLOR LIKE MIDELE AREA OF EACH WINDOW

    glColor3f(1, 0.96, 0.92);
    glBegin(GL_POLYGON);

    glVertex2f(48.7, 49.2);
    glVertex2f(48.7, 52.3);
    glVertex2f(50.8, 52.3);
    glVertex2f(50.8, 49.2);

    glEnd();

    //HORIZONTAL LINE IN THE MIDDLE OF EACH WINDOW

    glColor3f(0.45, 0.4, 0.38);
    glLineWidth(3);
    glBegin(GL_LINES);

    glVertex2f(48.7, 50.95);
    glVertex2f(50.8, 50.95);

    glEnd();

    glPopMatrix();


    glPushMatrix();
    glTranslatef(2 * 3.5, 0, 0);

    //BACKGROUND MORE DEEPER

    glColor3f(0.45, 0.4, 0.38);
    glBegin(GL_POLYGON);

    glVertex2f(48.5, 49);
    glVertex2f(48.5, 52.5);
    glVertex2f(51, 52.5);
    glVertex2f(51, 49);

    glEnd();

    //MAIN WHITE COLOR LIKE MIDELE AREA OF EACH WINDOW

    glColor3f(1, 0.96, 0.92);
    glBegin(GL_POLYGON);

    glVertex2f(48.7, 49.2);
    glVertex2f(48.7, 52.3);
    glVertex2f(50.8, 52.3);
    glVertex2f(50.8, 49.2);

    glEnd();

    //HORIZONTAL LINE IN THE MIDDLE OF EACH WINDOW

    glColor3f(0.45, 0.4, 0.38);
    glLineWidth(3);
    glBegin(GL_LINES);

    glVertex2f(48.7, 50.95);
    glVertex2f(50.8, 50.95);

    glEnd();

    glPopMatrix();



    glPushMatrix();
    glTranslatef(3 * 3.5, 0, 0);

    //BACKGROUND MORE DEEPER

    glColor3f(0.45, 0.4, 0.38);
    glBegin(GL_POLYGON);

    glVertex2f(48.5, 49);
    glVertex2f(48.5, 52.5);
    glVertex2f(51, 52.5);
    glVertex2f(51, 49);

    glEnd();

    //MAIN WHITE COLOR LIKE MIDELE AREA OF EACH WINDOW

    glColor3f(1, 0.96, 0.92);
    glBegin(GL_POLYGON);

    glVertex2f(48.7, 49.2);
    glVertex2f(48.7, 52.3);
    glVertex2f(50.8, 52.3);
    glVertex2f(50.8, 49.2);

    glEnd();

    //HORIZONTAL LINE IN THE MIDDLE OF EACH WINDOW

    glColor3f(0.45, 0.4, 0.38);
    glLineWidth(3);
    glBegin(GL_LINES);

    glVertex2f(48.7, 50.95);
    glVertex2f(50.8, 50.95);

    glEnd();

    glPopMatrix();


    glPushMatrix();
    glTranslatef(4 * 3.5, 0, 0);

    //BACKGROUND MORE DEEPER

    glColor3f(0.45, 0.4, 0.38);
    glBegin(GL_POLYGON);

    glVertex2f(48.5, 49);
    glVertex2f(48.5, 52.5);
    glVertex2f(51, 52.5);
    glVertex2f(51, 49);

    glEnd();

    //MAIN WHITE COLOR LIKE MIDELE AREA OF EACH WINDOW

    glColor3f(1, 0.96, 0.92);
    glBegin(GL_POLYGON);

    glVertex2f(48.7, 49.2);
    glVertex2f(48.7, 52.3);
    glVertex2f(50.8, 52.3);
    glVertex2f(50.8, 49.2);

    glEnd();

    //HORIZONTAL LINE IN THE MIDDLE OF EACH WINDOW

    glColor3f(0.45, 0.4, 0.38);
    glLineWidth(3);
    glBegin(GL_LINES);

    glVertex2f(48.7, 50.95);
    glVertex2f(50.8, 50.95);

    glEnd();

    glPopMatrix();
    glPopMatrix();


    //SIXTH ROW

    glPushMatrix();
    glTranslatef(0, 5 * -4.5, 0);

    //BACKGROUND MORE DEEPER

    glColor3f(0.45, 0.4, 0.38);
    glBegin(GL_POLYGON);

    glVertex2f(48.5, 49);
    glVertex2f(48.5, 52.5);
    glVertex2f(51, 52.5);
    glVertex2f(51, 49);

    glEnd();

    //MAIN WHITE COLOR LIKE MIDELE AREA OF EACH WINDOW

    glColor3f(1, 0.96, 0.92);
    glBegin(GL_POLYGON);

    glVertex2f(48.7, 49.2);
    glVertex2f(48.7, 52.3);
    glVertex2f(50.8, 52.3);
    glVertex2f(50.8, 49.2);

    glEnd();

    //HORIZONTAL LINE IN THE MIDDLE OF EACH WINDOW

    glColor3f(0.45, 0.4, 0.38);
    glLineWidth(3);
    glBegin(GL_LINES);

    glVertex2f(48.7, 50.95);
    glVertex2f(50.8, 50.95);

    glEnd();


    // NOW PRINTING ALL THE WINDOWS OF THE FIRST ROW

    glPushMatrix();
    glTranslatef(1 * 3.5, 0, 0);

    //BACKGROUND MORE DEEPER

    glColor3f(0.45, 0.4, 0.38);
    glBegin(GL_POLYGON);

    glVertex2f(48.5, 49);
    glVertex2f(48.5, 52.5);
    glVertex2f(51, 52.5);
    glVertex2f(51, 49);

    glEnd();

    //MAIN WHITE COLOR LIKE MIDELE AREA OF EACH WINDOW

    glColor3f(1, 0.96, 0.92);
    glBegin(GL_POLYGON);

    glVertex2f(48.7, 49.2);
    glVertex2f(48.7, 52.3);
    glVertex2f(50.8, 52.3);
    glVertex2f(50.8, 49.2);

    glEnd();

    //HORIZONTAL LINE IN THE MIDDLE OF EACH WINDOW

    glColor3f(0.45, 0.4, 0.38);
    glLineWidth(3);
    glBegin(GL_LINES);

    glVertex2f(48.7, 50.95);
    glVertex2f(50.8, 50.95);

    glEnd();

    glPopMatrix();


    glPushMatrix();
    glTranslatef(2 * 3.5, 0, 0);

    //BACKGROUND MORE DEEPER

    glColor3f(0.45, 0.4, 0.38);
    glBegin(GL_POLYGON);

    glVertex2f(48.5, 49);
    glVertex2f(48.5, 52.5);
    glVertex2f(51, 52.5);
    glVertex2f(51, 49);

    glEnd();

    //MAIN WHITE COLOR LIKE MIDELE AREA OF EACH WINDOW

    glColor3f(1, 0.96, 0.92);
    glBegin(GL_POLYGON);

    glVertex2f(48.7, 49.2);
    glVertex2f(48.7, 52.3);
    glVertex2f(50.8, 52.3);
    glVertex2f(50.8, 49.2);

    glEnd();

    //HORIZONTAL LINE IN THE MIDDLE OF EACH WINDOW

    glColor3f(0.45, 0.4, 0.38);
    glLineWidth(3);
    glBegin(GL_LINES);

    glVertex2f(48.7, 50.95);
    glVertex2f(50.8, 50.95);

    glEnd();

    glPopMatrix();



    glPushMatrix();
    glTranslatef(3 * 3.5, 0, 0);

    //BACKGROUND MORE DEEPER

    glColor3f(0.45, 0.4, 0.38);
    glBegin(GL_POLYGON);

    glVertex2f(48.5, 49);
    glVertex2f(48.5, 52.5);
    glVertex2f(51, 52.5);
    glVertex2f(51, 49);

    glEnd();

    //MAIN WHITE COLOR LIKE MIDELE AREA OF EACH WINDOW

    glColor3f(1, 0.96, 0.92);
    glBegin(GL_POLYGON);

    glVertex2f(48.7, 49.2);
    glVertex2f(48.7, 52.3);
    glVertex2f(50.8, 52.3);
    glVertex2f(50.8, 49.2);

    glEnd();

    //HORIZONTAL LINE IN THE MIDDLE OF EACH WINDOW

    glColor3f(0.45, 0.4, 0.38);
    glLineWidth(3);
    glBegin(GL_LINES);

    glVertex2f(48.7, 50.95);
    glVertex2f(50.8, 50.95);

    glEnd();

    glPopMatrix();


    glPushMatrix();
    glTranslatef(4 * 3.5, 0, 0);

    //BACKGROUND MORE DEEPER

    glColor3f(0.45, 0.4, 0.38);
    glBegin(GL_POLYGON);

    glVertex2f(48.5, 49);
    glVertex2f(48.5, 52.5);
    glVertex2f(51, 52.5);
    glVertex2f(51, 49);

    glEnd();

    //MAIN WHITE COLOR LIKE MIDELE AREA OF EACH WINDOW

    glColor3f(1, 0.96, 0.92);
    glBegin(GL_POLYGON);

    glVertex2f(48.7, 49.2);
    glVertex2f(48.7, 52.3);
    glVertex2f(50.8, 52.3);
    glVertex2f(50.8, 49.2);

    glEnd();

    //HORIZONTAL LINE IN THE MIDDLE OF EACH WINDOW

    glColor3f(0.45, 0.4, 0.38);
    glLineWidth(3);
    glBegin(GL_LINES);

    glVertex2f(48.7, 50.95);
    glVertex2f(50.8, 50.95);

    glEnd();

    glPopMatrix();
    glPopMatrix();


}


//ID - 23

void building_07() {


    //FIRST LOWER PORTION REDISH AREA OF THE BUILDING 07
    glColor3f(0.95, 0.4, 0.39);
    glBegin(GL_POLYGON);
    glVertex2f(74.6, 21.9);
    glVertex2f(74.6, 28.2);
    glVertex2f(92.4, 28.2);
    glVertex2f(92.4, 21.9);


    glEnd();


    //MORE DEEPER COLOR IN THE MIDDLE OF THE FIRST PORTION

    glColor3f(0.16, 0.28, 0.35);
    glBegin(GL_POLYGON);
    glVertex2f(77, 21.9);
    glVertex2f(77, 28.2);
    glVertex2f(90, 28.2);
    glVertex2f(90, 21.9);

    glEnd();


    //2ND LOWER PORTION

    glColor3f(0.83, 0.33, 0.32);
    glBegin(GL_POLYGON);
    glVertex2f(73.8, 28.2);
    glVertex2f(74.5, 30);
    glVertex2f(92.2, 30);
    glVertex2f(93.2, 28.2);

    glEnd();


    //3RD LOWER PORTOIN
    glColor3f(0.95, 0.4, 0.39);
    glBegin(GL_POLYGON);
    glVertex2f(74.5, 30);
    glVertex2f(76, 31.4);
    glVertex2f(90.8, 31.4);
    glVertex2f(92.2, 30);

    glEnd();


    //HORIZONTAL WHITE LINE IN THE MIDDLE OF THE 
    // 2ND AND 3RD LOWER PORTION

    glColor3f(0.95, 0.53, 0.51);
    glLineWidth(3);
    glBegin(GL_LINES);
    glVertex2f(74.5, 30);
    glVertex2f(92.2, 30);

    glEnd();



    //4th LOWER PORTION YELLOW

    glColor3f(0.98, 0.91, 0.44);
    glBegin(GL_POLYGON);
    glVertex2f(76.5, 31.4);
    glVertex2f(76.5, 43);
    glVertex2f(90.3, 43);
    glVertex2f(90.3, 31.4);

    glEnd();


    //TWO (ONE MORE DEEP YELLOW AND ONE WHITE) AREA IN THE MIDDLE OF THE 
    // 4TH AREA


    //MORE DEEPER YELLOW COLOR HORIZONTAL AREA
    glColor3f(0.83, 0.76, 0.39);
    glBegin(GL_POLYGON);
    glVertex2f(76, 36.6);
    glVertex2f(76, 37);
    glVertex2f(90.8, 37);
    glVertex2f(90.8, 36.6);

    glEnd();


    //WHITISH HORIZONATAL AREA 

    glColor3f(1, 0.97, 0.85);
    glBegin(GL_POLYGON);
    glVertex2f(75.5, 37);
    glVertex2f(75.5, 37.4);
    glVertex2f(91.3, 37.4);
    glVertex2f(91.3, 37);

    glEnd();


    //5TH TOP PORTION

    glColor3f(0.84, 0.36, 0.33);
    glBegin(GL_POLYGON);
    glVertex2f(75.4, 43);
    glVertex2f(75.4, 44);
    glVertex2f(91.4, 44);
    glVertex2f(91.4, 43);

    glEnd();


    //NOW PRINTING THE MAIN DOOR AREA OF BUILDING 07



    //HORIZONTAL LINE IN THE ABOVE OF THE MAIN DOOR



    glColor3f(0.27, 0.44, 0.53);
    glBegin(GL_POLYGON);
    glVertex2f(77, 26.5);
    glVertex2f(77, 26.8);
    glVertex2f(90, 26.8);
    glVertex2f(90, 26.5);

    glEnd();



    //LEFT VERTICLE LINE IN THE MAIN DOOR AREA

    glLineWidth(4);
    glColor3f(0.27, 0.44, 0.53);
    glBegin(GL_LINES);
    glVertex2f(79, 26.5);
    glVertex2f(79, 21.9);


    glEnd();

    //RIGHT VERTICLE LINE IN TEH MAIN DOOR AREA
    glLineWidth(4);
    glColor3f(0.27, 0.44, 0.53);
    glBegin(GL_LINES);
    glVertex2f(88, 26.5);
    glVertex2f(88, 21.9);


    glEnd();


    //BACKGROUND MORE LIGHTER COLOR OF THE MAIN  DOOR

    glColor3f(0.27, 0.44, 0.53);
    glBegin(GL_POLYGON);
    glVertex2f(81.5, 21.9);
    glVertex2f(81.5, 26.5);
    glVertex2f(85.5, 26.5);
    glVertex2f(85.5, 21.9);

    glEnd();


    //BACKGROUND YELLOW AREA OF THE MAIN DOOR

    glColor3f(0.98, 0.91, 0.44);
    glBegin(GL_POLYGON);
    glVertex2f(81.8, 21.9);
    glVertex2f(81.8, 26.5);
    glVertex2f(85.2, 26.5);
    glVertex2f(85.2, 21.9);

    glEnd();


    //HORIZONTAL LINE IN THE MIDDLE OF THE MAIN DOOR

    glLineWidth(4);
    glColor3f(0.27, 0.44, 0.53);
    glBegin(GL_LINES);
    glVertex2f(83.5, 21.9);
    glVertex2f(83.5, 26.5);


    glEnd();



    //WINDOWS START HERE OF THE BUILDING 07

    // I AM PRINTING IN ROW WISE


    //TOP MOST LAYER IN EACH WINDOW
    glColor3f(0.88, 0.38, 0.37);
    glBegin(GL_POLYGON);
    glVertex2f(77.6, 42);
    glVertex2f(77.6, 42.2);
    glVertex2f(80.2, 42.2);
    glVertex2f(80.2, 42);

    glEnd();

    //2ND TOP MOST LAYER IN EACH WINDOW
    glColor3f(0.88, 0.38, 0.37);
    glBegin(GL_POLYGON);
    glVertex2f(77.8, 41.8);
    glVertex2f(77.8, 42);
    glVertex2f(80, 42);
    glVertex2f(80, 41.8);

    glEnd();


    // MAIN DEEPER COLOR OF EACH WINDOW

    glColor3f(0.16, 0.28, 0.35);
    glBegin(GL_POLYGON);
    glVertex2f(77.9, 39);
    glVertex2f(77.9, 41.8);
    glVertex2f(79.9, 41.8);
    glVertex2f(79.9, 39);

    glEnd();


    //MOST LOWER WHITISH LAYER OF EACH WINDOW


    glColor3f(1, 0.98, 0.86);
    glBegin(GL_POLYGON);
    glVertex2f(77.6, 38.8);
    glVertex2f(77.6, 39);
    glVertex2f(80.2, 39);
    glVertex2f(80.2, 38.8);

    glEnd();


    //HORIZONTAL WHITISH LINE IN THE MIDDLE OF THE EACH WINDOW


    glLineWidth(2.8);
    glColor3f(1, 0.98, 0.86);
    glBegin(GL_LINES);
    glVertex2f(78.9, 41.8);
    glVertex2f(78.9, 39);
    glEnd();



    //NOW PRINTING ALL THE WINDOWS OF THE FIRST ROW

    glPushMatrix();
    glTranslatef(1 * 4.5, 0, 0);

    //TOP MOST LAYER IN EACH WINDOW
    glColor3f(0.88, 0.38, 0.37);
    glBegin(GL_POLYGON);
    glVertex2f(77.6, 42);
    glVertex2f(77.6, 42.2);
    glVertex2f(80.2, 42.2);
    glVertex2f(80.2, 42);

    glEnd();

    //2ND TOP MOST LAYER IN EACH WINDOW
    glColor3f(0.88, 0.38, 0.37);
    glBegin(GL_POLYGON);
    glVertex2f(77.8, 41.8);
    glVertex2f(77.8, 42);
    glVertex2f(80, 42);
    glVertex2f(80, 41.8);

    glEnd();


    // MAIN DEEPER COLOR OF EACH WINDOW

    glColor3f(0.16, 0.28, 0.35);
    glBegin(GL_POLYGON);
    glVertex2f(77.9, 39);
    glVertex2f(77.9, 41.8);
    glVertex2f(79.9, 41.8);
    glVertex2f(79.9, 39);

    glEnd();


    //MOST LOWER WHITISH LAYER OF EACH WINDOW


    glColor3f(1, 0.98, 0.86);
    glBegin(GL_POLYGON);
    glVertex2f(77.6, 38.8);
    glVertex2f(77.6, 39);
    glVertex2f(80.2, 39);
    glVertex2f(80.2, 38.8);

    glEnd();


    //HORIZONTAL WHITISH LINE IN THE MIDDLE OF THE EACH WINDOW


    glLineWidth(2.8);
    glColor3f(1, 0.98, 0.86);
    glBegin(GL_LINES);
    glVertex2f(78.9, 41.8);
    glVertex2f(78.9, 39);
    glEnd();


    glPopMatrix();




    glPushMatrix();
    glTranslatef(2 * 4.5, 0, 0);

    //TOP MOST LAYER IN EACH WINDOW
    glColor3f(0.88, 0.38, 0.37);
    glBegin(GL_POLYGON);
    glVertex2f(77.6, 42);
    glVertex2f(77.6, 42.2);
    glVertex2f(80.2, 42.2);
    glVertex2f(80.2, 42);

    glEnd();

    //2ND TOP MOST LAYER IN EACH WINDOW
    glColor3f(0.88, 0.38, 0.37);
    glBegin(GL_POLYGON);
    glVertex2f(77.8, 41.8);
    glVertex2f(77.8, 42);
    glVertex2f(80, 42);
    glVertex2f(80, 41.8);

    glEnd();


    // MAIN DEEPER COLOR OF EACH WINDOW

    glColor3f(0.16, 0.28, 0.35);
    glBegin(GL_POLYGON);
    glVertex2f(77.9, 39);
    glVertex2f(77.9, 41.8);
    glVertex2f(79.9, 41.8);
    glVertex2f(79.9, 39);

    glEnd();


    //MOST LOWER WHITISH LAYER OF EACH WINDOW


    glColor3f(1, 0.98, 0.86);
    glBegin(GL_POLYGON);
    glVertex2f(77.6, 38.8);
    glVertex2f(77.6, 39);
    glVertex2f(80.2, 39);
    glVertex2f(80.2, 38.8);

    glEnd();


    //HORIZONTAL WHITISH LINE IN THE MIDDLE OF THE EACH WINDOW


    glLineWidth(2.8);
    glColor3f(1, 0.98, 0.86);
    glBegin(GL_LINES);
    glVertex2f(78.9, 41.8);
    glVertex2f(78.9, 39);
    glEnd();


    glPopMatrix();



    // NOW PRINTING ALL THE WINDOWS OF THE BELOW LAYER


    glPushMatrix();
    glTranslatef(0, -6.5, 0);

    //TOP MOST LAYER IN EACH WINDOW
    glColor3f(0.88, 0.38, 0.37);
    glBegin(GL_POLYGON);
    glVertex2f(77.6, 42);
    glVertex2f(77.6, 42.2);
    glVertex2f(80.2, 42.2);
    glVertex2f(80.2, 42);

    glEnd();

    //2ND TOP MOST LAYER IN EACH WINDOW
    glColor3f(0.88, 0.38, 0.37);
    glBegin(GL_POLYGON);
    glVertex2f(77.8, 41.8);
    glVertex2f(77.8, 42);
    glVertex2f(80, 42);
    glVertex2f(80, 41.8);

    glEnd();


    // MAIN DEEPER COLOR OF EACH WINDOW

    glColor3f(0.16, 0.28, 0.35);
    glBegin(GL_POLYGON);
    glVertex2f(77.9, 39);
    glVertex2f(77.9, 41.8);
    glVertex2f(79.9, 41.8);
    glVertex2f(79.9, 39);

    glEnd();


    //MOST LOWER WHITISH LAYER OF EACH WINDOW


    glColor3f(1, 0.98, 0.86);
    glBegin(GL_POLYGON);
    glVertex2f(77.6, 38.8);
    glVertex2f(77.6, 39);
    glVertex2f(80.2, 39);
    glVertex2f(80.2, 38.8);

    glEnd();


    //HORIZONTAL WHITISH LINE IN THE MIDDLE OF THE EACH WINDOW


    glLineWidth(2.8);
    glColor3f(1, 0.98, 0.86);
    glBegin(GL_LINES);
    glVertex2f(78.9, 41.8);
    glVertex2f(78.9, 39);
    glEnd();



    //NOW PRINTING ALL THE WINDOWS OF THE FIRST ROW

    glPushMatrix();
    glTranslatef(1 * 4.5, 0, 0);

    //TOP MOST LAYER IN EACH WINDOW
    glColor3f(0.88, 0.38, 0.37);
    glBegin(GL_POLYGON);
    glVertex2f(77.6, 42);
    glVertex2f(77.6, 42.2);
    glVertex2f(80.2, 42.2);
    glVertex2f(80.2, 42);

    glEnd();

    //2ND TOP MOST LAYER IN EACH WINDOW
    glColor3f(0.88, 0.38, 0.37);
    glBegin(GL_POLYGON);
    glVertex2f(77.8, 41.8);
    glVertex2f(77.8, 42);
    glVertex2f(80, 42);
    glVertex2f(80, 41.8);

    glEnd();


    // MAIN DEEPER COLOR OF EACH WINDOW

    glColor3f(0.16, 0.28, 0.35);
    glBegin(GL_POLYGON);
    glVertex2f(77.9, 39);
    glVertex2f(77.9, 41.8);
    glVertex2f(79.9, 41.8);
    glVertex2f(79.9, 39);

    glEnd();


    //MOST LOWER WHITISH LAYER OF EACH WINDOW


    glColor3f(1, 0.98, 0.86);
    glBegin(GL_POLYGON);
    glVertex2f(77.6, 38.8);
    glVertex2f(77.6, 39);
    glVertex2f(80.2, 39);
    glVertex2f(80.2, 38.8);

    glEnd();


    //HORIZONTAL WHITISH LINE IN THE MIDDLE OF THE EACH WINDOW


    glLineWidth(2.8);
    glColor3f(1, 0.98, 0.86);
    glBegin(GL_LINES);
    glVertex2f(78.9, 41.8);
    glVertex2f(78.9, 39);
    glEnd();


    glPopMatrix();




    glPushMatrix();
    glTranslatef(2 * 4.5, 0, 0);

    //TOP MOST LAYER IN EACH WINDOW
    glColor3f(0.88, 0.38, 0.37);
    glBegin(GL_POLYGON);
    glVertex2f(77.6, 42);
    glVertex2f(77.6, 42.2);
    glVertex2f(80.2, 42.2);
    glVertex2f(80.2, 42);

    glEnd();

    //2ND TOP MOST LAYER IN EACH WINDOW
    glColor3f(0.88, 0.38, 0.37);
    glBegin(GL_POLYGON);
    glVertex2f(77.8, 41.8);
    glVertex2f(77.8, 42);
    glVertex2f(80, 42);
    glVertex2f(80, 41.8);

    glEnd();


    // MAIN DEEPER COLOR OF EACH WINDOW

    glColor3f(0.16, 0.28, 0.35);
    glBegin(GL_POLYGON);
    glVertex2f(77.9, 39);
    glVertex2f(77.9, 41.8);
    glVertex2f(79.9, 41.8);
    glVertex2f(79.9, 39);

    glEnd();


    //MOST LOWER WHITISH LAYER OF EACH WINDOW


    glColor3f(1, 0.98, 0.86);
    glBegin(GL_POLYGON);
    glVertex2f(77.6, 38.8);
    glVertex2f(77.6, 39);
    glVertex2f(80.2, 39);
    glVertex2f(80.2, 38.8);

    glEnd();


    //HORIZONTAL WHITISH LINE IN THE MIDDLE OF THE EACH WINDOW


    glLineWidth(2.8);
    glColor3f(1, 0.98, 0.86);
    glBegin(GL_LINES);
    glVertex2f(78.9, 41.8);
    glVertex2f(78.9, 39);
    glEnd();


    glPopMatrix();

    glPopMatrix();



}

//  ID - 24
void building_08() {


    //ANTENA LIKE AREA OF BUILDING 08
    glColor3f(0.32, 0.34, 0.4);
    glBegin(GL_POLYGON);
    glVertex2f(75.5, 62);
    glVertex2f(75.5, 67.5);
    glVertex2f(80, 67.5);
    glVertex2f(80, 62);
    glEnd();

    //UPPER PORTION OF THE ANTENA LIKE AREA
    glColor3f(0.51, 0.53, 0.64);
    glBegin(GL_POLYGON);
    glVertex2f(74.5, 67.5);
    glVertex2f(74.5, 69);
    glVertex2f(81, 69);
    glVertex2f(81, 67.5);

    glEnd();

    //TOP MOST AREA OF THE ANTER LIKE AREA

    glColor3f(0.32, 0.34, 0.4);
    glBegin(GL_POLYGON);
    glVertex2f(77.2, 69);
    glVertex2f(77.2, 71.5);
    glVertex2f(78.3, 72.5);
    glVertex2f(78.3, 69);
    glEnd();




    //MAIN AREA OF BUILDING 08
    glColor3f(.51, 0.53, 0.64);
    glBegin(GL_POLYGON);
    glVertex2f(68.5, 21.9);
    glVertex2f(68.5, 60);
    glVertex2f(87, 67);
    glVertex2f(87, 21.9);

    glEnd();


    //GLASS LIKE AREA OF THE BUILDING 08

    glColor3f(0.7, 0.73, 0.81);
    glBegin(GL_POLYGON);
    glVertex2f(70, 51);
    glVertex2f(70, 58);
    glVertex2f(84, 63);
    glVertex2f(84, 51);

    glEnd();


    //NOW PRINTING THE WINDOWS OF BUILDIN 08
    // I AM PRINTING IN ROW WISE


    glColor3f(0.7, 0.73, 0.81);
    glBegin(GL_POLYGON);
    glVertex2f(70, 48);
    glVertex2f(70, 50);
    glVertex2f(72, 50);
    glVertex2f(72, 48);

    glEnd();


    // NOW PRINTING ALL THE WINDOWS OF THE 1ST ROW

    glPushMatrix();
    glTranslatef(1 * 3, 0, 0);

    glBegin(GL_POLYGON);
    glVertex2f(70, 48);
    glVertex2f(70, 50);
    glVertex2f(72, 50);
    glVertex2f(72, 48);

    glEnd();
    glPopMatrix();


    glPushMatrix();
    glTranslatef(2 * 3, 0, 0);

    glBegin(GL_POLYGON);
    glVertex2f(70, 48);
    glVertex2f(70, 50);
    glVertex2f(72, 50);
    glVertex2f(72, 48);

    glEnd();
    glPopMatrix();


    glPushMatrix();
    glTranslatef(3 * 3, 0, 0);

    glBegin(GL_POLYGON);
    glVertex2f(70, 48);
    glVertex2f(70, 50);
    glVertex2f(72, 50);
    glVertex2f(72, 48);

    glEnd();
    glPopMatrix();


    glPushMatrix();
    glTranslatef(4 * 3, 0, 0);

    glBegin(GL_POLYGON);
    glVertex2f(70, 48);
    glVertex2f(70, 50);
    glVertex2f(72, 50);
    glVertex2f(72, 48);

    glEnd();
    glPopMatrix();

    //NOW PRINTING THE WINDOWS OF THE 2ND WINDOW
    // USING TRANSLATEF

    glPushMatrix();
    glTranslatef(0, 1 * -3, 0);

    glBegin(GL_POLYGON);
    glVertex2f(70, 48);
    glVertex2f(70, 50);
    glVertex2f(72, 50);
    glVertex2f(72, 48);

    glEnd();


    // NOW PRINTING ALL THE WINDOWS OF THE 1ST ROW

    glPushMatrix();
    glTranslatef(1 * 3, 0, 0);

    glBegin(GL_POLYGON);
    glVertex2f(70, 48);
    glVertex2f(70, 50);
    glVertex2f(72, 50);
    glVertex2f(72, 48);

    glEnd();
    glPopMatrix();


    glPushMatrix();
    glTranslatef(2 * 3, 0, 0);

    glBegin(GL_POLYGON);
    glVertex2f(70, 48);
    glVertex2f(70, 50);
    glVertex2f(72, 50);
    glVertex2f(72, 48);

    glEnd();
    glPopMatrix();


    glPushMatrix();
    glTranslatef(3 * 3, 0, 0);

    glBegin(GL_POLYGON);
    glVertex2f(70, 48);
    glVertex2f(70, 50);
    glVertex2f(72, 50);
    glVertex2f(72, 48);

    glEnd();
    glPopMatrix();


    glPushMatrix();
    glTranslatef(4 * 3, 0, 0);

    glBegin(GL_POLYGON);
    glVertex2f(70, 48);
    glVertex2f(70, 50);
    glVertex2f(72, 50);
    glVertex2f(72, 48);

    glEnd();
    glPopMatrix();

    glPopMatrix();


    //3RD ROW

    glPushMatrix();
    glTranslatef(0, 2 * -3, 0);

    glBegin(GL_POLYGON);
    glVertex2f(70, 48);
    glVertex2f(70, 50);
    glVertex2f(72, 50);
    glVertex2f(72, 48);

    glEnd();


    // NOW PRINTING ALL THE WINDOWS OF THE 1ST ROW

    glPushMatrix();
    glTranslatef(1 * 3, 0, 0);

    glBegin(GL_POLYGON);
    glVertex2f(70, 48);
    glVertex2f(70, 50);
    glVertex2f(72, 50);
    glVertex2f(72, 48);

    glEnd();
    glPopMatrix();


    glPushMatrix();
    glTranslatef(2 * 3, 0, 0);

    glBegin(GL_POLYGON);
    glVertex2f(70, 48);
    glVertex2f(70, 50);
    glVertex2f(72, 50);
    glVertex2f(72, 48);

    glEnd();
    glPopMatrix();


    glPushMatrix();
    glTranslatef(3 * 3, 0, 0);

    glBegin(GL_POLYGON);
    glVertex2f(70, 48);
    glVertex2f(70, 50);
    glVertex2f(72, 50);
    glVertex2f(72, 48);

    glEnd();
    glPopMatrix();


    glPushMatrix();
    glTranslatef(4 * 3, 0, 0);

    glBegin(GL_POLYGON);
    glVertex2f(70, 48);
    glVertex2f(70, 50);
    glVertex2f(72, 50);
    glVertex2f(72, 48);

    glEnd();
    glPopMatrix();

    glPopMatrix();


    //4TH ROW

    glPushMatrix();
    glTranslatef(0, 3 * -3, 0);

    glBegin(GL_POLYGON);
    glVertex2f(70, 48);
    glVertex2f(70, 50);
    glVertex2f(72, 50);
    glVertex2f(72, 48);

    glEnd();


    // NOW PRINTING ALL THE WINDOWS OF THE 1ST ROW

    glPushMatrix();
    glTranslatef(1 * 3, 0, 0);

    glBegin(GL_POLYGON);
    glVertex2f(70, 48);
    glVertex2f(70, 50);
    glVertex2f(72, 50);
    glVertex2f(72, 48);

    glEnd();
    glPopMatrix();


    glPushMatrix();
    glTranslatef(2 * 3, 0, 0);

    glBegin(GL_POLYGON);
    glVertex2f(70, 48);
    glVertex2f(70, 50);
    glVertex2f(72, 50);
    glVertex2f(72, 48);

    glEnd();
    glPopMatrix();


    glPushMatrix();
    glTranslatef(3 * 3, 0, 0);

    glBegin(GL_POLYGON);
    glVertex2f(70, 48);
    glVertex2f(70, 50);
    glVertex2f(72, 50);
    glVertex2f(72, 48);

    glEnd();
    glPopMatrix();


    glPushMatrix();
    glTranslatef(4 * 3, 0, 0);

    glBegin(GL_POLYGON);
    glVertex2f(70, 48);
    glVertex2f(70, 50);
    glVertex2f(72, 50);
    glVertex2f(72, 48);

    glEnd();
    glPopMatrix();

    glPopMatrix();


    //5TH ROW


    glPushMatrix();
    glTranslatef(0, 4 * -3, 0);

    glBegin(GL_POLYGON);
    glVertex2f(70, 48);
    glVertex2f(70, 50);
    glVertex2f(72, 50);
    glVertex2f(72, 48);

    glEnd();


    // NOW PRINTING ALL THE WINDOWS OF THE 1ST ROW

    glPushMatrix();
    glTranslatef(1 * 3, 0, 0);

    glBegin(GL_POLYGON);
    glVertex2f(70, 48);
    glVertex2f(70, 50);
    glVertex2f(72, 50);
    glVertex2f(72, 48);

    glEnd();
    glPopMatrix();


    glPushMatrix();
    glTranslatef(2 * 3, 0, 0);

    glBegin(GL_POLYGON);
    glVertex2f(70, 48);
    glVertex2f(70, 50);
    glVertex2f(72, 50);
    glVertex2f(72, 48);

    glEnd();
    glPopMatrix();


    glPushMatrix();
    glTranslatef(3 * 3, 0, 0);

    glBegin(GL_POLYGON);
    glVertex2f(70, 48);
    glVertex2f(70, 50);
    glVertex2f(72, 50);
    glVertex2f(72, 48);

    glEnd();
    glPopMatrix();


    glPushMatrix();
    glTranslatef(4 * 3, 0, 0);

    glBegin(GL_POLYGON);
    glVertex2f(70, 48);
    glVertex2f(70, 50);
    glVertex2f(72, 50);
    glVertex2f(72, 48);

    glEnd();
    glPopMatrix();

    glPopMatrix();


    //6TH ROW

    glPushMatrix();
    glTranslatef(0, 5 * -3, 0);

    glBegin(GL_POLYGON);
    glVertex2f(70, 48);
    glVertex2f(70, 50);
    glVertex2f(72, 50);
    glVertex2f(72, 48);

    glEnd();


    // NOW PRINTING ALL THE WINDOWS OF THE 1ST ROW

    glPushMatrix();
    glTranslatef(1 * 3, 0, 0);

    glBegin(GL_POLYGON);
    glVertex2f(70, 48);
    glVertex2f(70, 50);
    glVertex2f(72, 50);
    glVertex2f(72, 48);

    glEnd();
    glPopMatrix();


    glPushMatrix();
    glTranslatef(2 * 3, 0, 0);

    glBegin(GL_POLYGON);
    glVertex2f(70, 48);
    glVertex2f(70, 50);
    glVertex2f(72, 50);
    glVertex2f(72, 48);

    glEnd();
    glPopMatrix();


    glPushMatrix();
    glTranslatef(3 * 3, 0, 0);

    glBegin(GL_POLYGON);
    glVertex2f(70, 48);
    glVertex2f(70, 50);
    glVertex2f(72, 50);
    glVertex2f(72, 48);

    glEnd();
    glPopMatrix();


    glPushMatrix();
    glTranslatef(4 * 3, 0, 0);

    glPushMatrix();
    glTranslatef(0, 1 * -3, 0);

    glBegin(GL_POLYGON);
    glVertex2f(70, 48);
    glVertex2f(70, 50);
    glVertex2f(72, 50);
    glVertex2f(72, 48);

    glEnd();


    // NOW PRINTING ALL THE WINDOWS OF THE 1ST ROW

    glPushMatrix();
    glTranslatef(1 * 3, 0, 0);

    glBegin(GL_POLYGON);
    glVertex2f(70, 48);
    glVertex2f(70, 50);
    glVertex2f(72, 50);
    glVertex2f(72, 48);

    glEnd();
    glPopMatrix();


    glPushMatrix();
    glTranslatef(2 * 3, 0, 0);

    glBegin(GL_POLYGON);
    glVertex2f(70, 48);
    glVertex2f(70, 50);
    glVertex2f(72, 50);
    glVertex2f(72, 48);

    glEnd();
    glPopMatrix();


    glPushMatrix();
    glTranslatef(3 * 3, 0, 0);

    glBegin(GL_POLYGON);
    glVertex2f(70, 48);
    glVertex2f(70, 50);
    glVertex2f(72, 50);
    glVertex2f(72, 48);

    glEnd();
    glPopMatrix();


    glPushMatrix();
    glTranslatef(4 * 3, 0, 0);

    glBegin(GL_POLYGON);
    glVertex2f(70, 48);
    glVertex2f(70, 50);
    glVertex2f(72, 50);
    glVertex2f(72, 48);

    glEnd();
    glPopMatrix();

    glPopMatrix();
    glPopMatrix();

    glPopMatrix();
}

//ID - 25
void building_09() {



    //LOWER AREA OF BUILDING 09
    glColor3f(0.72, 0.76, 0.76);
    glBegin(GL_POLYGON);
    glVertex2f(85, 21.9);
    glVertex2f(85, 59);
    glVertex2f(101, 59);
    glVertex2f(101, 21.9);

    glEnd();


    //FIRST LOWER HORIZONTAL AREA
    glColor3f(0.53, 0.56, 0.56);
    glBegin(GL_POLYGON);
    glVertex2f(90, 32);
    glVertex2f(90, 33);
    glVertex2f(102, 33);
    glVertex2f(102, 32);

    glEnd();


    //SECOND LOWER HORIZONTAL AREA
    glColor3f(0.53, 0.56, 0.56);
    glBegin(GL_POLYGON);
    glVertex2f(90.2, 41);
    glVertex2f(90.2, 42);
    glVertex2f(102, 42);
    glVertex2f(102, 41);

    glEnd();


    //THIRD LOWER HORIZONTAL AREA
    glColor3f(0.53, 0.56, 0.56);
    glBegin(GL_POLYGON);
    glVertex2f(84, 51);
    glVertex2f(84, 52);
    glVertex2f(102, 52);
    glVertex2f(102, 51);

    glEnd();


    //FOURTH LOWER HORIZONTAL AREA
    glColor3f(0.53, 0.56, 0.56);
    glBegin(GL_POLYGON);
    glVertex2f(84, 59);
    glVertex2f(84, 60);
    glVertex2f(102, 60);
    glVertex2f(102, 59);

    glEnd();


    //UPPER MORE LIGHTER PORTION OF BUILDING 09

    glColor3f(0.72, 0.76, 0.76);
    glBegin(GL_POLYGON);
    glVertex2f(85.5, 60);
    glVertex2f(85.5, 63.5);
    glVertex2f(100.5, 63.5);
    glVertex2f(100.5, 60);

    glEnd();

    //FIVTH HORIZONTAL AREA OF BUIDLING 09

    glColor3f(0.53, 0.56, 0.56);
    glBegin(GL_POLYGON);
    glVertex2f(85, 63.5);
    glVertex2f(85, 64.5);
    glVertex2f(101, 64.5);
    glVertex2f(101, 63.5);

    glEnd();


    //UPPER PORTION BELOW THE TWO ANTEN'S
    glColor3f(0.42, 0.44, 0.44);
    glBegin(GL_POLYGON);
    glVertex2f(87, 64.5);
    glVertex2f(87, 65.5);
    glVertex2f(99.5, 65.5);
    glVertex2f(99.5, 64.5);

    glEnd();


    //TWO ANTENA'S
    //FIRST ANTENA

    glColor3f(0.57, 0.6, 0.6);
    glBegin(GL_POLYGON);
    glVertex2f(88.5, 65.5);
    glVertex2f(88.5, 67);
    glVertex2f(89, 67);
    glVertex2f(89, 65.5);

    glEnd();


    //SECOND ANTENA
    glColor3f(0.57, 0.6, 0.6);
    glBegin(GL_POLYGON);
    glVertex2f(90, 65.5);
    glVertex2f(90, 67);
    glVertex2f(90.5, 67);
    glVertex2f(90.5, 65.5);

    glEnd();

    //NOW PRINTING THE WINDOWS OF THE BUILDING 09
    //FROM TOP
    //BIG WINDOWS 


    //BACKGROUND MORE DEEPER COLOR
    glColor3f(0.56, 0.59, 0.59);
    glBegin(GL_POLYGON);
    glVertex2f(86.3, 60.3);
    glVertex2f(86.3, 63.2);
    glVertex2f(88.2, 63.2);
    glVertex2f(88.2, 60.3);

    glEnd();

    //MAIN AREA OF EACH BID WINDOW
    glColor3f(0.89, 0.96, 0.98);
    glBegin(GL_POLYGON);
    glVertex2f(86.5, 60.5);
    glVertex2f(86.5, 63);
    glVertex2f(88, 63);
    glVertex2f(88, 60.5);

    glEnd();

    //NOW PRINTING ALL THE BIG WINDOWS
    glPushMatrix();
    glTranslatef(1 * 3, 0, 0);


    //BACKGROUND MORE DEEPER COLOR
    glColor3f(0.56, 0.59, 0.59);
    glBegin(GL_POLYGON);
    glVertex2f(86.3, 60.3);
    glVertex2f(86.3, 63.2);
    glVertex2f(88.2, 63.2);
    glVertex2f(88.2, 60.3);

    glEnd();

    //MAIN AREA OF EACH BID WINDOW
    glColor3f(0.89, 0.96, 0.98);
    glBegin(GL_POLYGON);
    glVertex2f(86.5, 60.5);
    glVertex2f(86.5, 63);
    glVertex2f(88, 63);
    glVertex2f(88, 60.5);

    glEnd();

    glPopMatrix();


    glPushMatrix();
    glTranslatef(2 * 3, 0, 0);


    //BACKGROUND MORE DEEPER COLOR
    glColor3f(0.56, 0.59, 0.59);
    glBegin(GL_POLYGON);
    glVertex2f(86.3, 60.3);
    glVertex2f(86.3, 63.2);
    glVertex2f(88.2, 63.2);
    glVertex2f(88.2, 60.3);

    glEnd();

    //MAIN AREA OF EACH BID WINDOW
    glColor3f(0.89, 0.96, 0.98);
    glBegin(GL_POLYGON);
    glVertex2f(86.5, 60.5);
    glVertex2f(86.5, 63);
    glVertex2f(88, 63);
    glVertex2f(88, 60.5);

    glEnd();

    glPopMatrix();

    glPushMatrix();
    glTranslatef(3 * 3, 0, 0);


    //BACKGROUND MORE DEEPER COLOR
    glColor3f(0.56, 0.59, 0.59);
    glBegin(GL_POLYGON);
    glVertex2f(86.3, 60.3);
    glVertex2f(86.3, 63.2);
    glVertex2f(88.2, 63.2);
    glVertex2f(88.2, 60.3);

    glEnd();

    //MAIN AREA OF EACH BID WINDOW
    glColor3f(0.89, 0.96, 0.98);
    glBegin(GL_POLYGON);
    glVertex2f(86.5, 60.5);
    glVertex2f(86.5, 63);
    glVertex2f(88, 63);
    glVertex2f(88, 60.5);

    glEnd();

    glPopMatrix();


    glPushMatrix();
    glTranslatef(4 * 3, 0, 0);


    //BACKGROUND MORE DEEPER COLOR
    glColor3f(0.56, 0.59, 0.59);
    glBegin(GL_POLYGON);
    glVertex2f(86.3, 60.3);
    glVertex2f(86.3, 63.2);
    glVertex2f(88.2, 63.2);
    glVertex2f(88.2, 60.3);

    glEnd();

    //MAIN AREA OF EACH BID WINDOW
    glColor3f(0.89, 0.96, 0.98);
    glBegin(GL_POLYGON);
    glVertex2f(86.5, 60.5);
    glVertex2f(86.5, 63);
    glVertex2f(88, 63);
    glVertex2f(88, 60.5);

    glEnd();

    glPopMatrix();


    //SMALL WINDOWS

    //BACKGROUND LIGHTER COLOR AREA OF EACH WINDOW
    glColor3f(0.56, 0.59, 0.59);
    glBegin(GL_POLYGON);
    glVertex2f(85.8, 56.4);
    glVertex2f(85.8, 58.3);
    glVertex2f(87.7, 58.3);
    glVertex2f(87.7, 56.4);

    glEnd();

    //BACKGOURND MAIN AREA OF EACH SMALL WINDOWS
    glColor3f(0.89, 0.96, 0.98);
    glBegin(GL_POLYGON);
    glVertex2f(86, 56.6);
    glVertex2f(86, 58.1);
    glVertex2f(87.5, 58.1);
    glVertex2f(87.5, 56.6);
    glEnd();


    //NOW  PRINTING ALL THE SMALL WINDOWS OF THE BUILDING 09
    //UPPER PORTOIN
    glPushMatrix();
    glTranslatef(1 * 3, 0, 0);

    //BACKGROUND LIGHTER COLOR AREA OF EACH WINDOW
    glColor3f(0.56, 0.59, 0.59);
    glBegin(GL_POLYGON);
    glVertex2f(85.8, 56.4);
    glVertex2f(85.8, 58.3);
    glVertex2f(87.7, 58.3);
    glVertex2f(87.7, 56.4);

    glEnd();

    //BACKGOURND MAIN AREA OF EACH SMALL WINDOWS
    glColor3f(0.89, 0.96, 0.98);
    glBegin(GL_POLYGON);
    glVertex2f(86, 56.6);
    glVertex2f(86, 58.1);
    glVertex2f(87.5, 58.1);
    glVertex2f(87.5, 56.6);
    glEnd();

    glPopMatrix();


    glPushMatrix();
    glTranslatef(2 * 3, 0, 0);

    //BACKGROUND LIGHTER COLOR AREA OF EACH WINDOW
    glColor3f(0.56, 0.59, 0.59);
    glBegin(GL_POLYGON);
    glVertex2f(85.8, 56.4);
    glVertex2f(85.8, 58.3);
    glVertex2f(87.7, 58.3);
    glVertex2f(87.7, 56.4);

    glEnd();

    //BACKGOURND MAIN AREA OF EACH SMALL WINDOWS
    glColor3f(0.89, 0.96, 0.98);
    glBegin(GL_POLYGON);
    glVertex2f(86, 56.6);
    glVertex2f(86, 58.1);
    glVertex2f(87.5, 58.1);
    glVertex2f(87.5, 56.6);
    glEnd();

    glPopMatrix();

    glPushMatrix();
    glTranslatef(3 * 3, 0, 0);

    //BACKGROUND LIGHTER COLOR AREA OF EACH WINDOW
    glColor3f(0.56, 0.59, 0.59);
    glBegin(GL_POLYGON);
    glVertex2f(85.8, 56.4);
    glVertex2f(85.8, 58.3);
    glVertex2f(87.7, 58.3);
    glVertex2f(87.7, 56.4);

    glEnd();

    //BACKGOURND MAIN AREA OF EACH SMALL WINDOWS
    glColor3f(0.89, 0.96, 0.98);
    glBegin(GL_POLYGON);
    glVertex2f(86, 56.6);
    glVertex2f(86, 58.1);
    glVertex2f(87.5, 58.1);
    glVertex2f(87.5, 56.6);
    glEnd();

    glPopMatrix();


    glPushMatrix();
    glTranslatef(4 * 3, 0, 0);

    //BACKGROUND LIGHTER COLOR AREA OF EACH WINDOW
    glColor3f(0.56, 0.59, 0.59);
    glBegin(GL_POLYGON);
    glVertex2f(85.8, 56.4);
    glVertex2f(85.8, 58.3);
    glVertex2f(87.7, 58.3);
    glVertex2f(87.7, 56.4);

    glEnd();

    //BACKGOURND MAIN AREA OF EACH SMALL WINDOWS
    glColor3f(0.89, 0.96, 0.98);
    glBegin(GL_POLYGON);
    glVertex2f(86, 56.6);
    glVertex2f(86, 58.1);
    glVertex2f(87.5, 58.1);
    glVertex2f(87.5, 56.6);
    glEnd();

    glPopMatrix();


    //2ND ROW


    glPushMatrix();
    glTranslatef(0, 1 * -3, 0);


    //BACKGROUND LIGHTER COLOR AREA OF EACH WINDOW
    glColor3f(0.56, 0.59, 0.59);
    glBegin(GL_POLYGON);
    glVertex2f(85.8, 56.4);
    glVertex2f(85.8, 58.3);
    glVertex2f(87.7, 58.3);
    glVertex2f(87.7, 56.4);

    glEnd();

    //BACKGOURND MAIN AREA OF EACH SMALL WINDOWS
    glColor3f(0.89, 0.96, 0.98);
    glBegin(GL_POLYGON);
    glVertex2f(86, 56.6);
    glVertex2f(86, 58.1);
    glVertex2f(87.5, 58.1);
    glVertex2f(87.5, 56.6);
    glEnd();


    //NOW  PRINTING ALL THE SMALL WINDOWS OF THE BUILDING 09
    //UPPER PORTOIN
    glPushMatrix();
    glTranslatef(1 * 3, 0, 0);

    //BACKGROUND LIGHTER COLOR AREA OF EACH WINDOW
    glColor3f(0.56, 0.59, 0.59);
    glBegin(GL_POLYGON);
    glVertex2f(85.8, 56.4);
    glVertex2f(85.8, 58.3);
    glVertex2f(87.7, 58.3);
    glVertex2f(87.7, 56.4);

    glEnd();

    //BACKGOURND MAIN AREA OF EACH SMALL WINDOWS
    glColor3f(0.89, 0.96, 0.98);
    glBegin(GL_POLYGON);
    glVertex2f(86, 56.6);
    glVertex2f(86, 58.1);
    glVertex2f(87.5, 58.1);
    glVertex2f(87.5, 56.6);
    glEnd();

    glPopMatrix();


    glPushMatrix();
    glTranslatef(2 * 3, 0, 0);

    //BACKGROUND LIGHTER COLOR AREA OF EACH WINDOW
    glColor3f(0.56, 0.59, 0.59);
    glBegin(GL_POLYGON);
    glVertex2f(85.8, 56.4);
    glVertex2f(85.8, 58.3);
    glVertex2f(87.7, 58.3);
    glVertex2f(87.7, 56.4);

    glEnd();

    //BACKGOURND MAIN AREA OF EACH SMALL WINDOWS
    glColor3f(0.89, 0.96, 0.98);
    glBegin(GL_POLYGON);
    glVertex2f(86, 56.6);
    glVertex2f(86, 58.1);
    glVertex2f(87.5, 58.1);
    glVertex2f(87.5, 56.6);
    glEnd();

    glPopMatrix();

    glPushMatrix();
    glTranslatef(3 * 3, 0, 0);

    //BACKGROUND LIGHTER COLOR AREA OF EACH WINDOW
    glColor3f(0.56, 0.59, 0.59);
    glBegin(GL_POLYGON);
    glVertex2f(85.8, 56.4);
    glVertex2f(85.8, 58.3);
    glVertex2f(87.7, 58.3);
    glVertex2f(87.7, 56.4);

    glEnd();

    //BACKGOURND MAIN AREA OF EACH SMALL WINDOWS
    glColor3f(0.89, 0.96, 0.98);
    glBegin(GL_POLYGON);
    glVertex2f(86, 56.6);
    glVertex2f(86, 58.1);
    glVertex2f(87.5, 58.1);
    glVertex2f(87.5, 56.6);
    glEnd();

    glPopMatrix();


    glPushMatrix();
    glTranslatef(4 * 3, 0, 0);

    //BACKGROUND LIGHTER COLOR AREA OF EACH WINDOW
    glColor3f(0.56, 0.59, 0.59);
    glBegin(GL_POLYGON);
    glVertex2f(85.8, 56.4);
    glVertex2f(85.8, 58.3);
    glVertex2f(87.7, 58.3);
    glVertex2f(87.7, 56.4);

    glEnd();

    //BACKGOURND MAIN AREA OF EACH SMALL WINDOWS
    glColor3f(0.89, 0.96, 0.98);
    glBegin(GL_POLYGON);
    glVertex2f(86, 56.6);
    glVertex2f(86, 58.1);
    glVertex2f(87.5, 58.1);
    glVertex2f(87.5, 56.6);
    glEnd();

    glPopMatrix();

    glPopMatrix();



    //NOW PRINTING THE FIRST ROW WINDOWS OF THE BELOW AREA WINDOWS
    //WE CAN SAY IT THIRD LOWER PORTION

    //FIRST ROW

    glPushMatrix();
    glTranslatef(0, 2.6 * -3, 0);


    //BACKGROUND LIGHTER COLOR AREA OF EACH WINDOW
    glColor3f(0.56, 0.59, 0.59);
    glBegin(GL_POLYGON);
    glVertex2f(85.8, 56.4);
    glVertex2f(85.8, 58.3);
    glVertex2f(87.7, 58.3);
    glVertex2f(87.7, 56.4);

    glEnd();

    //BACKGOURND MAIN AREA OF EACH SMALL WINDOWS
    glColor3f(0.89, 0.96, 0.98);
    glBegin(GL_POLYGON);
    glVertex2f(86, 56.6);
    glVertex2f(86, 58.1);
    glVertex2f(87.5, 58.1);
    glVertex2f(87.5, 56.6);
    glEnd();


    //NOW  PRINTING ALL THE SMALL WINDOWS OF THE BUILDING 09
    //UPPER PORTOIN
    glPushMatrix();
    glTranslatef(1 * 3, 0, 0);

    //BACKGROUND LIGHTER COLOR AREA OF EACH WINDOW
    glColor3f(0.56, 0.59, 0.59);
    glBegin(GL_POLYGON);
    glVertex2f(85.8, 56.4);
    glVertex2f(85.8, 58.3);
    glVertex2f(87.7, 58.3);
    glVertex2f(87.7, 56.4);

    glEnd();

    //BACKGOURND MAIN AREA OF EACH SMALL WINDOWS
    glColor3f(0.89, 0.96, 0.98);
    glBegin(GL_POLYGON);
    glVertex2f(86, 56.6);
    glVertex2f(86, 58.1);
    glVertex2f(87.5, 58.1);
    glVertex2f(87.5, 56.6);
    glEnd();

    glPopMatrix();


    glPushMatrix();
    glTranslatef(2 * 3, 0, 0);

    //BACKGROUND LIGHTER COLOR AREA OF EACH WINDOW
    glColor3f(0.56, 0.59, 0.59);
    glBegin(GL_POLYGON);
    glVertex2f(85.8, 56.4);
    glVertex2f(85.8, 58.3);
    glVertex2f(87.7, 58.3);
    glVertex2f(87.7, 56.4);

    glEnd();

    //BACKGOURND MAIN AREA OF EACH SMALL WINDOWS
    glColor3f(0.89, 0.96, 0.98);
    glBegin(GL_POLYGON);
    glVertex2f(86, 56.6);
    glVertex2f(86, 58.1);
    glVertex2f(87.5, 58.1);
    glVertex2f(87.5, 56.6);
    glEnd();

    glPopMatrix();

    glPushMatrix();
    glTranslatef(3 * 3, 0, 0);

    //BACKGROUND LIGHTER COLOR AREA OF EACH WINDOW
    glColor3f(0.56, 0.59, 0.59);
    glBegin(GL_POLYGON);
    glVertex2f(85.8, 56.4);
    glVertex2f(85.8, 58.3);
    glVertex2f(87.7, 58.3);
    glVertex2f(87.7, 56.4);

    glEnd();

    //BACKGOURND MAIN AREA OF EACH SMALL WINDOWS
    glColor3f(0.89, 0.96, 0.98);
    glBegin(GL_POLYGON);
    glVertex2f(86, 56.6);
    glVertex2f(86, 58.1);
    glVertex2f(87.5, 58.1);
    glVertex2f(87.5, 56.6);
    glEnd();

    glPopMatrix();


    glPushMatrix();
    glTranslatef(4 * 3, 0, 0);

    //BACKGROUND LIGHTER COLOR AREA OF EACH WINDOW
    glColor3f(0.56, 0.59, 0.59);
    glBegin(GL_POLYGON);
    glVertex2f(85.8, 56.4);
    glVertex2f(85.8, 58.3);
    glVertex2f(87.7, 58.3);
    glVertex2f(87.7, 56.4);

    glEnd();

    //BACKGOURND MAIN AREA OF EACH SMALL WINDOWS
    glColor3f(0.89, 0.96, 0.98);
    glBegin(GL_POLYGON);
    glVertex2f(86, 56.6);
    glVertex2f(86, 58.1);
    glVertex2f(87.5, 58.1);
    glVertex2f(87.5, 56.6);
    glEnd();

    glPopMatrix();

    glPopMatrix();



    //2ND ROW


    glPushMatrix();
    glTranslatef(0, 3.6 * -3, 0);


    //BACKGROUND LIGHTER COLOR AREA OF EACH WINDOW
    glColor3f(0.56, 0.59, 0.59);
    glBegin(GL_POLYGON);
    glVertex2f(85.8, 56.4);
    glVertex2f(85.8, 58.3);
    glVertex2f(87.7, 58.3);
    glVertex2f(87.7, 56.4);

    glEnd();

    //BACKGOURND MAIN AREA OF EACH SMALL WINDOWS
    glColor3f(0.89, 0.96, 0.98);
    glBegin(GL_POLYGON);
    glVertex2f(86, 56.6);
    glVertex2f(86, 58.1);
    glVertex2f(87.5, 58.1);
    glVertex2f(87.5, 56.6);
    glEnd();


    //NOW  PRINTING ALL THE SMALL WINDOWS OF THE BUILDING 09
    //UPPER PORTOIN
    glPushMatrix();
    glTranslatef(1 * 3, 0, 0);

    //BACKGROUND LIGHTER COLOR AREA OF EACH WINDOW
    glColor3f(0.56, 0.59, 0.59);
    glBegin(GL_POLYGON);
    glVertex2f(85.8, 56.4);
    glVertex2f(85.8, 58.3);
    glVertex2f(87.7, 58.3);
    glVertex2f(87.7, 56.4);

    glEnd();

    //BACKGOURND MAIN AREA OF EACH SMALL WINDOWS
    glColor3f(0.89, 0.96, 0.98);
    glBegin(GL_POLYGON);
    glVertex2f(86, 56.6);
    glVertex2f(86, 58.1);
    glVertex2f(87.5, 58.1);
    glVertex2f(87.5, 56.6);
    glEnd();

    glPopMatrix();


    glPushMatrix();
    glTranslatef(2 * 3, 0, 0);

    //BACKGROUND LIGHTER COLOR AREA OF EACH WINDOW
    glColor3f(0.56, 0.59, 0.59);
    glBegin(GL_POLYGON);
    glVertex2f(85.8, 56.4);
    glVertex2f(85.8, 58.3);
    glVertex2f(87.7, 58.3);
    glVertex2f(87.7, 56.4);

    glEnd();

    //BACKGOURND MAIN AREA OF EACH SMALL WINDOWS
    glColor3f(0.89, 0.96, 0.98);
    glBegin(GL_POLYGON);
    glVertex2f(86, 56.6);
    glVertex2f(86, 58.1);
    glVertex2f(87.5, 58.1);
    glVertex2f(87.5, 56.6);
    glEnd();

    glPopMatrix();

    glPushMatrix();
    glTranslatef(3 * 3, 0, 0);

    //BACKGROUND LIGHTER COLOR AREA OF EACH WINDOW
    glColor3f(0.56, 0.59, 0.59);
    glBegin(GL_POLYGON);
    glVertex2f(85.8, 56.4);
    glVertex2f(85.8, 58.3);
    glVertex2f(87.7, 58.3);
    glVertex2f(87.7, 56.4);

    glEnd();

    //BACKGOURND MAIN AREA OF EACH SMALL WINDOWS
    glColor3f(0.89, 0.96, 0.98);
    glBegin(GL_POLYGON);
    glVertex2f(86, 56.6);
    glVertex2f(86, 58.1);
    glVertex2f(87.5, 58.1);
    glVertex2f(87.5, 56.6);
    glEnd();

    glPopMatrix();


    glPushMatrix();
    glTranslatef(4 * 3, 0, 0);

    //BACKGROUND LIGHTER COLOR AREA OF EACH WINDOW
    glColor3f(0.56, 0.59, 0.59);
    glBegin(GL_POLYGON);
    glVertex2f(85.8, 56.4);
    glVertex2f(85.8, 58.3);
    glVertex2f(87.7, 58.3);
    glVertex2f(87.7, 56.4);

    glEnd();

    //BACKGOURND MAIN AREA OF EACH SMALL WINDOWS
    glColor3f(0.89, 0.96, 0.98);
    glBegin(GL_POLYGON);
    glVertex2f(86, 56.6);
    glVertex2f(86, 58.1);
    glVertex2f(87.5, 58.1);
    glVertex2f(87.5, 56.6);
    glEnd();

    glPopMatrix();

    glPopMatrix();


    //3RD ROW

    glPushMatrix();
    glTranslatef(0, 4.6 * -3, 0);


    //BACKGROUND LIGHTER COLOR AREA OF EACH WINDOW
    glColor3f(0.56, 0.59, 0.59);
    glBegin(GL_POLYGON);
    glVertex2f(85.8, 56.4);
    glVertex2f(85.8, 58.3);
    glVertex2f(87.7, 58.3);
    glVertex2f(87.7, 56.4);

    glEnd();

    //BACKGOURND MAIN AREA OF EACH SMALL WINDOWS
    glColor3f(0.89, 0.96, 0.98);
    glBegin(GL_POLYGON);
    glVertex2f(86, 56.6);
    glVertex2f(86, 58.1);
    glVertex2f(87.5, 58.1);
    glVertex2f(87.5, 56.6);
    glEnd();


    //NOW  PRINTING ALL THE SMALL WINDOWS OF THE BUILDING 09
    //UPPER PORTOIN
    glPushMatrix();
    glTranslatef(1 * 3, 0, 0);

    //BACKGROUND LIGHTER COLOR AREA OF EACH WINDOW
    glColor3f(0.56, 0.59, 0.59);
    glBegin(GL_POLYGON);
    glVertex2f(85.8, 56.4);
    glVertex2f(85.8, 58.3);
    glVertex2f(87.7, 58.3);
    glVertex2f(87.7, 56.4);

    glEnd();

    //BACKGOURND MAIN AREA OF EACH SMALL WINDOWS
    glColor3f(0.89, 0.96, 0.98);
    glBegin(GL_POLYGON);
    glVertex2f(86, 56.6);
    glVertex2f(86, 58.1);
    glVertex2f(87.5, 58.1);
    glVertex2f(87.5, 56.6);
    glEnd();

    glPopMatrix();


    glPushMatrix();
    glTranslatef(2 * 3, 0, 0);

    //BACKGROUND LIGHTER COLOR AREA OF EACH WINDOW
    glColor3f(0.56, 0.59, 0.59);
    glBegin(GL_POLYGON);
    glVertex2f(85.8, 56.4);
    glVertex2f(85.8, 58.3);
    glVertex2f(87.7, 58.3);
    glVertex2f(87.7, 56.4);

    glEnd();

    //BACKGOURND MAIN AREA OF EACH SMALL WINDOWS
    glColor3f(0.89, 0.96, 0.98);
    glBegin(GL_POLYGON);
    glVertex2f(86, 56.6);
    glVertex2f(86, 58.1);
    glVertex2f(87.5, 58.1);
    glVertex2f(87.5, 56.6);
    glEnd();

    glPopMatrix();

    glPushMatrix();
    glTranslatef(3 * 3, 0, 0);

    //BACKGROUND LIGHTER COLOR AREA OF EACH WINDOW
    glColor3f(0.56, 0.59, 0.59);
    glBegin(GL_POLYGON);
    glVertex2f(85.8, 56.4);
    glVertex2f(85.8, 58.3);
    glVertex2f(87.7, 58.3);
    glVertex2f(87.7, 56.4);

    glEnd();

    //BACKGOURND MAIN AREA OF EACH SMALL WINDOWS
    glColor3f(0.89, 0.96, 0.98);
    glBegin(GL_POLYGON);
    glVertex2f(86, 56.6);
    glVertex2f(86, 58.1);
    glVertex2f(87.5, 58.1);
    glVertex2f(87.5, 56.6);
    glEnd();

    glPopMatrix();


    glPushMatrix();
    glTranslatef(4 * 3, 0, 0);

    //BACKGROUND LIGHTER COLOR AREA OF EACH WINDOW
    glColor3f(0.56, 0.59, 0.59);
    glBegin(GL_POLYGON);
    glVertex2f(85.8, 56.4);
    glVertex2f(85.8, 58.3);
    glVertex2f(87.7, 58.3);
    glVertex2f(87.7, 56.4);

    glEnd();

    //BACKGOURND MAIN AREA OF EACH SMALL WINDOWS
    glColor3f(0.89, 0.96, 0.98);
    glBegin(GL_POLYGON);
    glVertex2f(86, 56.6);
    glVertex2f(86, 58.1);
    glVertex2f(87.5, 58.1);
    glVertex2f(87.5, 56.6);
    glEnd();

    glPopMatrix();

    glPopMatrix();



    //FIRST ROW OF THE SECOND LOWER PORTION

    glPushMatrix();
    glTranslatef(0, 5.9 * -3, 0);


    //BACKGROUND LIGHTER COLOR AREA OF EACH WINDOW
    glColor3f(0.56, 0.59, 0.59);
    glBegin(GL_POLYGON);
    glVertex2f(85.8, 56.4);
    glVertex2f(85.8, 58.3);
    glVertex2f(87.7, 58.3);
    glVertex2f(87.7, 56.4);

    glEnd();

    //BACKGOURND MAIN AREA OF EACH SMALL WINDOWS
    glColor3f(0.89, 0.96, 0.98);
    glBegin(GL_POLYGON);
    glVertex2f(86, 56.6);
    glVertex2f(86, 58.1);
    glVertex2f(87.5, 58.1);
    glVertex2f(87.5, 56.6);
    glEnd();


    //NOW  PRINTING ALL THE SMALL WINDOWS OF THE BUILDING 09
    //UPPER PORTOIN
    glPushMatrix();
    glTranslatef(1 * 3, 0, 0);

    //BACKGROUND LIGHTER COLOR AREA OF EACH WINDOW
    glColor3f(0.56, 0.59, 0.59);
    glBegin(GL_POLYGON);
    glVertex2f(85.8, 56.4);
    glVertex2f(85.8, 58.3);
    glVertex2f(87.7, 58.3);
    glVertex2f(87.7, 56.4);

    glEnd();

    //BACKGOURND MAIN AREA OF EACH SMALL WINDOWS
    glColor3f(0.89, 0.96, 0.98);
    glBegin(GL_POLYGON);
    glVertex2f(86, 56.6);
    glVertex2f(86, 58.1);
    glVertex2f(87.5, 58.1);
    glVertex2f(87.5, 56.6);
    glEnd();

    glPopMatrix();


    glPushMatrix();
    glTranslatef(2 * 3, 0, 0);

    //BACKGROUND LIGHTER COLOR AREA OF EACH WINDOW
    glColor3f(0.56, 0.59, 0.59);
    glBegin(GL_POLYGON);
    glVertex2f(85.8, 56.4);
    glVertex2f(85.8, 58.3);
    glVertex2f(87.7, 58.3);
    glVertex2f(87.7, 56.4);

    glEnd();

    //BACKGOURND MAIN AREA OF EACH SMALL WINDOWS
    glColor3f(0.89, 0.96, 0.98);
    glBegin(GL_POLYGON);
    glVertex2f(86, 56.6);
    glVertex2f(86, 58.1);
    glVertex2f(87.5, 58.1);
    glVertex2f(87.5, 56.6);
    glEnd();

    glPopMatrix();

    glPushMatrix();
    glTranslatef(3 * 3, 0, 0);

    //BACKGROUND LIGHTER COLOR AREA OF EACH WINDOW
    glColor3f(0.56, 0.59, 0.59);
    glBegin(GL_POLYGON);
    glVertex2f(85.8, 56.4);
    glVertex2f(85.8, 58.3);
    glVertex2f(87.7, 58.3);
    glVertex2f(87.7, 56.4);

    glEnd();

    //BACKGOURND MAIN AREA OF EACH SMALL WINDOWS
    glColor3f(0.89, 0.96, 0.98);
    glBegin(GL_POLYGON);
    glVertex2f(86, 56.6);
    glVertex2f(86, 58.1);
    glVertex2f(87.5, 58.1);
    glVertex2f(87.5, 56.6);
    glEnd();

    glPopMatrix();


    glPushMatrix();
    glTranslatef(4 * 3, 0, 0);

    //BACKGROUND LIGHTER COLOR AREA OF EACH WINDOW
    glColor3f(0.56, 0.59, 0.59);
    glBegin(GL_POLYGON);
    glVertex2f(85.8, 56.4);
    glVertex2f(85.8, 58.3);
    glVertex2f(87.7, 58.3);
    glVertex2f(87.7, 56.4);

    glEnd();

    //BACKGOURND MAIN AREA OF EACH SMALL WINDOWS
    glColor3f(0.89, 0.96, 0.98);
    glBegin(GL_POLYGON);
    glVertex2f(86, 56.6);
    glVertex2f(86, 58.1);
    glVertex2f(87.5, 58.1);
    glVertex2f(87.5, 56.6);
    glEnd();

    glPopMatrix();

    glPopMatrix();


    //SEOND ROW


    glPushMatrix();
    glTranslatef(0, 6.7 * -3, 0);


    //BACKGROUND LIGHTER COLOR AREA OF EACH WINDOW
    glColor3f(0.56, 0.59, 0.59);
    glBegin(GL_POLYGON);
    glVertex2f(85.8, 56.4);
    glVertex2f(85.8, 58.3);
    glVertex2f(87.7, 58.3);
    glVertex2f(87.7, 56.4);

    glEnd();

    //BACKGOURND MAIN AREA OF EACH SMALL WINDOWS
    glColor3f(0.89, 0.96, 0.98);
    glBegin(GL_POLYGON);
    glVertex2f(86, 56.6);
    glVertex2f(86, 58.1);
    glVertex2f(87.5, 58.1);
    glVertex2f(87.5, 56.6);
    glEnd();


    //NOW  PRINTING ALL THE SMALL WINDOWS OF THE BUILDING 09
    //UPPER PORTOIN
    glPushMatrix();
    glTranslatef(1 * 3, 0, 0);

    //BACKGROUND LIGHTER COLOR AREA OF EACH WINDOW
    glColor3f(0.56, 0.59, 0.59);
    glBegin(GL_POLYGON);
    glVertex2f(85.8, 56.4);
    glVertex2f(85.8, 58.3);
    glVertex2f(87.7, 58.3);
    glVertex2f(87.7, 56.4);

    glEnd();

    //BACKGOURND MAIN AREA OF EACH SMALL WINDOWS
    glColor3f(0.89, 0.96, 0.98);
    glBegin(GL_POLYGON);
    glVertex2f(86, 56.6);
    glVertex2f(86, 58.1);
    glVertex2f(87.5, 58.1);
    glVertex2f(87.5, 56.6);
    glEnd();

    glPopMatrix();


    glPushMatrix();
    glTranslatef(2 * 3, 0, 0);

    //BACKGROUND LIGHTER COLOR AREA OF EACH WINDOW
    glColor3f(0.56, 0.59, 0.59);
    glBegin(GL_POLYGON);
    glVertex2f(85.8, 56.4);
    glVertex2f(85.8, 58.3);
    glVertex2f(87.7, 58.3);
    glVertex2f(87.7, 56.4);

    glEnd();

    //BACKGOURND MAIN AREA OF EACH SMALL WINDOWS
    glColor3f(0.89, 0.96, 0.98);
    glBegin(GL_POLYGON);
    glVertex2f(86, 56.6);
    glVertex2f(86, 58.1);
    glVertex2f(87.5, 58.1);
    glVertex2f(87.5, 56.6);
    glEnd();

    glPopMatrix();

    glPushMatrix();
    glTranslatef(3 * 3, 0, 0);

    //BACKGROUND LIGHTER COLOR AREA OF EACH WINDOW
    glColor3f(0.56, 0.59, 0.59);
    glBegin(GL_POLYGON);
    glVertex2f(85.8, 56.4);
    glVertex2f(85.8, 58.3);
    glVertex2f(87.7, 58.3);
    glVertex2f(87.7, 56.4);

    glEnd();

    //BACKGOURND MAIN AREA OF EACH SMALL WINDOWS
    glColor3f(0.89, 0.96, 0.98);
    glBegin(GL_POLYGON);
    glVertex2f(86, 56.6);
    glVertex2f(86, 58.1);
    glVertex2f(87.5, 58.1);
    glVertex2f(87.5, 56.6);
    glEnd();

    glPopMatrix();


    glPushMatrix();
    glTranslatef(4 * 3, 0, 0);

    //BACKGROUND LIGHTER COLOR AREA OF EACH WINDOW
    glColor3f(0.56, 0.59, 0.59);
    glBegin(GL_POLYGON);
    glVertex2f(85.8, 56.4);
    glVertex2f(85.8, 58.3);
    glVertex2f(87.7, 58.3);
    glVertex2f(87.7, 56.4);

    glEnd();

    //BACKGOURND MAIN AREA OF EACH SMALL WINDOWS
    glColor3f(0.89, 0.96, 0.98);
    glBegin(GL_POLYGON);
    glVertex2f(86, 56.6);
    glVertex2f(86, 58.1);
    glVertex2f(87.5, 58.1);
    glVertex2f(87.5, 56.6);
    glEnd();

    glPopMatrix();

    glPopMatrix();


    //THIRD ROW
    glPushMatrix();
    glTranslatef(0, 7.6 * -3, 0);


    //BACKGROUND LIGHTER COLOR AREA OF EACH WINDOW
    glColor3f(0.56, 0.59, 0.59);
    glBegin(GL_POLYGON);
    glVertex2f(85.8, 56.4);
    glVertex2f(85.8, 58.3);
    glVertex2f(87.7, 58.3);
    glVertex2f(87.7, 56.4);

    glEnd();

    //BACKGOURND MAIN AREA OF EACH SMALL WINDOWS
    glColor3f(0.89, 0.96, 0.98);
    glBegin(GL_POLYGON);
    glVertex2f(86, 56.6);
    glVertex2f(86, 58.1);
    glVertex2f(87.5, 58.1);
    glVertex2f(87.5, 56.6);
    glEnd();


    //NOW  PRINTING ALL THE SMALL WINDOWS OF THE BUILDING 09
    //UPPER PORTOIN
    glPushMatrix();
    glTranslatef(1 * 3, 0, 0);

    //BACKGROUND LIGHTER COLOR AREA OF EACH WINDOW
    glColor3f(0.56, 0.59, 0.59);
    glBegin(GL_POLYGON);
    glVertex2f(85.8, 56.4);
    glVertex2f(85.8, 58.3);
    glVertex2f(87.7, 58.3);
    glVertex2f(87.7, 56.4);

    glEnd();

    //BACKGOURND MAIN AREA OF EACH SMALL WINDOWS
    glColor3f(0.89, 0.96, 0.98);
    glBegin(GL_POLYGON);
    glVertex2f(86, 56.6);
    glVertex2f(86, 58.1);
    glVertex2f(87.5, 58.1);
    glVertex2f(87.5, 56.6);
    glEnd();

    glPopMatrix();


    glPushMatrix();
    glTranslatef(2 * 3, 0, 0);

    //BACKGROUND LIGHTER COLOR AREA OF EACH WINDOW
    glColor3f(0.56, 0.59, 0.59);
    glBegin(GL_POLYGON);
    glVertex2f(85.8, 56.4);
    glVertex2f(85.8, 58.3);
    glVertex2f(87.7, 58.3);
    glVertex2f(87.7, 56.4);

    glEnd();

    //BACKGOURND MAIN AREA OF EACH SMALL WINDOWS
    glColor3f(0.89, 0.96, 0.98);
    glBegin(GL_POLYGON);
    glVertex2f(86, 56.6);
    glVertex2f(86, 58.1);
    glVertex2f(87.5, 58.1);
    glVertex2f(87.5, 56.6);
    glEnd();

    glPopMatrix();

    glPushMatrix();
    glTranslatef(3 * 3, 0, 0);

    //BACKGROUND LIGHTER COLOR AREA OF EACH WINDOW
    glColor3f(0.56, 0.59, 0.59);
    glBegin(GL_POLYGON);
    glVertex2f(85.8, 56.4);
    glVertex2f(85.8, 58.3);
    glVertex2f(87.7, 58.3);
    glVertex2f(87.7, 56.4);

    glEnd();

    //BACKGOURND MAIN AREA OF EACH SMALL WINDOWS
    glColor3f(0.89, 0.96, 0.98);
    glBegin(GL_POLYGON);
    glVertex2f(86, 56.6);
    glVertex2f(86, 58.1);
    glVertex2f(87.5, 58.1);
    glVertex2f(87.5, 56.6);
    glEnd();

    glPopMatrix();


    glPushMatrix();
    glTranslatef(4 * 3, 0, 0);

    //BACKGROUND LIGHTER COLOR AREA OF EACH WINDOW
    glColor3f(0.56, 0.59, 0.59);
    glBegin(GL_POLYGON);
    glVertex2f(85.8, 56.4);
    glVertex2f(85.8, 58.3);
    glVertex2f(87.7, 58.3);
    glVertex2f(87.7, 56.4);

    glEnd();

    //BACKGOURND MAIN AREA OF EACH SMALL WINDOWS
    glColor3f(0.89, 0.96, 0.98);
    glBegin(GL_POLYGON);
    glVertex2f(86, 56.6);
    glVertex2f(86, 58.1);
    glVertex2f(87.5, 58.1);
    glVertex2f(87.5, 56.6);
    glEnd();

    glPopMatrix();

    glPopMatrix();



    //FIRST ROW OF THE FIRST LAYER


    glPushMatrix();
    glTranslatef(0, 9 * -3, 0);


    //BACKGROUND LIGHTER COLOR AREA OF EACH WINDOW
    glColor3f(0.56, 0.59, 0.59);
    glBegin(GL_POLYGON);
    glVertex2f(85.8, 56.4);
    glVertex2f(85.8, 58.3);
    glVertex2f(87.7, 58.3);
    glVertex2f(87.7, 56.4);

    glEnd();

    //BACKGOURND MAIN AREA OF EACH SMALL WINDOWS
    glColor3f(0.89, 0.96, 0.98);
    glBegin(GL_POLYGON);
    glVertex2f(86, 56.6);
    glVertex2f(86, 58.1);
    glVertex2f(87.5, 58.1);
    glVertex2f(87.5, 56.6);
    glEnd();


    //NOW  PRINTING ALL THE SMALL WINDOWS OF THE BUILDING 09
    //UPPER PORTOIN
    glPushMatrix();
    glTranslatef(1 * 3, 0, 0);

    //BACKGROUND LIGHTER COLOR AREA OF EACH WINDOW
    glColor3f(0.56, 0.59, 0.59);
    glBegin(GL_POLYGON);
    glVertex2f(85.8, 56.4);
    glVertex2f(85.8, 58.3);
    glVertex2f(87.7, 58.3);
    glVertex2f(87.7, 56.4);

    glEnd();

    //BACKGOURND MAIN AREA OF EACH SMALL WINDOWS
    glColor3f(0.89, 0.96, 0.98);
    glBegin(GL_POLYGON);
    glVertex2f(86, 56.6);
    glVertex2f(86, 58.1);
    glVertex2f(87.5, 58.1);
    glVertex2f(87.5, 56.6);
    glEnd();

    glPopMatrix();


    glPushMatrix();
    glTranslatef(2 * 3, 0, 0);

    //BACKGROUND LIGHTER COLOR AREA OF EACH WINDOW
    glColor3f(0.56, 0.59, 0.59);
    glBegin(GL_POLYGON);
    glVertex2f(85.8, 56.4);
    glVertex2f(85.8, 58.3);
    glVertex2f(87.7, 58.3);
    glVertex2f(87.7, 56.4);

    glEnd();

    //BACKGOURND MAIN AREA OF EACH SMALL WINDOWS
    glColor3f(0.89, 0.96, 0.98);
    glBegin(GL_POLYGON);
    glVertex2f(86, 56.6);
    glVertex2f(86, 58.1);
    glVertex2f(87.5, 58.1);
    glVertex2f(87.5, 56.6);
    glEnd();

    glPopMatrix();

    glPushMatrix();
    glTranslatef(3 * 3, 0, 0);

    //BACKGROUND LIGHTER COLOR AREA OF EACH WINDOW
    glColor3f(0.56, 0.59, 0.59);
    glBegin(GL_POLYGON);
    glVertex2f(85.8, 56.4);
    glVertex2f(85.8, 58.3);
    glVertex2f(87.7, 58.3);
    glVertex2f(87.7, 56.4);

    glEnd();

    //BACKGOURND MAIN AREA OF EACH SMALL WINDOWS
    glColor3f(0.89, 0.96, 0.98);
    glBegin(GL_POLYGON);
    glVertex2f(86, 56.6);
    glVertex2f(86, 58.1);
    glVertex2f(87.5, 58.1);
    glVertex2f(87.5, 56.6);
    glEnd();

    glPopMatrix();


    glPushMatrix();
    glTranslatef(4 * 3, 0, 0);

    //BACKGROUND LIGHTER COLOR AREA OF EACH WINDOW
    glColor3f(0.56, 0.59, 0.59);
    glBegin(GL_POLYGON);
    glVertex2f(85.8, 56.4);
    glVertex2f(85.8, 58.3);
    glVertex2f(87.7, 58.3);
    glVertex2f(87.7, 56.4);

    glEnd();

    //BACKGOURND MAIN AREA OF EACH SMALL WINDOWS
    glColor3f(0.89, 0.96, 0.98);
    glBegin(GL_POLYGON);
    glVertex2f(86, 56.6);
    glVertex2f(86, 58.1);
    glVertex2f(87.5, 58.1);
    glVertex2f(87.5, 56.6);
    glEnd();

    glPopMatrix();

    glPopMatrix();


    //SECOND ROW 

    glPushMatrix();
    glTranslatef(0, 9.9 * -3, 0);


    //BACKGROUND LIGHTER COLOR AREA OF EACH WINDOW
    glColor3f(0.56, 0.59, 0.59);
    glBegin(GL_POLYGON);
    glVertex2f(85.8, 56.4);
    glVertex2f(85.8, 58.3);
    glVertex2f(87.7, 58.3);
    glVertex2f(87.7, 56.4);

    glEnd();

    //BACKGOURND MAIN AREA OF EACH SMALL WINDOWS
    glColor3f(0.89, 0.96, 0.98);
    glBegin(GL_POLYGON);
    glVertex2f(86, 56.6);
    glVertex2f(86, 58.1);
    glVertex2f(87.5, 58.1);
    glVertex2f(87.5, 56.6);
    glEnd();


    //NOW  PRINTING ALL THE SMALL WINDOWS OF THE BUILDING 09
    //UPPER PORTOIN
    glPushMatrix();
    glTranslatef(1 * 3, 0, 0);

    //BACKGROUND LIGHTER COLOR AREA OF EACH WINDOW
    glColor3f(0.56, 0.59, 0.59);
    glBegin(GL_POLYGON);
    glVertex2f(85.8, 56.4);
    glVertex2f(85.8, 58.3);
    glVertex2f(87.7, 58.3);
    glVertex2f(87.7, 56.4);

    glEnd();

    //BACKGOURND MAIN AREA OF EACH SMALL WINDOWS
    glColor3f(0.89, 0.96, 0.98);
    glBegin(GL_POLYGON);
    glVertex2f(86, 56.6);
    glVertex2f(86, 58.1);
    glVertex2f(87.5, 58.1);
    glVertex2f(87.5, 56.6);
    glEnd();

    glPopMatrix();


    glPushMatrix();
    glTranslatef(2 * 3, 0, 0);

    //BACKGROUND LIGHTER COLOR AREA OF EACH WINDOW
    glColor3f(0.56, 0.59, 0.59);
    glBegin(GL_POLYGON);
    glVertex2f(85.8, 56.4);
    glVertex2f(85.8, 58.3);
    glVertex2f(87.7, 58.3);
    glVertex2f(87.7, 56.4);

    glEnd();

    //BACKGOURND MAIN AREA OF EACH SMALL WINDOWS
    glColor3f(0.89, 0.96, 0.98);
    glBegin(GL_POLYGON);
    glVertex2f(86, 56.6);
    glVertex2f(86, 58.1);
    glVertex2f(87.5, 58.1);
    glVertex2f(87.5, 56.6);
    glEnd();

    glPopMatrix();

    glPushMatrix();
    glTranslatef(3 * 3, 0, 0);

    //BACKGROUND LIGHTER COLOR AREA OF EACH WINDOW
    glColor3f(0.56, 0.59, 0.59);
    glBegin(GL_POLYGON);
    glVertex2f(85.8, 56.4);
    glVertex2f(85.8, 58.3);
    glVertex2f(87.7, 58.3);
    glVertex2f(87.7, 56.4);

    glEnd();

    //BACKGOURND MAIN AREA OF EACH SMALL WINDOWS
    glColor3f(0.89, 0.96, 0.98);
    glBegin(GL_POLYGON);
    glVertex2f(86, 56.6);
    glVertex2f(86, 58.1);
    glVertex2f(87.5, 58.1);
    glVertex2f(87.5, 56.6);
    glEnd();

    glPopMatrix();


    glPushMatrix();
    glTranslatef(4 * 3, 0, 0);

    //BACKGROUND LIGHTER COLOR AREA OF EACH WINDOW
    glColor3f(0.56, 0.59, 0.59);
    glBegin(GL_POLYGON);
    glVertex2f(85.8, 56.4);
    glVertex2f(85.8, 58.3);
    glVertex2f(87.7, 58.3);
    glVertex2f(87.7, 56.4);

    glEnd();

    //BACKGOURND MAIN AREA OF EACH SMALL WINDOWS
    glColor3f(0.89, 0.96, 0.98);
    glBegin(GL_POLYGON);
    glVertex2f(86, 56.6);
    glVertex2f(86, 58.1);
    glVertex2f(87.5, 58.1);
    glVertex2f(87.5, 56.6);
    glEnd();

    glPopMatrix();

    glPopMatrix();







}


//ID - 26

void building_10() {

    //LOWER PORTION OF BUILDING 10

    glColor3f(0.91, 0.71, 0.58);
    glBegin(GL_POLYGON);
    glVertex2f(92, 21.9);
    glVertex2f(92, 29.8);
    glVertex2f(125, 29.8);
    glVertex2f(125, 21.9);
    glEnd();


    //WHITISH AREA ABOVE THE LOWER PORTION

    glColor3f(0.98, 0.85, 0.76);
    glBegin(GL_POLYGON);
    glVertex2f(91, 29.8);
    glVertex2f(91, 30.5);
    glVertex2f(126, 30.5);
    glVertex2f(126, 29.8);
    glEnd();

    //UPPER ANGLED PORTION OF BUILDING 10

    glColor3f(0.95, 0.44, 0.42);
    glBegin(GL_POLYGON);
    glVertex2f(91, 30.5);
    glVertex2f(95, 35);
    glVertex2f(122, 35);
    glVertex2f(126, 30.5);
    glEnd();


    //MOST UPPER TRIANGLED SHAPE AREA

    glColor3f(0.98, 0.85, 0.76);
    glBegin(GL_POLYGON);
    glVertex2f(106.6, 32.4);
    glVertex2f(106.6, 36);
    glVertex2f(110.4, 36);
    glVertex2f(110.4, 32.4);
    glEnd();


    //HORIZONTAL ROUNDED SHAPE AREA IN THE TRIANGLED AREA

    glColor3f(0.96, 0.49, 0.46);
    glBegin(GL_POLYGON);
    glVertex2f(106.6, 36);
    glVertex2f(106.45, 36.1);
    glVertex2f(106.45, 36.25);
    glVertex2f(106.6, 36.35);
    glVertex2f(110.4, 36.35);
    glVertex2f(110.55, 36.25);
    glVertex2f(110.55, 36.1);
    glVertex2f(110.4, 36);
    glEnd();


    //TRIANGLE SHAPE AT THE TOP
    glColor3f(0.95, 0.44, 0.42);
    glBegin(GL_POLYGON);
    glVertex2f(106.6, 36.35);
    glVertex2f(108.5, 38.5);
    glVertex2f(110.4, 36.35);
    glEnd();



    //MAIN DOOR AREA TRIANGLED SHAPE

    //BACK MORE LIGHTER AREA

    glColor3f(0.98, 0.85, 0.76);
    glBegin(GL_POLYGON);
    glVertex2f(103.5, 21.9);
    glVertex2f(103.5, 29);
    glVertex2f(108.5, 32.5);
    glVertex2f(113.5, 29);
    glVertex2f(113.5, 21.9);
    glEnd();

    //REDISGH TRIANGLE ARE
    glColor3f(0.95, 0.44, 0.42);
    glBegin(GL_POLYGON);
    glVertex2f(103.5, 29);
    glVertex2f(102, 29);
    glVertex2f(108.5, 34);
    glVertex2f(108.5, 32.5);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(108.5, 34);
    glVertex2f(115, 29);
    glVertex2f(113.5, 29);
    glVertex2f(108.5, 32.5);
    glEnd();


    //MAIN DOOR

    //BACKGROUND  REDISH COLOR OF MAIN DOOR
    glColor3f(0.95, 0.44, 0.42);
    glBegin(GL_POLYGON);
    glVertex2f(105.5, 21.9);
    glVertex2f(105.5, 26);
    glVertex2f(106.1, 27.7);
    glVertex2f(107.4, 28.9);
    glVertex2f(109.7, 28.9);
    glVertex2f(110.9, 27.7);
    glVertex2f(111.5, 26);
    glVertex2f(111.5, 21.9);

    glEnd();

    //MAIN BACK BROWN COLOR OF MAIN DOOR

    glColor3f(0.6, 0.39, 0.28);
    glBegin(GL_POLYGON);
    glVertex2f(106, 21.9);
    glVertex2f(106, 26);
    glVertex2f(106.5, 27.5);
    glVertex2f(107.5, 28.5);
    glVertex2f(109.5, 28.5);
    glVertex2f(110.5, 27.5);
    glVertex2f(111, 26);
    glVertex2f(111, 21.9);

    glEnd();


    //HORIZONTAL LINE IN THE MIDDLE OF THE MAIN DOOR
    glLineWidth(4.5);
    glColor3f(0.95, 0.44, 0.42);
    glBegin(GL_LINES);
    glVertex2f(106, 26);
    glVertex2f(111, 26);
    glEnd();

    //VERTICAL LINE IN THE MIDDLE OF THE MAIN DOOR

    glLineWidth(4.5);
    glColor3f(0.95, 0.44, 0.42);
    glBegin(GL_LINES);
    glVertex2f(108.5, 26);
    glVertex2f(108.5, 21.9);
    glEnd();


    //WINDOWS OF THE BUILDING 10

    //FROM LEFT SIDE

    //BACKGROUND REDISH AREA OF EACH WINDOW
    glColor3f(0.95, 0.44, 0.42);
    glBegin(GL_POLYGON);
    glVertex2f(93, 26);
    glVertex2f(93, 28.5);
    glVertex2f(97, 28.5);
    glVertex2f(97, 26);
    glEnd();

    //MAIN LIGHT BLUE COLOR OF EACH WINDOW

    glColor3f(0.73, 0.89, 0.94);
    glBegin(GL_POLYGON);
    glVertex2f(93.5, 26.5);
    glVertex2f(93.5, 28);
    glVertex2f(96.5, 28);
    glVertex2f(96.5, 26.5);
    glEnd();

    //VERTICAL REDISH LINE IN THE MIDDLE OF EACH WINDOW
    glLineWidth(4.5);
    glColor3f(0.95, 0.44, 0.42);
    glBegin(GL_LINES);
    glVertex2f(95, 28);
    glVertex2f(95, 26.5);
    glEnd();

    //NOW PRINTING THE SECOND WINDOWS OF FIRST ROW IN LEFT SIDE

    glPushMatrix();
    glTranslatef(1 * 5, 0, 0);

    //BACKGROUND REDISH AREA OF EACH WINDOW
    glColor3f(0.95, 0.44, 0.42);
    glBegin(GL_POLYGON);
    glVertex2f(93, 26);
    glVertex2f(93, 28.5);
    glVertex2f(97, 28.5);
    glVertex2f(97, 26);
    glEnd();

    //MAIN LIGHT BLUE COLOR OF EACH WINDOW

    glColor3f(0.73, 0.89, 0.94);
    glBegin(GL_POLYGON);
    glVertex2f(93.5, 26.5);
    glVertex2f(93.5, 28);
    glVertex2f(96.5, 28);
    glVertex2f(96.5, 26.5);
    glEnd();

    //VERTICAL REDISH LINE IN THE MIDDLE OF EACH WINDOW
    glLineWidth(4.5);
    glColor3f(0.95, 0.44, 0.42);
    glBegin(GL_LINES);
    glVertex2f(95, 28);
    glVertex2f(95, 26.5);
    glEnd();

    glPopMatrix();



    //SECOND ROW

    glPushMatrix();
    glTranslatef(0, 1 * -3.5, 0);

    //BACKGROUND REDISH AREA OF EACH WINDOW
    glColor3f(0.95, 0.44, 0.42);
    glBegin(GL_POLYGON);
    glVertex2f(93, 26);
    glVertex2f(93, 28.5);
    glVertex2f(97, 28.5);
    glVertex2f(97, 26);
    glEnd();

    //MAIN LIGHT BLUE COLOR OF EACH WINDOW

    glColor3f(0.73, 0.89, 0.94);
    glBegin(GL_POLYGON);
    glVertex2f(93.5, 26.5);
    glVertex2f(93.5, 28);
    glVertex2f(96.5, 28);
    glVertex2f(96.5, 26.5);
    glEnd();

    //VERTICAL REDISH LINE IN THE MIDDLE OF EACH WINDOW
    glLineWidth(4.5);
    glColor3f(0.95, 0.44, 0.42);
    glBegin(GL_LINES);
    glVertex2f(95, 28);
    glVertex2f(95, 26.5);
    glEnd();

    //NOW PRINTING THE SECOND WINDOWS OF FIRST ROW IN LEFT SIDE

    glPushMatrix();
    glTranslatef(1 * 5, 0, 0);

    //BACKGROUND REDISH AREA OF EACH WINDOW
    glColor3f(0.95, 0.44, 0.42);
    glBegin(GL_POLYGON);
    glVertex2f(93, 26);
    glVertex2f(93, 28.5);
    glVertex2f(97, 28.5);
    glVertex2f(97, 26);
    glEnd();

    //MAIN LIGHT BLUE COLOR OF EACH WINDOW

    glColor3f(0.73, 0.89, 0.94);
    glBegin(GL_POLYGON);
    glVertex2f(93.5, 26.5);
    glVertex2f(93.5, 28);
    glVertex2f(96.5, 28);
    glVertex2f(96.5, 26.5);
    glEnd();

    //VERTICAL REDISH LINE IN THE MIDDLE OF EACH WINDOW
    glLineWidth(4.5);
    glColor3f(0.95, 0.44, 0.42);
    glBegin(GL_LINES);
    glVertex2f(95, 28);
    glVertex2f(95, 26.5);
    glEnd();

    glPopMatrix();

    glPopMatrix();



    //NOW PRINTING THE SECOND ROW OF THE RIGHT SIDE
    //JUST USING THE CODES OF THE LEFT SIDE TWO ROWS WINDOWS
    //TRANSLATING IN X AXIS

    glPushMatrix();
    glTranslatef(1 * 22, 0, 0);

    //BACKGROUND REDISH AREA OF EACH WINDOW
    glColor3f(0.95, 0.44, 0.42);
    glBegin(GL_POLYGON);
    glVertex2f(93, 26);
    glVertex2f(93, 28.5);
    glVertex2f(97, 28.5);
    glVertex2f(97, 26);
    glEnd();

    //MAIN LIGHT BLUE COLOR OF EACH WINDOW

    glColor3f(0.73, 0.89, 0.94);
    glBegin(GL_POLYGON);
    glVertex2f(93.5, 26.5);
    glVertex2f(93.5, 28);
    glVertex2f(96.5, 28);
    glVertex2f(96.5, 26.5);
    glEnd();

    //VERTICAL REDISH LINE IN THE MIDDLE OF EACH WINDOW
    glLineWidth(4.5);
    glColor3f(0.95, 0.44, 0.42);
    glBegin(GL_LINES);
    glVertex2f(95, 28);
    glVertex2f(95, 26.5);
    glEnd();

    //NOW PRINTING THE SECOND WINDOWS OF FIRST ROW IN LEFT SIDE

    glPushMatrix();
    glTranslatef(1 * 5, 0, 0);

    //BACKGROUND REDISH AREA OF EACH WINDOW
    glColor3f(0.95, 0.44, 0.42);
    glBegin(GL_POLYGON);
    glVertex2f(93, 26);
    glVertex2f(93, 28.5);
    glVertex2f(97, 28.5);
    glVertex2f(97, 26);
    glEnd();

    //MAIN LIGHT BLUE COLOR OF EACH WINDOW

    glColor3f(0.73, 0.89, 0.94);
    glBegin(GL_POLYGON);
    glVertex2f(93.5, 26.5);
    glVertex2f(93.5, 28);
    glVertex2f(96.5, 28);
    glVertex2f(96.5, 26.5);
    glEnd();

    //VERTICAL REDISH LINE IN THE MIDDLE OF EACH WINDOW
    glLineWidth(4.5);
    glColor3f(0.95, 0.44, 0.42);
    glBegin(GL_LINES);
    glVertex2f(95, 28);
    glVertex2f(95, 26.5);
    glEnd();

    glPopMatrix();



    //SECOND ROW

    glPushMatrix();
    glTranslatef(0, 1 * -3.5, 0);

    //BACKGROUND REDISH AREA OF EACH WINDOW
    glColor3f(0.95, 0.44, 0.42);
    glBegin(GL_POLYGON);
    glVertex2f(93, 26);
    glVertex2f(93, 28.5);
    glVertex2f(97, 28.5);
    glVertex2f(97, 26);
    glEnd();

    //MAIN LIGHT BLUE COLOR OF EACH WINDOW

    glColor3f(0.73, 0.89, 0.94);
    glBegin(GL_POLYGON);
    glVertex2f(93.5, 26.5);
    glVertex2f(93.5, 28);
    glVertex2f(96.5, 28);
    glVertex2f(96.5, 26.5);
    glEnd();

    //VERTICAL REDISH LINE IN THE MIDDLE OF EACH WINDOW
    glLineWidth(4.5);
    glColor3f(0.95, 0.44, 0.42);
    glBegin(GL_LINES);
    glVertex2f(95, 28);
    glVertex2f(95, 26.5);
    glEnd();

    //NOW PRINTING THE SECOND WINDOWS OF FIRST ROW IN LEFT SIDE

    glPushMatrix();
    glTranslatef(1 * 5, 0, 0);

    //BACKGROUND REDISH AREA OF EACH WINDOW
    glColor3f(0.95, 0.44, 0.42);
    glBegin(GL_POLYGON);
    glVertex2f(93, 26);
    glVertex2f(93, 28.5);
    glVertex2f(97, 28.5);
    glVertex2f(97, 26);
    glEnd();

    //MAIN LIGHT BLUE COLOR OF EACH WINDOW

    glColor3f(0.73, 0.89, 0.94);
    glBegin(GL_POLYGON);
    glVertex2f(93.5, 26.5);
    glVertex2f(93.5, 28);
    glVertex2f(96.5, 28);
    glVertex2f(96.5, 26.5);
    glEnd();

    //VERTICAL REDISH LINE IN THE MIDDLE OF EACH WINDOW
    glLineWidth(4.5);
    glColor3f(0.95, 0.44, 0.42);
    glBegin(GL_LINES);
    glVertex2f(95, 28);
    glVertex2f(95, 26.5);
    glEnd();

    glPopMatrix();

    glPopMatrix();

    glPopMatrix();





}


// ID - 27

void building_11() {

    //MAIN AREA OF BUILDING 11
    glColor3f(0.57, 0.65, 0.69);
    if (countfire > 19)
        glColor3f(0.95, 0.73, 0.06);
    glBegin(GL_POLYGON);
    glVertex2f(104, 35);
    glVertex2f(104, 60);
    glVertex2f(120, 60);
    glVertex2f(120, 35);
    glEnd();


    //2ND MORE DEEPER PORTION
    glColor3f(0.5, 0.56, 0.59);
    glBegin(GL_POLYGON);
    glVertex2f(103, 60);
    glVertex2f(103, 61);
    glVertex2f(121, 61);
    glVertex2f(121, 60);
    glEnd();


    //3RD PORTION FROM BOTTOM
    glColor3f(0.57, 0.65, 0.69);
    if (countfire > 20)
        glColor3f(0.95, 0.73, 0.06);
    glBegin(GL_POLYGON);
    glVertex2f(108, 61);
    glVertex2f(108, 63.5);
    glVertex2f(116, 63.5);
    glVertex2f(116, 61);
    glEnd();


    //TOP MOST PORTION MORE DEEPER

    glColor3f(0.5, 0.56, 0.59);

    glBegin(GL_POLYGON);
    glVertex2f(107, 63.5);
    glVertex2f(107, 64.5);
    glVertex2f(117, 64.5);
    glVertex2f(117, 63.5);
    glEnd();

    //VERTICAL WHITISH LINE IN THE 3RD PORTION

    glLineWidth(3);
    glColor3f(0.69, 0.76, 0.8);

    glBegin(GL_LINES);
    glVertex2f(109.5, 63.5);
    glVertex2f(109.5, 61);
    glEnd();


    //PRINTING REST OF THE VERTCAL WHITISH LINE
    glPushMatrix();
    glTranslatef(1 * 1.8, 0, 0);

    glBegin(GL_LINES);
    glVertex2f(109.5, 63.5);
    glVertex2f(109.5, 61);
    glEnd();

    glPopMatrix();

    glPushMatrix();
    glTranslatef(2 * 1.8, 0, 0);

    glBegin(GL_LINES);
    glVertex2f(109.5, 63.5);
    glVertex2f(109.5, 61);
    glEnd();

    glPopMatrix();

    glPushMatrix();
    glTranslatef(3 * 1.8, 0, 0);

    glBegin(GL_LINES);
    glVertex2f(109.5, 63.5);
    glVertex2f(109.5, 61);
    glEnd();

    glPopMatrix();


    //NOW PRINTING THE HORIZONTAL WINDOWS OF BUILDING 11

    //BACKGROUND AREA OF HORIZONTAL WINDOWS

    glColor3f(0.5, 0.56, 0.59);
    glBegin(GL_POLYGON);
    glVertex2f(105, 56.5);
    glVertex2f(105, 59);
    glVertex2f(119, 59);
    glVertex2f(119, 56.5);
    glEnd();

    //MAIN WHITISH AREA OF EACH HORIZONTAL WINDOWS

    glColor3f(0.91, 0.93, 0.94);
    if (countfire > 9)
        glColor3f(0.95, 0.73, 0.06);
    glBegin(GL_POLYGON);
    glVertex2f(105.5, 57);
    glVertex2f(105.5, 58.5);
    glVertex2f(118.5, 58.5);
    glVertex2f(118.5, 57);
    glEnd();

    //VERTICAL LINES IN EACH HORIZONTAL WINDOWS

    glLineWidth(3);
    glColor3f(0.69, 0.76, 0.8);
    glBegin(GL_LINES);
    glVertex2f(107, 58.5);
    glVertex2f(107, 57);
    glEnd();

    //NOW PRINTING REST OF TEH VERTICAL LINES IN ECH WINDOWS

    glPushMatrix();
    glTranslatef(1 * 1.9, 0, 0);

    glBegin(GL_LINES);
    glVertex2f(107, 58.5);
    glVertex2f(107, 57);
    glEnd();
    glPopMatrix();


    glPushMatrix();
    glTranslatef(2 * 1.9, 0, 0);

    glBegin(GL_LINES);
    glVertex2f(107, 58.5);
    glVertex2f(107, 57);
    glEnd();
    glPopMatrix();


    glPushMatrix();
    glTranslatef(3 * 1.9, 0, 0);

    glBegin(GL_LINES);
    glVertex2f(107, 58.5);
    glVertex2f(107, 57);
    glEnd();
    glPopMatrix();


    glPushMatrix();
    glTranslatef(4 * 1.9, 0, 0);

    glBegin(GL_LINES);
    glVertex2f(107, 58.5);
    glVertex2f(107, 57);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(5 * 1.9, 0, 0);

    glBegin(GL_LINES);
    glVertex2f(107, 58.5);
    glVertex2f(107, 57);
    glEnd();
    glPopMatrix();


    //NOW PRINTING 2ND ROW USING THE CODE OF THE FIRST ROW

    glPushMatrix();
    glTranslatef(0, 1 * -3.8, 0);

    //BACKGROUND AREA OF HORIZONTAL WINDOWS

    glColor3f(0.5, 0.56, 0.59);
    glBegin(GL_POLYGON);
    glVertex2f(105, 56.5);
    glVertex2f(105, 59);
    glVertex2f(119, 59);
    glVertex2f(119, 56.5);
    glEnd();

    //MAIN WHITISH AREA OF EACH HORIZONTAL WINDOWS

    glColor3f(0.91, 0.93, 0.94);
    if (countfire > 5)
        glColor3f(0.95, 0.73, 0.06);
    glBegin(GL_POLYGON);
    glVertex2f(105.5, 57);
    glVertex2f(105.5, 58.5);
    glVertex2f(118.5, 58.5);
    glVertex2f(118.5, 57);
    glEnd();

    //VERTICAL LINES IN EACH HORIZONTAL WINDOWS

    glLineWidth(3);
    glColor3f(0.69, 0.76, 0.8);
    glBegin(GL_LINES);
    glVertex2f(107, 58.5);
    glVertex2f(107, 57);
    glEnd();

    //NOW PRINTING REST OF TEH VERTICAL LINES IN ECH WINDOWS

    glPushMatrix();
    glTranslatef(1 * 1.9, 0, 0);

    glBegin(GL_LINES);
    glVertex2f(107, 58.5);
    glVertex2f(107, 57);
    glEnd();
    glPopMatrix();


    glPushMatrix();
    glTranslatef(2 * 1.9, 0, 0);

    glBegin(GL_LINES);
    glVertex2f(107, 58.5);
    glVertex2f(107, 57);
    glEnd();
    glPopMatrix();


    glPushMatrix();
    glTranslatef(3 * 1.9, 0, 0);

    glBegin(GL_LINES);
    glVertex2f(107, 58.5);
    glVertex2f(107, 57);
    glEnd();
    glPopMatrix();


    glPushMatrix();
    glTranslatef(4 * 1.9, 0, 0);

    glBegin(GL_LINES);
    glVertex2f(107, 58.5);
    glVertex2f(107, 57);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(5 * 1.9, 0, 0);

    glBegin(GL_LINES);
    glVertex2f(107, 58.5);
    glVertex2f(107, 57);
    glEnd();
    glPopMatrix();

    glPopMatrix();


    //3RD ROW

    glPushMatrix();
    glTranslatef(0, 2 * -3.8, 0);

    //BACKGROUND AREA OF HORIZONTAL WINDOWS

    glColor3f(0.5, 0.56, 0.59);
    glBegin(GL_POLYGON);
    glVertex2f(105, 56.5);
    glVertex2f(105, 59);
    glVertex2f(119, 59);
    glVertex2f(119, 56.5);
    glEnd();

    //MAIN WHITISH AREA OF EACH HORIZONTAL WINDOWS

    glColor3f(0.91, 0.93, 0.94);
    if (countfire > 15)
        glColor3f(0.95, 0.73, 0.06);
    glBegin(GL_POLYGON);
    glVertex2f(105.5, 57);
    glVertex2f(105.5, 58.5);
    glVertex2f(118.5, 58.5);
    glVertex2f(118.5, 57);
    glEnd();

    //VERTICAL LINES IN EACH HORIZONTAL WINDOWS

    glLineWidth(3);
    glColor3f(0.69, 0.76, 0.8);
    glBegin(GL_LINES);
    glVertex2f(107, 58.5);
    glVertex2f(107, 57);
    glEnd();

    //NOW PRINTING REST OF TEH VERTICAL LINES IN ECH WINDOWS

    glPushMatrix();
    glTranslatef(1 * 1.9, 0, 0);

    glBegin(GL_LINES);
    glVertex2f(107, 58.5);
    glVertex2f(107, 57);
    glEnd();
    glPopMatrix();


    glPushMatrix();
    glTranslatef(2 * 1.9, 0, 0);

    glBegin(GL_LINES);
    glVertex2f(107, 58.5);
    glVertex2f(107, 57);
    glEnd();
    glPopMatrix();


    glPushMatrix();
    glTranslatef(3 * 1.9, 0, 0);

    glBegin(GL_LINES);
    glVertex2f(107, 58.5);
    glVertex2f(107, 57);
    glEnd();
    glPopMatrix();


    glPushMatrix();
    glTranslatef(4 * 1.9, 0, 0);

    glBegin(GL_LINES);
    glVertex2f(107, 58.5);
    glVertex2f(107, 57);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(5 * 1.9, 0, 0);

    glBegin(GL_LINES);
    glVertex2f(107, 58.5);
    glVertex2f(107, 57);
    glEnd();
    glPopMatrix();

    glPopMatrix();



    //4TH ROW

    glPushMatrix();
    glTranslatef(0, 3 * -3.8, 0);

    //BACKGROUND AREA OF HORIZONTAL WINDOWS

    glColor3f(0.5, 0.56, 0.59);
    glBegin(GL_POLYGON);
    glVertex2f(105, 56.5);
    glVertex2f(105, 59);
    glVertex2f(119, 59);
    glVertex2f(119, 56.5);
    glEnd();

    //MAIN WHITISH AREA OF EACH HORIZONTAL WINDOWS

    glColor3f(0.91, 0.93, 0.94);
    if (countfire > 16)
        glColor3f(0.95, 0.73, 0.06);
    glBegin(GL_POLYGON);
    glVertex2f(105.5, 57);
    glVertex2f(105.5, 58.5);
    glVertex2f(118.5, 58.5);
    glVertex2f(118.5, 57);
    glEnd();

    //VERTICAL LINES IN EACH HORIZONTAL WINDOWS

    glLineWidth(3);
    glColor3f(0.69, 0.76, 0.8);
    glBegin(GL_LINES);
    glVertex2f(107, 58.5);
    glVertex2f(107, 57);
    glEnd();

    //NOW PRINTING REST OF TEH VERTICAL LINES IN ECH WINDOWS

    glPushMatrix();
    glTranslatef(1 * 1.9, 0, 0);

    glBegin(GL_LINES);
    glVertex2f(107, 58.5);
    glVertex2f(107, 57);
    glEnd();
    glPopMatrix();


    glPushMatrix();
    glTranslatef(2 * 1.9, 0, 0);

    glBegin(GL_LINES);
    glVertex2f(107, 58.5);
    glVertex2f(107, 57);
    glEnd();
    glPopMatrix();


    glPushMatrix();
    glTranslatef(3 * 1.9, 0, 0);

    glBegin(GL_LINES);
    glVertex2f(107, 58.5);
    glVertex2f(107, 57);
    glEnd();
    glPopMatrix();


    glPushMatrix();
    glTranslatef(4 * 1.9, 0, 0);

    glBegin(GL_LINES);
    glVertex2f(107, 58.5);
    glVertex2f(107, 57);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(5 * 1.9, 0, 0);

    glBegin(GL_LINES);
    glVertex2f(107, 58.5);
    glVertex2f(107, 57);
    glEnd();
    glPopMatrix();

    glPopMatrix();


    //5TH ROW

    glPushMatrix();
    glTranslatef(0, 4 * -3.8, 0);

    //BACKGROUND AREA OF HORIZONTAL WINDOWS

    glColor3f(0.5, 0.56, 0.59);
    glBegin(GL_POLYGON);
    glVertex2f(105, 56.5);
    glVertex2f(105, 59);
    glVertex2f(119, 59);
    glVertex2f(119, 56.5);
    glEnd();

    //MAIN WHITISH AREA OF EACH HORIZONTAL WINDOWS

    glColor3f(0.91, 0.93, 0.94);
    if (countfire > 17)
        glColor3f(0.95, 0.73, 0.06);
    glBegin(GL_POLYGON);
    glVertex2f(105.5, 57);
    glVertex2f(105.5, 58.5);
    glVertex2f(118.5, 58.5);
    glVertex2f(118.5, 57);
    glEnd();

    //VERTICAL LINES IN EACH HORIZONTAL WINDOWS

    glLineWidth(3);
    glColor3f(0.69, 0.76, 0.8);
    glBegin(GL_LINES);
    glVertex2f(107, 58.5);
    glVertex2f(107, 57);
    glEnd();

    //NOW PRINTING REST OF TEH VERTICAL LINES IN ECH WINDOWS

    glPushMatrix();
    glTranslatef(1 * 1.9, 0, 0);

    glBegin(GL_LINES);
    glVertex2f(107, 58.5);
    glVertex2f(107, 57);
    glEnd();
    glPopMatrix();


    glPushMatrix();
    glTranslatef(2 * 1.9, 0, 0);

    glBegin(GL_LINES);
    glVertex2f(107, 58.5);
    glVertex2f(107, 57);
    glEnd();
    glPopMatrix();


    glPushMatrix();
    glTranslatef(3 * 1.9, 0, 0);

    glBegin(GL_LINES);
    glVertex2f(107, 58.5);
    glVertex2f(107, 57);
    glEnd();
    glPopMatrix();


    glPushMatrix();
    glTranslatef(4 * 1.9, 0, 0);

    glBegin(GL_LINES);
    glVertex2f(107, 58.5);
    glVertex2f(107, 57);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(5 * 1.9, 0, 0);

    glBegin(GL_LINES);
    glVertex2f(107, 58.5);
    glVertex2f(107, 57);
    glEnd();
    glPopMatrix();

    glPopMatrix();


    //6TH ROW
    glPushMatrix();
    glTranslatef(0, 5 * -3.8, 0);

    //BACKGROUND AREA OF HORIZONTAL WINDOWS

    glColor3f(0.5, 0.56, 0.59);
    glBegin(GL_POLYGON);
    glVertex2f(105, 56.5);
    glVertex2f(105, 59);
    glVertex2f(119, 59);
    glVertex2f(119, 56.5);
    glEnd();

    //MAIN WHITISH AREA OF EACH HORIZONTAL WINDOWS

    glColor3f(0.91, 0.93, 0.94);
    if (countfire > 18)
        glColor3f(0.95, 0.73, 0.06);
    glBegin(GL_POLYGON);
    glVertex2f(105.5, 57);
    glVertex2f(105.5, 58.5);
    glVertex2f(118.5, 58.5);
    glVertex2f(118.5, 57);
    glEnd();

    //VERTICAL LINES IN EACH HORIZONTAL WINDOWS

    glLineWidth(3);
    glColor3f(0.69, 0.76, 0.8);
    glBegin(GL_LINES);
    glVertex2f(107, 58.5);
    glVertex2f(107, 57);
    glEnd();

    //NOW PRINTING REST OF TEH VERTICAL LINES IN ECH WINDOWS

    glPushMatrix();
    glTranslatef(1 * 1.9, 0, 0);

    glBegin(GL_LINES);
    glVertex2f(107, 58.5);
    glVertex2f(107, 57);
    glEnd();
    glPopMatrix();


    glPushMatrix();
    glTranslatef(2 * 1.9, 0, 0);

    glBegin(GL_LINES);
    glVertex2f(107, 58.5);
    glVertex2f(107, 57);
    glEnd();
    glPopMatrix();


    glPushMatrix();
    glTranslatef(3 * 1.9, 0, 0);

    glBegin(GL_LINES);
    glVertex2f(107, 58.5);
    glVertex2f(107, 57);
    glEnd();
    glPopMatrix();


    glPushMatrix();
    glTranslatef(4 * 1.9, 0, 0);

    glBegin(GL_LINES);
    glVertex2f(107, 58.5);
    glVertex2f(107, 57);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(5 * 1.9, 0, 0);

    glBegin(GL_LINES);
    glVertex2f(107, 58.5);
    glVertex2f(107, 57);
    glEnd();
    glPopMatrix();

    glPopMatrix();


    //7TH ROW

    glPushMatrix();
    glTranslatef(0, 6 * -3.8, 0);

    //BACKGROUND AREA OF HORIZONTAL WINDOWS

    glColor3f(0.5, 0.56, 0.59);
    glBegin(GL_POLYGON);
    glVertex2f(105, 56.5);
    glVertex2f(105, 59);
    glVertex2f(119, 59);
    glVertex2f(119, 56.5);
    glEnd();

    //MAIN WHITISH AREA OF EACH HORIZONTAL WINDOWS

    glColor3f(0.91, 0.93, 0.94);
    if (countfire > 18)
        glColor3f(0.95, 0.73, 0.06);
    glBegin(GL_POLYGON);
    glVertex2f(105.5, 57);
    glVertex2f(105.5, 58.5);
    glVertex2f(118.5, 58.5);
    glVertex2f(118.5, 57);
    glEnd();

    //VERTICAL LINES IN EACH HORIZONTAL WINDOWS

    glLineWidth(3);
    glColor3f(0.69, 0.76, 0.8);
    glBegin(GL_LINES);
    glVertex2f(107, 58.5);
    glVertex2f(107, 57);
    glEnd();

    //NOW PRINTING REST OF TEH VERTICAL LINES IN ECH WINDOWS

    glPushMatrix();
    glTranslatef(1 * 1.9, 0, 0);

    glBegin(GL_LINES);
    glVertex2f(107, 58.5);
    glVertex2f(107, 57);
    glEnd();
    glPopMatrix();


    glPushMatrix();
    glTranslatef(2 * 1.9, 0, 0);

    glBegin(GL_LINES);
    glVertex2f(107, 58.5);
    glVertex2f(107, 57);
    glEnd();
    glPopMatrix();


    glPushMatrix();
    glTranslatef(3 * 1.9, 0, 0);

    glBegin(GL_LINES);
    glVertex2f(107, 58.5);
    glVertex2f(107, 57);
    glEnd();
    glPopMatrix();


    glPushMatrix();
    glTranslatef(4 * 1.9, 0, 0);

    glBegin(GL_LINES);
    glVertex2f(107, 58.5);
    glVertex2f(107, 57);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(5 * 1.9, 0, 0);

    glBegin(GL_LINES);
    glVertex2f(107, 58.5);
    glVertex2f(107, 57);
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



//fire

void fire() {

    glPushMatrix();
    glTranslatef(fireleftmove, fireupmove, 0);
    glScalef(zoom, zoom, 1);

    glColor3f(1, 0.09, 0);
    glBegin(GL_POLYGON);
    glVertex2f(116, 50);
    glVertex2f(116, 52);
    glVertex2f(116.4, 53);
    glVertex2f(116.95, 53.25);
    glVertex2f(117.5, 53);
    glVertex2f(118, 52);
    glVertex2f(118, 50);
    glVertex2f(117.7, 49.9);
    glVertex2f(117.4, 49.85);
    glVertex2f(117.1, 49.8);
    glVertex2f(116.6, 49.85);
    glVertex2f(116.3, 49.9);



    glEnd();


    glColor3f(0.98, 0.65, 0.02);
    glBegin(GL_POLYGON);
    glVertex2f(116.3, 49.9);
    glVertex2f(116.2841523149937, 51.2035131996468);
    glVertex2f(116.6, 52.2);
    glVertex2f(117, 52.4);
    glVertex2f(117.4, 52.2);
    glVertex2f(117.6, 51.2);
    glVertex2f(117.6001959426886, 49.8832315825388);
    glVertex2f(117.4, 49.85);
    glVertex2f(117.1, 49.8);
    glVertex2f(116.6, 49.8);
    glVertex2f(116.6, 49.85);
    glVertex2f(116.3, 49.9);


    glEnd();


    glColor3f(1, 0.95, 0.01);
    glBegin(GL_POLYGON);
    glVertex2f(116.50, 49.866);
    glVertex2f(116.5, 51.2);
    glVertex2f(116.8, 52);
    glVertex2f(117.2, 52);
    glVertex2f(117.4, 51.2);
    glVertex2f(117.4, 49.85);
    glVertex2f(117.1, 49.8);
    glVertex2f(116.6, 49.8);
    glVertex2f(116.6, 49.85);


    glEnd();


    //middle
    if (statefire == 1) {

        glColor3f(1, 0.09, 0);
        glBegin(GL_POLYGON);
        glVertex2f(116.4, 53);
        glVertex2f(117, 54.2);
        glVertex2f(117.5, 53);

        glEnd();
    }


    //left

    if (statefire == 2) {

        glColor3f(1, 0.09, 0);
        glBegin(GL_POLYGON);
        glVertex2f(116.4, 53);
        glVertex2f(116.6, 54.2);
        glVertex2f(117.5, 53);

        glEnd();
    }

    //right
    if (statefire == 3) {

        glColor3f(1, 0.09, 0);
        glBegin(GL_POLYGON);
        glVertex2f(116.4, 53);
        glVertex2f(117.4, 54.2);
        glVertex2f(117.5, 53);

        glEnd();
    }


    // glPushMatrix();

     //first edge
    if (statefireedge == 1) {
        glColor3f(1, 0.09, 0);
        glBegin(GL_POLYGON);
        glVertex2f(116, 53.2);
        glVertex2f(116.4, 52.2);
        glVertex2f(116, 52);

        glEnd();
    }

    if (statefireedge == 2)
    {
        glColor3f(1, 0.09, 0);
        glBegin(GL_POLYGON);
        glVertex2f(118.4, 52.6);
        glVertex2f(117.8, 51.8);
        glVertex2f(118, 51.2);

        glEnd();

        //glPopMatrix();

    }

    if (statefireedge == 1)
    {

        glColor3f(1, 0.09, 0);
        glBegin(GL_POLYGON);
        glVertex2f(118, 53.2);
        glVertex2f(117.6, 52.4);
        glVertex2f(118, 52);

        glEnd();
    }

    if (statefireedge == 2)
    {
        glColor3f(1, 0.09, 0);
        glBegin(GL_POLYGON);
        glVertex2f(115.6, 52.6);
        glVertex2f(116.2, 51.8);
        glVertex2f(116, 51.2);

        glEnd();
    }

    glPopMatrix();
}



//ID - 28
void helicopter() {

    //MAIN BODY OF THE HELICOPTER
    glColor3f(0.82, 0.13, 0.2);
    glBegin(GL_POLYGON);
    glVertex2f(101.4, 70.8);
    glVertex2f(100.8, 70.4);
    glVertex2f(100.4, 69.8);
    glVertex2f(100.25, 69.3);
    glVertex2f(100.35, 68.95);
    glVertex2f(100.7, 68.6);
    glVertex2f(101.2, 68.3);
    glVertex2f(102, 68);
    glVertex2f(116, 68);
    glVertex2f(116.4, 68.2);
    glVertex2f(116.8, 68.8);
    glVertex2f(117.1, 69.4);
    glVertex2f(117.2, 69.6);
    glVertex2f(117.8, 70.4);
    glVertex2f(124.8, 72.8);
    glVertex2f(125.4, 73.2);
    glVertex2f(124.55, 74.25);
    glVertex2f(124, 74);
    glVertex2f(104, 74);
    glVertex2f(103.2, 73.6);
    glVertex2f(102.6, 73.2);
    glVertex2f(102, 72.6);
    glVertex2f(101.6, 71.8);
    glVertex2f(101.4, 70.8);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(125.4, 73.2);
    glVertex2f(125.7, 76.2);
    glVertex2f(125.1, 76.2);
    glVertex2f(124.55, 74.25);

    glEnd();


    //TOP ROUNDED PORTION OF THE HELICOPTER
    glColor3f(0, 1, 0);
    glBegin(GL_POLYGON);
    glVertex2f(105, 74);
    glVertex2f(105.8, 75.2);
    glVertex2f(108, 76);
    glVertex2f(112, 76);
    glVertex2f(114.2, 75.2);
    glVertex2f(115, 74);

    glEnd();


    //FOUR FAN'S AT THE BACK OF THE HELICOPTER
    //PRINTING FROM TOP TO RIGHT

    //1ST FAN
    glColor3f(0.98, 0.93, 0.94);
    glBegin(GL_POLYGON);
    glVertex2f(125.35, 76.9);
    glVertex2f(125.4, 79);
    glVertex2f(125.88, 78.92);
    glVertex2f(125.55, 76.9);
    glEnd();

    //2ND FAN

    glBegin(GL_POLYGON);
    glVertex2f(125.85, 76.55);
    glVertex2f(127.76, 76.22);
    glVertex2f(127.7, 75.82);
    glVertex2f(125.8, 76.35);
    glEnd();


    //3RD FAN

    glBegin(GL_POLYGON);
    glVertex2f(125.5, 76.2);
    glVertex2f(125.3, 74.3);
    glVertex2f(124.84, 74.38);
    glVertex2f(125.3, 76.2);
    glEnd();


    //4TH FAN

    glBegin(GL_POLYGON);
    glVertex2f(125.1, 76.55);
    glVertex2f(123.05, 76.85);
    glVertex2f(123.1, 77.3);
    glVertex2f(125.15, 76.75);
    glEnd();


    //CIRCLES AT THE BACK OF THE HELICOPTER

    //BIG CIRCLE REDISH
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    for (int i = 0;i < 360;i++)
    {
        glColor3f(0.89, 0.1, 0.22);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = 0.61398975;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 125.42, y + 76.54);
    }

    glEnd();

    //SMALL WHITISH CIRCLE

    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    for (int i = 0;i < 360;i++)
    {
        glColor3f(0.87, 0.49, 0.54);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = 0.1677703399;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 125.42, y + 76.54);
    }

    glEnd();


    //WHITISH AREA OF BODY 

    glColor3f(0.98, 0.93, 0.94);
    glBegin(GL_POLYGON);
    glVertex2f(101.4, 70.8);
    glVertex2f(101.6, 71.8);
    glVertex2f(102, 72.6);
    glVertex2f(102.6, 73.2);
    glVertex2f(103.2, 73.6);
    glVertex2f(104, 74);
    glVertex2f(115, 74);
    glVertex2f(115.5, 73.5);
    glVertex2f(115.5, 73.5);
    glVertex2f(116, 73.4);
    glVertex2f(123.6, 73.4);
    glVertex2f(124.4, 73.2);
    glVertex2f(124.8, 72.8);
    glVertex2f(117.8, 70.4);
    glVertex2f(117.1, 69.4);
    glVertex2f(102.4, 69.4);
    glVertex2f(103, 70.8);
    glVertex2f(101.4, 70.8);
    glEnd();


    //DRAWING A WHITISH TRIANGLE TO ADJUST THE SHAPE
    //BELOW THE FIRST WINDOW
    glColor3f(0.82, 0.13, 0.2);
    glBegin(GL_POLYGON);
    glVertex2f(101.4, 70.8);
    glVertex2f(102.9411543458406, 70.8008836821254);
    glVertex2f(102.4, 69.4);
    glEnd();


    //WINDOW'S AND DOOR'S OF THE HELICOPTER

    //FIRST WINDOW
    glColor3f(0.43, 0.68, 0.79);
    glBegin(GL_POLYGON);
    glVertex2f(101.4, 70.8);
    glVertex2f(101.6, 71.8);
    glVertex2f(102, 72.6);
    glVertex2f(102.6, 73.2);
    glVertex2f(103.2, 73.6);
    glVertex2f(103.6, 73.8);
    glVertex2f(104.1, 73.8);
    glVertex2f(102.9411543458406, 70.8008836821254);
    glVertex2f(101.4, 70.8);
    glEnd();


    //BLACK OUTINE OF THE FIRST WINDOW
    glLineWidth(1);
    glColor3f(0, 0, 0);
    glBegin(GL_LINES);
    glVertex2f(101.4, 70.8);
    glVertex2f(101.6, 71.8);

    glVertex2f(101.6, 71.8);
    glVertex2f(102, 72.6);

    glVertex2f(102, 72.6);
    glVertex2f(102.6, 73.2);

    glVertex2f(102.6, 73.2);
    glVertex2f(103.2, 73.6);

    glVertex2f(103.2, 73.6);
    glVertex2f(103.6, 73.8);

    glVertex2f(103.6, 73.8);
    glVertex2f(104.1, 73.8);

    glVertex2f(104.1, 73.8);
    glVertex2f(102.9411543458406, 70.8008836821254);

    glVertex2f(102.9411543458406, 70.8008836821254);
    glVertex2f(101.4, 70.8);

    glEnd();


    //SECOND WINDOW SAME COLOR
    glColor3f(0.43, 0.68, 0.79);
    glBegin(GL_POLYGON);
    glVertex2f(104.4, 73.8);
    glVertex2f(105.2, 73.8);
    glVertex2f(105.4, 73.6);
    glVertex2f(105.6, 71.2);
    glVertex2f(105.4, 70.8);
    glVertex2f(103.4, 70.8);
    glEnd();


    //BLACK OUTLINE OF SECOND WINDOW
    glLineWidth(1);
    glColor3f(0, 0, 0);
    glBegin(GL_LINES);
    glVertex2f(104.4, 73.8);
    glVertex2f(105.2, 73.8);

    glVertex2f(105.2, 73.8);
    glVertex2f(105.4, 73.6);

    glVertex2f(105.4, 73.6);
    glVertex2f(105.6, 71.2);

    glVertex2f(105.6, 71.2);
    glVertex2f(105.4, 70.8);

    glVertex2f(105.4, 70.8);
    glVertex2f(103.4, 70.8);

    glVertex2f(103.4, 70.8);
    glVertex2f(104.4, 73.8);
    glEnd();


    //3RD WINDOW
    glColor3f(0.43, 0.68, 0.79);
    glBegin(GL_POLYGON);
    glVertex2f(106.2, 73.2);
    glVertex2f(108, 73.2);
    glVertex2f(108, 71.4);
    glVertex2f(106.2, 71.4);
    glEnd();

    //BLACK OUTLINE OF THIRD WINDOW
    glLineWidth(1);
    glColor3f(0, 0, 0);
    glBegin(GL_LINES);
    glVertex2f(106.2, 73.2);
    glVertex2f(108, 73.2);

    glVertex2f(108, 73.2);
    glVertex2f(108, 71.4);

    glVertex2f(108, 71.4);
    glVertex2f(106.2, 71.4);

    glVertex2f(106.2, 71.4);
    glVertex2f(106.2, 73.2);
    glEnd();


    //MAIN DOOR OF THE HELICOPTER

    //MAIN BLACK OUTLINE OF THE MAIN DOOR
    glLineWidth(1);
    glColor3f(0, 0, 0);
    glBegin(GL_LINES);
    glVertex2f(108.6, 73.6);
    glVertex2f(108.8, 73.8);

    glVertex2f(108.8, 73.8);
    glVertex2f(112, 73.8);

    glVertex2f(112, 73.8);
    glVertex2f(112.2, 73.6);

    glVertex2f(112.2, 73.6);
    glVertex2f(112.2, 70);

    glVertex2f(112.2, 70);
    glVertex2f(112, 69.8);

    glVertex2f(112, 69.8);
    glVertex2f(108.8, 69.8);

    glVertex2f(108.8, 69.8);
    glVertex2f(108.6, 70);


    glVertex2f(108.6, 70);
    glVertex2f(108.6, 73.6);

    glEnd();


    //FIRST WINDOW INSIDE THE MAIN DOOR

    glColor3f(0.43, 0.68, 0.79);
    glBegin(GL_POLYGON);
    glVertex2f(109, 73.2);
    glVertex2f(110, 73.2);
    glVertex2f(110, 71.6);
    glVertex2f(109, 71.6);
    glEnd();

    //BLACK OUTLINE OF THE FIRST WINDOWS INSIDE THE MAIN DOOR

    glLineWidth(1);
    glColor3f(0, 0, 0);
    glBegin(GL_LINES);
    glVertex2f(109, 73.2);
    glVertex2f(110, 73.2);

    glVertex2f(110, 73.2);
    glVertex2f(110, 71.6);

    glVertex2f(110, 71.6);
    glVertex2f(109, 71.6);

    glVertex2f(109, 71.6);
    glVertex2f(109, 73.2);
    glEnd();


    //SECOND WINDOW OF THE MAIN DOOR

    glColor3f(0.43, 0.68, 0.79);
    glBegin(GL_POLYGON);
    glVertex2f(110.8, 73.2);
    glVertex2f(111.8, 73.2);
    glVertex2f(111.8, 71.6);
    glVertex2f(110.8, 71.6);
    glEnd();


    //BLACK OUTLINE OF THE SECOND WINDOW OF THE MAIN DOOR
    glLineWidth(1);
    glColor3f(0, 0, 0);
    glBegin(GL_LINES);
    glVertex2f(110.8, 73.2);
    glVertex2f(111.8, 73.2);

    glVertex2f(111.8, 73.2);
    glVertex2f(111.8, 71.6);

    glVertex2f(111.8, 71.6);
    glVertex2f(110.8, 71.6);

    glVertex2f(110.8, 71.6);
    glVertex2f(110.8, 73.2);
    glEnd();


    //BLACK VERTICLE LINE BELOW THE FIRST WINDOW
    // OF THE MAIN DOOR
    glLineWidth(3);
    glColor3f(0, 0, 0);
    glBegin(GL_LINES);
    glVertex2f(109, 71.2);
    glVertex2f(109, 70.8);
    glEnd();



    //SECOND WINDOW 
    glColor3f(0.43, 0.68, 0.79);
    glBegin(GL_POLYGON);
    glVertex2f(112.8, 73.2);
    glVertex2f(114.6, 73.2);
    glVertex2f(114.6, 71.4);
    glVertex2f(112.8, 71.4);
    glEnd();


    //BLACK OUTLINE OF THE SECOND WINDOW
    glLineWidth(1);
    glColor3f(0, 0, 0);
    glBegin(GL_LINES);
    glVertex2f(112.8, 73.2);
    glVertex2f(114.6, 73.2);

    glVertex2f(114.6, 73.2);
    glVertex2f(114.6, 71.4);

    glVertex2f(114.6, 71.4);
    glVertex2f(112.8, 71.4);

    glVertex2f(112.8, 71.4);
    glVertex2f(112.8, 73.2);
    glEnd();


    //WHITISH STRIP LIKE ANGLED PORTION
    glColor3f(0.98, 0.93, 0.94);
    glBegin(GL_POLYGON);
    glVertex2f(102, 68);
    glVertex2f(102.4, 69.2);
    glVertex2f(103.2, 69.2);
    glVertex2f(102.8, 68);
    glEnd();

    //NOW PRINTING THE REST OF THE WHITISH STRIP LIKE ANGLED PORTION

    glPushMatrix();
    glTranslatef(1 * 1.9, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2f(102, 68);
    glVertex2f(102.4, 69.2);
    glVertex2f(103.2, 69.2);
    glVertex2f(102.8, 68);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(2 * 1.9, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2f(102, 68);
    glVertex2f(102.4, 69.2);
    glVertex2f(103.2, 69.2);
    glVertex2f(102.8, 68);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(3 * 1.9, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2f(102, 68);
    glVertex2f(102.4, 69.2);
    glVertex2f(103.2, 69.2);
    glVertex2f(102.8, 68);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(4 * 1.9, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2f(102, 68);
    glVertex2f(102.4, 69.2);
    glVertex2f(103.2, 69.2);
    glVertex2f(102.8, 68);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(5 * 1.9, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2f(102, 68);
    glVertex2f(102.4, 69.2);
    glVertex2f(103.2, 69.2);
    glVertex2f(102.8, 68);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(6 * 1.9, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2f(102, 68);
    glVertex2f(102.4, 69.2);
    glVertex2f(103.2, 69.2);
    glVertex2f(102.8, 68);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(7 * 1.9, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2f(102, 68);
    glVertex2f(102.4, 69.2);
    glVertex2f(103.2, 69.2);
    glVertex2f(102.8, 68);
    glEnd();
    glPopMatrix();







}


void wave_fire(int value) {

    statefire++;
    statefireedge++;

    if (statefire > 3) {
        statefire = 1;
    }

    if (statefireedge > 2) {
        statefireedge = 1;
    }

    glutPostRedisplay(); //Notify GLUT that the display has changed

    glutTimerFunc(300, wave_fire, 0); //Notify GLUT to call update again in 25 milliseconds
}


void zoom_fire(int value) {

    switch (statefirezoom) {
    case 1:
        if (zoom < 1.5) {
            zoom += 0.01;
            fireleftmove -= 1.17;
            fireupmove -= 0.5;
        }
        else {
            statefirezoom = 2;
        }
        break;
    case 2:
        if (zoom > 1) {
            zoom -= 0.01;
            fireleftmove += 1.17;
            fireupmove += 0.5;
        }
        else {
            statefirezoom = 1;
        }
        break;

        //cout << state1 << endl;

    }


    glutPostRedisplay(); //Notify GLUT that the display has changed

    glutTimerFunc(20, zoom_fire, 0); //Notify GLUT to call update again in 25 milliseconds
}



//This funtion is for the wing chaniing functionality of the birds...
void change_wing(int value) {
    state = !state;

    glutPostRedisplay();
    glutTimerFunc(80, change_wing, 0);

}


// This function is for the movement of the birds.. The flying animation...
void fly(int value) {

    if (_isflybird)
    {
        _move -= 0.5;
        //cout << _move << endl;

        if (_move < -150) {
            _move = 0;
        }
    }

    glutPostRedisplay();
    glutTimerFunc(20, fly, 0);

}

void PlayMusic_run(const string& path) {
    // if (_ismovetrain)
    PlaySound(path.c_str(), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);
    glutPostRedisplay();
}

void PlayMusic_brake(const string& path) {
    // if (_ismovetrain)
    PlaySound(path.c_str(), NULL, SND_FILENAME | SND_ASYNC);
    glutPostRedisplay();
}

//This function is for the movement of the train..
void _move_train(int value) {

    if (_ismovetrain) {
        _movetrain -= 0.5;

        if (_movetrain == -0.5) {

            PlayMusic_run("E:/SPRING 23-24/COMPUTER GRAPHICS/Computer-Graphics-main/OpenGL Programming/trainsound.wav");
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
        if (!_ismovetrain) {
            _ismovetrain = true;
            PlayMusic_run("E:/SPRING 23-24/COMPUTER GRAPHICS/Computer-Graphics-main/OpenGL Programming/trainsound.wav");
        }

        break;
    case 'w':
        if (_ismovetrain) {
            _ismovetrain = false;
            PlayMusic_brake("E:/SPRING 23-24/COMPUTER GRAPHICS/Computer-Graphics-main/OpenGL Programming/TRAIN_BRAKE_02.wav");
            // PlayMusic(NULL);
        }
        break;
    case 'b':
        _isflybird = !_isflybird;
        break;

    case 'f':
        showfire = !showfire;
        countfire = 0;
    }

    glutPostRedisplay();
}


void fire_animation(int value) {
    if (showfire) {
        countfire++;
    }

    glutPostRedisplay();
    glutTimerFunc(1000, fire_animation, 0);

}




/* void play_trainmusic(int value) {
    static bool soundPlaying = false;
    if (_ismovetrain && !soundPlaying) {
        cout << "play_trainmusic function called" << endl; // Debug output
        PlayMusic_run("E:/SPRING 23-24/COMPUTER GRAPHICS/Computer-Graphics-main/OpenGL Programming/trainsound.wav");
        soundPlaying = true;
    }
    else if (!_ismovetrain && soundPlaying) {
        // Stop the sound
        soundPlaying = false;
        //PlayMusic(NULL); // Stop the currently playing sound
    }
    glutTimerFunc(2000, play_trainmusic, 0);
}
 */


void display() {

    glClearColor(0.46, 0.72, 0.83, 1.0f); // Set background color to black and opaque
    glClear(GL_COLOR_BUFFER_BIT);




    glPushMatrix();
    glTranslatef(0, -3, 0);

    building_02(); // ID - 18
    building_01(); // ID - 17
    building_04(); // ID - 20
    building_06(); // ID - 22
    building_03(); // ID - 19
    building_08(); // ID - 24
    building_09(); // ID - 25
    building_11(); // ID - 27
    building_07(); // ID - 23
    building_05(); // ID - 21

    glPopMatrix();



    //first fire shape
    if (showfire) {

        if (countfire > 1)
            fire();

        //NOW PRINTING REST OF THE FIRE SHAPE
        if (countfire > 3) {
            glPushMatrix();
            glTranslatef(-5, 0, 0);
            fire();
            glPopMatrix();
        }

        if (countfire > 5) {

            glPushMatrix();
            glTranslatef(-10, 0, 0);
            fire();
            glPopMatrix();
        }



        glPushMatrix();
        glTranslatef(0, 6, 0);
        if (countfire > 7) {
            fire();

        }


        if (countfire > 9) {

            glPushMatrix();
            glTranslatef(-5, 0, 0);
            fire();
            glPopMatrix();
        }
        if (countfire > 11) {

            glPushMatrix();
            glTranslatef(-10, 0, 0);
            fire();
            glPopMatrix();
        }

        glPopMatrix();


        glPushMatrix();
        glTranslatef(0, -6, 0);
        if (countfire > 13) {
            fire();

        }


        if (countfire > 14) {

            glPushMatrix();
            glTranslatef(-5, 0, 0);
            fire();
            glPopMatrix();
        }
        if (countfire > 15) {

            glPushMatrix();
            glTranslatef(-10, 0, 0);
            fire();
            glPopMatrix();
        }

        glPopMatrix();


        glPushMatrix();
        glTranslatef(0, -12, 0);
        if (countfire > 16) {
            fire();

        }


        if (countfire > 16) {

            glPushMatrix();
            glTranslatef(-5, 0, 0);
            fire();
            glPopMatrix();
        }
        if (countfire > 16) {

            glPushMatrix();
            glTranslatef(-10, 0, 0);
            fire();
            glPopMatrix();
        }

        glPopMatrix();



        glPushMatrix();
        glTranslatef(0, -18, 0);
        if (countfire > 17) {
            fire();

        }


        if (countfire > 17) {

            glPushMatrix();
            glTranslatef(-5, 0, 0);
            fire();
            glPopMatrix();
        }
        if (countfire > 17) {

            glPushMatrix();
            glTranslatef(-10, 0, 0);
            fire();
            glPopMatrix();
        }

        glPopMatrix();



    }
    glPushMatrix();
    glTranslatef(0, -3, 0);
    building_10(); // ID - 26
    glPopMatrix();



    //TRANSLATING THE TRAIN, TRAIN PLATFORM, ROAD, POND IN -7 VALUE IN Y AXIS
    glPushMatrix();
    glTranslatef(0, -7, 0);

    //ApplyTexture(38, 0, 48.600006821, 15.25, 130, 15.25, 130, 0, textures[1].textureID);
    left_pond(); // ID - 01
    front_road(); // ID - 02
    side_green_area(); // ID - 03
    road(); // ID - 06
    ApplyTexture(130, 5.5, 130, 15.25, 103.47679385, 15.25, 90, 13.5, textures[0].textureID);
    // ApplyTexture(75, 0, 75, 10, 55, 10, 55, 0, textures[0].textureID);




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

    ciecle();// ID - 08

    glPopMatrix();

    //Five birds flying 

    bird01();
    bird02();
    bird03();
    bird04();
    bird05();



    glPushMatrix();
    glScalef(0.5, 0.5, 1);
    glTranslatef(115, 60, 0);
    helicopter();
    glPopMatrix();



    glFlush(); // Render now



}

/* Main function: GLUT runs as a console application starting at main() */

int main(int argc, char** argv) {

    glutInitWindowSize(1420, 920); // Set the window's initial width & height
    glutInit(&argc, argv); // Initialize GLUT
    glutInitWindowPosition((glutGet(GLUT_SCREEN_WIDTH) - 1420) / 2,
        (glutGet(GLUT_SCREEN_HEIGHT) - 950) / 2);

    glutCreateWindow("Futureistic city"); // Create a window with the given title
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // Set background color to black and opaque


    loadImageAndStore("E:/SPRING 23-24/COMPUTER GRAPHICS/Computer-Graphics-main/OpenGL Programming/grass.bmp");
    loadImageAndStore("E:/SPRING 23-24/COMPUTER GRAPHICS/Computer-Graphics-main/OpenGL Programming/road.bmp");


    glutDisplayFunc(display); // Register display callback handler for window re-paint


    glutTimerFunc(20, change_wing, 0);
    glutTimerFunc(80, fly, 0);
    glutTimerFunc(20, _move_train, 0);
    glutTimerFunc(150, wave_fire, 0); //Notify GLUT to call update again in 25 milliseconds
    glutTimerFunc(20, zoom_fire, 0); //Notify GLUT to call update again in 25 milliseconds
    glutTimerFunc(1000, fire_animation, 0);


    glutKeyboardUpFunc(_move_train_keypress);
    gluOrtho2D(0, +130, 0, 80);
    glutMainLoop(); // Enter the event-processing loop

    return 0;

}

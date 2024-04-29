#include <windows.h> // for MS Windows
#include<iostream>
#include <GL/glut.h> // GLUT, include glu.h and gl.h
#include <math.h>

using namespace std;



//ID - 01
void left_pond(){

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
glVertex2f(5 , 10.5);
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
void front_road(){

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

void side_green_area(){



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
void poll_first(){


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

glVertex2f(37.78 ,11.5);
glVertex2f(39 ,11.5);

glEnd();


// first poll upper lower portion  devided in 3 parts
glColor3f(0.87, 0.4, 0.29);


glBegin(GL_POLYGON);

glVertex2f(37.95, 12);
glVertex2f(37.95, 49.6);
glVertex2f(38.7,  48.8);
glVertex2f(38.7,  12);
glEnd();


glBegin(GL_POLYGON);

glVertex2f(38.7,  48.8);
glVertex2f(37.95, 49.6);
glVertex2f(48.33596,  50.2505);
glVertex2f(48.35831,  49.6844234);
glEnd();


glBegin(GL_POLYGON);
glVertex2f(48.4,  49.2);
glVertex2f(48.3,  50.8);
glVertex2f(51.75,  51.15);
glVertex2f(51.85,  49.45);
glEnd();

//  square type white object in first poll
glColor3f(1, 0, 0);
glBegin(GL_POLYGON);
glVertex2f(36.5 , 21);
glVertex2f(36.5 , 23.5);
glVertex2f(40,  23.5);
glVertex2f(40,  21);
glEnd();

// cylinder in the first poll
glColor3f(1, 0, 0);
glBegin(GL_POLYGON);
glVertex2f(39.2 , 24.5);
glVertex2f(39.2 , 33.6);
glVertex2f(42 , 33.6);
glVertex2f(42 , 24.5);

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
void poll_second(){

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

glVertex2f(44.6 ,19.4);
glVertex2f(45.6,19.4);

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
glVertex2f(56.40078,  42.5985);
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
glVertex2f(44 , 26);
glVertex2f(44 , 27.8);
glVertex2f(46.2 , 27.8);
glVertex2f(46.2 , 26);
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
void road(){

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
glVertex2f(52,  16.5);
glVertex2f(60.6,  16.5);
glVertex2f(60.1,  16);

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
void ciecle(){

    glPushMatrix();
    glTranslatef(-2, 0.5, 0);

    glPushMatrix();
glTranslatef(0,-9, 0);
glScalef(1, 1.8, 1);
glBegin(GL_POLYGON); // Draw a Red Half Circle centered at origin
for(int i = 0; i < 70; i++) // Iterate only halfway through the points
{
   // glColor3f(0.59, 0.52, 0.38);
   glColor3f(0.27, 0.5, 0.29);
    float pi = 4.5009698999936;
    float A = (i * pi) / 100; // Adjusted for half circle
    float r = 3.6088177199518;
    float x = r * cos(A);
    float y = r * sin(A);
    glVertex2f(x+21.5, y+9.5);
}

glEnd();
glPopMatrix();


glPushMatrix();
glTranslatef(0,-10, 0);
glScalef(1, 1.8, 1);
glBegin(GL_POLYGON); // Draw a Red Half Circle centered at origin
for(int i = 0; i < 100; i++) // Iterate only halfway through the points
{
    //glColor3f(0.21, 0.16, 0.18);
    glColor3f(0.19, 0.26, 0.19);
    float pi = 3.1416;
    float A = (i * pi) / 100; // Adjusted for half circle
    float r = 3.6088177199518;
    float x = r * cos(A);
    float y = r * sin(A);
    glVertex2f(x+21.5, y+9.5);
}

glEnd();
glPopMatrix();


glPopMatrix();




    glPushMatrix();
glTranslatef(0,-9, 0);
glScalef(1, 1.8, 1);
glBegin(GL_POLYGON); // Draw a Red Half Circle centered at origin
for(int i = 0; i < 70; i++) // Iterate only halfway through the points
{
    //glColor3f(0.59, 0.52, 0.38);
    glColor3f(0.27, 0.5, 0.29);
    float pi = 4.5009698999936;
    float A = (i * pi) / 100; // Adjusted for half circle
    float r = 3.6088177199518;
    float x = r * cos(A);
    float y = r * sin(A);
    glVertex2f(x+21.5, y+9.5);
}

glEnd();
glPopMatrix();


glPushMatrix();
glTranslatef(0,-10, 0);
glScalef(1, 1.8, 1);
glBegin(GL_POLYGON); // Draw a Red Half Circle centered at origin
for(int i = 0; i < 100; i++) // Iterate only halfway through the points
{
    //glColor3f(0.21, 0.16, 0.18);
    glColor3f(0.19, 0.26, 0.19);
    float pi = 3.1416;
    float A = (i * pi) / 100; // Adjusted for half circle
    float r = 3.6088177199518;
    float x = r * cos(A);
    float y = r * sin(A);
    glVertex2f(x+21.5, y+9.5);
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
void train_platform(){

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

void train_piller01(){

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
void train_piller02(){


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
void train_piller03(){


glPushMatrix();
glTranslatef(34.4+34.4, 0, 0);

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
void train_piller04(){


glPushMatrix();
glTranslatef(68.8+34.4, 0, 0);

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
void train01(){

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
glTranslatef(-2.1-2.1, 0, 0);
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
void train02(){


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
glTranslatef(-2.1-2.1, 0, 0);
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
glTranslatef(-2.1-2.1, 0, 0);
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

glTranslatef(5,  1.5, 0);
glBegin(GL_POLYGON);

glVertex2f(81.6, 37);
glVertex2f(81.6, 41.5);
glVertex2f(83.3, 41.5);
glVertex2f(83.3, 37);

glEnd();
glPopMatrix();
}

//ID - 16
void train03(){

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
glTranslatef(-2.1-2.1, 0, 0);
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
glTranslatef(-2.1-2.1, 0, 0);
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

glTranslatef(5,  1.5, 0);
glBegin(GL_POLYGON);

glVertex2f(81.6, 37);
glVertex2f(81.6, 41.5);
glVertex2f(83.3, 41.5);
glVertex2f(83.3, 37);

glEnd();
glPopMatrix();


glPopMatrix();
}

bool state = true;
float _move = 0;

void bird01(){
glPushMatrix();
glTranslatef(40, 0, 0);
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
if (state){
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
if (!state){
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

void bird02(){
glPushMatrix();
glTranslatef(40, 0, 0);
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
if (state){
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
if (!state){
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


void change_wing(int value){
state = !state;

glutPostRedisplay();
glutTimerFunc(80, change_wing, 0);

}

void fly(int value){
_move -= 0.5;
cout << _move << endl;

if (_move < -150){
    _move = 0;
}

glutPostRedisplay();
glutTimerFunc(20, fly, 0);

}


void display() {

glClearColor(1.0f, 1.0f,1.0f, 1.0f); // Set background color to black and opaque
glClear(GL_COLOR_BUFFER_BIT);

//rain();
left_pond(); // ID - 01
front_road(); // ID - 02
side_green_area(); // ID - 03
road(); // ID - 06
train_platform();; // ID - 09
train_piller01(); // ID - 10
train_piller02(); // ID - 11
train_piller03(); // ID - 12
train_piller04(); // ID - 13
train01(); // ID - 14
train02(); // ID - 15
train03(); // ID - 16
poll_first(); // ID - 04
poll_second(); // ID - 05
ciecle();// ID - 08
bird01();
glPushMatrix();
glTranslatef(5, -5,0);
bird02();
glPopMatrix();

glPushMatrix();
glTranslatef(10, 0,0);
bird01();
glPopMatrix();

glPushMatrix();
glTranslatef(15, -5,0);
bird01();
glPopMatrix();

glPushMatrix();
glTranslatef(12.5, -10,0);
bird01();
glPopMatrix();

glFlush(); // Render now



}

/* Main function: GLUT runs as a console application starting at main() */

int main(int argc, char** argv) {

glutInitWindowSize(1420, 920); // Set the window's initial width & height
glutInit(&argc, argv); // Initialize GLUT
glutInitWindowPosition((glutGet(GLUT_SCREEN_WIDTH)-1420)/2,
                       (glutGet(GLUT_SCREEN_HEIGHT)-950)/2);
glutCreateWindow("Futureistic city"); // Create a window with the given title


glutDisplayFunc(display); // Register display callback handler for window re-paint
glutTimerFunc(20, change_wing, 0);
glutTimerFunc(80, fly, 0);

gluOrtho2D(0, +130, 0, 80);
glutMainLoop(); // Enter the event-processing loop

return 0;

}

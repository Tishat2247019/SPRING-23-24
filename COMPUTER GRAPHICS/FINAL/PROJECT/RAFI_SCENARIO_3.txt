#include <windows.h>
#define GL_SILENCE_DEPRECATION
#include <GL/glut.h>
#include <math.h>
#define db double
#include <vector>
#include <string>
#include <iostream>
#include "glutil.h"
#include "THIRD_SCENARIO_TISHAT.cpp"
# define PI           3.14159265358979323846

using namespace std;


float movehelicopter_up = 0;
float movehelicopter_left = 0;

bool ismovehelicopter = false;
bool isrotatefan = false;

bool ismovetruck = false;
float movetruck = 0;


float _angle11 = 0;
float _angle22 = 0;
float _angle3 = 0;
float _angle4 = 0;

bool zoom_to_scenaario_03 = false;
float zoom_to_scenaario_03_value = 1;

float zoom_to_normal_scenario_02_value = 6.04;



void set_bg_color(int r, int g, int b)
{
    float a = float(r) / 255.0f, f = float(g) / 255.0f, c = float(b) / 255.0f;
    glClearColor(a, f, c, 1);

}




void rgb(int r, int g, int b)
{
    float a = float(r) / 255.0f;
    float f = float(g) / 255.0f;
    float c = float(b) / 255.0f;
    glColor3f(a, f, c);
}



void circle(GLfloat x, GLfloat y, GLfloat radius, int R, int G, int B)
{
    int i;

    int triangleAmount = 1000;


    GLfloat twicePi = 2.0f * PI;

    glColor3ub(R, G, B);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x, y); // center of circle


    for (i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(x + (radius * cos(i * twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount)));
    }
    glEnd();
}

void helicopter02() {
    glPushMatrix();

    glTranslatef(movehelicopter_left, movehelicopter_up, 0);
    glTranslatef(-10, -11, 0);
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
    glColor3f(0.98, 0.93, 0.94);
    glBegin(GL_POLYGON);
    glVertex2f(105, 74);
    glVertex2f(105.8, 75.2);
    glVertex2f(108, 76);
    glVertex2f(112, 76);
    glVertex2f(114.2, 75.2);
    glVertex2f(115, 74);

    glEnd();


    //RIGHT SIDE REDISH AREA OF THE TOP ROUNDED PROTION OF THE HELICOPTER
    glColor3f(0.82, 0.13, 0.2);
    glBegin(GL_POLYGON);
    glVertex2f(109, 74);
    glVertex2f(109.5, 74.8);
    glVertex2f(109.5, 75.3);
    glVertex2f(109.2, 76);
    glVertex2f(112, 76);
    glVertex2f(114.2, 75.2);
    glVertex2f(115, 74);

    glEnd();



    //FOUR FAN'S AT THE BACK OF THE HELICOPTER
    //PRINTING FROM TOP TO RIGHT

    glPushMatrix();

    glTranslatef(125.42, 76.54, 0);
    glRotatef(_angle22, 0, 0, 1);
    glTranslatef(-125.42, -76.54, 0);

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

    glPopMatrix();



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


    //NOW CODING THE BOTTOM PART OF THE HELICOPTER


    //BOTTOM ROUNDED AREA
    glColor3f(0.91, 0.76, 0.81);
    glBegin(GL_POLYGON);
    glVertex2f(104.3, 68);
    glVertex2f(104, 67.6);
    glVertex2f(104, 67.2);
    glVertex2f(104.4, 66.8);
    glVertex2f(113.8, 66.8);
    glVertex2f(114.2, 67.2);
    glVertex2f(113.8, 68);
    glEnd();

    //BOTTOM RECTANGLE PART (FROM WHERE WATER WILL BE FALLING)

    glColor3f(0.98, 0.93, 0.94);
    glBegin(GL_POLYGON);
    glVertex2f(105.6, 66.2);
    glVertex2f(105.6, 67.6);
    glVertex2f(113.2, 67.6);
    glVertex2f(113.2, 66.2);
    glEnd();


    //TWO BLACK SQUARES INSIDE THE BOTTOM RECTANGLE
    //FIRST BLACK SQUARE
    glColor3f(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2f(105.8, 66.4);
    glVertex2f(105.8, 66.6);
    glVertex2f(106, 66.6);
    glVertex2f(106, 66.4);
    glEnd();

    //SECOND BLACK SQUARE
    glColor3f(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2f(112.8, 66.4);
    glVertex2f(112.8, 66.6);
    glVertex2f(113, 66.6);
    glVertex2f(113, 66.4);
    glEnd();

    //TOW HORIZONTAL RECTANGLE ABOVE THE BOTTOM RECTANGLE


    //FIRST HORIZONTAL RECTANGLE
    glColor3f(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2f(106, 67.6);
    glVertex2f(106, 67.8);
    glVertex2f(106.6, 67.8);
    glVertex2f(106.6, 67.6);
    glEnd();


    //SECOND HORIZONTAL RECTANLGE

    glColor3f(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2f(112.2, 67.6);
    glVertex2f(112.2, 67.8);
    glVertex2f(112.8, 67.8);
    glVertex2f(112.8, 67.6);
    glEnd();

    //NOW CODING THE WHEELS OF THE HELICOPTER
    glPushMatrix();
    glTranslatef(1, 0, 0);
    //REDISH AREA OF LEFT WHEEL
    glColor3f(0.82, 0.13, 0.2);
    glBegin(GL_POLYGON);
    glVertex2f(102.4, 68);
    glVertex2f(102.4, 67.2);
    glVertex2f(102.5, 67);
    glVertex2f(102.7, 67);
    glVertex2f(102.8, 67.2);
    glVertex2f(102.8, 68);
    glEnd();

    //BLACKISH AREA BELOW THE REDISH AREA OF LEFT WINDOW
    glColor3f(0.13, 0.25, 0.36);
    glBegin(GL_POLYGON);
    glVertex2f(102.5, 66.5);
    glVertex2f(102.5, 67);
    glVertex2f(102.7, 67);
    glVertex2f(102.7, 66.5);

    glEnd();


    //BLACKISH WHEEL OF LEFT WHEEL

    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    for (int i = 0;i < 360;i++)
    {
        glColor3f(0.13, 0.25, 0.36);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = 0.5121788939664;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 102.6, y + 66.1);
    }

    glEnd();

    //WHITISH SMALL CIRLCE IN THE MIDDLE OF THE BLAKISH WHEEL

    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    for (int i = 0;i < 360;i++)
    {
        glColor3f(0.69, 0.76, 0.78);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = 0.2546297078227;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 102.6, y + 66.1);
    }

    glEnd();

    //BLACKISH ROUNDED CURVE IN THE LEFT WHEEL

    glLineWidth(0.5);
    glColor3f(0.13, 0.25, 0.36);

    glBegin(GL_POLYGON);

    glVertex2f(102.4, 67.2);
    glVertex2f(102.2, 67.1);

    glVertex2f(102.2, 67.1);
    glVertex2f(102.1, 67);

    glVertex2f(102.1, 67);
    glVertex2f(102.05, 66.9);

    glVertex2f(102.05, 66.9);
    glVertex2f(102.05, 66.75);

    glVertex2f(102.05, 66.75);
    glVertex2f(102.2, 66.6);

    glVertex2f(102.2, 66.6);
    glVertex2f(102.5, 66.5);

    glEnd();

    glPopMatrix();


    //NOW CODING THE SECOND RIGHT WHEEL OF THE HELICOPTER
    //USING THE CODES OF THE LEFT WHEEL
    //JUST TRANSLATING IN X AXIS

    glPushMatrix();
    glTranslatef(11, 0, 0);

    glPushMatrix();
    glTranslatef(1, 0, 0);
    //REDISH AREA OF LEFT WHEEL
    glColor3f(0.82, 0.13, 0.2);
    glBegin(GL_POLYGON);
    glVertex2f(102.4, 68);
    glVertex2f(102.4, 67.2);
    glVertex2f(102.5, 67);
    glVertex2f(102.7, 67);
    glVertex2f(102.8, 67.2);
    glVertex2f(102.8, 68);
    glEnd();

    //BLACKISH AREA BELOW THE REDISH AREA OF LEFT WINDOW
    glColor3f(0.13, 0.25, 0.36);
    glBegin(GL_POLYGON);
    glVertex2f(102.5, 66.5);
    glVertex2f(102.5, 67);
    glVertex2f(102.7, 67);
    glVertex2f(102.7, 66.5);

    glEnd();


    //BLACKISH WHEEL OF LEFT WHEEL

    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    for (int i = 0;i < 360;i++)
    {
        glColor3f(0.13, 0.25, 0.36);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = 0.5121788939664;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 102.6, y + 66.1);
    }

    glEnd();

    //WHITISH SMALL CIRLCE IN THE MIDDLE OF THE BLAKISH WHEEL

    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    for (int i = 0;i < 360;i++)
    {
        glColor3f(0.69, 0.76, 0.78);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = 0.2546297078227;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 102.6, y + 66.1);
    }

    glEnd();

    //BLACKISH ROUNDED CURVE IN THE LEFT WHEEL

    glLineWidth(0.5);
    glColor3f(0.13, 0.25, 0.36);

    glBegin(GL_POLYGON);

    glVertex2f(102.4, 67.2);
    glVertex2f(102.2, 67.1);

    glVertex2f(102.2, 67.1);
    glVertex2f(102.1, 67);

    glVertex2f(102.1, 67);
    glVertex2f(102.05, 66.9);

    glVertex2f(102.05, 66.9);
    glVertex2f(102.05, 66.75);

    glVertex2f(102.05, 66.75);
    glVertex2f(102.2, 66.6);

    glVertex2f(102.2, 66.6);
    glVertex2f(102.5, 66.5);

    glEnd();

    glPopMatrix();

    glPopMatrix();



    //NOW CODING THE TOP MAIN FAN  PORTION OF THE HELICOPTER
    //VERTICLE RECTANGLE TYPE AREA BLACKISH BELOW THE REDISH ROUNDED AREA

    glColor3f(0.13, 0.25, 0.36);
    glBegin(GL_POLYGON);
    glVertex2f(109.7, 76);
    glVertex2f(109.7, 76.8);
    glVertex2f(110.3, 76.8);
    glVertex2f(110.3, 76);

    glEnd();


    //HORIZONTAL RECTANGLE JUST BELOW THE REDISH ROUNDED AREA
    glBegin(GL_POLYGON);
    glVertex2f(109.4, 76.8);
    glVertex2f(109.4, 77);
    glVertex2f(110.6, 77);
    glVertex2f(110.6, 76.8);

    glEnd();


    //NOW CODING THE REDISH ROUNDED AREA
    glColor3f(0.82, 0.13, 0.2);
    glBegin(GL_POLYGON);
    glVertex2f(109.4, 77);
    glVertex2f(109.45, 77.25);
    glVertex2f(109.6, 77.4);
    glVertex2f(110.4, 77.4);
    glVertex2f(110.55, 77.25);
    glVertex2f(110.6, 77);

    glEnd();



    glPushMatrix();

    glTranslatef(110, 77, 0);
    glRotatef(2 * _angle11, 0, 1, 0);
    glTranslatef(-110, -77, 0);


    //NOW CODING THE MAIN BIG FAN OF THE HELICOPTER
    glColor3f(0.13, 0.25, 0.36);
    glBegin(GL_POLYGON);
    glVertex2f(106.8, 76.8);
    glVertex2f(106.5, 76.5);
    glVertex2f(97.5, 76.5);
    glVertex2f(98, 77);
    glVertex2f(113.2, 77);
    glVertex2f(113.2, 76.8);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(113.2, 76.8);
    glVertex2f(113.2, 77);
    glVertex2f(122, 77);
    glVertex2f(122.5, 76.5);
    glVertex2f(113.5, 76.5);
    glVertex2f(113.2, 76.8);

    glEnd();

    glPopMatrix();

    glPopMatrix();

}

void window()
{

    glPushAttrib(GL_CURRENT_BIT);
    rgb(126, 175, 196);
    glBegin(GL_POLYGON);
    glVertex2d(34, 36);
    glVertex2d(38, 36);
    glVertex2d(38, 30);
    glVertex2d(34, 30);
    glEnd();
    glPopAttrib();



    glPushAttrib(GL_CURRENT_BIT);
    rgb(255, 255, 255);
    glBegin(GL_LINES);
    glVertex2d(34, 36);
    glVertex2d(38, 36);

    glVertex2d(38, 36);
    glVertex2d(38, 30);

    glVertex2d(38, 30);
    glVertex2d(34, 30);

    glVertex2d(34, 30);
    glVertex2d(34, 36);

    glVertex2d(34, 35);
    glVertex2d(38, 35);

    glVertex2d(36, 35);
    glVertex2d(36, 30);

    glEnd();
    glPopAttrib();

}
void tr()
{
    glPushAttrib(GL_CURRENT_BIT);
    rgb(81, 41, 29);
    glBegin(GL_POLYGON);
    glVertex2d(62, 25.5);
    glVertex2d(82, 25.5);
    glVertex2d(82, 10);
    glVertex2d(62, 10);
    glEnd();
    glPopAttrib();





    glPushAttrib(GL_CURRENT_BIT);
    rgb(223, 11, 25);
    glBegin(GL_POLYGON);
    glVertex2d(66.8108250005174, 21.7154);
    glVertex2d(67.1200431246581, 22.2361);
    glVertex2d(67.4494523018849, 22.4086485276);
    glVertex2d(68.0455260511525, 22.4243346);
    glVertex2d(68.0455260511525, 21.7154);
    glEnd();




    glBegin(GL_POLYGON);
    glVertex2d(68.0455260511525, 21.7154);
    glVertex2d(68.0455260511525, 22.4243346);
    glVertex2d(68.4219936822689, 22.989036);
    glVertex2d(69.8337472989553, 23.0047222768875);
    glVertex2d(70.3143437554746, 22.4475822412939);
    glVertex2d(71.3048886070909, 22.47782788);
    glVertex2d(71.3048886070909, 21.7154);
    glEnd();
    glPopAttrib();




    glPushAttrib(GL_CURRENT_BIT);

    rgb(49, 51, 141);
    glBegin(GL_POLYGON);
    glVertex2d(71.3048886070909, 21.7154);
    glVertex2d(71.3048886070909, 22.47782788);
    glVertex2d(71.2455009156418, 23.240014);
    glVertex2d(71.5121654876825, 23.82040214);
    glVertex2d(71.982750026578, 23.8674605981);
    glVertex2d(72.3592176576944, 23.27138);
    glVertex2d(72.3105562808692, 22.4551);
    glVertex2d(72.3105562808692, 21.7154);
    glEnd();
    glPopAttrib();




    glPushAttrib(GL_CURRENT_BIT);
    rgb(223, 11, 25);
    glBegin(GL_POLYGON);
    glVertex2d(66.8108250005174, 21.7154325512439);
    glVertex2d(76.777671155249, 21.8541141265);
    glVertex2d(77.3, 13.92);
    glVertex2d(66.4, 13.9);
    glEnd();




    glBegin(GL_POLYGON);
    glVertex2d(72.3105562808692, 21.7154);
    glVertex2d(72.3105562808692, 22.4551);

    glVertex2d(73.2557326659992, 22.455);
    glVertex2d(73.2557326659992, 21.7154);
    glEnd();





    glTranslatef(5.2, 0, 0);


    //rgb(49,51,141);
    glBegin(GL_POLYGON);
    glVertex2d(68.0455260511525, 21.7154);
    glVertex2d(68.0455260511525, 22.4243346);
    glVertex2d(68.4219936822689, 22.989036);
    glVertex2d(69.8337472989553, 23.0047222768875);
    glVertex2d(70.3143437554746, 22.4475822412939);
    glVertex2d(70.3143437554746, 21.7154);
    glEnd();




    glTranslatef(-5.2, 0, 0);

    glBegin(GL_POLYGON);
    glVertex2d(75.3195488480495, 21.715432);
    glVertex2d(75.612548093034, 22.44302975);
    glVertex2d(76.1520781570066, 22.43219358);
    glVertex2d(76.4987519168411, 22.20107774142);
    glVertex2d(76.777671155249, 21.854114126);

    glEnd();
    glPopAttrib();



    glPushAttrib(GL_CURRENT_BIT);
    rgb(153, 192, 206);
    glBegin(GL_POLYGON);
    glVertex2d(67.2648252163437, 21.7159);
    glVertex2d(71.5392923506031, 21.736809);
    glVertex2d(71.5392923506031, 19.0028778142);
    glVertex2d(67.2648252163437, 18.9764851545851);
    // glVertex2d(76.777671155249,21.854114126);

    glEnd();

    glTranslatef(4.7, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2d(67.2648252163437, 21.7159);
    glVertex2d(71.5392923506031, 21.736809);
    glVertex2d(71.5392923506031, 19.0028778142);
    glVertex2d(67.2648252163437, 18.9764851545851);
    // glVertex2d(76.777671155249,21.854114126);
    glEnd();

    glPopAttrib();





    glTranslatef(-4.7, 0, 0);
    glPushAttrib(GL_CURRENT_BIT);
    rgb(57, 69, 92);
    glBegin(GL_POLYGON);
    glVertex2d(69.2138157350475, 15.773908);
    glVertex2d(74.3488427159769, 15.77088667424);
    glVertex2d(74.3488427159769, 14.4256760946169);
    glVertex2d(69.1973569542964, 14.3913712);
    // glVertex2d(76.777671155249,21.854114126);
    glEnd();
    glPopAttrib();



    glPushAttrib(GL_CURRENT_BIT);
    rgb(122, 141, 163);
    glBegin(GL_POLYGON);
    glVertex2d(66.4, 13.9);
    glVertex2d(77.3, 13.92);
    glVertex2d(77.4, 12.6);
    glVertex2d(66.4, 12.6);
    glEnd();

    glPopAttrib();



    glPushAttrib(GL_CURRENT_BIT);
    rgb(36, 48, 65);
    glBegin(GL_POLYGON);
    glVertex2d(66.75, 12.6);
    glVertex2d(68.95, 12.6);
    glVertex2d(68.95, 10);
    glVertex2d(66.75, 10);
    glEnd();

    glTranslatef(7.85, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2d(66.75, 12.6);
    glVertex2d(68.95, 12.6);
    glVertex2d(68.95, 10);
    glVertex2d(66.75, 10);
    glEnd();

    glPopAttrib();
    glTranslatef(-7.85, 0, 0);

}

void truck_01() {



    glPushAttrib(GL_CURRENT_BIT);
    rgb(234, 5, 29);
    glBegin(GL_POLYGON);
    glVertex2d(46.8334001914649, 21.054349407994);
    glVertex2d(46.8334001914649, 13.445718941779);
    glVertex2d(55.085934, 13.445718941779);
    glVertex2d(55.0099834738217, 15.426884536);
    glVertex2d(54.7313994835305, 17.154105);
    glVertex2d(53.4471743781866, 21.054349407994);

    glEnd();

    glPopAttrib();



    glPushAttrib(GL_CURRENT_BIT);
    rgb(116, 136, 154);
    glBegin(GL_POLYGON);
    glVertex2d(52.3119620481642, 11.816956000);
    glVertex2d(55.4413729219545, 11.8156637);
    glVertex2d(55.4916525410031, 10.587165161033);
    glVertex2d(55.0499198744292, 10.21905460);
    glVertex2d(52.4240645786846, 10.19451390185);
    glEnd();




    glBegin(GL_POLYGON);
    glVertex2d(49.8226315807687, 12.900635430041);
    glVertex2d(49.8595967110803, 13.3963267);
    glVertex2d(55.085934, 13.3963267);
    glVertex2d(55.085934, 11.8118);
    glVertex2d(51.6997263071673, 11.812437099);
    glVertex2d(51.1510852550365, 12.186931182);
    glVertex2d(50.4226907047354, 12.7154446395);
    glEnd();




    glBegin(GL_POLYGON);
    glVertex2d(46.797920839796, 13.445718);
    glVertex2d(49.8595967110803, 13.3963);
    glVertex2d(49.8226315807687, 12.900635);
    glVertex2d(46.797920839796, 12.93174961);
    glEnd();
    glPopAttrib();

    glPushAttrib(GL_CURRENT_BIT);
    rgb(231, 7, 27);
    glBegin(GL_POLYGON);
    glVertex2d(49.0308914928697, 13.4465513);
    glVertex2d(55.08593, 13.4465513);
    glVertex2d(55.08593, 11.81180);
    glVertex2d(52.3119620481642, 11.8169560);

    glVertex2d(51.4357536299582, 12.546057179);
    glVertex2d(50.6641956186881, 13.0777);
    glVertex2d(49.8595967110803, 13.396326786);
    glEnd();
    glPopAttrib();
    // glFlush();



    rgb(231, 7, 27);
    glBegin(GL_POLYGON);
    glVertex2d(46.1486194709086, 21.0137694664219);
    glVertex2d(46.3330496630647, 11.6346109270006);
    glVertex2d(39.7004011988998, 12.0639085622216);
    glVertex2d(39.7241291699892, 20.9738559342526);
    glEnd();
    glPopAttrib();
    //glFlush();


    rgb(231, 7, 27);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2d(35.1995831016598, 12.9065835614216);
    glVertex2d(36.5820221240591, 12.314109694679);
    glVertex2d(37.2622698969857, 11.6777488748445);
    glVertex2d(37.7450263809981, 10.9316706722798);
    glVertex2d(39.1274654033973, 10.9536141488258);
    glVertex2d(39.0308418004589, 19.4217466116249);
    glVertex2d(34.9237316391494, 19.4637719312422);
    glEnd();
    glPopAttrib();
    //glFlush();
    rgb(231, 7, 27);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2d(26.1369272881538, 12.7968661786915);
    glVertex2d(23.9243715669953, 10.8271828635351);
    glVertex2d(23.9243715669953, 10.8271828635351);
    glVertex2d(21.6519620721821, 10.8271828635351);
    glVertex2d(21.5599045241551, 19.3127669469387);
    glVertex2d(24.91396254477, 19.3971340402988);
    glEnd();
    glPopAttrib();
    // glFlush();


    rgb(231, 7, 27);
    glBegin(GL_POLYGON);
    glVertex2d(24.91396254477, 19.3971340402988);
    glVertex2d(34.9237316391494, 19.4637719312422);
    glVertex2d(35.1995831016598, 12.9065835614216);
    glVertex2d(26.1369272881538, 12.7968661786915);
    glEnd();
    glPopAttrib();
    //glFlush();



    rgb(0, 0, 255);
    glBegin(GL_POLYGON);
    glVertex2d(50, 22);
    glVertex2d(50.4640345840519, 22.3976601678795);
    glVertex2d(51, 22);
    glVertex2d(50.9957903260548, 21.0655541357049);
    glVertex2d(49.9804941280069, 21.0655541357049);
    glEnd();
    glPopAttrib();
    //glFlush();


    rgb(153, 192, 206);//w
    glBegin(GL_POLYGON);
    glVertex2d(49.3430233874105, 20.5853446167077);
    glVertex2d(52.787076576038, 20.5848165700939);
    glVertex2d(53.8691941777123, 17.2152466998462);
    glVertex2d(49.34302338741048, 17.23832900768441);
    glEnd();
    glPopAttrib();
    //glFlush();


    rgb(255, 0, 0);//w
    glBegin(GL_POLYGON);
    glVertex2d(31.3155877530144, 18.2827353151963);
    glVertex2d(38.0995378670706, 18.3202411359404);
    glVertex2d(38.1692924715519, 13.4374188222543);
    glVertex2d(31.3565927672181, 13.4839218919084);
    glEnd();
    glPopAttrib();
    //glFlush();



    rgb(255, 0, 0);//w
    glBegin(GL_POLYGON);
    glVertex2d(22.939537159816, 18.2737380662862);
    glVertex2d(29.7289853293227, 18.2737380662862);
    glVertex2d(29.6824822596685, 13.4839218919084);
    glVertex2d(22.916285624989, 13.4606703570813);
    glEnd();
    glPopAttrib();
    //glFlush();



    rgb(153, 192, 206);//w
    glBegin(GL_POLYGON);
    glVertex2d(41.5247923371261, 20.5802200965367);
    glVertex2d(44.5769436179326, 20.5272926176788);
    glVertex2d(44.5240161390747, 17.2105039425828);
    glVertex2d(41.5005409699637, 17.2522626038589);
    glEnd();
    glPopAttrib();
    //glFlush();




    rgb(255, 255, 255);//w up
    glBegin(GL_POLYGON);
    glVertex2d(23.2418071125681, 15.5068054218641);
    glVertex2d(29.4499669113978, 15.5300569566912);
    glVertex2d(29.4503922466027, 14.3109660603668);
    glVertex2d(23.2418071125681, 14.274474076029);
    glEnd();
    glPopAttrib();
    //glFlush();




    rgb(255, 255, 255);//w up
    glBegin(GL_POLYGON);
    glVertex2d(31.7105703308427, 15.5765600263453);
    glVertex2d(37.8437709839728, 15.5765600263453);
    glVertex2d(37.8437709839728, 14.3209771456832);
    glVertex2d(31.7105703308427, 14.3209771456832);
    glEnd();
    glPopAttrib();
    //glFlush();




    rgb(255, 255, 255);//w up
    glBegin(GL_POLYGON);
    glVertex2d(41.1719424780733, 15.4815396332242);
    glVertex2d(44.8543900512785, 15.4999565595871);
    glVertex2d(44.8543900512785, 14.3064471176098);
    glVertex2d(41.1542999851206, 14.2994926053974);
    glEnd();
    glPopAttrib();
    //glFlush();



    rgb(255, 255, 255);//w up
    glBegin(GL_POLYGON);
    glVertex2d(49.2911316725419, 15.4740107021528);
    glVertex2d(53.9094942958453, 15.4740107021528);
    glVertex2d(53.8996323374047, 14.369005273119);
    glVertex2d(49.3110658928046, 14.3870704953419);
    glEnd();
    glPopAttrib();
    // glFlush();



    rgb(153, 192, 206);//w up 1st
    glBegin(GL_POLYGON);
    glVertex2d(47.4230299372731, 20.5334529018391);
    glVertex2d(48.5646476643818, 20.5075070444048);
    glVertex2d(48.5127559495132, 17.2383290076844);
    glVertex2d(47.3699233690105, 17.2582882283807);
    glEnd();
    glPopAttrib();
    //glFlush();




    rgb(116, 136, 154);//light
    glBegin(GL_POLYGON);
    glVertex2d(54.6081872078554, 13.3602646789695);
    glVertex2d(55.3555741263943, 13.3602882363358);
    glVertex2d(55.3797495221613, 12.2240446352898);
    glVertex2d(54.6081872078554, 12.2313923088363);
    glEnd();
    glPopAttrib();
    //glFlush();


    glLineWidth(3.0);
    rgb(231, 7, 27);//back light
    glBegin(GL_LINE_STRIP);
    glVertex2d(21.5599045241551, 17.0138108519123);
    glVertex2d(20.8267397415953, 17.022010625676);
    glVertex2d(20.8267397415953, 12.2181681288848);
    glVertex2d(21.5732837151714, 12.1423715673884);
    glEnd();
    glPopAttrib();
    //glFlush();



    glLineWidth(3.0);
    rgb(231, 7, 27);//back light
    glBegin(GL_LINE_STRIP);
    glVertex2f(21.7942920682033, 15.6020109406877);
    glVertex2f(20.7942920682033, 15.6020109406877);
    glEnd();
    glPopAttrib();
    //glFlush();



    glLineWidth(3.0);
    rgb(231, 7, 27);//back light
    glBegin(GL_LINE_STRIP);
    glVertex2f(21.7974606771144, 13.9378239754953);
    glVertex2f(20.7942920682033, 13.9378239754953);
    glEnd();
    glPopAttrib();
    //glFlush();




    glLineWidth(5.0);
    rgb(36, 48, 65);//door lock1
    glBegin(GL_LINE_STRIP);
    glVertex2f(49.6284278191877, 16.6156284292615);
    glVertex2f(50.5624786868221, 16.6156284292615);
    glEnd();
    glPopAttrib();
    //glFlush();

    rgb(36, 48, 65);//door lock2
    glBegin(GL_LINE_STRIP);
    glVertex2f(42.4154794524554, 16.5896825718272);
    glVertex2f(41.4554827273867, 16.5896825718272);
    glEnd();
    glPopAttrib();
    //glFlush();



    rgb(36, 48, 65);//door lock3
    glBegin(GL_LINE_STRIP);
    glVertex2f(34.3154929546001, 13.905169536597);
    glVertex2f(35.3045888031958, 13.905169536597);
    glEnd();
    glPopAttrib();
    //glFlush();




    rgb(36, 48, 65);//door lock4
    glBegin(GL_LINE_STRIP);
    glVertex2f(26.8627707465772, 13.905169536597);
    glVertex2f(25.7356615237589, 13.905169536597);
    glEnd();
    glPopAttrib();
    //glFlush();



    rgb(36, 48, 65);//down box
    glBegin(GL_POLYGON);
    glVertex2d(40.0100902904908, 11.1264964327739);
    glVertex2d(42.2337369380796, 11.1264964327739);
    glVertex2d(42.2337369380796, 10.2575143869939);
    glVertex2d(40.0100902904908, 10.2575143869939);
    glEnd();
    glPopAttrib();
    //glFlush();



    rgb(36, 48, 65);//down box
    glBegin(GL_POLYGON);
    glVertex2d(42.9407748370432, 11.1264964327739);
    glVertex2d(45.2750991560996, 11.1264964327739);
    glVertex2d(45.2921380197423, 10.2575143869939);
    glVertex2d(42.9407748370432, 10.2575143869939);
    glEnd();
    glPopAttrib();
    //glFlush();



    rgb(231, 7, 27);//up up
    glBegin(GL_POLYGON);
    glVertex2d(19.3769617619995, 20.9546969925578);
    glVertex2d(45.6500290286987, 23.3486930186285);
    glVertex2d(45.8048074835745, 21.7815611630111);
    glVertex2d(19.4878874464761, 19.3462745676484);
    glEnd();
    glPopAttrib();
    //glFlush();



    rgb(116, 136, 154);//up up
    glBegin(GL_POLYGON);
    glVertex2d(19.46948860948, 21.8136884087071);
    glVertex2d(45.3615870698793, 24.1753132538273);
    glVertex2d(45.4243327942939, 23.6984457482764);
    glVertex2d(19.3769617619995, 20.9546969925578);
    glEnd();
    glPopAttrib();
    //glFlush();



    glLineWidth(3.0);
    rgb(255, 0, 0);//up
    glBegin(GL_LINE_STRIP);
    glVertex2f(21.5302029271408, 18.1647425252181);
    glVertex2f(21.0368070900852, 18.2135985625796);
    glVertex2f(21.0570658917769, 19.7631784555012);
    glVertex2f(37.3276790031822, 20.0920763559326);
    glVertex2f(37.7321905160404, 19.4499781612862);
    glEnd();
    glPopAttrib();
    //glFlush();




    glLineWidth(3.0);
    rgb(255, 0, 0);//up
    glBegin(GL_LINE_STRIP);
    glVertex2f(23.0621180365267, 19.9729595867611);
    glVertex2f(23.0494065655737, 19.3537722733407);
    glVertex2f(24.91396254477, 19.3971340402988);
    glVertex2f(24.903309806019, 20.0343326457442);
    glVertex2f(34.9510492228316, 20.0920763559326);
    glVertex2f(34.9237316391494, 19.4637719312422);

    glEnd();
    glPopAttrib();
    //glFlush();




    rgb(116, 136, 154);//light
    glBegin(GL_POLYGON);
    glVertex2d(39.7004011988998, 12.0639085622216);
    glVertex2d(46.2983756850536, 12.0822382068951);
    glVertex2d(46.2983756850536, 11.6358982503123);
    glVertex2d(39.7004011988998, 11.6560758087616);
    glEnd();
    glPopAttrib();
    //glFlush();




    glLineWidth(3.0);
    rgb(116, 136, 154);//up
    glBegin(GL_LINE_STRIP);
    glVertex2f(21.8672523298731, 22.0572579909476);
    glVertex2f(21.8672523298731, 19.3127669469387);
    glEnd();
    glPopAttrib();
    //glFlush();




    glLineWidth(3.0);
    rgb(116, 136, 154);//up
    glBegin(GL_LINE_STRIP);
    glVertex2f(40.8438949120281, 23.9494286459348);
    glVertex2f(40.8438949120281, 21.3365731052432);
    glEnd();
    glPopAttrib();

    glPushAttrib(GL_CURRENT_BIT);
    // rgb();


    glPushMatrix();

    glTranslatef(48.8348877616194, 9.526494836701, 0);
    glRotatef(-_angle3, 0, 0, 1);
    glTranslatef(-48.8348877616194, -9.526494836701, 0);


    circle(48.8348877616194, 9.526494836701, 3.5, 37, 46, 63);
    circle(48.8348877616194, 9.526494836701, 1.5, 116, 139, 163);
    circle(48.8348877616194, 9.526494836701, 1.5, 116, 139, 163);

    circle(50.8348877616194, 7.8, 0.5, 255, 0, 0);

    glPopMatrix();



    glPushMatrix();

    glTranslatef(1, 0, 0);

    glTranslatef(34.2958815689635, 9.4870439301, 0);
    glRotatef(-_angle3, 0, 0, 1);
    glTranslatef(-34.2958815689635, -9.487043930, 0);

    circle(34.2958815689635, 9.487043930, 3.5, 37, 46, 63);
    circle(34.2958815689635, 9.487043930, 1.5, 116, 139, 163);
    circle(35.83, 7.8, 0.5, 255, 0, 0);

    glPopMatrix();



    glTranslatef(27.4786530845238, 9.4287770205, 0);
    glRotatef(-_angle3, 0, 0, 1);
    glTranslatef(-27.4786530845238, -9.4287770205, 0);

    circle(27.4786530845238, 9.4287770205, 3.5, 37, 46, 63);
    circle(27.4786530845238, 9.4287770205, 1.5, 116, 139, 163);
    circle(28.83, 7.8, 0.5, 255, 0, 0);

    glPopMatrix();


    glPopAttrib();

}

void road02() {
    /// road

    rgb(77, 77, 77);
    glBegin(GL_POLYGON);
    glVertex2d(0, 10);
    glVertex2d(130, 10);

    glVertex2d(130, 0);
    glVertex2d(0, 0);

    glEnd();

    //white
    rgb(255, 255, 255);
    glBegin(GL_POLYGON);
    glVertex2f(10, 4.5);
    glVertex2f(10, 5.5);
    glVertex2f(20, 5.5);
    glVertex2f(20, 4.5);

    glEnd();

    glPushMatrix();
    glTranslatef(20, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2f(10, 4.5);
    glVertex2f(10, 5.5);
    glVertex2f(20, 5.5);
    glVertex2f(20, 4.5);

    glEnd();
    glPopMatrix();


    glPushMatrix();
    glTranslatef(20 + 20, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2f(10, 4.5);
    glVertex2f(10, 5.5);
    glVertex2f(20, 5.5);
    glVertex2f(20, 4.5);

    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(20 + 20 + 20, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2f(10, 4.5);
    glVertex2f(10, 5.5);
    glVertex2f(20, 5.5);
    glVertex2f(20, 4.5);

    glEnd();
    glPopMatrix();


    glPushMatrix();
    glTranslatef(20 + 20 + 20 + 20, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2f(10, 4.5);
    glVertex2f(10, 5.5);
    glVertex2f(20, 5.5);
    glVertex2f(20, 4.5);

    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(20 + 20 + 20 + 20 + 20, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2f(10, 4.5);
    glVertex2f(10, 5.5);
    glVertex2f(20, 5.5);
    glVertex2f(20, 4.5);

    glEnd();
    glPopMatrix();

}


void sky02() {

    glColor3f(0.28, 0.62, 0.97);
    glBegin(GL_POLYGON);

    glVertex2f(0, 30);
    glVertex2f(0, 80);
    glVertex2f(130, 80);
    glVertex2f(130, 30);
    glEnd();

    circle(50, 70, 6, 249, 191, 16);
}


void green_area() {
    rgb(33, 175, 49);
    glBegin(GL_POLYGON);

    glVertex2f(0, 0);
    glVertex2f(0, 30);
    glVertex2f(130, 30);
    glVertex2f(130, 00);
    glEnd();

}


void building_firestation() {




    // glPushAttrib(GL_CURRENT_BIT);
    rgb(81, 41, 29);
    glBegin(GL_POLYGON);
    glVertex2d(30, 42);
    glVertex2d(28, 40);
    glVertex2d(50, 40);
    glVertex2d(50.0032576167938, 41.97);
    glEnd();



    glBegin(GL_POLYGON);
    glVertex2d(50, 40);
    glVertex2d(60, 50);
    glVertex2d(60, 52);
    glVertex2d(50.0032576167938, 41.97);
    glEnd();


    glBegin(GL_POLYGON);
    glVertex2d(60, 50);
    glVertex2d(70, 40);
    glVertex2d(70, 42);
    glVertex2d(60, 52);
    glEnd();


    glBegin(GL_POLYGON);
    glVertex2d(70, 40);
    glVertex2d(92, 40);
    glVertex2d(90, 42);
    glVertex2d(70, 42);
    glEnd();

    //glPopAttrib();

    ////////////

    //glPushAttrib(GL_CURRENT_BIT);
    rgb(164, 114, 105);
    glBegin(GL_POLYGON);
    glVertex2d(90, 42);
    glVertex2d(90, 50);
    glVertex2d(110, 50);
    glVertex2d(110, 42);

    glEnd();

    glBegin(GL_POLYGON);
    glVertex2d(92, 40);
    glVertex2d(90, 42);
    glVertex2d(110, 42);
    glVertex2d(110, 40);
    glEnd();
    //glPopAttrib();

   // glPushAttrib(GL_CURRENT_BIT);
    rgb(125, 177, 198);
    glBegin(GL_POLYGON);
    glVertex2d(92, 46);
    glVertex2d(98, 46);
    glVertex2d(98, 43);
    glVertex2d(92, 43);
    glEnd();


    glTranslatef(10, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2d(92, 46);
    glVertex2d(98, 46);
    glVertex2d(98, 43);
    glVertex2d(92, 43);
    glEnd();
    // glLoadIdentity();
    glTranslatef(-10, 0, 0);
    //glPopAttrib();



    //
   // glPushAttrib(GL_CURRENT_BIT);
    rgb(81, 41, 29);
    glBegin(GL_POLYGON);
    glVertex2d(90, 50);
    glVertex2d(85, 50);
    glVertex2d(90, 55);
    glVertex2d(110, 55);
    glVertex2d(115, 50);

    glEnd();

    //glPopAttrib();



    //glPushAttrib(GL_CURRENT_BIT);
    rgb(164, 114, 105);
    glBegin(GL_POLYGON);
    glVertex2d(30, 40);
    glVertex2d(110, 40);
    glVertex2d(110, 10);
    glVertex2d(30, 10);
    glEnd();



    glBegin(GL_POLYGON);
    glVertex2d(50, 40);
    glVertex2d(60, 50);
    glVertex2d(70, 40);

    glEnd();
    //glPopAttrib();

    //
    // window
    //

    window();
    glPushMatrix();
    for (int i = 0; i < 7; i++)
    {
        glTranslatef(10, 0, 0);
        window();
    }
    //glLoadIdentity();
    glPopMatrix();

    /*  for (int i = 0; i < 7; i++)
     {
         glTranslatef(-10, 0, 0);
         //window();
     } */

     //glPushAttrib(GL_CURRENT_BIT);
    rgb(76, 43, 34);
    glBegin(GL_POLYGON);
    glVertex2d(37.5, 25.5);
    glVertex2d(58, 25.5);
    glVertex2d(58, 10);
    glVertex2d(37.5, 10);

    glEnd();
    tr();
    glPushMatrix();
    glTranslatef(24.5, 0, 0);
    tr();
    glPopMatrix();
    //glTranslatef(-24.5, 0, 0);

    //glPopAttrib();


    circle(60, 42, 2.3, 100, 68, 59);
    circle(60, 42, 2, 246, 246, 237);

    glPushMatrix();

    glTranslatef(60, 42, 0);
    glRotatef(_angle4, 0, 0, 1);
    glTranslatef(-60, -42, 0);

    //glPushAttrib(GL_CURRENT_BIT);
    rgb(83, 40, 33);
    glLineWidth(2.0f);
    glBegin(GL_LINES);


    glVertex2d(60, 42);
    glVertex2d(60, 43.8);



    glVertex2d(60, 42);
    glVertex2d(59, 41);

    glEnd();

    glPopMatrix();
}



void tree01() {

    //FIRST BLUE TRIANGLE (FROM BOTTOM);
    glColor3f(0, 0.4, 0);
    glBegin(GL_POLYGON);
    glVertex2f(124, 35);
    glVertex2f(119.5, 26);
    glVertex2f(129, 26);
    glEnd();

    //2ND

    glBegin(GL_POLYGON);
    glVertex2f(124, 37);
    glVertex2f(120.4, 29.5);
    glVertex2f(128, 29.5);
    glEnd();

    //3RD
    glBegin(GL_POLYGON);
    glVertex2f(124, 38.6);
    glVertex2f(121.2, 32.8);
    glVertex2f(127, 32.8);
    glEnd();

    //4TH
    glBegin(GL_POLYGON);
    glVertex2f(124, 40);
    glVertex2f(122.2, 36);
    glVertex2f(125.9, 36);
    glEnd();







    //DALL'S OF TREE 03

    //01 (STARTING FROM LEFT  THEN RIGHT)
    glColor3f(0.29, 0.14, 0.02);
    // glColor3f(0.43, 0.29, 0.28);
    glBegin(GL_POLYGON);
    glVertex2f(121.6, 29.2);
    glVertex2f(123.8, 26.4);
    glVertex2f(123.8, 27.2);
    glEnd();

    //02
    glBegin(GL_POLYGON);
    glVertex2f(125.8, 31.7);
    glVertex2f(124, 29.5);
    glVertex2f(124, 28.4);
    glEnd();

    //03

    glBegin(GL_POLYGON);
    glVertex2f(122.6, 33.6);
    glVertex2f(124, 31.5);
    glVertex2f(124, 32);
    glEnd();

    //04
    glBegin(GL_POLYGON);
    glVertex2f(125.1, 35.5);
    glVertex2f(124, 34);
    glVertex2f(124, 33.4);
    glEnd();

    //05

    glBegin(GL_POLYGON);
    glVertex2f(123, 37.1);
    glVertex2f(124, 35.3);
    glVertex2f(124, 35.6);
    glEnd();

    //06

    glBegin(GL_POLYGON);
    glVertex2f(124.5, 38.4);
    glVertex2f(124, 37.5);
    glVertex2f(124, 37.2);
    glEnd();


    //MAIN VERTICLE KANDO OF TREE 03
    glColor3f(0.29, 0.14, 0.02);
    // glColor3f(0.43, 0.29, 0.28);

    glBegin(GL_POLYGON);
    glVertex2f(124, 40);
    glVertex2f(123.5, 21.9);
    glVertex2f(124.5, 21.9);
    glEnd();
}


void handleKeypress_rafi(unsigned char key, int x, int y) {
    switch (key) {
    case 'h':
        ismovehelicopter = true;
        isrotatefan = true;
        break;
    case 't':
        ismovetruck = !ismovetruck;
        movetruck = 0;
        break;
    case 'z':
        zoom_to_scenaario_03 = true;
        break;
    case 'q':
        zoom_to_scenaario_03 = false;
        zoom_to_scenaario_03_value = 1;
        break;
        /* case '5':
            glutDisplayFunc(tishat);
            initTishat(); */

        glutPostRedisplay();
    }
}

void rotate_fan(int value) {

    if (isrotatefan) {
        _angle11 += 15.0f;
        _angle22 += 30.0f;
    }

    if (ismovetruck == true) {
        _angle3 += 15.0f;
    }

    if (_angle11 > 360.0)
    {
        _angle11 -= 360;
    }

    if (_angle22 > 360.0)
    {
        _angle22 -= 360;
    }

    if (_angle3 > 360.0)
    {
        _angle3 -= 360;
    }

    _angle4 -= 1.5;

    if (_angle4 < -360) {
        _angle4 += 360;
    }
    glutPostRedisplay(); //Notify GLUT that the display has changed

    glutTimerFunc(20, rotate_fan, 0); //Notify GLUT to call update again in 25 milliseconds
}


void tree_back() {
    for (int i = 10; i <= 120; i += 10)
    {
        glPushMatrix();
        glTranslatef(-i, 0, 0);

        glPushMatrix();
        glTranslatef(1.5, 8, 0);
        tree01();
        glPopMatrix();

        glPopMatrix();
    }

}


void move_function(int value) {

    if (ismovehelicopter == true && movehelicopter_up < 10) {
        movehelicopter_up += 0.15;
    }
    if (movehelicopter_up >= 10) {
        movehelicopter_left -= 0.4;
    }

    if (movehelicopter_left < -120) {
        movehelicopter_left = 0;
        movehelicopter_up = 0;
        ismovehelicopter = false;
        isrotatefan = false;
        _angle11 = 0;
    }

    if (ismovetruck && movetruck < 75) {
        movetruck += 0.5;
    }
    else {
        ismovetruck = false;
    }



    glutPostRedisplay();
    glutTimerFunc(20, move_function, 0);

}

void zoom_to_scenario_03_function(int value) {
    if (zoom_to_scenaario_03 && zoom_to_scenaario_03_value < 3.05) {
        zoom_to_scenaario_03_value += 0.02;
    }

    glutPostRedisplay();
    glutTimerFunc(20, zoom_to_scenario_03_function, 0);
}


void zoom_to_normal_function_02(int value) {
    if (zoom_to_normal_scenario_02_value >= 1)
    {
        zoom_to_normal_scenario_02_value -= 0.07;
    }
    //cout << zoom_to_normal_scenario_02_value << endl;
    //cout << zoom_firestation_value << endl;
    glutPostRedisplay();
    glutTimerFunc(20, zoom_to_normal_function_02, 0);
}

void rafi()
{
    //set_bg_color(255,255,255);    // Background color
    set_bg_color(246, 246, 246);
    glClear(GL_COLOR_BUFFER_BIT);

    glPushMatrix();
    glTranslatef(60, 45, 0);
    glScalef(zoom_to_normal_scenario_02_value, zoom_to_normal_scenario_02_value, 1);
    glTranslatef(-60, -45, 0);



    glPushMatrix();
    glTranslatef(0, 75, 0);
    glScalef(zoom_to_scenaario_03_value, zoom_to_scenaario_03_value, 1);
    glTranslatef(0, -75, 0);

    sky02();
    green_area();

    helicopter02();

    glPushMatrix();
    glTranslatef(1.5, 8, 0);
    tree01();
    glPopMatrix();

    tree_back();

    //glPushMatrix();
    //glScalef(1.5, 1.5, 1);

    building_firestation();
    staticText("FIRE STATION", 91, 51.5, 0.02, 1, 1, 1, 1);


    // glPopMatrix();

    road02();

    glPushMatrix();

    glTranslatef(-70, 0, 0);
    glTranslatef(movetruck, 0, 0);
    truck_01();


    if (zoom_to_scenaario_03_value >= 3) {
        glutDisplayFunc(tishat);
        initTishat();
    }

    glPopMatrix();



    glPopMatrix();


    glPopMatrix();

    glFlush();
    glutSwapBuffers();

}

void initRafi() {
    glutTimerFunc(20, move_function, 0);
    glutTimerFunc(20, rotate_fan, 0); //Notify GLUT to call update again in 25 milliseconds

    glutTimerFunc(20, zoom_to_scenario_03_function, 0);
    glutTimerFunc(20, zoom_to_normal_function_02, 0);


    glutKeyboardFunc(handleKeypress_rafi);
}



/* int main(int argc, char** argv)
{
    glutInitWindowSize(1420, 920); // Set the window's initial width & height
    glutInit(&argc, argv); // Initialize GLUT
    glutInitWindowPosition((glutGet(GLUT_SCREEN_WIDTH) - 1420) / 2,
        (glutGet(GLUT_SCREEN_HEIGHT) - 950) / 2);

    glutCreateWindow("Fire Station"); // Create a window with the given title
    //  init();
    //glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // Set background color to black and opaque
    glutDisplayFunc(display); // Register display callback handler for window re-pain


    glutTimerFunc(20, move_function, 0);
    glutTimerFunc(20, rotate_fan1, 0); //Notify GLUT to call update again in 25 milliseconds
    glutTimerFunc(20, zoom_to_scenario_03_function, 0);


    glutKeyboardFunc(handleKeypress_rafi);

    gluOrtho2D(0, +130, 0, 80);
    glutMainLoop(); // Enter the event-processing loop



    return 0;
}
 */

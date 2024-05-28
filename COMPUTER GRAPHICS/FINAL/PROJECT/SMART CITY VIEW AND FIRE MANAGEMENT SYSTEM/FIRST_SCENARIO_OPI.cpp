#include <windows.h>
#include <GL/glut.h>
#include<math.h>
#include<iostream>
#include "THIRD_SCENARIO_TISHAT.cpp"
using namespace std;

bool isday = true;
bool ismovetrain = false;
float move_train = 0;
float move_car1 = 0;
float move_cloud2 = 0;
float move_cloud3 = 0;
float move_cloud4 = 0;
float move_sun = 0;
bool move_down_sun = false;
bool move_up_moon = false;
float move_moon = 0;
float zoom_firestation_value = 1;
bool zoom_firestation = false;
float move_aircraft1 = 0;
float move_aircraft2 = 0;
float move_aircraft3 = 0;
float move_robot1 = 0;
float move_robot2 = 0;
float move_robot3 = 0;
float rotate_robot1 = 0;
float rotate_car3_wheel = 0;
float move_car2 = 0;
float move_car3 = 0;


float zoom_to_firestation_from_scenario_01_value = 1;
bool zoom_to_firestation_from_scenario_01 = false;


//zoom to normal

float zoom_to_normal_scenario_01_value = 6.05;

//Underground Background
//ID1
void Background1() {

    //Layer1
    glBegin(GL_POLYGON);
    glColor3f(0.17, 0.17, 0.16);

    glVertex2f(0, 0);
    glVertex2f(130, 0);
    glVertex2f(130, 37.554);
    glVertex2f(0, 37.544);

    glEnd();

    //Layer2
    glBegin(GL_POLYGON);
    glColor3f(0.11, 0.1, 0.11);

    glVertex2f(7.61, 11);
    glVertex2f(124.128, 11);
    glVertex2f(124.128, 30);
    glVertex2f(7.61, 30);

    glEnd();

}

//ID2
void UndergroundFloor() {

    glBegin(GL_POLYGON);
    glColor3f(0.6, 0.6, 0.71);

    glVertex2f(0, 0);
    glVertex2f(130, 0);
    glVertex2f(130, 11);
    glVertex2f(0, 11);

    glEnd();

}

//ID3
void Light1() {

    glBegin(GL_POLYGON);
    glColor3f(1, 1, 1);

    glVertex2f(1.797, 36.866);
    glVertex2f(17.369, 36.886);
    glVertex2f(17.369, 37.544);
    glVertex2f(1.797, 37.554);

    glEnd();

}

//ID4
void Light2() {

    glBegin(GL_POLYGON);
    glColor3f(1, 1, 1);

    glVertex2f(31.797, 36.866);
    glVertex2f(47.369, 36.886);
    glVertex2f(47.369, 37.544);
    glVertex2f(31.797, 37.554);

    glEnd();

}

//ID5
void Light3() {

    glBegin(GL_POLYGON);
    glColor3f(1, 1, 1);

    glVertex2f(61.797, 36.866);
    glVertex2f(77.369, 36.886);
    glVertex2f(77.369, 37.544);
    glVertex2f(61.797, 37.554);

    glEnd();

}

//ID6
void Light4() {

    glBegin(GL_POLYGON);
    glColor3f(1, 1, 1);

    glVertex2f(91.897, 36.866);
    glVertex2f(107.469, 36.886);
    glVertex2f(107.469, 37.544);
    glVertex2f(91.897, 37.554);

    glEnd();

}

//ID7
void Light5() {

    glBegin(GL_POLYGON);
    glColor3f(1, 1, 1);

    glVertex2f(121.769, 36.886);
    glVertex2f(130, 36.886);
    glVertex2f(130, 37.554);
    glVertex2f(121.769, 37.544);

    glEnd();

}

//ID8
void Train() {

    glPushMatrix();

    glTranslatef(115, 0, 0);
    glTranslatef(move_train, 0, 0);


    //fullbody
    glBegin(GL_POLYGON);
    glColor3f(0.95, 0.64, 0.15);

    glVertex2f(19.28, 11);
    glVertex2f(129.1, 11.023);
    glVertex2f(130, 11.67);
    glVertex2f(130, 24.067);
    glVertex2f(129.47, 25);
    glVertex2f(25.53, 25);
    glVertex2f(19.28, 16.73);

    glEnd();

    //front glass
    glBegin(GL_POLYGON);
    glColor3f(0.63, 0.85, 0.75);

    glVertex2f(19.72, 16.98);
    glVertex2f(21.96, 16.98);
    glVertex2f(27.69, 24.82);
    glVertex2f(25.68, 24.82);

    glEnd();

    //Lowerpart of frontglass
    glBegin(GL_POLYGON);
    glColor3f(0.85, 0.45, 0.08);

    glVertex2f(19.54, 11.25);
    glVertex2f(21.99, 11.25);
    glVertex2f(21.99, 16.495);
    glVertex2f(19.54, 16.495);

    glEnd();

    //Driver's window
    glBegin(GL_POLYGON);
    glColor3f(0.63, 0.85, 0.75);

    glVertex2f(23.39, 16.73);
    glVertex2f(31.73, 16.73);
    glVertex2f(31.73, 22.38);
    glVertex2f(27.797, 22.38);

    glEnd();

    //Window section1
    glBegin(GL_POLYGON);
    glColor3f(0.85, 0.45, 0.08);

    glVertex2f(31.73, 16.73);
    glVertex2f(49.87, 16.73);
    glVertex2f(49.87, 22.38);
    glVertex2f(31.73, 22.38);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.63, 0.85, 0.75);

    glVertex2f(32.64, 17.64);
    glVertex2f(48.92, 17.64);
    glVertex2f(48.92, 21.46);
    glVertex2f(32.64, 21.46);

    glEnd();

    glLineWidth(7);
    glBegin(GL_LINES);
    glColor3f(0.85, 0.45, 0.08);

    glVertex2f(38.14, 21.462);
    glVertex2f(38.14, 17.638);

    glVertex2f(43.74, 21.462);
    glVertex2f(43.74, 17.638);

    glEnd();

    //Window section2
    glBegin(GL_POLYGON);
    glColor3f(0.85, 0.45, 0.08);

    glVertex2f(58.33, 16.73);
    glVertex2f(76.47, 16.73);
    glVertex2f(76.47, 22.38);
    glVertex2f(58.33, 22.38);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.63, 0.85, 0.75);

    glVertex2f(59.24, 17.64);
    glVertex2f(75.52, 17.64);
    glVertex2f(75.52, 21.46);
    glVertex2f(59.24, 21.46);

    glEnd();

    glLineWidth(7);
    glBegin(GL_LINES);
    glColor3f(0.85, 0.45, 0.08);

    glVertex2f(64.74, 21.462);
    glVertex2f(64.74, 17.638);

    glVertex2f(70.34, 21.462);
    glVertex2f(70.34, 17.638);

    glEnd();

    //Window section3
    glBegin(GL_POLYGON);
    glColor3f(0.85, 0.45, 0.08);

    glVertex2f(84.83, 16.73);
    glVertex2f(102.97, 16.73);
    glVertex2f(102.97, 22.38);
    glVertex2f(84.83, 22.38);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.63, 0.85, 0.75);

    glVertex2f(85.74, 17.64);
    glVertex2f(102.02, 17.64);
    glVertex2f(102.02, 21.46);
    glVertex2f(85.74, 21.46);

    glEnd();

    glLineWidth(7);
    glBegin(GL_LINES);
    glColor3f(0.85, 0.45, 0.08);

    glVertex2f(91.24, 21.462);
    glVertex2f(91.24, 17.638);

    glVertex2f(96.84, 21.462);
    glVertex2f(96.84, 17.638);

    glEnd();


    //Window section4
    glBegin(GL_POLYGON);
    glColor3f(0.85, 0.45, 0.08);

    glVertex2f(111.33, 16.73);
    glVertex2f(129.47, 16.73);
    glVertex2f(129.47, 22.38);
    glVertex2f(111.33, 22.38);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.63, 0.85, 0.75);

    glVertex2f(112.24, 17.64);
    glVertex2f(128.52, 17.64);
    glVertex2f(128.52, 21.46);
    glVertex2f(112.24, 21.46);

    glEnd();

    glLineWidth(7);
    glBegin(GL_LINES);
    glColor3f(0.85, 0.45, 0.08);

    glVertex2f(117.74, 21.462);
    glVertex2f(117.74, 17.638);

    glVertex2f(123.34, 21.462);
    glVertex2f(123.34, 17.638);

    glEnd();

    //Door1
    glBegin(GL_POLYGON);
    glColor3f(0.78, 0.41, 0.08);

    glVertex2f(49.87, 10.99);
    glVertex2f(58.33, 10.99);
    glVertex2f(58.33, 23.42);
    glVertex2f(49.87, 23.42);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.63, 0.85, 0.75);

    glVertex2f(50.762, 17.26);
    glVertex2f(53.29, 17.26);
    glVertex2f(53.29, 22.67);
    glVertex2f(50.762, 22.67);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.63, 0.85, 0.75);

    glVertex2f(54.962, 17.26);
    glVertex2f(57.49, 17.26);
    glVertex2f(57.49, 22.67);
    glVertex2f(54.962, 22.67);

    glEnd();

    //Door2
    glBegin(GL_POLYGON);
    glColor3f(0.78, 0.41, 0.08);

    glVertex2f(76.47, 10.99);
    glVertex2f(84.83, 10.99);
    glVertex2f(84.83, 23.42);
    glVertex2f(76.47, 23.42);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.63, 0.85, 0.75);

    glVertex2f(77.162, 17.26);
    glVertex2f(79.69, 17.26);
    glVertex2f(79.69, 22.67);
    glVertex2f(77.162, 22.67);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.63, 0.85, 0.75);

    glVertex2f(81.362, 17.26);
    glVertex2f(83.89, 17.26);
    glVertex2f(83.89, 22.67);
    glVertex2f(81.362, 22.67);

    glEnd();

    //Door3
    glBegin(GL_POLYGON);
    glColor3f(0.78, 0.41, 0.08);

    glVertex2f(102.97, 10.99);
    glVertex2f(111.33, 10.99);
    glVertex2f(111.33, 23.42);
    glVertex2f(102.97, 23.42);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.63, 0.85, 0.75);

    glVertex2f(103.662, 17.26);
    glVertex2f(106.19, 17.26);
    glVertex2f(106.19, 22.67);
    glVertex2f(103.662, 22.67);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.63, 0.85, 0.75);

    glVertex2f(107.862, 17.26);
    glVertex2f(110.39, 17.26);
    glVertex2f(110.39, 22.67);
    glVertex2f(107.862, 22.67);

    glEnd();

    glPopMatrix();

}

//Pillar's stand
//ID9
void Stand() {

    glBegin(GL_POLYGON);
    glColor3f(0.44, 0.36, 0.26);

    glVertex2f(0, 34.385);
    glVertex2f(0, 35.583);
    glVertex2f(130, 35.583);
    glVertex2f(130, 34.385);

    glEnd();

    glBegin(GL_POLYGON);

    glVertex2f(10.747, 35.583);
    glVertex2f(12.02, 35.583);
    glVertex2f(12.02, 37.544);
    glVertex2f(10.747, 37.544);

    glEnd();

    glBegin(GL_POLYGON);

    glVertex2f(25.91, 35.583);
    glVertex2f(27.408, 35.583);
    glVertex2f(27.408, 37.544);
    glVertex2f(25.91, 37.544);

    glEnd();

    glBegin(GL_POLYGON);

    glVertex2f(41.435, 35.583);
    glVertex2f(42.567, 35.583);
    glVertex2f(42.567, 37.544);
    glVertex2f(41.435, 37.544);

    glEnd();

    glBegin(GL_POLYGON);

    glVertex2f(56.6, 35.583);
    glVertex2f(57.943, 35.583);
    glVertex2f(57.943, 37.544);
    glVertex2f(56.6, 37.544);

    glEnd();

    glBegin(GL_POLYGON);

    glVertex2f(72.07, 35.583);
    glVertex2f(73.16, 35.583);
    glVertex2f(73.16, 37.544);
    glVertex2f(72.07, 37.544);

    glEnd();

    glBegin(GL_POLYGON);

    glVertex2f(87.235, 35.583);
    glVertex2f(88.513, 35.583);
    glVertex2f(88.513, 37.544);
    glVertex2f(87.235, 37.544);

    glEnd();

    glBegin(GL_POLYGON);

    glVertex2f(102.587, 35.583);
    glVertex2f(103.77, 35.583);
    glVertex2f(103.77, 37.544);
    glVertex2f(102.587, 37.544);

    glEnd();

    glBegin(GL_POLYGON);

    glVertex2f(117.81, 35.583);
    glVertex2f(119.21, 35.583);
    glVertex2f(119.21, 37.544);
    glVertex2f(117.81, 37.544);

    glEnd();

}

//ID11
void LeftPillar() {

    glBegin(GL_POLYGON);
    glColor3f(0.44, 0.36, 0.26);

    glVertex2f(14.446, 34.385);
    glVertex2f(21.116, 28.099);
    glVertex2f(21.116, 31.338);
    glVertex2f(17.812, 34.385);

    glEnd();

    glBegin(GL_POLYGON);

    glVertex2f(21.116, 7);
    glVertex2f(23.784, 7);
    glVertex2f(23.784, 34.385);
    glVertex2f(21.116, 34.385);

    glEnd();

    glBegin(GL_POLYGON);

    glVertex2f(23.53, 28.099);
    glVertex2f(30.708, 34.385);
    glVertex2f(27.023, 34.385);
    glVertex2f(23.466, 31.338);

    glEnd();

}

//ID12
void RightPillar() {

    glBegin(GL_POLYGON);
    glColor3f(0.44, 0.36, 0.26);

    glVertex2f(101.346, 34.385);
    glVertex2f(108.016, 28.099);
    glVertex2f(108.016, 31.338);
    glVertex2f(104.712, 34.385);

    glEnd();

    glBegin(GL_POLYGON);

    glVertex2f(108.016, 7);
    glVertex2f(110.684, 7);
    glVertex2f(110.684, 34.385);
    glVertex2f(108.016, 34.385);

    glEnd();

    glBegin(GL_POLYGON);

    glVertex2f(110.43, 28.099);
    glVertex2f(117.81, 35.583);
    glVertex2f(113.923, 34.385);
    glVertex2f(110.43, 31.338);

    glEnd();
}

//ID10
void Robot2() {

    glPushMatrix();
    glTranslatef(-150, 0, 0);
    glTranslatef(move_robot2, 0, 0);

    //sholder
    glBegin(GL_POLYGON);
    glColor3f(0.4, 0.37, 0.35);

    glVertex2f(72.0375, 18.402);
    glVertex2f(73.47, 18.402);
    glVertex2f(73.47, 19.08);
    glVertex2f(72.0375, 19.08);

    glEnd();

    //head(sky blue)
    glBegin(GL_POLYGON);
    for (int i = 0;i < 360;i++)
    {
        glColor3f(0.45, 0.73, 1);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 360;
        float r = 1.008;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 72.75, y + 19.799);
    }
    glEnd();

    //head(black)
    glBegin(GL_POLYGON);
    for (int i = 0;i < 360;i++)
    {
        glColor3f(0.31, 0.37, 0.39);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 360;
        float r = 0.75;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 72.75, y + 19.799);
    }
    glEnd();

    //head(blue)
    glBegin(GL_POLYGON);
    for (int i = 0;i < 360;i++)
    {
        glColor3f(1, 1, 1);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 360;
        float r = 0.35;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 72.75, y + 19.799);
    }
    glEnd();

    //leg 1(left)
    glBegin(GL_POLYGON);
    glColor3f(0.35, 0.34, 0.31);

    glVertex2f(72, 10);
    glVertex2f(72.52, 10);
    glVertex2f(72.52, 14);
    glVertex2f(72, 14);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.35, 0.34, 0.31);

    glVertex2f(71.88, 9.45);
    glVertex2f(72.63, 9.45);
    glVertex2f(72.63, 9.81);
    glVertex2f(71.88, 9.81);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.43, 0.74, 0.93);

    glVertex2f(72, 10);
    glVertex2f(72.52, 10);
    glVertex2f(72.63, 9.81);
    glVertex2f(71.88, 9.81);

    glEnd();

    glBegin(GL_POLYGON);
    for (int i = 0;i < 360;i++)
    {
        glColor3f(0.43, 0.74, 0.93);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 360;
        float r = 0.42;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 72.264, y + 11.605);
    }
    glEnd();

    glPushMatrix();
    glTranslatef(1, 0, 0);

    //leg 2(right)
    glBegin(GL_POLYGON);
    glColor3f(0.35, 0.34, 0.31);

    glVertex2f(72, 10);
    glVertex2f(72.52, 10);
    glVertex2f(72.52, 14);
    glVertex2f(72, 14);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.35, 0.34, 0.31);

    glVertex2f(71.88, 9.45);
    glVertex2f(72.63, 9.45);
    glVertex2f(72.63, 9.81);
    glVertex2f(71.88, 9.81);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.43, 0.74, 0.93);

    glVertex2f(72, 10);
    glVertex2f(72.52, 10);
    glVertex2f(72.63, 9.81);
    glVertex2f(71.88, 9.81);

    glEnd();

    glBegin(GL_POLYGON);
    for (int i = 0;i < 360;i++)
    {
        glColor3f(0.43, 0.74, 0.93);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 360;
        float r = 0.42;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 72.264, y + 11.605);
    }
    glEnd();


    glPopMatrix();

    //body
    glBegin(GL_POLYGON);
    glColor3f(0.45, 0.73, 1);

    glVertex2f(71.6375, 14);
    glVertex2f(73.87, 14);
    glVertex2f(73.87, 18.402);
    glVertex2f(71.6375, 18.402);

    glEnd();

    //right hand
    glBegin(GL_POLYGON);
    glColor3f(0.45, 0.73, 1);

    glVertex2f(78.405, 9.6);
    glVertex2f(81.14, 9.6);
    glVertex2f(78.89, 10.734);
    glVertex2f(78.405, 10.734);

    glEnd();

    glLineWidth(1.5);
    glBegin(GL_LINES);
    glColor3f(0, 0, 0);

    glVertex2f(78.405, 9.6);
    glVertex2f(81.14, 9.6);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.35, 0.33, 0.34);

    glVertex2f(78.405, 10.734);
    glVertex2f(78.89, 10.734);
    glVertex2f(76.28, 15.84);
    glVertex2f(76.049, 15.42);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.35, 0.33, 0.34);

    glVertex2f(73.87, 16.94);
    glVertex2f(73.87, 17.45);
    glVertex2f(76.28, 15.84);
    glVertex2f(76.049, 15.42);

    glEnd();

    //left hand
    glBegin(GL_POLYGON);
    glColor3f(0.45, 0.73, 1);

    glVertex2f(68.43, 14.85);
    glVertex2f(69.954, 14.85);
    glVertex2f(69.447, 15.48);
    glVertex2f(68.92, 15.48);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.35, 0.33, 0.34);

    glVertex2f(68.92, 15.48);
    glVertex2f(69.447, 15.48);
    glVertex2f(70.24, 16.64);
    glVertex2f(70, 17);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.35, 0.33, 0.34);

    glVertex2f(71.69, 17.45);
    glVertex2f(71.64, 16.94);
    glVertex2f(70.24, 16.64);
    glVertex2f(70, 17);

    glEnd();

    glPopMatrix();
}

//ID13
void Stair() {

    //middlepart
    glBegin(GL_POLYGON);
    glColor3f(0.66, 0.55, 0.42);

    glVertex2f(0, 25);
    glVertex2f(9.87, 13.89);
    glVertex2f(9.87, 12.51);
    glVertex2f(17.04, 12.51);
    glVertex2f(0, 30);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.32, 0.32, 0.31);

    glVertex2f(0, 20.976);
    glVertex2f(0, 12.51);
    glVertex2f(9.87, 12.51);
    glVertex2f(9.87, 13.89);
    glVertex2f(0, 25);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.32, 0.32, 0.31);

    glVertex2f(0, 30);
    glVertex2f(17.04, 12.51);
    glVertex2f(17.04, 14.59);
    glVertex2f(0, 32.18);

    glEnd();

    glLineWidth(0.8);
    glBegin(GL_LINES);
    glColor3f(0, 0, 0);

    glVertex2f(0, 28.82);
    glVertex2f(1.16, 28.82);

    glVertex2f(0, 27.58);
    glVertex2f(2.37, 27.58);

    glVertex2f(0, 26.29);
    glVertex2f(3.59, 26.29);

    glVertex2f(0, 25);
    glVertex2f(4.85, 25);

    glVertex2f(1.05, 23.83);
    glVertex2f(5.92, 23.92);

    glVertex2f(2.04, 22.72);
    glVertex2f(6.94, 22.87);

    glVertex2f(3.16, 21.48);
    glVertex2f(8.12, 21.67);

    glVertex2f(4.5, 19.99);
    glVertex2f(9.56, 20.19);

    glVertex2f(5.6, 18.72);
    glVertex2f(10.81, 18.9);

    glVertex2f(6.67, 17.5);
    glVertex2f(12.02, 17.66);

    glVertex2f(7.69, 16.32);
    glVertex2f(13.19, 16.46);

    glVertex2f(8.76, 15.13);
    glVertex2f(14.42, 15.18);

    glVertex2f(9.87, 13.89);
    glVertex2f(15.67, 13.89);

    glVertex2f(9.87, 12.51);
    glVertex2f(17.04, 12.51);

    glEnd();

}

//ID14
void WallNearStair() {

    //Upper part
    glBegin(GL_POLYGON);
    glColor3f(0.6, 0.63, 0.63);

    glVertex2f(0, 9.5);
    glVertex2f(50.4, 9.5);
    glVertex2f(50.4, 12.51);
    glVertex2f(0, 12.51);

    glEnd();

    //Upper part(shade)
    glBegin(GL_POLYGON);
    glColor3f(0.81, 0.84, 0.84);

    glVertex2f(48.6, 9.5);
    glVertex2f(50.4, 9.5);
    glVertex2f(50.4, 12.51);
    glVertex2f(48.6, 12.51);

    glEnd();

    //Lower part
    glBegin(GL_POLYGON);
    glColor3f(0.32, 0.32, 0.32);

    glVertex2f(0, 8.28);
    glVertex2f(50.4, 8.28);
    glVertex2f(50.4, 9.5);
    glVertex2f(0, 9.5);

    glEnd();

    //Lower part(shade)
    glBegin(GL_POLYGON);
    glColor3f(0.41, 0.41, 0.41);

    glVertex2f(48.6, 8.28);
    glVertex2f(50.4, 8.28);
    glVertex2f(50.4, 9.5);
    glVertex2f(48.6, 9.5);

    glEnd();

}

//ID15
void Robot3() {

    glPushMatrix();
    glTranslatef(5, 0, 0);
    glTranslatef(move_robot3, 0, 0);

    //shoulder
    glBegin(GL_POLYGON);
    glColor3f(0.42, 0.43, 0.45);

    glVertex2f(126.49, 18.61);
    glVertex2f(127.16, 18.61);
    glVertex2f(127.16, 19.75);
    glVertex2f(126.49, 19.75);

    glEnd();

    //head
    glBegin(GL_POLYGON);
    for (int i = 0;i < 360;i++)
    {
        glColor3f(0.72, 0.74, 0.78);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 360;
        float r = 1.3;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 126.59, y + 20.99);
    }
    glEnd();

    //eye(red)
    glBegin(GL_POLYGON);
    for (int i = 0;i < 360;i++)
    {
        glColor3f(0.77, 0.1, 0.05);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 360;
        float r = 0.34;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 125.812, y + 21.15);
    }
    glEnd();

    //eye(black)
    glBegin(GL_POLYGON);
    for (int i = 0;i < 360;i++)
    {
        glColor3f(0, 0, 0);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 360;
        float r = 0.18;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 125.812, y + 21.15);
    }
    glEnd();

    //ear
    glBegin(GL_POLYGON);
    for (int i = 0;i < 360;i++)
    {
        glColor3f(1, 1, 1);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 360;
        float r = 0.71;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 127.089, y + 20.91);
    }
    glEnd();

    //mouth
    glLineWidth(1);
    glBegin(GL_LINES);
    glColor3f(0, 0, 0);

    glVertex2f(125.61, 20.31);
    glVertex2f(126.12, 20.31);

    glEnd();

    //hand 1
    glLineWidth(3);
    glBegin(GL_LINES);
    glColor3f(1, 1, 1);

    glVertex2f(126.49, 18.61);
    glVertex2f(125.82, 14.196);

    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.63, 0.65, 0.67);

    glVertex2f(125.82, 13.58);
    glVertex2f(125.82, 14.196);
    glVertex2f(125.17, 14.157);

    glEnd();

    glBegin(GL_POLYGON);
    for (int i = 0;i < 360;i++)
    {
        glColor3f(0.65, 0.67, 0.69);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 360;
        float r = 0.38;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 126.49, y + 18.61);
    }
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.6, 0.62, 0.65);

    glVertex2f(125.789, 16.45);
    glVertex2f(126.49, 16.31);
    glVertex2f(126.75, 17.87);
    glVertex2f(126.06, 17.97);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.6, 0.62, 0.65);

    glVertex2f(125.489, 14.65);
    glVertex2f(126.19, 14.51);
    glVertex2f(126.45, 16.07);
    glVertex2f(125.76, 16.17);

    glEnd();

    //leg and body's black line
    glBegin(GL_POLYGON);
    glColor3f(1, 1, 1);

    glVertex2f(126.49, 8.17);
    glVertex2f(127.16, 8.17);
    glVertex2f(127.16, 18.61);
    glVertex2f(126.49, 18.61);

    glEnd();

    //body
    glBegin(GL_POLYGON);
    glColor3f(0.76, 0.78, 0.82);

    glVertex2f(126, 16);
    glVertex2f(127.76, 16);
    glVertex2f(127.76, 18.5);
    glVertex2f(126, 18.5);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.76, 0.78, 0.82);

    glVertex2f(126, 15.45);
    glVertex2f(126.34, 14.24);
    glVertex2f(126.85, 13.78);
    glVertex2f(127.33, 14.24);
    glVertex2f(127.76, 15.45);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.76, 0.78, 0.82);

    glVertex2f(126.2, 11.53);
    glVertex2f(127.42, 11.53);
    glVertex2f(127.42, 13.13);
    glVertex2f(126.2, 13.13);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.76, 0.78, 0.82);

    glVertex2f(126.2, 8.83);
    glVertex2f(127.42, 8.83);
    glVertex2f(127.42, 13.13);
    glVertex2f(126.2, 13.13);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.76, 0.78, 0.82);

    glVertex2f(126.027, 7.425);
    glVertex2f(127.46, 7.425);
    glVertex2f(127.46, 8.17);
    glVertex2f(126.49, 8.17);
    glVertex2f(126.027, 7.903);

    glEnd();

    //hand 2
    glLineWidth(3);
    glBegin(GL_LINES);
    glColor3f(1, 1, 1);

    glVertex2f(127.279, 18.716);
    glVertex2f(128.232, 14.075);

    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.63, 0.65, 0.67);

    glVertex2f(128.065, 13.464);
    glVertex2f(128.855, 13.72);
    glVertex2f(128.232, 14.075);

    glEnd();

    glBegin(GL_POLYGON);
    for (int i = 0;i < 360;i++)
    {
        glColor3f(0.65, 0.67, 0.69);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 360;
        float r = 0.4;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 127.296, y + 18.702);
    }
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.6, 0.62, 0.65);

    glVertex2f(127.4, 16.5);
    glVertex2f(128.082, 16.66);
    glVertex2f(127.87, 17.569);
    glVertex2f(127.189, 17.44);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.6, 0.62, 0.65);

    glVertex2f(127.8, 14.4);
    glVertex2f(128.482, 14.56);
    glVertex2f(128.17, 15.869);
    glVertex2f(127.489, 15.74);

    glEnd();

    glPopMatrix();

}

//ID16
void Dustbin() {

    glBegin(GL_POLYGON);
    glColor3f(0.31, 0.23, 0.16);

    glVertex2f(19.5, 7.1);
    glVertex2f(25, 7.1);
    glVertex2f(25, 17);
    glVertex2f(19.5, 17);

    glEnd();

    //orangepart
    glBegin(GL_POLYGON);
    glColor3f(0.8, 0.45, 0.11);

    glVertex2f(19.5, 17);
    glVertex2f(25, 17);
    glVertex2f(25, 18);
    glVertex2f(19.5, 18);

    glEnd();

    //blackpart
    glBegin(GL_POLYGON);
    glColor3f(0, 0, 0);

    glVertex2f(22.78, 15.16);
    glVertex2f(24.3, 15.16);
    glVertex2f(24.3, 16.18);
    glVertex2f(22.78, 16.18);

    glEnd();

}
//Leftside Bench
//ID17
void Bench1() {

    glBegin(GL_POLYGON);
    glColor3f(0.46, 0.28, 0.12);

    glVertex2f(99.85, 8.65);
    glVertex2f(116.37, 8.65);
    glVertex2f(116.55, 10.11);
    glVertex2f(99.1, 10.11);

    glEnd();

    glLineWidth(1.5);
    glBegin(GL_LINES);
    glColor3f(0, 0, 0);

    glVertex2f(99.85, 8.65);
    glVertex2f(116.37, 8.65);

    glVertex2f(99.85, 8.65);
    glVertex2f(99.1, 10.11);

    glVertex2f(99.85, 8.65);
    glVertex2f(99.87, 5.77);

    glVertex2f(101.15, 5.77);
    glVertex2f(99.87, 5.77);

    glVertex2f(101.15, 5.77);
    glVertex2f(101.58, 8.65);

    glVertex2f(114.15, 8.65);
    glVertex2f(114.15, 5.77);

    glVertex2f(115.25, 5.77);
    glVertex2f(114.15, 5.77);

    glVertex2f(115.25, 5.77);
    glVertex2f(115.895, 8.6);

    glEnd();

}

//Rightside Bench
//ID18
void Bench2() {

    glBegin(GL_POLYGON);
    glColor3f(0.46, 0.28, 0.12);

    glVertex2f(18.85, 8.65);
    glVertex2f(35.37, 8.65);
    glVertex2f(35.55, 10.11);
    glVertex2f(18.1, 10.11);

    glEnd();

    glLineWidth(1.5);
    glBegin(GL_LINES);
    glColor3f(0, 0, 0);

    glVertex2f(18.85, 8.65);
    glVertex2f(35.37, 8.65);

    glVertex2f(18.85, 8.65);
    glVertex2f(18.1, 10.11);

    glVertex2f(18.85, 8.65);
    glVertex2f(18.85, 5.77);

    glVertex2f(18.85, 5.77);
    glVertex2f(20.15, 5.77);

    glVertex2f(20.15, 5.77);
    glVertex2f(20.58, 8.65);

    glVertex2f(33.15, 8.65);
    glVertex2f(33.15, 5.77);

    glVertex2f(33.15, 5.77);
    glVertex2f(34.25, 5.77);

    glVertex2f(34.25, 5.77);
    glVertex2f(34.695, 8.65);

    glEnd();

}

//ID19
void Robot1() {

    glPushMatrix();
    glTranslatef(-20, 0, 0);
    glTranslatef(move_robot1, 0, 0);


    //Antina (triangle)
    glBegin(GL_TRIANGLES);
    glColor3f(0.9, 0.89, 0.81);

    glVertex2f(7.699, 11.64);
    glVertex2f(8.474, 11.64);
    glVertex2f(8.08, 12.61);

    glEnd();

    //Antina (black circle)
    glBegin(GL_POLYGON);
    for (int i = 0;i < 360;i++)
    {
        glColor3f(0, 0, 0);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 360;
        float r = 0.33;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 8.101, y + 12.935);
    }
    glEnd();

    //Antina (white circle)
    glBegin(GL_POLYGON);
    for (int i = 0;i < 360;i++)
    {
        glColor3f(0.9, 0.89, 0.81);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 360;
        float r = 0.26;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 8.101, y + 12.935);
    }
    glEnd();

    glPushMatrix();
    glTranslatef(7.9619, 3.3474, 0);
    glRotatef(rotate_robot1, 0, 0, 1);
    glTranslatef(-7.9619, -3.3474, 0);

    //wheel 1
    glBegin(GL_POLYGON);
    for (int i = 0;i < 360;i++)
    {
        glColor3f(0.44, 0.39, 0.39);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 360;
        float r = 2.25;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 7.9619, y + 3.3474);
    }
    glEnd();

    //wheel 2
    glBegin(GL_POLYGON);
    for (int i = 0;i < 360;i++)
    {
        glColor3f(0.71, 0.71, 0.7);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 360;
        float r = 1.47;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 7.9619, y + 3.3474);
    }
    glEnd();

    //wheel 1(dot)
    glBegin(GL_POLYGON);
    for (int i = 0;i < 360;i++)
    {
        glColor3f(1, 0, 0);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 360;
        float r = 0.3;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 7.408, y + 2.37);
    }

    glEnd();

    glPopMatrix();

    //body
    glBegin(GL_POLYGON);
    glColor3f(0.22, 0.75, 0.99);

    glVertex2f(4.632, 2.819);
    glVertex2f(11.328, 2.819);
    glVertex2f(9, 7.427);
    glVertex2f(7.21, 7.427);

    glEnd();

    //body lines
    glLineWidth(1);
    glBegin(GL_LINES);
    glColor3f(0, 0, 0);

    glVertex2f(7.21, 7.427);
    glVertex2f(4.632, 2.819);

    glVertex2f(11.328, 2.819);
    glVertex2f(4.632, 2.819);

    glVertex2f(11.328, 2.819);
    glVertex2f(9, 7.427);

    glEnd();

    //head
    glBegin(GL_POLYGON);
    for (int i = 0;i < 360;i++)
    {
        glColor3f(0.22, 0.75, 0.99);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 360;
        float r = 2.44;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 8.126, y + 9.329);
    }
    glEnd();

    //head
    glLineWidth(0.01);
    glBegin(GL_LINES);
    for (int i = 0;i < 360;i++)
    {
        glColor3f(0, 0, 0);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 360;
        float r = 2.44;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 8.126, y + 9.329);
    }
    glEnd();

    //face
    glBegin(GL_POLYGON);
    glColor3f(0.91, 0.89, 0.78);

    glVertex2f(9.867, 7.629);
    glVertex2f(10.13, 7.94);
    glVertex2f(10.35, 8.33);
    glVertex2f(10.52, 8.86);
    glVertex2f(10.57, 9.3);
    glVertex2f(10.52, 9.79);
    glVertex2f(10.37, 10.28);
    glVertex2f(10.17, 10.644);
    glVertex2f(9.479, 10.578);
    glVertex2f(8.916, 10.425);
    glVertex2f(8.606, 10.24);
    glVertex2f(8.302, 10.034);
    glVertex2f(8.05, 9.686);
    glVertex2f(7.963, 9.269);
    glVertex2f(8.033, 8.8);
    glVertex2f(8.163, 8.409);
    glVertex2f(8.485, 8.07);
    glVertex2f(9.015, 7.8097);
    glVertex2f(9.536, 7.671);

    glEnd();

    //red line in face
    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3f(0.91, 0.05, 0.02);

    glVertex2f(9.867, 7.629);
    glVertex2f(9.536, 7.671);

    glVertex2f(9.015, 7.8097);
    glVertex2f(9.536, 7.671);

    glVertex2f(9.015, 7.8097);
    glVertex2f(8.485, 8.07);

    glVertex2f(9.015, 7.8097);
    glVertex2f(8.163, 8.409);

    glVertex2f(8.033, 8.8);
    glVertex2f(8.163, 8.409);

    glVertex2f(8.033, 8.8);
    glVertex2f(7.963, 9.269);

    glVertex2f(7.963, 9.269);
    glVertex2f(8.05, 9.686);

    glVertex2f(8.302, 10.034);
    glVertex2f(8.05, 9.686);

    glVertex2f(8.302, 10.034);
    glVertex2f(8.606, 10.24);

    glVertex2f(8.916, 10.425);
    glVertex2f(8.606, 10.24);

    glVertex2f(8.916, 10.425);
    glVertex2f(9.479, 10.578);

    glVertex2f(10.17, 10.644);
    glVertex2f(9.479, 10.578);

    glEnd();

    //eye(white)
    glBegin(GL_POLYGON);
    for (int i = 0;i < 360;i++)
    {
        glColor3f(1, 1, 1);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 360;
        float r = 0.48;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 10.0445, y + 9.7189);
    }
    glEnd();

    //eye(white) lines
    glLineWidth(0.01);
    glBegin(GL_LINES);
    for (int i = 0;i < 360;i++)
    {
        glColor3f(0, 0, 0);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 360;
        float r = 0.48;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 10.0445, y + 9.7189);
    }
    glEnd();

    //eye(white) lines
    glBegin(GL_POLYGON);
    for (int i = 0;i < 360;i++)
    {
        glColor3f(0, 0, 0);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 360;
        float r = 0.17;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 10.36, y + 9.71);
    }
    glEnd();

    glLineWidth(1);
    glBegin(GL_LINES);
    glColor3f(0, 0, 0);

    glVertex2f(9.907, 8.517);
    glVertex2f(10.412, 8.517);

    glEnd();

    //hand(trapezium)
    glBegin(GL_POLYGON);
    glColor3f(0.89, 0.89, 0.83);

    glVertex2f(9.543, 4.829);
    glVertex2f(9.75, 5.78);
    glVertex2f(8.538, 6.757);
    glVertex2f(8.028, 6.206);

    glEnd();

    //white part of hand(circle)
    glBegin(GL_POLYGON);
    for (int i = 0;i < 360;i++)
    {
        glColor3f(0, 0, 0);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 360;
        float r = 0.84;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 7.94, y + 6.813);
    }
    glEnd();

    //white part of hand(circle)
    glBegin(GL_POLYGON);
    for (int i = 0;i < 360;i++)
    {
        glColor3f(1, 1, 1);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 360;
        float r = 0.75;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 7.94, y + 6.813);
    }
    glEnd();

    //gray part of hand(circle)
    glBegin(GL_POLYGON);
    for (int i = 0;i < 360;i++)
    {
        glColor3f(0, 0, 0);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 360;
        float r = 1.12;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 10.44, y + 5.18);
    }
    glEnd();
    //gray part of hand(circle)
    glBegin(GL_POLYGON);
    for (int i = 0;i < 360;i++)
    {
        glColor3f(0.87, 0.88, 0.83);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 360;
        float r = 1.01;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 10.44, y + 5.18);
    }
    glEnd();

    //box
    glBegin(GL_POLYGON);
    glColor3f(0.92, 0.73, 0.35);

    glVertex2f(11.208, 1.6);
    glVertex2f(16.212, 2.26);
    glVertex2f(15.826, 5.378);
    glVertex2f(10.679, 4.749);

    glEnd();

    //box
    glBegin(GL_POLYGON);
    glColor3f(0.89, 0.65, 0.25);

    glVertex2f(10.679, 4.749);
    glVertex2f(15.826, 5.378);
    glVertex2f(16.012, 5.978);
    glVertex2f(10.44, 5.18);

    glEnd();

    //box
    glBegin(GL_POLYGON);
    glColor3f(0.89, 0.65, 0.25);

    glVertex2f(10.44, 5.18);
    glVertex2f(16.012, 5.978);
    glVertex2f(15.5115, 6.665);
    glVertex2f(10.836, 6.0497);

    glEnd();

    glPopMatrix();

}

//ID20
void Greenroad() {

    glBegin(GL_POLYGON);

    if (isday == true) {
        glColor3f(0.678, 0.937, 0.145);
    }
    if (isday == false) {
        glColor3f(0.33, 0.43, 0.12);
    }

    glVertex2f(0, 37.544);
    glVertex2f(0, 39.826);
    glVertex2f(130, 39.826);
    glVertex2f(130, 37.554);

    glEnd();

}

//ID21
void Road() {

    glBegin(GL_POLYGON);

    if (isday == true) {
        glColor3f(0.87, 0.89, 0.85);
    }
    else {
        glColor3f(0.38, 0.39, 0.37);
    }

    glVertex2f(0, 39.826);
    glVertex2f(0, 40.85);
    glVertex2f(130, 40.85);
    glVertex2f(130, 39.826);

    glEnd();

}

//ID22
void Sky() {

    glBegin(GL_POLYGON);
    if (isday == true) {
        glColor3f(0.31, 0.65, 0.98);
    }
    else {
        glColor3f(0.03, 0.2, 0.36);
    }

    glVertex2f(0, 40.85);
    glVertex2f(0, 80);
    glVertex2f(130, 80);
    glVertex2f(130, 40.85);

    glEnd();

}
//Right to left
//ID29
void Building1() {
    //main shape
    glBegin(GL_POLYGON);
    if (isday == true) {
        glColor3f(0.7, 0.91, 0.94);
    }
    else {
        glColor3f(0.43, 0.56, 0.58);
    }
    glVertex2f(112, 40.85);
    glVertex2f(125.5, 40.85);
    glVertex2f(125.5, 68.6);
    glVertex2f(112, 68.6);

    glEnd();

    //deep blue shades
    glBegin(GL_POLYGON);
    if (isday == true) {
        glColor3f(0.22, 0.52, 0.61);
    }
    else {
        glColor3f(0.97, 0.66, 0.35);
    }
    glVertex2f(112, 67);
    glVertex2f(125.5, 67);
    glVertex2f(125.5, 67.5);
    glVertex2f(112, 67.5);
    glEnd();

    glBegin(GL_POLYGON);
    if (isday == true) {
        glColor3f(0.22, 0.52, 0.61);
    }
    else {
        glColor3f(0.97, 0.66, 0.35);
    }
    glVertex2f(112, 65.9);
    glVertex2f(125.5, 65.9);
    glVertex2f(125.5, 66.4);
    glVertex2f(112, 66.4);
    glEnd();

    glBegin(GL_POLYGON);
    if (isday == true) {
        glColor3f(0.22, 0.52, 0.61);
    }
    else {
        glColor3f(0.97, 0.66, 0.35);
    }
    glVertex2f(112, 64.7);
    glVertex2f(125.5, 64.7);
    glVertex2f(125.5, 65.2);
    glVertex2f(112, 65.2);
    glEnd();

    glBegin(GL_POLYGON);
    if (isday == true) {
        glColor3f(0.22, 0.52, 0.61);
    }
    else {
        glColor3f(0.97, 0.66, 0.35);
    }
    glVertex2f(112, 63.5);
    glVertex2f(125.5, 63.5);
    glVertex2f(125.5, 64);
    glVertex2f(112, 64);
    glEnd();

    glBegin(GL_POLYGON);
    if (isday == true) {
        glColor3f(0.22, 0.52, 0.61);
    }
    else {
        glColor3f(0.97, 0.66, 0.35);
    }
    glVertex2f(112, 61.1);
    glVertex2f(125.5, 61.1);
    glVertex2f(125.5, 61.6);
    glVertex2f(112, 61.6);
    glEnd();

    glBegin(GL_POLYGON);
    if (isday == true) {
        glColor3f(0.22, 0.52, 0.61);
    }
    else {
        glColor3f(0.97, 0.66, 0.35);
    }
    glVertex2f(112, 59.9);
    glVertex2f(125.5, 59.9);
    glVertex2f(125.5, 60.4);
    glVertex2f(112, 60.4);
    glEnd();

    glBegin(GL_POLYGON);
    if (isday == true) {
        glColor3f(0.22, 0.52, 0.61);
    }
    else {
        glColor3f(0.97, 0.66, 0.35);
    }
    glVertex2f(112, 58.7);
    glVertex2f(125.5, 58.7);
    glVertex2f(125.5, 59.2);
    glVertex2f(112, 59.2);
    glEnd();

    glBegin(GL_POLYGON);
    if (isday == true) {
        glColor3f(0.22, 0.52, 0.61);
    }
    else {
        glColor3f(0.97, 0.66, 0.35);
    }
    glVertex2f(112, 56.4);
    glVertex2f(125.5, 56.4);
    glVertex2f(125.5, 56.9);
    glVertex2f(112, 56.9);
    glEnd();

    glBegin(GL_POLYGON);
    if (isday == true) {
        glColor3f(0.22, 0.52, 0.61);
    }
    else {
        glColor3f(0.97, 0.66, 0.35);
    }
    glVertex2f(112, 55.1);
    glVertex2f(125.5, 55.1);
    glVertex2f(125.5, 55.6);
    glVertex2f(112, 55.6);
    glEnd();

    glBegin(GL_POLYGON);
    if (isday == true) {
        glColor3f(0.22, 0.52, 0.61);
    }
    else {
        glColor3f(0.97, 0.66, 0.35);
    }
    glVertex2f(112, 54);
    glVertex2f(125.5, 54);
    glVertex2f(125.5, 54.5);
    glVertex2f(112, 54.5);
    glEnd();

    glBegin(GL_POLYGON);
    if (isday == true) {
        glColor3f(0.22, 0.52, 0.61);
    }
    else {
        glColor3f(0.97, 0.66, 0.35);
    }
    glVertex2f(112, 51.5);
    glVertex2f(125.5, 51.5);
    glVertex2f(125.5, 52);
    glVertex2f(112, 52);
    glEnd();

    glBegin(GL_POLYGON);
    if (isday == true) {
        glColor3f(0.22, 0.52, 0.61);
    }
    else {
        glColor3f(0.97, 0.66, 0.35);
    }
    glVertex2f(112, 50.3);
    glVertex2f(125.5, 50.3);
    glVertex2f(125.5, 50.8);
    glVertex2f(112, 50.8);
    glEnd();

    glBegin(GL_POLYGON);
    if (isday == true) {
        glColor3f(0.22, 0.52, 0.61);
    }
    else {
        glColor3f(0.97, 0.66, 0.35);
    }
    glVertex2f(112, 49.1);
    glVertex2f(125.5, 49.1);
    glVertex2f(125.5, 49.6);
    glVertex2f(112, 49.6);
    glEnd();

    glBegin(GL_POLYGON);
    if (isday == true) {
        glColor3f(0.22, 0.52, 0.61);
    }
    else {
        glColor3f(0.97, 0.66, 0.35);
    }
    glVertex2f(112, 47.9);
    glVertex2f(125.5, 47.9);
    glVertex2f(125.5, 48.4);
    glVertex2f(112, 48.4);
    glEnd();

    glBegin(GL_POLYGON);
    if (isday == true) {
        glColor3f(0.22, 0.52, 0.61);
    }
    else {
        glColor3f(0.97, 0.66, 0.35);
    }
    glVertex2f(112, 46.7);
    glVertex2f(125.5, 46.7);
    glVertex2f(125.5, 47.2);
    glVertex2f(112, 47.2);
    glEnd();

    glBegin(GL_POLYGON);
    if (isday == true) {
        glColor3f(0.22, 0.52, 0.61);
    }
    else {
        glColor3f(0.97, 0.66, 0.35);
    }
    glVertex2f(112, 45.5);
    glVertex2f(125.5, 45.5);
    glVertex2f(125.5, 46);
    glVertex2f(112, 46);
    glEnd();

    glBegin(GL_POLYGON);
    if (isday == true) {
        glColor3f(0.22, 0.52, 0.61);
    }
    else {
        glColor3f(0.97, 0.66, 0.35);
    }
    glVertex2f(112, 44.4);
    glVertex2f(125.5, 44.4);
    glVertex2f(125.5, 44.9);
    glVertex2f(112, 44.9);
    glEnd();

    glBegin(GL_POLYGON);
    if (isday == true) {
        glColor3f(0.22, 0.52, 0.61);
    }
    else {
        glColor3f(0.97, 0.66, 0.35);
    }
    glVertex2f(112, 43.2);
    glVertex2f(125.5, 43.2);
    glVertex2f(125.5, 43.7);
    glVertex2f(112, 43.7);
    glEnd();

    //Bottom
    glBegin(GL_POLYGON);
    glColor3f(0.41, 0.51, 0.51);
    glVertex2f(112, 40.85);
    glVertex2f(125.5, 40.85);
    glVertex2f(125.5, 43.2);
    glVertex2f(112, 43.2);
    glEnd();

    //White sdhades(top to bottom)
    glBegin(GL_POLYGON);
    if (isday == true) {
        glColor3f(0.88, 0.93, 0.93);
    }
    else {
        glColor3f(0.65, 0.67, 0.67);
    }
    glVertex2f(112, 67);
    glVertex2f(125.5, 67);
    glVertex2f(125.5, 68.6);
    glVertex2f(112, 68.6);
    glEnd();

    glBegin(GL_POLYGON);
    if (isday == true) {
        glColor3f(0.88, 0.93, 0.93);
    }
    else {
        glColor3f(0.65, 0.67, 0.67);
    }
    glVertex2f(112, 61.6);
    glVertex2f(125.5, 61.6);
    glVertex2f(125.5, 63.5);
    glVertex2f(112, 63.5);
    glEnd();

    glBegin(GL_POLYGON);
    if (isday == true) {
        glColor3f(0.88, 0.93, 0.93);
    }
    else {
        glColor3f(0.65, 0.67, 0.67);
    }
    glVertex2f(112, 56.9);
    glVertex2f(125.5, 56.9);
    glVertex2f(125.5, 58.7);
    glVertex2f(112, 58.7);
    glEnd();

    glBegin(GL_POLYGON);
    if (isday == true) {
        glColor3f(0.88, 0.93, 0.93);
    }
    else {
        glColor3f(0.65, 0.67, 0.67);
    }
    glVertex2f(112, 52.1);
    glVertex2f(125.5, 52.1);
    glVertex2f(125.5, 54);
    glVertex2f(112, 54);
    glEnd();

    //White lines
    glLineWidth(7);
    glBegin(GL_LINES);
    if (isday == true) {
        glColor3f(0.88, 0.93, 0.93);
    }
    else {
        glColor3f(0.65, 0.67, 0.67);
    }

    glVertex2f(114.85, 61.6);
    glVertex2f(114.85, 43.2);

    glVertex2f(122.9, 61.6);
    glVertex2f(122.9, 43.2);

    glEnd();
}

//ID30
void Building2() {

    //main shape
    glBegin(GL_POLYGON);
    glColor3f(0.2, 0.52, 0.64);
    glVertex2f(108, 40.85);
    glVertex2f(118.6, 40.85);
    glVertex2f(118.6, 58.5);
    glVertex2f(108, 58.5);
    glEnd();

    //white
    glBegin(GL_POLYGON);
    glColor3f(0.92, 0.9, 0.77);
    glVertex2f(108, 54.9);
    glVertex2f(118.6, 54.9);
    glVertex2f(118.6, 57);
    glVertex2f(108, 57);
    glEnd();

    //middle glass part
    glBegin(GL_POLYGON);
    if (isday == true) {
        glColor3f(0.43, 0.78, 0.82);
    }
    else {
        glColor3f(0.96, 0.69, 0.36);
    }
    glVertex2f(108, 47.4);
    glVertex2f(118.6, 47.4);
    glVertex2f(118.6, 54.9);
    glVertex2f(108, 54.9);
    glEnd();

    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3f(0.88, 0.93, 0.93);

    glVertex2f(108, 52.13);
    glVertex2f(118.6, 52.13);

    glVertex2f(109.2, 54.9);
    glVertex2f(109.2, 47.4);

    glVertex2f(112.9, 54.9);
    glVertex2f(112.9, 47.4);

    glVertex2f(116.2, 54.9);
    glVertex2f(116.2, 47.4);

    glEnd();

    //lower white parts
    glLineWidth(3);
    glBegin(GL_LINES);
    if (isday == true) {
        glColor3f(0.88, 0.93, 0.93);
    }
    else {
        glColor3f(0.97, 0.66, 0.35);
    }

    glVertex2f(108, 46.5);
    glVertex2f(118.6, 46.5);

    glVertex2f(108, 45.6);
    glVertex2f(118.6, 45.6);

    glVertex2f(108, 44.7);
    glVertex2f(118.6, 44.7);

    glVertex2f(108, 43.8);
    glVertex2f(118.6, 43.8);

    glVertex2f(108, 42.9);
    glVertex2f(118.6, 42.9);

    glVertex2f(108, 42);
    glVertex2f(118.6, 42);

    glEnd();

}

//ID31
void Building3() {

    //main shape(bright side)
    glBegin(GL_POLYGON);
    if (isday == true) {
        glColor3f(0.24, 0.77, 0.91);
    }
    else {
        glColor3f(0.15, 0.54, 0.64);
    }
    glVertex2f(100.28, 40.85);
    glVertex2f(108, 40.85);
    glVertex2f(108, 66);
    glVertex2f(100.28, 66);
    glEnd();

    //White part(bright side)
    glBegin(GL_POLYGON);
    if (isday == true) {
        glColor3f(1, 1, 1);
    }
    else {
        glColor3f(0.97, 0.66, 0.35);
    }
    glVertex2f(100.28, 65.1);
    glVertex2f(108, 65.1);
    glVertex2f(108, 66);
    glVertex2f(100.28, 66);
    glEnd();

    //lower white parts
    glLineWidth(5);
    glBegin(GL_LINES);
    if (isday == true) {
        glColor3f(1, 1, 1);
    }
    else {
        glColor3f(0.97, 0.66, 0.35);
    }

    glVertex2f(100.28, 63.55);
    glVertex2f(108, 63.55);

    glVertex2f(100.28, 61.75);
    glVertex2f(108, 61.75);

    glVertex2f(100.28, 59.95);
    glVertex2f(108, 59.95);

    glVertex2f(100.28, 58.15);
    glVertex2f(108, 58.15);

    glVertex2f(100.28, 56.35);
    glVertex2f(108, 56.35);

    glVertex2f(100.28, 54.55);
    glVertex2f(108, 54.55);

    glVertex2f(100.28, 52.75);
    glVertex2f(108, 52.75);

    glVertex2f(100.28, 50.95);
    glVertex2f(108, 50.95);

    glVertex2f(100.28, 49.15);
    glVertex2f(108, 49.15);

    glVertex2f(100.28, 47.35);
    glVertex2f(108, 47.35);

    glVertex2f(100.28, 45.55);
    glVertex2f(108, 45.55);

    glVertex2f(100.28, 43.75);
    glVertex2f(108, 43.75);

    glVertex2f(100.28, 41.95);
    glVertex2f(108, 41.95);

    glVertex2f(104.78, 66);
    glVertex2f(104.78, 40.85);

    glEnd();

    //main shape(dark side)
    glBegin(GL_POLYGON);
    if (isday == true) {
        glColor3f(0.22, 0.72, 0.85);
    }
    else {
        glColor3f(0.15, 0.54, 0.64);
    }
    glVertex2f(97.62, 40.85);
    glVertex2f(100.28, 40.85);
    glVertex2f(100.28, 66);
    glVertex2f(97.62, 66);
    glEnd();

    //White part(dark side)
    glBegin(GL_POLYGON);
    if (isday == true) {
        glColor3f(1, 1, 1);
    }
    else {
        glColor3f(0.97, 0.66, 0.35);
    }
    glVertex2f(97.62, 65.1);
    glVertex2f(100.28, 65.1);
    glVertex2f(100.28, 66);
    glVertex2f(97.62, 66);
    glEnd();

    //lower white parts(darkside)
    glLineWidth(5);
    glBegin(GL_LINES);
    if (isday == true) {
        glColor3f(1, 1, 1);
    }
    else {
        glColor3f(0.97, 0.66, 0.35);
    }

    glVertex2f(100.28, 63.55);
    glVertex2f(97.62, 63.55);

    glVertex2f(100.28, 61.75);
    glVertex2f(97.62, 61.75);

    glVertex2f(100.28, 59.95);
    glVertex2f(97.62, 59.95);

    glVertex2f(100.28, 58.15);
    glVertex2f(97.62, 58.15);

    glVertex2f(100.28, 56.35);
    glVertex2f(97.62, 56.35);

    glVertex2f(100.28, 54.55);
    glVertex2f(97.62, 54.55);

    glVertex2f(100.28, 52.75);
    glVertex2f(97.62, 52.75);

    glVertex2f(100.28, 50.95);
    glVertex2f(97.62, 50.95);

    glVertex2f(100.28, 49.15);
    glVertex2f(97.62, 49.15);

    glVertex2f(100.28, 47.35);
    glVertex2f(97.62, 47.35);

    glVertex2f(100.28, 45.55);
    glVertex2f(97.62, 45.55);

    glVertex2f(100.28, 43.75);
    glVertex2f(97.62, 43.75);

    glVertex2f(100.28, 41.95);
    glVertex2f(97.62, 41.95);

    glEnd();

    //upper part(bright side)
    glBegin(GL_POLYGON);

    if (isday == true) {
        glColor3f(1, 1, 1);
    }
    else {
        glColor3f(0.82, 0.83, 0.84);
    }
    glVertex2f(100.72, 66);
    glVertex2f(105.1, 66);
    glVertex2f(105.1, 67.37);
    glVertex2f(100.72, 67.42);
    glEnd();

    //upper part(dark side)
    glBegin(GL_POLYGON);
    glColor3f(0.82, 0.83, 0.84);
    glVertex2f(99.66, 66);
    glVertex2f(100.72, 66);
    glVertex2f(100.72, 67.42);
    glVertex2f(99.64, 67.35);
    glEnd();

}

//ID32
void Building4() {

    //main shape
    glBegin(GL_POLYGON);
    glColor3f(0.53, 0.73, 0.64);
    glVertex2f(87.22, 40.85);
    glVertex2f(95.62, 40.85);
    glVertex2f(95.62, 74);
    glVertex2f(87.22, 74);
    glEnd();

    //dark stripes
    glBegin(GL_POLYGON);
    if (isday == true) {
        glColor3f(0.41, 0.57, 0.5);
    }
    else {
        glColor3f(0.97, 0.66, 0.35);
    }

    glVertex2f(87.22, 72.1);
    glVertex2f(95.62, 72.1);
    glVertex2f(95.62, 74);
    glVertex2f(87.22, 74);
    glEnd();

    glLineWidth(5);
    glBegin(GL_LINES);
    if (isday == true) {
        glColor3f(0.41, 0.57, 0.5);
    }
    else {
        glColor3f(0.97, 0.66, 0.35);
    }

    glVertex2f(87.22, 70.5);
    glVertex2f(95.62, 70.5);

    glVertex2f(87.22, 68.7);
    glVertex2f(95.62, 68.7);

    glVertex2f(87.22, 66.9);
    glVertex2f(95.62, 66.9);

    glVertex2f(87.22, 65.1);
    glVertex2f(95.62, 65.1);

    glVertex2f(87.22, 63.3);
    glVertex2f(95.62, 63.3);

    glVertex2f(87.22, 61.5);
    glVertex2f(95.62, 61.5);

    glVertex2f(87.22, 59.7);
    glVertex2f(95.62, 59.7);

    glVertex2f(87.22, 57.9);
    glVertex2f(95.62, 57.9);

    glVertex2f(87.22, 56.1);
    glVertex2f(95.62, 56.1);

    glVertex2f(87.22, 54.3);
    glVertex2f(95.62, 54.3);

    glVertex2f(87.22, 52.4);
    glVertex2f(95.62, 52.4);

    glVertex2f(87.22, 50.6);
    glVertex2f(95.62, 50.6);

    glVertex2f(87.22, 48.8);
    glVertex2f(95.62, 48.8);

    glVertex2f(87.22, 47);
    glVertex2f(95.62, 47);

    glVertex2f(87.22, 45.2);
    glVertex2f(95.62, 45.2);

    glVertex2f(87.22, 43.4);
    glVertex2f(95.62, 43.4);

    glVertex2f(87.22, 41.6);
    glVertex2f(95.62, 41.6);

    glEnd();

}

//ID33
void Building5() {

    glPushMatrix();
    glTranslatef(-1, 0, 0);

    //main shape(bright side)
    glBegin(GL_POLYGON);
    if (isday == true) {
        glColor3f(0.24, 0.77, 0.91);
    }
    else {
        glColor3f(0.15, 0.54, 0.64);
    }
    glVertex2f(81.96, 40.85);
    glVertex2f(87.22, 40.85);
    glVertex2f(87.22, 72.1);
    glVertex2f(81.96, 72.1);
    glEnd();

    //White part(bright side)
    glBegin(GL_POLYGON);
    if (isday == true) {
        glColor3f(1, 1, 1);
    }
    else {
        glColor3f(0.97, 0.66, 0.35);
    }
    glVertex2f(81.96, 70.6);
    glVertex2f(87.22, 70.6);
    glVertex2f(87.22, 72.1);
    glVertex2f(81.96, 72.1);
    glEnd();

    //lower white parts
    glLineWidth(6);
    glBegin(GL_LINES);
    if (isday == true) {
        glColor3f(1, 1, 1);
    }
    else {
        glColor3f(0.97, 0.66, 0.35);
    }

    glVertex2f(81.96, 69.2);
    glVertex2f(87.22, 69.2);

    glVertex2f(81.96, 67.4);
    glVertex2f(87.22, 67.4);

    glVertex2f(81.96, 65.6);
    glVertex2f(87.22, 65.6);

    glVertex2f(81.96, 63.8);
    glVertex2f(87.22, 63.8);

    glVertex2f(81.96, 62);
    glVertex2f(87.22, 62);

    glVertex2f(81.96, 60.2);
    glVertex2f(87.22, 60.2);

    glVertex2f(81.96, 58.4);
    glVertex2f(87.22, 58.4);

    glVertex2f(81.96, 56.6);
    glVertex2f(87.22, 56.6);

    glVertex2f(81.96, 54.9);
    glVertex2f(87.22, 54.9);

    glVertex2f(81.96, 53.1);
    glVertex2f(87.22, 53.1);

    glVertex2f(81.96, 51.2);
    glVertex2f(87.22, 51.2);

    glVertex2f(81.96, 49.4);
    glVertex2f(87.22, 49.4);

    glVertex2f(81.96, 47.6);
    glVertex2f(87.22, 47.6);

    glVertex2f(81.96, 45.8);
    glVertex2f(87.22, 45.84);

    glVertex2f(81.96, 44);
    glVertex2f(87.22, 44);

    glVertex2f(81.96, 42.2);
    glVertex2f(87.22, 42.2);

    glVertex2f(84.79, 72.1);
    glVertex2f(84.79, 40.85);

    glEnd();

    //main shape(dark side)
    glBegin(GL_POLYGON);

    if (isday == true) {
        glColor3f(0.22, 0.72, 0.85);
    }
    else {
        glColor3f(0.15, 0.54, 0.64);
    }
    glVertex2f(79.9, 40.85);
    glVertex2f(81.96, 40.85);
    glVertex2f(81.96, 72.1);
    glVertex2f(79.9, 72.1);
    glEnd();

    //White part(dark side)
    glBegin(GL_POLYGON);
    if (isday == true) {
        glColor3f(0.82, 0.83, 0.84);
    }
    else {
        glColor3f(0.97, 0.66, 0.35);
    }
    glVertex2f(79.9, 70.6);
    glVertex2f(81.96, 70.6);
    glVertex2f(81.96, 72.1);
    glVertex2f(79.9, 72.1);
    glEnd();

    //lower white parts(darkside)
    glLineWidth(6);
    glBegin(GL_LINES);
    if (isday == true) {
        glColor3f(0.82, 0.83, 0.84);
    }
    else {
        glColor3f(0.97, 0.66, 0.35);
    }

    glVertex2f(81.96, 69.2);
    glVertex2f(79.9, 69.2);

    glVertex2f(81.96, 67.4);
    glVertex2f(79.9, 67.4);

    glVertex2f(81.96, 65.6);
    glVertex2f(79.9, 65.6);

    glVertex2f(81.96, 63.8);
    glVertex2f(79.9, 63.8);

    glVertex2f(81.96, 62);
    glVertex2f(79.9, 62);

    glVertex2f(81.96, 60.2);
    glVertex2f(79.9, 60.2);

    glVertex2f(81.96, 58.4);
    glVertex2f(79.9, 58.4);

    glVertex2f(81.96, 56.6);
    glVertex2f(79.9, 56.6);

    glVertex2f(81.96, 54.9);
    glVertex2f(79.9, 54.9);

    glVertex2f(81.96, 53.1);
    glVertex2f(79.9, 53.1);

    glVertex2f(81.96, 51.2);
    glVertex2f(79.9, 51.2);

    glVertex2f(81.96, 49.4);
    glVertex2f(79.9, 49.4);

    glVertex2f(81.96, 47.6);
    glVertex2f(79.9, 47.6);

    glVertex2f(81.96, 45.8);
    glVertex2f(79.9, 45.84);

    glVertex2f(81.96, 44);
    glVertex2f(79.9, 44);

    glVertex2f(81.96, 42.2);
    glVertex2f(79.9, 42.2);

    glEnd();

    //upper part(bright side)
    glBegin(GL_POLYGON);
    if (isday == true) {
        glColor3f(1, 1, 1);
    }
    else {
        glColor3f(0.82, 0.83, 0.84);
    }
    glVertex2f(82.13, 72.1);
    glVertex2f(84.79, 72.1);
    glVertex2f(84.79, 74.07);
    glVertex2f(82.13, 74.07);
    glEnd();

    //upper part(dark side)
    glBegin(GL_POLYGON);
    glColor3f(0.82, 0.83, 0.84);
    glVertex2f(81.3, 72.1);
    glVertex2f(82.13, 72.1);
    glVertex2f(82.13, 74.1);
    glVertex2f(81.3, 74.03);
    glEnd();

    glPopMatrix();

}

//ID34
void Building6() {
    glPushMatrix();
    glTranslatef(-47, 0, 0);
    //main shape
    glBegin(GL_POLYGON);
    glColor3f(0.53, 0.73, 0.64);

    glVertex2f(112, 40.85);
    glVertex2f(125.5, 40.85);
    glVertex2f(125.5, 68.6);
    glVertex2f(112, 68.6);

    glEnd();

    //deep blue shades
    glBegin(GL_POLYGON);
    if (isday == true) {
        glColor3f(0.22, 0.52, 0.61);
    }
    else {
        glColor3f(0.97, 0.66, 0.35);
    }
    glVertex2f(112, 67);
    glVertex2f(125.5, 67);
    glVertex2f(125.5, 67.5);
    glVertex2f(112, 67.5);
    glEnd();

    glBegin(GL_POLYGON);
    if (isday == true) {
        glColor3f(0.22, 0.52, 0.61);
    }
    else {
        glColor3f(0.97, 0.66, 0.35);
    }
    glVertex2f(112, 65.9);
    glVertex2f(125.5, 65.9);
    glVertex2f(125.5, 66.4);
    glVertex2f(112, 66.4);
    glEnd();

    glBegin(GL_POLYGON);
    if (isday == true) {
        glColor3f(0.22, 0.52, 0.61);
    }
    else {
        glColor3f(0.97, 0.66, 0.35);
    }
    glVertex2f(112, 64.7);
    glVertex2f(125.5, 64.7);
    glVertex2f(125.5, 65.2);
    glVertex2f(112, 65.2);
    glEnd();

    glBegin(GL_POLYGON);
    if (isday == true) {
        glColor3f(0.22, 0.52, 0.61);
    }
    else {
        glColor3f(0.97, 0.66, 0.35);
    }
    glVertex2f(112, 63.5);
    glVertex2f(125.5, 63.5);
    glVertex2f(125.5, 64);
    glVertex2f(112, 64);
    glEnd();

    glBegin(GL_POLYGON);
    if (isday == true) {
        glColor3f(0.22, 0.52, 0.61);
    }
    else {
        glColor3f(0.97, 0.66, 0.35);
    }
    glVertex2f(112, 61.1);
    glVertex2f(125.5, 61.1);
    glVertex2f(125.5, 61.6);
    glVertex2f(112, 61.6);
    glEnd();

    glBegin(GL_POLYGON);
    if (isday == true) {
        glColor3f(0.22, 0.52, 0.61);
    }
    else {
        glColor3f(0.97, 0.66, 0.35);
    }
    glVertex2f(112, 59.9);
    glVertex2f(125.5, 59.9);
    glVertex2f(125.5, 60.4);
    glVertex2f(112, 60.4);
    glEnd();

    glBegin(GL_POLYGON);
    if (isday == true) {
        glColor3f(0.22, 0.52, 0.61);
    }
    else {
        glColor3f(0.97, 0.66, 0.35);
    }
    glVertex2f(112, 58.7);
    glVertex2f(125.5, 58.7);
    glVertex2f(125.5, 59.2);
    glVertex2f(112, 59.2);
    glEnd();

    glBegin(GL_POLYGON);
    if (isday == true) {
        glColor3f(0.22, 0.52, 0.61);
    }
    else {
        glColor3f(0.97, 0.66, 0.35);
    }
    glVertex2f(112, 56.4);
    glVertex2f(125.5, 56.4);
    glVertex2f(125.5, 56.9);
    glVertex2f(112, 56.9);
    glEnd();

    glBegin(GL_POLYGON);
    if (isday == true) {
        glColor3f(0.22, 0.52, 0.61);
    }
    else {
        glColor3f(0.97, 0.66, 0.35);
    }
    glVertex2f(112, 55.1);
    glVertex2f(125.5, 55.1);
    glVertex2f(125.5, 55.6);
    glVertex2f(112, 55.6);
    glEnd();

    glBegin(GL_POLYGON);
    if (isday == true) {
        glColor3f(0.22, 0.52, 0.61);
    }
    else {
        glColor3f(0.97, 0.66, 0.35);
    }
    glVertex2f(112, 54);
    glVertex2f(125.5, 54);
    glVertex2f(125.5, 54.5);
    glVertex2f(112, 54.5);
    glEnd();

    glBegin(GL_POLYGON);
    if (isday == true) {
        glColor3f(0.22, 0.52, 0.61);
    }
    else {
        glColor3f(0.97, 0.66, 0.35);
    }
    glVertex2f(112, 51.5);
    glVertex2f(125.5, 51.5);
    glVertex2f(125.5, 52);
    glVertex2f(112, 52);
    glEnd();

    glBegin(GL_POLYGON);
    if (isday == true) {
        glColor3f(0.22, 0.52, 0.61);
    }
    else {
        glColor3f(0.97, 0.66, 0.35);
    }
    glVertex2f(112, 50.3);
    glVertex2f(125.5, 50.3);
    glVertex2f(125.5, 50.8);
    glVertex2f(112, 50.8);
    glEnd();

    glBegin(GL_POLYGON);
    if (isday == true) {
        glColor3f(0.22, 0.52, 0.61);
    }
    else {
        glColor3f(0.97, 0.66, 0.35);
    }
    glVertex2f(112, 49.1);
    glVertex2f(125.5, 49.1);
    glVertex2f(125.5, 49.6);
    glVertex2f(112, 49.6);
    glEnd();

    glBegin(GL_POLYGON);
    if (isday == true) {
        glColor3f(0.22, 0.52, 0.61);
    }
    else {
        glColor3f(0.97, 0.66, 0.35);
    }
    glVertex2f(112, 47.9);
    glVertex2f(125.5, 47.9);
    glVertex2f(125.5, 48.4);
    glVertex2f(112, 48.4);
    glEnd();

    glBegin(GL_POLYGON);
    if (isday == true) {
        glColor3f(0.22, 0.52, 0.61);
    }
    else {
        glColor3f(0.97, 0.66, 0.35);
    }
    glVertex2f(112, 46.7);
    glVertex2f(125.5, 46.7);
    glVertex2f(125.5, 47.2);
    glVertex2f(112, 47.2);
    glEnd();

    glBegin(GL_POLYGON);
    if (isday == true) {
        glColor3f(0.22, 0.52, 0.61);
    }
    else {
        glColor3f(0.97, 0.66, 0.35);
    }
    glVertex2f(112, 45.5);
    glVertex2f(125.5, 45.5);
    glVertex2f(125.5, 46);
    glVertex2f(112, 46);
    glEnd();

    glBegin(GL_POLYGON);
    if (isday == true) {
        glColor3f(0.22, 0.52, 0.61);
    }
    else {
        glColor3f(0.97, 0.66, 0.35);
    }
    glVertex2f(112, 44.4);
    glVertex2f(125.5, 44.4);
    glVertex2f(125.5, 44.9);
    glVertex2f(112, 44.9);
    glEnd();

    glBegin(GL_POLYGON);
    if (isday == true) {
        glColor3f(0.22, 0.52, 0.61);
    }
    else {
        glColor3f(0.97, 0.66, 0.35);
    }
    glVertex2f(112, 43.2);
    glVertex2f(125.5, 43.2);
    glVertex2f(125.5, 43.7);
    glVertex2f(112, 43.7);
    glEnd();

    //Bottom
    glBegin(GL_POLYGON);
    glColor3f(0.41, 0.51, 0.51);
    glVertex2f(112, 40.85);
    glVertex2f(125.5, 40.85);
    glVertex2f(125.5, 43.2);
    glVertex2f(112, 43.2);
    glEnd();

    //White sdhades(top to bottom)
    glBegin(GL_POLYGON);
    if (isday == true) {
        glColor3f(0.88, 0.93, 0.93);
    }
    else {
        glColor3f(0.65, 0.67, 0.67);
    }
    glVertex2f(112, 67);
    glVertex2f(125.5, 67);
    glVertex2f(125.5, 68.6);
    glVertex2f(112, 68.6);
    glEnd();

    glBegin(GL_POLYGON);
    if (isday == true) {
        glColor3f(0.88, 0.93, 0.93);
    }
    else {
        glColor3f(0.65, 0.67, 0.67);
    }
    glVertex2f(112, 61.6);
    glVertex2f(125.5, 61.6);
    glVertex2f(125.5, 63.5);
    glVertex2f(112, 63.5);
    glEnd();

    glBegin(GL_POLYGON);
    if (isday == true) {
        glColor3f(0.88, 0.93, 0.93);
    }
    else {
        glColor3f(0.65, 0.67, 0.67);
    }
    glVertex2f(112, 56.9);
    glVertex2f(125.5, 56.9);
    glVertex2f(125.5, 58.7);
    glVertex2f(112, 58.7);
    glEnd();

    glBegin(GL_POLYGON);
    if (isday == true) {
        glColor3f(0.88, 0.93, 0.93);
    }
    else {
        glColor3f(0.65, 0.67, 0.67);
    }
    glVertex2f(112, 52.1);
    glVertex2f(125.5, 52.1);
    glVertex2f(125.5, 54);
    glVertex2f(112, 54);
    glEnd();

    glPopMatrix();

    //White line
    glLineWidth(7);
    glBegin(GL_LINES);
    if (isday == true) {
        glColor3f(0.88, 0.93, 0.93);
    }
    else {
        glColor3f(0.65, 0.67, 0.67);
    }

    glVertex2f(71.85, 68.6);
    glVertex2f(71.85, 43.2);

    glEnd();
}

//ID36
void Building7() {

    glPushMatrix();
    glTranslatef(-53.45, -5.55, 0);

    //main shape
    glBegin(GL_POLYGON);
    glColor3f(0.2, 0.52, 0.64);
    glVertex2f(108, 46.5);
    glVertex2f(118.6, 46.5);
    glVertex2f(118.6, 58.5);
    glVertex2f(108, 58.5);
    glEnd();

    //white
    glBegin(GL_POLYGON);
    glColor3f(0.92, 0.9, 0.77);
    glVertex2f(108, 54.9);
    glVertex2f(118.6, 54.9);
    glVertex2f(118.6, 57);
    glVertex2f(108, 57);
    glEnd();

    //middle glass part
    glBegin(GL_POLYGON);
    if (isday == true) {
        glColor3f(0.43, 0.78, 0.82);
    }
    else {
        glColor3f(0.96, 0.69, 0.36);
    }
    glVertex2f(108, 47.4);
    glVertex2f(118.6, 47.4);
    glVertex2f(118.6, 54.9);
    glVertex2f(108, 54.9);
    glEnd();

    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3f(0.88, 0.93, 0.93);

    glVertex2f(108, 52.13);
    glVertex2f(118.6, 52.13);

    glVertex2f(109.2, 54.9);
    glVertex2f(109.2, 47.4);

    glVertex2f(112.9, 54.9);
    glVertex2f(112.9, 47.4);

    glVertex2f(116.2, 54.9);
    glVertex2f(116.2, 47.4);

    glEnd();

    glPopMatrix();

}

//ID35
void Building8() {
    glPushMatrix();
    glTranslatef(-70, 0, 0);
    //main shape
    glBegin(GL_POLYGON);
    if (isday == true) {
        glColor3f(0.7, 0.91, 0.94);
    }
    else {
        glColor3f(0.43, 0.56, 0.58);
    }
    glVertex2f(112, 40.85);
    glVertex2f(125.5, 40.85);
    glVertex2f(125.5, 68.6);
    glVertex2f(112, 68.6);

    glEnd();

    //deep blue shades
    glBegin(GL_POLYGON);
    if (isday == true) {
        glColor3f(0.22, 0.52, 0.61);
    }
    else {
        glColor3f(0.97, 0.66, 0.35);
    }
    glVertex2f(112, 67);
    glVertex2f(125.5, 67);
    glVertex2f(125.5, 67.5);
    glVertex2f(112, 67.5);
    glEnd();

    glBegin(GL_POLYGON);
    if (isday == true) {
        glColor3f(0.22, 0.52, 0.61);
    }
    else {
        glColor3f(0.97, 0.66, 0.35);
    }
    glVertex2f(112, 65.9);
    glVertex2f(125.5, 65.9);
    glVertex2f(125.5, 66.4);
    glVertex2f(112, 66.4);
    glEnd();

    glBegin(GL_POLYGON);
    if (isday == true) {
        glColor3f(0.22, 0.52, 0.61);
    }
    else {
        glColor3f(0.97, 0.66, 0.35);
    }
    glVertex2f(112, 64.7);
    glVertex2f(125.5, 64.7);
    glVertex2f(125.5, 65.2);
    glVertex2f(112, 65.2);
    glEnd();

    glBegin(GL_POLYGON);
    if (isday == true) {
        glColor3f(0.22, 0.52, 0.61);
    }
    else {
        glColor3f(0.97, 0.66, 0.35);
    }
    glVertex2f(112, 63.5);
    glVertex2f(125.5, 63.5);
    glVertex2f(125.5, 64);
    glVertex2f(112, 64);
    glEnd();

    glBegin(GL_POLYGON);
    if (isday == true) {
        glColor3f(0.22, 0.52, 0.61);
    }
    else {
        glColor3f(0.97, 0.66, 0.35);
    }
    glVertex2f(112, 61.1);
    glVertex2f(125.5, 61.1);
    glVertex2f(125.5, 61.6);
    glVertex2f(112, 61.6);
    glEnd();

    glBegin(GL_POLYGON);
    if (isday == true) {
        glColor3f(0.22, 0.52, 0.61);
    }
    else {
        glColor3f(0.97, 0.66, 0.35);
    }
    glVertex2f(112, 59.9);
    glVertex2f(125.5, 59.9);
    glVertex2f(125.5, 60.4);
    glVertex2f(112, 60.4);
    glEnd();

    glBegin(GL_POLYGON);
    if (isday == true) {
        glColor3f(0.22, 0.52, 0.61);
    }
    else {
        glColor3f(0.97, 0.66, 0.35);
    }
    glVertex2f(112, 58.7);
    glVertex2f(125.5, 58.7);
    glVertex2f(125.5, 59.2);
    glVertex2f(112, 59.2);
    glEnd();

    glBegin(GL_POLYGON);
    if (isday == true) {
        glColor3f(0.22, 0.52, 0.61);
    }
    else {
        glColor3f(0.97, 0.66, 0.35);
    }
    glVertex2f(112, 56.4);
    glVertex2f(125.5, 56.4);
    glVertex2f(125.5, 56.9);
    glVertex2f(112, 56.9);
    glEnd();

    glBegin(GL_POLYGON);
    if (isday == true) {
        glColor3f(0.22, 0.52, 0.61);
    }
    else {
        glColor3f(0.97, 0.66, 0.35);
    }
    glVertex2f(112, 55.1);
    glVertex2f(125.5, 55.1);
    glVertex2f(125.5, 55.6);
    glVertex2f(112, 55.6);
    glEnd();

    glBegin(GL_POLYGON);
    if (isday == true) {
        glColor3f(0.22, 0.52, 0.61);
    }
    else {
        glColor3f(0.97, 0.66, 0.35);
    }
    glVertex2f(112, 54);
    glVertex2f(125.5, 54);
    glVertex2f(125.5, 54.5);
    glVertex2f(112, 54.5);
    glEnd();

    glBegin(GL_POLYGON);
    if (isday == true) {
        glColor3f(0.22, 0.52, 0.61);
    }
    else {
        glColor3f(0.97, 0.66, 0.35);
    }
    glVertex2f(112, 51.5);
    glVertex2f(125.5, 51.5);
    glVertex2f(125.5, 52);
    glVertex2f(112, 52);
    glEnd();

    glBegin(GL_POLYGON);
    if (isday == true) {
        glColor3f(0.22, 0.52, 0.61);
    }
    else {
        glColor3f(0.97, 0.66, 0.35);
    }
    glVertex2f(112, 50.3);
    glVertex2f(125.5, 50.3);
    glVertex2f(125.5, 50.8);
    glVertex2f(112, 50.8);
    glEnd();

    glBegin(GL_POLYGON);
    if (isday == true) {
        glColor3f(0.22, 0.52, 0.61);
    }
    else {
        glColor3f(0.97, 0.66, 0.35);
    }
    glVertex2f(112, 49.1);
    glVertex2f(125.5, 49.1);
    glVertex2f(125.5, 49.6);
    glVertex2f(112, 49.6);
    glEnd();

    glBegin(GL_POLYGON);
    if (isday == true) {
        glColor3f(0.22, 0.52, 0.61);
    }
    else {
        glColor3f(0.97, 0.66, 0.35);
    }
    glVertex2f(112, 47.9);
    glVertex2f(125.5, 47.9);
    glVertex2f(125.5, 48.4);
    glVertex2f(112, 48.4);
    glEnd();

    glBegin(GL_POLYGON);
    if (isday == true) {
        glColor3f(0.22, 0.52, 0.61);
    }
    else {
        glColor3f(0.97, 0.66, 0.35);
    }
    glVertex2f(112, 46.7);
    glVertex2f(125.5, 46.7);
    glVertex2f(125.5, 47.2);
    glVertex2f(112, 47.2);
    glEnd();

    glBegin(GL_POLYGON);
    if (isday == true) {
        glColor3f(0.22, 0.52, 0.61);
    }
    else {
        glColor3f(0.97, 0.66, 0.35);
    }
    glVertex2f(112, 45.5);
    glVertex2f(125.5, 45.5);
    glVertex2f(125.5, 46);
    glVertex2f(112, 46);
    glEnd();

    glBegin(GL_POLYGON);
    if (isday == true) {
        glColor3f(0.22, 0.52, 0.61);
    }
    else {
        glColor3f(0.97, 0.66, 0.35);
    }
    glVertex2f(112, 44.4);
    glVertex2f(125.5, 44.4);
    glVertex2f(125.5, 44.9);
    glVertex2f(112, 44.9);
    glEnd();

    glBegin(GL_POLYGON);
    if (isday == true) {
        glColor3f(0.22, 0.52, 0.61);
    }
    else {
        glColor3f(0.97, 0.66, 0.35);
    }
    glVertex2f(112, 43.2);
    glVertex2f(125.5, 43.2);
    glVertex2f(125.5, 43.7);
    glVertex2f(112, 43.7);
    glEnd();

    //Bottom
    glBegin(GL_POLYGON);
    glColor3f(0.41, 0.51, 0.51);
    glVertex2f(112, 40.85);
    glVertex2f(125.5, 40.85);
    glVertex2f(125.5, 43.2);
    glVertex2f(112, 43.2);
    glEnd();

    //White sdhades(top to bottom)
    glBegin(GL_POLYGON);
    if (isday == true) {
        glColor3f(0.88, 0.93, 0.93);
    }
    else {
        glColor3f(0.65, 0.67, 0.67);
    }
    glVertex2f(112, 67);
    glVertex2f(125.5, 67);
    glVertex2f(125.5, 68.6);
    glVertex2f(112, 68.6);
    glEnd();

    glBegin(GL_POLYGON);
    if (isday == true) {
        glColor3f(0.88, 0.93, 0.93);
    }
    else {
        glColor3f(0.65, 0.67, 0.67);
    }
    glVertex2f(112, 61.6);
    glVertex2f(125.5, 61.6);
    glVertex2f(125.5, 63.5);
    glVertex2f(112, 63.5);
    glEnd();

    glBegin(GL_POLYGON);
    if (isday == true) {
        glColor3f(0.88, 0.93, 0.93);
    }
    else {
        glColor3f(0.65, 0.67, 0.67);
    }
    glVertex2f(112, 56.9);
    glVertex2f(125.5, 56.9);
    glVertex2f(125.5, 58.7);
    glVertex2f(112, 58.7);
    glEnd();

    glBegin(GL_POLYGON);
    if (isday == true) {
        glColor3f(0.88, 0.93, 0.93);
    }
    else {
        glColor3f(0.65, 0.67, 0.67);
    }
    glVertex2f(112, 52.1);
    glVertex2f(125.5, 52.1);
    glVertex2f(125.5, 54);
    glVertex2f(112, 54);
    glEnd();

    //White lines
    glLineWidth(7);
    glBegin(GL_LINES);
    if (isday == true) {
        glColor3f(0.88, 0.93, 0.93);
    }
    else {
        glColor3f(0.65, 0.67, 0.67);
    }

    glVertex2f(114.85, 61.6);
    glVertex2f(114.85, 43.2);

    glVertex2f(122.9, 61.6);
    glVertex2f(122.9, 43.2);

    glEnd();

    glPopMatrix();
}

//ID37
void Building9() {

    //main shape
    glBegin(GL_POLYGON);
    glColor3f(0.45, 0.63, 0.65);
    glVertex2f(11.96, 40.85);
    glVertex2f(18.59, 40.85);
    glVertex2f(18.59, 61.5);
    glVertex2f(11.96, 61.5);
    glEnd();

    //front
    glBegin(GL_POLYGON);
    if (isday == true) {
        glColor3f(0.7, 0.91, 0.94);
    }
    else {
        glColor3f(0.97, 0.66, 0.35);
    }
    glVertex2f(12.48, 41.65);
    glVertex2f(18.21, 41.65);
    glVertex2f(18.21, 60.96);
    glVertex2f(12.48, 60.96);
    glEnd();

    //Lines
    glLineWidth(4);
    glBegin(GL_LINES);
    glColor3f(0.45, 0.63, 0.65);

    //vertical
    glVertex2f(15.295, 41.65);
    glVertex2f(15.295, 60.96);

    //horizontal
    glVertex2f(11.96, 58.31);
    glVertex2f(18.59, 58.31);

    glVertex2f(11.96, 55.41);
    glVertex2f(18.59, 55.41);

    glVertex2f(11.96, 52.51);
    glVertex2f(18.59, 52.51);

    glVertex2f(11.96, 49.61);
    glVertex2f(18.59, 49.61);

    glVertex2f(11.96, 46.71);
    glVertex2f(18.59, 46.71);

    glEnd();

    //upperpart
    glBegin(GL_POLYGON);
    glColor3f(0.45, 0.63, 0.65);
    glVertex2f(13.76, 61.5);
    glVertex2f(16.79, 61.5);
    glVertex2f(16.79, 62.6);
    glVertex2f(13.76, 62.6);
    glEnd();

}

//ID38
void FireStation() {

    //circle
    glBegin(GL_POLYGON);
    if (isday == true) {
        glColor3f(0.86, 0.35, 0.35);
    }
    else {
        glColor3f(0.47, 0.19, 0.19);
    }

    glVertex2f(29.56, 45.7);
    glVertex2f(41.62, 45.7);
    glVertex2f(41.48, 46.19);
    glVertex2f(41.27, 46.76);
    glVertex2f(41.02, 47.32);
    glVertex2f(40.229, 48.77);
    glVertex2f(39.58, 49.68);
    glVertex2f(38.98, 50.398);
    glVertex2f(38.39, 51.05);
    glVertex2f(37.72, 51.66);
    glVertex2f(37.07, 52.17);
    glVertex2f(36.33, 52.68);
    glVertex2f(35.638, 53.09);
    glVertex2f(35, 53.41);
    glVertex2f(34.47, 53.65);
    glVertex2f(33.76, 53.94);
    glVertex2f(33.248, 54.124);
    glVertex2f(32.8, 54.24);
    glVertex2f(32.26, 54.36);
    glVertex2f(31.65, 54.47);
    glVertex2f(30.99, 54.56);
    glVertex2f(30.44, 54.6);
    glVertex2f(29.56, 54.63);
    glEnd();

    glPushMatrix();
    glRotatef(180, 0, 1, 0); // Flip horizontally
    glTranslatef(-59.5, 0, 0); // Translate to the left side
    //circle
    glBegin(GL_POLYGON);
    if (isday == true) {
        glColor3f(0.86, 0.35, 0.35);
    }
    else {
        glColor3f(0.47, 0.19, 0.19);
    }

    glVertex2f(29.56, 45.7);
    glVertex2f(41.62, 45.7);
    glVertex2f(41.48, 46.19);
    glVertex2f(41.27, 46.76);
    glVertex2f(41.02, 47.32);
    glVertex2f(40.229, 48.77);
    glVertex2f(39.58, 49.68);
    glVertex2f(38.98, 50.398);
    glVertex2f(38.39, 51.05);
    glVertex2f(37.72, 51.66);
    glVertex2f(37.07, 52.17);
    glVertex2f(36.33, 52.68);
    glVertex2f(35.638, 53.09);
    glVertex2f(35, 53.41);
    glVertex2f(34.47, 53.65);
    glVertex2f(33.76, 53.94);
    glVertex2f(33.248, 54.124);
    glVertex2f(32.8, 54.24);
    glVertex2f(32.26, 54.36);
    glVertex2f(31.65, 54.47);
    glVertex2f(30.99, 54.56);
    glVertex2f(30.44, 54.6);
    glVertex2f(29.56, 54.63);
    glEnd();

    glPopMatrix();

    //bottom(white)
    glBegin(GL_POLYGON);
    if (isday == true) {
        glColor3f(0.91, 0.92, 0.91);
    }
    else {
        glColor3f(0.66, 0.75, 0.76);
    }
    glVertex2f(15.65, 40.85);
    glVertex2f(43.55, 40.85);
    glVertex2f(43.55, 45.7);
    glVertex2f(15.65, 45.7);
    glEnd();

    //bottom shade(white)
    glBegin(GL_POLYGON);
    glColor3f(0.66, 0.75, 0.76);
    glVertex2f(15.65, 40.85);
    glVertex2f(29.24, 40.85);
    glVertex2f(26.19, 41.3);
    glVertex2f(24.84, 41.69);
    glVertex2f(23.02, 42.54);
    glVertex2f(21.92, 43.52);
    glVertex2f(21.13, 44.58);
    glVertex2f(20.59, 45.7);
    glVertex2f(15.65, 45.7);
    glEnd();

    //White Lines(/)
    glLineWidth(1);
    glBegin(GL_LINES);
    glColor3f(0.88, 0.93, 0.93);

    glVertex2f(39.58, 49.68);
    glVertex2f(37.62, 45.7);

    glVertex2f(37.72, 51.66);
    glVertex2f(34.29, 45.7);

    glVertex2f(35.638, 53.09);
    glVertex2f(31, 45.7);

    glVertex2f(32.8, 54.24);
    glVertex2f(27.48, 45.7);

    glVertex2f(29.56, 54.63);
    glVertex2f(24.04, 45.7);

    glVertex2f(25.8, 54);
    glVertex2f(20.9, 45.7);

    glEnd();

    //White Lines(\)
    glLineWidth(1);
    glBegin(GL_LINES);
    glColor3f(0.88, 0.93, 0.93);

    glVertex2f(34.8, 53.51);
    glVertex2f(40.69, 45.7);

    glVertex2f(30.44, 54.6);
    glVertex2f(37.62, 45.7);

    glVertex2f(27.46, 54.47);
    glVertex2f(34.29, 45.7);

    glVertex2f(24.996, 53.55);
    glVertex2f(31, 45.7);

    glVertex2f(22.568, 52.11);
    glVertex2f(27.48, 45.7);

    glVertex2f(20.49, 50.35);
    glVertex2f(24.04, 45.7);

    glVertex2f(18.94, 48.54);
    glVertex2f(20.9, 45.7);

    glEnd();

}

//ID39
void Text() {

    glLineWidth(1);
    glBegin(GL_LINES);
    glColor3f(1, 0, 0);

    //F
    glVertex2f(18.21, 44.9);
    glVertex2f(18.21, 41.65);

    glVertex2f(18.21, 44.9);
    glVertex2f(19.77, 44.9);

    glVertex2f(18.23, 43.275);
    glVertex2f(19.49, 43.275);

    //I
    glVertex2f(21, 44.9);
    glVertex2f(21.04, 41.65);

    glVertex2f(20.21, 44.9);
    glVertex2f(21.78, 44.9);

    glVertex2f(20.21, 41.65);
    glVertex2f(21.78, 41.65);

    //R
    glVertex2f(22.21, 44.9);
    glVertex2f(22.21, 41.6);

    glVertex2f(22.21, 44.9);
    glVertex2f(23.14, 44.77);

    glVertex2f(23.14, 44.77);
    glVertex2f(23.66, 44.45);

    glVertex2f(23.66, 44.45);
    glVertex2f(23.66, 43.71);

    glVertex2f(23.66, 43.71);
    glVertex2f(23.14, 43.28);

    glVertex2f(23.14, 43.28);
    glVertex2f(22.21, 43.23);

    glVertex2f(22.21, 43.23);
    glVertex2f(23.66, 41.65);

    //E
    glVertex2f(24.21, 44.9);
    glVertex2f(24.21, 41.65);

    glVertex2f(24.21, 44.9);
    glVertex2f(25.78, 44.9);

    glVertex2f(24.21, 43.275);
    glVertex2f(25.45, 43.275);

    glVertex2f(24.21, 41.65);
    glVertex2f(25.78, 41.65);

    //S
    glVertex2f(27.78, 42.3);
    glVertex2f(28.18, 41.65);

    glVertex2f(28.18, 41.65);
    glVertex2f(28.88, 41.65);

    glVertex2f(28.88, 41.65);
    glVertex2f(29.33, 42.3);

    glVertex2f(29.33, 42.3);
    glVertex2f(29.33, 42.99);

    glVertex2f(29.33, 42.99);
    glVertex2f(27.78, 43.55);

    glVertex2f(27.78, 43.55);
    glVertex2f(27.78, 44.22);

    glVertex2f(27.78, 44.22);
    glVertex2f(28.18, 44.9);

    glVertex2f(28.18, 44.9);
    glVertex2f(28.88, 44.9);

    glVertex2f(28.88, 44.9);
    glVertex2f(29.33, 44.22);

    //T
    glVertex2f(29.71, 44.9);
    glVertex2f(31.28, 44.9);

    glVertex2f(30.48, 44.9);
    glVertex2f(30.48, 41.65);

    //A
    glVertex2f(31.71, 41.65);
    glVertex2f(32.51, 44.9);

    glVertex2f(32.51, 44.9);
    glVertex2f(33.28, 41.65);

    glVertex2f(32.12, 43.275);
    glVertex2f(32.89, 43.275);

    //T
    glVertex2f(33.71, 44.9);
    glVertex2f(35.28, 44.9);

    glVertex2f(34.49, 44.9);
    glVertex2f(34.49, 41.65);

    //I
    glVertex2f(35.71, 44.9);
    glVertex2f(37.28, 44.9);

    glVertex2f(35.71, 41.65);
    glVertex2f(37.28, 41.65);

    glVertex2f(36.51, 44.9);
    glVertex2f(36.51, 41.65);

    //O
    glVertex2f(38.14, 41.65);
    glVertex2f(38.85, 41.65);

    glVertex2f(38.85, 41.65);
    glVertex2f(39.28, 42.53);

    glVertex2f(39.28, 42.53);
    glVertex2f(39.28, 44.03);

    glVertex2f(39.28, 44.03);
    glVertex2f(38.85, 44.9);

    glVertex2f(38.85, 44.9);
    glVertex2f(38.14, 44.9);

    glVertex2f(38.14, 44.9);
    glVertex2f(37.71, 44.03);

    glVertex2f(37.71, 44.03);
    glVertex2f(37.71, 42.53);

    glVertex2f(37.71, 42.53);
    glVertex2f(38.14, 41.65);

    //N
    glVertex2f(39.71, 41.65);
    glVertex2f(39.71, 44.9);

    glVertex2f(39.71, 44.9);
    glVertex2f(41.28, 41.65);

    glVertex2f(41.28, 41.65);
    glVertex2f(41.28, 44.9);

    glEnd();

}

//ID53
void GlassWall() {

    //Bottom part
    glBegin(GL_POLYGON);
    glColor3f(0.52, 0.52, 0.52);
    glVertex2f(0, 39.826);
    glVertex2f(15.52, 39.826);
    glVertex2f(15.52, 42.18);
    glVertex2f(0, 42.18);
    glEnd();

    //Border(white)
    glBegin(GL_POLYGON);
    if (isday == true) {
        glColor3f(1, 1, 1);
    }
    else {
        glColor3f(0.79, 0.78, 0.78);
    }
    glVertex2f(0, 42.18);
    glVertex2f(15.52, 42.18);
    glVertex2f(15.52, 47.28);
    glVertex2f(0, 47.28);
    glEnd();

    //Glass
    glBegin(GL_POLYGON);
    if (isday == true) {
        glColor3f(0.59, 0.87, 0.91);
    }
    else {
        glColor3f(0.36, 0.54, 0.57);
    }
    glVertex2f(0.5, 42.18);
    glVertex2f(15.03, 42.18);
    glVertex2f(15.03, 46.74);
    glVertex2f(0.5, 46.74);
    glEnd();

    //Lines
    glLineWidth(3.5);
    glBegin(GL_LINES);
    if (isday == true) {
        glColor3f(1, 1, 1);
    }
    else {
        glColor3f(0.79, 0.78, 0.78);
    }

    glVertex2f(5.482, 46.74);
    glVertex2f(5.482, 42.18);

    glVertex2f(10.49, 46.74);
    glVertex2f(10.49, 42.18);

    glEnd();

}

//ID50
void Car1() {

    glPushMatrix();
    glTranslatef(move_car1, 0, 0);
    glTranslatef(-30, 0, 0);

    //body
    glBegin(GL_POLYGON);
    glColor3f(0, 0, 0.8);

    glVertex2f(45.46, 41.03);
    glVertex2f(46.68, 41.03);
    glVertex2f(46.73, 41.28);
    glVertex2f(46.945, 41.58);
    glVertex2f(47.25, 41.76);
    glVertex2f(47.59, 41.76);
    glVertex2f(47.93, 41.58);
    glVertex2f(48.11, 41.28);
    glVertex2f(48.17, 41.03);
    glVertex2f(52.18, 41.03);
    glVertex2f(52.23, 41.28);
    glVertex2f(52.445, 41.58);
    glVertex2f(52.75, 41.76);
    glVertex2f(53.09, 41.76);
    glVertex2f(53.43, 41.58);
    glVertex2f(53.61, 41.28);
    glVertex2f(53.67, 41.03);
    glVertex2f(54.52, 41.03);
    glVertex2f(54.52, 41.9);
    glVertex2f(53.7, 42.49);
    glVertex2f(52.09, 42.49);
    glVertex2f(50.74, 43.61);
    glVertex2f(47.56, 43.61);
    glVertex2f(46.68, 42.49);
    glVertex2f(46, 42.49);
    glVertex2f(45.46, 41.67);

    glEnd();

    //window(front)
    glBegin(GL_POLYGON);
    glColor3f(0.72, 0.73, 0.74);

    glVertex2f(49.43, 42.49);
    glVertex2f(51.68, 42.49);
    glVertex2f(50.74, 43.31);
    glVertex2f(49.43, 43.31);
    glEnd();

    //window(back)
    glBegin(GL_POLYGON);
    glColor3f(0.72, 0.73, 0.74);

    glVertex2f(47.12, 42.49);
    glVertex2f(49.21, 42.49);
    glVertex2f(49.21, 43.31);
    glVertex2f(47.76, 43.31);
    glEnd();

    //frontwheel
    glBegin(GL_POLYGON);
    for (int i = 0;i < 360;i++)
    {
        glColor3f(0, 0, 0);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = 0.745;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 51.5, y + 41.03);
    }
    glEnd();

    //backwheel
    glBegin(GL_POLYGON);
    for (int i = 0;i < 360;i++)
    {
        glColor3f(0, 0, 0);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = 0.745;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 47.425, y + 41.03);
    }
    glEnd();

    glPopMatrix();

}

//ID51
void Car2() {

    glPushMatrix();
    glTranslatef(75, 0, 0);
    glTranslatef(move_car2, 0, 0);

    glPushMatrix();
    glTranslatef(62.93, 41.24, 0);
    glRotatef(rotate_car3_wheel, 0, 0, 1);
    glTranslatef(-62.93, -41.24, 0);

    //wheel 1
    glBegin(GL_POLYGON);
    for (int i = 0;i < 360;i++)
    {
        glColor3f(0, 0, 0);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = 0.68;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 62.93, y + 41.24);
    }
    glEnd();

    glBegin(GL_POLYGON);
    for (int i = 0;i < 360;i++)
    {
        glColor3f(1, 1, 1);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = 0.39;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 62.93, y + 41.24);
    }
    glEnd();

    //tire 1 dot
    glBegin(GL_POLYGON);
    for (int i = 0;i < 360;i++)
    {
        glColor3f(1, 0, 0);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = 0.1;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 62.93, y + 40.6);
    }
    glEnd();

    glPopMatrix();

    glPushMatrix();
    glTranslatef(58.69, 41.24, 0);
    glRotatef(rotate_car3_wheel, 0, 0, 1);
    glTranslatef(-58.69, -41.24, 0);


    //tire 2
    glBegin(GL_POLYGON);
    for (int i = 0;i < 360;i++)
    {
        glColor3f(0, 0, 0);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = 0.68;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 58.69, y + 41.24);
    }
    glEnd();

    glBegin(GL_POLYGON);
    for (int i = 0;i < 360;i++)
    {
        glColor3f(1, 1, 1);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = 0.39;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 58.69, y + 41.24);
    }
    glEnd();

    //tire 2 dot
    glBegin(GL_POLYGON);
    for (int i = 0;i < 360;i++)
    {
        glColor3f(1, 0, 0);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = 0.08;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 58.69, y + 40.6);
    }
    glEnd();

    glPopMatrix();

    //main part
    glBegin(GL_POLYGON);
    glColor3f(0.79, 0.79, 0.8);

    glVertex2f(57.41, 41.08);
    glVertex2f(62.14, 41.08);
    glVertex2f(64.197, 42.92);
    glVertex2f(64.197, 42.92);
    glVertex2f(64.098, 43.35);
    glVertex2f(63.92, 43.48);
    glVertex2f(63.73, 43.58);
    glVertex2f(63.105, 43.587);
    glVertex2f(62.35, 43.55);
    glVertex2f(61.58, 43.47);
    glVertex2f(60.77, 43.33);
    glVertex2f(59.94, 43.09);
    glVertex2f(59.12, 42.75);
    glVertex2f(58.44, 42.34);
    glVertex2f(57.75, 41.76);
    glVertex2f(57.5, 41.5);
    glVertex2f(57.41, 41.24);
    glEnd();

    glLineWidth(0.1);
    glBegin(GL_LINES);
    glColor3f(0, 0, 0);

    glVertex2f(57.41, 41.15);
    glVertex2f(62.14, 41.15);

    glVertex2f(62.14, 41.08);
    glVertex2f(64.197, 42.92);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0, 0, 0);

    glVertex2f(57.7546597858454, 41.7458648360718);
    glVertex2f(58.6018110980078, 41.7543554130296);
    glVertex2f(59.7607282957288, 41.7861065691315);
    glVertex2f(60.9990233837046, 41.8892978264628);
    glVertex2f(61.9674336448139, 42.0639291850235);
    glVertex2f(62.6659590790566, 42.286187277737);
    glVertex2f(62.8644186480777, 42.4315315709955);
    glVertex2f(62.9457532316731, 42.5472373566851);
    glVertex2f(62.9359501644581, 42.6648741632653);
    glVertex2f(62.847722559523, 42.7596371463437);
    glVertex2f(62.6843381059394, 42.8772739529238);
    glVertex2f(62.4490644927791, 42.9753046250739);
    glVertex2f(61.9915880227452, 43.1092798770124);
    glVertex2f(61.3498657731793, 43.2476098708809);
    glVertex2f(60.77, 43.33);
    glVertex2f(59.94, 43.09);
    glVertex2f(59.12, 42.75);
    glVertex2f(58.44, 42.34);

    glEnd();

    //front light
    glBegin(GL_POLYGON);
    for (int i = 0;i < 360;i++)
    {
        glColor3f(1, 0, 0);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = 0.14;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 57.7189539934904, y + 41.482564831704);
    }
    glEnd();

    //front light
    glBegin(GL_POLYGON);
    for (int i = 0;i < 360;i++)
    {
        glColor3f(1, 0, 0);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = 0.14;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 58.2605778922254, y + 41.482564831704);
    }
    glEnd();

    //backlight
    glBegin(GL_POLYGON);
    for (int i = 0;i < 360;i++)
    {
        glColor3f(1, 0, 0);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = 0.38;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 63.2334117992082, y + 43.1582682364411);
    }
    glEnd();

    //backlight
    glBegin(GL_POLYGON);
    for (int i = 0;i < 360;i++)
    {
        glColor3f(0, 0, 0);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = 0.3;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 63.2334117992082, y + 43.1582682364411);
    }
    glEnd();

    glPopMatrix();

}
//ID52
void Car3() {

    glPushMatrix();
    glTranslatef(-80, 0, 0);
    glTranslatef(move_car3, 0, 0);


    //lighter shade
    glBegin(GL_POLYGON);
    glColor3f(0.74, 0.75, 0.74);
    glVertex2f(88.6895638424531, 42.0985768740231);
    glVertex2f(88.6573660243277, 42.5654452368411);
    glVertex2f(88.6493165697964, 42.8552255999695);
    glVertex2f(88.6582382296628, 43.3014872553108);
    glVertex2f(88.7187531578403, 43.8791297515509);
    glVertex2f(88.795772157339, 44.2532220348301);
    glVertex2f(88.8892952281588, 44.4072600338275);
    glVertex2f(89.1863685119394, 44.4237641051486);
    glVertex2f(89.6704879373596, 44.4292654622557);
    glVertex2f(90.1986182196363, 44.4127613909345);
    glVertex2f(90.8202715727327, 44.3082356059006);
    glVertex2f(91.4364235687221, 44.1486962497962);
    glVertex2f(92.107589135782, 43.8846311086579);
    glVertex2f(92.7292424888785, 43.5655523964491);
    glVertex2f(93.0938251798128, 43.2949250563835);
    glVertex2f(93.35820043212, 43.0513756652165);
    glVertex2f(93.3886404343113, 42.9362706977223);
    glVertex2f(88.6895638424531, 42.0985768740231);

    glEnd();


    //black(near wheel)
    glBegin(GL_POLYGON);
    glColor3f(0.19, 0.19, 0.2);

    glVertex2f(90, 41);
    glVertex2f(89.6115512950685, 41.8211202740436);
    glVertex2f(92.573180158949, 41.8767139899185);
    glVertex2f(92.5, 41);

    glEnd();

    //dark black color
    glBegin(GL_POLYGON);
    glColor3f(0.35, 0.35, 0.36);

    glVertex2f(89, 41.5);
    glVertex2f(88.7659029995392, 42.183516560464);
    glVertex2f(88.7682171961703, 42.4056794370519);
    glVertex2f(88.7588952059074, 42.6096415833109);
    glVertex2f(88.7648545489194, 43.2055758845104);
    glVertex2f(88.8035902784973, 43.5601567937242);
    glVertex2f(88.9325622308213, 44.1545888548211);
    glVertex2f(89.0244036081464, 44.2590839280546);
    glVertex2f(89.489743283916, 44.262125363844);
    glVertex2f(90.1254033638889, 44.2469181848973);
    glVertex2f(90.8888037470141, 44.1374264964809);
    glVertex2f(91.6704527448755, 43.9397331701735);
    glVertex2f(92.2482771775876, 43.6965128688714);
    glVertex2f(92.8757786521869, 43.3405264553969);
    glVertex2f(93.3886404343113, 42.9362706977223);
    glVertex2f(93.5274147988861, 42.7552606569725);
    glVertex2f(93.4862355866683, 42.5677581571613);
    glVertex2f(93.2377987336865, 42.369105903373);
    glVertex2f(92.2241425054876, 41.3916516833241);
    glVertex2f(90.2468949077627, 41.3916516833241);
    glVertex2f(89, 41.5);

    glEnd();


    //yellow part
    glBegin(GL_POLYGON);
    glColor3f(0.97, 0.93, 0.19);

    glVertex2f(90.6923675170404, 41.6558798345529);
    glVertex2f(90.2560261094568, 41.8503363314108);
    glVertex2f(89.9003130054484, 42.1443924973911);
    glVertex2f(89.5114000117326, 42.4099916150506);
    glVertex2f(89.2790007837805, 42.637648001616);
    glVertex2f(89.0892871283093, 42.9743897400772);
    glVertex2f(88.9754589350267, 43.3253600026988);
    glVertex2f(88.9659732522531, 43.6763302653203);
    glVertex2f(89.075058604149, 43.9371865415931);
    glVertex2f(89.1888867974317, 44.0652432590361);
    glVertex2f(89.3577612987859, 44.1596767818808);
    glVertex2f(89.4899356913633, 44.1917190588693);
    glVertex2f(89.7198676857658, 44.2079193652082);
    glVertex2f(90.0274448878447, 44.1781010911494);
    glVertex2f(90.3358518038587, 44.1428545864621);
    glVertex2f(90.6706935983881, 44.0899848294311);
    glVertex2f(91.2037969817836, 43.9666220630255);
    glVertex2f(91.7585689549925, 43.8089740602422);
    glVertex2f(92.1831915257934, 43.6397024026694);
    glVertex2f(92.5719475993819, 43.4469046751174);
    glVertex2f(92.8868464817966, 43.2502032553559);
    glVertex2f(93.3083982169146, 42.9004050070665);
    glVertex2f(93.4, 42.8);
    glVertex2f(93.3453944702523, 42.641290824697);
    glVertex2f(93.073273893203, 42.3341061528622);
    glVertex2f(92.4329903059879, 41.9451931591464);
    glVertex2f(92.1579055055548, 41.7791937106092);
    glVertex2f(91.7168212565844, 41.6606226759397);
    glVertex2f(91.1761373384917, 41.6416513103926);
    glVertex2f(90.6923675170404, 41.6558798345529);

    glEnd();

    //above yellow lines
    glBegin(GL_POLYGON);
    glColor3f(0.35, 0.35, 0.36);

    glVertex2f(90.8668323864037, 41.8171059641009);
    glVertex2f(90.4548888628708, 41.943112218358);
    glVertex2f(90.0671773113105, 42.1951247268722);
    glVertex2f(89.7618544644567, 42.4325980522029);
    glVertex2f(89.4371460400248, 42.7669992654237);
    glVertex2f(89.2675222362172, 43.077168506672);
    glVertex2f(89.2142118978776, 43.5278831853609);
    glVertex2f(89.2917542081897, 43.7992812714531);
    glVertex2f(89.6406946045941, 44.0512937799674);
    glVertex2f(89.9993277897874, 44.0803721463344);
    glVertex2f(90.4839672292378, 44.0173690192058);
    glVertex2f(90.9976850350553, 43.8962091593432);
    glVertex2f(91.6567946727079, 43.7217389611411);
    glVertex2f(92.0493526186628, 43.5763471293059);
    glVertex2f(92.3401362823331, 43.4600336638378);
    glVertex2f(92.6503055235814, 43.2807170712412);
    glVertex2f(92.9023180320956, 43.0917076898555);
    glVertex2f(93.112, 42.887);
    glVertex2f(93.1494841462153, 42.7669992654237);
    glVertex2f(93.0331706807472, 42.5828362784325);
    glVertex2f(92.5388384525078, 42.2242030932392);
    glVertex2f(91.8991143924332, 41.8849554856239);
    glVertex2f(91.3660110090377, 41.8122595697063);
    glVertex2f(90.8668323864037, 41.8171059641009);

    glEnd();

    //window
    glColor3f(0.11, 0.5, 0.66);
    glBegin(GL_POLYGON);
    glVertex2f(89.2142118978776, 43.5278831853609);
    glVertex2f(89.2917542081897, 43.7992812714531);
    glVertex2f(89.6406946045941, 44.0512937799674);
    glVertex2f(89.9993277897874, 44.0803721463344);
    glVertex2f(90.4839672292378, 44.0173690192058);
    glVertex2f(90.9976850350553, 43.8962091593432);
    glVertex2f(91.6567946727079, 43.7217389611411);
    glVertex2f(92.0493526186628, 43.5763471293059);
    glVertex2f(92.3401362823331, 43.4600336638378);
    glVertex2f(92.6503055235814, 43.2807170712412);
    glVertex2f(92.9023180320956, 43.0917076898555);
    glVertex2f(93.0600, 42.9382);
    glVertex2f(93.0250194714858, 42.8921680431629);
    glVertex2f(92.8726821766908, 42.8814899189526);
    glVertex2f(89.5282049269915, 43.0752075109283);
    glVertex2f(89.3460169426808, 43.1916736181642);
    glVertex2f(89.2142118978776, 43.5278831853609);

    glEnd();

    //yellow headlight
    glColor3f(0.97, 0.93, 0.19);
    glBegin(GL_POLYGON);
    glVertex2f(92.0447155959128, 42.9912369601159);
    glVertex2f(92.1245101387538, 43.0637774536078);
    glVertex2f(92.3276235205311, 43.1036747250283);
    glVertex2f(92.4659672136548, 43.0864636196139);
    glVertex2f(92.6192988655373, 43.0345287052666);
    glVertex2f(92.6835992356815, 42.9356050588908);
    glVertex2f(92.6, 42.8);
    glVertex2f(92.4560748490172, 42.7525963130956);
    glVertex2f(92.2112388242372, 42.7699079512114);
    glVertex2f(92.0483426205874, 42.8787991952035);
    glVertex2f(92.0447155959128, 42.9912369601159);

    glEnd();

    //yellow shade near window
    glBegin(GL_POLYGON);
    glColor3f(0.97, 0.93, 0.19);
    glVertex2f(91.0191052769786, 42.5528013410222);
    glVertex2f(90.8902622873647, 42.6172228358292);
    glVertex2f(90.5915808114416, 42.6640748320524);
    glVertex2f(90.3280383326859, 42.6962855794559);
    glVertex2f(90.0996348510976, 42.690429079928);
    glVertex2f(89.8785834756582, 42.7187065090141);
    glVertex2f(90.0615676041662, 42.5791555888978);
    glVertex2f(90.3046123345742, 42.5235188433827);
    glVertex2f(90.5710830630939, 42.5147340940909);
    glVertex2f(90.8434102911415, 42.508877594563);

    glEnd();

    //red light
    glBegin(GL_POLYGON);
    glColor3f(1, 0, 0);

    glVertex2f(88.5683708383949, 43.1299120944856);
    glVertex2f(88.6123370511252, 43.1714021656854);
    glVertex2f(88.8351384719043, 43.1811956347307);
    glVertex2f(88.9330731623566, 43.1469184930724);
    glVertex2f(88.9746954057989, 43.0783642097557);
    glVertex2f(88.9746954057989, 42.985326253826);
    glVertex2f(88.9159345915275, 42.8971850324189);
    glVertex2f(88.8495330562353, 42.8605882858174);
    glVertex2f(88.7207903564873, 42.865027689257);
    glVertex2f(88.6260830831095, 42.865027689257);
    glVertex2f(88.5861284521532, 42.8916641098945);


    glEnd();


    //yellow shade near wheel
    glColor3f(0.97, 0.93, 0.19);
    glBegin(GL_POLYGON);
    glVertex2f(90.235434875958, 41.1711866604071);
    glVertex2f(90.1715415379326, 41.226293640792);
    glVertex2f(90.1767080830877, 41.3124027267102);
    glVertex2f(90.235434875958, 41.3383509826991);
    glVertex2f(92.2443918206466, 41.3353659055153);
    glVertex2f(92.3, 41.3);
    glVertex2f(92.302151964269, 41.2187892380416);
    glVertex2f(92.2443918206466, 41.1711866604071);

    glEnd();



    //left wheel

    glPushMatrix();
    glTranslatef(89.260477167975, 41.3857725473433, 0);
    glRotatef(-rotate_car3_wheel, 0, 0, 1);
    glTranslatef(-89.260477167975, -41.3857725473433, 0);

    glBegin(GL_POLYGON);
    for (int i = 0;i < 360;i++)
    {
        glColor3f(0.25, 0.25, 0.25);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 360;
        float r = 0.85;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 89.260477167975, y + 41.3857725473433);
    }

    glEnd();


    glBegin(GL_POLYGON);
    for (int i = 0;i < 360;i++)
    {
        glColor3f(0.91, 0.91, 0.91);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 360;
        float r = 0.615;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 89.260477167975, y + 41.3857725473433);
    }

    glEnd();

    glBegin(GL_POLYGON);
    for (int i = 0;i < 360;i++)
    {
        glColor3f(0.58, 0.58, 0.6);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 360;
        float r = 0.232;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 89.260477167975, y + 41.3857725473433);
    }

    glEnd();

    glBegin(GL_POLYGON);
    for (int i = 0;i < 360;i++)
    {
        glColor3f(1, 0, 0);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 360;
        float r = 0.15;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 88.9061677108841, y + 41.1644578618415);
    }

    glEnd();

    glPopMatrix();


    //ROUND SHAPE COVER OF LEFT WHEEL
    //DIVIDED INTO 2 PART

    //first part
    glBegin(GL_POLYGON);
    glColor3f(0.56, 0.56, 0.59);

    glVertex2f(89.3119255942663, 42.3679697765411);
    glVertex2f(88.9798493882042, 42.3258756095755);
    glVertex2f(88.741315775399, 42.2229787569928);
    glVertex2f(88.5682619778737, 42.1013733857588);
    glVertex2f(88.4279480879883, 41.9283195882335);
    glVertex2f(88.3281410769129, 41.7625013513239);
    glVertex2f(88.3187540209686, 41.6369494780684);
    glVertex2f(88.3534221253085, 41.5822272087566);
    glVertex2f(88.4536929501684, 41.5383853906529);
    glVertex2f(88.5628174755213, 41.5160911327851);
    glVertex2f(88.6238333391595, 41.5559861205486);
    glVertex2f(88.6719420008742, 41.6686307918806);
    glVertex2f(88.751731976401, 41.8047431030734);
    glVertex2f(88.8564331749191, 41.9076402252897);
    glVertex2f(89, 42);
    glVertex2f(89.1659040061023, 42.0373449118886);
    glVertex2f(89.3666169954507, 42.0325563904035);

    glEnd();

    //second part
    glBegin(GL_POLYGON);

    glVertex2f(89.3119255942663, 42.3679697765411);
    glVertex2f(89.5691677257229, 42.3071670909241);
    glVertex2f(89.8, 42.2);
    glVertex2f(89.9994636547048, 42.0265393111533);
    glVertex2f(90.1210690259388, 41.820745605988);
    glVertex2f(90.1981866242285, 41.6360668594283);
    glVertex2f(90.163004092233, 41.5631887574377);
    glVertex2f(90.0912789402414, 41.5312277604945);
    glVertex2f(89.9971435842545, 41.5254931874426);
    glVertex2f(89.9041611782665, 41.530519263442);
    glVertex2f(89.8788780253889, 41.5921368463713);
    glVertex2f(89.7910744682812, 41.7516666074133);
    glVertex2f(89.6955790242936, 41.8672663553983);
    glVertex2f(89.5368500816192, 41.9810179331232);
    glVertex2f(89.3666169954507, 42.0325563904035);

    glEnd();

    //right wheel

    glPushMatrix();
    glTranslatef(4, 0, 0);

    glPushMatrix();
    glTranslatef(89.260477167975, 41.3857725473433, 0);
    glRotatef(-rotate_car3_wheel, 0, 0, 1);
    glTranslatef(-89.260477167975, -41.3857725473433, 0);

    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    for (int i = 0;i < 360;i++)
    {
        glColor3f(0.25, 0.25, 0.25);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 360;
        float r = 0.85;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 89.260477167975, y + 41.3857725473433);
    }

    glEnd();


    glBegin(GL_POLYGON);
    for (int i = 0;i < 360;i++)
    {
        glColor3f(0.91, 0.91, 0.91);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 360;
        float r = 0.615;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 89.260477167975, y + 41.3857725473433);
    }

    glEnd();

    glBegin(GL_POLYGON);
    for (int i = 0;i < 360;i++)
    {
        glColor3f(0.58, 0.58, 0.6);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 360;
        float r = 0.232;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 89.260477167975, y + 41.3857725473433);
    }

    glEnd();

    glBegin(GL_POLYGON);
    for (int i = 0;i < 360;i++)
    {
        glColor3f(1, 0, 0);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 360;
        float r = 0.15;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 88.9061677108841, y + 41.1644578618415);
    }

    glEnd();

    glPopMatrix();


    //ROUND SHAPE COVER OF LEFT WHEEL
    //DIVIDED INTO 2 PART

    glColor3f(0.56, 0.56, 0.59);


    //first part
    glBegin(GL_POLYGON);

    glVertex2f(89.3119255942663, 42.3679697765411);
    glVertex2f(88.9798493882042, 42.3258756095755);
    glVertex2f(88.741315775399, 42.2229787569928);
    glVertex2f(88.5682619778737, 42.1013733857588);
    glVertex2f(88.4279480879883, 41.9283195882335);
    glVertex2f(88.3281410769129, 41.7625013513239);
    glVertex2f(88.3187540209686, 41.6369494780684);
    glVertex2f(88.3534221253085, 41.5822272087566);
    glVertex2f(88.4536929501684, 41.5383853906529);
    glVertex2f(88.5628174755213, 41.5160911327851);
    glVertex2f(88.6238333391595, 41.5559861205486);
    glVertex2f(88.6719420008742, 41.6686307918806);
    glVertex2f(88.751731976401, 41.8047431030734);
    glVertex2f(88.8564331749191, 41.9076402252897);
    glVertex2f(89, 42);
    glVertex2f(89.1659040061023, 42.0373449118886);
    glVertex2f(89.3666169954507, 42.0325563904035);

    glEnd();


    //second part
    glBegin(GL_POLYGON);

    glVertex2f(89.3119255942663, 42.3679697765411);
    glVertex2f(89.5691677257229, 42.3071670909241);
    glVertex2f(89.8, 42.2);
    glVertex2f(89.9994636547048, 42.0265393111533);
    glVertex2f(90.1210690259388, 41.820745605988);
    glVertex2f(90.1981866242285, 41.6360668594283);
    glVertex2f(90.163004092233, 41.5631887574377);
    glVertex2f(90.0912789402414, 41.5312277604945);
    glVertex2f(89.9971435842545, 41.5254931874426);
    glVertex2f(89.9041611782665, 41.530519263442);
    glVertex2f(89.8788780253889, 41.5921368463713);
    glVertex2f(89.7910744682812, 41.7516666074133);
    glVertex2f(89.6955790242936, 41.8672663553983);
    glVertex2f(89.5368500816192, 41.9810179331232);
    glVertex2f(89.3666169954507, 42.0325563904035);

    glEnd();


    glPopMatrix();

    glPopMatrix();


}

//Left most tree
//ID40
void Tree1() {

    //green part
    glBegin(GL_POLYGON);
    glColor3f(0.06, 0.21, 0.07);

    glVertex2f(1.64, 50.53);
    glVertex2f(1.82, 50.31);
    glVertex2f(1.995, 50.15);
    glVertex2f(2.25, 50.02);
    glVertex2f(2.56, 49.93);
    glVertex2f(2.96, 49.89);
    glVertex2f(4.74, 49.89);
    glVertex2f(4.74, 54.58);
    glVertex2f(3.39, 54.3);
    glVertex2f(3.3, 54.18);

    glEnd();

    //green part
    glBegin(GL_POLYGON);
    glColor3f(0.06, 0.21, 0.07);

    glVertex2f(4.74, 49.89);
    glVertex2f(6.08, 50.07);
    glVertex2f(7.07, 50.06);
    glVertex2f(7.88, 50.08);
    glVertex2f(8.31, 50.11);
    glVertex2f(8.58, 50.2);
    glVertex2f(8.81, 50.36);
    glVertex2f(8.95, 50.58);
    glVertex2f(9.04, 50.83);
    glVertex2f(9.06, 51.19);
    glVertex2f(7.2, 52.83);
    glVertex2f(7.16, 53.31);
    glVertex2f(7.09, 53.53);
    glVertex2f(7.86, 53.54);
    glVertex2f(8.09, 53.65);
    glVertex2f(8.27, 53.85);
    glVertex2f(8.36, 54.07);
    glVertex2f(8.36, 54.38);
    glVertex2f(7.61, 54.3);
    glVertex2f(4.74, 54.58);

    glEnd();

    //green part
    glBegin(GL_POLYGON);
    glColor3f(0.28, 0.49, 0.19);

    glVertex2f(1.88, 50.83);
    glVertex2f(3.76, 50.83);
    glVertex2f(3.896, 50.83);
    glVertex2f(3.896, 50.83);
    glVertex2f(4, 51);
    glVertex2f(4, 51.15);
    glVertex2f(4.88, 53.39);
    glVertex2f(4.527, 53.65);
    glVertex2f(4.28, 53.78);
    glVertex2f(3.91, 53.96);
    glVertex2f(3.3, 54.18);
    glVertex2f(2.28, 54.04);
    glVertex2f(1.57, 53.62);
    glVertex2f(1.158, 53.23);
    glVertex2f(0.93, 52.84);
    glVertex2f(0.77, 52.34);
    glVertex2f(0.74, 51.92);
    glVertex2f(0.81, 51.49);
    glVertex2f(0.96, 51.17);
    glVertex2f(1.195, 50.97);
    glVertex2f(1.15, 50.86);
    glVertex2f(1.29, 50.83);
    glVertex2f(1.45, 50.84);
    glVertex2f(1.45, 50.6);
    glVertex2f(1.49, 50.4);
    glVertex2f(1.64, 50.53);
    glVertex2f(1.77, 50.67);
    glEnd();

    //brown part
    glBegin(GL_POLYGON);
    glColor3f(0.41, 0.23, 0.13);

    glVertex2f(4.71, 47.3);
    glVertex2f(6.14, 47.3);
    glVertex2f(6.14, 50.74);
    glVertex2f(4.71, 50.74);
    glEnd();

    //brown part
    glBegin(GL_POLYGON);
    glColor3f(0.41, 0.23, 0.13);

    glVertex2f(5.31, 50.74);
    glVertex2f(5.95, 50.74);
    glVertex2f(5.95, 54.1);
    glVertex2f(5.31, 54.1);
    glEnd();

    //brown part
    glBegin(GL_POLYGON);
    glColor3f(0.41, 0.23, 0.13);

    glVertex2f(6.14, 50.47);
    glVertex2f(6.66, 51.025);
    glVertex2f(6.14, 51.025);
    glVertex2f(5.938, 50.865);
    glEnd();

    //brown part
    glBegin(GL_POLYGON);
    glColor3f(0.41, 0.23, 0.13);

    glVertex2f(6.14, 49.162);
    glVertex2f(7.66, 50.86);
    glVertex2f(7.33, 50.86);
    glVertex2f(6.14, 49.59);
    glEnd();

    //brown part
    glBegin(GL_POLYGON);
    glColor3f(0.41, 0.23, 0.13);

    glVertex2f(4.71, 48.78);
    glVertex2f(4.72, 49.2);
    glVertex2f(3.6, 50.55);
    glVertex2f(3.25, 50.55);
    glEnd();

    //brown part
    glBegin(GL_POLYGON);
    glColor3f(0.41, 0.23, 0.13);

    glVertex2f(4.15, 49.468);
    glVertex2f(3.81, 49.87);
    glVertex2f(2.86, 50.55);
    glVertex2f(2.62, 50.55);
    glEnd();

    //brown part
    glBegin(GL_POLYGON);
    glColor3f(0.41, 0.23, 0.13);

    glVertex2f(4.71, 50.74);
    glVertex2f(5.11, 50.74);
    glVertex2f(4.39, 52.14);
    glVertex2f(3.99, 52.14);
    glEnd();

    //brown part
    glBegin(GL_POLYGON);
    glColor3f(0.41, 0.23, 0.13);

    glVertex2f(4.75, 50.999);
    glVertex2f(4.565, 51.34);
    glVertex2f(3.572, 52.136);
    glVertex2f(3.34, 52.136);
    glEnd();

    //brown part
    glBegin(GL_POLYGON);
    glColor3f(0.41, 0.23, 0.13);

    glVertex2f(5.95, 53.26);
    glVertex2f(6.88, 54.1);
    glVertex2f(6.7, 54.1);
    glVertex2f(5.95, 53.425);
    glEnd();

    //green part
    glBegin(GL_POLYGON);
    for (int i = 0;i < 360;i++)
    {
        glColor3f(0.21, 0.38, 0.14);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 360;
        float r = 1.09;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 8, y + 52.27);
    }
    glEnd();

    //green part
    glBegin(GL_POLYGON);
    for (int i = 0;i < 360;i++)
    {
        glColor3f(0.21, 0.38, 0.14);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 360;
        float r = 0.9;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 8.71, y + 52.03);
    }
    glEnd();

    //green part
    glBegin(GL_POLYGON);
    for (int i = 0;i < 360;i++)
    {
        glColor3f(0.21, 0.38, 0.14);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 360;
        float r = 0.626;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 6.171, y + 51.743);
    }
    glEnd();

    //green part
    glBegin(GL_POLYGON);
    glColor3f(0.21, 0.38, 0.14);

    glVertex2f(6.17, 51.12);
    glVertex2f(8.76, 51.12);
    glVertex2f(6.905, 52.295);
    glVertex2f(6.823, 52.41);
    glVertex2f(6.73, 52.498);
    glVertex2f(6.66, 52.537);
    glVertex2f(6.548, 52.581);
    glVertex2f(6.59, 52.21);
    glEnd();

    //green part
    glBegin(GL_POLYGON);
    for (int i = 0;i < 360;i++)
    {
        glColor3f(0.21, 0.38, 0.14);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 360;
        float r = 1.03;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 3.403, y + 55.34);
    }
    glEnd();

    //green part
    glBegin(GL_POLYGON);
    for (int i = 0;i < 360;i++)
    {
        glColor3f(0.21, 0.38, 0.14);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 360;
        float r = 1.41;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 5.505, y + 56.11);
    }
    glEnd();

    //green part
    glBegin(GL_POLYGON);
    for (int i = 0;i < 360;i++)
    {
        glColor3f(0.21, 0.38, 0.14);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 360;
        float r = 0.84;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 7.9, y + 55.1);
    }
    glEnd();

    //green part
    glBegin(GL_POLYGON);
    glColor3f(0.21, 0.38, 0.14);

    glVertex2f(3.39, 54.3);
    glVertex2f(7.61, 54.3);
    glVertex2f(7.28, 55.68);
    glVertex2f(7.27, 56.09);
    glVertex2f(6.88, 55.8);
    glVertex2f(4.64, 55.7);
    glEnd();

    //green part
    glBegin(GL_POLYGON);
    for (int i = 0;i < 360;i++)
    {
        glColor3f(0.21, 0.38, 0.14);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 360;
        float r = 1;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 2.82, y + 53.29);
    }
    glEnd();

    //green part
    glBegin(GL_POLYGON);
    for (int i = 0;i < 360;i++)
    {
        glColor3f(0.21, 0.38, 0.14);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 360;
        float r = 0.59;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 4.87, y + 52.87);
    }
    glEnd();

    //green part
    glBegin(GL_POLYGON);
    glColor3f(0.21, 0.38, 0.14);

    glVertex2f(2.81, 52.28);
    glVertex2f(4.92, 52.28);
    glVertex2f(4.745, 53.45);
    glVertex2f(4.53, 53.43);
    glVertex2f(4.35, 53.37);
    glVertex2f(4.199, 53.26);
    glVertex2f(4.13, 53.16);
    glVertex2f(4.02, 53.03);
    glVertex2f(4.02, 53.03);
    glVertex2f(3.95, 53.04);
    glVertex2f(3.9, 53.09);
    glVertex2f(3.88, 53.16);
    glVertex2f(3.89, 53.27);
    glVertex2f(3.87, 53.39);
    glVertex2f(3.77, 53.53);
    glEnd();

}

//ID41
void Tree2() {

    //brownpart
    glLineWidth(4);
    glBegin(GL_LINES);
    glColor3f(0.47, 0.32, 0.2);

    glVertex2f(126.96, 40.85);
    glVertex2f(126.96, 45.9);

    glVertex2f(126.96, 44.09);
    glVertex2f(128.3, 44.09);

    glVertex2f(128.1, 44.68);
    glVertex2f(128.1, 44.09);

    glVertex2f(126.96, 43.17);
    glVertex2f(125.89, 43.17);

    glVertex2f(125.92, 43.69);
    glVertex2f(125.92, 43.17);

    glVertex2f(126.96, 45.09);
    glVertex2f(125.76, 45.09);

    glVertex2f(125.83, 45.09);
    glVertex2f(125.83, 45.75);

    glEnd();

    //green part
    glBegin(GL_POLYGON);
    for (int i = 0;i < 360;i++)
    {
        glColor3f(0.45, 0.69, 0.33);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 360;
        float r = 1.13;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 125.5, y + 46.7);
    }
    glEnd();

    //green part
    glBegin(GL_POLYGON);
    for (int i = 0;i < 360;i++)
    {
        if (isday == true) {
            glColor3f(0.75, 0.87, 0.32);
        }
        else {
            glColor3f(0.46, 0.53, 0.19);
        }
        float pi = 3.1416;
        float A = (i * 2 * pi) / 360;
        float r = 1.86;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 127.48, y + 47.66);
    }
    glEnd();

    //green part
    glBegin(GL_POLYGON);
    for (int i = 0;i < 360;i++)
    {
        glColor3f(0.45, 0.69, 0.33);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 360;
        float r = 0.92;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 128.3, y + 45.52);
    }
    glEnd();

    //green part
    glBegin(GL_POLYGON);
    for (int i = 0;i < 360;i++)
    {
        if (isday == true) {
            glColor3f(0.75, 0.87, 0.32);
        }
        else {
            glColor3f(0.46, 0.53, 0.19);
        }
        float pi = 3.1416;
        float A = (i * 2 * pi) / 360;
        float r = 0.5;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 125.86, y + 44.1);
    }
    glEnd();

}
//ID42
void Tree3() {

    //green part
    glBegin(GL_POLYGON);
    for (int i = 0;i < 360;i++)
    {
        if (isday == true) {
            glColor3f(0.5, 0.62, 0.31);
        }
        else {
            glColor3f(0.46, 0.53, 0.19);
        }
        float pi = 3.1416;
        float A = (i * 2 * pi) / 360;
        float r = 1.55;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 115.99, y + 45.7);
    }
    glEnd();

    //green part
    glBegin(GL_POLYGON);
    for (int i = 0;i < 360;i++)
    {
        if (isday == true) {
            glColor3f(0.5, 0.62, 0.31);
        }
        else {
            glColor3f(0.46, 0.53, 0.19);
        }
        float pi = 3.1416;
        float A = (i * 2 * pi) / 360;
        float r = 1.9;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 118.54, y + 46);
    }
    glEnd();

    //green part
    glBegin(GL_POLYGON);
    for (int i = 0;i < 360;i++)
    {
        if (isday == true) {
            glColor3f(0.5, 0.62, 0.31);
        }
        else {
            glColor3f(0.46, 0.53, 0.19);
        }
        float pi = 3.1416;
        float A = (i * 2 * pi) / 360;
        float r = 1.24;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 116.48, y + 48.1);
    }
    glEnd();

    //green part
    glBegin(GL_POLYGON);
    for (int i = 0;i < 360;i++)
    {
        if (isday == true) {
            glColor3f(0.5, 0.62, 0.31);
        }
        else {
            glColor3f(0.46, 0.53, 0.19);
        }
        float pi = 3.1416;
        float A = (i * 2 * pi) / 360;
        float r = 0.64;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 118.76, y + 48.26);
    }
    glEnd();

    //green part
    glBegin(GL_POLYGON);
    for (int i = 0;i < 360;i++)
    {
        if (isday == true) {
            glColor3f(0.5, 0.62, 0.31);
        }
        else {
            glColor3f(0.46, 0.53, 0.19);
        }
        float pi = 3.1416;
        float A = (i * 2 * pi) / 360;
        float r = 1.02;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 117.83, y + 49.26);
    }
    glEnd();

    //green part
    glBegin(GL_POLYGON);
    if (isday == true) {
        glColor3f(0.5, 0.62, 0.31);
    }
    else {
        glColor3f(0.46, 0.53, 0.19);
    }

    glVertex2f(117.62, 47.6);
    glVertex2f(118.3, 47.82);
    glVertex2f(117.83, 49.26);
    glVertex2f(117.14, 48.51);

    glEnd();

    glBegin(GL_TRIANGLES);
    if (isday == true) {
        glColor3f(0.5, 0.62, 0.31);
    }
    else {
        glColor3f(0.46, 0.53, 0.19);
    }

    glVertex2f(116.04, 44.15);
    glVertex2f(118.6, 44.16);
    glVertex2f(117.14, 45.14);

    glEnd();

    ////brown part
    glBegin(GL_TRIANGLES);
    glColor3f(0.4, 0.25, 0.15);

    glVertex2f(117.25, 40.85);
    glVertex2f(117.7, 40.85);
    glVertex2f(117.475, 47.99);

    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.4, 0.25, 0.15);

    glVertex2f(117.5, 45.14);
    glVertex2f(118.6, 46.5);
    glVertex2f(117.5, 45.41);

    glEnd();

    glLineWidth(1);
    glBegin(GL_LINES);
    glColor3f(0.4, 0.25, 0.15);

    glVertex2f(117.5, 45);
    glVertex2f(116.27, 46.5);

    glEnd();


}

//ID43
void Tree4() {

    //brown part
    glLineWidth(3);
    glBegin(GL_LINES);
    glColor3f(0.61, 0.43, 0.19);

    glVertex2f(103.64, 40.85);
    glVertex2f(103.64, 44);

    glEnd();

    //green part
    glBegin(GL_POLYGON);
    if (isday == true) {
        glColor3f(0.36, 0.46, 0.2);
    }
    else {
        glColor3f(0.46, 0.53, 0.19);
    }

    glVertex2f(103.66, 43.26);
    glVertex2f(104.18, 43.85);
    glVertex2f(105.04, 43.62);
    glVertex2f(105.15, 44.29);
    glVertex2f(106.07, 44.53);
    glVertex2f(105.76, 45.18);
    glVertex2f(106.46, 45.76);
    glVertex2f(105.83, 46.19);
    glVertex2f(106.1, 46.99);
    glVertex2f(105.34, 47.07);
    glVertex2f(105.09, 47.93);
    glVertex2f(104.38, 47.6);
    glVertex2f(103.67, 48.27);
    glVertex2f(103.2, 47.68);
    glVertex2f(102.3, 47.94);
    glVertex2f(102.17, 47.22);
    glVertex2f(101.24, 47.02);
    glVertex2f(101.58, 46.35);
    glVertex2f(100.91, 45.79);
    glVertex2f(101.5, 45.36);
    glVertex2f(101.27, 44.56);
    glVertex2f(102, 44.5);
    glVertex2f(102.25, 43.6);
    glVertex2f(103, 43.91);

    glEnd();

}

//ID44
void Tree5() {
    glPushMatrix();
    glTranslatef(-20, 0, 0);

    //green part
    glBegin(GL_POLYGON);
    for (int i = 0;i < 360;i++)
    {
        if (isday == true) {
            glColor3f(0.5, 0.62, 0.31);
        }
        else {
            glColor3f(0.46, 0.53, 0.19);
        }
        float pi = 3.1416;
        float A = (i * 2 * pi) / 360;
        float r = 1.55;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 115.99, y + 45.7);
    }
    glEnd();

    //green part
    glBegin(GL_POLYGON);
    for (int i = 0;i < 360;i++)
    {
        if (isday == true) {
            glColor3f(0.5, 0.62, 0.31);
        }
        else {
            glColor3f(0.46, 0.53, 0.19);
        }
        float pi = 3.1416;
        float A = (i * 2 * pi) / 360;
        float r = 1.9;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 118.54, y + 46);
    }
    glEnd();

    //green part
    glBegin(GL_POLYGON);
    for (int i = 0;i < 360;i++)
    {
        if (isday == true) {
            glColor3f(0.5, 0.62, 0.31);
        }
        else {
            glColor3f(0.46, 0.53, 0.19);
        }
        float pi = 3.1416;
        float A = (i * 2 * pi) / 360;
        float r = 1.24;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 116.48, y + 48.1);
    }
    glEnd();

    //green part
    glBegin(GL_POLYGON);
    for (int i = 0;i < 360;i++)
    {
        if (isday == true) {
            glColor3f(0.5, 0.62, 0.31);
        }
        else {
            glColor3f(0.46, 0.53, 0.19);
        }
        float pi = 3.1416;
        float A = (i * 2 * pi) / 360;
        float r = 0.64;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 118.76, y + 48.26);
    }
    glEnd();

    //green part
    glBegin(GL_POLYGON);
    for (int i = 0;i < 360;i++)
    {
        if (isday == true) {
            glColor3f(0.5, 0.62, 0.31);
        }
        else {
            glColor3f(0.46, 0.53, 0.19);
        }
        float pi = 3.1416;
        float A = (i * 2 * pi) / 360;
        float r = 1.02;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 117.83, y + 49.26);
    }
    glEnd();

    //green part
    glBegin(GL_POLYGON);
    if (isday == true) {
        glColor3f(0.5, 0.62, 0.31);
    }
    else {
        glColor3f(0.46, 0.53, 0.19);
    }

    glVertex2f(117.62, 47.6);
    glVertex2f(118.3, 47.82);
    glVertex2f(117.83, 49.26);
    glVertex2f(117.14, 48.51);

    glEnd();

    glBegin(GL_TRIANGLES);
    if (isday == true) {
        glColor3f(0.5, 0.62, 0.31);
    }
    else {
        glColor3f(0.46, 0.53, 0.19);
    }

    glVertex2f(116.04, 44.15);
    glVertex2f(118.6, 44.16);
    glVertex2f(117.14, 45.14);

    glEnd();

    ////brown part
    glBegin(GL_TRIANGLES);
    glColor3f(0.4, 0.25, 0.15);

    glVertex2f(117.25, 40.85);
    glVertex2f(117.7, 40.85);
    glVertex2f(117.475, 47.99);

    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.4, 0.25, 0.15);

    glVertex2f(117.5, 45.14);
    glVertex2f(118.6, 46.5);
    glVertex2f(117.5, 45.41);

    glEnd();

    glLineWidth(1);
    glBegin(GL_LINES);
    glColor3f(0.4, 0.25, 0.15);

    glVertex2f(117.5, 45);
    glVertex2f(116.27, 46.5);

    glEnd();

    glPopMatrix();

}

//ID45
void Tree6() {
    glPushMatrix();
    glTranslatef(-40, 0, 0);

    //brownpart
    glLineWidth(4);
    glBegin(GL_LINES);
    glColor3f(0.47, 0.32, 0.2);

    glVertex2f(126.96, 40.85);
    glVertex2f(126.96, 45.9);

    glVertex2f(126.96, 44.09);
    glVertex2f(128.3, 44.09);

    glVertex2f(128.1, 44.68);
    glVertex2f(128.1, 44.09);

    glVertex2f(126.96, 43.17);
    glVertex2f(125.89, 43.17);

    glVertex2f(125.92, 43.69);
    glVertex2f(125.92, 43.17);

    glVertex2f(126.96, 45.09);
    glVertex2f(125.76, 45.09);

    glVertex2f(125.83, 45.09);
    glVertex2f(125.83, 45.75);

    glEnd();

    //green part
    glBegin(GL_POLYGON);
    for (int i = 0;i < 360;i++)
    {
        glColor3f(0.45, 0.69, 0.33);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 360;
        float r = 1.13;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 125.5, y + 46.7);
    }
    glEnd();

    //green part
    glBegin(GL_POLYGON);
    for (int i = 0;i < 360;i++)
    {
        if (isday == true) {
            glColor3f(0.75, 0.87, 0.32);
        }
        else {
            glColor3f(0.46, 0.53, 0.19);
        }
        float pi = 3.1416;
        float A = (i * 2 * pi) / 360;
        float r = 1.86;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 127.48, y + 47.66);
    }
    glEnd();

    //green part
    glBegin(GL_POLYGON);
    for (int i = 0;i < 360;i++)
    {
        glColor3f(0.45, 0.69, 0.33);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 360;
        float r = 0.92;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 128.3, y + 45.52);
    }
    glEnd();

    //green part
    glBegin(GL_POLYGON);
    for (int i = 0;i < 360;i++)
    {
        if (isday == true) {
            glColor3f(0.75, 0.87, 0.32);
        }
        else {
            glColor3f(0.46, 0.53, 0.19);
        }
        float pi = 3.1416;
        float A = (i * 2 * pi) / 360;
        float r = 0.5;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 125.86, y + 44.1);
    }
    glEnd();

    glPopMatrix();

}

//ID46
void Tree7() {

    //brown part
    glLineWidth(6);
    glBegin(GL_LINES);
    glColor3f(0.49, 0.32, 0.21);

    glVertex2f(78.5, 40.85);
    glVertex2f(78.5, 45);

    glEnd();

    //green part
    glBegin(GL_POLYGON);
    if (isday == true) {
        glColor3f(0.45, 0.69, 0.33);
    }
    else {
        glColor3f(0.46, 0.53, 0.19);
    }

    glVertex2f(74.43, 42.95);
    glVertex2f(76.42, 44.87);
    glVertex2f(78.5, 49.78);

    glEnd();

    glBegin(GL_POLYGON);
    if (isday == true) {
        glColor3f(0.45, 0.69, 0.33);
    }
    else {
        glColor3f(0.46, 0.53, 0.19);
    }

    glVertex2f(76.42, 44.87);
    glVertex2f(77.36, 42.95);
    glVertex2f(78.5, 45);
    glVertex2f(78.5, 49.78);

    glEnd();

    glBegin(GL_POLYGON);
    if (isday == true) {
        glColor3f(0.45, 0.69, 0.33);
    }
    else {
        glColor3f(0.46, 0.53, 0.19);
    }

    glVertex2f(78.5, 45);
    glVertex2f(79.5, 42.95);
    glVertex2f(80.4, 44.87);
    glVertex2f(78.5, 49.78);

    glEnd();

    glBegin(GL_POLYGON);
    if (isday == true) {
        glColor3f(0.45, 0.69, 0.33);
    }
    else {
        glColor3f(0.46, 0.53, 0.19);
    }

    glVertex2f(80.4, 44.87);
    glVertex2f(82.27, 42.95);
    glVertex2f(78.5, 49.78);

    glEnd();

    //green part
    glBegin(GL_POLYGON);
    if (isday == true) {
        glColor3f(0.58, 0.77, 0.25);
    }
    else {
        glColor3f(0.46, 0.53, 0.19);
    }

    glVertex2f(75.23, 45.6);
    glVertex2f(76.72, 47.1);
    glVertex2f(78.5, 52.42);

    glEnd();

    glBegin(GL_POLYGON);
    if (isday == true) {
        glColor3f(0.58, 0.77, 0.25);
    }
    else {
        glColor3f(0.46, 0.53, 0.19);
    }

    glVertex2f(76.72, 47.1);
    glVertex2f(77.54, 45.4);
    glVertex2f(78.5, 47.1);
    glVertex2f(78.5, 52.42);

    glEnd();

    glBegin(GL_POLYGON);
    if (isday == true) {
        glColor3f(0.58, 0.77, 0.25);
    }
    else {
        glColor3f(0.46, 0.53, 0.19);
    }

    glVertex2f(78.5, 47.1);
    glVertex2f(79.17, 45.4);
    glVertex2f(80.05, 47.1);

    glEnd();

    glBegin(GL_POLYGON);
    if (isday == true) {
        glColor3f(0.58, 0.77, 0.25);
    }
    else {
        glColor3f(0.46, 0.53, 0.19);
    }

    glVertex2f(78.5, 47.1);
    glVertex2f(80.05, 47.1);
    glVertex2f(78.5, 52.42);

    glEnd();

    glBegin(GL_POLYGON);
    if (isday == true) {
        glColor3f(0.58, 0.77, 0.25);
    }
    else {
        glColor3f(0.46, 0.53, 0.19);
    }

    glVertex2f(80.05, 47.1);
    glVertex2f(81.55, 45.6);
    glVertex2f(78.5, 52.42);

    glEnd();

    //green part
    glBegin(GL_POLYGON);
    if (isday == true) {
        glColor3f(0.75, 0.87, 0.33);
    }
    else {
        glColor3f(0.46, 0.53, 0.19);
    }

    glVertex2f(76.4, 49.2);
    glVertex2f(77.35, 50.17);
    glVertex2f(78.5, 54.5);

    glEnd();

    glBegin(GL_POLYGON);
    if (isday == true) {
        glColor3f(0.75, 0.87, 0.33);
    }
    else {
        glColor3f(0.46, 0.53, 0.19);
    }

    glVertex2f(77.35, 50.17);
    glVertex2f(77.79, 49);
    glVertex2f(78.5, 50.1);
    glVertex2f(78.5, 54.5);

    glEnd();

    glBegin(GL_POLYGON);
    if (isday == true) {
        glColor3f(0.75, 0.87, 0.33);
    }
    else {
        glColor3f(0.46, 0.53, 0.19);
    }

    glVertex2f(78.5, 50.1);
    glVertex2f(79, 49);
    glVertex2f(79.39, 50.2);
    glVertex2f(78.5, 54.5);

    glEnd();

    glBegin(GL_POLYGON);
    if (isday == true) {
        glColor3f(0.75, 0.87, 0.33);
    }
    else {
        glColor3f(0.46, 0.53, 0.19);
    }

    glVertex2f(79.39, 50.2);
    glVertex2f(80.4, 49.2);
    glVertex2f(78.5, 54.5);

    glEnd();

}

//ID47
void Tree8() {
    glPushMatrix();
    glTranslatef(-50, 0, 0);

    //green part
    glBegin(GL_POLYGON);
    for (int i = 0;i < 360;i++)
    {
        if (isday == true) {
            glColor3f(0.5, 0.62, 0.31);
        }
        else {
            glColor3f(0.46, 0.53, 0.19);
        }
        float pi = 3.1416;
        float A = (i * 2 * pi) / 360;
        float r = 1.55;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 115.99, y + 45.7);
    }
    glEnd();

    //green part
    glBegin(GL_POLYGON);
    for (int i = 0;i < 360;i++)
    {
        if (isday == true) {
            glColor3f(0.5, 0.62, 0.31);
        }
        else {
            glColor3f(0.46, 0.53, 0.19);
        }
        float pi = 3.1416;
        float A = (i * 2 * pi) / 360;
        float r = 1.9;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 118.54, y + 46);
    }
    glEnd();

    //green part
    glBegin(GL_POLYGON);
    for (int i = 0;i < 360;i++)
    {
        if (isday == true) {
            glColor3f(0.5, 0.62, 0.31);
        }
        else {
            glColor3f(0.46, 0.53, 0.19);
        }
        float pi = 3.1416;
        float A = (i * 2 * pi) / 360;
        float r = 1.24;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 116.48, y + 48.1);
    }
    glEnd();

    //green part
    glBegin(GL_POLYGON);
    for (int i = 0;i < 360;i++)
    {
        if (isday == true) {
            glColor3f(0.5, 0.62, 0.31);
        }
        else {
            glColor3f(0.46, 0.53, 0.19);
        }
        float pi = 3.1416;
        float A = (i * 2 * pi) / 360;
        float r = 0.64;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 118.76, y + 48.26);
    }
    glEnd();

    //green part
    glBegin(GL_POLYGON);
    for (int i = 0;i < 360;i++)
    {
        if (isday == true) {
            glColor3f(0.5, 0.62, 0.31);
        }
        else {
            glColor3f(0.46, 0.53, 0.19);
        }
        float pi = 3.1416;
        float A = (i * 2 * pi) / 360;
        float r = 1.02;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 117.83, y + 49.26);
    }
    glEnd();

    //green part
    glBegin(GL_POLYGON);
    if (isday == true) {
        glColor3f(0.5, 0.62, 0.31);
    }
    else {
        glColor3f(0.46, 0.53, 0.19);
    }

    glVertex2f(117.62, 47.6);
    glVertex2f(118.3, 47.82);
    glVertex2f(117.83, 49.26);
    glVertex2f(117.14, 48.51);

    glEnd();

    glBegin(GL_TRIANGLES);
    if (isday == true) {
        glColor3f(0.5, 0.62, 0.31);
    }
    else {
        glColor3f(0.46, 0.53, 0.19);
    }

    glVertex2f(116.04, 44.15);
    glVertex2f(118.6, 44.16);
    glVertex2f(117.14, 45.14);

    glEnd();

    ////brown part
    glBegin(GL_TRIANGLES);
    glColor3f(0.4, 0.25, 0.15);

    glVertex2f(117.25, 40.85);
    glVertex2f(117.7, 40.85);
    glVertex2f(117.475, 47.99);

    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.4, 0.25, 0.15);

    glVertex2f(117.5, 45.14);
    glVertex2f(118.6, 46.5);
    glVertex2f(117.5, 45.41);

    glEnd();

    glLineWidth(1);
    glBegin(GL_LINES);
    glColor3f(0.4, 0.25, 0.15);

    glVertex2f(117.5, 45);
    glVertex2f(116.27, 46.5);

    glEnd();

    glPopMatrix();

}

//ID48
void Tree9() {

    glPushMatrix();
    glTranslatef(-45, 0, 0);

    //brown part
    glLineWidth(3);
    glBegin(GL_LINES);
    glColor3f(0.61, 0.43, 0.19);

    glVertex2f(103.64, 40.85);
    glVertex2f(103.64, 44);

    glEnd();

    //green part
    glBegin(GL_POLYGON);
    if (isday == true) {
        glColor3f(0.36, 0.46, 0.2);
    }
    else {
        glColor3f(0.46, 0.53, 0.19);
    }

    glVertex2f(103.66, 43.26);
    glVertex2f(104.18, 43.85);
    glVertex2f(105.04, 43.62);
    glVertex2f(105.15, 44.29);
    glVertex2f(106.07, 44.53);
    glVertex2f(105.76, 45.18);
    glVertex2f(106.46, 45.76);
    glVertex2f(105.83, 46.19);
    glVertex2f(106.1, 46.99);
    glVertex2f(105.34, 47.07);
    glVertex2f(105.09, 47.93);
    glVertex2f(104.38, 47.6);
    glVertex2f(103.67, 48.27);
    glVertex2f(103.2, 47.68);
    glVertex2f(102.3, 47.94);
    glVertex2f(102.17, 47.22);
    glVertex2f(101.24, 47.02);
    glVertex2f(101.58, 46.35);
    glVertex2f(100.91, 45.79);
    glVertex2f(101.5, 45.36);
    glVertex2f(101.27, 44.56);
    glVertex2f(102, 44.5);
    glVertex2f(102.25, 43.6);
    glVertex2f(103, 43.91);

    glEnd();

    glPopMatrix();

}

//ID49
void Tree10() {
    glPushMatrix();
    glTranslatef(-30, 0, 0);

    //brown part
    glLineWidth(6);
    glBegin(GL_LINES);
    glColor3f(0.49, 0.32, 0.21);

    glVertex2f(78.5, 40.85);
    glVertex2f(78.5, 45);

    glEnd();

    //green part
    glBegin(GL_POLYGON);
    if (isday == true) {
        glColor3f(0.45, 0.69, 0.33);
    }
    else {
        glColor3f(0.46, 0.53, 0.19);
    }

    glVertex2f(74.43, 42.95);
    glVertex2f(76.42, 44.87);
    glVertex2f(78.5, 49.78);

    glEnd();

    glBegin(GL_POLYGON);
    if (isday == true) {
        glColor3f(0.45, 0.69, 0.33);
    }
    else {
        glColor3f(0.46, 0.53, 0.19);
    }

    glVertex2f(76.42, 44.87);
    glVertex2f(77.36, 42.95);
    glVertex2f(78.5, 45);
    glVertex2f(78.5, 49.78);

    glEnd();

    glBegin(GL_POLYGON);
    if (isday == true) {
        glColor3f(0.45, 0.69, 0.33);
    }
    else {
        glColor3f(0.46, 0.53, 0.19);
    }

    glVertex2f(78.5, 45);
    glVertex2f(79.5, 42.95);
    glVertex2f(80.4, 44.87);
    glVertex2f(78.5, 49.78);

    glEnd();

    glBegin(GL_POLYGON);
    if (isday == true) {
        glColor3f(0.45, 0.69, 0.33);
    }
    else {
        glColor3f(0.46, 0.53, 0.19);
    }

    glVertex2f(80.4, 44.87);
    glVertex2f(82.27, 42.95);
    glVertex2f(78.5, 49.78);

    glEnd();

    //green part
    glBegin(GL_POLYGON);
    if (isday == true) {
        glColor3f(0.58, 0.77, 0.25);
    }
    else {
        glColor3f(0.46, 0.53, 0.19);
    }

    glVertex2f(75.23, 45.6);
    glVertex2f(76.72, 47.1);
    glVertex2f(78.5, 52.42);

    glEnd();

    glBegin(GL_POLYGON);
    if (isday == true) {
        glColor3f(0.58, 0.77, 0.25);
    }
    else {
        glColor3f(0.46, 0.53, 0.19);
    }

    glVertex2f(76.72, 47.1);
    glVertex2f(77.54, 45.4);
    glVertex2f(78.5, 47.1);
    glVertex2f(78.5, 52.42);

    glEnd();

    glBegin(GL_POLYGON);
    if (isday == true) {
        glColor3f(0.58, 0.77, 0.25);
    }
    else {
        glColor3f(0.46, 0.53, 0.19);
    }

    glVertex2f(78.5, 47.1);
    glVertex2f(79.17, 45.4);
    glVertex2f(80.05, 47.1);

    glEnd();

    glBegin(GL_POLYGON);
    if (isday == true) {
        glColor3f(0.58, 0.77, 0.25);
    }
    else {
        glColor3f(0.46, 0.53, 0.19);
    }

    glVertex2f(78.5, 47.1);
    glVertex2f(80.05, 47.1);
    glVertex2f(78.5, 52.42);

    glEnd();

    glBegin(GL_POLYGON);
    if (isday == true) {
        glColor3f(0.58, 0.77, 0.25);
    }
    else {
        glColor3f(0.46, 0.53, 0.19);
    }

    glVertex2f(80.05, 47.1);
    glVertex2f(81.55, 45.6);
    glVertex2f(78.5, 52.42);

    glEnd();

    //green part
    glBegin(GL_POLYGON);
    if (isday == true) {
        glColor3f(0.75, 0.87, 0.33);
    }
    else {
        glColor3f(0.46, 0.53, 0.19);
    }

    glVertex2f(76.4, 49.2);
    glVertex2f(77.35, 50.17);
    glVertex2f(78.5, 54.5);

    glEnd();

    glBegin(GL_POLYGON);
    if (isday == true) {
        glColor3f(0.75, 0.87, 0.33);
    }
    else {
        glColor3f(0.46, 0.53, 0.19);
    }

    glVertex2f(77.35, 50.17);
    glVertex2f(77.79, 49);
    glVertex2f(78.5, 50.1);
    glVertex2f(78.5, 54.5);

    glEnd();

    glBegin(GL_POLYGON);
    if (isday == true) {
        glColor3f(0.75, 0.87, 0.33);
    }
    else {
        glColor3f(0.46, 0.53, 0.19);
    }

    glVertex2f(78.5, 50.1);
    glVertex2f(79, 49);
    glVertex2f(79.39, 50.2);
    glVertex2f(78.5, 54.5);

    glEnd();

    glBegin(GL_POLYGON);
    if (isday == true) {
        glColor3f(0.75, 0.87, 0.33);
    }
    else {
        glColor3f(0.46, 0.53, 0.19);
    }

    glVertex2f(79.39, 50.2);
    glVertex2f(80.4, 49.2);
    glVertex2f(78.5, 54.5);

    glEnd();

    glPopMatrix();

}

//ID23
void Sun() {

    //if(move_down_sun ==true){

    glPushMatrix();
    glTranslatef(0, move_sun, 0);

    glBegin(GL_TRIANGLES);
    glColor3f(0.93, 0.52, 0.13);

    glVertex2f(27.91, 76.55);
    glVertex2f(28.5, 77.6);
    glVertex2f(27, 77.87);

    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.93, 0.52, 0.13);

    glVertex2f(28.5, 77.6);
    glVertex2f(29.46, 78.1);
    glVertex2f(28.3, 79);

    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.93, 0.52, 0.13);

    glVertex2f(29.46, 78.1);
    glVertex2f(30.52, 78.2);
    glVertex2f(29.9, 79.5);

    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.93, 0.52, 0.13);

    glVertex2f(30.52, 78.2);
    glVertex2f(31.46, 77.79);
    glVertex2f(31.7, 79.3);

    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.93, 0.52, 0.13);

    glVertex2f(31.46, 77.79);
    glVertex2f(32.1, 77.06);
    glVertex2f(32.98, 78.4);

    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.93, 0.52, 0.13);

    glVertex2f(32.1, 77.06);
    glVertex2f(32.4, 76.23);
    glVertex2f(33.65, 77.07);

    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.93, 0.52, 0.13);

    glVertex2f(32.4, 76.23);
    glVertex2f(33.8, 75.6);
    glVertex2f(32.4, 76.23);

    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.93, 0.52, 0.13);

    glVertex2f(32.4, 76.23);
    glVertex2f(32.29, 75.35);
    glVertex2f(33.8, 75.6);

    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.93, 0.52, 0.13);

    glVertex2f(32.29, 75.35);
    glVertex2f(31.8, 74.53);
    glVertex2f(33.3, 74.3);

    glEnd();

    glBegin(GL_POLYGON);
    for (int i = 0;i < 360;i++) {
        glColor3f(1, 0.95, 0);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 360;
        float r = 2.25;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 30.13, y + 75.98);
    }
    glEnd();
    glPopMatrix();
    //}

}

//ID24
void Moon() {

    glPushMatrix();
    glTranslatef(0, -4.1, 0);

    glTranslatef(0, move_moon, 0);

    glBegin(GL_POLYGON);
    for (int i = 0;i < 360;i++) {

        glColor3f(0.92, 0.96, 0.96);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 360;
        float r = 2.25;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 30.13, y + 75.98);
    }
    glEnd();


    glPopMatrix();

}

//ID25
void Cloud1() {
    glPushMatrix();
    glTranslatef(2, 0, 0);

    glBegin(GL_POLYGON);
    for (int i = 0;i < 360;i++)
    {
        if (isday == true) {
            glColor3f(1, 1, 1);
        }
        else {
            glColor3f(0.5, 0.53, 0.53);
        }
        float pi = 3.1416;
        float A = (i * 2 * pi) / 360;
        float r = 1.4;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 20.07, y + 71.62);
    }
    glEnd();

    glBegin(GL_POLYGON);
    for (int i = 0;i < 360;i++)
    {
        if (isday == true) {
            glColor3f(1, 1, 1);
        }
        else {
            glColor3f(0.5, 0.53, 0.53);
        }
        float pi = 3.1416;
        float A = (i * 2 * pi) / 360;
        float r = 2.1;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 21.28, y + 71.69);
    }
    glEnd();

    glBegin(GL_POLYGON);
    for (int i = 0;i < 360;i++)
    {
        if (isday == true) {
            glColor3f(1, 1, 1);
        }
        else {
            glColor3f(0.5, 0.53, 0.53);
        }
        float pi = 3.1416;
        float A = (i * 2 * pi) / 360;
        float r = 1.8;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 23, y + 74);
    }
    glEnd();

    glBegin(GL_POLYGON);
    for (int i = 0;i < 360;i++)
    {
        if (isday == true) {
            glColor3f(1, 1, 1);
        }
        else {
            glColor3f(0.5, 0.53, 0.53);
        }
        float pi = 3.1416;
        float A = (i * 2 * pi) / 360;
        float r = 2.2;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 26.35, y + 75.38);
    }
    glEnd();

    glBegin(GL_POLYGON);
    for (int i = 0;i < 360;i++)
    {
        if (isday == true) {
            glColor3f(1, 1, 1);
        }
        else {
            glColor3f(0.5, 0.53, 0.53);
        }
        float pi = 3.1416;
        float A = (i * 2 * pi) / 360;
        float r = 1.7;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 29.28, y + 74.37);
    }
    glEnd();

    glBegin(GL_POLYGON);
    for (int i = 0;i < 360;i++)
    {
        if (isday == true) {
            glColor3f(1, 1, 1);
        }
        else {
            glColor3f(0.5, 0.53, 0.53);
        }
        float pi = 3.1416;
        float A = (i * 2 * pi) / 360;
        float r = 1.5;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 31.86, y + 73.06);
    }
    glEnd();

    glBegin(GL_POLYGON);
    for (int i = 0;i < 360;i++)
    {
        if (isday == true) {
            glColor3f(1, 1, 1);
        }
        else {
            glColor3f(0.5, 0.53, 0.53);
        }
        float pi = 3.1416;
        float A = (i * 2 * pi) / 360;
        float r = 1.6;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 33.51, y + 71.77);
    }
    glEnd();

    glBegin(GL_POLYGON);
    for (int i = 0;i < 360;i++)
    {
        if (isday == true) {
            glColor3f(1, 1, 1);
        }
        else {
            glColor3f(0.5, 0.53, 0.53);
        }
        float pi = 3.1416;
        float A = (i * 2 * pi) / 360;
        float r = 2.1;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 31.55, y + 71.19);
    }
    glEnd();

    glBegin(GL_POLYGON);
    for (int i = 0;i < 360;i++)
    {
        if (isday == true) {
            glColor3f(1, 1, 1);
        }
        else {
            glColor3f(0.5, 0.53, 0.53);
        }
        float pi = 3.1416;
        float A = (i * 2 * pi) / 360;
        float r = 2.3;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 28.43, y + 71.77);
    }
    glEnd();

    glBegin(GL_POLYGON);
    for (int i = 0;i < 360;i++)
    {
        if (isday == true) {
            glColor3f(1, 1, 1);
        }
        else {
            glColor3f(0.5, 0.53, 0.53);
        }
        float pi = 3.1416;
        float A = (i * 2 * pi) / 360;
        float r = 2.5;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 25.07, y + 71.87);
    }
    glEnd();

    glPopMatrix();


}

//ID26
void Cloud2() {
    glPushMatrix();
    glTranslatef(20, 4.5, 0);
    glTranslatef(27.25, 72.8, 0);
    glScalef(0.5, 0.5, 1);
    glTranslatef(-27.25, -72.8, 0);

    glTranslatef(move_cloud2, 0, 0);
    glTranslatef(-100, 0, 0);

    glBegin(GL_POLYGON);
    for (int i = 0;i < 360;i++)
    {
        if (isday == true) {
            glColor3f(1, 1, 1);
        }
        else {
            glColor3f(0.5, 0.53, 0.53);
        }
        float pi = 3.1416;
        float A = (i * 2 * pi) / 360;
        float r = 1.4;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 20.07, y + 71.62);
    }
    glEnd();

    glBegin(GL_POLYGON);
    for (int i = 0;i < 360;i++)
    {
        if (isday == true) {
            glColor3f(1, 1, 1);
        }
        else {
            glColor3f(0.5, 0.53, 0.53);
        }
        float pi = 3.1416;
        float A = (i * 2 * pi) / 360;
        float r = 2.1;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 21.28, y + 71.69);
    }
    glEnd();

    glBegin(GL_POLYGON);
    for (int i = 0;i < 360;i++)
    {
        if (isday == true) {
            glColor3f(1, 1, 1);
        }
        else {
            glColor3f(0.5, 0.53, 0.53);
        }
        float pi = 3.1416;
        float A = (i * 2 * pi) / 360;
        float r = 1.8;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 23, y + 74);
    }
    glEnd();

    glBegin(GL_POLYGON);
    for (int i = 0;i < 360;i++)
    {
        if (isday == true) {
            glColor3f(1, 1, 1);
        }
        else {
            glColor3f(0.5, 0.53, 0.53);
        }
        float pi = 3.1416;
        float A = (i * 2 * pi) / 360;
        float r = 2.2;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 26.35, y + 75.38);
    }
    glEnd();

    glBegin(GL_POLYGON);
    for (int i = 0;i < 360;i++)
    {
        if (isday == true) {
            glColor3f(1, 1, 1);
        }
        else {
            glColor3f(0.5, 0.53, 0.53);
        }
        float pi = 3.1416;
        float A = (i * 2 * pi) / 360;
        float r = 1.7;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 29.28, y + 74.37);
    }
    glEnd();

    glBegin(GL_POLYGON);
    for (int i = 0;i < 360;i++)
    {
        if (isday == true) {
            glColor3f(1, 1, 1);
        }
        else {
            glColor3f(0.5, 0.53, 0.53);
        }
        float pi = 3.1416;
        float A = (i * 2 * pi) / 360;
        float r = 1.5;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 31.86, y + 73.06);
    }
    glEnd();

    glBegin(GL_POLYGON);
    for (int i = 0;i < 360;i++)
    {
        if (isday == true) {
            glColor3f(1, 1, 1);
        }
        else {
            glColor3f(0.5, 0.53, 0.53);
        }
        float pi = 3.1416;
        float A = (i * 2 * pi) / 360;
        float r = 1.6;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 33.51, y + 71.77);
    }
    glEnd();

    glBegin(GL_POLYGON);
    for (int i = 0;i < 360;i++)
    {
        if (isday == true) {
            glColor3f(1, 1, 1);
        }
        else {
            glColor3f(0.5, 0.53, 0.53);
        }
        float pi = 3.1416;
        float A = (i * 2 * pi) / 360;
        float r = 2.1;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 31.55, y + 71.19);
    }
    glEnd();

    glBegin(GL_POLYGON);
    for (int i = 0;i < 360;i++)
    {
        if (isday == true) {
            glColor3f(1, 1, 1);
        }
        else {
            glColor3f(0.5, 0.53, 0.53);
        }
        float pi = 3.1416;
        float A = (i * 2 * pi) / 360;
        float r = 2.3;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 28.43, y + 71.77);
    }
    glEnd();

    glBegin(GL_POLYGON);
    for (int i = 0;i < 360;i++)
    {
        if (isday == true) {
            glColor3f(1, 1, 1);
        }
        else {
            glColor3f(0.5, 0.53, 0.53);
        }
        float pi = 3.1416;
        float A = (i * 2 * pi) / 360;
        float r = 2.5;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 25.07, y + 71.87);
    }
    glEnd();

    glPopMatrix();

}

//ID27
void Cloud3() {
    glPushMatrix();
    glTranslatef(40, 2, 0);
    glTranslatef(27.25, 72.8, 0);
    glScalef(0.7, 0.7, 1);
    glTranslatef(-27.25, -72.8, 0);

    glTranslatef(move_cloud3, 0, 0);
    glTranslatef(-180, 0, 0);

    glBegin(GL_POLYGON);
    for (int i = 0;i < 360;i++)
    {
        if (isday == true) {
            glColor3f(1, 1, 1);
        }
        else {
            glColor3f(0.5, 0.53, 0.53);
        }
        float pi = 3.1416;
        float A = (i * 2 * pi) / 360;
        float r = 1.4;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 20.07, y + 71.62);
    }
    glEnd();

    glBegin(GL_POLYGON);
    for (int i = 0;i < 360;i++)
    {
        if (isday == true) {
            glColor3f(1, 1, 1);
        }
        else {
            glColor3f(0.5, 0.53, 0.53);
        }
        float pi = 3.1416;
        float A = (i * 2 * pi) / 360;
        float r = 2.1;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 21.28, y + 71.69);
    }
    glEnd();

    glBegin(GL_POLYGON);
    for (int i = 0;i < 360;i++)
    {
        if (isday == true) {
            glColor3f(1, 1, 1);
        }
        else {
            glColor3f(0.5, 0.53, 0.53);
        }
        float pi = 3.1416;
        float A = (i * 2 * pi) / 360;
        float r = 1.8;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 23, y + 74);
    }
    glEnd();

    glBegin(GL_POLYGON);
    for (int i = 0;i < 360;i++)
    {
        if (isday == true) {
            glColor3f(1, 1, 1);
        }
        else {
            glColor3f(0.5, 0.53, 0.53);
        }
        float pi = 3.1416;
        float A = (i * 2 * pi) / 360;
        float r = 2.2;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 26.35, y + 75.38);
    }
    glEnd();

    glBegin(GL_POLYGON);
    for (int i = 0;i < 360;i++)
    {
        if (isday == true) {
            glColor3f(1, 1, 1);
        }
        else {
            glColor3f(0.5, 0.53, 0.53);
        }
        float pi = 3.1416;
        float A = (i * 2 * pi) / 360;
        float r = 1.7;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 29.28, y + 74.37);
    }
    glEnd();

    glBegin(GL_POLYGON);
    for (int i = 0;i < 360;i++)
    {
        if (isday == true) {
            glColor3f(1, 1, 1);
        }
        else {
            glColor3f(0.5, 0.53, 0.53);
        }
        float pi = 3.1416;
        float A = (i * 2 * pi) / 360;
        float r = 1.5;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 31.86, y + 73.06);
    }
    glEnd();

    glBegin(GL_POLYGON);
    for (int i = 0;i < 360;i++)
    {
        if (isday == true) {
            glColor3f(1, 1, 1);
        }
        else {
            glColor3f(0.5, 0.53, 0.53);
        }
        float pi = 3.1416;
        float A = (i * 2 * pi) / 360;
        float r = 1.6;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 33.51, y + 71.77);
    }
    glEnd();

    glBegin(GL_POLYGON);
    for (int i = 0;i < 360;i++)
    {
        if (isday == true) {
            glColor3f(1, 1, 1);
        }
        else {
            glColor3f(0.5, 0.53, 0.53);
        }
        float pi = 3.1416;
        float A = (i * 2 * pi) / 360;
        float r = 2.1;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 31.55, y + 71.19);
    }
    glEnd();

    glBegin(GL_POLYGON);
    for (int i = 0;i < 360;i++)
    {
        if (isday == true) {
            glColor3f(1, 1, 1);
        }
        else {
            glColor3f(0.5, 0.53, 0.53);
        }
        float pi = 3.1416;
        float A = (i * 2 * pi) / 360;
        float r = 2.3;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 28.43, y + 71.77);
    }
    glEnd();

    glBegin(GL_POLYGON);
    for (int i = 0;i < 360;i++)
    {
        if (isday == true) {
            glColor3f(1, 1, 1);
        }
        else {
            glColor3f(0.5, 0.53, 0.53);
        }
        float pi = 3.1416;
        float A = (i * 2 * pi) / 360;
        float r = 2.5;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 25.07, y + 71.87);
    }
    glEnd();

    glPopMatrix();

}

//ID28
void Cloud4() {
    glPushMatrix();
    glTranslatef(80, 2, 0);
    glTranslatef(27.25, 72.8, 0);
    glScalef(0.6, 0.6, 1);
    glTranslatef(-27.25, -72.8, 0);

    glTranslatef(move_cloud4, 0, 0);
    glTranslatef(-290, -10, 0);

    glBegin(GL_POLYGON);
    for (int i = 0;i < 360;i++)
    {
        if (isday == true) {
            glColor3f(1, 1, 1);
        }
        else {
            glColor3f(0.5, 0.53, 0.53);
        }
        float pi = 3.1416;
        float A = (i * 2 * pi) / 360;
        float r = 1.4;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 20.07, y + 71.62);
    }
    glEnd();

    glBegin(GL_POLYGON);
    for (int i = 0;i < 360;i++)
    {
        if (isday == true) {
            glColor3f(1, 1, 1);
        }
        else {
            glColor3f(0.5, 0.53, 0.53);
        }
        float pi = 3.1416;
        float A = (i * 2 * pi) / 360;
        float r = 2.1;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 21.28, y + 71.69);
    }
    glEnd();

    glBegin(GL_POLYGON);
    for (int i = 0;i < 360;i++)
    {
        if (isday == true) {
            glColor3f(1, 1, 1);
        }
        else {
            glColor3f(0.5, 0.53, 0.53);
        }
        float pi = 3.1416;
        float A = (i * 2 * pi) / 360;
        float r = 1.8;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 23, y + 74);
    }
    glEnd();

    glBegin(GL_POLYGON);
    for (int i = 0;i < 360;i++)
    {
        if (isday == true) {
            glColor3f(1, 1, 1);
        }
        else {
            glColor3f(0.5, 0.53, 0.53);
        }
        float pi = 3.1416;
        float A = (i * 2 * pi) / 360;
        float r = 2.2;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 26.35, y + 75.38);
    }
    glEnd();

    glBegin(GL_POLYGON);
    for (int i = 0;i < 360;i++)
    {
        if (isday == true) {
            glColor3f(1, 1, 1);
        }
        else {
            glColor3f(0.5, 0.53, 0.53);
        }
        float pi = 3.1416;
        float A = (i * 2 * pi) / 360;
        float r = 1.7;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 29.28, y + 74.37);
    }
    glEnd();

    glBegin(GL_POLYGON);
    for (int i = 0;i < 360;i++)
    {
        if (isday == true) {
            glColor3f(1, 1, 1);
        }
        else {
            glColor3f(0.5, 0.53, 0.53);
        }
        float pi = 3.1416;
        float A = (i * 2 * pi) / 360;
        float r = 1.5;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 31.86, y + 73.06);
    }
    glEnd();

    glBegin(GL_POLYGON);
    for (int i = 0;i < 360;i++)
    {
        if (isday == true) {
            glColor3f(1, 1, 1);
        }
        else {
            glColor3f(0.5, 0.53, 0.53);
        }
        float pi = 3.1416;
        float A = (i * 2 * pi) / 360;
        float r = 1.6;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 33.51, y + 71.77);
    }
    glEnd();

    glBegin(GL_POLYGON);
    for (int i = 0;i < 360;i++)
    {
        if (isday == true) {
            glColor3f(1, 1, 1);
        }
        else {
            glColor3f(0.5, 0.53, 0.53);
        }
        float pi = 3.1416;
        float A = (i * 2 * pi) / 360;
        float r = 2.1;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 31.55, y + 71.19);
    }
    glEnd();

    glBegin(GL_POLYGON);
    for (int i = 0;i < 360;i++)
    {
        if (isday == true) {
            glColor3f(1, 1, 1);
        }
        else {
            glColor3f(0.5, 0.53, 0.53);
        }
        float pi = 3.1416;
        float A = (i * 2 * pi) / 360;
        float r = 2.3;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 28.43, y + 71.77);
    }
    glEnd();

    glBegin(GL_POLYGON);
    for (int i = 0;i < 360;i++)
    {
        if (isday == true) {
            glColor3f(1, 1, 1);
        }
        else {
            glColor3f(0.5, 0.53, 0.53);
        }
        float pi = 3.1416;
        float A = (i * 2 * pi) / 360;
        float r = 2.5;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 25.07, y + 71.87);
    }
    glEnd();

    glPopMatrix();

}

//ID54
void Aircraft1() {

    glPushMatrix();
    glTranslatef(130, 0, 0);
    glTranslatef(move_aircraft1, 0, 0);

    //mainpart
    glBegin(GL_POLYGON);
    if (isday == true) {
        glColor3f(0.14, 0.63, 0.75);
    }
    else {
        glColor3f(0.1, 0.47, 0.56);
    }

    glVertex2f(4.3, 67.7);
    glVertex2f(6.1, 67.54);
    glVertex2f(7.4, 67.5);
    glVertex2f(8.8, 67.52);
    glVertex2f(10.03, 67.75);
    glVertex2f(11.3, 70.52);
    glVertex2f(10.743, 71.113);
    glVertex2f(6.9, 71.113);
    glVertex2f(6.5, 70.2);
    glVertex2f(6.15, 69.6);
    glVertex2f(6, 69.5);
    glVertex2f(5.53, 69.35);
    glVertex2f(4.85, 69.2);
    glVertex2f(3.89, 69.07);
    glVertex2f(3.63, 68.67);

    glEnd();

    //glass part
    glBegin(GL_POLYGON);
    if (isday == true) {
        glColor3f(0.51, 0.81, 0.77);
    }
    else {
        glColor3f(0.39, 0.64, 0.61);
    }

    glVertex2f(4.01, 69.44);
    glVertex2f(4.24, 69.92);
    glVertex2f(4.47, 70.28);
    glVertex2f(4.78, 70.556);
    glVertex2f(5.09, 70.72);
    glVertex2f(5.54, 70.89);
    glVertex2f(6, 71);
    glVertex2f(6.45, 71.07);
    glVertex2f(6.9, 71.113);
    glVertex2f(6.5, 70.2);
    glVertex2f(6.15, 69.6);
    glVertex2f(6, 69.5);
    glVertex2f(5.53, 69.35);
    glVertex2f(4.85, 69.2);
    glVertex2f(3.89, 69.07);

    glEnd();

    //black & yellow part
    glBegin(GL_POLYGON);
    glColor3f(0.87, 0.63, 0.17);

    glVertex2f(6.81, 67.73);
    glVertex2f(7.26, 67.64);
    glVertex2f(7, 69);
    glVertex2f(6.42, 69.07);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.87, 0.63, 0.17);

    glVertex2f(7, 69);
    glVertex2f(7.97, 69.23);
    glVertex2f(7.41, 69.33);
    glVertex2f(6.42, 69.07);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.81, 0.52, 0.14);

    glVertex2f(7.26, 67.64);
    glVertex2f(8.33, 67.547);
    glVertex2f(7.97, 69.23);
    glVertex2f(7, 69);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.03, 0.17, 0.25);

    glVertex2f(6.88, 67.82);
    glVertex2f(7.157, 67.8);
    glVertex2f(6.88, 68.9);
    glVertex2f(6.58, 68.94);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.03, 0.17, 0.25);

    glVertex2f(8.33, 67.547);
    glVertex2f(10.03, 67.75);
    glVertex2f(10.33, 68.6);
    glVertex2f(10.75, 68.97);
    glVertex2f(10.38, 69.11);
    glVertex2f(9.888, 69.26);
    glVertex2f(9.32, 69.37);
    glVertex2f(8.75, 69.43);
    glVertex2f(7.97, 69.41);
    glVertex2f(7.41, 69.33);
    glVertex2f(7.97, 69.23);

    glEnd();

    //Back part
    glBegin(GL_POLYGON);
    if (isday == true) {
        glColor3f(0.83, 0.87, 0.84);
    }
    else {
        glColor3f(0.51, 0.62, 0.52);
    }

    glVertex2f(10.15, 68);
    glVertex2f(10.79, 68.08);
    glVertex2f(11.38, 69.13);
    glVertex2f(10.64, 69.1);

    glEnd();

    glBegin(GL_POLYGON);
    if (isday == true) {
        glColor3f(0.83, 0.87, 0.84);
    }
    else {
        glColor3f(0.51, 0.62, 0.52);
    }

    glVertex2f(10.75, 69.3);
    glVertex2f(11.62, 69.36);
    glVertex2f(12.4, 70.6);
    glVertex2f(11.65, 70.68);
    glVertex2f(11.3, 70.52);

    glEnd();

    //fire
    glBegin(GL_POLYGON);
    if (isday == true) {
        glColor3f(0.54, 0.91, 0.85);
    }
    else {
        glColor3f(0.39, 0.69, 0.64);
    }

    glVertex2f(10.83, 68.16);
    glVertex2f(12.1, 68.26);
    glVertex2f(11.62, 68.31);
    glVertex2f(12.47, 68.43);
    glVertex2f(12.35, 68.48);
    glVertex2f(12.98, 68.51);
    glVertex2f(12.69, 68.58);
    glVertex2f(13.13, 68.65);
    glVertex2f(12.5, 68.67);
    glVertex2f(12.64, 68.72);
    glVertex2f(11.73, 68.77);
    glVertex2f(11.83, 68.82);
    glVertex2f(12.24, 68.86);
    glVertex2f(11.66, 68.896);
    glVertex2f(11.9, 68.94);
    glVertex2f(11.59, 68.95);
    glVertex2f(11.69, 68.996);
    glVertex2f(11.3, 68.99);

    glEnd();

    glPushMatrix();
    glTranslatef(0.9, 1.4, 0);
    glBegin(GL_POLYGON);
    if (isday == true) {
        glColor3f(0.54, 0.91, 0.85);
    }
    else {
        glColor3f(0.39, 0.69, 0.64);
    }

    glVertex2f(10.83, 68.16);
    glVertex2f(12.1, 68.26);
    glVertex2f(11.62, 68.31);
    glVertex2f(12.47, 68.43);
    glVertex2f(12.35, 68.48);
    glVertex2f(12.98, 68.51);
    glVertex2f(12.69, 68.58);
    glVertex2f(13.13, 68.65);
    glVertex2f(12.5, 68.67);
    glVertex2f(12.64, 68.72);
    glVertex2f(11.73, 68.77);
    glVertex2f(11.83, 68.82);
    glVertex2f(12.24, 68.86);
    glVertex2f(11.66, 68.896);
    glVertex2f(11.9, 68.94);
    glVertex2f(11.59, 68.95);
    glVertex2f(11.69, 68.996);
    glVertex2f(11.3, 68.99);

    glEnd();

    glPopMatrix();

    //wing 1
    glBegin(GL_POLYGON);
    if (isday == true) {
        glColor3f(0.1, 0.43, 0.56);
    }
    else {
        glColor3f(0.08, 0.36, 0.47);
    }

    glVertex2f(6.72, 69.97);
    glVertex2f(6.798, 69.8999);
    glVertex2f(6.96, 69.81);
    glVertex2f(7.18, 69.72);
    glVertex2f(7.53, 69.64);
    glVertex2f(7.941, 69.591);
    glVertex2f(8.31, 69.59);
    glVertex2f(8.85, 69.62);
    glVertex2f(9.38, 69.69);
    glVertex2f(9.93, 69.82);
    glVertex2f(8.35, 70.56);
    glVertex2f(8.03, 70.55);
    glVertex2f(7.79, 70.52);
    glVertex2f(7.44, 70.44);
    glVertex2f(7.16, 70.31);
    glVertex2f(6.86, 70.09);

    glEnd();

    glBegin(GL_POLYGON);
    if (isday == true) {
        glColor3f(0.01, 0.31, 0.42);
    }
    else {
        glColor3f(0.02, 0.2, 0.29);
    }

    glVertex2f(7.37, 70.05);
    glVertex2f(7.61, 69.94);
    glVertex2f(7.91, 69.86);
    glVertex2f(8.34, 69.79);
    glVertex2f(8.75, 69.76);
    glVertex2f(9.38, 69.77);
    glVertex2f(9.93, 69.82);
    glVertex2f(12.36, 71.07);
    glVertex2f(11.598, 71.14);
    glVertex2f(8.82, 70.64);
    glVertex2f(8.35, 70.56);
    glVertex2f(8.07, 70.47);
    glVertex2f(7.79, 70.35);
    glVertex2f(7.53, 70.19);

    glEnd();

    //wing 2
    glBegin(GL_POLYGON);
    if (isday == true) {
        glColor3f(0.01, 0.31, 0.42);
    }
    else {
        glColor3f(0.02, 0.2, 0.29);
    }

    glVertex2f(8.64, 71.113);
    glVertex2f(10.40, 71.113);
    glVertex2f(11.83, 72.65);
    glVertex2f(11.31, 72.73);

    glEnd();

    //wing 3
    glBegin(GL_POLYGON);
    if (isday == true) {
        glColor3f(0.01, 0.19, 0.26);
    }
    else {
        glColor3f(0.02, 0.2, 0.29);
    }

    glVertex2f(7.93, 71.113);
    glVertex2f(9.41, 71.113);
    glVertex2f(10.55, 72.724);
    glVertex2f(10.17, 72.76);

    glEnd();

    glPopMatrix();

}

//ID55
void Aircraft2() {

    glPushMatrix();
    glTranslatef(90, 0, 0);
    glTranslatef(move_aircraft2, 0, 0);


    glBegin(GL_POLYGON);
    for (int i = 0;i < 360;i++)
    {
        glColor3f(0.02, 0.12, 0.24);

        float pi = 3.1416;
        float A = (i * 2 * pi) / 360;
        float r = 0.23;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 110.44, y + 75.955);
    }
    glEnd();

    glBegin(GL_POLYGON);
    for (int i = 0;i < 360;i++)
    {
        if (isday == true) {
            glColor3f(0.88, 0.2, 0.01);
        }
        else {
            glColor3f(0.58, 0.13, 0.01);
        }


        float pi = 3.1416;
        float A = (i * 2 * pi) / 360;
        float r = 0.77;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 111.2, y + 75.995);
    }
    glEnd();

    glBegin(GL_POLYGON);
    for (int i = 0;i < 360;i++)
    {
        glColor3f(0.02, 0.12, 0.24);

        float pi = 3.1416;
        float A = (i * 2 * pi) / 360;
        float r = 0.52;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 119.57, y + 75.974);
    }
    glEnd();

    //wing on the top(orange)
    glBegin(GL_POLYGON);
    glColor3f(0.99, 0.51, 0.05);

    glVertex2f(118.102, 77.593);
    glVertex2f(119.303, 76.849);
    glVertex2f(119.549, 78.398);
    glVertex2f(119.099, 78.767);

    glEnd();

    //wing on the top(black)
    glBegin(GL_POLYGON);
    glColor3f(0.02, 0.14, 0.24);

    glVertex2f(118.102, 77.593);
    glVertex2f(119.303, 76.849);
    glVertex2f(119.33, 77.019);
    glVertex2f(118.19, 77.709);

    glEnd();

    //circle 1 on top wing
    glBegin(GL_POLYGON);
    for (int i = 0;i < 360;i++)
    {
        glColor3f(0.85, 0.2, 0);

        float pi = 3.1416;
        float A = (i * 2 * pi) / 360;
        float r = 0.26;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 119.137, y + 77.92);
    }
    glEnd();

    //circle 2 on top wing
    glBegin(GL_POLYGON);
    for (int i = 0;i < 360;i++)
    {
        glColor3f(1, 0.68, 0.03);

        float pi = 3.1416;
        float A = (i * 2 * pi) / 360;
        float r = 0.17;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 119.137, y + 77.92);
    }
    glEnd();

    //lower wing(orange)
    glBegin(GL_POLYGON);
    glColor3f(0.99, 0.51, 0.05);

    glVertex2f(117.736, 74.25);
    glVertex2f(118.86, 73.85);
    glVertex2f(119.33, 74.21);
    glVertex2f(118.811, 74.745);

    glEnd();

    //lower wing(black)
    glBegin(GL_POLYGON);
    glColor3f(0.02, 0.14, 0.24);

    glVertex2f(117.736, 74.25);
    glVertex2f(118.145, 74.105);
    glVertex2f(118.995, 74.557);
    glVertex2f(118.811, 74.745);

    glEnd();


    //lower yellow part
    glBegin(GL_POLYGON);
    glColor3f(0.99, 0.51, 0.06);

    glVertex2f(113.193, 72.54);
    glVertex2f(115.7, 72.54);
    glVertex2f(115.7, 73.67);
    glVertex2f(113.193, 73.728);

    glEnd();
    //window 1
    glBegin(GL_POLYGON);
    glColor3f(0.25, 0.41, 0.63);

    glVertex2f(113.36, 72.9);
    glVertex2f(113.67, 72.9);
    glVertex2f(113.67, 73.42);
    glVertex2f(113.36, 73.42);

    glEnd();

    //window 2
    glBegin(GL_POLYGON);
    glColor3f(0.25, 0.41, 0.63);

    glVertex2f(113.86, 72.9);
    glVertex2f(114.17, 72.9);
    glVertex2f(114.17, 73.42);
    glVertex2f(113.86, 73.42);

    glEnd();

    //window 3
    glBegin(GL_POLYGON);
    glColor3f(0.25, 0.41, 0.63);

    glVertex2f(114.36, 72.9);
    glVertex2f(114.67, 72.9);
    glVertex2f(114.67, 73.42);
    glVertex2f(114.36, 73.42);

    glEnd();

    //window 4
    glBegin(GL_POLYGON);
    glColor3f(0.25, 0.41, 0.63);

    glVertex2f(114.86, 72.9);
    glVertex2f(115.17, 72.9);
    glVertex2f(115.17, 73.42);
    glVertex2f(114.86, 73.42);

    glEnd();

    //parts near window
    glBegin(GL_POLYGON);
    glColor3f(0.05, 0.12, 0.25);

    glVertex2f(115.36, 73.17);
    glVertex2f(115.55, 73.17);
    glVertex2f(115.55, 73.41);
    glVertex2f(115.36, 73.41);

    glEnd();

    glLineWidth(0.001);
    glBegin(GL_LINES);
    glColor3f(0.05, 0.12, 0.25);

    glVertex2f(115.36, 73.03);
    glVertex2f(115.55, 73.03);

    glVertex2f(115.36, 72.89);
    glVertex2f(115.55, 72.89);

    glEnd();

    //lower black part
    glBegin(GL_POLYGON);
    glColor3f(0.05, 0.12, 0.25);

    glVertex2f(112.347, 74.374);
    glVertex2f(112.35, 74.22);
    glVertex2f(112.4, 74.08);
    glVertex2f(112.536, 73.926);
    glVertex2f(112.692, 73.858);
    glVertex2f(113.193, 73.728);
    glVertex2f(114.289, 73.587);
    glVertex2f(115.349, 73.55);
    glVertex2f(116.654, 73.623);
    glVertex2f(116.662, 73.957);
    glVertex2f(116.245, 73.882);
    glVertex2f(115.596, 73.859);
    glVertex2f(114.94, 73.874);
    glVertex2f(114.277, 73.934);
    glVertex2f(113.599, 74.046);
    glVertex2f(112.928, 74.21);

    glEnd();

    glBegin(GL_POLYGON);
    if (isday == true) {
        glColor3f(1, 1, 1);
    }
    else {
        glColor3f(0.91, 0.92, 0.93);
    }

    glVertex2f(110.92, 75.099);
    glVertex2f(111.256, 74.869);
    glVertex2f(111.664, 74.669);
    glVertex2f(112.347, 74.374);
    glVertex2f(112.928, 74.21);
    glVertex2f(113.599, 74.046);
    glVertex2f(114.277, 73.934);
    glVertex2f(114.94, 73.874);
    glVertex2f(115.596, 73.859);
    glVertex2f(116.245, 73.882);
    glVertex2f(116.662, 73.957);
    glVertex2f(116.888, 73.99);
    glVertex2f(117.736, 74.25);
    glVertex2f(118.182, 74.425);
    glVertex2f(118.811, 74.745);
    glVertex2f(119.371, 75.145);
    glVertex2f(119.714, 75.477);
    glVertex2f(119.719, 76.47);
    glVertex2f(119.303, 76.849);
    glVertex2f(118.822, 77.193);
    glVertex2f(118.102, 77.593);
    glVertex2f(117.359, 77.89);
    glVertex2f(115.803, 78.199);
    glVertex2f(115.059, 78.165);
    glVertex2f(118.822, 77.193);
    glVertex2f(114.533, 78.096);
    glVertex2f(113.744, 77.993);
    glVertex2f(113.047, 77.81);
    glVertex2f(112.269, 77.559);
    glVertex2f(111.548, 77.261);
    glVertex2f(110.92, 76.913);
    glVertex2f(111.157, 76.556);
    glVertex2f(111.256, 75.995);
    glVertex2f(111.141, 75.387);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.02, 0.12, 0.24);

    glVertex2f(110.92, 75.099);
    glVertex2f(111.141, 75.387);
    glVertex2f(111.157, 76.556);
    glVertex2f(110.92, 76.913);
    glVertex2f(110.827, 76.5);
    glVertex2f(110.816, 75.458);

    glEnd();


    glLineWidth(0.1);
    glBegin(GL_LINES);
    glColor3f(0.04, 0.07, 0.15);
    //middle black line
    glVertex2f(119.75, 75.995);
    glVertex2f(111.157, 75.995);
    //upper black line
    glVertex2f(111.157, 76.556);
    glVertex2f(111.66, 76.73);

    glVertex2f(112.5, 77);
    glVertex2f(111.66, 76.73);

    glVertex2f(112.5, 77);
    glVertex2f(113.437, 77.189);

    glVertex2f(114.309, 77.321);
    glVertex2f(113.437, 77.189);

    glVertex2f(114.309, 77.321);
    glVertex2f(115.123, 77.378);

    glVertex2f(116.094, 77.37);
    glVertex2f(115.123, 77.378);

    glVertex2f(116.094, 77.37);
    glVertex2f(116.999, 77.288);

    glVertex2f(117.822, 77.115);
    glVertex2f(116.999, 77.288);

    glVertex2f(117.822, 77.115);
    glVertex2f(118.611, 76.9);

    glVertex2f(119.212, 76.67);
    glVertex2f(118.611, 76.9);

    glVertex2f(119.212, 76.67);
    glVertex2f(119.719, 76.47);

    //lower black line
    glVertex2f(111.141, 75.387);
    glVertex2f(111.638, 75.199);

    glVertex2f(112.288, 75);
    glVertex2f(111.638, 75.199);

    glVertex2f(112.288, 75);
    glVertex2f(113.08, 74.822);

    glVertex2f(113.88, 74.67);
    glVertex2f(113.08, 74.822);

    glVertex2f(113.88, 74.67);
    glVertex2f(114.479, 74.599);

    glVertex2f(115.098, 74.552);
    glVertex2f(114.479, 74.599);

    glVertex2f(115.098, 74.552);
    glVertex2f(115.687, 74.56);

    glVertex2f(116.297, 74.584);
    glVertex2f(115.687, 74.56);

    glVertex2f(116.297, 74.584);
    glVertex2f(116.795, 74.623);

    glVertex2f(117.309, 74.696);
    glVertex2f(116.795, 74.623);

    glVertex2f(117.309, 74.696);
    glVertex2f(117.829, 74.819);

    glVertex2f(118.316, 74.959);
    glVertex2f(117.829, 74.819);

    glVertex2f(118.316, 74.959);
    glVertex2f(118.808, 75.12);

    glVertex2f(119.211, 75.289);
    glVertex2f(118.808, 75.12);

    glVertex2f(119.211, 75.289);
    glVertex2f(119.714, 75.477);

    glEnd();

    glPopMatrix();

}

//ID56
void Aircraft3() {

    glPushMatrix();
    glTranslatef(150, 0, 0);
    glTranslatef(move_aircraft3, 0, 0);

    //main part
    glBegin(GL_POLYGON);
    glColor3f(0.1, 0.2, 0.25);

    glVertex2f(56.44, 71.66);
    glVertex2f(56.856, 70.692);
    glVertex2f(58.1899, 70.311);
    glVertex2f(59.572, 70.311);
    glVertex2f(61.621, 71.07);
    glVertex2f(62.72, 76.029);
    glVertex2f(59.334, 74.933);
    glVertex2f(58.762, 72.503);

    glEnd();

    //glass part
    glBegin(GL_POLYGON);
    glColor3f(0.41, 0.76, 0.71);

    glVertex2f(56.44, 71.66);
    glVertex2f(58.762, 72.503);
    glVertex2f(59.334, 74.933);
    glVertex2f(58.507, 74.69);
    glVertex2f(57.659, 74.37);
    glVertex2f(57, 74);
    glVertex2f(56.684, 73.299);
    glVertex2f(56.486, 72.522);

    glEnd();

    //white part
    glBegin(GL_POLYGON);
    glColor3f(0.59, 0.67, 0.6);

    glVertex2f(61.621, 71.07);
    glVertex2f(63.074, 71.486);
    glVertex2f(63.933, 75.862);
    glVertex2f(62.598, 75.465);

    glEnd();

    //wing on the top
    glBegin(GL_POLYGON);
    glColor3f(0.1, 0.43, 0.56);

    glVertex2f(59.887, 75.131);
    glVertex2f(61.999, 75.809);
    glVertex2f(62.781, 79.799);
    glVertex2f(61.973, 79.549);

    glEnd();

    //lower wing 1
    glBegin(GL_POLYGON);
    glColor3f(0.02, 0.36, 0.46);

    glVertex2f(60.802, 68.319);
    glVertex2f(61.831, 68.34);
    glVertex2f(60, 71);
    glVertex2f(58.671, 70.293);

    glEnd();

    //lower wing 2
    glBegin(GL_POLYGON);
    glColor3f(0.1, 0.43, 0.56);

    glVertex2f(59.358, 71.24);
    glVertex2f(62.607, 68.693);
    glVertex2f(63.873, 68.721);
    glVertex2f(61.258, 71.764);

    glEnd();

    //blue
    glBegin(GL_POLYGON);
    glColor3f(0.13, 0.62, 0.76);

    glVertex2f(60.07, 73.133);
    glVertex2f(63.167, 74.21);
    glVertex2f(62.72, 76.029);
    glVertex2f(59.649, 75.69);

    glEnd();

    //white
    glBegin(GL_POLYGON);
    glColor3f(0.69, 0.76, 0.69);

    glVertex2f(60.07, 73.133);
    glVertex2f(61.045, 73.4767);
    glVertex2f(60.7096, 75.703);
    glVertex2f(59.649, 75.69);

    glEnd();

    //black
    glBegin(GL_POLYGON);
    glColor3f(0.13, 0.12, 0.12);

    glVertex2f(60.173, 73.385);
    glVertex2f(60.479, 73.709);
    glVertex2f(60.22, 75.35);
    glVertex2f(59.82, 75.54);

    glEnd();

    glPopMatrix();

}


//keyboard function
//ID57
void handleKeypress(unsigned char key, int x, int y) {

    switch (key) {

    case 't':

        ismovetrain = !ismovetrain;

        break;
    case 'n':
        move_down_sun = true;

        break;

    case 'd':
        isday = true;
        move_moon = 0;
        move_up_moon = false;
        move_sun = 0;
        move_down_sun = false;

        break;

    case 'z':
        zoom_to_firestation_from_scenario_01 = true;
        break;

    case 'q':
        zoom_to_firestation_from_scenario_01 = false;
        zoom_to_firestation_from_scenario_01_value = 1;
        break;

    }
    glutPostRedisplay();
}


//Animation functions

//ID58
void train_animation(int value) {

    if (ismovetrain == true) {

        move_train -= 0.8;
    }


    if (move_train < -300) {

        move_train = 0;

    }

    glutPostRedisplay();

    glutTimerFunc(20, train_animation, 0);

}

//ID59
void car1_animation(int value) {

    move_car1 += 0.2;

    if (move_car1 > 120) {

        move_car1 = 0;

    }

    glutPostRedisplay();

    glutTimerFunc(20, car1_animation, 0);

}

//60
void car2_animation(int value) {

    move_car2 -= 0.2;

    if (move_car2 < -120) {

        move_car2 = 0;

    }

    glutPostRedisplay();

    glutTimerFunc(20, car2_animation, 0);

}

//ID61
void car3_animation(int value) {

    move_car3 += 0.4;

    if (move_car3 > 120) {

        move_car3 = 0;

    }

    glutPostRedisplay();

    glutTimerFunc(20, car3_animation, 0);

}

//ID62
void cloud2_animation(int value) {

    move_cloud2 += 0.1;

    if (move_cloud2 > 300) {

        move_cloud2 = 0;

    }

    glutPostRedisplay();

    glutTimerFunc(20, cloud2_animation, 0);

}

//ID63
void cloud3_animation(int value) {

    move_cloud3 += 0.1;

    if (move_cloud3 > 360) {

        move_cloud3 = 0;

    }

    glutPostRedisplay();

    glutTimerFunc(20, cloud3_animation, 0);

}

//64
void cloud4_animation(int value) {

    move_cloud4 += 0.1;

    if (move_cloud4 > 350) {

        move_cloud4 = 0;

    }

    glutPostRedisplay();

    glutTimerFunc(20, cloud4_animation, 0);

}

//ID65
void sun_animation(int value) {
    if (move_down_sun == true && move_sun > -4.05) {
        move_sun -= 0.05;

    }
    if (move_sun < -3.9) {

        move_up_moon = true;
    }

    glutPostRedisplay();

    glutTimerFunc(20, sun_animation, 0);

}

//ID66
void moon_animation(int value) {

    if (move_up_moon == true && move_moon < 4.15) {
        move_moon += 0.05;
    }
    if (move_moon >= 4.1) {
        isday = false;
    }

    glutPostRedisplay();
    glutTimerFunc(20, moon_animation, 0);
}

//ID67
void aircraft1_animation(int value) {

    move_aircraft1 -= 0.15;

    if (move_aircraft1 < -200) {

        move_aircraft1 = 0;

    }

    glutPostRedisplay();

    glutTimerFunc(20, aircraft1_animation, 0);

}

//ID68
void aircraft2_animation(int value) {

    move_aircraft2 -= 0.2;

    if (move_aircraft2 < -210) {

        move_aircraft2 = 0;

    }

    glutPostRedisplay();

    glutTimerFunc(20, aircraft2_animation, 0);

}

//ID69
void aircraft3_animation(int value) {

    move_aircraft3 -= 0.25;

    if (move_aircraft3 < -250) {

        move_aircraft3 = 0;

    }

    glutPostRedisplay();

    glutTimerFunc(20, aircraft3_animation, 0);

}

//ID70
void robot1_animation(int value) {

    move_robot1 += 0.2;

    if (move_robot1 > 150) {

        move_robot1 = 0;

    }

    glutPostRedisplay();

    glutTimerFunc(20, robot1_animation, 0);

}

//rotation function
//ID71
void rotation_function(int value) {

    rotate_robot1 += 2.5f;

    if (rotate_robot1 > 360.0)

    {

        rotate_robot1 -= 360;

    }

    rotate_car3_wheel += 4;
    if (rotate_car3_wheel > 369) {
        rotate_car3_wheel -= 360;
    }


    glutPostRedisplay(); //Notify GLUT that the display has changed

    glutTimerFunc(20, rotation_function, 0); //Notify GLUT to call update again in 25 milliseconds

}

//ID72
void robot2_animation(int value) {

    move_robot2 += 0.2;

    if (move_robot2 > 220) {

        move_robot2 = 0;

    }

    glutPostRedisplay();

    glutTimerFunc(20, robot2_animation, 0);

}

//ID73
void robot3_animation(int value) {

    move_robot3 -= 0.2;

    if (move_robot3 < -200) {

        move_robot3 = 0;

    }

    glutPostRedisplay();

    glutTimerFunc(20, robot3_animation, 0);

}
//ID74
void zoomfirestation(int value) {
    if (zoom_to_firestation_from_scenario_01 && zoom_to_firestation_from_scenario_01_value < 6.5)
    {
        zoom_to_firestation_from_scenario_01_value += 0.05;
    }
    //cout << zoom_firestation_value << endl;
    glutPostRedisplay();
    glutTimerFunc(20, zoomfirestation, 0);
}

void zoom_to_normal_function_01(int value) {
    if (zoom_to_normal_scenario_01_value > 1)
    {
        zoom_to_normal_scenario_01_value -= 0.05;
    }
    //cout << zoom_firestation_value << endl;
    glutPostRedisplay();
    glutTimerFunc(20, zoom_to_normal_function_01, 0);
}

//ID74
/* void zoomfirestation(int value) {
    if (zoom_firestation)
    {
        zoom_firestation_value += 0.005;
    }
    glutPostRedisplay();
    glutTimerFunc(20, zoomfirestation, 0);
} */


void opi() {

    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);

    glClear(GL_COLOR_BUFFER_BIT); // Clear the color buffer with current clearing color

    glPushMatrix();

    glTranslatef(20, 44, 0);
    glScalef(zoom_to_normal_scenario_01_value, zoom_to_normal_scenario_01_value, 1);
    glTranslatef(-20, -44, 0);

    glTranslatef(25.19, 48.53, 0);
    glScalef(zoom_to_firestation_from_scenario_01_value, zoom_to_firestation_from_scenario_01_value, 1);
    glTranslatef(-25.19, -48.53, 0);

    Background1(); //ID1
    UndergroundFloor(); //ID2
    Light1(); //ID3
    Light2(); //ID4
    Light3(); //ID5
    Light4(); //ID6
    Light5(); //ID7
    Train(); //ID8
    Stand(); //ID9
    Robot2(); //ID10
    LeftPillar(); //ID11
    RightPillar(); //ID12
    Stair(); //ID13
    WallNearStair(); //ID14
    Robot3(); //ID15
    Dustbin(); //ID16
    Bench1(); //ID17
    Bench2(); //ID18
    Robot1(); //ID19
    Greenroad(); //ID20
    Road(); //ID21
    Sky(); //ID22
    Sun(); //ID23
    Moon(); //ID24
    Cloud1(); //ID25
    Cloud2(); //ID26
    Cloud3(); //ID27
    Cloud4(); //ID28
    Building1(); //ID29
    Building2(); //ID30
    Building3(); //ID31
    Building4(); //ID32
    Building5(); //ID33
    Building6(); //ID34
    Building8(); //ID35
    Building7(); //ID36
    Building9(); //ID37
    FireStation(); //ID38
    Text(); //ID39
    Tree1(); //ID40
    Tree2(); //ID41
    Tree3(); //ID42
    Tree4(); //ID43
    Tree5(); //ID44
    Tree6(); //ID45
    Tree7(); //ID46
    Tree8(); //ID47
    Tree9(); //ID48
    Tree10(); //ID49
    Car2(); //ID51
    Car1(); //ID50
    Car3(); //ID52
    GlassWall(); //ID53
    Aircraft1(); //ID54
    Aircraft2(); //ID55
    Aircraft3(); //ID56


    if (zoom_to_firestation_from_scenario_01_value > 6.05) {
        glutDisplayFunc(tishat);
        initTishat();
    }


    glPopMatrix();

    glFlush(); // Render now

}


void initOpi() {

    glutKeyboardFunc(handleKeypress); //ID57
    glutTimerFunc(20, train_animation, 0); //ID58
    glutTimerFunc(20, car1_animation, 0); //ID59
    glutTimerFunc(20, car2_animation, 0); //ID60
    glutTimerFunc(20, car3_animation, 0); //ID61
    glutTimerFunc(20, cloud2_animation, 0); //ID62
    glutTimerFunc(20, cloud3_animation, 0); //ID63
    glutTimerFunc(20, cloud4_animation, 0); //ID64
    glutTimerFunc(20, sun_animation, 0); //ID65
    glutTimerFunc(20, moon_animation, 0); //ID66
    glutTimerFunc(20, aircraft1_animation, 0); //ID67
    glutTimerFunc(20, aircraft2_animation, 0); //ID68
    glutTimerFunc(20, aircraft3_animation, 0); //ID69
    glutTimerFunc(20, robot1_animation, 0); //ID70
    glutTimerFunc(20, rotation_function, 0); //ID71
    glutTimerFunc(20, robot2_animation, 0); //ID72
    glutTimerFunc(20, robot3_animation, 0); //ID73
    glutTimerFunc(20, zoomfirestation, 0); //ID74

    glutTimerFunc(20, zoom_to_normal_function_01, 0);
}


/* Main function: GLUT runs as a console application starting at main() */

/* int main(int argc, char** argv) {

    glutInitWindowSize(1220, 720);
    glutInit(&argc, argv); // Initialize GLUT

    glutInitWindowPosition((glutGet(GLUT_SCREEN_WIDTH) - 1220) / 2,

        (glutGet(GLUT_SCREEN_HEIGHT) - 720) / 2);


    glutCreateWindow("City 1"); // Create window with the given title


    glutDisplayFunc(opi); // Register callback handler for window re-paint event

    glutKeyboardFunc(handleKeypress); //ID57
    glutTimerFunc(20, train_animation, 0); //ID58
    glutTimerFunc(20, car1_animation, 0); //ID59
    glutTimerFunc(20, car2_animation, 0); //ID60
    glutTimerFunc(20, car3_animation, 0); //ID61
    glutTimerFunc(20, cloud2_animation, 0); //ID62
    glutTimerFunc(20, cloud3_animation, 0); //ID63
    glutTimerFunc(20, cloud4_animation, 0); //ID64
    glutTimerFunc(20, sun_animation, 0); //ID65
    glutTimerFunc(20, moon_animation, 0); //ID66
    glutTimerFunc(20, aircraft1_animation, 0); //ID67
    glutTimerFunc(20, aircraft2_animation, 0); //ID68
    glutTimerFunc(20, aircraft3_animation, 0); //ID69
    glutTimerFunc(20, robot1_animation, 0); //ID70
    glutTimerFunc(20, rotation_function, 0); //ID71
    glutTimerFunc(20, robot2_animation, 0); //ID72
    glutTimerFunc(20, robot3_animation, 0); //ID73
    glutTimerFunc(20, zoomfirestation, 0); //ID74

    glutTimerFunc(20, zoom_to_normal_function_01, 0);


    gluOrtho2D(0, +130, 0, +80);

    glutMainLoop(); // Enter the event-processing loop

    return 0;

} */

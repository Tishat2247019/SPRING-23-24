#include <windows.h>
#include <GL/glut.h>
#include<math.h>
#include<iostream>
#include "THIRD_SCENARIO_TISHAT.cpp"
using namespace std;

bool isday = true;
bool ismovetrain = false;
float move_train = 0;
float move_bluecar = 0;
float move_cloud2 = 0;
float move_cloud3 = 0;
float move_cloud4 = 0;
float move_sun = 0;
bool move_down_sun = false;

bool move_up_moon = false;
float move_moon = 0;

float zoom_firestation_value = 1;
bool zoom_firestation = false;

//Underground Background
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

void UndergroundFloor() {

    glBegin(GL_POLYGON);
    glColor3f(0.8, 0.78, 0.81);

    glVertex2f(0, 0);
    glVertex2f(130, 0);
    glVertex2f(130, 11);
    glVertex2f(0, 11);

    glEnd();

}

void Light1() {

    glBegin(GL_POLYGON);
    glColor3f(1, 1, 1);

    glVertex2f(1.797, 36.866);
    glVertex2f(17.369, 36.886);
    glVertex2f(17.369, 37.544);
    glVertex2f(1.797, 37.554);

    glEnd();

}
void Light2() {

    glBegin(GL_POLYGON);
    glColor3f(1, 1, 1);

    glVertex2f(31.797, 36.866);
    glVertex2f(47.369, 36.886);
    glVertex2f(47.369, 37.544);
    glVertex2f(31.797, 37.554);

    glEnd();

}

void Light3() {

    glBegin(GL_POLYGON);
    glColor3f(1, 1, 1);

    glVertex2f(61.797, 36.866);
    glVertex2f(77.369, 36.886);
    glVertex2f(77.369, 37.544);
    glVertex2f(61.797, 37.554);

    glEnd();

}

void Light4() {

    glBegin(GL_POLYGON);
    glColor3f(1, 1, 1);

    glVertex2f(91.897, 36.866);
    glVertex2f(107.469, 36.886);
    glVertex2f(107.469, 37.544);
    glVertex2f(91.897, 37.554);

    glEnd();

}

void Light5() {

    glBegin(GL_POLYGON);
    glColor3f(1, 1, 1);

    glVertex2f(121.769, 36.886);
    glVertex2f(130, 36.886);
    glVertex2f(130, 37.554);
    glVertex2f(121.769, 37.544);

    glEnd();

}

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

void Sky() {

    glBegin(GL_POLYGON);
    if (isday == true) {
        glColor3f(0.55, 0.82, 0.85);
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

void BlueCar() {

    glPushMatrix();
    glTranslatef(move_bluecar, 0, 0);
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

//Left to right
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

void Aircraft1() {

    glBegin(GL_POLYGON);
    glColor3f(0.14, 0.63, 0.75);

    glVertex2f(3.51, 65.48);
    glVertex2f(6.47, 65.09);
    glVertex2f(10.94, 65.05);
    glVertex2f(12.97, 65.44);
    glVertex2f(13.4, 66.78);
    glVertex2f(15.07, 70.02);
    glVertex2f(14.12, 70.95);
    glVertex2f(10.3, 71.11);
    glVertex2f(7.88, 70.95);
    glVertex2f(7.4, 69.98);
    glVertex2f(6.4, 68.4);
    glVertex2f(5.6, 68.1);
    glVertex2f(4.45, 67.86);
    glVertex2f(2.94, 67.59);
    glVertex2f(2.46, 66.87);

    glEnd();

}


//keyboard function
void handleKeypress(unsigned char key, int x, int y) {

    switch (key) {

    case 't':

        ismovetrain = !ismovetrain;

        break;
    case 'n':
        move_down_sun = true;
        //isday = !isday;

        break;
    case 'd':
        //move_down_sun = true;
        //isday = !isday;
        isday = true;
        move_moon = 0;
        move_up_moon = false;
        move_sun = 0;
        move_down_sun = false;

        //cout << isday << endl;

        break;
    case 'z':
        zoom_firestation = true;
        break;

    case 'q':
        zoom_firestation = false;
        zoom_firestation_value = 1;
        break;

    }
    glutPostRedisplay();
}


//train animation function
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

void bluecar_animation(int value) {

    move_bluecar += 0.4;

    if (move_bluecar > 120) {

        move_bluecar = 0;

    }

    glutPostRedisplay();

    glutTimerFunc(20, bluecar_animation, 0);

}

void cloud2_animation(int value) {

    move_cloud2 += 0.1;

    if (move_cloud2 > 300) {

        move_cloud2 = 0;

    }

    glutPostRedisplay();

    glutTimerFunc(20, cloud2_animation, 0);

}

void cloud3_animation(int value) {

    move_cloud3 += 0.1;

    if (move_cloud3 > 360) {

        move_cloud3 = 0;

    }

    glutPostRedisplay();

    glutTimerFunc(20, cloud3_animation, 0);

}

void cloud4_animation(int value) {

    move_cloud4 += 0.1;

    if (move_cloud4 > 350) {

        move_cloud4 = 0;

    }

    glutPostRedisplay();

    glutTimerFunc(20, cloud4_animation, 0);

}

void sun_animation(int value) {
    if (move_down_sun == true && move_sun > -4.05) {
        move_sun -= 0.05;

    }
    if (move_sun < -3.9) {

        //isday = false;
        move_up_moon = true;
        //glutPostRedisplay();
    }

    // cout << move_sun << endl;
    // cout << isday << endl;

    glutPostRedisplay();

    glutTimerFunc(20, sun_animation, 0);

}


void moon_animation(int value) {

    if (move_up_moon == true && move_moon < 4.15) {
        move_moon += 0.05;
    }
    if (move_moon >= 4.1) {
        isday = false;
    }
    //cout << move_moon << endl;
    //cout << isday << endl;

    glutPostRedisplay();
    glutTimerFunc(20, moon_animation, 0);
}

void zoomfirestation(int value) {
    if (zoom_firestation && zoom_firestation_value < 3)
    {
        zoom_firestation_value += 0.008;
    }
    //cout << zoom_firestation_value << endl;
    glutPostRedisplay();
    glutTimerFunc(20, zoomfirestation, 0);
}


void opi() {

    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);

    glClear(GL_COLOR_BUFFER_BIT); // Clear the color buffer with current clearing color

    glPushMatrix();
    glTranslatef(25.19, 48.53, 0);
    glScalef(zoom_firestation_value, zoom_firestation_value, 1);
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
    LeftPillar(); //ID10
    RightPillar(); //ID11
    Stair(); //ID12
    WallNearStair(); //ID13
    Dustbin(); //ID14
    Bench1(); //ID15
    Bench2(); //ID16
    Greenroad(); //ID17
    Road(); //ID18
    Sky(); //ID19
    Sun(); //ID44
    Moon();
    Cloud1(); //ID45
    Cloud2(); //ID46
    Cloud3(); //ID47
    Cloud4(); //ID48
    Building1(); //ID20
    Building2(); //ID21
    Building3(); //ID22
    Building4(); //ID23
    Building5(); //ID24
    Building6(); //ID25
    Building8(); //ID28
    Building7(); //ID27
    Building9(); //ID29
    FireStation(); //ID30
    Text(); //ID31
    GlassWall(); //ID32
    Tree1(); //ID33
    Tree2(); //ID34
    Tree3(); //ID35
    Tree4(); //ID36
    Tree5(); //ID37
    Tree6(); //ID38
    Tree7(); //ID39
    Tree8(); //ID40
    Tree9(); //ID41
    Tree10(); //ID42
    BlueCar(); //ID43
    //Aircraft1(); //ID

    if (zoom_firestation_value >= 3) {
        glutDisplayFunc(tishat);
        initTishat();
    }

    glPopMatrix();

    glFlush(); // Render now

}


void initOpi() {

    glutTimerFunc(20, train_animation, 0);
    glutTimerFunc(20, bluecar_animation, 0);
    glutTimerFunc(20, cloud2_animation, 0);
    glutTimerFunc(20, cloud3_animation, 0);
    glutTimerFunc(20, cloud4_animation, 0);
    glutTimerFunc(20, sun_animation, 0);
    glutTimerFunc(20, moon_animation, 0);
    glutTimerFunc(20, zoomfirestation, 0);
    glutKeyboardFunc(handleKeypress);
}


/* Main function: GLUT runs as a console application starting at main() */

/* int main(int argc, char** argv) {

    glutInitWindowSize(1220, 720);
    glutInit(&argc, argv); // Initialize GLUT

    glutInitWindowPosition((glutGet(GLUT_SCREEN_WIDTH) - 1220) / 2,

        (glutGet(GLUT_SCREEN_HEIGHT) - 720) / 2);


    glutCreateWindow("City 1"); // Create window with the given title


    glutDisplayFunc(display); // Register callback handler for window re-paint event

    glutTimerFunc(20, train_animation, 0);
    glutTimerFunc(20, bluecar_animation, 0);
    glutTimerFunc(20, cloud2_animation, 0);
    glutTimerFunc(20, cloud3_animation, 0);
    glutTimerFunc(20, cloud4_animation, 0);
    glutTimerFunc(20, sun_animation, 0);
    glutTimerFunc(20, moon_animation, 0);
    glutTimerFunc(20, zoomfirestation, 0);
    glutKeyboardFunc(handleKeypress);

    gluOrtho2D(0, +130, 0, +80);

    glutMainLoop(); // Enter the event-processing loop

    return 0;

} */

#include <windows.h>
#include <GL/glut.h>

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
    glColor3f(0.678, 0.937, 0.145);

    glVertex2f(0, 37.544);
    glVertex2f(0, 39.826);
    glVertex2f(130, 39.826);
    glVertex2f(130, 37.554);

    glEnd();

}

void Road() {

    glBegin(GL_POLYGON);
    glColor3f(0.87, 0.89, 0.85);

    glVertex2f(0, 39.826);
    glVertex2f(0, 40.85);
    glVertex2f(130, 40.85);
    glVertex2f(130, 39.826);

    glEnd();

}

void Sky() {

    glBegin(GL_POLYGON);
    glColor3f(0.55, 0.82, 0.85);

    glVertex2f(0, 40.85);
    glVertex2f(0, 80);
    glVertex2f(130, 80);
    glVertex2f(130, 40.85);

    glEnd();

}
//Left to right
void Building1() {
    //main shape
    glBegin(GL_POLYGON);
    glColor3f(0.7, 0.91, 0.94);

    glVertex2f(112, 40.85);
    glVertex2f(125.5, 40.85);
    glVertex2f(125.5, 68.6);
    glVertex2f(112, 68.6);

    glEnd();

    //deep blue shades
    glBegin(GL_POLYGON);
    glColor3f(0.22, 0.52, 0.61);
    glVertex2f(112, 67);
    glVertex2f(125.5, 67);
    glVertex2f(125.5, 67.5);
    glVertex2f(112, 67.5);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.22, 0.52, 0.61);
    glVertex2f(112, 65.9);
    glVertex2f(125.5, 65.9);
    glVertex2f(125.5, 66.4);
    glVertex2f(112, 66.4);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.22, 0.52, 0.61);
    glVertex2f(112, 64.7);
    glVertex2f(125.5, 64.7);
    glVertex2f(125.5, 65.2);
    glVertex2f(112, 65.2);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.22, 0.52, 0.61);
    glVertex2f(112, 63.5);
    glVertex2f(125.5, 63.5);
    glVertex2f(125.5, 64);
    glVertex2f(112, 64);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.22, 0.52, 0.61);
    glVertex2f(112, 61.1);
    glVertex2f(125.5, 61.1);
    glVertex2f(125.5, 61.6);
    glVertex2f(112, 61.6);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.22, 0.52, 0.61);
    glVertex2f(112, 59.9);
    glVertex2f(125.5, 59.9);
    glVertex2f(125.5, 60.4);
    glVertex2f(112, 60.4);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.22, 0.52, 0.61);
    glVertex2f(112, 58.7);
    glVertex2f(125.5, 58.7);
    glVertex2f(125.5, 59.2);
    glVertex2f(112, 59.2);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.22, 0.52, 0.61);
    glVertex2f(112, 56.4);
    glVertex2f(125.5, 56.4);
    glVertex2f(125.5, 56.9);
    glVertex2f(112, 56.9);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.22, 0.52, 0.61);
    glVertex2f(112, 55.1);
    glVertex2f(125.5, 55.1);
    glVertex2f(125.5, 55.6);
    glVertex2f(112, 55.6);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.22, 0.52, 0.61);
    glVertex2f(112, 54);
    glVertex2f(125.5, 54);
    glVertex2f(125.5, 54.5);
    glVertex2f(112, 54.5);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.22, 0.52, 0.61);
    glVertex2f(112, 51.5);
    glVertex2f(125.5, 51.5);
    glVertex2f(125.5, 52);
    glVertex2f(112, 52);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.22, 0.52, 0.61);
    glVertex2f(112, 50.3);
    glVertex2f(125.5, 50.3);
    glVertex2f(125.5, 50.8);
    glVertex2f(112, 50.8);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.22, 0.52, 0.61);
    glVertex2f(112, 49.1);
    glVertex2f(125.5, 49.1);
    glVertex2f(125.5, 49.6);
    glVertex2f(112, 49.6);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.22, 0.52, 0.61);
    glVertex2f(112, 47.9);
    glVertex2f(125.5, 47.9);
    glVertex2f(125.5, 48.4);
    glVertex2f(112, 48.4);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.22, 0.52, 0.61);
    glVertex2f(112, 46.7);
    glVertex2f(125.5, 46.7);
    glVertex2f(125.5, 47.2);
    glVertex2f(112, 47.2);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.22, 0.52, 0.61);
    glVertex2f(112, 45.5);
    glVertex2f(125.5, 45.5);
    glVertex2f(125.5, 46);
    glVertex2f(112, 46);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.22, 0.52, 0.61);
    glVertex2f(112, 44.4);
    glVertex2f(125.5, 44.4);
    glVertex2f(125.5, 44.9);
    glVertex2f(112, 44.9);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.22, 0.52, 0.61);
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
    glColor3f(0.88, 0.93, 0.93);
    glVertex2f(112, 67);
    glVertex2f(125.5, 67);
    glVertex2f(125.5, 68.6);
    glVertex2f(112, 68.6);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.88, 0.93, 0.93);
    glVertex2f(112, 61.6);
    glVertex2f(125.5, 61.6);
    glVertex2f(125.5, 63.5);
    glVertex2f(112, 63.5);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.88, 0.93, 0.93);
    glVertex2f(112, 56.9);
    glVertex2f(125.5, 56.9);
    glVertex2f(125.5, 58.7);
    glVertex2f(112, 58.7);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.88, 0.93, 0.93);
    glVertex2f(112, 52.1);
    glVertex2f(125.5, 52.1);
    glVertex2f(125.5, 54);
    glVertex2f(112, 54);
    glEnd();

    //White lines
    glLineWidth(7);
    glBegin(GL_LINES);
    glColor3f(0.88, 0.93, 0.93);

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
    glColor3f(0.43, 0.78, 0.82);
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
    glColor3f(0.88, 0.93, 0.93);

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
    glColor3f(0.24, 0.77, 0.91);
    glVertex2f(100.28, 40.85);
    glVertex2f(108, 40.85);
    glVertex2f(108, 66);
    glVertex2f(100.28, 66);
    glEnd();

    //White part(bright side)
    glBegin(GL_POLYGON);
    glColor3f(1, 1, 1);
    glVertex2f(100.28, 65.1);
    glVertex2f(108, 65.1);
    glVertex2f(108, 66);
    glVertex2f(100.28, 66);
    glEnd();

    //lower white parts
    glLineWidth(5);
    glBegin(GL_LINES);
    glColor3f(1, 1, 1);

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
    glColor3f(0.22, 0.72, 0.85);
    glVertex2f(97.62, 40.85);
    glVertex2f(100.28, 40.85);
    glVertex2f(100.28, 66);
    glVertex2f(97.62, 66);
    glEnd();

    //White part(dark side)
    glBegin(GL_POLYGON);
    glColor3f(0.82, 0.83, 0.84);
    glVertex2f(97.62, 65.1);
    glVertex2f(100.28, 65.1);
    glVertex2f(100.28, 66);
    glVertex2f(97.62, 66);
    glEnd();

    //lower white parts(darkside)
    glLineWidth(5);
    glBegin(GL_LINES);
    glColor3f(0.82, 0.83, 0.84);

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
    glColor3f(1, 1, 1);
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
    glColor3f(0.41, 0.57, 0.5);
    glVertex2f(87.22, 72.1);
    glVertex2f(95.62, 72.1);
    glVertex2f(95.62, 74);
    glVertex2f(87.22, 74);
    glEnd();

    glLineWidth(5);
    glBegin(GL_LINES);
    glColor3f(0.41, 0.57, 0.5);

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
    glColor3f(0.24, 0.77, 0.91);
    glVertex2f(81.96, 40.85);
    glVertex2f(87.22, 40.85);
    glVertex2f(87.22, 72.1);
    glVertex2f(81.96, 72.1);
    glEnd();

    //White part(bright side)
    glBegin(GL_POLYGON);
    glColor3f(1, 1, 1);
    glVertex2f(81.96, 70.6);
    glVertex2f(87.22, 70.6);
    glVertex2f(87.22, 72.1);
    glVertex2f(81.96, 72.1);
    glEnd();

    //lower white parts
    glLineWidth(6);
    glBegin(GL_LINES);
    glColor3f(1, 1, 1);

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
    glColor3f(0.22, 0.72, 0.85);
    glVertex2f(79.9, 40.85);
    glVertex2f(81.96, 40.85);
    glVertex2f(81.96, 72.1);
    glVertex2f(79.9, 72.1);
    glEnd();

    //White part(dark side)
    glBegin(GL_POLYGON);
    glColor3f(0.82, 0.83, 0.84);
    glVertex2f(79.9, 70.6);
    glVertex2f(81.96, 70.6);
    glVertex2f(81.96, 72.1);
    glVertex2f(79.9, 72.1);
    glEnd();

    //lower white parts(darkside)
    glLineWidth(6);
    glBegin(GL_LINES);
    glColor3f(0.82, 0.83, 0.84);

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
    glColor3f(1, 1, 1);
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
    glColor3f(0.22, 0.52, 0.61);
    glVertex2f(112, 67);
    glVertex2f(125.5, 67);
    glVertex2f(125.5, 67.5);
    glVertex2f(112, 67.5);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.22, 0.52, 0.61);
    glVertex2f(112, 65.9);
    glVertex2f(125.5, 65.9);
    glVertex2f(125.5, 66.4);
    glVertex2f(112, 66.4);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.22, 0.52, 0.61);
    glVertex2f(112, 64.7);
    glVertex2f(125.5, 64.7);
    glVertex2f(125.5, 65.2);
    glVertex2f(112, 65.2);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.22, 0.52, 0.61);
    glVertex2f(112, 63.5);
    glVertex2f(125.5, 63.5);
    glVertex2f(125.5, 64);
    glVertex2f(112, 64);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.22, 0.52, 0.61);
    glVertex2f(112, 61.1);
    glVertex2f(125.5, 61.1);
    glVertex2f(125.5, 61.6);
    glVertex2f(112, 61.6);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.22, 0.52, 0.61);
    glVertex2f(112, 59.9);
    glVertex2f(125.5, 59.9);
    glVertex2f(125.5, 60.4);
    glVertex2f(112, 60.4);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.22, 0.52, 0.61);
    glVertex2f(112, 58.7);
    glVertex2f(125.5, 58.7);
    glVertex2f(125.5, 59.2);
    glVertex2f(112, 59.2);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.22, 0.52, 0.61);
    glVertex2f(112, 56.4);
    glVertex2f(125.5, 56.4);
    glVertex2f(125.5, 56.9);
    glVertex2f(112, 56.9);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.22, 0.52, 0.61);
    glVertex2f(112, 55.1);
    glVertex2f(125.5, 55.1);
    glVertex2f(125.5, 55.6);
    glVertex2f(112, 55.6);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.22, 0.52, 0.61);
    glVertex2f(112, 54);
    glVertex2f(125.5, 54);
    glVertex2f(125.5, 54.5);
    glVertex2f(112, 54.5);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.22, 0.52, 0.61);
    glVertex2f(112, 51.5);
    glVertex2f(125.5, 51.5);
    glVertex2f(125.5, 52);
    glVertex2f(112, 52);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.22, 0.52, 0.61);
    glVertex2f(112, 50.3);
    glVertex2f(125.5, 50.3);
    glVertex2f(125.5, 50.8);
    glVertex2f(112, 50.8);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.22, 0.52, 0.61);
    glVertex2f(112, 49.1);
    glVertex2f(125.5, 49.1);
    glVertex2f(125.5, 49.6);
    glVertex2f(112, 49.6);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.22, 0.52, 0.61);
    glVertex2f(112, 47.9);
    glVertex2f(125.5, 47.9);
    glVertex2f(125.5, 48.4);
    glVertex2f(112, 48.4);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.22, 0.52, 0.61);
    glVertex2f(112, 46.7);
    glVertex2f(125.5, 46.7);
    glVertex2f(125.5, 47.2);
    glVertex2f(112, 47.2);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.22, 0.52, 0.61);
    glVertex2f(112, 45.5);
    glVertex2f(125.5, 45.5);
    glVertex2f(125.5, 46);
    glVertex2f(112, 46);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.22, 0.52, 0.61);
    glVertex2f(112, 44.4);
    glVertex2f(125.5, 44.4);
    glVertex2f(125.5, 44.9);
    glVertex2f(112, 44.9);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.22, 0.52, 0.61);
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
    glColor3f(0.88, 0.93, 0.93);
    glVertex2f(112, 67);
    glVertex2f(125.5, 67);
    glVertex2f(125.5, 68.6);
    glVertex2f(112, 68.6);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.88, 0.93, 0.93);
    glVertex2f(112, 61.6);
    glVertex2f(125.5, 61.6);
    glVertex2f(125.5, 63.5);
    glVertex2f(112, 63.5);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.88, 0.93, 0.93);
    glVertex2f(112, 56.9);
    glVertex2f(125.5, 56.9);
    glVertex2f(125.5, 58.7);
    glVertex2f(112, 58.7);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.88, 0.93, 0.93);
    glVertex2f(112, 52.1);
    glVertex2f(125.5, 52.1);
    glVertex2f(125.5, 54);
    glVertex2f(112, 54);
    glEnd();

    glPopMatrix();

    //White line
    glLineWidth(7);
    glBegin(GL_LINES);
    glColor3f(0.88, 0.93, 0.93);

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
    glColor3f(0.43, 0.78, 0.82);
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
    glColor3f(0.7, 0.91, 0.94);

    glVertex2f(112, 40.85);
    glVertex2f(125.5, 40.85);
    glVertex2f(125.5, 68.6);
    glVertex2f(112, 68.6);

    glEnd();

    //deep blue shades
    glBegin(GL_POLYGON);
    glColor3f(0.22, 0.52, 0.61);
    glVertex2f(112, 67);
    glVertex2f(125.5, 67);
    glVertex2f(125.5, 67.5);
    glVertex2f(112, 67.5);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.22, 0.52, 0.61);
    glVertex2f(112, 65.9);
    glVertex2f(125.5, 65.9);
    glVertex2f(125.5, 66.4);
    glVertex2f(112, 66.4);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.22, 0.52, 0.61);
    glVertex2f(112, 64.7);
    glVertex2f(125.5, 64.7);
    glVertex2f(125.5, 65.2);
    glVertex2f(112, 65.2);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.22, 0.52, 0.61);
    glVertex2f(112, 63.5);
    glVertex2f(125.5, 63.5);
    glVertex2f(125.5, 64);
    glVertex2f(112, 64);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.22, 0.52, 0.61);
    glVertex2f(112, 61.1);
    glVertex2f(125.5, 61.1);
    glVertex2f(125.5, 61.6);
    glVertex2f(112, 61.6);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.22, 0.52, 0.61);
    glVertex2f(112, 59.9);
    glVertex2f(125.5, 59.9);
    glVertex2f(125.5, 60.4);
    glVertex2f(112, 60.4);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.22, 0.52, 0.61);
    glVertex2f(112, 58.7);
    glVertex2f(125.5, 58.7);
    glVertex2f(125.5, 59.2);
    glVertex2f(112, 59.2);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.22, 0.52, 0.61);
    glVertex2f(112, 56.4);
    glVertex2f(125.5, 56.4);
    glVertex2f(125.5, 56.9);
    glVertex2f(112, 56.9);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.22, 0.52, 0.61);
    glVertex2f(112, 55.1);
    glVertex2f(125.5, 55.1);
    glVertex2f(125.5, 55.6);
    glVertex2f(112, 55.6);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.22, 0.52, 0.61);
    glVertex2f(112, 54);
    glVertex2f(125.5, 54);
    glVertex2f(125.5, 54.5);
    glVertex2f(112, 54.5);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.22, 0.52, 0.61);
    glVertex2f(112, 51.5);
    glVertex2f(125.5, 51.5);
    glVertex2f(125.5, 52);
    glVertex2f(112, 52);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.22, 0.52, 0.61);
    glVertex2f(112, 50.3);
    glVertex2f(125.5, 50.3);
    glVertex2f(125.5, 50.8);
    glVertex2f(112, 50.8);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.22, 0.52, 0.61);
    glVertex2f(112, 49.1);
    glVertex2f(125.5, 49.1);
    glVertex2f(125.5, 49.6);
    glVertex2f(112, 49.6);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.22, 0.52, 0.61);
    glVertex2f(112, 47.9);
    glVertex2f(125.5, 47.9);
    glVertex2f(125.5, 48.4);
    glVertex2f(112, 48.4);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.22, 0.52, 0.61);
    glVertex2f(112, 46.7);
    glVertex2f(125.5, 46.7);
    glVertex2f(125.5, 47.2);
    glVertex2f(112, 47.2);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.22, 0.52, 0.61);
    glVertex2f(112, 45.5);
    glVertex2f(125.5, 45.5);
    glVertex2f(125.5, 46);
    glVertex2f(112, 46);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.22, 0.52, 0.61);
    glVertex2f(112, 44.4);
    glVertex2f(125.5, 44.4);
    glVertex2f(125.5, 44.9);
    glVertex2f(112, 44.9);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.22, 0.52, 0.61);
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
    glColor3f(0.88, 0.93, 0.93);
    glVertex2f(112, 67);
    glVertex2f(125.5, 67);
    glVertex2f(125.5, 68.6);
    glVertex2f(112, 68.6);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.88, 0.93, 0.93);
    glVertex2f(112, 61.6);
    glVertex2f(125.5, 61.6);
    glVertex2f(125.5, 63.5);
    glVertex2f(112, 63.5);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.88, 0.93, 0.93);
    glVertex2f(112, 56.9);
    glVertex2f(125.5, 56.9);
    glVertex2f(125.5, 58.7);
    glVertex2f(112, 58.7);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.88, 0.93, 0.93);
    glVertex2f(112, 52.1);
    glVertex2f(125.5, 52.1);
    glVertex2f(125.5, 54);
    glVertex2f(112, 54);
    glEnd();

    //White lines
    glLineWidth(7);
    glBegin(GL_LINES);
    glColor3f(0.88, 0.93, 0.93);

    glVertex2f(114.85, 61.6);
    glVertex2f(114.85, 43.2);

    glVertex2f(122.9, 61.6);
    glVertex2f(122.9, 43.2);

    glEnd();

    glPopMatrix();
}

void FireStation() {

    //circle
    glBegin(GL_POLYGON);
    glColor3f(0.86, 0.35, 0.35);
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

    // glLoadIdentity(); //Reset the drawing perspective
    glMatrixMode(GL_MODELVIEW);


    glPushMatrix();
    //glTranslatef(29.5321, 45.6455, 0);
    //glTranslatef(-5, 0, 0);
    glRotatef(180, 0, 1, 0);
    glTranslatef(-60, 0, 0);
    //circle
    glBegin(GL_POLYGON);
    glColor3f(0.86, 0.35, 0.35);
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
    glColor3f(0.91, 0.92, 0.91);
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

}

void display() {

    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);

    glClear(GL_COLOR_BUFFER_BIT); // Clear the color buffer with current clearing color


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
    Building1(); //ID20
    Building2(); //ID21
    Building3(); //ID22
    Building4(); //ID23
    Building5(); //ID24
    Building6(); //ID25
    Building8(); //ID28
    Building7(); //ID27
    FireStation(); //ID29
    glFlush(); // Render now

}


/* Main function: GLUT runs as a console application starting at main() */

int main(int argc, char** argv) {

    glutInitWindowSize(920, 520);
    glutInit(&argc, argv); // Initialize GLUT

    glutCreateWindow("City 1"); // Create window with the given title

    glutInitWindowPosition(50, 50); // Position the window's initial top-left corner

    glutDisplayFunc(display); // Register callback handler for window re-paint event

    gluOrtho2D(0, +130, 0, +80);

    glutMainLoop(); // Enter the event-processing loop

    return 0;

}
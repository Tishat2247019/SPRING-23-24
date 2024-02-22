#include <math.h>
#include <windows.h> // for MS Windows

#include <GL/glut.h> // GLUT, include glu.h and gl.h

/* Handler for window-repaint event. Call back when the window first appears and

whenever the window needs to be re-painted. */


void soil_effect(){

glBegin(GL_POLYGON);
glColor3f(0.8, 0.6, 0.4);
glVertex2f(-194, -84);
glVertex2f(-178, -68);
glVertex2f(-184, -44);
glVertex2f(-150, -24);
glVertex2f(-58, -26);
glVertex2f(164, -22);
glVertex2f(205, -47);
glVertex2f(302, -52);
glVertex2f(325, -70);
glVertex2f(330, -80);
glVertex2f(334, -86);

glEnd();
}

void tree(){

glBegin(GL_POLYGON);

glColor3f(0.0f, 1.0f, 0.0f);
glVertex2f(-140, 30.5);
glVertex2f(-152.5, 17.5);
glVertex2f(-168, 16.5);
glVertex2f(-179, 27);
glVertex2f(-180, 40);
glVertex2f(-189, 44);
glVertex2f(-197.2, 53.4);
glVertex2f(-200.2, 68);
glVertex2f(-197.5,80.5);
glVertex2f(-192.5,87.5);
glVertex2f(-184.3,91.3);
glVertex2f(-182.6,101.1);
glVertex2f(-176,109);
glVertex2f(-166,111.5);
glVertex2f(-155.8,111.85 );
glVertex2f(-150.8,110.2 );
glVertex2f(-145.4,109.2 );
glVertex2f(-140.4,114 );
glVertex2f(-129.8,117.6 );
glVertex2f(-119.05,117.35 );
glVertex2f(-111.1,113.7 );
glVertex2f(-104.4,106.2 );
glVertex2f(-100,100 );
glVertex2f(-92,100.6 );
glVertex2f(-82,97.4 );
glVertex2f(-76.1,88.8);
glVertex2f(-76,78.8);
glVertex2f(-78.45, 71.9);
glVertex2f(-73.6, 67.8);
glVertex2f(-70.2, 61.4);
glVertex2f(-71, 51);
glVertex2f(-75.86, 43.68);
glVertex2f(-73.04, 37.78);
glVertex2f(-70, 30);
glVertex2f(-73, 19);
glVertex2f(-85, 8.5);
glVertex2f(-99, 7.2);
glVertex2f(-112, 10);
glVertex2f(-120, 24.5);

glEnd();


glColor3f(0.5f, 0.3f, 0.0f);
glBegin(GL_POLYGON);
/*
glVertex2f(-120, 24.5);
glVertex2f(-140, 24.5);
glVertex2f(-140, -65);
glVertex2f(-162, -83);
glVertex2f(-108, -83);
glVertex2f(-120, -65);
glVertex2f(-120, -24.5);
*/

glVertex2f(-140, -65);
glVertex2f(-162, -83);
glVertex2f(-108, -83);
glVertex2f(-120, -65);
glVertex2f(-120, 24.5);
glVertex2f(-140, 24.5);
/*
*/

glEnd();

glBegin(GL_POLYGON);
glVertex2f(-120, 24.5);
glVertex2f(-107.7, 35);
glVertex2f(-113.7, 42);
glVertex2f(-119.7, 37);
glVertex2f(-119.7, 61);
glVertex2f(-131.7, 61);
glVertex2f(-131.7, 43);
glVertex2f(-140.2, 50.6);
glVertex2f(-144.7, 42);
glVertex2f(-140, 37);
glVertex2f(-140, 24.5);
glEnd();



}

void outline_tree(){

glColor3f(0, 0, 0);
glLineWidth(1.5);
glBegin(GL_LINES);

glVertex2f(-140, -65);
glVertex2f(-162, -83);

glVertex2f(-162, -83);
glVertex2f(-108, -83);

glVertex2f(-108, -83);
glVertex2f(-120, -65);

glVertex2f(-120, -65);
glVertex2f(-120, 24.5);

glVertex2f(-120, 24.5);
glVertex2f(-107.7, 35);

glVertex2f(-107.7, 35);
glVertex2f(-113.7, 42);

glVertex2f(-113.7, 42);
glVertex2f(-119.7, 37);

glVertex2f(-119.7, 37);
glVertex2f(-119.7, 61);

glVertex2f(-119.7, 61);
glVertex2f(-131.7, 61);

glVertex2f(-131.7, 61);
glVertex2f(-131.7, 43);

glVertex2f(-131.7, 43);
glVertex2f(-140.2, 50.6);

glVertex2f(-140.2, 50.6);
glVertex2f(-144.7, 42);

glVertex2f(-144.7, 42);
glVertex2f(-140, 37);

glVertex2f(-140, 37);
glVertex2f(-140, 24.5);

glVertex2f(-140, 24.5);
glVertex2f(-140, -65);


//round green leafs

glVertex2f(-140, 30.5);
glVertex2f(-152.5, 17.5);

glVertex2f(-152.5, 17.5);
glVertex2f(-168, 16.5);

glVertex2f(-168, 16.5);
glVertex2f(-179, 27);

glVertex2f(-179, 27);
glVertex2f(-180, 40);

glVertex2f(-180, 40);
glVertex2f(-189, 44);

glVertex2f(-189, 44);
glVertex2f(-197.2, 53.4);

glVertex2f(-197.2, 53.4);
glVertex2f(-200.2, 68);

glVertex2f(-200.2, 68);
glVertex2f(-197.5,80.5);

glVertex2f(-197.5,80.5);
glVertex2f(-192.5,87.5);

glVertex2f(-192.5,87.5);
glVertex2f(-184.3,91.3);

glVertex2f(-184.3,91.3);
glVertex2f(-182.6,101.1);

glVertex2f(-182.6,101.1);
glVertex2f(-176,109);

glVertex2f(-176,109);
glVertex2f(-166,111.5);

glVertex2f(-166,111.5);
glVertex2f(-155.8,111.85 );

glVertex2f(-155.8,111.85 );
glVertex2f(-150.8,110.2 );

glVertex2f(-150.8,110.2 );
glVertex2f(-145.4,109.2 );

glVertex2f(-145.4,109.2 );
glVertex2f(-140.4,114 );

glVertex2f(-140.4,114 );
glVertex2f(-129.8,117.6 );

glVertex2f(-129.8,117.6 );
glVertex2f(-119.05,117.35 );

glVertex2f(-119.05,117.35 );
glVertex2f(-111.1,113.7 );

glVertex2f(-111.1,113.7 );
glVertex2f(-104.4,106.2 );

glVertex2f(-104.4,106.2 );
glVertex2f(-100,100 );

glVertex2f(-100,100 );
glVertex2f(-92,100.6 );

glVertex2f(-92,100.6 );
glVertex2f(-82,97.4 );

glVertex2f(-82,97.4 );
glVertex2f(-76.1,88.8);

glVertex2f(-76.1,88.8);
glVertex2f(-76,78.8);

glVertex2f(-76,78.8);
glVertex2f(-78.45, 71.9);

glVertex2f(-78.45, 71.9);
glVertex2f(-73.6, 67.8);

glVertex2f(-73.6, 67.8);
glVertex2f(-70.2, 61.4);

glVertex2f(-70.2, 61.4);
glVertex2f(-71, 51);

glVertex2f(-71, 51);
glVertex2f(-75.86, 43.68);

glVertex2f(-75.86, 43.68);
glVertex2f(-73.04, 37.78);

glVertex2f(-73.04, 37.78);
glVertex2f(-70, 30);

glVertex2f(-70, 30);
glVertex2f(-73, 19);

glVertex2f(-73, 19);
glVertex2f(-85, 8.5);

glVertex2f(-85, 8.5);
glVertex2f(-99, 7.2);

glVertex2f(-99, 7.2);
glVertex2f(-112, 10);

glVertex2f(-112, 10);
glVertex2f(-120, 16.5);
//glVertex2f(-120, 24.5);


glEnd();

}

void outlilne(){
glColor3f(0, 0, 0);
glLineWidth(1.5);

glBegin(GL_LINES);
 glVertex2f(10, 270);
glVertex2f(-32, 210);

glVertex2f(-32, 210);
glVertex2f(-44, 210);

glVertex2f(-44, 210);
glVertex2f(10, 285);

glVertex2f(10, 285);
glVertex2f(64, 210);

glVertex2f(64, 210);
glVertex2f(52, 210);

glVertex2f(52, 210);
glVertex2f(10, 270);



 glEnd();


 glBegin(GL_LINES);
glVertex2f(-32, 210);
glVertex2f(-32, 20);

glVertex2f(-32, 20);
glVertex2f(52, 20);

glVertex2f(52, 20);
glVertex2f(52, 210);


glEnd();

glBegin(GL_LINES);
glVertex2f(-39.9, 20);
glVertex2f(-60, 0);

glVertex2f(-60, 0);
glVertex2f(80, 0);

glVertex2f(80, 0);
glVertex2f(60, 20);

glVertex2f(60, 20);
glVertex2f(-39.9, 20);

glEnd();

//lowere portion outline
glBegin(GL_LINES);
glVertex2f(-40, 0);
glVertex2f(-40, -83);

glVertex2f(-40, -83);
glVertex2f(60, -83);

glVertex2f(60, -83);
glVertex2f(60, 0);


glEnd();

glBegin(GL_LINES);

glVertex2f(52, 75.66478);
glVertex2f(160, 0);

glVertex2f(160, 0);
glVertex2f(140, 0);

glVertex2f(140, 0);
glVertex2f(52, 60.576048);

glVertex2f(52, 60.576048);
glVertex2f(52, 75.66478);
glEnd();

glBegin(GL_LINES);

glVertex2f(100, 60);
glVertex2f(99.9899323003119, 42.04304600);

glVertex2f(99.9899323003119, 42.04304600);
glVertex2f(119.9380400662845, 28.0674041695164);

glVertex2f(119.9380400662845, 28.0674041695164);
glVertex2f(120,60);

glVertex2f(120,60);
glVertex2f(100, 60);


glEnd();

//right window
glBegin(GL_LINES);

glVertex2f(80,-30);
glVertex2f(80,-60);

glVertex2f(80,-60);
glVertex2f(110,-60);

glVertex2f(110,-60);
glVertex2f(110,-30);

glVertex2f(110,-30);
glVertex2f(80,-30);

glEnd();

//LOWER OUTLILNE UNDER THE RIGHT WINDOW

glBegin(GL_LINES);

glVertex2f(60,-80);
glVertex2f(140,-80);

glVertex2f(140,-80);
glVertex2f(140,0);


glEnd();


}

void building(){

// buildin right extension
glBegin(GL_POLYGON);

glColor3f(1, 0.5, 0);

glVertex2f(52, 75.66478);
glVertex2f(160, 0);
glVertex2f(140, 0);
glVertex2f(52, 60.576048);
glEnd();

glBegin(GL_POLYGON);

glColor3f(1, 0.6, 0);

glVertex2f(52, 60.576048);
glVertex2f(140, 0);
glVertex2f(140, -80);
glVertex2f(52, -80);
glEnd();



glBegin(GL_POLYGON);

glColor3f(1, 0.7, 0);

glVertex2f(10, 270);

glVertex2f(-32, 210);

glVertex2f(-32, 20);

glVertex2f(52, 20);
glVertex2f(52, 210);


glEnd();

glBegin(GL_POLYGON);

glColor3f(1, 0.5, 0);

glVertex2f(-39.9, 20);

glVertex2f(-60, 0);

glVertex2f(80, 0);

glVertex2f(60, 20);

glEnd();


glBegin(GL_POLYGON);

glColor3f(1, 0.7, 0);

glVertex2f(-40, 0);

glVertex2f(-40, -83);

glVertex2f(60, -83);

glVertex2f(60, 0);

glEnd();


glBegin(GL_POLYGON);

glColor3f(0.7, 0.8, 0.8);
glVertex2f(-20, -83);
glVertex2f(-20, -20);
glVertex2f(-8.5, -13.5);
glVertex2f(3, -9.5);
glVertex2f(16, -9.5);
glVertex2f(28, -13);
glVertex2f(40, -20);
glVertex2f(40, -83);

glEnd();



glBegin(GL_POLYGON);

glColor3f(1, 0.5, 0);

glVertex2f(10, 270);
glVertex2f(-32, 210);
glVertex2f(-44, 210);
glVertex2f(10, 285);
glVertex2f(64, 210);
glVertex2f(52, 210);
glEnd();

//right window
glBegin(GL_POLYGON);

glColor3f(0.6, 0.6, 0.6);

glVertex2f(80,-30);
glVertex2f(80,-60);
glVertex2f(110,-60);
glVertex2f(110,-30);

glEnd();



//windows
glColor3f(0.6, 0.6, 0.6);
glBegin(GL_POLYGON);


glVertex2f(-20, 60);
glVertex2f(-20, 30);
glVertex2f(0, 30);
glVertex2f(0, 60);

glEnd();


glBegin(GL_POLYGON);

//glColor3f(1, 1.0, 1);

glVertex2f(20, 60);
glVertex2f(20, 30);
glVertex2f(40, 30);
glVertex2f(40, 60);

glEnd();

glBegin(GL_POLYGON);

//glColor3f(1, 1.0, 1);

glVertex2f(-20, 100);
glVertex2f(-20, 70);
glVertex2f(0, 70);
glVertex2f(0, 100);

glEnd();


glBegin(GL_POLYGON);

//glColor3f(1, 1.0, 1);

glVertex2f(20, 100);
glVertex2f(20, 70);
glVertex2f(40, 70);
glVertex2f(40,100);

glEnd();


glBegin(GL_POLYGON);

//glColor3f(1, 1.0, 1);

glVertex2f(-20, 140);
glVertex2f(-20, 110);
glVertex2f(0, 110);
glVertex2f(0, 140);

glEnd();


glBegin(GL_POLYGON);

//glColor3f(1, 1.0, 1);

glVertex2f(20, 140);
glVertex2f(20, 110);
glVertex2f(40, 110);
glVertex2f(40,140);

glEnd();


glBegin(GL_POLYGON);

//glColor3f(1, 1.0, 1);

glVertex2f(-20, 180);
glVertex2f(-20, 150);
glVertex2f(0, 150);
glVertex2f(0, 180);

glEnd();


glBegin(GL_POLYGON);

//glColor3f(1, 1.0, 1);

glVertex2f(20, 180);
glVertex2f(20, 150);
glVertex2f(40, 150);
glVertex2f(40,180);

glEnd();

glBegin(GL_POLYGON);

//glColor3f(1, 1.0, 1);

glVertex2f(-20, 220);
glVertex2f(-20, 190);
glVertex2f(0, 190);
glVertex2f(0, 220);

glEnd();


glBegin(GL_POLYGON);

//glColor3f(1, 1.0, 1);

glVertex2f(20, 220);
glVertex2f(20, 190);
glVertex2f(40, 190);
glVertex2f(40,220);

glEnd();

//right chimni

glBegin(GL_POLYGON);

glColor3f(0.6, 0.6, 0.6);

glVertex2f(100, 60);
glVertex2f(99.9899323003119, 42.04304600);
glVertex2f(119.9380400662845, 28.0674041695164);
glVertex2f(120,60);

glEnd();

}

void lampPost(){

glColor3f(0, 0, 0.4);
glBegin(GL_POLYGON);
glVertex2f(183, -74);
glVertex2f(180, -80);
glVertex2f(200, -80);
glVertex2f(197, -74);
glEnd();

glBegin(GL_POLYGON);
glVertex2f(186, -71);
glVertex2f(185, -74);
glVertex2f(195, -74);
glVertex2f(193.5, -71);

glEnd();

glBegin(GL_POLYGON);
glVertex2f(187.5, 9.6);
glVertex2f(185, 9.6);
glVertex2f(182.9, 27.1);
glVertex2f(196.6, 27.2);
glVertex2f(194.2, 9.6);
glVertex2f(191.8, 9.6);
glVertex2f(191.625, -71);
glVertex2f(187.5, -71);
glEnd();

glBegin(GL_POLYGON);

glVertex2f(181.6, 28.6);
glVertex2f(181.6, 27.2);
glVertex2f(197.8, 27.2);
glVertex2f(197.8, 28.6);

glEnd();


glBegin(GL_POLYGON);

glVertex2f(182.5, 29.4);
glVertex2f(182.5, 28.6);
glVertex2f(196.8, 28.6);
glVertex2f(196.8, 29.4);

glEnd();
glBegin(GL_POLYGON);

glVertex2f(183.3, 29.4);
glVertex2f(183.7, 34);
glVertex2f(184.9, 36.1);
glVertex2f(186.9, 37.5);
glVertex2f(189, 37.8);
glVertex2f(190.8, 37.7);
glVertex2f(192.9, 36.5);
glVertex2f(194.8, 34.4);
glVertex2f(195.6, 31.6);
glVertex2f(195.5701992480065, 29.4);

glEnd();

glBegin(GL_POLYGON);

glVertex2f(188.499790461081, 37.730989124382);
glVertex2f(188.5, 40);
glVertex2f(189.5, 40);
glVertex2f(189.5028454998969, 37.7720488899183);

glEnd();

glBegin(GL_POLYGON);
glColor3f(1, 1, 0);
glVertex2f(184.495930978, 27.1116491312282);
glVertex2f(185, 20);
glVertex2f(188.5, 20);
glVertex2f(188.592557196, 27.1415515123092);

glEnd();

glBegin(GL_POLYGON);
glColor3f(1, 1, 0);
glVertex2f(190.6003196590304, 27.1562067128396);
glVertex2f(190.5, 20);
glVertex2f(194, 20);
glVertex2f(194.8000958977091, 27.1868620138519);
glEnd();

glBegin(GL_POLYGON);
glColor3f(1, 1, 0);
glVertex2f(185.2, 18);
glVertex2f(186, 11);
glVertex2f(188.6, 11);
glVertex2f(188.6, 18);

glEnd();

glBegin(GL_POLYGON);
glColor3f(1, 1, 0);
glVertex2f(190.3, 18);
glVertex2f(190.2, 11);
glVertex2f(193, 11);
glVertex2f(194, 18);

glEnd();


}

void bench(){

//lower supports
glBegin(GL_POLYGON);
glColor3f(0.5, 0.3, 0);
glVertex2f(212, -70);
glVertex2f(212, -84);
glVertex2f(215, -84);
glVertex2f(215, -70);

glEnd();

glBegin(GL_POLYGON);
glColor3f(0.5, 0.5, 0);
glVertex2f(220, -70);
glVertex2f(220, -84);
glVertex2f(222, -84);
glVertex2f(222, -70);
glEnd();

glBegin(GL_POLYGON);
glColor3f(0.5, 0.5, 0);
glVertex2f(272, -70);
glVertex2f(272, -84);
glVertex2f(274, -84);
glVertex2f(274, -70);
glEnd();

glBegin(GL_POLYGON);
glColor3f(0.5, 0.3, 0);
glVertex2f(279, -70);
glVertex2f(279, -84);
glVertex2f(282, -84);
glVertex2f(282, -70);

glEnd();

glBegin(GL_POLYGON);
glColor3f(0.5, 0.5, 0);
glVertex2f(206, -68);
glVertex2f(206, -70);
glVertex2f(288, -70);
glVertex2f(288, -68);
glEnd();

//sitting space
glBegin(GL_POLYGON);
glColor3f(0.5, 0.3, 0);
glVertex2f(215, -55);
glVertex2f(206, -68);
glVertex2f(288, -68);
glVertex2f(280, -55);

glEnd();

//two vertical support pillers
glColor3f(0.5, 0.5, 0);
glBegin(GL_POLYGON);
glVertex2f(220, -23);
glVertex2f(220, -55);
glVertex2f(222, -55);
glVertex2f(222, -23);
glEnd();

glBegin(GL_POLYGON);
glVertex2f(273, -23);
glVertex2f(273, -55);
glVertex2f(275, -55);
glVertex2f(275, -23);
glEnd();

// outline of two vertical support pillers
glColor3f(0, 0, 0);
glLineWidth(1.5);
glBegin(GL_LINES);
glVertex2f(220, -23);
glVertex2f(220, -55);

glVertex2f(220, -55);
glVertex2f(222, -55);

glVertex2f(222, -55);
glVertex2f(222, -23);

glVertex2f(222, -23);
glVertex2f(220, -23);
glEnd();

glBegin(GL_LINES);
glVertex2f(273, -23);
glVertex2f(273, -55);

glVertex2f(273, -55);
glVertex2f(275, -55);

glVertex2f(275, -55);
glVertex2f(275, -23);

glVertex2f(275, -23);
glVertex2f(273, -23);
glEnd();

//four horizontal support
glColor3f(0.5, 0.3, 0);
glBegin(GL_POLYGON);
glVertex2f(215, -44);
glVertex2f(215, -48);
glVertex2f(280, -48);
glVertex2f(280, -44);
glEnd();

glBegin(GL_POLYGON);
glVertex2f(215, -38);
glVertex2f(215, -42);
glVertex2f(280, -42);
glVertex2f(280, -38);
glEnd();

glBegin(GL_POLYGON);
glVertex2f(215, -31.5);
glVertex2f(215, -35.5);
glVertex2f(280, -35.5);
glVertex2f(280, -31.5);
glEnd();

glBegin(GL_POLYGON);
glVertex2f(215, -25);
glVertex2f(215, -29);
glVertex2f(280, -29);
glVertex2f(280, -25);
glEnd();


//outlines

//LOWER SUPPORTS
glColor3f(0, 0, 0);
glLineWidth(1.5);
glBegin(GL_LINES);
glVertex2f(212, -70);
glVertex2f(212, -84);

glVertex2f(212, -84);
glVertex2f(215, -84);

glVertex2f(215, -84);
glVertex2f(215, -70);

glVertex2f(215, -70);
glVertex2f(212, -70);

glEnd();

glBegin(GL_LINES);

glVertex2f(220, -70);
glVertex2f(220, -84);

glVertex2f(220, -84);
glVertex2f(222, -84);

glVertex2f(222, -84);
glVertex2f(222, -70);

glVertex2f(222, -70);
glVertex2f(220, -70);
glEnd();

glBegin(GL_LINES);
glVertex2f(272, -70);
glVertex2f(272, -84);

glVertex2f(272, -84);
glVertex2f(274, -84);

glVertex2f(274, -84);
glVertex2f(274, -70);

glVertex2f(274, -70);
glVertex2f(272, -70);
glEnd();


glBegin(GL_LINES);
glVertex2f(279, -70);
glVertex2f(279, -84);

glVertex2f(279, -84);
glVertex2f(282, -84);

glVertex2f(282, -84);
glVertex2f(282, -70);

glVertex2f(282, -70);
glVertex2f(279, -70);

glEnd();



//ABOVE THE LOWER SUPPORTS
glBegin(GL_LINES);
glVertex2f(206, -68);
glVertex2f(206, -70);

glVertex2f(206, -70);
glVertex2f(288, -70);

glVertex2f(288, -70);
glVertex2f(288, -68);

glVertex2f(288, -68);
glVertex2f(206, -68);
glEnd();

//sitting space
glBegin(GL_LINES);
glVertex2f(215, -55);
glVertex2f(206, -68);

glVertex2f(206, -68);
glVertex2f(288, -68);

glVertex2f(288, -68);
glVertex2f(280, -55);

glVertex2f(280, -55);
glVertex2f(215, -55);

glEnd();





//four horizontal support

glBegin(GL_LINES);
glVertex2f(215, -44);
glVertex2f(215, -48);

glVertex2f(215, -48);
glVertex2f(280, -48);

glVertex2f(280, -48);
glVertex2f(280, -44);

glVertex2f(280, -44);
glVertex2f(215, -44);
glEnd();

glBegin(GL_LINES);
glVertex2f(215, -38);
glVertex2f(215, -42);

glVertex2f(215, -42);
glVertex2f(280, -42);

glVertex2f(280, -42);
glVertex2f(280, -38);

glVertex2f(280, -38);
glVertex2f(215, -38);
glEnd();

glBegin(GL_LINES);
glVertex2f(215, -31.5);
glVertex2f(215, -35.5);

glVertex2f(215, -35.5);
glVertex2f(280, -35.5);

glVertex2f(280, -35.5);
glVertex2f(280, -31.5);

glVertex2f(280, -31.5);
glVertex2f(215, -31.5);
glEnd();

glBegin(GL_LINES);
glVertex2f(215, -25);
glVertex2f(215, -29);

glVertex2f(215, -29);
glVertex2f(280, -29);

glVertex2f(280, -29);
glVertex2f(280, -25);

glVertex2f(280, -25);
glVertex2f(215, -25);
glEnd();

}



void moon()
{
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<360;i++)
        {
            glColor3f(1,1,1);
            float pi=3.1416;
            float A=(i*2*pi)/360;
            float r=29.739;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x + 160,y + 200);
        }

    //glVertex2f(0.3f,0.4f);
    //glVertex2f(0.1f,0.4f);

	glEnd();
}



void display() {

glClearColor(0.0f, 0.0f, 0.5f, 1.0f);

glClear(GL_COLOR_BUFFER_BIT);

soil_effect();
tree();
outline_tree();
building();
outlilne();
lampPost();
bench();
moon();


glFlush(); // Render now

}

/* Main function: GLUT runs as a console application starting at main() */

int main(int argc, char** argv) {

glutInitWindowSize(1020, 700); // Set the window's initial width & height
glutInit(&argc, argv); // Initialize GLUT
glutInitWindowPosition((glutGet(GLUT_SCREEN_WIDTH)-1020)/2,
                       (glutGet(GLUT_SCREEN_HEIGHT)-700)/2);
glutCreateWindow("OpenGL Setup"); // Create a window with the given title


glutDisplayFunc(display); // Register display callback handler for window re-paint

gluOrtho2D(-210, +300, -90, +300);
glutMainLoop(); // Enter the event-processing loop

return 0;

}





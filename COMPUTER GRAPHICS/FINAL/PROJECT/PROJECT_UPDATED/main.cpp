#include <windows.h> // for MS Windows
#include<iostream>
#include <GL/glut.h> // GLUT, include glu.h and gl.h
#include <math.h>
#include "glutil.h"
#include "rain.h"
#include <cmath>
#include <ctime>
#include<mmsystem.h>

using namespace std;


string imagesFolderPath = "E:/SPRING 23-24/COMPUTER GRAPHICS/FINAL/PROJECT/PROJECT_UPDATED/Resources/images/";
string soundsFolderPath = "E:/SPRING 23-24/COMPUTER GRAPHICS/FINAL/PROJECT/PROJECT_UPDATED/Resources/sounds/";


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

int vanishfire = 20;


float _angle1 = 0;
float _angle2 = 0;
float rotate_smoke = 0;


float _movehelicopter = 0;


//FLYING CAR CONTROLING VARIABLES'
float _move_fly_car_01 = 0.0;
float _move_fly_car_02 = 0.0;
float _move_fly_car_03 = 0.0;
float _move_fly_car_04 = 0.0;

bool is_fly_car = true;


//fire smoke move
float _move_fire_smoke = 0.0;



//FLOWER AND JUNGLE LEAF MOVEMENT

float move_jungle_leaf_top6 = 0;
float move_jungle_leaf_top5 = 0;
float move_jungle_leaf_top4 = 0;
float move_jungle_leaf_top3 = 0;
float move_jungle_leaf_top2 = 0;
float move_jungle_leaf_top1 = 0;


float zoom_flower = 1;

//CARS

float move_cybertruck_01 = 0;
float move_ecocar_02 = 0;
float move_auto_motorcycle_03 = 0;
float move_ecocar_04 = 0;


//ZOOM TO FIRE AND HELICOPTER

bool zoom_to_fire = false;
float zoom_fire_value = 1;


//THIS FUNCTION IS USED TO DRAW TREE'S CIRCLE AND ANY KIND OF CIRCLE

//ID -
void circle_tree(float radius, float xc, float yc, float r, float g, float b)
{
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    for (int i = 0;i < 200;i++)
    {
        glColor3f(r, g, b);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = radius;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + xc, y + yc);
    }
    glEnd();
}

//THIS FUNCTION IS USED TO DRAW THE MORE DEEPER HALF CIRCLE CURVES IN THE FIRST TREEE IN LEFT
//ID -
void circle_tree_leaf(float radius, float xc, float yc, float r, float g, float b, int ii, int jj, int us)
{

    glBegin(GL_POINTS);
    float pi = 3.1416;
    for (int i = ii; i < jj; i++)
    {
        glColor3f(r, g, b);
        float A;
        if (us == 1) {
            A = (i * pi) / jj;
        }
        else {
            A = (i * 2 * pi) / jj;
        }

        float x = radius * cos(A);
        float y = radius * sin(A);
        glVertex2f(x + xc, y + yc);
    }
    glEnd();
}


void flower() {

    glPushMatrix();
    // glTranslatef(move_jungle_leaf_top1, move_jungle_leaf_top1, 0);

    glTranslatef(125.369791206714, 8.5433258942929, 0);
    glScalef(zoom_flower, zoom_flower, 1);
    glTranslatef(-125.369791206714, -8.5433258942929, 0);

    glColor3f(0.97, 0.87, 0.03);

    //FIRST FLOWER YELLOW PORTION
    glBegin(GL_POLYGON);

    glVertex2f(125.1503551652435, 8.7391359639609);
    glVertex2f(124.9524927678651, 10.5423819038189);
    glVertex2f(125.0424302212189, 10.9156223352608);
    glVertex2f(125.3302300719511, 11.1494597139955);
    glVertex2f(125.6000424320125, 11.1224784779877);
    glVertex2f(125.8068985747262, 10.8976348445889);
    glVertex2f(125.8698547920738, 10.4929163044712);
    glVertex2f(125.6045393046802, 8.721148473289);

    glEnd();



    //NOW PRINTING REST OF THE FLOWER YELLOW PORTION
    glPushMatrix();
    glTranslatef(125.369791206714, 8.5433258942929, 0);
    glRotatef(1 * 40, 0, 0, 1);
    glTranslatef(-125.369791206714, -8.5433258942929, 0);
    glBegin(GL_POLYGON);

    glVertex2f(125.1503551652435, 8.7391359639609);
    glVertex2f(124.9524927678651, 10.5423819038189);
    glVertex2f(125.0424302212189, 10.9156223352608);
    glVertex2f(125.3302300719511, 11.1494597139955);
    glVertex2f(125.6000424320125, 11.1224784779877);
    glVertex2f(125.8068985747262, 10.8976348445889);
    glVertex2f(125.8698547920738, 10.4929163044712);
    glVertex2f(125.6045393046802, 8.721148473289);

    glEnd();
    glPopMatrix();


    glPushMatrix();
    glTranslatef(125.369791206714, 8.5433258942929, 0);
    glRotatef(2 * 40, 0, 0, 1);
    glTranslatef(-125.369791206714, -8.5433258942929, 0);
    glBegin(GL_POLYGON);

    glVertex2f(125.1503551652435, 8.7391359639609);
    glVertex2f(124.9524927678651, 10.5423819038189);
    glVertex2f(125.0424302212189, 10.9156223352608);
    glVertex2f(125.3302300719511, 11.1494597139955);
    glVertex2f(125.6000424320125, 11.1224784779877);
    glVertex2f(125.8068985747262, 10.8976348445889);
    glVertex2f(125.8698547920738, 10.4929163044712);
    glVertex2f(125.6045393046802, 8.721148473289);

    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(125.369791206714, 8.5433258942929, 0);
    glRotatef(3 * 40, 0, 0, 1);
    glTranslatef(-125.369791206714, -8.5433258942929, 0);
    glBegin(GL_POLYGON);

    glVertex2f(125.1503551652435, 8.7391359639609);
    glVertex2f(124.9524927678651, 10.5423819038189);
    glVertex2f(125.0424302212189, 10.9156223352608);
    glVertex2f(125.3302300719511, 11.1494597139955);
    glVertex2f(125.6000424320125, 11.1224784779877);
    glVertex2f(125.8068985747262, 10.8976348445889);
    glVertex2f(125.8698547920738, 10.4929163044712);
    glVertex2f(125.6045393046802, 8.721148473289);

    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(125.369791206714, 8.5433258942929, 0);
    glRotatef(4 * 40, 0, 0, 1);
    glTranslatef(-125.369791206714, -8.5433258942929, 0);
    glBegin(GL_POLYGON);

    glVertex2f(125.1503551652435, 8.7391359639609);
    glVertex2f(124.9524927678651, 10.5423819038189);
    glVertex2f(125.0424302212189, 10.9156223352608);
    glVertex2f(125.3302300719511, 11.1494597139955);
    glVertex2f(125.6000424320125, 11.1224784779877);
    glVertex2f(125.8068985747262, 10.8976348445889);
    glVertex2f(125.8698547920738, 10.4929163044712);
    glVertex2f(125.6045393046802, 8.721148473289);

    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(125.369791206714, 8.5433258942929, 0);
    glRotatef(5 * 40, 0, 0, 1);
    glTranslatef(-125.369791206714, -8.5433258942929, 0);
    glBegin(GL_POLYGON);

    glVertex2f(125.1503551652435, 8.7391359639609);
    glVertex2f(124.9524927678651, 10.5423819038189);
    glVertex2f(125.0424302212189, 10.9156223352608);
    glVertex2f(125.3302300719511, 11.1494597139955);
    glVertex2f(125.6000424320125, 11.1224784779877);
    glVertex2f(125.8068985747262, 10.8976348445889);
    glVertex2f(125.8698547920738, 10.4929163044712);
    glVertex2f(125.6045393046802, 8.721148473289);

    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(125.369791206714, 8.5433258942929, 0);
    glRotatef(6 * 40, 0, 0, 1);
    glTranslatef(-125.369791206714, -8.5433258942929, 0);
    glBegin(GL_POLYGON);

    glVertex2f(125.1503551652435, 8.7391359639609);
    glVertex2f(124.9524927678651, 10.5423819038189);
    glVertex2f(125.0424302212189, 10.9156223352608);
    glVertex2f(125.3302300719511, 11.1494597139955);
    glVertex2f(125.6000424320125, 11.1224784779877);
    glVertex2f(125.8068985747262, 10.8976348445889);
    glVertex2f(125.8698547920738, 10.4929163044712);
    glVertex2f(125.6045393046802, 8.721148473289);

    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(125.369791206714, 8.5433258942929, 0);
    glRotatef(7 * 40, 0, 0, 1);
    glTranslatef(-125.369791206714, -8.5433258942929, 0);
    glBegin(GL_POLYGON);

    glVertex2f(125.1503551652435, 8.7391359639609);
    glVertex2f(124.9524927678651, 10.5423819038189);
    glVertex2f(125.0424302212189, 10.9156223352608);
    glVertex2f(125.3302300719511, 11.1494597139955);
    glVertex2f(125.6000424320125, 11.1224784779877);
    glVertex2f(125.8068985747262, 10.8976348445889);
    glVertex2f(125.8698547920738, 10.4929163044712);
    glVertex2f(125.6045393046802, 8.721148473289);

    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(125.369791206714, 8.5433258942929, 0);
    glRotatef(8 * 40, 0, 0, 1);
    glTranslatef(-125.369791206714, -8.5433258942929, 0);
    glBegin(GL_POLYGON);

    glVertex2f(125.1503551652435, 8.7391359639609);
    glVertex2f(124.9524927678651, 10.5423819038189);
    glVertex2f(125.0424302212189, 10.9156223352608);
    glVertex2f(125.3302300719511, 11.1494597139955);
    glVertex2f(125.6000424320125, 11.1224784779877);
    glVertex2f(125.8068985747262, 10.8976348445889);
    glVertex2f(125.8698547920738, 10.4929163044712);
    glVertex2f(125.6045393046802, 8.721148473289);

    glEnd();
    glPopMatrix();


    //SMALL MORE DEEPER AREA INSIDE EACH FLOWER PART
    glColor3f(0.93, 0.69, 0.04);
    glBegin(GL_POLYGON);

    glVertex2f(125.2204044561306, 8.8518264665868);
    glVertex2f(125.1327231731252, 9.6608855780057);
    glVertex2f(125.1426869552849, 9.8043640411145);
    glVertex2f(125.2, 9.9);
    glVertex2f(125.3001147134082, 9.969762824976);
    glVertex2f(125.4276511250523, 9.9876976328646);
    glVertex2f(125.537252728809, 9.9319004527667);
    glVertex2f(125.6069992039269, 9.8541829519161);
    glVertex2f(125.6508398454296, 9.7465741045845);
    glVertex2f(125.6348977939741, 9.6150521800682);
    glVertex2f(125.503375869466, 8.8338916586982);

    glEnd();


    //NOW PRINTING REST OF THE SMALL DEEPR AREA

    glPushMatrix();
    glTranslatef(125.369791206714, 8.5433258942929, 0);
    glRotatef(1 * 40, 0, 0, 1);
    glTranslatef(-125.369791206714, -8.5433258942929, 0);

    glBegin(GL_POLYGON);

    glVertex2f(125.2204044561306, 8.8518264665868);
    glVertex2f(125.1327231731252, 9.6608855780057);
    glVertex2f(125.1426869552849, 9.8043640411145);
    glVertex2f(125.2, 9.9);
    glVertex2f(125.3001147134082, 9.969762824976);
    glVertex2f(125.4276511250523, 9.9876976328646);
    glVertex2f(125.537252728809, 9.9319004527667);
    glVertex2f(125.6069992039269, 9.8541829519161);
    glVertex2f(125.6508398454296, 9.7465741045845);
    glVertex2f(125.6348977939741, 9.6150521800682);
    glVertex2f(125.503375869466, 8.8338916586982);

    glEnd();

    glPopMatrix();

    glPushMatrix();
    glTranslatef(125.369791206714, 8.5433258942929, 0);
    glRotatef(2 * 40, 0, 0, 1);
    glTranslatef(-125.369791206714, -8.5433258942929, 0);

    glBegin(GL_POLYGON);

    glVertex2f(125.2204044561306, 8.8518264665868);
    glVertex2f(125.1327231731252, 9.6608855780057);
    glVertex2f(125.1426869552849, 9.8043640411145);
    glVertex2f(125.2, 9.9);
    glVertex2f(125.3001147134082, 9.969762824976);
    glVertex2f(125.4276511250523, 9.9876976328646);
    glVertex2f(125.537252728809, 9.9319004527667);
    glVertex2f(125.6069992039269, 9.8541829519161);
    glVertex2f(125.6508398454296, 9.7465741045845);
    glVertex2f(125.6348977939741, 9.6150521800682);
    glVertex2f(125.503375869466, 8.8338916586982);

    glEnd();

    glPopMatrix();

    glPushMatrix();
    glTranslatef(125.369791206714, 8.5433258942929, 0);
    glRotatef(3 * 40, 0, 0, 1);
    glTranslatef(-125.369791206714, -8.5433258942929, 0);

    glBegin(GL_POLYGON);

    glVertex2f(125.2204044561306, 8.8518264665868);
    glVertex2f(125.1327231731252, 9.6608855780057);
    glVertex2f(125.1426869552849, 9.8043640411145);
    glVertex2f(125.2, 9.9);
    glVertex2f(125.3001147134082, 9.969762824976);
    glVertex2f(125.4276511250523, 9.9876976328646);
    glVertex2f(125.537252728809, 9.9319004527667);
    glVertex2f(125.6069992039269, 9.8541829519161);
    glVertex2f(125.6508398454296, 9.7465741045845);
    glVertex2f(125.6348977939741, 9.6150521800682);
    glVertex2f(125.503375869466, 8.8338916586982);

    glEnd();

    glPopMatrix();

    glPushMatrix();
    glTranslatef(125.369791206714, 8.5433258942929, 0);
    glRotatef(4 * 40, 0, 0, 1);
    glTranslatef(-125.369791206714, -8.5433258942929, 0);

    glBegin(GL_POLYGON);

    glVertex2f(125.2204044561306, 8.8518264665868);
    glVertex2f(125.1327231731252, 9.6608855780057);
    glVertex2f(125.1426869552849, 9.8043640411145);
    glVertex2f(125.2, 9.9);
    glVertex2f(125.3001147134082, 9.969762824976);
    glVertex2f(125.4276511250523, 9.9876976328646);
    glVertex2f(125.537252728809, 9.9319004527667);
    glVertex2f(125.6069992039269, 9.8541829519161);
    glVertex2f(125.6508398454296, 9.7465741045845);
    glVertex2f(125.6348977939741, 9.6150521800682);
    glVertex2f(125.503375869466, 8.8338916586982);

    glEnd();

    glPopMatrix();

    glPushMatrix();
    glTranslatef(125.369791206714, 8.5433258942929, 0);
    glRotatef(5 * 40, 0, 0, 1);
    glTranslatef(-125.369791206714, -8.5433258942929, 0);

    glBegin(GL_POLYGON);

    glVertex2f(125.2204044561306, 8.8518264665868);
    glVertex2f(125.1327231731252, 9.6608855780057);
    glVertex2f(125.1426869552849, 9.8043640411145);
    glVertex2f(125.2, 9.9);
    glVertex2f(125.3001147134082, 9.969762824976);
    glVertex2f(125.4276511250523, 9.9876976328646);
    glVertex2f(125.537252728809, 9.9319004527667);
    glVertex2f(125.6069992039269, 9.8541829519161);
    glVertex2f(125.6508398454296, 9.7465741045845);
    glVertex2f(125.6348977939741, 9.6150521800682);
    glVertex2f(125.503375869466, 8.8338916586982);

    glEnd();

    glPopMatrix();

    glPushMatrix();
    glTranslatef(125.369791206714, 8.5433258942929, 0);
    glRotatef(6 * 40, 0, 0, 1);
    glTranslatef(-125.369791206714, -8.5433258942929, 0);

    glBegin(GL_POLYGON);

    glVertex2f(125.2204044561306, 8.8518264665868);
    glVertex2f(125.1327231731252, 9.6608855780057);
    glVertex2f(125.1426869552849, 9.8043640411145);
    glVertex2f(125.2, 9.9);
    glVertex2f(125.3001147134082, 9.969762824976);
    glVertex2f(125.4276511250523, 9.9876976328646);
    glVertex2f(125.537252728809, 9.9319004527667);
    glVertex2f(125.6069992039269, 9.8541829519161);
    glVertex2f(125.6508398454296, 9.7465741045845);
    glVertex2f(125.6348977939741, 9.6150521800682);
    glVertex2f(125.503375869466, 8.8338916586982);

    glEnd();

    glPopMatrix();

    glPushMatrix();
    glTranslatef(125.369791206714, 8.5433258942929, 0);
    glRotatef(7 * 40, 0, 0, 1);
    glTranslatef(-125.369791206714, -8.5433258942929, 0);

    glBegin(GL_POLYGON);

    glVertex2f(125.2204044561306, 8.8518264665868);
    glVertex2f(125.1327231731252, 9.6608855780057);
    glVertex2f(125.1426869552849, 9.8043640411145);
    glVertex2f(125.2, 9.9);
    glVertex2f(125.3001147134082, 9.969762824976);
    glVertex2f(125.4276511250523, 9.9876976328646);
    glVertex2f(125.537252728809, 9.9319004527667);
    glVertex2f(125.6069992039269, 9.8541829519161);
    glVertex2f(125.6508398454296, 9.7465741045845);
    glVertex2f(125.6348977939741, 9.6150521800682);
    glVertex2f(125.503375869466, 8.8338916586982);

    glEnd();

    glPopMatrix();

    glPushMatrix();
    glTranslatef(125.369791206714, 8.5433258942929, 0);
    glRotatef(8 * 40, 0, 0, 1);
    glTranslatef(-125.369791206714, -8.5433258942929, 0);

    glBegin(GL_POLYGON);

    glVertex2f(125.2204044561306, 8.8518264665868);
    glVertex2f(125.1327231731252, 9.6608855780057);
    glVertex2f(125.1426869552849, 9.8043640411145);
    glVertex2f(125.2, 9.9);
    glVertex2f(125.3001147134082, 9.969762824976);
    glVertex2f(125.4276511250523, 9.9876976328646);
    glVertex2f(125.537252728809, 9.9319004527667);
    glVertex2f(125.6069992039269, 9.8541829519161);
    glVertex2f(125.6508398454296, 9.7465741045845);
    glVertex2f(125.6348977939741, 9.6150521800682);
    glVertex2f(125.503375869466, 8.8338916586982);

    glEnd();

    glPopMatrix();

    //RED CIRLCE IN THE MIDDLE
    circle_tree(0.381264, 125.369791206714, 8.5433258942929, 0.94, 0.14, 0.04);

    glPopMatrix();
}


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

// ID - 53
void left_pond_upper() {
    // water garden

    glBegin(GL_POLYGON);


    glColor3f(1, 1, 1);

    glVertex2f(0, 0);
    glVertex2f(0, 15.25);
    glVertex2f(48.600006821, 15.25);

    glVertex2f(35.2, 0);
    glEnd();

    //APPLYING TEXTURE IN THE LEFT POND UPPER AREA
    //DIVIDED INTO SMALL PORTION TO APPLY THE TEXTURE PROPERLY

    ApplyTexture(0, 12, 0, 15.25, 17, 15.25, 17, 12, textures[0].textureID);

    glPushMatrix();
    glTranslatef(1 * 14, 0, 0);
    ApplyTexture(0, 12, 0, 15.25, 17, 15.25, 17, 12, textures[0].textureID);

    glPopMatrix();

    glPushMatrix();
    glTranslatef(20, 0, 0);
    ApplyTexture(0, 12, 0, 15.25, 17, 15.25, 17, 12, textures[0].textureID);

    glPopMatrix();

    glPushMatrix();
    glTranslatef(30, 0, 0);
    ApplyTexture(0, 12, 0, 15.25, 17, 15.25, 17, 12, textures[0].textureID);

    glPopMatrix();

    glPushMatrix();
    glTranslatef(30, -3, 0);
    ApplyTexture(0, 12, 0, 15.25, 17, 15.25, 17, 12, textures[0].textureID);

    glPopMatrix();

    glPushMatrix();
    glTranslatef(30, -6, 0);
    ApplyTexture(0, 12, 0, 15.25, 17, 15.25, 17, 12, textures[0].textureID);

    glPopMatrix();



    //1ST FLOWER DECORATION
    glPushMatrix();
    glTranslatef(-156, -5.4, 0);
    glScalef(2.2, 2.2, 1);

    glTranslatef(46, 6.9, 0);

    glScalef(0.2, 0.2, 1);

    flower();


    glPopMatrix();

    //2ND FLOWER
    glPushMatrix();
    glTranslatef(-156, -5.4, 0);
    glScalef(2.2, 2.2, 1);

    glTranslatef(47, 7.2, 0);

    glScalef(0.2, 0.2, 1);

    flower();


    glPopMatrix();

    //3RD FLOWER SMALL
    glPushMatrix();
    glTranslatef(-156, -5.4, 0);
    glScalef(2.2, 2.2, 1);

    glTranslatef(48, 6.9, 0);

    glScalef(0.2, 0.2, 1);

    flower();
    glPopMatrix();

    //4TH FLOWER
    glPushMatrix();
    glTranslatef(-156, -5.4, 0);
    glScalef(2.2, 2.2, 1);

    glTranslatef(49, 7.2, 0);

    glScalef(0.2, 0.2, 1);

    flower();


    glPopMatrix();


    //5TH FLOWER
    glPushMatrix();
    glTranslatef(-156, -5.4, 0);
    glScalef(2.2, 2.2, 1);

    glTranslatef(50, 6.9, 0);

    glScalef(0.2, 0.2, 1);

    flower();


    glPopMatrix();

    //6TH FLOWER

    glPushMatrix();
    glTranslatef(-156, -5.4, 0);
    glScalef(2.2, 2.2, 1);

    glTranslatef(51, 7.2, 0);

    glScalef(0.2, 0.2, 1);

    flower();


    glPopMatrix();

    //NOW TRANSLATING 1 - 6 TH FLOWER TO X AXIS

    glPushMatrix();

    glTranslatef(1 * 13, 0, 0);

    //1ST FLOWER DECORATION
    glPushMatrix();
    glTranslatef(-156, -5.4, 0);
    glScalef(2.2, 2.2, 1);

    glTranslatef(46, 6.9, 0);

    glScalef(0.2, 0.2, 1);

    flower();


    glPopMatrix();

    //2ND FLOWER
    glPushMatrix();
    glTranslatef(-156, -5.4, 0);
    glScalef(2.2, 2.2, 1);

    glTranslatef(47, 7.2, 0);

    glScalef(0.2, 0.2, 1);

    flower();


    glPopMatrix();

    //3RD FLOWER SMALL
    glPushMatrix();
    glTranslatef(-156, -5.4, 0);
    glScalef(2.2, 2.2, 1);

    glTranslatef(48, 6.9, 0);

    glScalef(0.2, 0.2, 1);

    flower();
    glPopMatrix();

    //4TH FLOWER
    glPushMatrix();
    glTranslatef(-156, -5.4, 0);
    glScalef(2.2, 2.2, 1);

    glTranslatef(49, 7.2, 0);

    glScalef(0.2, 0.2, 1);

    flower();


    glPopMatrix();


    //5TH FLOWER
    glPushMatrix();
    glTranslatef(-156, -5.4, 0);
    glScalef(2.2, 2.2, 1);

    glTranslatef(50, 6.9, 0);

    glScalef(0.2, 0.2, 1);

    flower();


    glPopMatrix();

    //6TH FLOWER

    glPushMatrix();
    glTranslatef(-156, -5.4, 0);
    glScalef(2.2, 2.2, 1);

    glTranslatef(51, 7.2, 0);

    glScalef(0.2, 0.2, 1);

    flower();


    glPopMatrix();



    glPopMatrix();


    //2ND TIME TRANSLATING THE FLOWERS
    glPushMatrix();
    glTranslatef(2 * 13, 0, 0);

    //1ST FLOWER DECORATION
    glPushMatrix();
    glTranslatef(-156, -5.4, 0);
    glScalef(2.2, 2.2, 1);

    glTranslatef(46, 6.9, 0);

    glScalef(0.2, 0.2, 1);

    flower();


    glPopMatrix();

    //2ND FLOWER
    glPushMatrix();
    glTranslatef(-156, -5.4, 0);
    glScalef(2.2, 2.2, 1);

    glTranslatef(47, 7.2, 0);

    glScalef(0.2, 0.2, 1);

    flower();


    glPopMatrix();

    //3RD FLOWER SMALL
    glPushMatrix();
    glTranslatef(-156, -5.4, 0);
    glScalef(2.2, 2.2, 1);

    glTranslatef(48, 6.9, 0);

    glScalef(0.2, 0.2, 1);

    flower();
    glPopMatrix();

    //4TH FLOWER
    glPushMatrix();
    glTranslatef(-156, -5.4, 0);
    glScalef(2.2, 2.2, 1);

    glTranslatef(49, 7.2, 0);

    glScalef(0.2, 0.2, 1);

    flower();


    glPopMatrix();


    //5TH FLOWER
    glPushMatrix();
    glTranslatef(-156, -5.4, 0);
    glScalef(2.2, 2.2, 1);

    glTranslatef(50, 6.9, 0);

    glScalef(0.2, 0.2, 1);

    flower();


    glPopMatrix();

    //6TH FLOWER

    glPushMatrix();
    glTranslatef(-156, -5.4, 0);
    glScalef(2.2, 2.2, 1);

    glTranslatef(51, 7.2, 0);

    glScalef(0.2, 0.2, 1);

    flower();


    glPopMatrix();


    glPopMatrix();


    glPushMatrix();


    //3RD TIME TRANSLATING THE FLOWERS
    glTranslatef(3 * 13, 0, 0);

    //1ST FLOWER DECORATION
    glPushMatrix();
    glTranslatef(-156, -5.4, 0);
    glScalef(2.2, 2.2, 1);

    glTranslatef(46, 6.9, 0);

    glScalef(0.2, 0.2, 1);

    flower();


    glPopMatrix();

    //2ND FLOWER
    glPushMatrix();
    glTranslatef(-156, -5.4, 0);
    glScalef(2.2, 2.2, 1);

    glTranslatef(47, 7.2, 0);

    glScalef(0.2, 0.2, 1);

    flower();


    glPopMatrix();

    //3RD FLOWER SMALL
    glPushMatrix();
    glTranslatef(-156, -5.4, 0);
    glScalef(2.2, 2.2, 1);

    glTranslatef(48, 6.9, 0);

    glScalef(0.2, 0.2, 1);

    flower();
    glPopMatrix();


    glPopMatrix();



    //2ND ROW
    glPushMatrix();

    glTranslatef(3 * 12, -2.7, 0);

    //1ST FLOWER DECORATION
    glPushMatrix();
    glTranslatef(-156, -5.4, 0);
    glScalef(2.2, 2.2, 1);

    glTranslatef(46, 6.9, 0);

    glScalef(0.2, 0.2, 1);

    flower();


    glPopMatrix();

    //2ND FLOWER
    glPushMatrix();
    glTranslatef(-156, -5.4, 0);
    glScalef(2.2, 2.2, 1);

    glTranslatef(47, 7.2, 0);

    glScalef(0.2, 0.2, 1);

    flower();


    glPopMatrix();

    //3RD FLOWER SMALL
    glPushMatrix();
    glTranslatef(-156, -5.4, 0);
    glScalef(2.2, 2.2, 1);

    glTranslatef(48, 6.9, 0);

    glScalef(0.2, 0.2, 1);

    flower();
    glPopMatrix();

    //4TH FLOWER
    glPushMatrix();
    glTranslatef(-156, -5.4, 0);
    glScalef(2.2, 2.2, 1);

    glTranslatef(49, 7.2, 0);

    glScalef(0.2, 0.2, 1);

    flower();

    glPopMatrix();

    glPopMatrix();


    //3RD ROW

    glPushMatrix();

    glTranslatef(3 * 12, 2 * -2.7, 0);

    //1ST FLOWER DECORATION
    glPushMatrix();
    glTranslatef(-156, -5.4, 0);
    glScalef(2.2, 2.2, 1);

    glTranslatef(46, 6.9, 0);

    glScalef(0.2, 0.2, 1);

    flower();


    glPopMatrix();

    //2ND FLOWER
    glPushMatrix();
    glTranslatef(-156, -5.4, 0);
    glScalef(2.2, 2.2, 1);

    glTranslatef(47, 7.2, 0);

    glScalef(0.2, 0.2, 1);

    flower();


    glPopMatrix();

    //3RD FLOWER SMALL
    glPushMatrix();
    glTranslatef(-156, -5.4, 0);
    glScalef(2.2, 2.2, 1);

    glTranslatef(48, 6.9, 0);

    glScalef(0.2, 0.2, 1);

    flower();
    glPopMatrix();

    //4TH FLOWER
    glPushMatrix();
    glTranslatef(-156, -5.4, 0);
    glScalef(2.2, 2.2, 1);

    glTranslatef(49, 7.2, 0);

    glScalef(0.2, 0.2, 1);

    flower();

    glPopMatrix();




    glPopMatrix();





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
    // glColor3f(0.92, 0.6, 0.65);
    glColor3f(1, 1, 1);

    glVertex2f(38, 0);
    glVertex2f(48.600006821, 15.25);
    glVertex2f(103.47679385, 15.25);
    glVertex2f(90.5, 13.5);
    glVertex2f(90.8, 10.2);
    glVertex2f(130, 2);
    glVertex2f(130, 0);

    glEnd();

    //ApplyTexture(38, 0, 48.600006821, 15.25, 48.600006821 + 20, 15.25, 38 + 20, 0, textures[4].textureID);
    //ApplyTexture(45.3721666389803, 10.5701912727206, 48.600006821, 15.25, 48.600006821 + 7, 15.25, 45.3721666389803 + 7, 10.5701912727206, textures[4].textureID);
    ApplyTexture(45.3721666389803, 10.5701912727206, 45.3721666389803 + 7, 10.5701912727206, 48.600006821 + 7, 15.25, 48.600006821, 15.25, textures[4].textureID);

    glPushMatrix();
    glTranslatef(1 * 7, 0, 0);
    ApplyTexture(45.3721666389803, 10.5701912727206, 45.3721666389803 + 7, 10.5701912727206, 48.600006821 + 7, 15.25, 48.600006821, 15.25, textures[4].textureID);

    glPopMatrix();

    glPushMatrix();
    glTranslatef(2 * 7, 0, 0);
    ApplyTexture(45.3721666389803, 10.5701912727206, 45.3721666389803 + 7, 10.5701912727206, 48.600006821 + 7, 15.25, 48.600006821, 15.25, textures[4].textureID);

    glPopMatrix();

    glPushMatrix();
    glTranslatef(3 * 7, 0, 0);
    ApplyTexture(45.3721666389803, 10.5701912727206, 45.3721666389803 + 7, 10.5701912727206, 48.600006821 + 7, 15.25, 48.600006821, 15.25, textures[4].textureID);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(4 * 7, 0, 0);
    ApplyTexture(45.3721666389803, 10.5701912727206, 45.3721666389803 + 7, 10.5701912727206, 48.600006821 + 7, 15.25, 48.600006821, 15.25, textures[4].textureID);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(5 * 7, 0, 0);
    ApplyTexture(45.3721666389803, 10.5701912727206, 45.3721666389803 + 7, 10.5701912727206, 48.600006821 + 7, 15.25, 48.600006821, 15.25, textures[4].textureID);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(6 * 7, 0, 0);
    ApplyTexture(45.3721666389803, 10.5701912727206, 45.3721666389803 + 7, 10.5701912727206, 48.600006821 + 7, 15.25, 48.600006821, 15.25, textures[4].textureID);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(7 * 7, 0, 0);
    ApplyTexture(45.3721666389803, 10.5701912727206, 45.3721666389803 + 7, 10.5701912727206, 48.600006821 + 7, 15.25, 48.600006821, 15.25, textures[4].textureID);
    glPopMatrix();


    //USING THE CODE OF THE ABOVE ROW OF THE FRONT ROW TEXTURE
    //JUST TRANSLATING TO -Y AXIS VALUE
    glPushMatrix();
    glTranslatef(-3, -4, 0);


    ApplyTexture(45.3721666389803, 10.5701912727206, 45.3721666389803 + 7, 10.5701912727206, 48.600006821 + 7, 15.25, 48.600006821, 15.25, textures[4].textureID);

    glPushMatrix();
    glTranslatef(1 * 7, 0, 0);
    ApplyTexture(45.3721666389803, 10.5701912727206, 45.3721666389803 + 7, 10.5701912727206, 48.600006821 + 7, 15.25, 48.600006821, 15.25, textures[4].textureID);

    glPopMatrix();

    glPushMatrix();
    glTranslatef(2 * 7, 0, 0);
    ApplyTexture(45.3721666389803, 10.5701912727206, 45.3721666389803 + 7, 10.5701912727206, 48.600006821 + 7, 15.25, 48.600006821, 15.25, textures[4].textureID);

    glPopMatrix();

    glPushMatrix();
    glTranslatef(3 * 7, 0, 0);
    ApplyTexture(45.3721666389803, 10.5701912727206, 45.3721666389803 + 7, 10.5701912727206, 48.600006821 + 7, 15.25, 48.600006821, 15.25, textures[4].textureID);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(4 * 7, 0, 0);
    ApplyTexture(45.3721666389803, 10.5701912727206, 45.3721666389803 + 7, 10.5701912727206, 48.600006821 + 7, 15.25, 48.600006821, 15.25, textures[4].textureID);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(5 * 7, 0, 0);
    ApplyTexture(45.3721666389803, 10.5701912727206, 45.3721666389803 + 7, 10.5701912727206, 48.600006821 + 7, 15.25, 48.600006821, 15.25, textures[4].textureID);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(6 * 7, 0, 0);
    ApplyTexture(45.3721666389803, 10.5701912727206, 45.3721666389803 + 7, 10.5701912727206, 48.600006821 + 7, 15.25, 48.600006821, 15.25, textures[4].textureID);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(7 * 7, 0, 0);
    ApplyTexture(45.3721666389803, 10.5701912727206, 45.3721666389803 + 7, 10.5701912727206, 48.600006821 + 7, 15.25, 48.600006821, 15.25, textures[4].textureID);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(8 * 7, 0, 0);
    ApplyTexture(45.3721666389803, 10.5701912727206, 45.3721666389803 + 7, 10.5701912727206, 48.600006821 + 7, 15.25, 48.600006821, 15.25, textures[4].textureID);
    glPopMatrix();

    glPopMatrix();



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

    ApplyTexture(130, 5.5, 130, 15.25, 103.47679385, 15.25, 90, 13.5, textures[0].textureID);
    // ApplyTexture(90, 13.5, 103.47679385, 15.25, 111.898 + 10, 12.438459, 107.8894 + 10, 9.9780, textures[0].textureID);

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
    // glColor3f(0.67, 0.21, 0.11);
    //glColor3f(0.91, 0.92, 0.9);
    glColor3f(0.55, 0.3, 0.26);



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


    //TOP MOST UPPER CYLINDER TYPE AREA
    //glColor3f(0.72, 0.42, 0.38);
    glBegin(GL_POLYGON);
    glVertex2f(48.4, 49.2);
    glVertex2f(48.3, 50.8);
    glVertex2f(51.75, 51.15);
    glVertex2f(51.85, 49.45);
    glEnd();

    //  square type white object in first poll
    glColor3f(0.94, 0.85, 0.76);
    glBegin(GL_POLYGON);
    glVertex2f(36.5, 21);
    glVertex2f(36.5, 23.5);
    glVertex2f(40, 23.5);
    glVertex2f(40, 21);
    glEnd();

    // cylinder in the first poll

    //BACKGROUND MORE LIGHTER ARE
    glColor3f(0.93, 0.85, 0.73);
    glBegin(GL_POLYGON);
    glVertex2f(39.2, 24.5);
    glVertex2f(39.2, 33.6);
    glVertex2f(42, 33.6);
    glVertex2f(42, 24.5);

    glEnd();

    //MAIN MORE DEEPER AREA
    glColor3f(0.99, 0.72, 0.4);
    glBegin(GL_POLYGON);
    glVertex2f(39.2, 26);
    glVertex2f(39.2, 31.8);
    glVertex2f(42, 31.8);
    glVertex2f(42, 26);

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
    //glColor3f(0.67, 0.21, 0.11);
    //glColor3f(0.91, 0.92, 0.9);
    glColor3f(0.55, 0.3, 0.26);




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
    glColor3f(0.94, 0.85, 0.76);
    glBegin(GL_POLYGON);
    glVertex2f(44, 26);
    glVertex2f(44, 27.8);
    glVertex2f(46.2, 27.8);
    glVertex2f(46.2, 26);
    glEnd();

    // cylinder in the first poll

    //MAIN MORE LIGHTER AREA
    glColor3f(0.93, 0.85, 0.73);
    glBegin(GL_POLYGON);
    glVertex2f(46, 28.8);
    glVertex2f(46, 36);
    glVertex2f(47.8, 36);
    glVertex2f(47.8, 28.8);
    glEnd();


    //MAIN MORE DEEPER AREA
    glColor3f(0.99, 0.72, 0.4);
    glBegin(GL_POLYGON);
    glVertex2f(46, 29.5);
    glVertex2f(46, 34.5);
    glVertex2f(47.8, 34.5);
    glVertex2f(47.8, 29.5);

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
   // glColor3f(0.27, 0.27, 0.29);
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

    glPushMatrix();
    glTranslatef(10, 0, 0);


    //COMMENTING OUT THE FIRST ZEBRA CROSSING TO SYNC THE DESIGN WITH THE ROAD TEXTURE
   /*  glColor3f(0.85, 0.85, 0.85);
    glBegin(GL_POLYGON);

    glVertex2f(51.5, 16);
    glVertex2f(52, 16.5);
    glVertex2f(60.6, 16.5);
    glVertex2f(60.1, 16);

    glEnd(); */


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



    //COMMENTING OUT THE LAST ZEBRA CROSSING TO SYNC THE DESIGN WITH THE ROAD TEXTURE

    /* glBegin(GL_POLYGON);

    glVertex2f(56.1, 21);
    glVertex2f(56.6, 21.5);
    glVertex2f(65.6, 21.5);
    glVertex2f(65.1, 21);


    glEnd(); */


    glPopMatrix();




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
    glTranslatef(80, 0, 0);
    glTranslatef(_movetrain, 0, 0);

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

    glColor3f(0.85, 0.9, 0.91);
    glBegin(GL_POLYGON);

    glVertex2f(63.6, 36.7);
    glVertex2f(61.7, 34.3);
    glVertex2f(63.8, 35.8);
    glVertex2f(68.6, 35.8);
    glVertex2f(68.6, 36.7);

    glEnd();

    //silver color second

    glColor3f(0.85, 0.9, 0.91);
    glBegin(GL_POLYGON);

    glVertex2f(69.7, 35.8);
    glVertex2f(69.7, 36.7);
    glVertex2f(76.8, 36.7);
    glVertex2f(76.8, 35.8);

    glEnd();

    //silver color third

    glColor3f(0.85, 0.9, 0.91);
    glBegin(GL_POLYGON);

    glVertex2f(78, 35.8);
    glVertex2f(78, 36.7);
    glVertex2f(83.3, 36.7);
    glVertex2f(83.3, 35.8);

    glEnd();


    //NOW CODING THE CONNECTOR BETWEEN THE TRAINS
    //FIRST CONNECTOR
    glColor3f(0.27, 0.29, 0.33);
    glBegin(GL_POLYGON);

    glVertex2f(84.5, 41);
    glVertex2f(84, 40);
    glVertex2f(84, 36);
    glVertex2f(84.5, 35.5);
    glVertex2f(85, 36.5);
    glVertex2f(85, 40);
    glVertex2f(84.5, 41);

    glEnd();

    //SECOND CONNECTOR
    //USING THE CODE OF THE FIRST CONNECTOR
    //JUST TRANSLATING IN X AXIS
    glPushMatrix();
    glColor3f(0.27, 0.29, 0.33);
    glTranslatef(1, 0, 0);
    glBegin(GL_POLYGON);

    glVertex2f(84.5, 41);
    glVertex2f(84, 40);
    glVertex2f(84, 36);
    glVertex2f(84.5, 35.5);
    glVertex2f(85, 36.5);
    glVertex2f(85, 40);
    glVertex2f(84.5, 41);

    glEnd();
    glPopMatrix();


    glPopMatrix();



    glPopMatrix();

}


// ID - 15
void train02() {

    glPushMatrix();
    glTranslatef(80, 0, 0);
    glTranslatef(_movetrain, 0, 0);

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


    //TRANSLATING THE CONNECTORS IN X AXIS BY 28 VALUE

    glPushMatrix();
    glTranslatef(28, 1.5, 0);

    //NOW CODING THE CONNECTOR BETWEEN THE TRAINS
        //FIRST CONNECTOR
    glColor3f(0.27, 0.29, 0.33);
    glBegin(GL_POLYGON);

    glVertex2f(84.5, 41);
    glVertex2f(84, 40);
    glVertex2f(84, 36);
    glVertex2f(84.5, 35.5);
    glVertex2f(85, 36.5);
    glVertex2f(85, 40);
    glVertex2f(84.5, 41);

    glEnd();

    //SECOND CONNECTOR
    //USING THE CODE OF THE FIRST CONNECTOR
    //JUST TRANSLATING IN X AXIS
    glPushMatrix();
    glColor3f(0.27, 0.29, 0.33);
    glTranslatef(1, 0, 0);
    glBegin(GL_POLYGON);

    glVertex2f(84.5, 41);
    glVertex2f(84, 40);
    glVertex2f(84, 36);
    glVertex2f(84.5, 35.5);
    glVertex2f(85, 36.5);
    glVertex2f(85, 40);
    glVertex2f(84.5, 41);

    glEnd();
    glPopMatrix();


    glPopMatrix();



    //TRANSLATING THE FIRST AND SECOND SILVER COLOR SHADE OF TRAIN 01 TO TRAIN 02
    //y axis value 1.5 as the rest of the code as done

    //silver color second

    glPushMatrix();

    glTranslatef(1 * 26, 1.5, 0);

    glColor3f(0.85, 0.9, 0.91);
    glBegin(GL_POLYGON);

    glVertex2f(69.7, 35.8);
    glVertex2f(69.7, 36.7);
    glVertex2f(76.8, 36.7);
    glVertex2f(76.8, 35.8);

    glEnd();

    //silver color third

    glColor3f(0.85, 0.9, 0.91);
    glBegin(GL_POLYGON);

    glVertex2f(78, 35.8);
    glVertex2f(78, 36.7);
    glVertex2f(83.3, 36.7);
    glVertex2f(83.3, 35.8);

    glEnd();

    //USING THE CODE OF SILVE COLOR THIRD TO DRAW THE FIRST SILVER COLOR OF TRAIN 02
    // JUST TRANSLATIN IN X AXIS BY NEGATIVE VALUE

    glPushMatrix();
    glTranslatef(-15, 0, 0);

    glColor3f(0.85, 0.9, 0.91);
    glBegin(GL_POLYGON);

    glVertex2f(78, 35.8);
    glVertex2f(78, 36.7);
    glVertex2f(83.3, 36.7);
    glVertex2f(83.3, 35.8);

    glEnd();

    glPopMatrix();



    glPopMatrix();
    ////
    staticText("DESIGNED & CODED BY", 92, 39, 0.009, 1.5, 0, 0, 0);
    staticText("MD. ABU TOWSIF", 95, 36, 0.009, 1.5, 0, 0, 0);


    glPopMatrix();
}

//ID - 16
void train03() {

    glPushMatrix();
    glTranslatef(80, 0, 0);
    glTranslatef(_movetrain, 0, 0);

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


    //TRANSLATING THE FIRST AND SECOND SILVER COLOR SHADE OF TRAIN 01 TO TRAIN 02
    //y axis value 1.5 as the rest of the code as done

    //silver color second

    glPushMatrix();

    glTranslatef(2 * 27, 1.5, 0);

    glColor3f(0.85, 0.9, 0.91);
    glBegin(GL_POLYGON);

    glVertex2f(69.7, 35.8);
    glVertex2f(69.7, 36.7);
    glVertex2f(76.8, 36.7);
    glVertex2f(76.8, 35.8);

    glEnd();

    //silver color third

    glColor3f(0.85, 0.9, 0.91);
    glBegin(GL_POLYGON);

    glVertex2f(78, 35.8);
    glVertex2f(78, 36.7);
    glVertex2f(83.3, 36.7);
    glVertex2f(83.3, 35.8);

    glEnd();

    //USING THE CODE OF SILVE COLOR THIRD TO DRAW THE FIRST SILVER COLOR OF TRAIN 02
    // JUST TRANSLATIN IN X AXIS BY NEGATIVE VALUE

    glPushMatrix();
    glTranslatef(-15, 0, 0);

    glColor3f(0.85, 0.9, 0.91);
    glBegin(GL_POLYGON);

    glVertex2f(78, 35.8);
    glVertex2f(78, 36.7);
    glVertex2f(83.3, 36.7);
    glVertex2f(83.3, 35.8);

    glEnd();

    glPopMatrix();

    glPopMatrix();
    ////



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
        //glColor3f(0.95, 0.73, 0.06);
        glColor3f(0.95, 0, 0);

    if (vanishfire < 5)
        glColor3f(0.34, 0.35, 0.35);
    //glColor3f(0, 0, 0);

    glBegin(GL_POLYGON);
    glVertex2f(104, 35);
    glVertex2f(104, 60);
    glVertex2f(120, 60);
    glVertex2f(120, 35);
    glEnd();


    //2ND MORE DEEPER PORTION
    if (vanishfire > 5) {
        glColor3f(0.5, 0.56, 0.59);
        glBegin(GL_POLYGON);
        glVertex2f(103, 60);
        glVertex2f(103, 61);
        glVertex2f(121, 61);
        glVertex2f(121, 60);
        glEnd();
    }


    //3RD PORTION FROM BOTTOM
    if (countfire <= 20) {
        glColor3f(0.57, 0.65, 0.69);
        glBegin(GL_POLYGON);
        glVertex2f(108, 61);
        glVertex2f(108, 63.5);
        glVertex2f(116, 63.5);
        glVertex2f(116, 61);
        glEnd();
    }

    if (countfire > 20 && vanishfire > 5) //for building texture
        //if (countfire > 20)
       // if (vanishfire < 5)
    {
        glColor3f(0.95, 0.73, 0.06);
        // if (vanishfire < 5)
        //     glColor3f(0.34, 0.35, 0.35);
        glBegin(GL_POLYGON);
        glVertex2f(108, 61);
        glVertex2f(108, 63.5);
        glVertex2f(116, 63.5);
        glVertex2f(116, 61);
        glEnd();
    }


    //TOP MOST PORTION MORE DEEPER
    if (vanishfire > 5) { // ONLY PRINT WHEN VANISHFIRE IS GREATER THAN 5
        glColor3f(0.5, 0.56, 0.59);
        // if (vanishfire < 5)
        //     glColor3f(0, 0, 0);

        glBegin(GL_POLYGON);
        glVertex2f(107, 63.5);
        glVertex2f(107, 64.5);
        glVertex2f(117, 64.5);
        glVertex2f(117, 63.5);
        glEnd();


        //VERTICAL WHITISH LINE IN THE 3RD PORTION

        glLineWidth(3);
        glColor3f(0.69, 0.76, 0.8);

        // if (vanishfire < 5)
        //     glColor3f(0, 0, 0);

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

    }


    //NOW PRINTING THE HORIZONTAL WINDOWS OF BUILDING 11

    //BACKGROUND AREA OF HORIZONTAL WINDOWS

    glColor3f(0.5, 0.56, 0.59);
    // if (vanishfire < 5)
    //     glColor3f(0, 0, 0);

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
    if (vanishfire < 5)
        glColor3f(0.34, 0.35, 0.35);
    //glColor3f(0, 0, 0);

    glBegin(GL_POLYGON);
    glVertex2f(105.5, 57);
    glVertex2f(105.5, 58.5);
    glVertex2f(118.5, 58.5);
    glVertex2f(118.5, 57);
    glEnd();

    //VERTICAL LINES IN EACH HORIZONTAL WINDOWS

    glLineWidth(3);
    glColor3f(0.69, 0.76, 0.8);

    // if (vanishfire < 5)
    //     glColor3f(0, 0, 0);
    glBegin(GL_LINES);
    glVertex2f(107, 58.5);
    glVertex2f(107, 57);
    glEnd();

    //NOW PRINTING REST OF THE VERTICAL LINES IN ECH WINDOWS

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
    if (vanishfire < 5)
        glColor3f(0.34, 0.35, 0.35);
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
    if (vanishfire < 5)
        glColor3f(0.34, 0.35, 0.35);
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
    if (vanishfire < 5)
        glColor3f(0.34, 0.35, 0.35);
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
    if (vanishfire < 5)
        glColor3f(0.34, 0.35, 0.35);
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
    if (vanishfire < 5)
        glColor3f(0.34, 0.35, 0.35);
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
    if (vanishfire < 5)
        glColor3f(0.34, 0.35, 0.35);
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


    /*  glVertex2f(104, 35);
     glVertex2f(104, 60);
     glVertex2f(120, 60);
     glVertex2f(120, 35); */


    if (vanishfire < 6) {
        glColor3f(0.47, 0.75, 0.95);
        //glColor3f(0, 0, 0);
        glVertex2f(104, 35);
        glVertex2f(104, 60);
        glVertex2f(120, 60);
        glVertex2f(120, 35);
        ApplyTexture(120, 35, 120, 60, 104, 60, 104, 35, textures[3].textureID);
    }






}


bool state = true;
float _move = 0;

//ID - 33
void bird01() {
    glPushMatrix();
    glTranslatef(40 + 135, 0, 0);//translated 40 + 130(after scaling by 0.5)value in x axis , so that is appear from the outside screen of the right
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

// ID - 34
void bird02() {
    glPushMatrix();
    glTranslatef(45 + 135, -5, 0);
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

//ID - 35
void bird03() {
    glPushMatrix();
    glTranslatef(50 + 135, 0, 0);
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

//ID-36
void bird04() {
    glPushMatrix();
    glTranslatef(55 + 135, -5, 0);
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


//ID-37
void bird05() {
    glPushMatrix();
    glTranslatef(52.5 + 135, -10, 0);//translated 40 value in x axis , so that is appear from the outside screen of the right
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
// ID - 57
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



//ID - 55
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
    glRotatef(_angle2, 0, 0, 1);
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
    glRotatef(2 * _angle1, 0, 1, 0);
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


}


//ID - 28
void sky() {
    // glColor3f(0.46, 0.72, 0.83);
    glColor3f(1, 1, 1);
    glBegin(GL_POLYGON);
    glVertex2f(0, 21.9);
    glVertex2f(0, 80 + 3);
    glVertex2f(130, 80 + 3);
    glVertex2f(130, 21.9);

    glEnd();


    ApplyTexture(0, 21.9, 0, 80 + 3, 130, 80 + 3, 130, 21.9, textures[2].textureID);
    //ApplyTexture(130, 21.9, 130, 80 + 3, 0, 80 + 3, 0, 21.9, textures[2].textureID);


}






//ID - 38
void tree_01() {

    /* circle_tree(1.34536240, 7.4, 27.4, 0, 1, 0);
    circle_tree(1.34536240, 6, 28.5, 0, 1, 0);
    circle_tree(1.34536240, 5, 30, 0, 1, 0);
    circle_tree(1.34536240, 4.5680291275155, 32.0043448483279, 0, 1, 0);
    circle_tree(1.34536240, 5, 34, 0, 1, 0);
    circle_tree(1.34536240, 6.1909757057146, 35.8278670002782, 0, 1, 0);
    circle_tree(1.34536240, 7.9276388328357, 36.2879102127606, 0, 1, 0);


    circle_tree(1.34536240, 13.7410741843323, 36.3749187118342, 0, 1, 0);
    circle_tree(1.34536240, 14.6902740563269, 34.654756808448, 0, 1, 0);
    circle_tree(1.34536240, 15.1733194294334, 32.8490871994546, 0, 1, 0);
    circle_tree(1.34536240, 15.3801729540427, 30.7805594577581, 0, 1, 0);
    circle_tree(1.34536240, 15.3801729540427, 30.7805594577581, 0, 1, 0);

    //

    circle_tree(0.849280319, 9.3849213471753, 36.2652912570955, 0, 1, 0);

    //
    circle_tree(1.22414222669, 10.6878981077301, 37.0699836739806, 0, 1, 0);
    circle_tree(1.22414222669, 12.1314785121354, 37.5289157434802, 0, 1, 0);


    //

    circle_tree(1.0010888654901, 14.8835797468066, 28.9087705164495, 0, 1, 0);
    circle_tree(1.0010888654901, 14.3744546333287, 27.6215851323334, 0, 1, 0);
    circle_tree(1.0010888654901, 13.3652279932932, 26.9752264977039, 0, 1, 0);
    circle_tree(1.0010888654901, 11.8838490050412, 26.3638932345904, 0, 1, 0);
    circle_tree(1.0010888654901, 10.502427726449, 26.5088865346398, 0, 1, 0);
    circle_tree(1.0010888654901, 9.1122501049779, 26.799518955311, 0, 1, 0);


    circle_tree(5.3060466689, 10.7267674451223, 31.7585937438858, 0, 1, 0); */


    glPushMatrix();
    glTranslatef(0, -1.5, 0);

    circle_tree(1.978286377, 7.2400225968382, 27.5955279371978, 0.55, 0.57, 0.09);
    circle_tree(1.978286377, 5.8535517694358, 29.8174363144452, 0.55, 0.57, 0.09);
    circle_tree(1.978286377, 5.3380690259144, 32.5015016341601, 0.55, 0.57, 0.09);
    circle_tree(1.978286377, 6.2801581778673, 35.4699712261626, 0.55, 0.57, 0.09);
    circle_tree(1.978286377, 10.6528738642902, 37.1586215928706, 0.55, 0.57, 0.09);
    circle_tree(1.978286377, 12.608153236268, 38.3140139490393, 0.55, 0.57, 0.09);
    circle_tree(1.978286377, 15.1989726129297, 36.3489163288726, 0.55, 0.57, 0.09);
    circle_tree(1.978286377, 16.6609141163673, 34.0510786531141, 0.55, 0.57, 0.09);
    circle_tree(1.978286377, 16.7533778623229, 31.0364580817891, 0.55, 0.57, 0.09);
    circle_tree(1.978286377, 15.503336956217, 27.9921942391299, 0.55, 0.57, 0.09);
    circle_tree(1.978286377, 13.3191639169871, 26.892150700686, 0.55, 0.57, 0.09);
    circle_tree(1.978286377, 10.2795932569127, 26.9200677905146, 0.55, 0.57, 0.09);


    circle_tree(1.377951522914, 8.6087181572226, 35.4344206921267, 0.55, 0.57, 0.09);


    circle_tree(5.28069547, 11.6014149525288, 31.919713021566, 0.55, 0.57, 0.09);


    //tree leafs


    circle_tree_leaf(1.978286377, 8.5163239098084, 33.9199531415653, 0.06, 0.43, 0.14, 40, 120, 1);
    circle_tree_leaf(1.978286377, 11.1558290630765, 36.2177328533492, 0.06, 0.43, 0.14, 0, 100, 1);
    circle_tree_leaf(1.978286377, 14.3413420650764, 35.0612090245976, 0.06, 0.43, 0.14, 0, 50, 1);
    circle_tree_leaf(1.978286377, 12, 34, 0.06, 0.43, 0.14, 0, 100, 1);
    circle_tree_leaf(1.978286377, 14.3819218485414, 32.7684512588267, 0.06, 0.43, 0.14, 0, 130, 1);
    circle_tree_leaf(1.978286377, 8.5181431378536, 31.28728916235547, 0.06, 0.43, 0.14, 40, 120, 1);
    circle_tree_leaf(1.978286377, 14.4022117402738, 29.9075765245464, 0.06, 0.43, 0.14, 120, 200, 2);


    circle_tree_leaf(1.978286377, 10.8514806870892, 30.1162707469795, 0.06, 0.43, 0.14, 0, 100, 1);
    circle_tree_leaf(1.978286377, 12.8514806870892, 30.1162707469795, 0.06, 0.43, 0.14, 0, 100, 1);

    glPopMatrix();


    //tree wood brown color

    glColor3f(0.29, 0.14, 0.02);
    glBegin(GL_POLYGON);

    glVertex2f(10.32, 21.9);
    glVertex2f(10.16, 24.2);
    glVertex2f(10.58, 25.14);
    glVertex2f(11.32, 25);
    glVertex2f(11.52, 24.1);
    glVertex2f(11.66, 22.96);
    glVertex2f(11.74, 21.9);

    glEnd();


    glBegin(GL_POLYGON);

    glVertex2f(14, 27.6);
    glVertex2f(13.6, 27.2);
    glVertex2f(13.04, 26.12);
    glVertex2f(13.4, 26);
    glEnd();


    glBegin(GL_POLYGON);
    glVertex2f(13.04, 26.12);
    glVertex2f(11.52, 24.1);
    glVertex2f(11.66, 22.96);
    glVertex2f(12.04, 24.32);
    glVertex2f(13.4, 26);

    glEnd();


    glBegin(GL_POLYGON);
    glVertex2f(10.99, 26.3);
    glVertex2f(10.58, 25.14);
    glVertex2f(11.32, 25);
    glVertex2f(11.54, 26.36);

    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(12.7, 28.2);
    glVertex2f(11.84, 27.53);
    glVertex2f(10.99, 26.3);
    glVertex2f(11.54, 26.36);


    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(10.06, 26.68);
    glVertex2f(10.58, 25.14);
    glVertex2f(10.99, 26.3);
    glVertex2f(10.64, 27.28);

    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(10.28, 27.92);
    glVertex2f(10.06, 26.68);
    glVertex2f(10.64, 27.28);
    glVertex2f(10.72, 27.86);

    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(9.74, 28.96);
    glVertex2f(10.28, 27.92);
    glVertex2f(10.72, 27.86);
    glVertex2f(10, 29);

    glEnd();




}


//ID - 39
void tree_02() {

    glPushMatrix();


    //TRANSLATING TREE 02 TO -2 Y AXIS TO LOOK MORE ACCURATE AND BEAUTIFUL
    glTranslatef(0, -2, 0);


    //LOWER PORTION OF TREE O2

    //LEFT LOWER PORTION
    glColor3f(0, 0.5, 0.4);
    glBegin(GL_POLYGON);
    glVertex2f(72, 32.56);
    glVertex2f(72.3, 32.28);
    glVertex2f(72.7, 32.06);
    glVertex2f(75.22, 32.06);
    glVertex2f(75.64, 32.28);
    glVertex2f(76, 32.6);
    glVertex2f(76, 33.5);
    glVertex2f(72, 33.5);

    glEnd();


    //RIGHT LOWER PORTION
    glBegin(GL_POLYGON);
    glVertex2f(77.7, 33.5);
    glVertex2f(77.6, 33.3);
    glVertex2f(77.6, 32.7);
    glVertex2f(77.7, 32.3);
    glVertex2f(78, 32.06);
    glVertex2f(81.3, 32.06);
    glVertex2f(81.6, 32.3);
    glVertex2f(81.7, 32.7);
    glVertex2f(81.7, 33.3);
    glVertex2f(81.3, 33.7);
    glVertex2f(81.3, 33.7);

    glEnd();


    //UPPER PORTION BACK MORE DEEPER

    glBegin(GL_POLYGON);
    glVertex2f(71.6, 36.5);
    glVertex2f(71.3, 36.3);
    glVertex2f(71.1, 36.1);
    glVertex2f(71, 35.85);
    glVertex2f(71, 34.15);
    glVertex2f(71.1, 33.9);
    glVertex2f(71.3, 33.7);
    glVertex2f(71.6, 33.5);
    glVertex2f(81, 33.5);
    glVertex2f(81.3, 33.7);
    glVertex2f(81.4, 33.9);
    glVertex2f(81.5, 34.15);
    glVertex2f(81.5, 35.85);
    glVertex2f(81.4, 36.1);
    glVertex2f(81, 36.5);

    glEnd();

    //UPPER PORTOIN MAIN MORE LIGHTER PORTION
    glColor3f(0.04, 0.66, 0.52);
    glBegin(GL_POLYGON);
    glVertex2f(71.6, 36.5);
    glVertex2f(71.3, 36.3);
    glVertex2f(71.1, 36.1);
    glVertex2f(71, 35.85);
    glVertex2f(71, 34.15);
    glVertex2f(71.1, 33.9);
    glVertex2f(71.3, 33.7);
    glVertex2f(71.6, 33.5);
    glVertex2f(76.6, 33.5);
    glVertex2f(80, 34.5);
    glVertex2f(80.5, 35);
    glVertex2f(81, 36.5);

    glEnd();




    //THREE CIRCLES ABOVE THE MAIN BIG PORTION



    //3RD SMALL CIRCLE ABOVE THE TWO BIG CIRLCES

    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    for (int i = 0;i < 200;i++)
    {
        glColor3f(0.05, 0.73, 0.48);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = 1.2590895528;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 76.4616392073074, y + 38.8262048128104);
    }
    glEnd();


    //2ND BIG CIRCLE

    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    for (int i = 0;i < 200;i++)
    {
        glColor3f(0.05, 0.73, 0.48);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = 2.4515301344263;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 78.5, y + 37);
    }
    glEnd();


    //FIRST BIG CIRCLE
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    for (int i = 0;i < 200;i++)
    {
        glColor3f(0.07, 0.8, 0.51);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = 2.4515301344263;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 74, y + 37);
    }
    glEnd();


    //MORE LIGHTER COLOR CIRCLE OVER THE FIRST BIG CIRCLE
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    for (int i = 0;i < 200;i++)
    {
        glColor3f(0.2, 0.83, 0.58);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = 1.44902023;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 73.8, y + 37.8);
    }
    glEnd();



    //BELOW BROWND KANDO OF TREE 03
    glColor3f(0.43, 0.29, 0.28);
    glBegin(GL_POLYGON);
    glVertex2f(76, 21.9);
    glVertex2f(76, 33.5);
    glVertex2f(76.6, 33.5);
    glVertex2f(76.6, 21.9);
    glEnd();


    //RIGHT TRIANGLE TYPE EXTENSION
    glBegin(GL_POLYGON);
    glVertex2f(79.4, 33.4);
    glVertex2f(76.6, 27.9);
    glVertex2f(76.6, 26.9);
    glEnd();


    //LEFT TRIANGLE TYPE EXTENSION

    glBegin(GL_POLYGON);
    glVertex2f(73.6, 33.4);
    glVertex2f(76, 28.8);
    glVertex2f(76, 29.6);
    glEnd();

    //BEAUTIFICATOINS WHITE DOTS

    circle_tree(0.3, 73.81122716838, 38.4727225768801, 1, 1, 1);
    circle_tree(0.3, 72.7037208494535, 37.7068937393247, 1, 1, 1);
    circle_tree(0.3, 72.7508487779184, 35.9160324576565, 1, 1, 1);
    circle_tree(0.3, 74.3296343814946, 35.4683171372395, 1, 1, 1);
    circle_tree(0.3, 75.4842686288862, 36.0691982251676, 1, 1, 1);
    circle_tree(0.3, 75.4017947540725, 37.9660973458819, 1, 1, 1);
    circle_tree(0.3, 74, 37, 1, 1, 1);


    //NOW PRINTING THE DOTS OF THE SIDE SIDE BIG CIRCLE
    //JUST TRANSLATING TO X AXIS BY 4 VALUE

    glPushMatrix();
    glTranslatef(4.5, 0, 0);
    circle_tree(0.3, 73.81122716838, 38.4727225768801, 1, 1, 1);
    circle_tree(0.3, 72.7037208494535, 37.7068937393247, 1, 1, 1);
    circle_tree(0.3, 72.7508487779184, 35.9160324576565, 1, 1, 1);
    circle_tree(0.3, 74.3296343814946, 35.4683171372395, 1, 1, 1);
    circle_tree(0.3, 75.4842686288862, 36.0691982251676, 1, 1, 1);
    circle_tree(0.3, 75.4017947540725, 37.9660973458819, 1, 1, 1);
    circle_tree(0.3, 74, 37, 1, 1, 1);
    glPopMatrix();



    glPopMatrix();


}

//ID - 40
void tree_03() {

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

// ID - 41
void tree_04() {

    glPushMatrix();
    glTranslatef(3, -7, 0);
    glScalef(1, 1.3, 1);

    tree_03();


    glPopMatrix();

}


//ID - 42
void tree_05() {

    glPushMatrix();
    glTranslatef(45, 6.5, 0);
    glScalef(0.6, 0.7, 1);
    tree_03();


    glPopMatrix();



}

//ID - 43
void tree_06() {

    glPushMatrix();
    glTranslatef(84, 11, 0);
    glScalef(0.5, 0.5, 1);
    tree_02();

    glPopMatrix();
}


//ID - 44
void tree_07() {

    glPushMatrix();
    glTranslatef(48, 14, 0);
    glScalef(0.4, 0.4, 1);
    tree_02();

    glPopMatrix();
}

// ID - 45
void tree_08() {

    //MAIN BIG CIRCLE OF SMALL TREE 08 LIKE THE FIRST TREE
    circle_tree(2.26726732, 48, 26, 0.55, 0.57, 0.09);

    //SMALL CIRCLE'S

    circle_tree(1.148834028, 47.3663855270599, 24.165032917969, 0.55, 0.57, 0.09);
    circle_tree(1.148834028, 45.6543150861946, 24.9342298577172, 0.55, 0.57, 0.09);
    circle_tree(1.148834028, 44.9628140397705, 26.3155968802804, 0.55, 0.57, 0.09);
    circle_tree(1.148834028, 45.5320809709707, 27.7176802478658, 0.55, 0.57, 0.09);
    circle_tree(1.148834028, 45.9853861198893, 28.67700044674, 0.55, 0.57, 0.09);
    circle_tree(1.148834028, 47.4401793885118, 27.7282222280732, 0.55, 0.57, 0.09);
    circle_tree(1.148834028, 48.8000948352677, 28.7507943081919, 0.55, 0.57, 0.09);
    circle_tree(1.148834028, 50.0320240553024, 27.2902774319341, 0.55, 0.57, 0.09);
    circle_tree(1.148834028, 49.9898164098124, 25.4464140443566, 0.55, 0.57, 0.09);
    circle_tree(1.148834028, 49.30487881857022, 24.14587152720956, 0.55, 0.57, 0.09);


    //KANDO OR TREE 08 BROWN

    //MAIN VERTICLE PORTION
    glColor3f(0.29, 0.14, 0.02);
    glBegin(GL_POLYGON);
    glVertex2f(48, 21.9);
    glVertex2f(48, 22.64);
    glVertex2f(48.2, 23.2);
    glVertex2f(48.8, 23.8);
    glVertex2f(49.4, 23.5);
    glVertex2f(49.4, 21.9);
    glEnd();

    //EXTENSOINS OF THE KANDO (FROM LEFT)
    //FIRST
    glBegin(GL_POLYGON);
    glVertex2f(46.6, 24.6);
    glVertex2f(48, 22.64);
    glVertex2f(48.2, 23.2);
    glEnd();

    //SECOND
    glBegin(GL_POLYGON);
    glVertex2f(47.8, 27.6);
    glVertex2f(48.2, 23.2);
    glVertex2f(48.8, 23.8);
    glEnd();

    //THIRD
    glBegin(GL_POLYGON);
    glVertex2f(50, 28);
    glVertex2f(48.8, 23.8);
    glVertex2f(49.4, 23.5);
    glEnd();

    //BEATIFICATION SMALL DOTS
    circle_tree(0.3, 47.3663855270599, 24.165032917969, 0.85, 0.11, 0.55);
    circle_tree(0.3, 45.6543150861946, 24.9342298577172, 0.85, 0.11, 0.55);
    circle_tree(0.3, 44.9628140397705, 26.3155968802804, 0.85, 0.11, 0.55);
    circle_tree(0.3, 45.5320809709707, 27.7176802478658, 0.85, 0.11, 0.55);
    circle_tree(0.3, 45.9853861198893, 28.67700044674, 0.85, 0.11, 0.55);
    circle_tree(0.3, 47.4401793885118, 27.7282222280732, 0.85, 0.11, 0.55);
    circle_tree(0.3, 48.8000948352677, 28.7507943081919, 0.85, 0.11, 0.5);
    circle_tree(0.3, 50.0320240553024, 27.2902774319341, 00.85, 0.11, 0.55);
    circle_tree(0.3, 49.9898164098124, 25.4464140443566, 0.85, 0.11, 0.55);
    circle_tree(0.3, 47.7040567181124, 24.8702153158848, 0.85, 0.11, 0.55);
    circle_tree(0.3, 46.9728856635631, 25.4987658715499, 0.85, 0.11, 0.55);
    circle_tree(0.3, 46.7291619787133, 26.2812471755411, 0.85, 0.11, 0.55);
    circle_tree(0.3, 47.5372984074257, 27.1022111666139, 0.85, 0.11, 0.55);
    circle_tree(0.3, 48.7302617069536, 26.5506259851119, 0.85, 0.11, 0.55);
    circle_tree(0.3, 49.063778328327, 25.4987658715499, 0.85, 0.11, 0.55);
    circle_tree(0.3, 48.7430892693139, 27.5255207245108, 0.85, 0.11, 0.55);


}


// ID - 46
void tree_09() {

    glPushMatrix();
    glTranslatef(50, 0, 0);
    tree_08();
    glPopMatrix();
}

// ID - 47
void trees_back_tree01() {
    glPushMatrix();
    glTranslatef(-125, 0, 0);
    tree_04();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-121.5, -2, 0);
    tree_04();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-118, 0, 0);
    tree_04();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-114.5, -4, 0);
    tree_04();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-93, 5, 0);
    tree_04();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-60, 0, 0);
    tree_04();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-25, 2, 0);
    tree_04();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-7, 2, 0);
    tree_04();
    glPopMatrix();



}


//ID - 48
void upper_road_area() {

    //green area of upper  area

    glColor3f(0.35, 0.58, 0.19);
    //glColor3f(1, 1, 1);
    glBegin(GL_POLYGON);
    glVertex2f(0, 20.5);
    glVertex2f(0, 21.9);
    glVertex2f(130, 21.9);
    glVertex2f(130, 20.5);


    glEnd();

    //TRIED TO APPLY TEXTURE ON THE UPPER GREEEN AREA BUT DIDN'T LOOK GOOD

    /*   ApplyTexture(0, 20.5, 0, 21.9, 15, 21.9, 15, 20.5, textures[0].textureID);
      ApplyTexture(0, 20.5, 0, 21.9, 30, 21.9, 30, 20.5, textures[0].textureID);
      ApplyTexture(0, 20.5, 0, 21.9, 45, 21.9, 45, 20.5, textures[0].textureID);
      ApplyTexture(0, 20.5, 0, 21.9, 60, 21.9, 60, 20.5, textures[0].textureID);
      ApplyTexture(0, 20.5, 0, 21.9, 75, 21.9, 75, 20.5, textures[0].textureID); */




      //whitish area under the green area

    glColor3f(0.84, 0.87, 0.88);
    glBegin(GL_POLYGON);
    glVertex2f(0, 19.8);
    glVertex2f(0, 20.5);
    glVertex2f(130, 20.5);
    glVertex2f(130, 19.8);

    glEnd();

    //deep whitish area under the green area
    glColor3f(0.58, 0.65, 0.65);
    glBegin(GL_POLYGON);
    glVertex2f(0, 17.9);
    glVertex2f(0, 19.8);
    glVertex2f(130, 19.8);
    glVertex2f(130, 17.9);

    glEnd();



}


//FLYING CARS

//ID - 29
void flying_car_01() {

    //SCALING WITH 0.7 TO IT'S ORIGINAL SIZE TO LOOK MORE ACCURATE WITH
    // THE SCENARIO

    glPushMatrix();
    glScalef(0.5, 0.5, 1);
    glTranslatef(60 + 160, 75, 0);
    glTranslatef(_move_fly_car_01, 0, 0);


    //RIGHT SIDE LEG WITH FAN

    glColor3f(0.69, 0.8, 0.85);
    glBegin(GL_POLYGON);

    glVertex2f(60.5350801964322, 69.8816273328036);
    glVertex2f(59.6705877936699, 69.1772261157376);
    glVertex2f(59.2543507108585, 68.4568157801019);
    glVertex2f(59.1649434741903, 67.9865332641587);
    glVertex2f(59.3981189345542, 67.8147197670483);
    glVertex2f(70.2, 67.85);
    glVertex2f(70.2, 68.55);
    glVertex2f(61.2, 69.85);
    glEnd();


    //NOW PRINTING THE FAN OF THE RIGHT SIDE LEG
   //USING THE CODE OF THE LEFT LEG FAN.. JUST TRANSLATING
   // IN X AXIS AND Y AXIS TO MATCH THE DESIGN

    glPushMatrix();
    glTranslatef(25.94, -0.33, 0);

    //RIGHT SIDE FAN

    //CYLINDER TYPE PORTOIN BELOW THE TWO FAN'S
    glColor3f(0.75, 0.87, 0.91);
    glBegin(GL_POLYGON);

    glVertex2f(44.25, 69.53);
    glVertex2f(44.25, 67.55);
    glVertex2f(45.25, 67.55);
    glVertex2f(45.25, 69.53);

    glEnd();


    //LEFT SIDE FAN OF RIGHT LEG
    glPushMatrix();
    glTranslatef(44.75, 70.05, 0);
    glRotatef(3 * _angle1, 0, 1, 0);
    glTranslatef(-44.75, -70.05, 0);

    glColor3f(0.75, 0.87, 0.91);
    glBegin(GL_POLYGON);

    glVertex2f(44.65, 70.2);
    glVertex2f(44.14, 70.4);
    glVertex2f(41.3, 70.4);
    glVertex2f(41.95, 69.7);
    glVertex2f(44.14, 69.7);
    glVertex2f(44.65, 69.9);

    glEnd();

    //RIGHT SIDE FAN OF RIGHT LEG

    glColor3f(0.75, 0.87, 0.91);
    glBegin(GL_POLYGON);

    glVertex2f(44.85, 70.2);
    glVertex2f(45.3, 70.4);
    glVertex2f(47.49, 70.4);
    glVertex2f(48.14, 69.7);
    glVertex2f(45.3, 69.7);
    glVertex2f(44.85, 69.9);

    glEnd();

    glPopMatrix();

    //VERTICAL CYLINDER TYPE AREA BETWEEN LEFT AND RIGHT FAN
    glColor3f(0.69, 0.81, 0.84);
    glBegin(GL_POLYGON);

    glVertex2f(44.635, 69.53);
    glVertex2f(44.635, 70.73);
    glVertex2f(44.86, 70.73);
    glVertex2f(44.86, 69.53);
    glVertex2f(45.3, 69.7);
    glVertex2f(44.85, 69.9);

    glEnd();

    glPopMatrix();



    //LEFT SIDE LEG WITH FAN

    glColor3f(0.69, 0.8, 0.85);
    glBegin(GL_POLYGON);

    glVertex2f(51.06502097, 69.48);
    glVertex2f(45.2, 68.8);
    glVertex2f(45.2, 68.05);
    glVertex2f(51.22, 68.02);

    glEnd();

    //LEFT SIDE FAN

    //CYLINDER TYPE PORTOIN BELOW THE TWO FAN'S
    glColor3f(0.75, 0.87, 0.91);
    glBegin(GL_POLYGON);

    glVertex2f(44.25, 69.53);
    glVertex2f(44.25, 67.55);
    glVertex2f(45.25, 67.55);
    glVertex2f(45.25, 69.53);

    glEnd();


    //LEFT SIDE FAN OF LEFT LEG

    glPushMatrix();
    glTranslatef(44.75, 70.05, 0);
    glRotatef(3 * _angle1, 0, 1, 0);
    glTranslatef(-44.75, -70.05, 0);

    glColor3f(0.75, 0.87, 0.91);
    glBegin(GL_POLYGON);

    glVertex2f(44.65, 70.2);
    glVertex2f(44.14, 70.4);
    glVertex2f(41.3, 70.4);
    glVertex2f(41.95, 69.7);
    glVertex2f(44.14, 69.7);
    glVertex2f(44.65, 69.9);

    glEnd();

    //RIGHT SIDE FAN OF LEFT LEG

    glColor3f(0.75, 0.87, 0.91);
    glBegin(GL_POLYGON);

    glVertex2f(44.85, 70.2);
    glVertex2f(45.3, 70.4);
    glVertex2f(47.49, 70.4);
    glVertex2f(48.14, 69.7);
    glVertex2f(45.3, 69.7);
    glVertex2f(44.85, 69.9);

    glEnd();

    glPopMatrix();

    //VERTICAL CYLINDER TYPE AREA BETWEEN LEFT AND RIGHT FAN
    glColor3f(0.69, 0.81, 0.84);
    glBegin(GL_POLYGON);

    glVertex2f(44.635, 69.53);
    glVertex2f(44.635, 70.73);
    glVertex2f(44.86, 70.73);
    glVertex2f(44.86, 69.53);
    glVertex2f(45.3, 69.7);
    glVertex2f(44.85, 69.9);

    glEnd();


    //UPPER MORE LIGHTER AREA OF FLYING CAR 01
    glColor3f(0.83, 0.94, 0.98);
    glBegin(GL_POLYGON);
    glVertex2f(53.96, 76.32);
    glVertex2f(52.06, 75.54);
    glVertex2f(50.5, 74.14);
    glVertex2f(49.7, 72.45);
    glVertex2f(49.7, 70.64);
    glVertex2f(67.12, 70.64);
    glVertex2f(67.25, 71.6);
    glVertex2f(67.15, 73.25);
    glVertex2f(66.44, 74.54);
    glVertex2f(65.45, 75.6);
    glVertex2f(63.82, 76.32);

    glEnd();


    //LOWER MORE DEEPR AREA UNDER THE UPPER AREA
    glColor3f(0.76, 0.87, 0.91);
    glBegin(GL_POLYGON);

    glVertex2f(61.2, 69.85);
    glVertex2f(60.48, 67.54);
    glVertex2f(60.04, 67.3);
    glVertex2f(54.02, 67.3);
    glVertex2f(52.2, 67.5);
    glVertex2f(51.22, 68.02);
    glVertex2f(49.7, 70.13);
    glVertex2f(49.7, 70.64);
    glVertex2f(67.12, 70.64);
    glVertex2f(66.54, 70);
    glVertex2f(62, 70);

    glEnd();


    //RIGHT SQUARE TYPE WINDOW SMALL MORE DEPER
    glColor3f(0.76, 0.87, 0.91);
    glBegin(GL_POLYGON);

    glVertex2f(64.2, 73.8);
    glVertex2f(64, 73.6);
    glVertex2f(64, 72);
    glVertex2f(64.2, 71.8);
    glVertex2f(65.6, 71.8);
    glVertex2f(65.8, 72);
    glVertex2f(65.8, 73.6);
    glVertex2f(65.6, 73.8);

    glEnd();



    //NOW PRINTING THE WINDOW'S
    //LEFT SIDE WINDOW

    glColor3f(0.2, 0.33, 0.38);
    glBegin(GL_POLYGON);

    glVertex2f(52.06, 75.54);
    glVertex2f(50.5, 74.14);
    glVertex2f(49.7, 72.45);
    glVertex2f(49.7, 71.6);
    glVertex2f(55.60, 71.6);
    glVertex2f(55.60, 75.54);

    glEnd();


    //RIGHT SIDE WINDOW
    glColor3f(0.2, 0.33, 0.38);
    glBegin(GL_POLYGON);

    glVertex2f(56.4, 75.54);
    glVertex2f(56.4, 71.6);
    glVertex2f(61.8, 71.6);
    glVertex2f(62.78, 72.38);
    glVertex2f(62.87, 73.88);
    glVertex2f(62.62, 74.88);
    glVertex2f(61.8, 75.54);

    glEnd();



    //TWO SMALL VERTICAL LEG'S
    //LEFT SMALL LEG

    glColor3f(0.83, 0.94, 0.98);
    glBegin(GL_POLYGON);

    glVertex2f(53.9, 68.1);
    glVertex2f(53.7, 68.4);
    glVertex2f(53.3, 68.6);
    glVertex2f(52.9, 68.4);
    glVertex2f(52.7, 68.1);
    glVertex2f(52.7, 66.2);
    glVertex2f(53.9, 66.2);

    glEnd();


    //RIGHT SMALL LEG

    glColor3f(0.83, 0.94, 0.98);
    glBegin(GL_POLYGON);

    glVertex2f(59.05, 67.45);
    glVertex2f(59.05, 66.2);
    glVertex2f(60.2, 66.2);
    glVertex2f(60.2, 67.5);

    glEnd();


    glPopMatrix();


}

//ID - 30
void flying_car_02() {

    glPushMatrix();
    glTranslatef(-30, 3, 0);
    glTranslatef(_move_fly_car_02, 0, 0);


    //MAIN AREA MORE LIGHTER
    glColor3f(0.72, 0.79, 0.84);
    glBegin(GL_POLYGON);

    glVertex2f(23.2054719003865, 72.2244378853392);
    glVertex2f(23.014280, 72.50957);
    glVertex2f(22.8636172379502, 72.7342699308603);
    glVertex2f(22.6699880527163, 73.279952180152);
    glVertex2f(22.5, 74);
    glVertex2f(22.40594825467, 74.4857339245548);
    glVertex2f(22.4147495812716, 74.8905949482229);
    glVertex2f(22.5467694802947, 75.277853318688);
    glVertex2f(22.7315973389271, 75.6827143423561);
    glVertex2f(23.118855709395, 76.0259660798138);
    glVertex2f(23.6557366320891, 76.3076085310612);
    glVertex2f(24.3334387804079, 76.5012377162938);
    glVertex2f(25.1871674607576, 76.5100390428953);
    glVertex2f(26.0320948145057, 76.4220257768805);
    glVertex2f(26.8594195150507, 76.1843899586405);
    glVertex2f(27.739552175205, 75.8851448541902);
    glVertex2f(28.6548901417654, 75.4626811773191);
    glVertex2f(29.5, 75);
    glVertex2f(30.4063541354725, 74.4681312713519);
    glVertex2f(30.9520363847681, 73.9136476954586);
    glVertex2f(31.2072748562129, 73.4031707525728);
    glVertex2f(31.1978247040385, 72.826075147076);
    glVertex2f(31.128062916799, 72.4350248264099);
    glVertex2f(31.0488509773851, 72.2244378853392);


    glEnd();


    //LEFT SIDE DEEPER PORTION OF THE MAIN PORTION
    glColor3f(0.65, 0.73, 0.78);
    glBegin(GL_POLYGON);


    glVertex2f(23.014280, 72.50957);
    glVertex2f(23.6151327676788, 72.7455576281073);
    glVertex2f(24.1175387167569, 73.1209183946573);
    glVertex2f(24.1175387167569, 73.1209183946573);
    glVertex2f(24.4871247022856, 74.5934875557378);
    glVertex2f(24.3543047387362, 75.0612448186693);
    glVertex2f(24.1069719697648, 75.7343245316221);
    glVertex2f(23.81471269, 76.353018);
    glVertex2f(23.6557366320891, 76.3076085310612);
    glVertex2f(23.118855709395, 76.0259660798138);
    glVertex2f(22.7315973389271, 75.6827143423561);
    glVertex2f(22.5467694802947, 75.277853318688);
    glVertex2f(22.4147495812716, 74.8905949482229);
    glVertex2f(22.40594825467, 74.4857339245548);
    glVertex2f(22.5, 74);
    glVertex2f(22.6699880527163, 73.279952180152);
    glVertex2f(22.8636172379502, 72.7342699308603);

    glEnd();


    //NOW PRINTING THE WINDOW
    //MORE DEEPER BACKWORD PORTOIN OF THE MAIN WINDOW
    glColor3f(0.42, 0.47, 0.49);
    glBegin(GL_POLYGON);


    glVertex2f(25.5060040204583, 74.1255285484125);
    glVertex2f(26.0107503829645, 74.1094196219497);
    glVertex2f(26.6014110199398, 74.0235053474811);
    glVertex2f(27.0578306030571, 73.8946339357783);
    glVertex2f(27.4229662695509, 73.6583696809899);
    glVertex2f(27.6646001664954, 73.3308215095786);
    glVertex2f(27.9921483379089, 72.8314447892303);
    glVertex2f(31.1978247040385, 72.8314447892303);
    glVertex2f(31.2072748562129, 73.4031707525728);
    glVertex2f(30.9520363847681, 73.9136476954586);
    glVertex2f(30.4063541354725, 74.4681312713519);
    glVertex2f(29.5, 75);
    glVertex2f(28.6548901417654, 75.4626811773191);
    glVertex2f(27.739552175205, 75.8851448541902);
    glVertex2f(26.8594195150507, 76.1843899586405);
    glVertex2f(26.0320948145057, 76.4220257768805);
    glVertex2f(25.1871674607576, 76.5100390428953);
    glVertex2f(24.3334387804079, 76.5012377162938);

    glEnd();

    //UPPER PORTION OF THE WINDOW

    glColor3f(0.49, 0.71, 0.76);
    glBegin(GL_POLYGON);


    glVertex2f(25.631719443444, 74.3644302489317);
    glVertex2f(26.2624253949546, 74.3171273025687);
    glVertex2f(26.908898995253, 74.1752184634798);
    glVertex2f(27.4844181760065, 73.9150522584835);
    glVertex2f(27.7840035029741, 73.5681639851551);
    glVertex2f(28.1466594250927, 73.0478315751625);
    glVertex2f(31.2013533, 73.0478315751625);
    glVertex2f(31.2072748562129, 73.4031707525728);
    glVertex2f(30.9520363847681, 73.9136476954586);
    glVertex2f(30.4063541354725, 74.4681312713519);
    glVertex2f(29.5, 75);
    glVertex2f(28.6548901417654, 75.4626811773191);
    glVertex2f(27.739552175205, 75.8851448541902);
    glVertex2f(26.8594195150507, 76.1843899586405);
    glVertex2f(26.0320948145057, 76.4220257768805);
    glVertex2f(25.1871674607576, 76.5100390428953);
    glVertex2f(24.6, 76.5);

    glEnd();

    //LOWER PORTION SMALL AREA UNDER THE MAIN AREA

    glColor3f(0.57, 0.63, 0.66);
    glBegin(GL_POLYGON);


    glVertex2f(23.3973974744114, 72.226756756407);
    glVertex2f(23.3821474135114, 72.107798031219);
    glVertex2f(23.4233805966512, 72.0443623648504);
    glVertex2f(23.4889201367015, 71.979282668863);
    glVertex2f(30.7176448767507, 71.979282668863);
    glVertex2f(30.861220862812, 72.0520518811328);
    glVertex2f(30.861220862812, 72.0520518811328);
    glVertex2f(30.865341680, 72.226756756407);


    glEnd();



    //MOST LOWER PORTOIN MORE DEPER COLOR
    glColor3f(0.57, 0.63, 0.66);
    glBegin(GL_POLYGON);


    glVertex2f(24.1423893085185, 71.979282668863);
    glVertex2f(24.0937370010056, 71.5844537836782);
    glVertex2f(24.1495603874103, 71.3454599106347);
    glVertex2f(24.3431977590017, 71.1361222116186);
    glVertex2f(24.4984565524398, 71.0802988252142);
    glVertex2f(29.5362948476282, 71.0802988252142);
    glVertex2f(29.7501378454374, 71.1940312455491);
    glVertex2f(29.8675853181201, 71.3632937797082);
    glVertex2f(29.9124917047341, 71.6120060747991);
    glVertex2f(29.8779483304156, 71.8607183698901);
    glVertex2f(29.833042481, 71.979282668863);

    glEnd();

    //MOST LOWER PORTION  WHITE

    glColor3f(1, 1, 1);
    glBegin(GL_POLYGON);


    glVertex2f(24.54127, 71.979282668863);
    glVertex2f(24.507070462386, 71.8404083321477);
    glVertex2f(24.4956682284123, 71.6617733332276);
    glVertex2f(24.5412771643071, 71.5515517381492);
    glVertex2f(24.6438972700704, 71.498341312939);
    glVertex2f(24.6438972700704, 71.498341312939);
    glVertex2f(29.3908867525258, 71.498341312939);
    glVertex2f(29.4668821760263, 71.5429193261628);
    glVertex2f(29.5117885626403, 71.7570882469355);
    glVertex2f(29.463426, 71.979282668863);

    glEnd();


    //NOW PRINTING THE LEFT LEG WITH FAN

    //LEFT LEG

    glColor3f(0.65, 0.73, 0.78);
    glBegin(GL_POLYGON);


    glVertex2f(22.5, 74);
    glVertex2f(20.4188675344889, 73.9497895532655);
    glVertex2f(20.41886753448895, 73.6476311388768);
    glVertex2f(22.6682902481801, 73.2787862353348);
    glEnd();

    //U SHAPE PORTIN OF LEFT LEG

    glColor3f(0.72, 0.79, 0.84);
    glBegin(GL_POLYGON);

    glVertex2f(19.8242827596721, 73.5543106585247);
    glVertex2f(19.8429468557425, 73.4716553759274);
    glVertex2f(19.9149369405858, 73.3650033983825);
    glVertex2f(20.0215889181315, 73.2903470141011);
    glVertex2f(20.1442386923089, 73.2796818163466);
    glVertex2f(20.2562232687318, 73.3090111101715);
    glVertex2f(20.3682078451548, 73.375668596137);
    glVertex2f(20.4188675344889, 73.4983183703136);
    glVertex2f(20.4188675344889, 74.151561732776);
    glVertex2f(19.8349479574266, 74.1462291338987);
    glEnd();

    //SMALL AREA ABOVE THE U SHAPE
    glColor3f(0.42, 0.52, 0.56);
    glBegin(GL_POLYGON);

    glVertex2f(19.9698051120415, 74.3664991942913);
    glVertex2f(19.9698051120415, 74.1462291338987);
    glVertex2f(20.2991166755112, 74.1462291338987);
    glVertex2f(20.2991166755112, 74.3664991942913);


    glEnd();


    glPushMatrix();
    glTranslatef(20.0979686535922, 74.6325550068853, 0);
    glRotatef(2 * _angle1, 0, 1, 0);
    glTranslatef(-20.0979686535922, -74.6325550068853, 0);

    //PORTION AVOBE THE SMALL AREA

    glColor3f(0.58, 0.65, 0.7);
    glBegin(GL_POLYGON);

    glVertex2f(18.94934821, 74.5074763421821);
    glVertex2f(19, 74.4);
    glVertex2f(19.1090310663888, 74.3571876444995);
    glVertex2f(21.1567145723296, 74.3571876444995);
    glVertex2f(21.2612685140361, 74.4029224004772);
    glVertex2f(21.2897244, 74.5074763421821);



    glEnd();

    //MOST UPPER FAN

    glColor3f(0.71, 0.78, 0.83);
    glBegin(GL_POLYGON);

    glVertex2f(18.3341049689571, 74.8315363465604);
    glVertex2f(18.1791197494708, 74.7376059105087);
    glVertex2f(18.2, 74.6);
    glVertex2f(18.2965327945362, 74.5074763421821);
    glVertex2f(21.8940684953404, 74.5074763421821);
    glVertex2f(21.9973919749979, 74.5309589511951);
    glVertex2f(22.0586063047774, 74.6255428713033);
    glVertex2f(22.0537502366293, 74.7516954759165);
    glVertex2f(21.959819800577, 74.8315363465604);



    glEnd();

    glPopMatrix();

    //NOW PRINTING THE RIGHT SIDE LEG WITH FAN

    //RIGHT  LEG

    glColor3f(0.65, 0.73, 0.78);
    glBegin(GL_POLYGON);


    glVertex2f(30.9520363847681, 73.9136476954586);
    glVertex2f(33.6314974186771, 73.9400556605716);
    glVertex2f(33.6390825164548, 73.6669921405759);
    glVertex2f(31.2072748562129, 73.4031707525728);
    glEnd();

    //NOW PRINTING THE U SHAPE AND REST OF THE DESIGN
    //USING THE CODE OF THE LEFT LEG..JUST TRANSLATING IN
    //X AXIS
    glPushMatrix();
    glTranslatef(12.7, 0, 0);

    //U SHAPE PORTIN OF LEFT LEG

    glColor3f(0.72, 0.79, 0.84);
    glBegin(GL_POLYGON);

    glVertex2f(19.8242827596721, 73.5543106585247);
    glVertex2f(19.8429468557425, 73.4716553759274);
    glVertex2f(19.9149369405858, 73.3650033983825);
    glVertex2f(20.0215889181315, 73.2903470141011);
    glVertex2f(20.1442386923089, 73.2796818163466);
    glVertex2f(20.2562232687318, 73.3090111101715);
    glVertex2f(20.3682078451548, 73.375668596137);
    glVertex2f(20.4188675344889, 73.4983183703136);
    glVertex2f(20.4188675344889, 74.151561732776);
    glVertex2f(19.8349479574266, 74.1462291338987);
    glEnd();

    //SMALL AREA ABOVE THE U SHAPE
    glColor3f(0.42, 0.52, 0.56);
    glBegin(GL_POLYGON);

    glVertex2f(19.9698051120415, 74.3664991942913);
    glVertex2f(19.9698051120415, 74.1462291338987);
    glVertex2f(20.2991166755112, 74.1462291338987);
    glVertex2f(20.2991166755112, 74.3664991942913);


    glEnd();

    glPushMatrix();
    glTranslatef(20.0979686535922, 74.6325550068853, 0);
    glRotatef(2 * _angle1, 0, 1, 0);
    glTranslatef(-20.0979686535922, -74.6325550068853, 0);

    //PORTION AVOBE THE SMALL AREA

    glColor3f(0.58, 0.65, 0.7);
    glBegin(GL_POLYGON);

    glVertex2f(18.94934821, 74.5074763421821);
    glVertex2f(19, 74.4);
    glVertex2f(19.1090310663888, 74.3571876444995);
    glVertex2f(21.1567145723296, 74.3571876444995);
    glVertex2f(21.2612685140361, 74.4029224004772);
    glVertex2f(21.2897244, 74.5074763421821);



    glEnd();

    //MOST UPPER FAN

    glColor3f(0.71, 0.78, 0.83);
    glBegin(GL_POLYGON);

    glVertex2f(18.3341049689571, 74.8315363465604);
    glVertex2f(18.1791197494708, 74.7376059105087);
    glVertex2f(18.2, 74.6);
    glVertex2f(18.2965327945362, 74.5074763421821);
    glVertex2f(21.8940684953404, 74.5074763421821);
    glVertex2f(21.9973919749979, 74.5309589511951);
    glVertex2f(22.0586063047774, 74.6255428713033);
    glVertex2f(22.0537502366293, 74.7516954759165);
    glVertex2f(21.959819800577, 74.8315363465604);



    glEnd();

    glPopMatrix();

    glPopMatrix();


    glPopMatrix();

}

//ID - 31
void flying_car_03() {

    //MAIN BACKGROUND OF FLYING CAR 03 MORE LIGHETER
    glPushMatrix();
    glTranslatef(100, 0, 0);
    glTranslatef(_move_fly_car_03, 0, 0);
    glColor3f(0.34, 0.45, 0.5);
    glBegin(GL_POLYGON);

    glVertex2f(80.6758517983573, 75.3720079471105);
    glVertex2f(80.0576174367266, 75.2059151335392);
    glVertex2f(79.6423854027954, 74.9567759131824);
    glVertex2f(79.2732902615233, 74.4861796080639);
    glVertex2f(79.0702879338236, 73.997128545882);
    glVertex2f(79.0333784196964, 73.3973489413193);
    glVertex2f(79.0333784196964, 72.7422050655661);
    glVertex2f(79.1256522050145, 72.4930658452093);
    glVertex2f(79.2917450185869, 72.3454277887015);
    glVertex2f(79.5132021033502, 72.3085182745746);
    glVertex2f(83.4902022505573, 72.3085182745746);
    glVertex2f(83.8131604991704, 72.4561563310823);
    glVertex2f(83.9423437986156, 72.7791145796931);
    glVertex2f(83.9423437986156, 74.6338176645717);
    glVertex2f(83.7208867138523, 75.0213675629045);
    glVertex2f(83.4256106008346, 75.2612794047297);
    glVertex2f(83.0934249736897, 75.3720079471105);
    glVertex2f(83.0934249736897, 75.3720079471105);

    glEnd();


    //LOWER PORTION MORE DEEPER COLOR

    glColor3f(0.28, 0.39, 0.44);
    glBegin(GL_POLYGON);


    glVertex2f(79.0333784196964, 73.1845106118903);
    glVertex2f(79.0333784196964, 72.7422050655661);
    glVertex2f(79.1256522050145, 72.4930658452093);
    glVertex2f(79.2917450185869, 72.3454277887015);
    glVertex2f(79.5132021033502, 72.3085182745746);
    glVertex2f(83.4902022505573, 72.3085182745746);
    glVertex2f(83.8131604991704, 72.4561563310823);
    glVertex2f(83.9423437986156, 72.7791145796931);
    glVertex2f(83.9423437986156, 73.1845106118903);


    glEnd();

    //WINDOW OF FLYING CAR 3

    //LEFT WINDOW
    glColor3f(0.31, 0.36, 0.38);
    glBegin(GL_POLYGON);

    glVertex2f(79.6423854027954, 74.9567759131824);
    glVertex2f(79.2732902615233, 74.4861796080639);
    glVertex2f(79.0702879338236, 73.997128545882);
    glVertex2f(79.049749, 73.6633677);
    glVertex2f(81, 73.6741702972713);
    glVertex2f(81.2664040243927, 73.9048547605647);
    glVertex2f(81.2664040243927, 74.7999104781429);
    glVertex2f(81, 74.9567759131824);
    glVertex2f(79.6423854027954, 74.9567759131824);

    glEnd();

    //RIGHT WINDOW

    glBegin(GL_POLYGON);

    glVertex2f(81.8938657645553, 74.9752306702459);
    glVertex2f(81.6262717871331, 74.6799545572304);
    glVertex2f(81.6262717871331, 73.8956273820329);
    glVertex2f(81.8938657645553, 73.6926250543348);
    glVertex2f(82.7012650849742, 73.6926250543348);
    glVertex2f(82.9826964313081, 73.8956273820329);
    glVertex2f(82.9826964313081, 74.6799545572304);
    glVertex2f(82.6874203182904, 74.9752306702459);
    glVertex2f(79.6423854027954, 74.9567759131824);

    glEnd();


    //BOTTOM PART ROUNDED PROTION
    //LEFT ROUNDED PORTION

    glColor3f(0.34, 0.45, 0.5);
    glBegin(GL_POLYGON);

    glVertex2f(79.9263173098468, 72.5869756818769);
    glVertex2f(80.2209909989195, 72.6741326885034);
    glVertex2f(80.3172620598112, 72.7639931730475);
    glVertex2f(80.311746399093, 72.857759405256);
    glVertex2f(80.2334419998662, 72.9024010391918);
    glVertex2f(79.8806636397088, 72.8318453671608);
    glEnd();
    glBegin(GL_POLYGON);

    glVertex2f(79.9263173098468, 72.5869756818769);
    glVertex2f(79.8806636397088, 72.8318453671608);
    glVertex2f(79.4697806084666, 72.6118776837702);
    glVertex2f(79.1253029156069, 72.2715503245619);
    glVertex2f(79.3909242691372, 72.2300469880731);
    glVertex2f(79.6440946217208, 72.4500146714638);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(78.8670771434267, 71.7638131239857);
    glVertex2f(78.9592895696505, 72.0308309729269);
    glVertex2f(79.1253029156069, 72.2715503245619);
    glVertex2f(79.3909242691372, 72.2300469880731);
    glVertex2f(79.2, 72);
    glVertex2f(79.1004009137135, 71.7652096193985);

    glEnd();


    //RIGHT ROUNDED PORTION

    glColor3f(0.34, 0.45, 0.5);
    glBegin(GL_POLYGON);

    glVertex2f(82.8791829675524, 72.6592842043176);
    glVertex2f(82.7097580096433, 72.6915556248715);
    glVertex2f(82.6492490961043, 72.7964377416716);
    glVertex2f(82.705724082074, 72.9093877136102);
    glVertex2f(82.7864026334593, 72.9093877136102);
    glVertex2f(83.1736596801087, 72.7722341762562);
    glEnd();
    glBegin(GL_POLYGON);

    glVertex2f(83.8352238014681, 72.288162867948);
    glVertex2f(83.5367131613426, 72.5705377977944);
    glVertex2f(83.1736596801087, 72.7722341762562);
    glVertex2f(82.8791829675524, 72.6592842043176);
    glVertex2f(83.3188810726023, 72.4495199707174);
    glVertex2f(83.5810863646045, 72.2518575198249);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(84.1013468353497, 71.7638458101877);
    glVertex2f(84, 72);
    glVertex2f(83.8352238014681, 72.288162867948);
    glVertex2f(83.5810863646045, 72.2518575198249);
    glVertex2f(83.7222738295287, 72.0783986343478);
    glVertex2f(83.8765782453608, 71.7573307785937);

    glEnd();


    //MOST LOWER PORTION
    glColor3f(0.34, 0.45, 0.5);
    glBegin(GL_POLYGON);

    glVertex2f(78.153755020429, 71.419693462796);
    glVertex2f(78.2643406059284, 71.6343318721914);
    glVertex2f(78.4472372238642, 71.7623595047456);
    glVertex2f(84.5194049393326, 71.7623595047456);
    glVertex2f(84.7569694190999, 71.6343318721914);
    glVertex2f(84.8174107408269, 71.419693462796);
    glEnd();


    //FAN OF FLYING CAR 03

    //LEFT ROUNDED PART(PRINTING THE WHOLE FAN DIVEDED BY 3 PARTS)
    glPushMatrix();
    glTranslatef(82, 75.9, 0);
    glRotatef(1.5 * _angle1, 0, 1, 0);
    glColor3f(0.51, 0.62, 0.66);
    glTranslatef(-82, -75.9, 0);
    glBegin(GL_POLYGON);

    glVertex2f(78.1444781691491, 75.8199509368937);
    glVertex2f(77.9763411691181, 75.9298866676823);
    glVertex2f(77.9440071306506, 76.1626917446465);
    glVertex2f(78.1509449768426, 76.3437623600631);
    glVertex2f(80.155655361827, 76.3437623600631);
    glVertex2f(80.2655910926165, 76.2467602446614);
    glVertex2f(80.3561264003255, 76.0786232446317);
    glVertex2f(80.3556685932533, 75.8199509368937);
    glEnd();


    //MIDDLE PART
    glBegin(GL_POLYGON);

    glVertex2f(80.3556685932533, 75.8199509368937);
    glVertex2f(80.3561264003255, 76.0786232446317);
    glVertex2f(83.6412647086226, 76.0786232446317);
    glVertex2f(83.6412647086226, 75.8199509368937);

    glEnd();

    //RIDHT ROUNDED PART
    glBegin(GL_POLYGON);

    glVertex2f(83.6412647086226, 75.8199509368937);
    glVertex2f(83.7253332086381, 75.7164820137985);
    glVertex2f(83.8740697855886, 75.5742122445426);
    glVertex2f(85.8529129397991, 75.5742122445426);
    glVertex2f(86.059850785991, 75.7552828599592);
    glVertex2f(86.046917170604, 75.9363534753758);
    glVertex2f(85.8593797474926, 76.0786232446317);
    glVertex2f(83.6412647086226, 76.0786232446317);

    glEnd();
    glPopMatrix();


    //TOP ROUNDED PORTION UNDER THE FAN
    glColor3f(0.28, 0.39, 0.44);
    glBegin(GL_POLYGON);

    glVertex2f(81.7488175878474, 75.5746451529884);
    glVertex2f(81.7493853208499, 76.2962231842986);
    glVertex2f(81.8746969195329, 76.4604245894682);
    glVertex2f(82.0432194143135, 76.4863511271266);
    glVertex2f(82.1512466545575, 76.4301769622002);
    glVertex2f(82.2635949844113, 76.2962231842986);
    glVertex2f(82.2622657613534, 75.5804797913238);

    glEnd();


    //PORTINO UNDER THE ROUNDED PORTION
    glColor3f(0.5, 0.61, 0.66);
    glBegin(GL_POLYGON);

    glVertex2f(81.2524600157276, 75.3758310974267);
    glVertex2f(81.2611021949471, 75.5313903233769);
    glVertex2f(81.4, 75.6);
    glVertex2f(82.6654563181189, 75.6);
    glVertex2f(82.7648413791434, 75.5313903233769);
    glVertex2f(82.7605202895336, 75.371510007817);

    glEnd();


    glPopMatrix();


}

//ID - 32
void flying_car_04() {

    //MAIN BACKGROUND COLOR PORTION OF FLYING CAR 04
    glPushMatrix();
    glTranslatef(-30, 0, 0);
    glTranslatef(_move_fly_car_04, 0, 0);
    glColor3f(0.21, 0.53, 0.6);
    glBegin(GL_POLYGON);

    glVertex2f(11.1033482952083, 68.5007957177801);
    glVertex2f(10.886757541443, 68.8443534651378);
    glVertex2f(10.767259194538, 69.1430993324053);
    glVertex2f(10.7523219011749, 69.5314689598532);
    glVertex2f(10.8643516013983, 69.919838587301);
    glVertex2f(11.1630974686609, 70.2783336280221);
    glVertex2f(11.5888103295099, 70.5247989685178);
    glVertex2f(12.0742723638115, 70.689109195515);
    glVertex2f(12.492516577979, 70.7637956623319);
    glVertex2f(13.9414340342021, 70.6442973154248);
    glVertex2f(14.5, 70.5);
    glVertex2f(15.0766683297996, 70.255927687977);
    glVertex2f(15.5920049508274, 69.9273072339827);
    glVertex2f(15.9430313448608, 69.60615542667);
    glVertex2f(16.2044339787155, 69.247660385949);
    glVertex2f(16.2791204455311, 68.9862577520899);
    glVertex2f(16.2567145054865, 68.7547297049575);
    glVertex2f(16.144684805263, 68.5007957177801);
    glEnd();


    //LOWER PORTION OF FLYING CAR 04
    glColor3f(0.25, 0.29, 0.31);
    glBegin(GL_POLYGON);

    glVertex2f(11.2402759443899, 68.5007957177801);
    glVertex2f(11.2687190559685, 68.3484444922708);
    glVertex2f(11.4006835770534, 68.2367822051972);
    glVertex2f(15.8426752495997, 68.2367822051972);
    glVertex2f(16.0132623193645, 68.3484444922708);
    glVertex2f(16.0152536933369, 68.5007957177801);


    glEnd();

    //WINDOWS
    //LEFT WINDW
    glColor3f(0.25, 0.29, 0.31);
    glBegin(GL_POLYGON);

    glVertex2f(12.6021206468949, 70.2556912191588);
    glVertex2f(12.3690984437528, 70.1539491304613);
    glVertex2f(12.2673563550569, 69.9471829502049);
    glVertex2f(12.2673563550569, 69.6353926783898);
    glVertex2f(12.3690984437528, 69.3990884723825);
    glVertex2f(12.6021206468949, 69.2415523350444);
    glVertex2f(13.9050757827739, 69.2415523350444);
    glVertex2f(14.1019959544433, 69.3990884723825);
    glVertex2f(14.2, 69.6353926783898);
    glVertex2f(14.2, 69.9471829502049);
    glVertex2f(14.1019959544433, 70.1539491304613);
    glVertex2f(13.9050757827739, 70.2491272134364);

    glEnd();

    //RIGHT WINDOW

    glBegin(GL_POLYGON);

    glVertex2f(15.0766683297996, 70.255927687977);
    glVertex2f(14.7354225066464, 70.2589732220201);
    glVertex2f(14.5877323778944, 70.1539491304613);
    glVertex2f(14.4925542949209, 69.980002978817);
    glVertex2f(14.4892722920597, 69.5270865839698);
    glVertex2f(14.5975783864779, 69.3531404323256);
    glVertex2f(14.7354225066464, 69.2251423207383);
    glVertex2f(16.2044339787155, 69.247660385949);
    glVertex2f(15.9430313448608, 69.60615542667);
    glVertex2f(15.5920049508274, 69.9273072339827);
    glVertex2f(15.0766683297996, 70.255927687977);

    glEnd();


    //LOWER BIG FAN LEG PORTION
    //BIG LEG
    glColor3f(0.28, 0.59, 0.65);
    glBegin(GL_POLYGON);

    glVertex2f(11.1618187578865, 69.3090513286517);
    glVertex2f(11.4878780036498, 69.5165435759591);
    glVertex2f(11.5810377881537, 69.6943940736512);
    glVertex2f(11.5132852176054, 69.9865770341454);
    glVertex2f(9.6369854227675, 71.5652879341768);
    glVertex2f(9.3420915870653, 71.5865689326299);

    glEnd();


    //CYLINDER TYPE PORTION ABOVE THE BIG LEG
    glColor3f(0.2, 0.5, 0.58);
    glBegin(GL_POLYGON);

    glVertex2f(9.3961110522651, 71.5831042189261);
    glVertex2f(9.3940220248432, 71.8325634643195);
    glVertex2f(9.5634898308985, 71.8338670628276);
    glVertex2f(9.5515860155096, 71.5716012980176);

    glEnd();

    //LEFT FAN
    glPushMatrix();
    glTranslatef(9.48, 71.75, 0);
    glRotatef(2.5 * _angle1, 0, 1, 0);
    glTranslatef(-9.48, -71.75, 0);

    glColor3f(0.72, 0.79, 0.82);
    glBegin(GL_POLYGON);

    glVertex2f(9.3937313024416, 71.758393242476);
    glVertex2f(8.3945437300725, 71.7670817025013);
    glVertex2f(7.8218742922852, 71.6871072681227);
    glVertex2f(7.8276962882742, 71.5590233563626);
    glVertex2f(8.7184616745902, 71.5415573683954);
    glVertex2f(9.3953110722309, 71.6540695173715);

    glEnd();

    //RIGHT FAN
    glBegin(GL_POLYGON);

    glVertex2f(9.5603813372627, 71.7693984334549);
    glVertex2f(10.2056417586498, 71.8629763244628);
    glVertex2f(11.1161881264454, 71.8629763244628);
    glVertex2f(11.1283287446827, 71.7577576330713);
    glVertex2f(10.5739071785138, 71.6323045779507);
    glVertex2f(9.5570551770974, 71.6559893287053);

    glEnd();

    glPopMatrix();


    // UPPER SMALL FAN PORTION
    //SMALL LEG
    glColor3f(0.28, 0.59, 0.65);
    glBegin(GL_POLYGON);

    glVertex2f(12.0227083389466, 70.674784764466);
    glVertex2f(11.5132184473861, 71.2888135505141);
    glVertex2f(11.7452055673059, 71.2959516157426);
    glVertex2f(12.3774057021822, 70.7464789123552);

    glEnd();

    //CYLINDER TYPE PORTION ABOVE THE SMALL LEG
    glColor3f(0.2, 0.5, 0.58);
    glBegin(GL_POLYGON);

    glVertex2f(11.5492387163386, 71.2918985617108);
    glVertex2f(11.5537821178557, 71.4990687411462);
    glVertex2f(11.7, 71.5);
    glVertex2f(11.6973733080524, 71.292045170985);

    glEnd();

    //LEFT FAN
    glPushMatrix();
    glTranslatef(11.62277077615, 71.4006119201347, 0);
    glRotatef(2.5 * _angle1, 0, 1, 0);
    glTranslatef(-11.62277077615, -71.4006119201347, 0);

    glColor3f(0.72, 0.79, 0.82);
    glBegin(GL_POLYGON);

    glVertex2f(11.5484960235799, 71.4417588446986);
    glVertex2f(10.73177996865, 71.428944143741);
    glVertex2f(10.2822739148435, 71.3494161496046);
    glVertex2f(10.2961048703452, 71.2456839833398);
    glVertex2f(11.0083990786848, 71.2491417222153);
    glVertex2f(11.5493324128185, 71.343064914541);

    glEnd();

    //RIGHT FAN
    glBegin(GL_POLYGON);

    glVertex2f(11.7, 71.45);
    glVertex2f(12.3117429103795, 71.5146432779792);
    glVertex2f(12.9655955024853, 71.5029540302441);
    glVertex2f(12.972394759932, 71.4185709271145);
    glVertex2f(12.5687400219494, 71.346529242293);
    glVertex2f(11.7, 71.35);

    glEnd();

    glPopMatrix();


    glPopMatrix();

}

//ID - 59
void fire_smoke() {
    glPushMatrix();
    glTranslatef(4, 0, 0);
    glTranslatef(0, _move_fire_smoke, 0);
    glTranslatef(103.7719087495417, 64.554930598448, 0);
    glRotatef(rotate_smoke, 0, 0, 1);
    glTranslatef(-103.7719087495417, -64.554930598448, 0);

    circle_tree(0.99338853, 102.7536731004901, 64.1722015815342, 0.34, 0.35, 0.35);
    circle_tree(0.99338853, 103.5197117137725, 65.095215320505, 0.34, 0.35, 0.35);
    circle_tree(0.99338853, 104.8, 65, 0.34, 0.35, 0.35);
    circle_tree(0.99338853, 104.7586661486664, 64.0759821085002, 0.34, 0.35, 0.35);
    circle_tree(0.99338853, 103.7206398746335, 64.2726656619664, 0.34, 0.35, 0.35);
    glPopMatrix();
}



//FLOWER BEATIFICATION

// ID - 54
void flowers_right_grass() {


    //MORE DEEPER COLOER BACKGROUND
    glColor3f(0, 0.26, 0.19);
    glBegin(GL_POLYGON);
    glVertex2f(130.0085395409084, 9.6981464118944);
    glVertex2f(129.0776815826929, 10.5568596715978);
    glVertex2f(121.5578825547662, 7.7768988497758);
    glVertex2f(121.42798933781, 6.1732484714969);
    glVertex2f(123.0526077768708, 5.6189204541679);
    glVertex2f(123.0526077768708, 5.6189204541679);
    glVertex2f(130.0085395409084, 5.6189204541679);

    glEnd();

    //ROUNDED BACKGROUND MORE DEEPER
    glBegin(GL_POLYGON);
    glVertex2f(130.0085395409084, 9.6981464118944);
    glVertex2f(129.0776815826929, 10.5568596715978);
    glVertex2f(128.8358664270561, 11.3513951830261);
    glVertex2f(128.7437463677659, 12.1804757166904);
    glVertex2f(129.1582866345719, 12.9980412429428);
    glVertex2f(130.0085395409084, 13.5441968846533);


    glEnd();



    //2ND MOST LOWER JUNGLE WITH LEAF
    glPushMatrix();
    glTranslatef(0, move_jungle_leaf_top2, 0);
    //LINE IN THE MIDDLE
    glLineWidth(4);
    glColor3f(0.01, 0.35, 0.28);
    glBegin(GL_LINES);
    glVertex2f(120.3778551378188, 8.5690239891753);
    glVertex2f(118.4407282343576, 10.1627805720573);
    glEnd();

    //NOW PRINTING THE LEAFS
    //FIRST LEAF FROM LEFT
    glColor3f(0.01, 0.35, 0.28);
    glBegin(GL_POLYGON);
    glVertex2f(120.4596167411045, 8.2762527296593);
    glVertex2f(119.9765800647298, 8.1878923620242);
    glVertex2f(119.7173896530165, 7.8403415826593);
    glVertex2f(119.7291710353671, 7.4810094209431);
    glVertex2f(119.9824707559051, 7.2571631562674);
    glVertex2f(120.7364792263437, 7.6577301562134);
    glVertex2f(120.8130582116226, 8.0052809355783);
    glEnd();


    //2ND LEAF RIGHT
    glBegin(GL_POLYGON);
    glVertex2f(120.8112614755588, 8.4489441516369);
    glVertex2f(120.7670089793324, 8.998939461915);
    glVertex2f(120.7227564831059, 9.5805436980712);
    glVertex2f(121.4371182079046, 9.82709331992);
    glVertex2f(121.689989614913, 9.112731595076);
    glVertex2f(121.6141281928105, 8.3920480850564);
    glVertex2f(121.3991874968533, 8.0506716855734);
    glEnd();

    //3RD LEAF LEFT

    glBegin(GL_POLYGON);
    glVertex2f(120.1805313680693, 8.7386478067188);
    glVertex2f(120.0668782436177, 8.5755026744716);
    glVertex2f(119.5809768464284, 8.2645257802507);
    glVertex2f(119.1209901904226, 8.199738927288);
    glVertex2f(118.7646624991504, 8.3293126332134);
    glVertex2f(118.5443871990913, 8.6597255833231);
    glVertex2f(118.738747757967, 8.9447877363589);
    glVertex2f(118.9784591139137, 9.0873188128768);
    glVertex2f(119.3218294345941, 9.0808401275805);
    glVertex2f(119.8565814119504, 8.9742477748202);
    glEnd();

    //4TH LEAF RIGHT
    glBegin(GL_POLYGON);
    glVertex2f(120.2776909055924, 8.8222099310806);
    glVertex2f(119.9805078195497, 9.094362909464);
    glVertex2f(119.7019593422871, 9.5486111954903);
    glVertex2f(119.6933886199098, 10.0714252605395);
    glVertex2f(119.9333688464745, 10.3456883766308);
    glVertex2f(120.2614316983405, 10.399353034612);
    glVertex2f(120.526998750121, 10.1988228118262);
    glVertex2f(120.5866158433779, 9.8844781382701);
    glVertex2f(120.5, 9.5);
    glVertex2f(120.4348632423604, 9.1473940761386);
    glEnd();

    //5TH LEAF LEFT

    glBegin(GL_POLYGON);
    glVertex2f(119.1449661337121, 9.5321953144573);
    glVertex2f(118.8631398746797, 9.3208256201695);
    glVertex2f(118.5001921680847, 9.1664645862984);
    glVertex2f(118.227665608513, 9.1333194641862);
    glVertex2f(118.0062754405044, 9.1728757022901);
    glVertex2f(117.8768975070478, 9.2682068111589);
    glVertex2f(117.8451204707602, 9.483836700267);
    glVertex2f(117.9333269061187, 9.7090705281212);
    glVertex2f(118.1384711308836, 9.8763419729402);
    glVertex2f(118.4572336955184, 9.8858101679299);
    glVertex2f(118.7444356101894, 9.8921222979231);
    glEnd();


    //6TH LEAF RIGHT
    glBegin(GL_POLYGON);
    glVertex2f(119.2529828242102, 9.7127085416454);
    glVertex2f(118.9259877014899, 10.0114448266186);
    glVertex2f(118.7443237444231, 10.3142180884159);
    glVertex2f(118.6958800225386, 10.6169913502131);
    glVertex2f(118.7968044431313, 10.8309511218831);
    glVertex2f(119, 11);
    glVertex2f(119.269130731505, 11.0005041484896);
    glVertex2f(119.4386837581007, 10.7663594926997);
    glVertex2f(119.4467577117481, 10.1809978532251);
    glEnd();

    // 7TH LEAF TOP
    glBegin(GL_POLYGON);
    glVertex2f(118.4, 10.2);
    glVertex2f(117.9934460552136, 10.1123692472177);
    glVertex2f(117.5816744191955, 10.1729238995772);
    glVertex2f(117.1860506904723, 10.3707357639513);
    glVertex2f(117.0447565016425, 10.6856199562205);
    glVertex2f(117.1658658063537, 10.9762822875458);
    glVertex2f(117.3838625548339, 11.1539092678002);
    glVertex2f(117.7108576775542, 11.0812436849689);
    glVertex2f(118.0217048929796, 10.8551729828269);
    glVertex2f(118.3688848998184, 10.4595492540785);
    glEnd();



    glPopMatrix();


    //MOST LOWER JUNGLE WITH LEAF
    glPushMatrix();
    glTranslatef(move_jungle_leaf_top1, 0, 0);
    //LINE IN THE MIDDLE
    glLineWidth(4);
    glColor3f(0.01, 0.49, 0.38);
    glBegin(GL_LINES);
    glVertex2f(123.0526077768708, 5.6189204541679);
    glVertex2f(117.4932624429417, 7.4724043405514);
    glEnd();


    //DEEP COLOR BACKGROUND TRIANGLE AT THE LOW
    glColor3f(0, 0.26, 0.19);
    glBegin(GL_POLYGON);
    glVertex2f(123.0526077768708, 5.6189204541679);
    glVertex2f(118.585375753319, 7.1350879591845);
    glVertex2f(117.6791012334616, 5.6850487273207);

    glEnd();


    // NOW PRINTING THE LEAFS
    //FIRST LEAF FROM RIGHT
    glColor3f(0.01, 0.49, 0.38);

    glBegin(GL_POLYGON);
    glVertex2f(120.2476778649087, 6.5400101636368);
    glVertex2f(119.0929286297444, 5.6607775276074);
    glVertex2f(120.6780460082625, 5.627376712417);
    glVertex2f(121.0232242574198, 6.2932454023676);

    glEnd();

    //2ND LEAF RIGHT

    glBegin(GL_POLYGON);
    glVertex2f(121.1521225902613, 6.2918645652024);
    glVertex2f(121.0476297409651, 6.6214189360805);
    glVertex2f(120.7341511930765, 7.2323002089278);
    glVertex2f(120.2759902384701, 7.8914089506841);
    glVertex2f(120.2116869465955, 8.3415319938348);
    glVertex2f(120.3778551378188, 8.5690239891753);
    glVertex2f(120.7341511930765, 8.5987451613494);
    glVertex2f(121.2646533510418, 8.4621006661073);
    glVertex2f(121.5700939874461, 7.9155226851386);
    glVertex2f(121.9076862697877, 6.9911628643828);
    glVertex2f(121.8048042190413, 6.026666015237);

    glEnd();

    //3RD LEAF LEFT

    glBegin(GL_POLYGON);
    glVertex2f(118.5765071019106, 7.1011891689992);
    glVertex2f(118.5606591755047, 6.8137724475783);
    glVertex2f(118.1239996341189, 6.2288134392696);
    glVertex2f(117.6791012334616, 5.6850487273207);
    glVertex2f(116.4559330032225, 5.694263186359);
    glVertex2f(116.5668552318184, 6.1134694094623);
    glVertex2f(116.8552153063185, 6.5336512323319);
    glVertex2f(117.6214292185616, 7.0115050701052);
    glVertex2f(118.2887768195475, 7.2092376926321);

    glEnd();

    //4TH LEAF RIGHT
    glBegin(GL_POLYGON);
    glVertex2f(118.9273344341202, 7.017295676509);
    glVertex2f(118.8196730033842, 7.2257940625867);
    glVertex2f(118.6366647456638, 7.4088023203187);
    glVertex2f(117.9820582853565, 7.8663229646485);
    glVertex2f(117.6230805490589, 8.3801538421267);
    glVertex2f(117.5743391041287, 8.6787997573119);
    glVertex2f(117.8835153773532, 8.908062277892);
    glVertex2f(118.4184625922281, 8.8799071613178);
    glVertex2f(119.115301727394, 8.3379211672655);
    glVertex2f(119.6150550465533, 7.4862288908976);
    glVertex2f(119.7662693589691, 6.7198551122255);

    glEnd();


    //TOP MOST LEAF
    glBegin(GL_POLYGON);
    glVertex2f(117.4932624429417, 7.4724043405514);
    glVertex2f(117.4397306681328, 7.3339661143176);
    glVertex2f(116.8675074920889, 7.0721012710267);
    glVertex2f(116.1982973370544, 6.887826010933);
    glVertex2f(115.7909520252944, 6.916922104632);
    glVertex2f(115.6357728589096, 7.1011973647257);
    glVertex2f(115.7812533273953, 7.4697478849129);
    glVertex2f(116.2952843160449, 7.6152283534079);
    glVertex2f(116.8772061899879, 7.6249270513076);
    glVertex2f(117.4932624429417, 7.4724043405514);

    glEnd();

    glPopMatrix();






    //BELOW 4 LEAFS

    //FIRST

    glBegin(GL_POLYGON);
    glColor3f(0, 0.35, 0.28);
    glVertex2f(122.0761491516592, 5.6438214869159);
    glVertex2f(121.9250479451212, 5.9421801204588);
    glVertex2f(121.9440863684002, 6.2734486855333);
    glVertex2f(122.2220473482726, 6.5323712421432);
    glVertex2f(122.7284694074923, 6.5818711426716);
    glVertex2f(122.9188536402817, 6.4676406029907);
    glVertex2f(123.3224682137951, 5.8089111574978);
    glVertex2f(123.341506637074, 5.6071038707283);

    glEnd();

    //2ND
    glBegin(GL_POLYGON);
    glColor3f(0.03, 0.48, 0.39);
    glVertex2f(123.341506637074, 5.6071038707283);
    glVertex2f(123.3224682137951, 5.8089111574978);
    glVertex2f(122.9188536402817, 6.4676406029907);
    glVertex2f(122.8350845778544, 6.9321781310262);
    glVertex2f(122.9835842794301, 7.1225623638277);
    glVertex2f(123.360545060353, 7.1796776336681);
    glVertex2f(123.9164670200979, 7.0007164548348);
    glVertex2f(124.4419275025965, 6.2087180463808);
    glVertex2f(124.6970423745345, 5.5956808167602);

    glEnd();


    //3RD
    glBegin(GL_POLYGON);
    glColor3f(0, 0.35, 0.28);
    glVertex2f(124.6970423745345, 5.5956808167602);
    glVertex2f(124.4419275025965, 6.2087180463808);
    glVertex2f(124.0310436663657, 6.8340921562743);
    glVertex2f(124.0418283859776, 6.9006240523187);
    glVertex2f(124.1865815103346, 7.0170816201721);
    glVertex2f(124.6122065385704, 6.9263746469358);
    glVertex2f(125.2262229727468, 6.6402988082673);
    glVertex2f(125.9518787585915, 6.0821020498898);
    glVertex2f(126.2437795096216, 5.5731938679103);

    glEnd();


    //4TH
    glBegin(GL_POLYGON);

    glColor3f(0.03, 0.48, 0.39);
    glVertex2f(126.2437795096216, 5.5731938679103);
    glVertex2f(126.217022218804, 6.4519074023149);
    glVertex2f(126.2379545972418, 6.870554971098);
    glVertex2f(126.5938050306849, 7.1566308097665);
    glVertex2f(127.0124525994415, 7.093833674449);
    glVertex2f(127.3403931949675, 6.7170508625442);
    glVertex2f(127.3822579518431, 6.0821020498898);
    glVertex2f(127.2723265609197, 5.5629409828031);

    glEnd();



    //BIG LEAF ABOVE THE FOUR LOWER LEAF

    glBegin(GL_POLYGON);

    glColor3f(0.03, 0.48, 0.39);
    glVertex2f(123.6197088728017, 7.3329854905317);
    glVertex2f(122.5906318883472, 7.0887977314931);
    glVertex2f(122.0150464563642, 7.158565662647);
    glVertex2f(121.8813245883277, 7.4376373872625);
    glVertex2f(121.9515637511325, 7.8500760383914);
    glVertex2f(122.2592342153873, 8.2225266127437);
    glVertex2f(123, 8.5);

    glEnd();

    //SMALL LEAF MORE DEEPER ABOFE THE LAST LEAF


    glBegin(GL_POLYGON);

    glColor3f(0, 0.35, 0.28);
    glVertex2f(121.9515637511325, 7.8500760383914);
    glVertex2f(121.8348126342281, 7.9608968709166);
    glVertex2f(121.7359747317664, 8.2574105783206);
    glVertex2f(121.8638826055404, 8.6120642283529);
    glVertex2f(122.0790003932512, 8.8271820160773);
    glVertex2f(122.3697001063739, 8.8853219587056);
    glVertex2f(122.6102806969268, 8.8257599885976);
    glVertex2f(122.7511094207388, 8.582510374725);
    glVertex2f(122.7681795690797, 8.4160764283911);

    glEnd();


    //3RD LOWER JUNGLE AREA LEAF
    glPushMatrix();
    glTranslatef(move_jungle_leaf_top3, 0, 0);

    glLineWidth(3);
    glColor3f(0.02, 0.48, 0.4);

    glBegin(GL_LINES);
    glVertex2f(123.6356059211088, 9.0284354029909);
    glVertex2f(122.1430680188299, 10.6676157808337);

    glEnd();

    //FIRST LEAF FROM RIGHT

    glColor3f(0.02, 0.48, 0.4);
    glBegin(GL_POLYGON);

    glVertex2f(123.7078987281101, 9.1553390673037);
    glVertex2f(123.2402010446889, 9.6802570537506);
    glVertex2f(123.0161865288739, 10.3854879369166);
    glVertex2f(122.8170625148161, 11.0907188200827);
    glVertex2f(122.9664055253594, 11.6549035266156);
    glVertex2f(123.4476218926658, 11.6549035266156);
    glVertex2f(123.9620255956484, 11.1322029896807);
    glVertex2f(124, 10);

    glEnd();

    //SECOND LEAF LEFT

    glBegin(GL_POLYGON);

    glVertex2f(122.8817385016714, 9.8017651836583);
    glVertex2f(122.3123485201838, 9.3964224498965);
    glVertex2f(121.3305945448503, 9.1174541071611);
    glVertex2f(120.654632791342, 9.1174541071611);
    glVertex2f(120.220085949801, 9.2247496235978);
    glVertex2f(120.2415450530869, 9.5734600520171);
    glVertex2f(120.4078531035533, 9.9275352562582);
    glVertex2f(120.4078531035533, 9.9275352562582);
    glVertex2f(121.7753076365731, 10.2716638308271);
    glVertex2f(122.6008305147532, 10.1312096690859);

    glEnd();

    //TOP LEAF
    glBegin(GL_POLYGON);

    glVertex2f(122.1414899391982, 10.6796966136569);
    glVertex2f(121.5831792974367, 10.7160832521781);
    glVertex2f(121.1637985474613, 10.8426451789568);
    glVertex2f(120.6329016089375, 11.1002090402371);
    glVertex2f(120.4804658543118, 11.305208848195);
    glVertex2f(120.596106771614, 11.5259778721496);
    glVertex2f(121.0323884141633, 11.5837983308044);
    glVertex2f(121.5632853526871, 11.347260090853);
    glVertex2f(121.9259773205896, 11.0581577975791);
    glVertex2f(122.1414899391982, 10.6796966136569);

    glEnd();


    glPopMatrix();  //THIRD LOWER JUNGLE LEAF ENDS HERE


    // LEAF BESIDE FIRST BIG FLOWER 1

    glBegin(GL_POLYGON);

    glVertex2f(126.0185882648872, 8.1285904359454);
    glVertex2f(126.0798813550295, 8.3832011871345);
    glVertex2f(128.0265535035057, 8.0754552224663);
    glVertex2f(128.5203784235235, 7.2810412206482);
    glVertex2f(127.4325322229045, 7.1092760310659);

    glEnd();

    // LEAF BESIDE FIRST BIG FLOWER 2

    glBegin(GL_POLYGON);

    glVertex2f(128.7888525725436, 8.6646719414956);
    glVertex2f(128.5301736211394, 8.4433923565455);
    glVertex2f(127.885034549565, 8.2096463161052);
    glVertex2f(126.5544304738784, 9.0828842721886);
    glVertex2f(126.9436481720826, 9.2965724202357);
    glVertex2f(127.6533980923373, 9.2278869440777);
    glVertex2f(128.4013066104552, 9.0065670764574);

    glEnd();

    // LEAF BESIDE FIRST BIG FLOWER LOWER BIG

    glBegin(GL_POLYGON);

    glVertex2f(129.7194375193222, 6.4562600731949);
    glVertex2f(129.0951017608441, 6.0597224968392);
    glVertex2f(128.154970771909, 5.9191208163807);
    glVertex2f(127.5044318750568, 6.13479091122);
    glVertex2f(127.3972662573957, 6.4415062997177);
    glVertex2f(127.5339948040668, 6.822129010745);
    glVertex2f(128.0624321601198, 7.1177583008632);
    glVertex2f(128.8754127078936, 7.1473212298751);
    glVertex2f(129.6625256927837, 6.8479965736303);

    glEnd();


    //UPPER LEAF
    glBegin(GL_POLYGON);

    glVertex2f(129.2488350778611, 8.2758343410982);
    glVertex2f(128.9226294001332, 8.8252333773063);
    glVertex2f(128.8367858007311, 9.4604760129218);
    glVertex2f(128.8196170808507, 10.187285154572);
    glVertex2f(129.1858831049662, 10.5077679256934);
    glVertex2f(129.8325715537952, 10.187285154572);
    glVertex2f(130.072933632121, 9.1628848683091);
    glVertex2f(129.8268486471684, 8.3445092206242);


    glEnd();

    //SMALL LEAF BESIDE UPPER LEAF

    glBegin(GL_POLYGON);

    glVertex2f(128.7888525725436, 8.6646719414956);
    glVertex2f(128.5301736211394, 8.4433923565455);
    glVertex2f(127.885034549565, 8.2096463161052);
    glVertex2f(126.5494556467811, 9.0204180342555);
    glVertex2f(126.9436481720826, 9.2965724202357);
    glVertex2f(127.6533980923373, 9.2278869440777);
    glVertex2f(128.4013066104552, 9.0065670764574);

    glEnd();



    //4TH LOWER JUNGLE AREA

    glPushMatrix();
    glTranslatef(0, move_jungle_leaf_top4, 0);

    //LINE IN THE MIDDLE
    glLineWidth(2);
    glColor3f(0.01, 0.34, 0.3);

    glBegin(GL_LINES);
    glVertex2f(126.9534814731392, 10.4088182262685);
    glVertex2f(125.9577111019027, 12.6432525231311);
    glEnd();


    //FIRST LEAF FROM LEFT
    glColor3f(0.01, 0.34, 0.3);

    glBegin(GL_POLYGON);

    glVertex2f(127.0781274496437, 10.4122380422395);
    glVertex2f(126.4712204689538, 10.1026541783326);
    glVertex2f(125.9348127840005, 10.1179801121894);
    glVertex2f(125.6, 10.4);
    glVertex2f(125.3800139784204, 10.8474945637719);
    glVertex2f(125.6, 11.2);
    glVertex2f(125.9385391475409, 11.2209463357927);
    glVertex2f(126.3655191240278, 11.0386987848416);
    glVertex2f(127.0781274496437, 10.4122380422395);

    glEnd();


    //SECDOND LEAF RIGHT
    glBegin(GL_POLYGON);

    glVertex2f(127.1429939744784, 10.5102322410708);
    glVertex2f(126.9925700078652, 11.0457415622477);
    glVertex2f(127.0253441787582, 11.6048435574774);
    glVertex2f(127.2062990807218, 11.9832038070616);
    glVertex2f(127.4530557652176, 12.1148073721344);
    glVertex2f(127.8094820872672, 12.0819064808662);
    glVertex2f(128.0626065144361, 11.7782736460576);
    glVertex2f(128.111754754305, 11.4123923047882);
    glVertex2f(128, 11);

    glEnd();

    //THIRD LEAF LEFT
    glBegin(GL_POLYGON);

    glVertex2f(126.2987307946965, 11.6308289264416);
    glVertex2f(125.9328494534502, 11.5434542777803);
    glVertex2f(125.479593463548, 11.6144461798176);
    glVertex2f(125.0918684601378, 11.783734561599);
    glVertex2f(124.9225800783671, 11.898413787967);
    glVertex2f(124.955345571613, 12.2042250582818);
    glVertex2f(125.2229304331215, 12.5045754130552);
    glVertex2f(125.5669681122039, 12.4554271731831);
    glVertex2f(125.9546931156141, 12.2588342136951);
    glVertex2f(126.1785906527947, 11.9694056900044);

    glEnd();


    //FOURTH LEAF RIGHT
    glBegin(GL_POLYGON);

    glVertex2f(126.544471994041, 11.7891954771403);
    glVertex2f(126.3770120919995, 12.098714323796);
    glVertex2f(126.3260353724014, 12.5154972441378);
    glVertex2f(126.4134100210573, 12.8923004164899);
    glVertex2f(126.6100029805329, 13.1762680246393);
    glVertex2f(126.8830487575823, 13.203572602346);
    glVertex2f(127.1729482116026, 13.0580545474956);
    glVertex2f(127.2489300988287, 12.7557775279566);
    glVertex2f(127.1287899569269, 12.4008180177698);
    glEnd();

    //TOP LEAF
    glBegin(GL_POLYGON);

    glVertex2f(125.9577111019027, 12.6432525231311);
    glVertex2f(125.2993832506954, 12.9032222475726);
    glVertex2f(124.8570490918752, 13.2909472510074);
    glVertex2f(124.7150652878095, 13.6295240145701);
    glVertex2f(124.8079008520063, 13.9407962004262);
    glVertex2f(125.0754857135148, 14.1428500754556);
    glVertex2f(125.4577498013841, 14.1264673288316);
    glVertex2f(125.7253346628926, 13.8807261294715);
    glVertex2f(125.9164667068272, 13.4220092239994);
    glVertex2f(126, 13);
    glEnd();


    glPopMatrix();



    //5TH LOWER JUNGLE AREA

    glPushMatrix();
    glTranslatef(0, move_jungle_leaf_top5, 0);
    //LINE IN THE MIDDLE
    glLineWidth(3);
    glColor3f(0.04, 0.48, 0.39);
    glBegin(GL_LINES);
    glVertex2f(129.4610967060108, 13.1308955274742);
    glVertex2f(126.6359980565857, 17.5235168371634);

    glEnd();


    //LEAFS
    //FIRST LEAF FROM LEFT
    glColor3f(0.04, 0.48, 0.39);
    glBegin(GL_POLYGON);

    glVertex2f(129.0692131365968, 11.9954492682552);
    glVertex2f(127.6253883369573, 12.0230969771866);
    glVertex2f(127.2936158298061, 12.1121840392987);
    glVertex2f(127.1738090911126, 12.3180058724542);
    glVertex2f(127.3335514093706, 12.6282746060171);
    glVertex2f(127.4747467829923, 12.7633260739121);
    glVertex2f(128.0585894765673, 12.8974520981218);
    glVertex2f(129, 12.8);

    glEnd();

    //SECOND LEAF RIGHT

    glBegin(GL_POLYGON);

    glVertex2f(129.1175584478511, 13.8243153237556);
    glVertex2f(128.8516231312327, 14.20177190221);
    glVertex2f(128.8602016898333, 14.3390288398298);
    glVertex2f(128.9288301586381, 15.076784879536);
    glVertex2f(129.014615744644, 15.6772839816225);
    glVertex2f(129.1776083580552, 16.2091546148991);
    glVertex2f(129.4692793504753, 16.4150400213287);
    glVertex2f(129.8553144875019, 16.3464115525189);
    glVertex2f(130.0783570111173, 15.6772839816225);
    glVertex2f(129.9239429563067, 14.7765353284928);
    glVertex2f(129.3234438542653, 13.910100909768);

    glEnd();

    //THIRD LEAF LEFT
    glBegin(GL_POLYGON);
    glVertex2f(128.5, 14.5);
    glVertex2f(127.8307746577624, 14.1074077575964);
    glVertex2f(127.0844400595109, 14.0044650543816);
    glVertex2f(126.3037912268571, 13.9873079371791);
    glVertex2f(125.9091775312299, 14.1674576678051);
    glVertex2f(125.8920204140287, 14.493442894652);
    glVertex2f(126.1064843790435, 14.8537423559039);
    glVertex2f(126.6040407778778, 15.076784879536);
    glVertex2f(127.3589539347299, 15.0853634381372);
    glVertex2f(128.0366600641766, 14.8708994731064);

    glEnd();


    //FOURTH LEAF RIGHT

    glBegin(GL_POLYGON);
    glVertex2f(127.8994031265671, 15.7459124504324);
    glVertex2f(128.1567598845849, 15.9689549740645);
    glVertex2f(128.4226952012032, 16.8096537169856);
    glVertex2f(128.4226952012032, 17.590302549698);
    glVertex2f(128.2425454705908, 18.1135946243734);
    glVertex2f(127.9422959195701, 18.3452157066067);
    glVertex2f(127.5047894309399, 18.3623728238092);
    glVertex2f(127.3246397003275, 18.1135946243734);
    glVertex2f(127.3074825831263, 17.7704522803239);
    glVertex2f(127.3932681691322, 17.0241176820165);
    glVertex2f(127.4485286483965, 16.4656857655951);

    glEnd();


    //FIFTH LEAF LEFT

    glBegin(GL_POLYGON);
    glVertex2f(127.1530685283157, 16.5608755175497);
    glVertex2f(126.3724196956619, 16.2263117321016);
    glVertex2f(125.3086784291885, 16.0890547944818);
    glVertex2f(124.7167578857477, 16.1748403804941);
    glVertex2f(124.5108724793335, 16.3807257869238);
    glVertex2f(124.5194510379341, 16.6466611035621);
    glVertex2f(124.8197005889548, 17.0155391234152);
    glVertex2f(125.3344141049903, 17.1613746196362);
    glVertex2f(126.2608984338542, 17.152796061035);
    glVertex2f(126.9042903288985, 16.8868607443967);

    glEnd();

    //TOP LEAF
    glBegin(GL_POLYGON);
    glVertex2f(126.6359980565857, 17.5235168371634);
    glVertex2f(126.3466840198601, 17.4702027292807);
    glVertex2f(125.9692274414341, 17.6331953427042);
    glVertex2f(125.5059852770021, 17.8133450733301);
    glVertex2f(125.1456858157773, 18.1135946243734);
    glVertex2f(124.9998503195672, 18.3280585894042);
    glVertex2f(125.1628429329785, 18.6025724646438);
    glVertex2f(125.6760955507732, 18.5607792671264);
    glVertex2f(126.1665342892477, 18.2336944447907);
    glVertex2f(126.5354123090731, 17.8562378663363);

    glEnd();

    glPopMatrix();



    //5TH JUNGLE PORTION(TOP MOST JUNGLE PORTION)
    //LINE IN THE MIDDLE
    glPushMatrix();
    glTranslatef(move_jungle_leaf_top6, 0, 0);

    glLineWidth(3);
    glColor3f(0, 0.36, 0.27);
    glBegin(GL_LINES);

    glVertex2f(129.6290073771841, 18.70640783517);
    glVertex2f(127.9268079257261, 23.0023304184023);
    glEnd();


    // ONE SINGLE LEAF UNDER THE TOP FLOWER(HALF LEAF)
    glBegin(GL_POLYGON);
    glVertex2f(130.1598631926503, 15.8827491598816);
    glVertex2f(129.8050449902536, 15.9965587719796);
    glVertex2f(129.456921470921, 16.1237577502068);
    glVertex2f(129.1623554161011, 16.3245982421446);
    glVertex2f(129.0954085854602, 16.6057749308574);
    glVertex2f(129.2761650281906, 16.9137303518286);
    glVertex2f(129.5104789354337, 17.1413495760247);
    glVertex2f(129.8050449902536, 17.1212655268309);
    glVertex2f(130.1799472418426, 17.0275399639266);


    glEnd();


    //LEAFS
    //FIRST LEAF FROM LEFT
    glBegin(GL_POLYGON);
    glVertex2f(129.7145119367097, 18.1059386681311);
    glVertex2f(129.3192434777344, 17.6118530943748);
    glVertex2f(128.8763964079564, 17.5166958727625);
    glVertex2f(128.6, 17.6);
    glVertex2f(128.2908135057707, 17.7106702091261);
    glVertex2f(128.1663771390562, 17.8826851866561);
    glVertex2f(128.104158955699, 18.1022787749922);
    glVertex2f(128.1995173689124, 18.3126710621679);
    glVertex2f(128.5287014781399, 18.687575186594);
    glVertex2f(128.8853175964697, 18.7790152169418);
    glVertex2f(129.6290073771841, 18.70640783517);


    glEnd();




    //SECOND LEAF RIGHT
    glBegin(GL_POLYGON);
    glVertex2f(129.5649850763913, 19.3338852949069);
    glVertex2f(129.4640246857281, 19.8542196160562);
    glVertex2f(129.5183879730082, 20.327956833819);
    glVertex2f(129.7436073060261, 20.7550969481953);
    glVertex2f(130.1163841330902, 20.9104206261503);
    glVertex2f(130.2251107076505, 20.8638235227638);
    glVertex2f(130.229596092888, 19.5033326542673);

    glEnd();

    //THIRD LEAF LEFT
    glBegin(GL_POLYGON);
    glVertex2f(129.5, 19);
    glVertex2f(129.1796221155745, 18.9621089545806);
    glVertex2f(128.8061777628187, 18.9188110586056);
    glVertex2f(128.470619069038, 18.9188110586056);
    glVertex2f(128.1621215602398, 18.9999946135586);
    glVertex2f(127.8860974734202, 19.1840106714521);
    glVertex2f(127.7724404964945, 19.351790018355);
    glVertex2f(127.7670282594981, 19.5899284462172);
    glVertex2f(127.9077464214061, 19.882189244048);
    glVertex2f(128.2378928781902, 20.0824420129321);
    glVertex2f(128.551802623985, 20.0716175389384);
    glVertex2f(128.8981857917585, 19.8551280590637);
    glVertex2f(129.1633854045851, 19.638638579189);

    glEnd();




    //FOURTH LEAF RIGHT
    glBegin(GL_POLYGON);
    glVertex2f(128.8494756587903, 20.537069920669);
    glVertex2f(128.5842760459638, 20.4017639957473);
    glVertex2f(128.1025869532787, 20.3963517587505);
    glVertex2f(127.7616160225016, 20.4504741287191);
    glVertex2f(127.3935839067423, 20.6074290016283);
    glVertex2f(127.0959108719369, 20.8618041404811);
    glVertex2f(127.1067353459298, 21.1973628342869);
    glVertex2f(127.3124003517953, 21.4625624471334);
    glVertex2f(127.637134571583, 21.6086928460488);
    glVertex2f(128.0159911613353, 21.5708071870707);
    glVertex2f(128.3353131441265, 21.3489054701991);
    glVertex2f(128.6005127569531, 20.9754611174153);

    glEnd();

    //FIFTH LEAF LEFT

    glBegin(GL_POLYGON);
    glVertex2f(129.0389039536665, 20.6290779496158);
    glVertex2f(128.9035980287549, 20.9646366434215);
    glVertex2f(128.8494756587903, 21.4517379731396);
    glVertex2f(128.9198347397444, 21.7927089039423);
    glVertex2f(129.0280794796736, 22.1390920717418);
    glVertex2f(129.2499811965285, 22.3501693146196);
    glVertex2f(129.5584787053268, 22.3718182626071);
    glVertex2f(129.9102741100968, 22.3231081296353);
    glVertex2f(130.1213513529588, 22.09038193877);
    glVertex2f(130.1267635899552, 21.8305945629204);
    glVertex2f(129.8669762141251, 21.3759666551835);
    glVertex2f(129.5855398903091, 20.9808733544122);
    glVertex2f(129.2770423815108, 20.7752083485312);

    glEnd();

    //SIXTH LEAF RIGHT
    glBegin(GL_POLYGON);
    glVertex2f(128.2658335979135, 22.0176901456793);
    glVertex2f(127.9954028081865, 21.9166858748098);
    glVertex2f(127.6663243773139, 21.9297186839542);
    glVertex2f(127.0863643704295, 22.0730795845432);
    glVertex2f(126.851773805847, 22.3402521720043);
    glVertex2f(126.8973886378491, 22.5878755457489);
    glVertex2f(127.0407495384273, 22.7475274577684);
    glVertex2f(127.3209549350119, 22.8941465606434);
    glVertex2f(127.663066175028, 22.7866258852017);
    glVertex2f(127.9888864036148, 22.5390025114572);

    glEnd();


    //SEVENTH LEAF LEFT
    glBegin(GL_POLYGON);
    glVertex2f(128.4515511282079, 22.0958870005459);
    glVertex2f(128.3440304527743, 22.4119326222988);
    glVertex2f(128.3212230367732, 22.6856216143323);
    glVertex2f(128.3440304527743, 23.0831222932379);
    glVertex2f(128.4450347236362, 23.3665858921297);
    glVertex2f(128.6991745019339, 23.4969139835742);
    glVertex2f(128.9989291122337, 23.4773647698575);
    glVertex2f(129.2237450699585, 23.3568112852713);
    glVertex2f(129.2921673179618, 23.0798640909518);
    glVertex2f(129.0380275396641, 22.6009083548933);
    glVertex2f(128.7806295590806, 22.3207029582877);

    glEnd();


    //TOP LEAF
    glBegin(GL_POLYGON);
    glVertex2f(127.9268079257261, 23.0023304184023);
    glVertex2f(127.6032898017189, 23.1071118427262);
    glVertex2f(127.2363311236736, 23.3050221410127);
    glVertex2f(126.9848201196201, 23.5441637514422);
    glVertex2f(126.7745404277065, 23.7833053618717);
    glVertex2f(126.7209397219246, 24.0719245468728);
    glVertex2f(126.8281411334884, 24.3564206006597);
    glVertex2f(127.1167603184678, 24.5584540301605);
    glVertex2f(127.5002115213691, 24.525468980446);
    glVertex2f(127.7104912132827, 24.3770362567312);
    glVertex2f(127.8671701994145, 24.1090327278016);
    glVertex2f(127.9578790861223, 23.8410291988719);
    glVertex2f(127.9620022173363, 23.568902538728);
    glVertex2f(127.9578790861223, 23.1565894172978);

    glEnd();

    glPopMatrix();


    //ALL FLOWERS START HERE

    // NOW PRINTING THE SMALL FLOWER BETWEEN THE LOWER TWO JUNGLE AREA
    glPushMatrix();
    glTranslatef(58, 3.1, 0);

    glScalef(0.5, 0.5, 1);

    flower();

    glPopMatrix();



    //ADDED ONE MORE SMALL FLOWER

    //CHECKING FORANOTHER SMALL FLOWER

    glPushMatrix();
    glTranslatef(91, 6.9, 0);

    glScalef(0.3, 0.3, 1);

    flower();


    glPopMatrix();


    //INITIAL BIG FLOWER
    flower();




    //NOW PRINTING THE THIRD BIG FLOWER (HALF FLOWER ACTUALLY)
    //USING THE CODE OF THE FIRST BIG FLOWER
    //JUST TRANSLATING IT IN X AXIS AND Y AXIS

    glPushMatrix();
    glTranslatef(5, -2, 0);

    flower();

    glPopMatrix();



    //NOW PRINTING THE FOURTH FLOWER
    //USING THE CODE OF THE FIRST BIG FLOWER
    //JUST SCALING AND TRANSLATING THE CODES

    glPushMatrix();
    glTranslatef(29, 5, 0);
    glScalef(0.8, 0.8, 0);

    flower();


    glPopMatrix();



    //NOW PRINTING THE TOP SMALL FLOWER
    //USING THE CODE OF THE FIRST BIG FLOWER
    //JUST TRANSLATING IT AND SCALING IT

    glPushMatrix();
    glTranslatef(54.5, 13.3, 0);

    glScalef(0.6, 0.6, 1);

    flower();

    glPopMatrix();

}


//CARS START HERE

// ID - 49
void cybertruck_01() {



    //TRANSLATING AND SCALING  THE WHOLE CYBERTRUCK TO MATCH WITH THE DESIGN

    glPushMatrix();
    glTranslatef(0 + 50, 4.5, 0);
    glTranslatef(move_cybertruck_01, 0, 0); //FOR MOVEMENT OF THE CYBERTRUCK

    glTranslatef(97.1975634782184, 18.8855629184604, 0);
    glScalef(2, 2, 0);
    glTranslatef(-97.1975634782184, -18.8855629184604, 0);
    //TRIANGLE SHAPE AT THE TOP
   // glColor3f(0.38, 0.38, 0.38);
    //glColor3f(0.46, 0.46, 0.46);
    glColor3f(0.7, 0.71, 0.7);

    glBegin(GL_POLYGON);
    glVertex2f(97.2230017779255, 21.7716940406432);
    glVertex2f(90.332507, 19.4365822);
    glVertex2f(108.1678836905354, 20.2900967951374);
    glEnd();
    /* glBegin(GL_POLYGON);
    glVertex2f(97.2230017779255, 21.7716940406432);
    glVertex2f(89.3237813913763, 19.0947360207571);
    glVertex2f(89.386, 18.1034012);
    glVertex2f(89.9781692501741, 18.0949507363866);
    glVertex2f(90.7367759386753, 19.1809561009779);
    glVertex2f(93.012596004179, 19.2687947701727);
    glVertex2f(94.0187480331385, 17.6158307225964);
    glVertex2f(94.0187480331385, 17.1686520430588);
    glVertex2f(102.1769444443916, 17.2427526049686);
    glVertex2f(102.21562738043, 17.7359600394586);
    glVertex2f(103.2407251854486, 19.2929482150057);
    glVertex2f(105.5520306137452, 19.3509726190633);
    glVertex2f(106.4320674086196, 18.1808138039006);
    glVertex2f(107.95, 18.19815);
    glVertex2f(108.1721989248366, 20.301561357591);

    glEnd(); */


    //LEFT WHEEL ABOVE AREA (DIVIDED BY 3 PARTS )
    // glColor3f(0.38, 0.38, 0.38);

    //FIRST PART
    glColor3f(0.8, 0.8, 0.8);

    glBegin(GL_POLYGON);

    glVertex2f(90.7367759386753, 19.1809561009779);
    glVertex2f(89.9781692501741, 18.0949507363866);
    glVertex2f(89.9781692501741, 18.0949507363866);
    glVertex2f(89.386, 18.1034012);
    glVertex2f(89.3237813913763, 19.0947360207571);
    glVertex2f(90.332507, 19.43658);


    glEnd();

    //2ND PART

    glBegin(GL_POLYGON);

    glVertex2f(90.332507, 19.43658);
    glVertex2f(90.7367759386753, 19.1809561009779);
    glVertex2f(93.012596004179, 19.2687947701727);
    glVertex2f(93.9783445446893, 19.6104104427817);

    glEnd();

    //3RD PART

    glBegin(GL_POLYGON);

    glVertex2f(94.0187480331385, 17.6158307225964);
    glVertex2f(93.012596004179, 19.2687947701727);
    glVertex2f(93.9783445446893, 19.6104104427817);

    glEnd();



    //MIDDLE BIG PART

    glBegin(GL_POLYGON);

    glVertex2f(93.9783445446893, 19.6104104427817);
    glVertex2f(94.0187480331385, 17.1686520430588);
    glVertex2f(102.1769444443916, 17.2427526049686);
    glVertex2f(102.1444774702272, 20.0071074236781);

    glEnd();


    //RIGHT WHEEL PART
    //FIRST PART FROM LEFT
    glBegin(GL_POLYGON);

    glVertex2f(102.21562738043, 17.7359600394586);
    glVertex2f(103.2407251854486, 19.2929482150057);
    glVertex2f(103.1598568164702, 20.0511176739797);
    glVertex2f(102.1444774702272, 20.0071074236781);

    glEnd();

    //SECOND PART

    glBegin(GL_POLYGON);

    glVertex2f(103.2407251854486, 19.2929482150057);
    glVertex2f(103.1598568164702, 20.0511176739797);
    glVertex2f(105.4900563577458, 20.1514749062526);
    glVertex2f(105.5520306137452, 19.3509726190633);

    glEnd();


    //3RD PART

    glBegin(GL_POLYGON);

    glVertex2f(106.4320674086196, 18.1808138039006);
    glVertex2f(105.5520306137452, 19.3509726190633);
    glVertex2f(105.4900563577458, 20.1514749062526);
    glVertex2f(108.1678836905354, 20.2900967951374);
    glVertex2f(107.95, 18.19815);


    glEnd();


    //SMALL STRIP'S ABOVE THE WHEELS
    //FROM LEFT TO RIGHT (VIDED INTO SMALL PARTS)
   // glColor3f(0.4, 0.4, 0.4);
    glColor3f(0.62, 0.62, 0.62);

    // glColor3f(1, 1, 0);

    glBegin(GL_POLYGON);

    glVertex2f(89.4009780070931, 17.8766780790489);
    glVertex2f(89.386, 18.1034012);
    glVertex2f(89.9781692501741, 18.0949507363866);
    glVertex2f(90.129437008946, 17.8735609019);


    glEnd();

    glBegin(GL_POLYGON);

    glVertex2f(90.129437008946, 17.8735609019);
    glVertex2f(89.9781692501741, 18.0949507363866);
    glVertex2f(90.7367759386753, 19.1809561009779);
    glVertex2f(90.8544262963508, 18.9448137295578);


    glEnd();

    glBegin(GL_POLYGON);

    glVertex2f(90.8544262963508, 18.9448137295578);
    glVertex2f(90.7367759386753, 19.1809561009779);
    glVertex2f(93.012596004179, 19.2687947701727);
    glVertex2f(92.8833142275211, 19.042200350254);


    glEnd();

    glBegin(GL_POLYGON);

    glVertex2f(92.8833142275211, 19.042200350254);
    glVertex2f(93.012596004179, 19.2687947701727);
    glVertex2f(94.0187480331385, 17.6158307225964);
    glVertex2f(93.7922560206854, 17.575990671995);

    glEnd();

    glBegin(GL_POLYGON);

    glVertex2f(93.7922560206854, 17.575990671995);
    glVertex2f(94.0187480331385, 17.6158307225964);
    glVertex2f(94.0187480331385, 17.1686520430588);
    glVertex2f(93.8193078597677, 17.0295435225331);

    glEnd();

    glBegin(GL_POLYGON);

    glVertex2f(93.8193078597677, 17.0295435225331);
    glVertex2f(94.0187480331385, 17.1686520430588);
    glVertex2f(102.1769444443916, 17.2427526049686);
    glVertex2f(102.4963285496896, 17.115057446107);

    glEnd();


    glBegin(GL_POLYGON);

    glVertex2f(102.4963285496896, 17.115057446107);
    glVertex2f(102.1769444443916, 17.2427526049686);
    glVertex2f(102.21562738043, 17.7359600394586);
    glVertex2f(102.544743593567, 17.7552119151527);

    glEnd();

    glBegin(GL_POLYGON);

    glVertex2f(102.544743593567, 17.7552119151527);
    glVertex2f(102.21562738043, 17.7359600394586);
    glVertex2f(103.2407251854486, 19.2929482150057);
    glVertex2f(103.4323527313194, 19.0140030559652);

    glEnd();

    glBegin(GL_POLYGON);

    glVertex2f(103.4323527313194, 19.0140030559652);
    glVertex2f(103.2407251854486, 19.2929482150057);
    glVertex2f(105.5520306137452, 19.3509726190633);
    glVertex2f(105.3743339357353, 19.0516592012032);

    glEnd();

    glBegin(GL_POLYGON);

    glVertex2f(105.3743339357353, 19.0516592012032);
    glVertex2f(105.5520306137452, 19.3509726190633);
    glVertex2f(106.4320674086196, 18.1808138039006);
    glVertex2f(106.1597335364132, 17.9650104386214);

    glEnd();


    glBegin(GL_POLYGON);

    glVertex2f(106.1597335364132, 17.9650104386214);
    glVertex2f(106.4320674086196, 18.1808138039006);
    glVertex2f(107.95, 18.19815);
    glVertex2f(107.9309, 18.01808);

    glEnd();

    //SMALL STRIPS END'S HERE


    //IMMEDIATE PORTION ABOVE THE LEFT WHEEL
    //DEVIDED INTO SMALL PARTS


    //FIRST PART
    glColor3f(0.26, 0.26, 0.26);
    //glColor3f(1, 0, 0);

    glBegin(GL_POLYGON);

    glVertex2f(89.4009780070931, 17.8766780790489);
    glVertex2f(90.129437008946, 17.8735609019);
    glVertex2f(90.8544262963508, 18.9448137295578);
    glVertex2f(91.3021174405764, 18.4704093216824);
    glVertex2f(90.9302857532706, 18.2305179105174);
    glVertex2f(90.7083861979429, 18.0026210699105);
    glVertex2f(90.5404622101273, 17.7267459470707);
    glVertex2f(90.5, 17.5);

    glEnd();

    //SECOND PART

    glBegin(GL_POLYGON);

    glVertex2f(90.8544262963508, 18.9448137295578);
    glVertex2f(92.8833142275211, 19.042200350254);
    glVertex2f(92.9373393245028, 18.1975178567925);
    glVertex2f(92.4550705192714, 18.4914721761717);
    glVertex2f(92.096813692528, 18.5741468284971);
    glVertex2f(91.7339638295444, 18.5833329009777);
    glVertex2f(91.3021174405764, 18.4704093216824);

    glEnd();


    //THIRD PART
    glBegin(GL_POLYGON);

    glVertex2f(92.8833142275211, 19.042200350254);
    glVertex2f(93.7922560206854, 17.575990671995);
    glVertex2f(93.8193078597677, 17.0295435225331);
    glVertex2f(93.4047129692716, 16.7021076686437);
    glVertex2f(93.4104220572537, 17.0722239779192);
    glVertex2f(93.3644916948507, 17.5407136744297);
    glVertex2f(93.2083284626805, 17.8484471025298);
    glVertex2f(92.9373393245028, 18.1975178567925);

    glEnd();



    //FOURTH PART HORIZONTAL BIG
    glBegin(GL_POLYGON);

    glVertex2f(93.8193078597677, 17.0295435225331);
    glVertex2f(93.4047129692716, 16.7021076686437);
    glVertex2f(102.9405101906341, 16.7021076686437);
    glVertex2f(102.4963285496896, 17.115057446107);

    glEnd();


    //FIFTH PART ABOVE THE RIGHT WHEEL

    glBegin(GL_POLYGON);

    glVertex2f(103.4323527313194, 19.0140030559652);
    glVertex2f(102.544743593567, 17.7552119151527);
    glVertex2f(102.4963285496896, 17.115057446107);
    glVertex2f(102.9405101906341, 16.7021076686437);
    glVertex2f(102.9304803391945, 17.0678283991501);
    glVertex2f(102.9465726322452, 17.4268516670251);
    glVertex2f(103.0687062596968, 17.7118301310789);
    glVertex2f(103.3808255298509, 18.1867942378352);

    glEnd();


    //SIXTH PART
    glBegin(GL_POLYGON);

    glVertex2f(105.3743339357353, 19.0516592012032);
    glVertex2f(103.4323527313194, 19.0140030559652);
    glVertex2f(103.3808255298509, 18.1867942378352);
    glVertex2f(103.9100712488079, 18.5124839110395);
    glVertex2f(104.5478801921664, 18.6074767323908);
    glVertex2f(105.1178371202739, 18.4310614927384);
    glEnd();


    //SEVENTH PART
    glBegin(GL_POLYGON);

    glVertex2f(106.1597335364132, 17.9650104386214);
    glVertex2f(105.3743339357353, 19.0516592012032);
    glVertex2f(105.1178371202739, 18.4310614927384);
    glVertex2f(105.5385196148295, 18.1053718195341);
    glVertex2f(105.8370684819335, 17.5625556975269);
    glVertex2f(105.9560287608325, 17.0979886452683);
    glEnd();



    //EIGHTH PART
    glBegin(GL_POLYGON);

    glVertex2f(105.9560287608325, 17.0979886452683);
    glVertex2f(106.1597335364132, 17.9650104386214);
    glVertex2f(107.9309, 18.01808);
    glVertex2f(107.8430647420637, 17.1857577606744);
    glEnd();


    //MAIN BIG WINDOW
    glColor3f(0.16, 0.2, 0.22);
    glBegin(GL_POLYGON);

    glVertex2f(97.1094453075582, 21.5385984693535);
    glVertex2f(91.9415900139348, 19.7878938680717);
    glVertex2f(101.2942846485902, 20.3121690427871);
    glVertex2f(101.1725779116027, 21.0704956347861);
    glEnd();


    //LEFT WHEEL

    glPushMatrix();
    glTranslatef(91.8741956430409, 17.0838695713061, 0);
    glRotatef(_angle1, 0, 0, 1);
    glTranslatef(-91.8741956430409, -17.0838695713061, 0);

    circle_tree(1.3838645, 91.8741956430409, 17.0838695713061, 0.16, 0.2, 0.22);
    circle_tree(0.988437, 91.8741956430409, 17.0838695713061, 0.26, 0.26, 0.26);
    circle_tree(0.2942081, 91.8741956430409, 17.0838695713061, 0.6, 0.6, 0.6);
    circle_tree(0.179184, 91.9376001481839, 17.8032379181287, 0.6, 0.6, 0.6);

    glPopMatrix();

    //RIGHT WHEEL
    //USING THE CODE OF THE FIRET WHEEL, JUST TRANSLATING IT WITH X AXIS

    glPushMatrix();
    glTranslatef(12.5, 0, 0);

    glTranslatef(91.8741956430409, 17.0838695713061, 0);
    glRotatef(_angle1, 0, 0, 1);
    glTranslatef(-91.8741956430409, -17.0838695713061, 0);

    circle_tree(1.3838645, 91.8741956430409, 17.0838695713061, 0.16, 0.2, 0.22);
    circle_tree(0.988437, 91.8741956430409, 17.0838695713061, 0.26, 0.26, 0.26);
    circle_tree(0.2942081, 91.8741956430409, 17.0838695713061, 0.6, 0.6, 0.6);
    circle_tree(0.179184, 91.9376001481839, 17.8032379181287, 0.6, 0.6, 0.6);


    glPopMatrix();


    //VERTICLE LINES IN THE BODY

    glColor3f(0, 0, 0);
    glLineWidth(1);
    glBegin(GL_LINES);
    glVertex2f(93.9783445446893, 19.6104104427817);
    glVertex2f(94.0187480331385, 17.1686520430588);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(97.6911585071463, 19.7824167386323);
    glVertex2f(97.5751089811112, 17.2266182071295);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(101.418994694553, 19.9578238896028);
    glVertex2f(101.2264509132645, 17.2489320700953);
    glEnd();



    glPopMatrix();


}


// ID - 50
void eco_car02() {

    glPushMatrix();
    glTranslatef(-30, 5.7, 0);

    glTranslatef(move_ecocar_02, 0, 0); // FOR MOVEMENT OF THE ECO CAR 02

    glTranslatef(14.0082396802296, 18.5732220707545, 0);
    glScalef(2, 2, 1);
    glTranslatef(-14.0082396802296, -18.5732220707545, 0);

    //MAIN BODY AREA
    glColor3f(0.92, 0.92, 0.92);
    glBegin(GL_POLYGON);

    glVertex2f(9.1304364615037, 16.5691573881198);
    glVertex2f(8.9051797444512, 16.8103046541685);
    glVertex2f(8.7327941318715, 17.0898488907842);
    glVertex2f(8.5837038723431, 17.5091652457077);
    glVertex2f(8.5149647005943, 17.8577535521332);
    glVertex2f(8.5149647005943, 18.2274371719859);
    glVertex2f(8.5645099279972, 18.5399532217583);
    glVertex2f(8.6788450681578, 18.8715251282241);
    glVertex2f(8.8427254357214, 19.1802300066578);
    glVertex2f(9.0523398593492, 19.4279561436725);
    glVertex2f(9.3991564511697, 19.7328498507675);
    glVertex2f(9.9545497426782, 20.0895011165691);
    glVertex2f(10.3759030724032, 20.3300389847486);
    glVertex2f(10.9523593226827, 20.5785266037991);
    glVertex2f(11.5401778376359, 20.7612937050871);
    glVertex2f(12.1526946095199, 20.8749056869688);
    glVertex2f(12.9380991799195, 20.973698714692);
    glVertex2f(13.4765211810111, 20.9885176688505);
    glVertex2f(14.0939776042813, 20.9588797605336);
    glVertex2f(14.7262529817099, 20.8699660355826);
    glVertex2f(16.3729235293426, 20.5028241021402);
    glVertex2f(17.107108283566, 20.2467131413646);
    glVertex2f(17.7729967815826, 19.9507626978016);
    glVertex2f(18.3648976687084, 19.6434295448709);
    glVertex2f(18.8828109449436, 19.3247136825723);
    glVertex2f(19.1501236094544, 19.1119781093675);
    glVertex2f(19.4231742756695, 18.8918827238728);
    glVertex2f(19.5077586230381, 18.8044970010345);
    glVertex2f(19.9129461427299, 18.3970228690961);
    glVertex2f(20.1391701459797, 18.0596004118426);
    glVertex2f(20.3133986719359, 17.7200781561331);
    glVertex2f(20.4474206149791, 17.353751511815);
    glVertex2f(20.487627197892, 17.0365662466127);
    glVertex2f(20.4582422935345, 16.8947323849245);
    glVertex2f(20.402100624922, 16.7676749243805);
    glVertex2f(20.3193655343352, 16.6849398337937);
    glVertex2f(20.1323298142474, 16.5691573881198);
    glEnd();


    //WINDOW AREA
    //WINDOW BACKGROUND MORE LIGHTER

    glColor3f(0.76, 0.77, 0.77);
    glBegin(GL_POLYGON);

    glVertex2f(10.3759030724032, 20.3300389847486);
    glVertex2f(10.9523593226827, 20.5785266037991);
    glVertex2f(11.5401778376359, 20.7612937050871);
    glVertex2f(12.1526946095199, 20.8749056869688);
    glVertex2f(12.9380991799195, 20.973698714692);
    glVertex2f(13.4765211810111, 20.9885176688505);
    glVertex2f(14.0939776042813, 20.9588797605336);
    glVertex2f(14.7262529817099, 20.8699660355826);
    glVertex2f(16.3729235293426, 20.5028241021402);
    glVertex2f(17.107108283566, 20.2467131413646);
    glVertex2f(17.7729967815826, 19.9507626978016);
    glVertex2f(18.3648976687084, 19.6434295448709);
    glVertex2f(18.8828109449436, 19.3247136825723);
    glVertex2f(19.1501236094544, 19.1119781093675);
    glVertex2f(19.4231742756695, 18.8918827238728);
    glVertex2f(19.1683269872021, 18.8819536087377);
    glVertex2f(18.8009497272035, 18.8654050835126);
    glVertex2f(18.4153690894573, 18.8620953784675);
    glVertex2f(17.9966914012608, 18.8819536087377);
    glVertex2f(17.6276592887397, 18.9365637419808);
    glVertex2f(17.3496440649571, 18.9994481378364);
    glVertex2f(16.9879388396742, 19.1301132946588);
    glVertex2f(16.6880263376202, 19.2800695456859);
    glVertex2f(16.3315265710278, 19.4498313393013);
    glVertex2f(16.0429315218815, 19.5799820477399);
    glVertex2f(15.759995199189, 19.6733510342284);
    glVertex2f(15.462912060362, 19.7695493839438);
    glVertex2f(15.1743170112157, 19.8148191955746);
    glVertex2f(14.7527418904039, 19.8714064601131);
    glVertex2f(14.4443412986692, 19.9053588188362);
    glVertex2f(14.1083230154796, 19.9206424275872);
    glVertex2f(13.7336343977828, 19.9272740845375);
    glVertex2f(13.3887882363627, 19.9339057414879);
    glVertex2f(13.0605212173185, 19.9106949421616);
    glVertex2f(12.7587808260759, 19.8808524858848);
    glVertex2f(12.4271979785566, 19.8244834018065);
    glVertex2f(12.0790359886613, 19.7614826607779);
    glVertex2f(11.817085539121, 19.7216927190755);
    glVertex2f(11.5485034326303, 19.7449035184019);
    glVertex2f(11.2666580122389, 19.814535916381);
    glVertex2f(11.0168617059626, 19.8977645574643);
    glVertex2f(10.8, 20);
    glVertex2f(10.5965120904655, 20.1422231991009);
    glVertex2f(10.4802451755408, 20.2316592875046);
    glVertex2f(10.3759030724032, 20.3300389847486);

    glEnd();


    //MORE DEEPER WINDOW AREA
    glColor3f(0.4, 0.48, 0.51);
    glBegin(GL_POLYGON);
    glVertex2f(11.5401778376359, 20.7612937050871);
    glVertex2f(12.1526946095199, 20.8749056869688);
    glVertex2f(12.9380991799195, 20.973698714692);
    glVertex2f(13.4765211810111, 20.9885176688505);
    glVertex2f(14.0939776042813, 20.9588797605336);
    glVertex2f(14.7262529817099, 20.8699660355826);
    glVertex2f(16.3729235293426, 20.5028241021402);
    glVertex2f(17.107108283566, 20.2467131413646);
    glVertex2f(17.7729967815826, 19.9507626978016);
    glVertex2f(18.3648976687084, 19.6434295448709);
    glVertex2f(18.8828109449436, 19.3247136825723);
    glVertex2f(19.1501236094544, 19.1119781093675);
    glVertex2f(18.9550012986137, 19.1066708696477);
    glVertex2f(18.4547763450863, 19.0905302428575);
    glVertex2f(17.9686292583622, 19.1189183939071);
    glVertex2f(17.5499040303808, 19.1721461771251);
    glVertex2f(17.1453728779243, 19.2963443379671);
    glVertex2f(16.8011665464481, 19.4524791687398);
    glVertex2f(16.4995424415463, 19.6121625183937);
    glVertex2f(16.1872727800008, 19.7541032736416);
    glVertex2f(15.874019131221, 19.8645402967077);
    glVertex2f(15.3147461944401, 20.0165478128584);
    glVertex2f(14.8271749162208, 20.0911175377625);
    glVertex2f(14.2908465101796, 20.1341385328995);
    glVertex2f(13.8396889898682, 20.1521378347332);
    glVertex2f(13.4396441935869, 20.149397801882);
    glVertex2f(12.9683585431733, 20.1192574405183);
    glVertex2f(12.5546135826358, 20.0671968163447);
    glVertex2f(12.2943104617679, 20.0260963235761);
    glVertex2f(12.0970280964785, 19.9822557979562);
    glVertex2f(11.8942656654866, 19.9548554694438);
    glVertex2f(11.6476627088748, 19.9548554694438);
    glVertex2f(11.3133787010234, 20.0178762250223);
    glVertex2f(10.9927948574281, 20.1302175719233);
    glVertex2f(10.7516719665188, 20.2672192144854);
    glVertex2f(10.5461695026757, 20.4069608898987);
    glEnd();



    //LEFT RED LIGHT
    glColor3f(0.93, 0.16, 0.16);
    glBegin(GL_POLYGON);
    glVertex2f(8.8389043875314, 16.9252294371196);
    glVertex2f(8.7327941318715, 17.0898488907842);
    glVertex2f(8.5837038723431, 17.5091652457077);
    glVertex2f(8.5149647005943, 17.8577535521332);
    glVertex2f(8.5149647005943, 18.2274371719859);
    glVertex2f(8.5645099279972, 18.5399532217583);
    glVertex2f(8.6788450681578, 18.8715251282241);
    glVertex2f(8.8427254357214, 19.1802300066578);
    glVertex2f(8.9162834907108, 19.1645380311418);
    glVertex2f(8.9592949620161, 19.09875578091);
    glVertex2f(8.9694153082057, 18.9924921459202);
    glVertex2f(8.9441144427319, 18.8153860876038);
    glVertex2f(8.9061631445212, 18.648400375477);
    glVertex2f(8.850501240479, 18.3802112014551);
    glVertex2f(8.8277304615526, 18.0664804695804);
    glVertex2f(8.8600289038575, 17.7260489950523);
    glVertex2f(8.9554290700281, 17.3002609715004);
    glVertex2f(8.9797288368663, 17.1168161879589);
    glVertex2f(8.9371540033464, 16.9841792066086);
    glVertex2f(8.8389043875314, 16.9252294371196);

    glEnd();



    //RIGHT SIDE AREA

    glBegin(GL_POLYGON);
    glVertex2f(19.5077586230381, 18.8044970010345);
    glVertex2f(19.9129461427299, 18.3970228690961);
    glVertex2f(20.1391701459797, 18.0596004118426);
    glVertex2f(20.3133986719359, 17.7200781561331);
    glVertex2f(20.4474206149791, 17.353751511815);
    glVertex2f(20.487627197892, 17.0365662466127);
    glVertex2f(20.3605827202798, 17.0313811361306);
    glVertex2f(20.2250907866858, 17.0765451139953);
    glVertex2f(20.1347628309565, 17.1358228349426);
    glVertex2f(20.0726623613926, 17.2289735392885);
    glVertex2f(20.0472576238437, 17.3503517297998);
    glVertex2f(19.9644685485398, 17.59051510728);
    glVertex2f(19.8, 18);
    glVertex2f(19.5969482243127, 18.3129909583248);
    glVertex2f(19.4398882566943, 18.5517221091049);
    glVertex2f(19.3487934754756, 18.6648052857901);
    glVertex2f(19.3644994722375, 18.7433352695993);
    glVertex2f(19.394046031215, 18.7925272545268);
    glVertex2f(19.5077586230381, 18.8044970010345);


    glEnd();


    //RIGHT SIDE ROUND WHEEL

    glPushMatrix();
    glTranslatef(18.0317399138357, 17.2165732149627, 0);
    glRotatef(-_angle1, 0, 0, 1);
    glTranslatef(-18.0317399138357, -17.2165732149627, 0);

    //MOST BIG CIRLCLE
    circle_tree(1.189376, 18.0317399138357, 17.2165732149627, 0.22, 0.28, 0.3);
    //3RD BIG CIRCLE
    circle_tree(0.900029837, 18.0317399138357, 17.2165732149627, 0.4, 0.48, 0.51);
    //2ND BIG CIRLCE
    circle_tree(0.77071985, 18.0317399138357, 17.2165732149627, 0.55, 0.64, 0.67);
    //MOST SMALL CIRCLE
    circle_tree(0.331054, 18.0317399138357, 17.2165732149627, 0.22, 0.28, 0.3);

    //ADDING ONE MORE SMALL CIRCLE FOR IDENTIFY THE WHEEL ROTATION
    circle_tree(0.16498857, 18.1527741956522, 17.7523663277882, 1, 1, 1);

    glPopMatrix();

    //NOW PRINTING THE LEFT WHEEL
    //USING THE CODE OF THE RIGHT WHEEL
    //JUST TRANSLATING IT WITH -X VALUE

    glPushMatrix();
    glTranslatef(-7, 0, 0);

    glTranslatef(18.0317399138357, 17.2165732149627, 0);
    glRotatef(-_angle1, 0, 0, 1);
    glTranslatef(-18.0317399138357, -17.2165732149627, 0);

    //MOST BIG CIRLCLE
    circle_tree(1.189376, 18.0317399138357, 17.2165732149627, 0.22, 0.28, 0.3);
    //3RD BIG CIRCLE
    circle_tree(0.900029837, 18.0317399138357, 17.2165732149627, 0.4, 0.48, 0.51);
    //2ND BIG CIRLCE
    circle_tree(0.77071985, 18.0317399138357, 17.2165732149627, 0.55, 0.64, 0.67);
    //MOST SMALL CIRCLE
    circle_tree(0.331054, 18.0317399138357, 17.2165732149627, 0.22, 0.28, 0.3);

    //ADDING ONE MORE SMALL CIRCLE FOR IDENTIFY THE WHEEL ROTATION
    circle_tree(0.16498857, 18.1527741956522, 17.7523663277882, 1, 1, 1);

    glPopMatrix();





    glPopMatrix();



}


// ID - 51
void auto_motorcycle03() {


    glPushMatrix();

    glTranslatef(140, 1.3, 0);

    glTranslatef(move_auto_motorcycle_03, 0, 0);

    glTranslatef(75.7906049248812, 19.6415974655871, 0);
    glScalef(2.5, 2.5, 1);
    glTranslatef(-75.7906049248812, -19.6415974655871, 0);
    //MAIN BLACKISH BACKGROUND PART

    glColor3f(0.24, 0.24, 0.24);
    glBegin(GL_POLYGON);
    glVertex2f(78.0985278187201, 19.8317383163917);
    glVertex2f(75.1703731264944, 19.8485667916344);
    glVertex2f(73.5924671858528, 19.3195845574873);
    glVertex2f(72.8638460664956, 18.9799827904452);
    glVertex2f(72.8952335650528, 18.29761169767);
    glVertex2f(74.5771468503582, 18.3002814012974);
    glVertex2f(75.2803251266151, 18.3377127238005);
    glVertex2f(75.709190441404, 18.3822701591033);
    glVertex2f(76.0934983208901, 18.393409517929);
    glVertex2f(76.7451508121926, 18.3544217620391);
    glVertex2f(77.5471846476419, 18.2708765708464);
    glVertex2f(78.0261770771463, 18.2764462502593);
    glVertex2f(78.3116885051274, 19.6915010227028);

    glEnd();


    //NOW PRINTING THE LEFT WHEEL + IT'S AREA

    glPushMatrix();
    glTranslatef(72.2324129015567, 18.7378761470537, 0);
    glRotatef(_angle1, 0, 0, 1);
    glTranslatef(-72.2324129015567, -18.7378761470537, 0);

    //BIG BLACK WHEEL CIRCLE
    circle_tree(0.788769, 72.2324129015567, 18.7378761470537, 0.23, 0.27, 0.31);
    //SMALL WHITISH CIRCLE IN THTE BLACK WHEEL
    circle_tree(0.5965217, 72.2324129015567, 18.7378761470537, 0.6, 0.65, 0.68);


    //NOW ADDING AN EXTRA SMALL RED CIRCLE TO IDENTIFY THE WHEEL ROTATION
    circle_tree(0.1, 72.2384339342806, 18.2450066394858, 1, 0, 0);

    glPopMatrix();


    //NOW PRINTING THE COVER OF THE WHEEL


    //BACK WHITISH AREA COVER
    glColor3f(0.72, 0.8, 0.85);
    glBegin(GL_POLYGON);

    glVertex2f(71.3443444720877, 18.4853653021214);
    glVertex2f(71.2696344279508, 18.5664906852063);
    glVertex2f(71.221460719721, 18.6906306256445);
    glVertex2f(71.2066380402657, 18.8351517503336);
    glVertex2f(71.2103437101296, 18.974114370227);
    glVertex2f(71.2418419039721, 19.1297525045076);
    glVertex2f(71.306691126589, 19.268715124401);
    glVertex2f(71.4, 19.4);
    glVertex2f(71.5048633119866, 19.4898034326591);
    glVertex2f(71.6839645500497, 19.6062192374001);
    glVertex2f(71.8660508087472, 19.6778597326253);
    glVertex2f(72.0750022531541, 19.7166650008723);
    glVertex2f(72.2899237388299, 19.7196500215067);
    glVertex2f(72.4869351006993, 19.6897998151629);
    glVertex2f(72.7078266276438, 19.6121892786689);
    glVertex2f(72.9024114955638, 19.5216170657311);
    glVertex2f(73.0478176839803, 19.4226600763921);
    glVertex2f(73.235634010685, 19.2530195232395);
    glVertex2f(73.421430806995, 19.0349102406147);
    glVertex2f(73.5688565258062, 18.8208400187792);
    glVertex2f(73.6375205592252, 18.6411018136532);
    glVertex2f(73.6233838464624, 18.574457310629);
    glVertex2f(73.5491936781927, 18.5190182320399);
    glVertex2f(73.1281792547647, 18.4853653021214);
    glVertex2f(71.3443444720877, 18.4853653021214);

    glEnd();


    //MAIN MORE DEEP COLOR COVER AREA

    glColor3f(0.4, 0.49, 0.58);
    glBegin(GL_POLYGON);

    glVertex2f(71.3443444720877, 18.4853653021214);
    glVertex2f(71.2696344279508, 18.5664906852063);
    glVertex2f(71.221460719721, 18.6906306256445);
    glVertex2f(71.2066380402657, 18.8351517503336);
    glVertex2f(71.2103437101296, 18.974114370227);
    glVertex2f(71.2418419039721, 19.1297525045076);
    glVertex2f(71.3826573587974, 19.2816849689244);
    glVertex2f(71.5197671437589, 19.4058249093625);
    glVertex2f(71.6809637828352, 19.5114365004815);
    glVertex2f(71.8745535775918, 19.6014711712788);
    glVertex2f(72.0515511764685, 19.6352616219734);
    glVertex2f(72.3749740616885, 19.6288253456507);
    glVertex2f(72.5616260750494, 19.5902076877139);
    glVertex2f(72.7691959864593, 19.5129723718405);
    glVertex2f(72.8753945457852, 19.4647002994196);
    glVertex2f(73.0691024999797, 19.3435477752208);
    glVertex2f(73.241176474538, 19.1910276614078);
    glVertex2f(73.421430806995, 19.0349102406147);
    glVertex2f(73.5688565258062, 18.8208400187792);
    glVertex2f(73.6375205592252, 18.6411018136532);
    glVertex2f(73.6233838464624, 18.574457310629);
    glVertex2f(73.5491936781927, 18.5190182320399);
    glVertex2f(73.1281792547647, 18.4853653021214);
    glVertex2f(71.3443444720877, 18.4853653021214);

    glEnd();




    //MOPRE WHITISH COVER
    glColor3f(0.68, 0.73, 0.78);
    glBegin(GL_POLYGON);

    glVertex2f(71.5588524455433, 18.6005192800105);
    glVertex2f(71.4996463025341, 18.8217376418814);
    glVertex2f(71.5099484715611, 18.9814212617999);
    glVertex2f(71.602667992804, 19.1282271704346);
    glVertex2f(71.7520494436955, 19.2750330790694);
    glVertex2f(71.9761216200327, 19.3497238045151);
    glVertex2f(72.3083665711534, 19.3522993467719);
    glVertex2f(72.5762229658554, 19.2570042832721);
    glVertex2f(72.7874174309088, 19.0792918675564);
    glVertex2f(72.9728564733948, 18.8397664376787);
    glVertex2f(73, 18.7);
    glVertex2f(72.9728564733948, 18.6259964303685);
    glVertex2f(72.8436769476939, 18.6005192800105);
    glVertex2f(71.5588524455433, 18.6005192800105);

    glEnd();



    //NOW PRINTING THE RIGHT SIDE WHEEL AND IT'S COVER AREA

    //NOW PRINTING THE RIGHT WHEEL
    //USING THE CODE OF THE FIRST WHEEL
    //JUST TRANSLATING IT TO +X AXIS


    glPushMatrix();
    glTranslatef(6.5, 0, 0);

    glTranslatef(72.2324129015567, 18.7378761470537, 0);
    glRotatef(_angle1, 0, 0, 1);
    glTranslatef(-72.2324129015567, -18.7378761470537, 0);

    //BIG BLACK WHEEL CIRCLE
    circle_tree(0.788769, 72.2324129015567, 18.7378761470537, 0.23, 0.27, 0.31);
    //SMALL WHITISH CIRCLE IN THTE BLACK WHEEL
    circle_tree(0.5965217, 72.2324129015567, 18.7378761470537, 0.6, 0.65, 0.68);

    //NOW ADDING AN EXTRA SMALL RED CIRCLE TO IDENTIFY THE WHEEL ROTATION
    circle_tree(0.1, 72.2384339342806, 18.2450066394858, 1, 0, 0);

    glPopMatrix();

    // WHITISH COVER AT THE BACK
    glColor3f(0.72, 0.8, 0.85);
    glBegin(GL_POLYGON);

    glVertex2f(77.738214852011, 18.4651553669052);
    glVertex2f(77.0081765684265, 18.5078703728597);
    glVertex2f(76.8862681030934, 18.5396560781838);
    glVertex2f(76.8295501798899, 18.6515481201609);
    glVertex2f(76.9382792859557, 18.834057691057);
    glVertex2f(77.4780416339251, 19.2573245682417);
    glVertex2f(77.9673226112211, 19.5407968804846);
    glVertex2f(78.3116885051274, 19.6915010227028);
    glVertex2f(78.5226176886284, 19.7504887278972);
    glVertex2f(78.8721041009827, 19.7776710044136);
    glVertex2f(79.2332400604155, 19.7000073572238);
    glVertex2f(79.4157496313116, 19.5679791570011);
    glVertex2f(79.6, 19.4);
    glVertex2f(79.7380537671495, 19.1835441034113);
    glVertex2f(79.7885351378229, 18.9272540676848);
    glVertex2f(79.7730024083849, 18.6826135790368);
    glVertex2f(79.5438946491749, 18.4651553669052);
    glVertex2f(77.738214852011, 18.4651553669052);

    glEnd();


    //MAIN MORE DEEP COLOR COVER AREA

    glColor3f(0.4, 0.49, 0.58);
    glBegin(GL_POLYGON);

    glVertex2f(77.738214852011, 18.4651553669052);
    glVertex2f(77.0081765684265, 18.5078703728597);
    glVertex2f(76.8862681030934, 18.5396560781838);
    glVertex2f(76.9097173898084, 18.6516915591553);
    glVertex2f(77.0430543497156, 18.780664072906);
    glVertex2f(77.3707142495148, 19.0490663312522);
    glVertex2f(77.6495737387056, 19.2512394609156);
    glVertex2f(77.9772336385048, 19.4255266416598);
    glVertex2f(78.336265230838, 19.5858708479446);
    glVertex2f(78.6151247200288, 19.6730144383167);
    glVertex2f(78.9880992868215, 19.6834716691614);
    glVertex2f(79.1902724164849, 19.6520999766274);
    glVertex2f(79.4157496313116, 19.5679791570011);
    glVertex2f(79.6, 19.4);
    glVertex2f(79.7380537671495, 19.1835441034113);
    glVertex2f(79.7885351378229, 18.9272540676848);
    glVertex2f(79.7730024083849, 18.6826135790368);
    glVertex2f(79.5438946491749, 18.4651553669052);
    glVertex2f(77.738214852011, 18.4651553669052);

    glEnd();


    //MOPRE WHITISH COVER
    glColor3f(0.68, 0.73, 0.78);
    glBegin(GL_POLYGON);

    glVertex2f(78, 18.6);
    glVertex2f(77.8407432769323, 18.6169711329076);
    glVertex2f(77.7539271248561, 18.6712312279552);
    glVertex2f(77.7756311628752, 18.7688993990409);
    glVertex2f(77.9384114480179, 18.9787050998915);
    glVertex2f(78.1771558662272, 19.1740414420628);
    glVertex2f(78.4846297381635, 19.3151176891865);
    glVertex2f(78.831894346468, 19.3729951239039);
    glVertex2f(79.1610722564233, 19.3404390668753);
    glVertex2f(79.4323727316612, 19.2319188767802);
    glVertex2f(79.5915356771341, 19.0365825346089);
    glVertex2f(79.6494131118515, 18.7688993990409);
    glVertex2f(79.5589796201055, 18.6);
    glVertex2f(78, 18.6);

    glEnd();



    //NOW PRINTING THE UPPER AREA OF THE AUTO MOTORCYCLE

    //MAIN BLACK WINDOW AREA
    glColor3f(0.23, 0.23, 0.22);
    glBegin(GL_POLYGON);

    glVertex2f(73.1175585025977, 20.0272194345945);
    glVertex2f(73.3602132005961, 20.3031377380389);
    glVertex2f(73.7611867737839, 20.5934979117266);
    glVertex2f(74.125289213805, 20.8055069274351);
    glVertex2f(74.5455766022262, 21.0059415838148);
    glVertex2f(75.0340454279636, 21.2262314464023);
    glVertex2f(75.5177253436448, 21.393843298371);
    glVertex2f(76.1067612805634, 21.5135660497772);
    glVertex2f(76.7867865085508, 21.547088420171);
    glVertex2f(78.0654254935693, 21.374687658146);
    glVertex2f(78.6784059807692, 21.2166536262898);
    glVertex2f(79.2099749970129, 21.0346750441523);
    glVertex2f(79.4733650501066, 20.8862188324086);
    glVertex2f(79.5808618245683, 20.7586635083621);
    glVertex2f(78.3931228778496, 20.7087202028725);
    glVertex2f(77.2869888828488, 20.6488046114767);
    glVertex2f(75.9089302807437, 20.5197556453932);
    glVertex2f(74.7797518275137, 20.3492266544973);
    glVertex2f(74, 20.2);
    glVertex2f(73.1175585025977, 20.0272194345945);



    glEnd();



    //LOWER MORE WHITISH UNDER THE BLACK WINDOW AREA

    glColor3f(0.46, 0.55, 0.63);
    glBegin(GL_POLYGON);

    glVertex2f(73.1175585025977, 20.0272194345945);
    glVertex2f(73.1631607733762, 19.8277094999388);
    glVertex2f(73.3740712757265, 19.5939978621993);
    glVertex2f(73.5924671858528, 19.3195845574873);
    glVertex2f(73.738889441954, 19.1322748705676);
    glVertex2f(73.9098979573731, 18.784557555882);
    glVertex2f(74, 18.6);
    glVertex2f(74.0857796210402, 18.5044010917265);
    glVertex2f(74.497541148775, 18.5044010917265);
    glVertex2f(75.0053803663146, 18.5089762198125);
    glVertex2f(75.5452454804559, 18.5959036534454);
    glVertex2f(75.9615821362766, 18.6919813432502);
    glVertex2f(76.3916441763552, 18.8841367228598);
    glVertex2f(76.7988305760041, 19.0900174867272);
    glVertex2f(77.155532582882, 19.2723561434525);
    glVertex2f(77.5051230169882, 19.49264600604);
    glVertex2f(77.9457027421631, 19.7368804189087);
    glVertex2f(78.0985278187201, 19.8317383163917);
    glVertex2f(78.328815546663, 19.9619591915524);
    glVertex2f(78.8939069333004, 20.1918268742524);
    glVertex2f(79.3632201188129, 20.4264834670086);
    glVertex2f(79.5691432512316, 20.6132509592024);
    glVertex2f(79.5808618245683, 20.7586635083621);
    glVertex2f(78.3931228778496, 20.7087202028725);
    glVertex2f(77.2869888828488, 20.6488046114767);
    glVertex2f(75.9089302807437, 20.5197556453932);
    glVertex2f(74.7797518275137, 20.3492266544973);
    glVertex2f(74, 20.2);
    glVertex2f(73.1175585025977, 20.0272194345945);

    glEnd();


    glPopMatrix();



}


// ID - 52
void eco_car04() {

    glPushMatrix();


    glTranslatef(-110, 5.5, 0);

    glTranslatef(move_ecocar_04, 0, 0);

    glTranslatef(28.9050771280319, 18.9650436824854, 0);
    glScalef(2, 2, 1);
    glTranslatef(-28.9050771280319, -18.9650436824854, 0);


    //MAIN BODY AREA(DIVIDED INTO SMALL PARTS)
    //1ST PART FROM LEFT
    glColor3f(0.74, 0.77, 0.83);
    glBegin(GL_POLYGON);
    glVertex2f(22.7894025960132, 16.5817230855369);
    glVertex2f(22.7894025960132, 16.5817230855369);
    glVertex2f(21.7496395935808, 17.3655840564444);
    glVertex2f(21.530696461727, 17.8582061031153);
    glVertex2f(21.5232629635611, 18.3743183927222);
    glVertex2f(21.6854757779147, 18.7361777478186);
    glVertex2f(22.0473351330113, 19.1354708293044);
    glVertex2f(22.6688220358516, 19.5505904330917);
    glVertex2f(23.0706800093268, 19.6944655100149);
    glVertex2f(23.2861867445529, 19.7733216055248);
    glVertex2f(23.9537753090623, 19.8829914728797);
    glVertex2f(24.0009960447768, 17.4277495454493);
    glVertex2f(22.7894025960132, 16.5817230855369);
    glEnd();


    //2ND PART

    glBegin(GL_POLYGON);
    glVertex2f(24.0009960447768, 17.4277495454493);
    glVertex2f(23.9537753090623, 19.8829914728797);
    glVertex2f(24.4647798926171, 19.8829914728797);
    glVertex2f(25.0964651482338, 19.7991045654309);
    glVertex2f(25.7310712605925, 19.6483070733853);
    glVertex2f(26.4096599747979, 19.4032611488111);
    glVertex2f(25.4421579986186, 16.6885975837719);
    glVertex2f(24.0009960447768, 17.4277495454493);

    glEnd();


    //3RD PART

    glBegin(GL_POLYGON);

    glVertex2f(25.4421579986186, 16.6885975837719);
    glVertex2f(26.4096599747979, 19.4032611488111);
    glVertex2f(26.9688673411338, 19.1644984530723);
    glVertex2f(27.4526759614469, 18.9006028419924);
    glVertex2f(27.9050684375838, 18.6932562904297);
    glVertex2f(28.5, 18.5);
    glVertex2f(28.9123706988578, 18.43251533626);
    glVertex2f(29.0351009002446, 17.2138371181197);
    glVertex2f(28.2358233479761, 17.152939780804);
    glVertex2f(27.5431161360101, 17.0844302763239);
    glVertex2f(26.9341427628532, 16.9550234345281);
    glVertex2f(26.3327815568607, 16.7951679240744);
    glVertex2f(25.5, 16.5);
    glVertex2f(25.4421579986186, 16.6885975837719);

    glEnd();


    //4TH PART
    glBegin(GL_POLYGON);

    glVertex2f(31.7449954022483, 18.7580408305858);
    glVertex2f(31.4191728829088, 18.6163788656556);
    glVertex2f(31, 18.5);
    glVertex2f(30.4591204976462, 18.4115740791275);
    glVertex2f(29.5091503318292, 18.3630652122807);
    glVertex2f(28.9123706988578, 18.43251533626);
    glVertex2f(29.0351009002446, 17.2138371181197);
    glVertex2f(30.0322947987891, 17.1833884494619);
    glVertex2f(30.8467966853866, 17.053981607666);
    glVertex2f(31.6841350734774, 16.7951679240744);
    glVertex2f(32.0190704287137, 16.589639410634);
    glVertex2f(31.7449954022483, 18.7580408305858);

    glEnd();


    //5TH PART

    glBegin(GL_POLYGON);

    glVertex2f(33.4945206691362, 19.331771788553);
    glVertex2f(33.01995308662, 19.2255253148553);
    glVertex2f(32.6728091799397, 19.1360264791293);
    glVertex2f(32.5737178970899, 19.1051126446647);
    glVertex2f(32.1983136900249, 18.970533777981);
    glVertex2f(31.7449954022483, 18.7580408305858);
    glVertex2f(32.0190704287137, 16.589639410634);
    glVertex2f(32.255047610812, 16.6581489151141);
    glVertex2f(33.26786152524787, 17.476000047967773);
    glVertex2f(33.4945206691362, 19.331771788553);

    glEnd();


    //6TH PART (LAST PART)

    glBegin(GL_POLYGON);

    glVertex2f(33.4945206691362, 19.331771788553);
    glVertex2f(34.0115868411314, 19.374270378032);
    glVertex2f(34.5994839955917, 19.3105224938134);
    glVertex2f(35.2157135430381, 19.0271985639531);
    glVertex2f(35.5273698658845, 18.8005394200648);
    glVertex2f(35.8036106974984, 18.4393014094929);
    glVertex2f(36, 18);
    glVertex2f(36, 17.5);
    glVertex2f(35.7256966167868, 17.1714268233679);
    glVertex2f(35.3998740974473, 16.838521205782);
    glVertex2f(35.0173867921358, 16.6614437496193);
    glVertex2f(34.464905128908, 16.6260282583868);
    glVertex2f(33.26786152524787, 17.476000047967773);
    glVertex2f(33.4945206691362, 19.331771788553);

    glEnd();


    //SMALL BLAKISH CURVER AREA UNDER THE MAIN BODY

    glColor3f(0.09, 0.09, 0.15);

    glBegin(GL_POLYGON);

    glVertex2f(31.0732284901157, 16.9820048601769);
    glVertex2f(30.8467966853866, 17.053981607666);
    glVertex2f(30.0322947987891, 17.1833884494619);
    glVertex2f(29.0351009002446, 17.2138371181197);
    glVertex2f(28.2358233479761, 17.152939780804);
    glVertex2f(27.5431161360101, 17.0844302763239);
    glVertex2f(26.9341427628532, 16.9550234345281);
    glVertex2f(27.5057929786539, 16.7824280483469);
    glVertex2f(28.1357072909924, 16.6265086641047);
    glVertex2f(28.8716467846157, 16.5391938089291);
    glVertex2f(29.6075862782389, 16.5579041350382);
    glVertex2f(30.3123418950137, 16.6826396424319);
    glVertex2f(31.0732284901157, 16.9820048601769);

    glEnd();


    //NOW PRINTING UPPER WINDOW AREA
    //BLACKISH CURVE UNDER THE MAIN GLASS WINDW

    glColor3f(0.08, 0.1, 0.14);

    glBegin(GL_POLYGON);
    glVertex2f(29.9408723655281, 19.8302093156777);
    glVertex2f(25.910540027389, 19.9742711434771);
    glVertex2f(25.6249375690538, 19.9314686271546);
    glVertex2f(25.3059795652994, 19.7508198462672);
    glVertex2f(25.7310712605925, 19.6483070733853);
    glVertex2f(26.4096599747979, 19.4032611488111);
    glVertex2f(26.9688673411338, 19.1644984530723);
    glVertex2f(27.4526759614469, 18.9006028419924);
    glVertex2f(27.9050684375838, 18.6932562904297);
    glVertex2f(28.5, 18.5);
    glVertex2f(29.5091503318292, 18.3630652122807);
    glVertex2f(30.4591204976462, 18.4115740791275);
    glVertex2f(31, 18.5);
    glVertex2f(31.4191728829088, 18.6163788656556);
    glVertex2f(31.7449954022483, 18.7580408305858);
    glVertex2f(32.1983136900249, 18.970533777981);
    glVertex2f(32.5737178970899, 19.1051126446647);
    glVertex2f(32.6728091799397, 19.1360264791293);
    glVertex2f(32.6, 19.2);
    glVertex2f(32.3747097488625, 19.2278593897012);
    glVertex2f(29.9408723655281, 19.8302093156777);

    glEnd();


    //MAIN GLASS WINDOW

    glColor3f(0.49, 0.77, 0.8);

    glBegin(GL_POLYGON);
    glVertex2f(32.3747097488625, 19.2278593897012);
    glVertex2f(32.1844235266764, 19.4733546657316);
    glVertex2f(31.6585871878525, 19.9233947755358);
    glVertex2f(31.2, 20.2);
    glVertex2f(30.6284347332864, 20.4501790478546);
    glVertex2f(30.0793102282353, 20.619492436912);
    glVertex2f(29.5484898733525, 20.715589225296);
    glVertex2f(29.0634298938907, 20.7979579010536);
    glVertex2f(28.5554897267185, 20.8482943140166);
    glVertex2f(27.8782361704888, 20.8437182764745);
    glVertex2f(27.4984250544951, 20.7979579010536);
    glVertex2f(27.0316692252017, 20.6881330000434);
    glVertex2f(26.6747382969185, 20.5737320614911);
    glVertex2f(26.326959443719417, 20.431874897686274);
    glVertex2f(26.0478211536518, 20.2030730205817);
    glVertex2f(25.910540027389, 19.9742711434771);
    glVertex2f(26.2882573113749, 19.9230007155505);
    glVertex2f(26.720120803184, 19.7367066602604);
    glVertex2f(27.1902536421308, 19.4975909383619);
    glVertex2f(27.5961030597379, 19.2787058592031);
    glVertex2f(28.1113950169244, 19.041580356781);
    glVertex2f(28.6084465508476, 18.8454958067013);
    glVertex2f(29.0872576615076, 18.6813319973321);
    glVertex2f(29.6709512059313, 18.5627692461211);
    glVertex2f(30.3868878190134, 18.5582091403053);
    glVertex2f(31.1210648553587, 18.7132527380428);
    glVertex2f(31.5875088496798, 18.8576411450362);
    glVertex2f(32.0083885383517, 19.0524928527546);
    glVertex2f(32.3747097488625, 19.2278593897012);

    glEnd();


    //LEFT WHITE LIGHT TYPE SMALL AREA

    glColor3f(1, 1, 1);
    glBegin(GL_POLYGON);

    glVertex2f(23.2861867445529, 19.7733216055248);
    glVertex2f(23.1493917274454, 19.859024507809);
    glVertex2f(22.9203012771088, 19.8623207732814);
    glVertex2f(22.6566000393113, 19.7980435965683);
    glVertex2f(22.373121208679, 19.6612485794609);
    glVertex2f(22.1744339371399, 19.4744725845589);
    glVertex2f(22.1858188754247, 19.2574685443034);


    glEnd();


    //RIGHT SIDE BLUE COLOR SMALL AREA
    glColor3f(0.33, 0.74, 0.81);
    glBegin(GL_POLYGON);

    glVertex2f(35.8036106974984, 18.4393014094929);
    glVertex2f(35.5430188620369, 18.2133333487056);
    glVertex2f(35.6373069250929, 17.9082837329361);
    glVertex2f(36, 18);

    glEnd();


    //RIGHT SIDE BLACK COLOR SMALL AREA

    glColor3f(0, 0, 0);
    glBegin(GL_POLYGON);

    glVertex2f(36, 17.5);
    glVertex2f(35.5756063167933, 17.4471133398892);
    glVertex2f(35.1056440502429, 16.9022295525845);
    glVertex2f(35.2871954740865, 16.8343283838201);
    glVertex2f(35.3998740974473, 16.838521205782);

    glEnd();


    //LEFT SIDE WHEEL (TOTAL 3 CIRCLES)


    glPushMatrix();
    glTranslatef(24.1620839604869, 17.7457923637786, 0);
    glRotatef(-_angle1, 0, 0, 1);
    glTranslatef(-24.1620839604869, -17.7457923637786, 0);

    //MOST BIG CIRCLE BLAKISH
    circle_tree(1.422257, 24.1620839604869, 17.7457923637786, 0.33, 0.36, 0.38);

    //2ND MOST BIG CIRCLE MORE BLAKISH
    circle_tree(1.121743, 24.1620839604869, 17.7457923637786, 0.15, 0.16, 0.2);


    //SMALL CIRCLE WHITISH
    circle_tree(0.793409, 24.1620839604869, 17.7457923637786, 0.82, 0.86, 0.88);

    //ADDING EXTRA SMALL CIRCLE TO IDENTIFY WHEEL ROTATION
    circle_tree(0.2124966, 24.7379151688819, 18.6402067757037, 1, 0, 0);

    glPopMatrix();


    //RIGHT SIDE WHEEL

    glPushMatrix();
    glTranslatef(33.26786152524787, 17.476000047967773, 0);
    glRotatef(-_angle1, 0, 0, 1);
    glTranslatef(-33.26786152524787, -17.476000047967773, 0);


    //MOST BIG CIRCLE BLAKISH
    circle_tree(1.09028, 33.26786152524787, 17.476000047967773, 0.33, 0.36, 0.38);

    //2ND MOST BIG CIRCLE MORE BLAKISH
    circle_tree(0.831846, 33.26786152524787, 17.476000047967773, 0.15, 0.16, 0.2);


    //SMALL CIRCLE WHITISH
    circle_tree(00.62824, 33.26786152524787, 17.476000047967773, 0.82, 0.86, 0.88);

    //ADDING EXTRA SMALL CIRCLE TO IDENTIFY WHEEL ROTATION
    circle_tree(0.2124966, 32.4891303493756, 17.8957075110131, 1, 0, 0);

    glPopMatrix();




    glPopMatrix();


}





void move_fire_smoke(int value) {
    _move_fire_smoke += 0.1;
    if (_move_fire_smoke > 15) {
        _move_fire_smoke = 0;
    }
    glutPostRedisplay();
    glutTimerFunc(20, move_fire_smoke, 0);
}



void  move_flying_car(int vlaue) {

    _move_fly_car_01 -= 0.65;
    _move_fly_car_03 -= 0.35;
    _move_fly_car_02 += 0.35;
    _move_fly_car_04 += 0.45;

    if (_move_fly_car_01 < -300) {
        _move_fly_car_01 = 0;
    }

    if (_move_fly_car_02 > 150) {
        _move_fly_car_02 = 0;
    }

    if (_move_fly_car_03 < -190) {
        _move_fly_car_03 = 0;
    }

    if (_move_fly_car_04 > 170) {
        _move_fly_car_04 = 0;
    }



    glutPostRedisplay();
    glutTimerFunc(20, move_flying_car, 0);

}


void move_cars(int value) {
    move_cybertruck_01 -= 0.45;
    move_ecocar_02 += 0.4;
    move_auto_motorcycle_03 -= 0.7;
    move_ecocar_04 += 0.5;

    if (move_cybertruck_01 < -170) {
        move_cybertruck_01 = 0;
    }
    if (move_ecocar_02 > 170) {
        move_ecocar_02 = 0;
    }

    if (move_auto_motorcycle_03 < -230) {
        move_auto_motorcycle_03 = 0;
    }

    if (move_ecocar_04 > 220) {
        move_ecocar_04 = 0;
    }
    glutPostRedisplay();
    glutTimerFunc(20, move_cars, 0);
}


void rotate_fan1(int value) {

    _angle1 += 15.0f;
    _angle2 += 30.0f;
    if (countfire > 12 && vanishfire > 11)
    {
        rotate_smoke += 0.2f;
    }
    if (_angle1 > 360.0)
    {
        _angle1 -= 360;
    }

    if (_angle2 > 360.0)
    {
        _angle2 -= 360;
    }
    if (rotate_smoke > 360.0) {
        rotate_smoke -= 360;
    }
    glutPostRedisplay(); //Notify GLUT that the display has changed

    glutTimerFunc(20, rotate_fan1, 0); //Notify GLUT to call update again in 25 milliseconds
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

void zoom_to_fire_animation(int value) {
    if (zoom_to_fire && zoom_fire_value <= 1.7) {
        zoom_fire_value += 0.005;
    }

    if (!zoom_to_fire && zoom_fire_value > 1) {
        zoom_fire_value -= 0.005;
    }

    glutPostRedisplay();
    glutTimerFunc(20, zoom_to_fire_animation, 0);
}




//This funtion is for the wing chanigng functionality of the birds...
void change_wing(int value) {
    state = !state;

    glutPostRedisplay();
    glutTimerFunc(80, change_wing, 0);

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

void PlayMusic_birds(const string& path) {
    // if (_ismovetrain)
    PlaySound(path.c_str(), NULL, SND_FILENAME | SND_ASYNC);
    //glutPostRedisplay();
}

void PlayMusic_misson(const string& path) {
    // if (_ismovetrain)
    PlaySound(path.c_str(), NULL, SND_FILENAME | SND_ASYNC);
    //glutPostRedisplay();
}


void move_helicopter(int value) {
    if (countfire > 15 && showfire) {
        if (_movehelicopter > -50) {
            //_movehelicopter = 0;
            _movehelicopter -= 0.5;
        }
    }
    if (!showfire) {
        _movehelicopter = 0;
    }

    if (vanishfire < 7) {
        _movehelicopter -= 0.5;

    }

    if (_movehelicopter == -75) {
        //PlayMusic_misson("E:/SPRING 23-24/COMPUTER GRAPHICS/Computer-Graphics-main/OpenGL Programming/misson_accomplished.wav");
        PlayMusic_misson((soundsFolderPath + "misson_accomplished.wav").c_str());
    }


    //cout << _movehelicopter << endl;

    glutPostOverlayRedisplay();
    glutTimerFunc(20, move_helicopter, 0);
}


// This function is for the movement of the birds.. The flying animation...
void fly(int value) {

    if (_isflybird)
    {
        _move -= 0.5;
        //cout << _move << endl;

        if (_move == -0.5) {
            // PlayMusic_birds("E:/SPRING 23-24/COMPUTER GRAPHICS/Computer-Graphics-main/OpenGL Programming/BIRDS_CHIRPING.wav");
            //sndPlaySound("E:/SPRING 23-24/COMPUTER GRAPHICS/Computer-Graphics-main/OpenGL Programming/BIRDS_CHIRPING.wav", SND_ASYNC);
            PlayMusic_birds((soundsFolderPath + "BIRDS_CHIRPING.wav").c_str());

        }
        if (_move < -150 - 135) {
            _move = 0;
        }

        glutPostRedisplay();
    }

    glutTimerFunc(20, fly, 0);

}



//This function is for the movement of the train..
void _move_train(int value) {

    if (_ismovetrain) {
        _movetrain -= 0.5;

        if (_movetrain == -0.5) {

            //PlayMusic_run("E:/SPRING 23-24/COMPUTER GRAPHICS/Computer-Graphics-main/OpenGL Programming/trainsound.wav");
            PlayMusic_run((soundsFolderPath + "trainsound.wav").c_str());
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
            //PlayMusic_run("E:/SPRING 23-24/COMPUTER GRAPHICS/Computer-Graphics-main/OpenGL Programming/trainsound.wav");
             PlayMusic_run((soundsFolderPath + "trainsound.wav").c_str());
        }

        break;
    case 'w':
        if (_ismovetrain) {
            _ismovetrain = false;
           // PlayMusic_brake("E:/SPRING 23-24/COMPUTER GRAPHICS/Computer-Graphics-main/OpenGL Programming/TRAIN_BRAKE_02.wav");
            PlayMusic_brake((soundsFolderPath + "TRAIN_BRAKE_02.wav").c_str());
        }
        break;
    case 'b':
        _isflybird = !_isflybird;
        break;

    case 'f':
        showfire = !showfire;
        countfire = 0;
        vanishfire = 20;

        //FLYING CARS RESET POSITION
        if (showfire) {
            is_fly_car = false;
        }
        if (!showfire) {
            is_fly_car = true;
        }
        _move_fly_car_01 = 0;
        _move_fly_car_02 = 0;
        _move_fly_car_03 = 0;
        _move_fly_car_04 = 0;
        break;

    case 'z':
        //if (showfire) {
            zoom_to_fire = !zoom_to_fire;
       // }
    }

    glutPostRedisplay();
}


void fire_animation(int value) {
    if (showfire) {
        countfire++;
    }

    if (countfire > 20) {
        vanishfire--;
    }

    if (vanishfire == 5) {
        is_fly_car = true;
        //showfire = false;
        _move_fly_car_01 = 0;
        _move_fly_car_02 = 0;
        _move_fly_car_03 = 0;
        _move_fly_car_04 = 0;
    }


    //cout << vanishfire << endl;

    glutPostRedisplay();
    glutTimerFunc(1000, fire_animation, 0);

}

// ID - 58
void smoke_fire_all() {
    //LEFT SIDE SMOKE
    glPushMatrix();
    glTranslatef(0, 5, 0);

    fire_smoke();


    glPushMatrix();
    glTranslatef(0, -5, 0);

    glScalef(0.7, 0.7, 0);
    glTranslatef(46, 30, 0);
    fire_smoke();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0, -5 - 5, 0);

    glScalef(0.5, 0.5, 0);
    glTranslatef(46 + 61, 30 + 40, 0);
    fire_smoke();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0, -5 - 5 - 5, 0);

    glScalef(0.3, 0.3, 0);
    glTranslatef(46 + 61 + 143, 30 + 40 + 100, 0);
    fire_smoke();
    glPopMatrix();//LEFT SIDE SMOKE ENDS HERE


    //MIDDLE FIRE SOMKE
    glPushMatrix();
    glTranslatef(5, 0, 0);

    fire_smoke();


    glPushMatrix();
    glTranslatef(0, -5, 0);

    glScalef(0.7, 0.7, 0);
    glTranslatef(46, 30, 0);
    fire_smoke();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0, -5 - 5, 0);

    glScalef(0.5, 0.5, 0);
    glTranslatef(46 + 61, 30 + 40, 0);
    fire_smoke();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0, -5 - 5 - 5, 0);

    glScalef(0.3, 0.3, 0);
    glTranslatef(46 + 61 + 143, 30 + 40 + 100, 0);
    fire_smoke();
    glPopMatrix();

    glPopMatrix(); // RIGHT SIDE SMOKE FIRE END HERE


    //RIGHT SIDE FIRE SMOKE

    glPushMatrix();
    glTranslatef(10, 0, 0);

    fire_smoke();


    glPushMatrix();
    glTranslatef(0, -5, 0);

    glScalef(0.7, 0.7, 0);
    glTranslatef(46, 30, 0);
    fire_smoke();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0, -5 - 5, 0);

    glScalef(0.5, 0.5, 0);
    glTranslatef(46 + 61, 30 + 40, 0);
    fire_smoke();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0, -5 - 5 - 5, 0);

    glScalef(0.3, 0.3, 0);
    glTranslatef(46 + 61 + 143, 30 + 40 + 100, 0);
    fire_smoke();
    glPopMatrix();

    glPopMatrix(); // RIGHT SIDE SMOKE FIRE END HERE

    glPopMatrix();
}

int state_leaf6 = 1;
int state_leaf5 = 1;
int state_leaf4 = 1;
int state_leaf3 = 1;
int state_leaf2 = 1;
int state_leaf1 = 1;

int state_flower_zoom = 1;

void move_jungle_leaf(int valule) {
    switch (state_leaf6) { //top jungle 6
    case 1:
        if (move_jungle_leaf_top6 < 0.5) {
            move_jungle_leaf_top6 += 0.01;
        }
        else {
            state_leaf6 = 2;
        }
        break;
    case 2:
        if (move_jungle_leaf_top6 > -0.5) {
            move_jungle_leaf_top6 -= 0.01;
        }
        else {
            state_leaf6 = 1;
        }
        break;
    }

    switch (state_leaf5) { //top jungle 5
    case 1:
        if (move_jungle_leaf_top5 < 0.5) {
            move_jungle_leaf_top5 += 0.01;
        }
        else {
            state_leaf5 = 2;
        }
        break;
    case 2:
        if (move_jungle_leaf_top5 > -0.5) {
            move_jungle_leaf_top5 -= 0.01;
        }
        else {
            state_leaf5 = 1;
        }
        break;
    }

    switch (state_leaf4) { //top jungle 4
    case 1:
        if (move_jungle_leaf_top4 < 0.5) {
            move_jungle_leaf_top4 += 0.01;
        }
        else {
            state_leaf4 = 2;
        }
        break;
    case 2:
        if (move_jungle_leaf_top4 > -0.5) {
            move_jungle_leaf_top4 -= 0.01;
        }
        else {
            state_leaf4 = 1;
        }
        break;
    }

    switch (state_leaf3) { //top jungle 3
    case 1:
        if (move_jungle_leaf_top3 < 0.5) {
            move_jungle_leaf_top3 += 0.01;
        }
        else {
            state_leaf3 = 2;
        }
        break;
    case 2:
        if (move_jungle_leaf_top3 > -0.5) {
            move_jungle_leaf_top3 -= 0.01;
        }
        else {
            state_leaf3 = 1;
        }
        break;
    }
    switch (state_leaf2) { //top jungle 2
    case 1:
        if (move_jungle_leaf_top2 < 0.5) {
            move_jungle_leaf_top2 += 0.01;
        }
        else {
            state_leaf2 = 2;
        }
        break;
    case 2:
        if (move_jungle_leaf_top2 > -0.5) {
            move_jungle_leaf_top2 -= 0.01;
        }
        else {
            state_leaf2 = 1;
        }
        break;
    }

    switch (state_leaf1) { //top jungle 1(MOST LOWER)
    case 1:
        if (move_jungle_leaf_top1 < 0.5) {
            move_jungle_leaf_top1 += 0.01;
        }
        else {
            state_leaf1 = 2;
        }
        break;
    case 2:
        if (move_jungle_leaf_top1 > -0.5) {
            move_jungle_leaf_top1 -= 0.01;
        }
        else {
            state_leaf1 = 1;
        }
        break;
    }

    switch (state_flower_zoom) { //FOR FLOWER ZOOM IN AND ZOOM OUT
    case 1:
        if (zoom_flower < 1.3) {
            zoom_flower += 0.004;
        }
        else {
            state_flower_zoom = 2;
        }
        break;
    case 2:
        if (zoom_flower > 1) {
            zoom_flower -= 0.004;
        }
        else {
            state_flower_zoom = 1;
        }
        break;
    }

    glutPostRedisplay;
    glutTimerFunc(20, move_jungle_leaf, 0);
}

//ID - 56
void fire_show() {
    //first fire shape
    if (showfire) {

        if (countfire > 1 && vanishfire > 15)
            fire();

        //NOW PRINTING REST OF THE FIRE SHAPE
        if (countfire > 3 && vanishfire > 15) {
            glPushMatrix();
            glTranslatef(-5, 0, 0);
            fire();
            glPopMatrix();
        }

        if (countfire > 5 && vanishfire > 15) {

            glPushMatrix();
            glTranslatef(-10, 0, 0);
            fire();
            glPopMatrix();
        }



        glPushMatrix();
        glTranslatef(0, 6, 0);
        if (countfire > 7 && vanishfire > 17) {
            fire();

        }


        if (countfire > 9 && vanishfire > 17) {

            glPushMatrix();
            glTranslatef(-5, 0, 0);
            fire();
            glPopMatrix();
        }
        if (countfire > 11 && vanishfire > 17) {

            glPushMatrix();
            glTranslatef(-10, 0, 0);
            fire();
            glPopMatrix();
        }

        glPopMatrix();


        glPushMatrix();
        glTranslatef(0, -6, 0);
        if (countfire > 13 && vanishfire > 13) {
            fire();

        }


        if (countfire > 14 && vanishfire > 13) {

            glPushMatrix();
            glTranslatef(-5, 0, 0);
            fire();
            glPopMatrix();
        }
        if (countfire > 15 && vanishfire > 13) {

            glPushMatrix();
            glTranslatef(-10, 0, 0);
            fire();
            glPopMatrix();
        }

        glPopMatrix();


        glPushMatrix();
        glTranslatef(0, -12, 0);
        if (countfire > 16 && vanishfire > 11) {
            fire();

        }


        if (countfire > 16 && vanishfire > 11) {

            glPushMatrix();
            glTranslatef(-5, 0, 0);
            fire();
            glPopMatrix();
        }
        if (countfire > 16 && vanishfire > 11) {

            glPushMatrix();
            glTranslatef(-10, 0, 0);
            fire();
            glPopMatrix();
        }

        glPopMatrix();



        glPushMatrix();
        glTranslatef(0, -18, 0);
        if (countfire > 17 && vanishfire > 9) {
            fire();

        }


        if (countfire > 17 && vanishfire > 9) {

            glPushMatrix();
            glTranslatef(-5, 0, 0);
            fire();
            glPopMatrix();
        }
        if (countfire > 17 && vanishfire > 9) {

            glPushMatrix();
            glTranslatef(-10, 0, 0);
            fire();
            glPopMatrix();
        }

        glPopMatrix();

    }
}


void display() {

    // glClearColor(0.46, 0.72, 0.83, 1.0f); // Set background color to black and opaque
    glClearColor(1, 1, 1, 1.0f); // Set background color to black and opaque
    glClear(GL_COLOR_BUFFER_BIT);

    //THIS PUSHPOP IS FOR ZOOM TO FIRE AND HELICOPTER

    glPushMatrix();
    glTranslatef(120.4870418412767, 74.2708555062664, 0);
    glScalef(zoom_fire_value, zoom_fire_value, 1);
    glTranslatef(-120.4870418412767, -74.2708555062664, 0);


    glPushMatrix();
    glTranslatef(0, -3, 0);
    sky();  //ID - 28

    //Five birds flying
    glPushMatrix();
    glScalef(0.5, 0.5, 1);
    glTranslatef(0, 90, 0);
    bird01(); //ID - 33
    bird02(); //ID - 34
    bird03(); //ID - 35
    bird04(); //ID - 36
    bird05(); // ID - 37
    glPopMatrix();

    //trees
    trees_back_tree01(); // ID - 47
    tree_04(); // ID - 41
    tree_03(); // ID - 40

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

    if (countfire > 12 && vanishfire > 11) {
        glPushMatrix();
        glTranslatef(0, -3, 0);
        smoke_fire_all(); // ID - 58
        glPopMatrix();
    }


    fire_show(); // ID - 56

    glPushMatrix();
    glTranslatef(0, -3, 0);


    building_10(); // ID - 26

    //TRANSLATING THE FIRST TREE FROM LEFT TO -Y AXIS SO THAT IT DOESN'T COVER THE FIRST BUILDING SO MUCH
    glPushMatrix();
    glTranslated(-7, 0, 0);
    tree_01(); // ID - 38
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-23, -5, 0);
    glScalef(1.3, 1.3, 0);
    tree_02(); // ID - 39
    glPopMatrix();


    tree_05(); // ID - 42
    tree_06(); // ID - 43
    tree_07(); // ID - 44
    tree_08(); // ID - 45
    tree_09(); // ID - 46

    //upper area of road
    upper_road_area(); // ID - 48


    glPopMatrix();



    if (countfire > 18 && vanishfire > 7)
        //if (_movehelicopter == -50)
        drawRain(); // ID - 60


    //TRANSLATING THE TRAIN, TRAIN PLATFORM, ROAD, POND IN -7 VALUE IN Y AXIS
    glPushMatrix();
    glTranslatef(0, -7, 0);


    // ApplyTexture(75, 0, 75, 10, 55, 10, 55, 0, textures[0].textureID);

    train_platform();; // ID - 09
    train_piller01(); // ID - 10
    train_piller02(); // ID - 11
    train_piller03(); // ID - 12
    train_piller04(); // ID - 13



    //This push_pop matrix is for the train movement animation
    // glPushMatrix();

     // glTranslatef(80, 0, 0);
     // glTranslatef(_movetrain, 0, 0);
    train01(); // ID - 14
    train02(); // ID - 15
    train03(); // ID - 16
    //glPopMatrix();

    road(); // ID - 06

    eco_car02(); // ID - 50
    eco_car04(); // ID - 52
    cybertruck_01(); // ID - 49
    auto_motorcycle03(); // ID - 51


    left_pond_upper(); // ID - 53
    left_pond(); // ID - 01
    ciecle();// ID - 08
    front_road(); // ID - 02
    poll_first(); // ID - 04
    poll_second(); // ID - 05
    side_green_area(); // ID - 03

    //FLOWERS
    glPushMatrix();
    // glTranslatef(-130, -4.3, 0);
    // glScalef(2, 2, 1);
    glTranslatef(-156, -5.4, 0);
    glScalef(2.2, 2.2, 1);
    flowers_right_grass(); // ID - 54
    glPopMatrix();




    glPopMatrix();


    glPushMatrix();

    glScalef(0.5, 0.5, 1);
    glTranslatef(165, 75, 0);
    glTranslatef(_movehelicopter, 0, 0);
    helicopter(); // ID - 55

    glPopMatrix();



    if (is_fly_car) {
        flying_car_01(); // ID - 29
        flying_car_02(); // ID - 30
        flying_car_03(); // ID - 31
        flying_car_04(); // ID - 32
    }

    glPopMatrix();


    glFlush(); // Render now

    glutSwapBuffers();



}

/* Main function: GLUT runs as a console application starting at main() */

int main(int argc, char** argv) {

    glutInitWindowSize(1420, 920); // Set the window's initial width & height
    glutInit(&argc, argv); // Initialize GLUT
    glutInitWindowPosition((glutGet(GLUT_SCREEN_WIDTH) - 1420) / 2,
        (glutGet(GLUT_SCREEN_HEIGHT) - 950) / 2);

    glutCreateWindow("Futureistic city"); // Create a window with the given title
    init();
    //glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // Set background color to black and opaque


   loadImageAndStore((imagesFolderPath + "grass.bmp").c_str());
   loadImageAndStore((imagesFolderPath + "road_new.bmp").c_str());
   loadImageAndStore((imagesFolderPath + "sky05.bmp").c_str());
   loadImageAndStore((imagesFolderPath + "building_11.bmp").c_str());
   loadImageAndStore((imagesFolderPath + "front_road.bmp").c_str());


    /*loadImageAndStore("E:/SPRING 23-24/COMPUTER GRAPHICS/Computer-Graphics-main/OpenGL Programming/grass.bmp");
    loadImageAndStore("E:/SPRING 23-24/COMPUTER GRAPHICS/Computer-Graphics-main/OpenGL Programming/road_new.bmp");
   //loadImageAndStore("E:/SPRING 23-24/COMPUTER GRAPHICS/Computer-Graphics-main/OpenGL Programming/sky05.bmp");
    loadImageAndStore("E:/SPRING 23-24/COMPUTER GRAPHICS/Computer-Graphics-main/OpenGL Programming/building_11.bmp");
    loadImageAndStore("E:/SPRING 23-24/COMPUTER GRAPHICS/Computer-Graphics-main/OpenGL Programming/front_road.bmp");*/


    glutDisplayFunc(display); // Register display callback handler for window re-paint

     glutTimerFunc(20, change_wing, 0); // ID - 61
    glutTimerFunc(80, fly, 0); // ID - 62
    glutTimerFunc(20, _move_train, 0); // ID - 63
    glutTimerFunc(150, wave_fire, 0);  // ID - 64
    glutTimerFunc(20, zoom_fire, 0); // ID - 65
    glutTimerFunc(1000, fire_animation, 0); // ID - 66
    glutTimerFunc(20, rotate_fan1, 0); // ID - 67
    glutTimerFunc(20, move_helicopter, 0); // ID - 68
    glutTimerFunc(10, update, 0); // ID - 69
    glutTimerFunc(20, move_flying_car, 0); // ID - 90
    glutTimerFunc(20, move_fire_smoke, 0); // ID - 71
    glutTimerFunc(20, move_jungle_leaf, 0); // ID - 72
    glutTimerFunc(20, move_cars, 0); // ID - 73
    glutTimerFunc(20, zoom_to_fire_animation, 0); // ID - 74

    glutKeyboardUpFunc(_move_train_keypress); // ID - 75


    gluOrtho2D(0, +130, 0, 80);
    glutMainLoop(); // Enter the event-processing loop

    return 0;

}

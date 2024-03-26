//Computer Graphics ; Fall-2023-2024
//Section - C
//Group Number - 5
//Group Members -
//KHONDOKER MD. SABIT HASAN [21-45306-2]
//LAMIA ISLAM [22-46627-1]
//ISMATH ZERIN [22-46634-1
#include <bits/stdc++.h>
#include<GL/gl.h>
#include <GL/glut.h>
#include<windows.h>
#include<cstdio>
using namespace std;

bool dayNight = true;
void getColor(string col){
    //day
    if(dayNight){
        if(col == "backBuilding") glColor3ub (106, 77, 143);
        else if(col == "backBuildingShadeDark") glColor3ub (86, 60, 121);
        else if(col == "backBuildingShadeLight") glColor3ub (114, 88, 149);
        else if(col == "background") glColor3ub (234, 177, 230);
        else if(col == "backBackBuilding") glColor3ub (192, 151, 217);
        else if(col == "frontBuilding") glColor3ub (72, 46, 107);
        else if(col == "frontBuildingShade") glColor3ub (88, 64, 122);
        else if(col == "frontBuildingWindowClose") glColor3ub (55, 32, 86);
        else if(col == "frontBuildingWindowOpen") glColor3ub (201, 172, 200);
        else if(col == "frontBuildingWindowShade") glColor3ub (98, 54, 152);
        else if(col == "frontBuildingWindowCurtain") glColor3ub (137, 98, 190);
        else if(col == "whiteLight") glColor3ub (253, 255, 254);
        else if(col == "redLight") glColor3ub (218, 71, 7);
        else if(col == "bridge") glColor3ub (33, 30, 37);
        else if(col == "bridgeShade") glColor3ub (48, 45, 53);
        else if(col == "railingShade") glColor3ub (43, 40, 48);
        else if(col == "bench") glColor3ub (70, 32, 1);
        else if(col == "trainBody") glColor3ub (46, 60, 80);
        else if(col == "trainTop") glColor3ub (77, 91, 108);
        else if(col == "trainGlass") glColor3ub (164, 128, 192);
        else if(col == "trainGlassWhite") glColor3ub (210, 203, 220);
        else if(col == "trainStripeLight") glColor3ub (89, 60, 105);
        else if(col == "trainStripeDark") glColor3ub (33, 42, 57);
        else if(col == "sun") glColor3ub (241, 165, 160);
        else if(col == "cloud") glColor3ub (180, 188, 193);
        else if(col == "water") glColor3ub (202, 212, 222);
        else if(col == "reflectionDark") glColor3ub (113, 134, 151);
        else if(col == "reflectionLight") glColor3ub (169, 190, 199);
        else if(col == "reflectionWhite") glColor3ub (243, 245, 244);
        else if(col == "carBody_1") glColor3ub (35, 26, 47);
        else if(col == "carBody_2") glColor3ub (178, 173, 9);
        else if(col == "carWheel") glColor3ub (34, 28, 42);
        else if(col == "carYellowLight") glColor3ub (255, 246, 3);
        else if(col == "carRedLight") glColor3ub (173, 51, 10);
        else{
            cout<<"INVALID COLOR CODE: "<<col<<"\n";
            glColor3ub (0,0,0);
        }
    }
    //night
    else{
        if(col == "backBuilding") glColor3ub (101, 101, 101);
        else if(col == "backBuildingShadeDark") glColor3ub (73, 73, 73);
        else if(col == "backBuildingShadeLight") glColor3ub (113, 113, 113);
        else if(col == "background") glColor3ub (228, 228, 228);
        else if(col == "backBackBuilding") glColor3ub (211, 211, 211);
        else if(col == "frontBuilding") glColor3ub (54, 54, 54);
        else if(col == "frontBuildingShade") glColor3ub (78, 78, 78);
        else if(col == "frontBuildingWindowClose") glColor3ub (30, 30, 30);
        else if(col == "frontBuildingWindowOpen") glColor3ub (255, 255, 255);
        else if(col == "frontBuildingWindowShade") glColor3ub (129, 129, 129);
        else if(col == "frontBuildingWindowCurtain") glColor3ub (148, 148, 148);
        else if(col == "whiteLight") glColor3ub (255, 255, 0);
        else if(col == "redLight") glColor3ub (255, 0, 0);
        else if(col == "bridge") glColor3ub (0, 0, 0);
        else if(col == "bridgeShade") glColor3ub (16, 16, 16);
        else if(col == "railingShade") glColor3ub (11, 11, 11);
        else if(col == "bench") glColor3ub (0, 0, 0);
        else if(col == "trainBody") glColor3ub (36, 36, 36);
        else if(col == "trainTop") glColor3ub (77, 77, 77);
        else if(col == "trainGlass") glColor3ub (234, 234, 234);
        else if(col == "trainGlassWhite") glColor3ub (255, 255, 255);
        else if(col == "trainStripeLight") glColor3ub (66, 66, 66);
        else if(col == "trainStripeDark") glColor3ub (9, 9, 9);
        else if(col == "sun") glColor3ub (199, 198, 167);
        else if(col == "cloud") glColor3ub (211, 211, 211);
        else if(col == "water") glColor3ub (84, 84, 84);
        else if(col == "reflectionDark") glColor3ub (30, 30, 30);
        else if(col == "reflectionLight") glColor3ub (46, 46, 46);
        else if(col == "reflectionWhite") glColor3ub (133, 135, 134);
        else if(col == "carBody_1") glColor3ub (35, 26, 47);
        else if(col == "carBody_2") glColor3ub (178, 173, 9);
        else if(col == "carWheel") glColor3ub (34, 28, 42);
        else if(col == "carYellowLight") glColor3ub (255, 246, 3);
        else if(col == "carRedLight") glColor3ub (173, 51, 10);
        else{
            cout<<"INVALID COLOR CODE: "<<col<<"\n";
            glColor3ub (0,0,0);
        }
    }
}

//animate train
int trainSpeed = 0;
int trainPosition = 2000;

//animate car
int carSpeed = 4;
int carPosition_1 = 2000;
int carPosition_2 = -2000;

//animate cloud
int cloudSpeed = 3;
int cloudPosition = 1080;

//animate reflection
float evenReflectionChange = 0.1;
float evenReflectionPosition = 0;

float oddReflectionChange = -0.1;
float oddReflectionPosition = 0;

void update(int val){
    //animate train
    if(trainPosition <= -2000)
        trainPosition = 2000;
    trainPosition -= trainSpeed;

    //animate car
    if(carPosition_1 <= -2000)
        carPosition_1 = 2000;
    carPosition_1 -=carSpeed;

    if(carPosition_2 >= 2000)
        carPosition_2 = -2000;
    carPosition_2 +=carSpeed;

    //animate cloud
    if(cloudPosition <= -2000)
        cloudPosition = 1080;
    cloudPosition -= cloudSpeed;

    //animate reflection
    //even lines
    if(evenReflectionPosition >= 7.0)
        evenReflectionChange = -0.1;
    else if(evenReflectionPosition <= -10.0)
        evenReflectionChange = 0.1;

    evenReflectionPosition += evenReflectionChange;

    //odd lines
    if(oddReflectionPosition >= 7.0)
        oddReflectionChange = -0.1;
    else if(oddReflectionPosition <= -10.0)
        oddReflectionChange = 0.1;

    oddReflectionPosition += oddReflectionChange;

    glutPostRedisplay();
    glutTimerFunc(10, update,0);
}

//Background
void backGround()
{
    getColor("background");
    glBegin(GL_QUADS);
        glVertex2f(0,0);
        glVertex2f(1920,0);
        glVertex2f(1920,1080);
        glVertex2f(0,1080);
    glEnd();
}

//Back Back Building 1
void backBackBuilding_1()
{
    getColor("backBackBuilding");
    glBegin(GL_QUADS);
        glVertex2f(275,935);
        glVertex2f(275,995);
        glVertex2f(315,995);
        glVertex2f(315,935);
    glEnd();
}

//Back Back Building 2
void backBackBuilding_2()
{
    getColor("backBackBuilding");
    glBegin(GL_QUADS);
        glVertex2f(590,655);
        glVertex2f(590,810);
        glVertex2f(655,810);
        glVertex2f(655,655);
    glEnd();
}

//Back Back Building 3
void backBackBuilding_3()
{
    getColor("backBackBuilding");
    glBegin(GL_QUADS);
        glVertex2f(1295,1048);
        glVertex2f(1510,1048);
        glVertex2f(1510,842);
        glVertex2f(1295,842);
    glEnd();
}

//Back Building 1
void backBuilding_1()
{
    getColor("backBuilding");
    glBegin(GL_QUADS);
        glVertex2f(0,410);
        glVertex2f(0,1033);
        glVertex2f(235,1033);
        glVertex2f(235,410);
    glEnd();
//lower
    getColor("background");
    glBegin(GL_QUADS);
        glVertex2f(220,1010);
        glVertex2f(220,1017);
        glVertex2f(227,1017);
        glVertex2f(227,1010);
    glEnd();

    getColor("background");
    glBegin(GL_QUADS);
        glVertex2f(206,1010);
        glVertex2f(206,1017);
        glVertex2f(213,1017);
        glVertex2f(213,1010);
    glEnd();

    getColor("background");
    glBegin(GL_QUADS);
        glVertex2f(192,1010);
        glVertex2f(192,1017);
        glVertex2f(199,1017);
        glVertex2f(199,1010);
    glEnd();

    getColor("background");
    glBegin(GL_QUADS);
        glVertex2f(178,1010);
        glVertex2f(178,1017);
        glVertex2f(185,1017);
        glVertex2f(185,1010);
    glEnd();

    getColor("background");
    glBegin(GL_QUADS);
        glVertex2f(164,1010);
        glVertex2f(164,1017);
        glVertex2f(171,1017);
        glVertex2f(171,1010);
    glEnd();

    getColor("background");
    glBegin(GL_QUADS);
        glVertex2f(150,1010);
        glVertex2f(150,1017);
        glVertex2f(157,1017);
        glVertex2f(157,1010);
    glEnd();

    getColor("background");
    glBegin(GL_QUADS);
        glVertex2f(136,1010);
        glVertex2f(136,1017);
        glVertex2f(143,1017);
        glVertex2f(143,1010);
    glEnd();

    getColor("background");
    glBegin(GL_QUADS);
        glVertex2f(122,1010);
        glVertex2f(122,1017);
        glVertex2f(129,1017);
        glVertex2f(129,1010);
    glEnd();

    getColor("background");
    glBegin(GL_QUADS);
        glVertex2f(108,1010);
        glVertex2f(108,1017);
        glVertex2f(115,1017);
        glVertex2f(115,1010);
    glEnd();

    getColor("background");
    glBegin(GL_QUADS);
        glVertex2f(94,1010);
        glVertex2f(94,1017);
        glVertex2f(101,1017);
        glVertex2f(101,1010);
    glEnd();

    getColor("background");
    glBegin(GL_QUADS);
        glVertex2f(80,1010);
        glVertex2f(80,1017);
        glVertex2f(87,1017);
        glVertex2f(87,1010);
    glEnd();

    getColor("background");
    glBegin(GL_QUADS);
        glVertex2f(66,1010);
        glVertex2f(66,1017);
        glVertex2f(73,1017);
        glVertex2f(73,1010);
    glEnd();

    getColor("background");
    glBegin(GL_QUADS);
        glVertex2f(52,1010);
        glVertex2f(52,1017);
        glVertex2f(59,1017);
        glVertex2f(59,1010);
    glEnd();

    getColor("background");
    glBegin(GL_QUADS);
        glVertex2f(38,1010);
        glVertex2f(38,1017);
        glVertex2f(45,1017);
        glVertex2f(45,1010);
    glEnd();

    getColor("background");
    glBegin(GL_QUADS);
        glVertex2f(24,1010);
        glVertex2f(24,1017);
        glVertex2f(31,1017);
        glVertex2f(31,1010);
    glEnd();

    getColor("background");
    glBegin(GL_QUADS);
        glVertex2f(10,1010);
        glVertex2f(10,1017);
        glVertex2f(17,1017);
        glVertex2f(17,1010);
    glEnd();

    getColor("background");
    glBegin(GL_QUADS);
        glVertex2f(0,1010);
        glVertex2f(0,1017);
        glVertex2f(3,1017);
        glVertex2f(3,1010);
    glEnd();
//higher
    getColor("background");
    glBegin(GL_QUADS);
        glVertex2f(213,1017);
        glVertex2f(213,1024);
        glVertex2f(220,1024);
        glVertex2f(220,1017);
    glEnd();

    getColor("background");
    glBegin(GL_QUADS);
        glVertex2f(199,1017);
        glVertex2f(199,1024);
        glVertex2f(206,1024);
        glVertex2f(206,1017);
    glEnd();

    getColor("background");
    glBegin(GL_QUADS);
        glVertex2f(185,1017);
        glVertex2f(185,1024);
        glVertex2f(192,1024);
        glVertex2f(192,1017);
    glEnd();

    getColor("background");
    glBegin(GL_QUADS);
        glVertex2f(171,1017);
        glVertex2f(171,1024);
        glVertex2f(178,1024);
        glVertex2f(178,1017);
    glEnd();

    getColor("background");
    glBegin(GL_QUADS);
        glVertex2f(157,1017);
        glVertex2f(157,1024);
        glVertex2f(164,1024);
        glVertex2f(164,1017);
    glEnd();

    getColor("background");
    glBegin(GL_QUADS);
        glVertex2f(143,1017);
        glVertex2f(143,1024);
        glVertex2f(150,1024);
        glVertex2f(150,1017);
    glEnd();

    getColor("background");
    glBegin(GL_QUADS);
        glVertex2f(129,1017);
        glVertex2f(129,1024);
        glVertex2f(136,1024);
        glVertex2f(136,1017);
    glEnd();

    getColor("background");
    glBegin(GL_QUADS);
        glVertex2f(115,1017);
        glVertex2f(115,1024);
        glVertex2f(122,1024);
        glVertex2f(122,1017);
    glEnd();

    getColor("background");
    glBegin(GL_QUADS);
        glVertex2f(101,1017);
        glVertex2f(101,1024);
        glVertex2f(108,1024);
        glVertex2f(108,1017);
    glEnd();

    getColor("background");
    glBegin(GL_QUADS);
        glVertex2f(87,1017);
        glVertex2f(87,1024);
        glVertex2f(94,1024);
        glVertex2f(94,1017);
    glEnd();

    getColor("background");
    glBegin(GL_QUADS);
        glVertex2f(73,1017);
        glVertex2f(73,1024);
        glVertex2f(80,1024);
        glVertex2f(80,1017);
    glEnd();

    getColor("background");
    glBegin(GL_QUADS);
        glVertex2f(59,1017);
        glVertex2f(59,1024);
        glVertex2f(66,1024);
        glVertex2f(66,1017);
    glEnd();

    getColor("background");
    glBegin(GL_QUADS);
        glVertex2f(45,1017);
        glVertex2f(45,1024);
        glVertex2f(52,1024);
        glVertex2f(52,1017);
    glEnd();

    getColor("background");
    glBegin(GL_QUADS);
        glVertex2f(31,1017);
        glVertex2f(31,1024);
        glVertex2f(38,1024);
        glVertex2f(38,1017);
    glEnd();

    getColor("background");
    glBegin(GL_QUADS);
        glVertex2f(17,1017);
        glVertex2f(17,1024);
        glVertex2f(24,1024);
        glVertex2f(24,1017);
    glEnd();

    getColor("background");
    glBegin(GL_QUADS);
        glVertex2f(3,1017);
        glVertex2f(3,1024);
        glVertex2f(10,1024);
        glVertex2f(10,1017);
    glEnd();
}

//Back Building 2
void backBuilding_2()
{
    getColor("backBuildingShadeDark");
    glBegin(GL_QUADS);
        glVertex2f(304,1042);
        glVertex2f(550,1042);
        glVertex2f(550,1034);
        glVertex2f(304,1034);
    glEnd();

    getColor("backBuilding");
    glBegin(GL_QUADS);
        glVertex2f(312,1034);
        glVertex2f(542,1034);
        glVertex2f(542,650);
        glVertex2f(312,650);
    glEnd();

    getColor("backBuilding");
    glBegin(GL_QUADS);
        glVertex2f(304,1003);
        glVertex2f(312,1003);
        glVertex2f(312,980);
        glVertex2f(304,980);
    glEnd();

    getColor("backBuilding");
    glBegin(GL_QUADS);
        glVertex2f(550,1003);
        glVertex2f(558,1003);
        glVertex2f(558,980);
        glVertex2f(550,980);
    glEnd();

    getColor("backBuilding");
    glBegin(GL_QUADS);
        glVertex2f(543,1011);
        glVertex2f(550,1011);
        glVertex2f(550,980);
        glVertex2f(543,980);
    glEnd();

    getColor("backBuilding");
    glBegin(GL_QUADS);
        glVertex2f(558,996);
        glVertex2f(565,996);
        glVertex2f(565,973);
        glVertex2f(558,973);
    glEnd();

    getColor("backBuilding");
    glBegin(GL_QUADS);
        glVertex2f(565,988);
        glVertex2f(572,988);
        glVertex2f(572,980);
        glVertex2f(565,980);
    glEnd();

    getColor("backBuilding");
    glBegin(GL_QUADS);
        glVertex2f(550,973);
        glVertex2f(558,973);
        glVertex2f(558,965);
        glVertex2f(550,965);
    glEnd();

    getColor("backBuilding");
    glBegin(GL_QUADS);
        glVertex2f(542,965);
        glVertex2f(550,965);
        glVertex2f(550,957);
        glVertex2f(542,957);
    glEnd();

    getColor("backBuilding");
    glBegin(GL_QUADS);
        glVertex2f(542,920);
        glVertex2f(550,920);
        glVertex2f(550,896);
        glVertex2f(542,896);
    glEnd();

    getColor("backBuilding");
    glBegin(GL_QUADS);
        glVertex2f(542,843);
        glVertex2f(550,843);
        glVertex2f(550,812);
        glVertex2f(542,812);
    glEnd();

    getColor("backBuilding");
    glBegin(GL_QUADS);
        glVertex2f(550,835);
        glVertex2f(558,835);
        glVertex2f(558,812);
        glVertex2f(550,812);
    glEnd();

    getColor("backBuilding");
    glBegin(GL_QUADS);
        glVertex2f(558,827);
        glVertex2f(565,827);
        glVertex2f(565,805);
        glVertex2f(558,805);
    glEnd();

    getColor("backBuilding");
    glBegin(GL_QUADS);
        glVertex2f(565,820);
        glVertex2f(572,820);
        glVertex2f(572,812);
        glVertex2f(565,812);
    glEnd();

    getColor("backBuilding");
    glBegin(GL_QUADS);
        glVertex2f(550,805);
        glVertex2f(558,805);
        glVertex2f(558,797);
        glVertex2f(550,797);
    glEnd();

    getColor("backBuilding");
    glBegin(GL_QUADS);
        glVertex2f(542,797);
        glVertex2f(550,797);
        glVertex2f(550,789);
        glVertex2f(542,789);
    glEnd();

    getColor("backBuilding");
    glBegin(GL_QUADS);
        glVertex2f(542,728);
        glVertex2f(550,728);
        glVertex2f(550,720);
        glVertex2f(542,720);
    glEnd();
}

//Back Building 3
void backBuilding_3()
{
    getColor("backBuildingShadeDark");
    glBegin(GL_QUADS);
        glVertex2f(697,911);
        glVertex2f(697,942);
        glVertex2f(736,942);
        glVertex2f(736,911);
    glEnd();

    getColor("backBuilding");
    glBegin(GL_QUADS);
        glVertex2f(643,904);
        glVertex2f(643,911);
        glVertex2f(865,911);
        glVertex2f(865,904);
    glEnd();

    getColor("backBuildingShadeDark");
    glBegin(GL_QUADS);
        glVertex2f(643,896);
        glVertex2f(643,904);
        glVertex2f(865,904);
        glVertex2f(865,896);
    glEnd();
//1st
    getColor("backBuilding");
    glBegin(GL_QUADS);
        glVertex2f(650,880);
        glVertex2f(650,896);
        glVertex2f(858,896);
        glVertex2f(858,880);
    glEnd();
//2nd
    getColor("backBuilding");
    glBegin(GL_QUADS);
        glVertex2f(643,843);
        glVertex2f(643,880);
        glVertex2f(865,880);
        glVertex2f(865,843);
    glEnd();
//3rd
    getColor("backBuilding");
    glBegin(GL_QUADS);
        glVertex2f(650,827);
        glVertex2f(650,843);
        glVertex2f(858,843);
        glVertex2f(858,827);
    glEnd();
//4th
    getColor("backBuilding");
    glBegin(GL_QUADS);
        glVertex2f(643,790);
        glVertex2f(643,827);
        glVertex2f(865,827);
        glVertex2f(865,790);
    glEnd();
//5th
    getColor("backBuilding");
    glBegin(GL_QUADS);
        glVertex2f(650,774);
        glVertex2f(650,790);
        glVertex2f(858,790);
        glVertex2f(858,774);
    glEnd();
//6th
    getColor("backBuilding");
    glBegin(GL_QUADS);
        glVertex2f(643,737);
        glVertex2f(643,774);
        glVertex2f(865,774);
        glVertex2f(865,737);
    glEnd();
//7th
    getColor("backBuilding");
    glBegin(GL_QUADS);
        glVertex2f(650,721);
        glVertex2f(650,737);
        glVertex2f(858,737);
        glVertex2f(858,721);
    glEnd();
//8th
    getColor("backBuilding");
    glBegin(GL_QUADS);
        glVertex2f(643,684);
        glVertex2f(643,721);
        glVertex2f(865,721);
        glVertex2f(865,684);
    glEnd();
//9th
    getColor("backBuilding");
    glBegin(GL_QUADS);
        glVertex2f(650,668);
        glVertex2f(650,684);
        glVertex2f(858,684);
        glVertex2f(858,668);
    glEnd();
//10th
    getColor("backBuilding");
    glBegin(GL_QUADS);
        glVertex2f(643,631);
        glVertex2f(643,668);
        glVertex2f(865,668);
        glVertex2f(865,631);
    glEnd();
//11th
    getColor("backBuilding");
    glBegin(GL_QUADS);
        glVertex2f(650,615);
        glVertex2f(650,631);
        glVertex2f(858,631);
        glVertex2f(858,615);
    glEnd();
//12th
    getColor("backBuilding");
    glBegin(GL_QUADS);
        glVertex2f(643,578);
        glVertex2f(643,615);
        glVertex2f(865,615);
        glVertex2f(865,578);
    glEnd();
//13th
    getColor("backBuilding");
    glBegin(GL_QUADS);
        glVertex2f(650,562);
        glVertex2f(650,578);
        glVertex2f(858,578);
        glVertex2f(858,562);
    glEnd();
//14th
    getColor("backBuilding");
    glBegin(GL_QUADS);
        glVertex2f(643,525);
        glVertex2f(643,562);
        glVertex2f(865,562);
        glVertex2f(865,525);
    glEnd();
//15th
    getColor("backBuilding");
    glBegin(GL_QUADS);
        glVertex2f(650,509);
        glVertex2f(650,525);
        glVertex2f(858,525);
        glVertex2f(858,509);
    glEnd();
//16th
    getColor("backBuilding");
    glBegin(GL_QUADS);
        glVertex2f(643,472);
        glVertex2f(643,509);
        glVertex2f(865,509);
        glVertex2f(865,472);
    glEnd();
//17th
    getColor("backBuilding");
    glBegin(GL_QUADS);
        glVertex2f(650,456);
        glVertex2f(650,472);
        glVertex2f(858,472);
        glVertex2f(858,456);
    glEnd();
//18th
    getColor("backBuilding");
    glBegin(GL_QUADS);
        glVertex2f(643,419);
        glVertex2f(643,456);
        glVertex2f(865,456);
        glVertex2f(865,419);
    glEnd();
//19th
    getColor("backBuilding");
    glBegin(GL_QUADS);
        glVertex2f(650,403);
        glVertex2f(650,419);
        glVertex2f(858,419);
        glVertex2f(858,403);
    glEnd();
//20th
    getColor("backBuilding");
    glBegin(GL_QUADS);
        glVertex2f(643,366);
        glVertex2f(643,403);
        glVertex2f(865,403);
        glVertex2f(865,366);
    glEnd();
//21st
    getColor("backBuilding");
    glBegin(GL_QUADS);
        glVertex2f(650,350);
        glVertex2f(650,366);
        glVertex2f(858,366);
        glVertex2f(858,350);
    glEnd();
//22nd
    getColor("backBuilding");
    glBegin(GL_QUADS);
        glVertex2f(643,313);
        glVertex2f(643,350);
        glVertex2f(865,350);
        glVertex2f(865,313);
    glEnd();
//23rd
    getColor("backBuilding");
    glBegin(GL_QUADS);
        glVertex2f(650,297);
        glVertex2f(650,313);
        glVertex2f(858,313);
        glVertex2f(858,297);
    glEnd();
//24th
    getColor("backBuilding");
    glBegin(GL_QUADS);
        glVertex2f(643,260);
        glVertex2f(643,297);
        glVertex2f(865,297);
        glVertex2f(865,260);
    glEnd();
//25th
    getColor("backBuilding");
    glBegin(GL_QUADS);
        glVertex2f(650,244);
        glVertex2f(650,260);
        glVertex2f(858,260);
        glVertex2f(858,244);
    glEnd();
//26th
    getColor("backBuilding");
    glBegin(GL_QUADS);
        glVertex2f(643,207);
        glVertex2f(643,244);
        glVertex2f(865,244);
        glVertex2f(865,207);
    glEnd();
//27th
    getColor("backBuilding");
    glBegin(GL_QUADS);
        glVertex2f(650,191);
        glVertex2f(650,207);
        glVertex2f(858,207);
        glVertex2f(858,191);
    glEnd();
//28th
    getColor("backBuilding");
    glBegin(GL_QUADS);
        glVertex2f(643,154);
        glVertex2f(643,191);
        glVertex2f(865,191);
        glVertex2f(865,154);
    glEnd();
//29th
    getColor("backBuilding");
    glBegin(GL_QUADS);
        glVertex2f(650,138);
        glVertex2f(650,154);
        glVertex2f(858,154);
        glVertex2f(858,138);
    glEnd();
//30th
    getColor("backBuilding");
    glBegin(GL_QUADS);
        glVertex2f(643,125);
        glVertex2f(643,138);
        glVertex2f(865,138);
        glVertex2f(865,125);
    glEnd();
}

//Back Building 4
void backBuilding_4()
{
    getColor("backBuildingShadeLight");
    glBegin(GL_QUADS);
        glVertex2f(1073,942);
        glVertex2f(1272,942);
        glVertex2f(1272,927);
        glVertex2f(1073,927);
    glEnd();

    getColor("backBuildingShadeLight");
    glBegin(GL_QUADS);
        glVertex2f(1080,927);
        glVertex2f(1264,927);
        glVertex2f(1264,920);
        glVertex2f(1080,920);
    glEnd();

    getColor("backBuildingShadeLight");
    glBegin(GL_QUADS);
        glVertex2f(1073,920);
        glVertex2f(1272,920);
        glVertex2f(1272,912);
        glVertex2f(1073,912);
    glEnd();

    getColor("backBuildingShadeLight");
    glBegin(GL_QUADS);
        glVertex2f(1080,912);
        glVertex2f(1264,912);
        glVertex2f(1264,904);
        glVertex2f(1080,904);
    glEnd();

    getColor("backBuildingShadeLight");
    glBegin(GL_QUADS);
        glVertex2f(1073,904);
        glVertex2f(1272,904);
        glVertex2f(1272,889);
        glVertex2f(1073,889);
    glEnd();

    getColor("backBuildingShadeLight");
    glBegin(GL_QUADS);
        glVertex2f(1080,889);
        glVertex2f(1264,889);
        glVertex2f(1264,881);
        glVertex2f(1080,881);
    glEnd();

    getColor("backBuildingShadeLight");
    glBegin(GL_QUADS);
        glVertex2f(1073,881);
        glVertex2f(1272,881);
        glVertex2f(1272,874);
        glVertex2f(1073,874);
    glEnd();

    getColor("backBuildingShadeLight");
    glBegin(GL_QUADS);
        glVertex2f(1080,874);
        glVertex2f(1264,874);
        glVertex2f(1264,865);
        glVertex2f(1080,865);
    glEnd();

    getColor("backBuildingShadeLight");
    glBegin(GL_QUADS);
        glVertex2f(1073,865);
        glVertex2f(1272,865);
        glVertex2f(1272,851);
        glVertex2f(1073,851);
    glEnd();

    getColor("backBuildingShadeLight");
    glBegin(GL_QUADS);
        glVertex2f(1080,851);
        glVertex2f(1264,851);
        glVertex2f(1264,843);
        glVertex2f(1080,843);
    glEnd();

    getColor("backBuildingShadeLight");
    glBegin(GL_QUADS);
        glVertex2f(1073,843);
        glVertex2f(1272,843);
        glVertex2f(1272,835);
        glVertex2f(1073,835);
    glEnd();

    getColor("backBuildingShadeLight");
    glBegin(GL_QUADS);
        glVertex2f(1080,835);
        glVertex2f(1264,835);
        glVertex2f(1264,827);
        glVertex2f(1080,827);
    glEnd();

    getColor("backBuildingShadeLight");
    glBegin(GL_QUADS);
        glVertex2f(1073,827);
        glVertex2f(1272,827);
        glVertex2f(1272,813);
        glVertex2f(1073,813);
    glEnd();

    getColor("backBuildingShadeLight");
    glBegin(GL_QUADS);
        glVertex2f(1080,813);
        glVertex2f(1264,813);
        glVertex2f(1264,804);
        glVertex2f(1080,804);
    glEnd();

    getColor("backBuildingShadeLight");
    glBegin(GL_QUADS);
        glVertex2f(1073,804);
        glVertex2f(1272,804);
        glVertex2f(1272,797);
        glVertex2f(1073,797);
    glEnd();

    getColor("backBuildingShadeLight");
    glBegin(GL_QUADS);
        glVertex2f(1080,797);
        glVertex2f(1264,797);
        glVertex2f(1264,789);
        glVertex2f(1080,789);
    glEnd();

    getColor("backBuildingShadeLight");
    glBegin(GL_QUADS);
        glVertex2f(1073,789);
        glVertex2f(1272,789);
        glVertex2f(1272,774);
        glVertex2f(1073,774);
    glEnd();

    getColor("backBuildingShadeLight");
    glBegin(GL_QUADS);
        glVertex2f(1080,774);
        glVertex2f(1264,774);
        glVertex2f(1264,766);
        glVertex2f(1080,766);
    glEnd();

    getColor("backBuildingShadeLight");
    glBegin(GL_QUADS);
        glVertex2f(1073,766);
        glVertex2f(1272,766);
        glVertex2f(1272,759);
        glVertex2f(1073,759);
    glEnd();

    getColor("backBuildingShadeLight");
    glBegin(GL_QUADS);
        glVertex2f(1080,759);
        glVertex2f(1264,759);
        glVertex2f(1264,751);
        glVertex2f(1080,751);
    glEnd();

    getColor("backBuildingShadeLight");
    glBegin(GL_QUADS);
        glVertex2f(1073,751);
        glVertex2f(1272,751);
        glVertex2f(1272,736);
        glVertex2f(1073,736);
    glEnd();

    getColor("backBuildingShadeLight");
    glBegin(GL_QUADS);
        glVertex2f(1080,736);
        glVertex2f(1264,736);
        glVertex2f(1264,727);
        glVertex2f(1080,727);
    glEnd();

    getColor("backBuildingShadeLight");
    glBegin(GL_QUADS);
        glVertex2f(1073,727);
        glVertex2f(1272,727);
        glVertex2f(1272,720);
        glVertex2f(1073,720);
    glEnd();

    getColor("backBuildingShadeLight");
    glBegin(GL_QUADS);
        glVertex2f(1080,720);
        glVertex2f(1264,720);
        glVertex2f(1264,712);
        glVertex2f(1080,712);
    glEnd();

    getColor("backBuildingShadeLight");
    glBegin(GL_QUADS);
        glVertex2f(1073,712);
        glVertex2f(1272,712);
        glVertex2f(1272,698);
        glVertex2f(1073,698);
    glEnd();

    getColor("backBuildingShadeLight");
    glBegin(GL_QUADS);
        glVertex2f(1080,698);
        glVertex2f(1264,698);
        glVertex2f(1264,689);
        glVertex2f(1080,689);
    glEnd();

    getColor("backBuildingShadeLight");
    glBegin(GL_QUADS);
        glVertex2f(1073,689);
        glVertex2f(1272,689);
        glVertex2f(1272,682);
        glVertex2f(1073,682);
    glEnd();

    getColor("backBuildingShadeLight");
    glBegin(GL_QUADS);
        glVertex2f(1080,682);
        glVertex2f(1264,682);
        glVertex2f(1264,674);
        glVertex2f(1080,674);
    glEnd();

    getColor("backBuildingShadeLight");
    glBegin(GL_QUADS);
        glVertex2f(1073,674);
        glVertex2f(1272,674);
        glVertex2f(1272,659);
        glVertex2f(1073,659);
    glEnd();

    getColor("backBuildingShadeLight");
    glBegin(GL_QUADS);
        glVertex2f(1080,659);
        glVertex2f(1264,659);
        glVertex2f(1264,651);
        glVertex2f(1080,651);
    glEnd();

    getColor("backBuildingShadeLight");
    glBegin(GL_QUADS);
        glVertex2f(1073,651);
        glVertex2f(1272,651);
        glVertex2f(1272,644);
        glVertex2f(1073,644);
    glEnd();

    getColor("backBuildingShadeLight");
    glBegin(GL_QUADS);
        glVertex2f(1080,644);
        glVertex2f(1264,644);
        glVertex2f(1264,636);
        glVertex2f(1080,636);
    glEnd();

    getColor("backBuildingShadeLight");
    glBegin(GL_QUADS);
        glVertex2f(1073,636);
        glVertex2f(1272,636);
        glVertex2f(1272,621);
        glVertex2f(1073,621);
    glEnd();

    getColor("backBuildingShadeLight");
    glBegin(GL_QUADS);
        glVertex2f(1080,621);
        glVertex2f(1264,621);
        glVertex2f(1264,613);
        glVertex2f(1080,613);
    glEnd();

    getColor("backBuildingShadeLight");
    glBegin(GL_QUADS);
        glVertex2f(1073,613);
        glVertex2f(1272,613);
        glVertex2f(1272,605);
        glVertex2f(1073,605);
    glEnd();

    getColor("backBuildingShadeLight");
    glBegin(GL_QUADS);
        glVertex2f(1080,605);
        glVertex2f(1264,605);
        glVertex2f(1264,597);
        glVertex2f(1080,597);
    glEnd();

    getColor("backBuildingShadeLight");
    glBegin(GL_QUADS);
        glVertex2f(1073,597);
        glVertex2f(1272,597);
        glVertex2f(1272,589);
        glVertex2f(1073,589);
    glEnd();

    getColor("backBuildingShadeLight");
    glBegin(GL_QUADS);
        glVertex2f(1080,589);
        glVertex2f(1264,589);
        glVertex2f(1264,574);
        glVertex2f(1080,574);
    glEnd();

    getColor("backBuildingShadeLight");
    glBegin(GL_QUADS);
        glVertex2f(1073,574);
        glVertex2f(1272,574);
        glVertex2f(1272,567);
        glVertex2f(1073,567);
    glEnd();

    getColor("backBuildingShadeLight");
    glBegin(GL_QUADS);
        glVertex2f(1080,567);
        glVertex2f(1264,567);
        glVertex2f(1264,559);
        glVertex2f(1080,559);
    glEnd();

    getColor("backBuildingShadeLight");
    glBegin(GL_QUADS);
        glVertex2f(1073,559);
        glVertex2f(1272,559);
        glVertex2f(1272,545);
        glVertex2f(1073,545);
    glEnd();

    getColor("backBuildingShadeLight");
    glBegin(GL_QUADS);
        glVertex2f(1080,545);
        glVertex2f(1264,545);
        glVertex2f(1264,529);
        glVertex2f(1080,529);
    glEnd();

    getColor("backBuildingShadeLight");
    glBegin(GL_QUADS);
        glVertex2f(1073,529);
        glVertex2f(1272,529);
        glVertex2f(1272,521);
        glVertex2f(1073,521);
    glEnd();

    getColor("backBuildingShadeLight");
    glBegin(GL_QUADS);
        glVertex2f(1080,521);
        glVertex2f(1264,521);
        glVertex2f(1264,284);
        glVertex2f(1080,284);
    glEnd();

    getColor("backBuildingShadeLight");
    glBegin(GL_QUADS);
        glVertex2f(1073,284);
        glVertex2f(1272,284);
        glVertex2f(1272,268);
        glVertex2f(1073,268);
    glEnd();

    getColor("backBuildingShadeLight");
    glBegin(GL_QUADS);
        glVertex2f(1080,268);
        glVertex2f(1264,268);
        glVertex2f(1264,261);
        glVertex2f(1080,261);
    glEnd();

    getColor("backBuildingShadeLight");
    glBegin(GL_QUADS);
        glVertex2f(1073,261);
        glVertex2f(1272,261);
        glVertex2f(1272,254);
        glVertex2f(1073,254);
    glEnd();

    getColor("backBuildingShadeLight");
    glBegin(GL_QUADS);
        glVertex2f(1080,254);
        glVertex2f(1264,254);
        glVertex2f(1264,246);
        glVertex2f(1080,246);
    glEnd();

    getColor("backBuildingShadeLight");
    glBegin(GL_QUADS);
        glVertex2f(1073,246);
        glVertex2f(1272,246);
        glVertex2f(1272,230);
        glVertex2f(1073,230);
    glEnd();

    getColor("backBuildingShadeLight");
    glBegin(GL_QUADS);
        glVertex2f(1080,230);
        glVertex2f(1264,230);
        glVertex2f(1264,223);
        glVertex2f(1080,223);
    glEnd();

    getColor("backBuildingShadeLight");
    glBegin(GL_QUADS);
        glVertex2f(1073,223);
        glVertex2f(1272,223);
        glVertex2f(1272,215);
        glVertex2f(1073,215);
    glEnd();

    getColor("backBuildingShadeLight");
    glBegin(GL_QUADS);
        glVertex2f(1080,215);
        glVertex2f(1264,215);
        glVertex2f(1264,207);
        glVertex2f(1080,207);
    glEnd();

    getColor("backBuildingShadeLight");
    glBegin(GL_QUADS);
        glVertex2f(1073,207);
        glVertex2f(1272,207);
        glVertex2f(1272,200);
        glVertex2f(1073,200);
    glEnd();

    getColor("backBuildingShadeLight");
    glBegin(GL_QUADS);
        glVertex2f(1080,200);
        glVertex2f(1264,200);
        glVertex2f(1264,185);
        glVertex2f(1080,185);
    glEnd();

    getColor("backBuildingShadeLight");
    glBegin(GL_QUADS);
        glVertex2f(1073,185);
        glVertex2f(1272,185);
        glVertex2f(1272,177);
        glVertex2f(1073,177);
    glEnd();

    getColor("backBuildingShadeLight");
    glBegin(GL_QUADS);
        glVertex2f(1080,177);
        glVertex2f(1264,177);
        glVertex2f(1264,170);
        glVertex2f(1080,170);
    glEnd();

    getColor("backBuildingShadeLight");
    glBegin(GL_QUADS);
        glVertex2f(1073,170);
        glVertex2f(1272,170);
        glVertex2f(1272,155);
        glVertex2f(1073,155);
    glEnd();

    getColor("backBuildingShadeLight");
    glBegin(GL_QUADS);
        glVertex2f(1080,155);
        glVertex2f(1264,155);
        glVertex2f(1264,146);
        glVertex2f(1080,146);
    glEnd();

    getColor("backBuildingShadeLight");
    glBegin(GL_QUADS);
        glVertex2f(1073,146);
        glVertex2f(1272,146);
        glVertex2f(1272,139);
        glVertex2f(1073,139);
    glEnd();

    getColor("backBuildingShadeLight");
    glBegin(GL_QUADS);
        glVertex2f(1080,139);
        glVertex2f(1264,139);
        glVertex2f(1264,131);
        glVertex2f(1080,131);
    glEnd();

    getColor("backBuildingShadeLight");
    glBegin(GL_QUADS);
        glVertex2f(1073,131);
        glVertex2f(1272,131);
        glVertex2f(1272,126);
        glVertex2f(1073,126);
    glEnd();

    getColor("backBuildingShadeLight");
    glBegin(GL_QUADS);
        glVertex2f(1157,1003);
        glVertex2f(1165,1003);
        glVertex2f(1165,996);
        glVertex2f(1157,996);
    glEnd();

    getColor("backBuildingShadeLight");
    glBegin(GL_QUADS);
        glVertex2f(1150,996);
        glVertex2f(1165,996);
        glVertex2f(1165,957);
        glVertex2f(1150,957);
    glEnd();

    getColor("backBuildingShadeLight");
    glBegin(GL_QUADS);
        glVertex2f(1165,996);
        glVertex2f(1172,996);
        glVertex2f(1172,957);
        glVertex2f(1165,957);
    glEnd();

    getColor("backBuildingShadeLight");
    glBegin(GL_QUADS);
        glVertex2f(1142,957);
        glVertex2f(1150,957);
        glVertex2f(1150,949);
        glVertex2f(1142,949);
    glEnd();

    getColor("backBuildingShadeLight");
    glBegin(GL_QUADS);
        glVertex2f(1134,949);
        glVertex2f(1142,949);
        glVertex2f(1142,942);
        glVertex2f(1134,942);
    glEnd();

    getColor("backBuildingShadeLight");
    glBegin(GL_QUADS);
        glVertex2f(1157,957);
        glVertex2f(1165,957);
        glVertex2f(1165,949);
        glVertex2f(1157,949);
    glEnd();

    getColor("backBuildingShadeLight");
    glBegin(GL_QUADS);
        glVertex2f(1165,949);
        glVertex2f(1172,949);
        glVertex2f(1172,942);
        glVertex2f(1165,942);
    glEnd();
//
    getColor("backBuildingShadeDark");
    glBegin(GL_QUADS);
        glVertex2f(1165,996);
        glVertex2f(1172,996);
        glVertex2f(1172,957);
        glVertex2f(1165,957);
    glEnd();

    getColor("backBuildingShadeDark");
    glBegin(GL_QUADS);
        glVertex2f(1172,957);
        glVertex2f(1180,957);
        glVertex2f(1180,949);
        glVertex2f(1172,949);
    glEnd();

    getColor("backBuildingShadeDark");
    glBegin(GL_QUADS);
        glVertex2f(1180,949);
        glVertex2f(1188,949);
        glVertex2f(1188,942);
        glVertex2f(1180,942);
    glEnd();
//Overlapped_building
    getColor("backBuilding");
    glBegin(GL_QUADS);
        glVertex2f(1241,942);
        glVertex2f(1263,942);
        glVertex2f(1263,935);
        glVertex2f(1241,935);
    glEnd();

    getColor("backBuilding");
    glBegin(GL_QUADS);
        glVertex2f(1088,935);
        glVertex2f(1272,935);
        glVertex2f(1272,927);
        glVertex2f(1088,927);
    glEnd();

    getColor("backBuilding");
    glBegin(GL_QUADS);
        glVertex2f(1096,927);
        glVertex2f(1264,927);
        glVertex2f(1264,919);
        glVertex2f(1096,919);
    glEnd();

    getColor("backBuilding");
    glBegin(GL_QUADS);
        glVertex2f(1088,919);
        glVertex2f(1272,919);
        glVertex2f(1272,912);
        glVertex2f(1088,912);
    glEnd();

    getColor("backBuilding");
    glBegin(GL_QUADS);
        glVertex2f(1096,912);
        glVertex2f(1264,912);
        glVertex2f(1264,904);
        glVertex2f(1096,904);
    glEnd();

    getColor("backBuilding");
    glBegin(GL_QUADS);
        glVertex2f(1088,904);
        glVertex2f(1272,904);
        glVertex2f(1272,896);
        glVertex2f(1088,896);
    glEnd();

    getColor("backBuilding");
    glBegin(GL_QUADS);
        glVertex2f(1096,896);
        glVertex2f(1264,896);
        glVertex2f(1264,889);
        glVertex2f(1096,889);
    glEnd();

    getColor("backBuilding");
    glBegin(GL_QUADS);
        glVertex2f(1088,889);
        glVertex2f(1264,889);
        glVertex2f(1264,881);
        glVertex2f(1088,881);
    glEnd();

    getColor("backBuilding");
    glBegin(GL_QUADS);
        glVertex2f(1096,881);
        glVertex2f(1264,881);
        glVertex2f(1264,874);
        glVertex2f(1096,874);
    glEnd();

    getColor("backBuilding");
    glBegin(GL_QUADS);
        glVertex2f(1088,874);
        glVertex2f(1264,874);
        glVertex2f(1264,865);
        glVertex2f(1088,865);
    glEnd();

    getColor("backBuilding");
    glBegin(GL_QUADS);
        glVertex2f(1096,865);
        glVertex2f(1264,865);
        glVertex2f(1264,858);
        glVertex2f(1096,858);
    glEnd();

    getColor("backBuilding");
    glBegin(GL_QUADS);
        glVertex2f(1088,858);
        glVertex2f(1264,858);
        glVertex2f(1264,851);
        glVertex2f(1088,851);
    glEnd();

    getColor("backBuilding");
    glBegin(GL_QUADS);
        glVertex2f(1096,851);
        glVertex2f(1264,851);
        glVertex2f(1264,843);
        glVertex2f(1096,843);
    glEnd();

    getColor("backBuilding");
    glBegin(GL_QUADS);
        glVertex2f(1088,843);
        glVertex2f(1264,843);
        glVertex2f(1264,835);
        glVertex2f(1088,835);
    glEnd();

    getColor("backBuilding");
    glBegin(GL_QUADS);
        glVertex2f(1096,835);
        glVertex2f(1264,835);
        glVertex2f(1264,827);
        glVertex2f(1096,827);
    glEnd();

    getColor("backBuilding");
    glBegin(GL_QUADS);
        glVertex2f(1088,827);
        glVertex2f(1264,827);
        glVertex2f(1264,820);
        glVertex2f(1088,820);
    glEnd();

    getColor("backBuilding");
    glBegin(GL_QUADS);
        glVertex2f(1096,820);
        glVertex2f(1264,820);
        glVertex2f(1264,812);
        glVertex2f(1096,812);
    glEnd();

    getColor("backBuilding");
    glBegin(GL_QUADS);
        glVertex2f(1088,812);
        glVertex2f(1264,812);
        glVertex2f(1264,805);
        glVertex2f(1088,805);
    glEnd();

    getColor("backBuilding");
    glBegin(GL_QUADS);
        glVertex2f(1096,805);
        glVertex2f(1264,805);
        glVertex2f(1264,797);
        glVertex2f(1096,797);
    glEnd();

    getColor("backBuilding");
    glBegin(GL_QUADS);
        glVertex2f(1088,797);
        glVertex2f(1264,797);
        glVertex2f(1264,789);
        glVertex2f(1088,789);
    glEnd();

    getColor("backBuilding");
    glBegin(GL_QUADS);
        glVertex2f(1096,789);
        glVertex2f(1264,789);
        glVertex2f(1264,781);
        glVertex2f(1096,781);
    glEnd();

    getColor("backBuilding");
    glBegin(GL_QUADS);
        glVertex2f(1088,781);
        glVertex2f(1264,781);
        glVertex2f(1264,774);
        glVertex2f(1088,774);
    glEnd();

    getColor("backBuilding");
    glBegin(GL_QUADS);
        glVertex2f(1096,774);
        glVertex2f(1264,774);
        glVertex2f(1264,766);
        glVertex2f(1096,766);
    glEnd();

    getColor("backBuilding");
    glBegin(GL_QUADS);
        glVertex2f(1088,766);
        glVertex2f(1264,766);
        glVertex2f(1264,759);
        glVertex2f(1088,759);
    glEnd();

    getColor("backBuilding");
    glBegin(GL_QUADS);
        glVertex2f(1096,759);
        glVertex2f(1264,759);
        glVertex2f(1264,751);
        glVertex2f(1096,751);
    glEnd();

    getColor("backBuilding");
    glBegin(GL_QUADS);
        glVertex2f(1088,751);
        glVertex2f(1264,751);
        glVertex2f(1264,743);
        glVertex2f(1088,743);
    glEnd();

    getColor("backBuilding");
    glBegin(GL_QUADS);
        glVertex2f(1096,743);
        glVertex2f(1264,743);
        glVertex2f(1264,735);
        glVertex2f(1096,735);
    glEnd();

    getColor("backBuilding");
    glBegin(GL_QUADS);
        glVertex2f(1088,735);
        glVertex2f(1264,735);
        glVertex2f(1264,728);
        glVertex2f(1088,728);
    glEnd();

    getColor("backBuilding");
    glBegin(GL_QUADS);
        glVertex2f(1096,728);
        glVertex2f(1264,728);
        glVertex2f(1264,720);
        glVertex2f(1096,720);
    glEnd();

    getColor("backBuilding");
    glBegin(GL_QUADS);
        glVertex2f(1088,720);
        glVertex2f(1264,720);
        glVertex2f(1264,712);
        glVertex2f(1088,712);
    glEnd();

    getColor("backBuilding");
    glBegin(GL_QUADS);
        glVertex2f(1096,712);
        glVertex2f(1264,712);
        glVertex2f(1264,705);
        glVertex2f(1096,705);
    glEnd();

    getColor("backBuilding");
    glBegin(GL_QUADS);
        glVertex2f(1088,705);
        glVertex2f(1264,705);
        glVertex2f(1264,698);
        glVertex2f(1088,698);
    glEnd();

    getColor("backBuilding");
    glBegin(GL_QUADS);
        glVertex2f(1096,698);
        glVertex2f(1264,698);
        glVertex2f(1264,689);
        glVertex2f(1096,689);
    glEnd();

    getColor("backBuilding");
    glBegin(GL_QUADS);
        glVertex2f(1088,689);
        glVertex2f(1264,689);
        glVertex2f(1264,682);
        glVertex2f(1088,682);
    glEnd();

    getColor("backBuilding");
    glBegin(GL_QUADS);
        glVertex2f(1096,682);
        glVertex2f(1264,682);
        glVertex2f(1264,674);
        glVertex2f(1096,674);
    glEnd();

    getColor("backBuilding");
    glBegin(GL_QUADS);
        glVertex2f(1088,674);
        glVertex2f(1264,674);
        glVertex2f(1264,667);
        glVertex2f(1088,667);
    glEnd();

    getColor("backBuilding");
    glBegin(GL_QUADS);
        glVertex2f(1096,667);
        glVertex2f(1264,667);
        glVertex2f(1264,659);
        glVertex2f(1096,659);
    glEnd();

    getColor("backBuilding");
    glBegin(GL_QUADS);
        glVertex2f(1088,659);
        glVertex2f(1264,659);
        glVertex2f(1264,651);
        glVertex2f(1088,651);
    glEnd();

    getColor("backBuilding");
    glBegin(GL_QUADS);
        glVertex2f(1096,651);
        glVertex2f(1264,651);
        glVertex2f(1264,643);
        glVertex2f(1096,643);
    glEnd();

    getColor("backBuilding");
    glBegin(GL_QUADS);
        glVertex2f(1088,643);
        glVertex2f(1264,643);
        glVertex2f(1264,637);
        glVertex2f(1088,637);
    glEnd();

    getColor("backBuilding");
    glBegin(GL_QUADS);
        glVertex2f(1096,637);
        glVertex2f(1264,637);
        glVertex2f(1264,628);
        glVertex2f(1096,628);
    glEnd();

    getColor("backBuilding");
    glBegin(GL_QUADS);
        glVertex2f(1088,628);
        glVertex2f(1264,628);
        glVertex2f(1264,621);
        glVertex2f(1088,621);
    glEnd();

    getColor("backBuilding");
    glBegin(GL_QUADS);
        glVertex2f(1096,621);
        glVertex2f(1264,621);
        glVertex2f(1264,613);
        glVertex2f(1096,613);
    glEnd();

    getColor("backBuilding");
    glBegin(GL_QUADS);
        glVertex2f(1088,613);
        glVertex2f(1264,613);
        glVertex2f(1264,606);
        glVertex2f(1088,606);
    glEnd();

    getColor("backBuilding");
    glBegin(GL_QUADS);
        glVertex2f(1096,606);
        glVertex2f(1264,606);
        glVertex2f(1264,598);
        glVertex2f(1096,598);
    glEnd();

    getColor("backBuilding");
    glBegin(GL_QUADS);
        glVertex2f(1088,598);
        glVertex2f(1264,598);
        glVertex2f(1264,590);
        glVertex2f(1088,590);
    glEnd();

    getColor("backBuilding");
    glBegin(GL_QUADS);
        glVertex2f(1096,590);
        glVertex2f(1264,590);
        glVertex2f(1264,582);
        glVertex2f(1096,582);
    glEnd();

    getColor("backBuilding");
    glBegin(GL_QUADS);
        glVertex2f(1088,582);
        glVertex2f(1264,582);
        glVertex2f(1264,575);
        glVertex2f(1088,575);
    glEnd();

    getColor("backBuilding");
    glBegin(GL_QUADS);
        glVertex2f(1096,575);
        glVertex2f(1264,575);
        glVertex2f(1264,567);
        glVertex2f(1096,567);
    glEnd();

    getColor("backBuilding");
    glBegin(GL_QUADS);
        glVertex2f(1088,567);
        glVertex2f(1264,567);
        glVertex2f(1264,560);
        glVertex2f(1088,560);
    glEnd();

    getColor("backBuilding");
    glBegin(GL_QUADS);
        glVertex2f(1096,560);
        glVertex2f(1264,560);
        glVertex2f(1264,552);
        glVertex2f(1096,552);
    glEnd();

    getColor("backBuilding");
    glBegin(GL_QUADS);
        glVertex2f(1088,552);
        glVertex2f(1264,552);
        glVertex2f(1264,529);
        glVertex2f(1088,529);
    glEnd();

    getColor("backBuilding");
    glBegin(GL_QUADS);
        glVertex2f(1096,529);
        glVertex2f(1264,529);
        glVertex2f(1264,521);
        glVertex2f(1096,521);
    glEnd();

    getColor("backBuilding");
    glBegin(GL_QUADS);
        glVertex2f(1088,521);
        glVertex2f(1264,521);
        glVertex2f(1264,360);
        glVertex2f(1088,360);
    glEnd();

    getColor("backBuilding");
    glBegin(GL_QUADS);
        glVertex2f(1096,360);
        glVertex2f(1264,360);
        glVertex2f(1264,352);
        glVertex2f(1096,352);
    glEnd();

    getColor("backBuilding");
    glBegin(GL_QUADS);
        glVertex2f(1088,352);
        glVertex2f(1264,352);
        glVertex2f(1264,345);
        glVertex2f(1088,345);
    glEnd();

    getColor("backBuilding");
    glBegin(GL_QUADS);
        glVertex2f(1096,345);
        glVertex2f(1264,345);
        glVertex2f(1264,338);
        glVertex2f(1096,338);
    glEnd();

    getColor("backBuilding");
    glBegin(GL_QUADS);
        glVertex2f(1088,338);
        glVertex2f(1264,338);
        glVertex2f(1264,330);
        glVertex2f(1088,330);
    glEnd();

    getColor("backBuilding");
    glBegin(GL_QUADS);
        glVertex2f(1096,330);
        glVertex2f(1264,330);
        glVertex2f(1264,322);
        glVertex2f(1096,322);
    glEnd();

    getColor("backBuilding");
    glBegin(GL_QUADS);
        glVertex2f(1088,322);
        glVertex2f(1264,322);
        glVertex2f(1264,315);
        glVertex2f(1088,315);
    glEnd();

    getColor("backBuilding");
    glBegin(GL_QUADS);
        glVertex2f(1096,315);
        glVertex2f(1264,315);
        glVertex2f(1264,292);
        glVertex2f(1096,292);
    glEnd();

    getColor("backBuilding");
    glBegin(GL_QUADS);
        glVertex2f(1088,292);
        glVertex2f(1264,292);
        glVertex2f(1264,284);
        glVertex2f(1088,284);
    glEnd();

    getColor("backBuilding");
    glBegin(GL_QUADS);
        glVertex2f(1096,284);
        glVertex2f(1264,284);
        glVertex2f(1264,277);
        glVertex2f(1096,277);
    glEnd();

    getColor("backBuilding");
    glBegin(GL_QUADS);
        glVertex2f(1088,277);
        glVertex2f(1264,277);
        glVertex2f(1264,269);
        glVertex2f(1088,269);
    glEnd();

    getColor("backBuilding");
    glBegin(GL_QUADS);
        glVertex2f(1096,269);
        glVertex2f(1264,269);
        glVertex2f(1264,261);
        glVertex2f(1096,261);
    glEnd();

    getColor("backBuilding");
    glBegin(GL_QUADS);
        glVertex2f(1088,261);
        glVertex2f(1264,261);
        glVertex2f(1264,254);
        glVertex2f(1088,254);
    glEnd();

    getColor("backBuilding");
    glBegin(GL_QUADS);
        glVertex2f(1096,254);
        glVertex2f(1264,254);
        glVertex2f(1264,246);
        glVertex2f(1096,246);
    glEnd();

    getColor("backBuilding");
    glBegin(GL_QUADS);
        glVertex2f(1088,246);
        glVertex2f(1264,246);
        glVertex2f(1264,238);
        glVertex2f(1088,238);
    glEnd();

    getColor("backBuilding");
    glBegin(GL_QUADS);
        glVertex2f(1096,238);
        glVertex2f(1264,238);
        glVertex2f(1264,230);
        glVertex2f(1096,230);
    glEnd();

    getColor("backBuilding");
    glBegin(GL_QUADS);
        glVertex2f(1088,230);
        glVertex2f(1264,230);
        glVertex2f(1264,223);
        glVertex2f(1088,223);
    glEnd();

    getColor("backBuilding");
    glBegin(GL_QUADS);
        glVertex2f(1096,223);
        glVertex2f(1264,223);
        glVertex2f(1264,215);
        glVertex2f(1096,215);
    glEnd();

    getColor("backBuilding");
    glBegin(GL_QUADS);
        glVertex2f(1088,215);
        glVertex2f(1264,215);
        glVertex2f(1264,208);
        glVertex2f(1088,208);
    glEnd();

    getColor("backBuilding");
    glBegin(GL_QUADS);
        glVertex2f(1096,208);
        glVertex2f(1264,208);
        glVertex2f(1264,200);
        glVertex2f(1096,200);
    glEnd();

    getColor("backBuilding");
    glBegin(GL_QUADS);
        glVertex2f(1088,200);
        glVertex2f(1264,200);
        glVertex2f(1264,192);
        glVertex2f(1088,192);
    glEnd();

    getColor("backBuilding");
    glBegin(GL_QUADS);
        glVertex2f(1096,192);
        glVertex2f(1264,192);
        glVertex2f(1264,184);
        glVertex2f(1096,184);
    glEnd();

    getColor("backBuilding");
    glBegin(GL_QUADS);
        glVertex2f(1088,184);
        glVertex2f(1264,184);
        glVertex2f(1264,177);
        glVertex2f(1088,177);
    glEnd();

    getColor("backBuilding");
    glBegin(GL_QUADS);
        glVertex2f(1096,177);
        glVertex2f(1264,177);
        glVertex2f(1264,170);
        glVertex2f(1096,170);
    glEnd();

    getColor("backBuilding");
    glBegin(GL_QUADS);
        glVertex2f(1088,170);
        glVertex2f(1264,170);
        glVertex2f(1264,162);
        glVertex2f(1088,162);
    glEnd();

    getColor("backBuilding");
    glBegin(GL_QUADS);
        glVertex2f(1096,162);
        glVertex2f(1264,162);
        glVertex2f(1264,155);
        glVertex2f(1096,155);
    glEnd();

    getColor("backBuilding");
    glBegin(GL_QUADS);
        glVertex2f(1088,155);
        glVertex2f(1264,155);
        glVertex2f(1264,146);
        glVertex2f(1088,146);
    glEnd();

    getColor("backBuilding");
    glBegin(GL_QUADS);
        glVertex2f(1096,146);
        glVertex2f(1264,146);
        glVertex2f(1264,139);
        glVertex2f(1096,139);
    glEnd();

    getColor("backBuilding");
    glBegin(GL_QUADS);
        glVertex2f(1088,139);
        glVertex2f(1264,139);
        glVertex2f(1264,131);
        glVertex2f(1088,131);
    glEnd();

    getColor("backBuilding");
    glBegin(GL_QUADS);
        glColor3ub(106, 77, 143);
        glVertex2f(1096,131);
        glVertex2f(1264,131);
        glVertex2f(1264,126);
        glVertex2f(1096,126);
    glEnd();

    getColor("backBuildingShadeLight");
    glBegin(GL_QUADS);
        glVertex2f(1073,514);
        glVertex2f(1080,514);
        glVertex2f(1080,505);
        glVertex2f(1073,505);
    glEnd();

    getColor("backBuildingShadeLight");
    glBegin(GL_QUADS);
        glVertex2f(1073,497);
        glVertex2f(1080,497);
        glVertex2f(1080,490);
        glVertex2f(1073,490);
    glEnd();

    getColor("backBuildingShadeLight");
    glBegin(GL_QUADS);
        glVertex2f(1073,483);
        glVertex2f(1080,483);
        glVertex2f(1080,475);
        glVertex2f(1073,475);
    glEnd();

    getColor("backBuildingShadeLight");
    glBegin(GL_QUADS);
        glVertex2f(1073,467);
        glVertex2f(1080,467);
        glVertex2f(1080,459);
        glVertex2f(1073,459);
    glEnd();

    getColor("backBuildingShadeLight");
    glBegin(GL_QUADS);
        glVertex2f(1073,452);
        glVertex2f(1080,452);
        glVertex2f(1080,447);
        glVertex2f(1073,447);
    glEnd();

    getColor("backBuildingShadeLight");
    glBegin(GL_QUADS);
        glVertex2f(1073,445);
        glVertex2f(1080,445);
        glVertex2f(1080,437);
        glVertex2f(1073,437);
    glEnd();

    getColor("backBuildingShadeLight");
    glBegin(GL_QUADS);
        glVertex2f(1073,421);
        glVertex2f(1080,421);
        glVertex2f(1080,414);
        glVertex2f(1073,414);
    glEnd();

    getColor("backBuildingShadeLight");
    glBegin(GL_QUADS);
        glVertex2f(1073,401);
        glVertex2f(1080,401);
        glVertex2f(1080,395);
        glVertex2f(1073,395);
    glEnd();

    getColor("backBuildingShadeLight");
    glBegin(GL_QUADS);
        glVertex2f(1073,385);
        glVertex2f(1080,385);
        glVertex2f(1080,378);
        glVertex2f(1073,378);
    glEnd();

    getColor("backBuildingShadeLight");
    glBegin(GL_QUADS);
        glVertex2f(1073,367);
        glVertex2f(1080,367);
        glVertex2f(1080,360);
        glVertex2f(1073,360);
    glEnd();
}

//Back Building 5
void backBuilding_5()
{
    getColor("backBuilding");
    glBegin(GL_QUADS);
        glVertex2f(1480,1026);
        glVertex2f(1541,1026);
        glVertex2f(1541,126);
        glVertex2f(1480,126);
    glEnd();
}

//Front Building 1
void frontBuilding_1()
{
//chimney
    getColor("frontBuilding");
    glBegin(GL_QUADS);
        glVertex2f(65,957);
        glVertex2f(65,1026);
        glVertex2f(88,1026);
        glVertex2f(88,957);
    glEnd();

    getColor("frontBuilding");
    glBegin(GL_QUADS);
        glVertex2f(73,942);
        glVertex2f(73,1033);
        glVertex2f(81,1033);
        glVertex2f(81,942);
    glEnd();

    getColor("frontBuilding");
    glBegin(GL_QUADS);
        glVertex2f(42,935);
        glVertex2f(42,942);
        glVertex2f(50,942);
        glVertex2f(50,935);
    glEnd();

    getColor("frontBuilding");
    glBegin(GL_QUADS);
        glVertex2f(65,935);
        glVertex2f(65,942);
        glVertex2f(73,942);
        glVertex2f(73,935);
    glEnd();

    getColor("frontBuilding");
    glBegin(GL_QUADS);
        glVertex2f(81,935);
        glVertex2f(81,942);
        glVertex2f(89,942);
        glVertex2f(89,935);
    glEnd();

    getColor("frontBuilding");
    glBegin(GL_QUADS);
        glVertex2f(104,935);
        glVertex2f(104,942);
        glVertex2f(112,942);
        glVertex2f(112,935);
    glEnd();

    getColor("frontBuilding");
    glBegin(GL_QUADS);
        glVertex2f(50,942);
        glVertex2f(50,949);
        glVertex2f(58,949);
        glVertex2f(58,942);
    glEnd();

    getColor("frontBuilding");
    glBegin(GL_QUADS);
        glVertex2f(96,942);
        glVertex2f(96,949);
        glVertex2f(104,949);
        glVertex2f(104,942);
    glEnd();

    getColor("frontBuilding");
    glBegin(GL_QUADS);
        glVertex2f(58,949);
        glVertex2f(58,1018);
        glVertex2f(65,1018);
        glVertex2f(65,949);
    glEnd();

    getColor("frontBuildingShade");
    glBegin(GL_QUADS);
        glVertex2f(88,949);
        glVertex2f(88,1018);
        glVertex2f(96,1018);
        glVertex2f(96,949);
    glEnd();

    getColor("frontBuilding");
    glBegin(GL_QUADS);
        glVertex2f(88,949);
        glVertex2f(88,957);
        glVertex2f(96,957);
        glVertex2f(96,949);
    glEnd();
//main building
    getColor("frontBuilding");
    glBegin(GL_QUADS);
        glVertex2f(0,125);
        glVertex2f(0,935);
        glVertex2f(188,935);
        glVertex2f(188,125);
    glEnd();

    getColor("frontBuildingShade");
    glBegin(GL_QUADS);
        glVertex2f(188,125);
        glVertex2f(188,935);
        glVertex2f(204,935);
        glVertex2f(204,125);
    glEnd();
//1st
    //1
    getColor("frontBuildingWindowCurtain");
    glBegin(GL_QUADS);
        glVertex2f(0,842);
        glVertex2f(0,896);
        glVertex2f(5,896);
        glVertex2f(5,842);
    glEnd();
    //2
    getColor("frontBuildingWindowClose");
    glBegin(GL_QUADS);
        glVertex2f(35,842);
        glVertex2f(35,896);
        glVertex2f(58,896);
        glVertex2f(58,842);
    glEnd();
    //3
    getColor("frontBuildingWindowClose");
    glBegin(GL_QUADS);
        glVertex2f(88,842);
        glVertex2f(88,896);
        glVertex2f(111,896);
        glVertex2f(111,842);
    glEnd();
    //4
    getColor("frontBuildingWindowCurtain");
    glBegin(GL_QUADS);
        glVertex2f(141,842);
        glVertex2f(141,896);
        glVertex2f(164,896);
        glVertex2f(164,842);
    glEnd();

    getColor("frontBuildingWindowShade");
    glBegin(GL_QUADS);
        glVertex2f(141,842);
        glVertex2f(141,896);
        glVertex2f(149,896);
        glVertex2f(149,842);
    glEnd();
//2nd
    //1
    getColor("frontBuildingWindowCurtain");
    glBegin(GL_QUADS);
        glVertex2f(0,758);
        glVertex2f(0,812);
        glVertex2f(5,812);
        glVertex2f(5,758);
    glEnd();
    //2
    getColor("frontBuildingWindowClose");
    glBegin(GL_QUADS);
        glVertex2f(35,758);
        glVertex2f(35,812);
        glVertex2f(58,812);
        glVertex2f(58,758);
    glEnd();
    //3
    getColor("frontBuildingWindowCurtain");
    glBegin(GL_QUADS);
        glVertex2f(88,758);
        glVertex2f(88,812);
        glVertex2f(111,812);
        glVertex2f(111,758);
    glEnd();

    getColor("frontBuildingWindowShade");
    glBegin(GL_QUADS);
        glVertex2f(88,758);
        glVertex2f(88,812);
        glVertex2f(96,812);
        glVertex2f(96,758);
    glEnd();
    //4
    getColor("frontBuildingWindowClose");
    glBegin(GL_QUADS);
        glVertex2f(141,758);
        glVertex2f(141,812);
        glVertex2f(164,812);
        glVertex2f(164,758);
    glEnd();
//3rd
    //1
    getColor("frontBuildingWindowCurtain");
    glBegin(GL_QUADS);
        glVertex2f(0,674);
        glVertex2f(0,728);
        glVertex2f(5,728);
        glVertex2f(5,674);
    glEnd();
    //2
    getColor("frontBuildingWindowOpen");
    glBegin(GL_QUADS);
        glVertex2f(35,674);
        glVertex2f(35,728);
        glVertex2f(58,728);
        glVertex2f(58,674);
    glEnd();

    getColor("frontBuildingWindowShade");
    glBegin(GL_QUADS);
        glVertex2f(35,674);
        glVertex2f(35,728);
        glVertex2f(43,728);
        glVertex2f(43,674);
    glEnd();
    //3
    getColor("frontBuildingWindowCurtain");
    glBegin(GL_QUADS);
        glVertex2f(88,674);
        glVertex2f(88,728);
        glVertex2f(111,728);
        glVertex2f(111,674);
    glEnd();

    getColor("frontBuildingWindowShade");
    glBegin(GL_QUADS);
        glVertex2f(88,674);
        glVertex2f(88,728);
        glVertex2f(96,728);
        glVertex2f(96,674);
    glEnd();
    //4
    getColor("frontBuildingWindowClose");
    glBegin(GL_QUADS);
        glVertex2f(141,674);
        glVertex2f(141,728);
        glVertex2f(164,728);
        glVertex2f(164,674);
    glEnd();
//4th
    //1
    getColor("frontBuildingWindowClose");
    glBegin(GL_QUADS);
        glVertex2f(0,590);
        glVertex2f(0,644);
        glVertex2f(5,644);
        glVertex2f(5,590);
    glEnd();
    //2
    getColor("frontBuildingWindowClose");
    glBegin(GL_QUADS);
        glVertex2f(35,590);
        glVertex2f(35,644);
        glVertex2f(58,644);
        glVertex2f(58,590);
    glEnd();
    //3
    getColor("frontBuildingWindowClose");
    glBegin(GL_QUADS);
        glVertex2f(88,590);
        glVertex2f(88,644);
        glVertex2f(111,644);
        glVertex2f(111,590);
    glEnd();
    //4
    getColor("frontBuildingWindowOpen");
    glBegin(GL_QUADS);
        glVertex2f(141,590);
        glVertex2f(141,644);
        glVertex2f(164,644);
        glVertex2f(164,590);
    glEnd();

    getColor("frontBuildingWindowShade");
    glBegin(GL_QUADS);
        glVertex2f(141,590);
        glVertex2f(141,644);
        glVertex2f(149,644);
        glVertex2f(149,590);
    glEnd();
//5th
    //1
    getColor("frontBuildingWindowClose");
    glBegin(GL_QUADS);
        glVertex2f(0,506);
        glVertex2f(0,560);
        glVertex2f(5,560);
        glVertex2f(5,506);
    glEnd();
    //2
    getColor("frontBuildingWindowOpen");
    glBegin(GL_QUADS);
        glVertex2f(35,506);
        glVertex2f(35,560);
        glVertex2f(58,560);
        glVertex2f(58,506);
    glEnd();

    getColor("frontBuildingWindowShade");
    glBegin(GL_QUADS);
        glVertex2f(35,506);
        glVertex2f(35,560);
        glVertex2f(43,560);
        glVertex2f(43,506);
    glEnd();
    //3
    getColor("frontBuildingWindowClose");
    glBegin(GL_QUADS);
        glVertex2f(88,506);
        glVertex2f(88,560);
        glVertex2f(111,560);
        glVertex2f(111,506);
    glEnd();
    //4
    getColor("frontBuildingWindowClose");
    glBegin(GL_QUADS);
        glVertex2f(141,506);
        glVertex2f(141,560);
        glVertex2f(164,560);
        glVertex2f(164,506);
    glEnd();

//6th
    //1
    getColor("frontBuildingWindowClose");
    glBegin(GL_QUADS);
        glVertex2f(0,422);
        glVertex2f(0,476);
        glVertex2f(5,476);
        glVertex2f(5,422);
    glEnd();
    //2
    getColor("frontBuildingWindowCurtain");
    glBegin(GL_QUADS);
        glVertex2f(35,422);
        glVertex2f(35,476);
        glVertex2f(58,476);
        glVertex2f(58,422);
    glEnd();

    getColor("frontBuildingWindowShade");
    glBegin(GL_QUADS);
        glVertex2f(35,422);
        glVertex2f(35,476);
        glVertex2f(43,476);
        glVertex2f(43,422);
    glEnd();
    //3
    getColor("frontBuildingWindowClose");
    glBegin(GL_QUADS);
        glVertex2f(88,422);
        glVertex2f(88,476);
        glVertex2f(111,476);
        glVertex2f(111,422);
    glEnd();
    //4
    getColor("frontBuildingWindowCurtain");
    glBegin(GL_QUADS);
        glVertex2f(141,422);
        glVertex2f(141,476);
        glVertex2f(164,476);
        glVertex2f(164,422);
    glEnd();

    getColor("frontBuildingWindowShade");
    glBegin(GL_QUADS);
        glVertex2f(141,422);
        glVertex2f(141,476);
        glVertex2f(149,476);
        glVertex2f(149,422);
    glEnd();
//7th
    //1
    getColor("frontBuildingWindowShade");
    glBegin(GL_QUADS);
        glVertex2f(0,338);
        glVertex2f(0,392);
        glVertex2f(5,392);
        glVertex2f(5,338);
    glEnd();
    //2
    getColor("frontBuildingWindowClose");
    glBegin(GL_QUADS);
        glVertex2f(35,338);
        glVertex2f(35,392);
        glVertex2f(58,392);
        glVertex2f(58,338);
    glEnd();
    //3
    getColor("frontBuildingWindowShade");
    glBegin(GL_QUADS);
        glVertex2f(88,338);
        glVertex2f(88,392);
        glVertex2f(111,392);
        glVertex2f(111,338);
    glEnd();
    //4
    getColor("frontBuildingWindowClose");
    glBegin(GL_QUADS);
        glVertex2f(141,338);
        glVertex2f(141,392);
        glVertex2f(164,392);
        glVertex2f(164,338);
    glEnd();
//8th
    //1
    getColor("frontBuildingWindowClose");
    glBegin(GL_QUADS);
        glVertex2f(0,254);
        glVertex2f(0,308);
        glVertex2f(5,308);
        glVertex2f(5,254);
    glEnd();
    //2
    getColor("frontBuildingWindowShade");
    glBegin(GL_QUADS);
        glVertex2f(35,254);
        glVertex2f(35,308);
        glVertex2f(58,308);
        glVertex2f(58,254);
    glEnd();
    //3
    getColor("frontBuildingWindowClose");
    glBegin(GL_QUADS);
        glVertex2f(88,254);
        glVertex2f(88,308);
        glVertex2f(111,308);
        glVertex2f(111,254);
    glEnd();
    //4
    getColor("frontBuildingWindowClose");
    glBegin(GL_QUADS);
        glVertex2f(141,254);
        glVertex2f(141,308);
        glVertex2f(164,308);
        glVertex2f(164,254);
    glEnd();
//9th
    //1
    getColor("frontBuildingWindowShade");
    glBegin(GL_QUADS);
        glVertex2f(0,170);
        glVertex2f(0,224);
        glVertex2f(5,224);
        glVertex2f(5,170);
    glEnd();
    //2
    getColor("frontBuildingWindowClose");
    glBegin(GL_QUADS);
        glVertex2f(35,170);
        glVertex2f(35,224);
        glVertex2f(58,224);
        glVertex2f(58,170);
    glEnd();
    //3
    getColor("frontBuildingWindowShade");
    glBegin(GL_QUADS);
        glVertex2f(88,170);
        glVertex2f(88,224);
        glVertex2f(111,224);
        glVertex2f(111,170);
    glEnd();
    //4
    getColor("frontBuildingWindowShade");
    glBegin(GL_QUADS);
        glVertex2f(141,170);
        glVertex2f(141,224);
        glVertex2f(164,224);
        glVertex2f(164,170);
    glEnd();
}

//Front Building 2
void frontBuilding_2()
{
    getColor("frontBuildingWindowClose");
    glBegin(GL_QUADS);
        glVertex2f(220,935);
        glVertex2f(335,935);
        glVertex2f(335,927);
        glVertex2f(220,927);
    glEnd();

    getColor("frontBuilding");
    glBegin(GL_QUADS);
        glVertex2f(227,927);
        glVertex2f(337,927);
        glVertex2f(337,659);
        glVertex2f(227,659);
    glEnd();

    getColor("frontBuildingWindowClose");
    glBegin(GL_QUADS);
        glVertex2f(220,659);
        glVertex2f(719,659);
        glVertex2f(719,651);
        glVertex2f(220,651);
    glEnd();

    getColor("frontBuilding");
    glBegin(GL_QUADS);
        glVertex2f(227,651);
        glVertex2f(712,651);
        glVertex2f(712,126);
        glVertex2f(227,126);
    glEnd();

    getColor("frontBuildingWindowClose");
    glBegin(GL_QUADS);
        glVertex2f(227,559);
        glVertex2f(719,559);
        glVertex2f(719,552);
        glVertex2f(227,552);
    glEnd();

    getColor("frontBuildingWindowClose");
    glBegin(GL_QUADS);
        glVertex2f(220,467);
        glVertex2f(719,467);
        glVertex2f(719,460);
        glVertex2f(220,460);
    glEnd();

    getColor("frontBuildingWindowClose");
    glBegin(GL_QUADS);
        glVertex2f(220,345);
        glVertex2f(719,345);
        glVertex2f(719,337);
        glVertex2f(220,337);
    glEnd();

    getColor("frontBuildingWindowClose");
    glBegin(GL_QUADS);
        glVertex2f(220,253);
        glVertex2f(719,253);
        glVertex2f(719,246);
        glVertex2f(220,246);
    glEnd();

    getColor("frontBuildingWindowClose");
    glBegin(GL_QUADS);
        glVertex2f(220,162);
        glVertex2f(719,162);
        glVertex2f(719,154);
        glVertex2f(220,154);
    glEnd();

    getColor("frontBuildingShade");
    glBegin(GL_QUADS);
        glVertex2f(335,935);
        glVertex2f(358,935);
        glVertex2f(358,659);
        glVertex2f(335,659);
    glEnd();

    getColor("frontBuilding");
    glBegin(GL_QUADS);
        glVertex2f(473,720);
        glVertex2f(612,720);
        glVertex2f(612,659);
        glVertex2f(473,659);
    glEnd();

    getColor("frontBuilding");
    glBegin(GL_QUADS);
        glVertex2f(449,712);
        glVertex2f(473,712);
        glVertex2f(473,705);
        glVertex2f(449,705);
    glEnd();

    getColor("whiteLight");
    glBegin(GL_QUADS);
        glVertex2f(449,705);
        glVertex2f(457,705);
        glVertex2f(457,697);
        glVertex2f(449,697);
    glEnd();

    getColor("frontBuildingShade");
    glBegin(GL_QUADS);
        glVertex2f(612,720);
        glVertex2f(619,720);
        glVertex2f(619,659);
        glVertex2f(612,659);
    glEnd();

    getColor("frontBuilding");
    glBegin(GL_QUADS);
        glVertex2f(712,620);
        glVertex2f(750,620);
        glVertex2f(750,567);
        glVertex2f(712,567);
    glEnd();

    getColor("frontBuilding");
    glBegin(GL_QUADS);
        glVertex2f(712,521);
        glVertex2f(750,521);
        glVertex2f(750,329);
        glVertex2f(712,329);
    glEnd();

    getColor("frontBuilding");
    glBegin(GL_QUADS);
        glVertex2f(712,521);
        glVertex2f(750,521);
        glVertex2f(750,329);
        glVertex2f(712,329);
    glEnd();

    getColor("frontBuilding");
    glBegin(GL_QUADS);
        glVertex2f(719,246);
        glVertex2f(750,246);
        glVertex2f(750,192);
        glVertex2f(719,192);
    glEnd();

    getColor("frontBuilding");
    glBegin(GL_QUADS);
        glVertex2f(719,192);
        glVertex2f(742,192);
        glVertex2f(742,126);
        glVertex2f(719,126);
    glEnd();
 //window
    getColor("frontBuildingWindowCurtain");
    glBegin(GL_QUADS);
        glVertex2f(235,912);
        glVertex2f(251,912);
        glVertex2f(251,843);
        glVertex2f(235,843);
    glEnd();

    getColor("frontBuildingWindowCurtain");
    glBegin(GL_QUADS);
        glVertex2f(281,912);
        glVertex2f(296,912);
        glVertex2f(296,843);
        glVertex2f(281,843);
    glEnd();

    getColor("frontBuildingWindowClose");
    glBegin(GL_QUADS);
        glVertex2f(258,912);
        glVertex2f(273,912);
        glVertex2f(273,843);
        glVertex2f(258,843);
    glEnd();

    getColor("frontBuildingWindowClose");
    glBegin(GL_QUADS);
        glVertex2f(304,912);
        glVertex2f(320,912);
        glVertex2f(320,843);
        glVertex2f(304,843);
    glEnd();

    getColor("frontBuildingWindowClose");
    glBegin(GL_QUADS);
        glVertex2f(235,820);
        glVertex2f(251,820);
        glVertex2f(251,751);
        glVertex2f(235,751);
    glEnd();

    getColor("frontBuildingWindowClose");
    glBegin(GL_QUADS);
        glVertex2f(258,820);
        glVertex2f(273,820);
        glVertex2f(273,751);
        glVertex2f(258,751);
    glEnd();

    getColor("frontBuildingWindowClose");
    glBegin(GL_QUADS);
        glVertex2f(281,820);
        glVertex2f(296,820);
        glVertex2f(296,751);
        glVertex2f(281,751);
    glEnd();

    getColor("frontBuildingWindowOpen");
    glBegin(GL_QUADS);
        glVertex2f(304,820);
        glVertex2f(320,820);
        glVertex2f(320,751);
        glVertex2f(304,751);
    glEnd();

    getColor("frontBuildingWindowClose");
    glBegin(GL_QUADS);
        glVertex2f(235,728);
        glVertex2f(251,728);
        glVertex2f(251,659);
        glVertex2f(235,659);
    glEnd();

    getColor("frontBuildingWindowClose");
    glBegin(GL_QUADS);
        glVertex2f(258,728);
        glVertex2f(273,728);
        glVertex2f(273,697);
        glVertex2f(258,697);
    glEnd();

    getColor("frontBuildingWindowClose");
    glBegin(GL_QUADS);
        glVertex2f(281,728);
        glVertex2f(296,728);
        glVertex2f(296,674);
        glVertex2f(281,674);
    glEnd();

    getColor("frontBuildingWindowClose");
    glBegin(GL_QUADS);
        glVertex2f(304,728);
        glVertex2f(320,728);
        glVertex2f(320,659);
        glVertex2f(304,659);
    glEnd();

    getColor("frontBuildingWindowOpen");
    glBegin(GL_QUADS);
        glVertex2f(258,697);
        glVertex2f(273,697);
        glVertex2f(273,659);
        glVertex2f(258,659);
    glEnd();

    getColor("frontBuildingWindowOpen");
    glBegin(GL_QUADS);
        glVertex2f(281,674);
        glVertex2f(296,674);
        glVertex2f(296,659);
        glVertex2f(281,659);
    glEnd();

    getColor("frontBuildingWindowClose");
    glBegin(GL_QUADS);
        glVertex2f(235,636);
        glVertex2f(251,636);
        glVertex2f(251,567);
        glVertex2f(235,567);
    glEnd();

    getColor("frontBuildingWindowClose");
    glBegin(GL_QUADS);
        glVertex2f(258,636);
        glVertex2f(273,636);
        glVertex2f(273,567);
        glVertex2f(258,567);
    glEnd();

    getColor("frontBuildingWindowClose");
    glBegin(GL_QUADS);
        glVertex2f(304,636);
        glVertex2f(319,636);
        glVertex2f(319,567);
        glVertex2f(304,567);
    glEnd();

    getColor("frontBuildingWindowOpen");
    glBegin(GL_QUADS);
        glVertex2f(281,636);
        glVertex2f(296,636);
        glVertex2f(296,567);
        glVertex2f(281,567);
    glEnd();

    getColor("frontBuildingWindowClose");
    glBegin(GL_QUADS);
        glVertex2f(435,636);
        glVertex2f(449,636);
        glVertex2f(449,567);
        glVertex2f(435,567);
    glEnd();

    getColor("frontBuildingWindowClose");
    glBegin(GL_QUADS);
        glVertex2f(457,636);
        glVertex2f(473,636);
        glVertex2f(473,567);
        glVertex2f(457,567);
    glEnd();

    getColor("frontBuildingWindowClose");
    glBegin(GL_QUADS);
        glVertex2f(481,636);
        glVertex2f(496,636);
        glVertex2f(496,567);
        glVertex2f(481,567);
    glEnd();

    getColor("frontBuildingWindowClose");
    glBegin(GL_QUADS);
        glVertex2f(503,636);
        glVertex2f(519,636);
        glVertex2f(519,628);
        glVertex2f(503,628);
    glEnd();

    getColor("frontBuildingWindowClose");
    glBegin(GL_QUADS);
        glVertex2f(503,620);
        glVertex2f(519,620);
        glVertex2f(519,613);
        glVertex2f(503,613);
    glEnd();

    getColor("frontBuildingWindowClose");
    glBegin(GL_QUADS);
        glVertex2f(503,605);
        glVertex2f(519,605);
        glVertex2f(519,598);
        glVertex2f(503,598);
    glEnd();

    getColor("frontBuildingWindowClose");
    glBegin(GL_QUADS);
        glVertex2f(503,589);
        glVertex2f(519,589);
        glVertex2f(519,582);
        glVertex2f(503,582);
    glEnd();

    getColor("frontBuildingWindowOpen");
    glBegin(GL_QUADS);
        glVertex2f(503,628);
        glVertex2f(519,628);
        glVertex2f(519,620);
        glVertex2f(503,620);
    glEnd();

    getColor("frontBuildingWindowOpen");
    glBegin(GL_QUADS);
        glVertex2f(503,613);
        glVertex2f(519,613);
        glVertex2f(519,605);
        glVertex2f(503,605);
    glEnd();

    getColor("frontBuildingWindowOpen");
    glBegin(GL_QUADS);
        glVertex2f(503,597);
        glVertex2f(519,597);
        glVertex2f(519,589);
        glVertex2f(503,589);
    glEnd();

    getColor("frontBuildingWindowOpen");
    glBegin(GL_QUADS);
        glVertex2f(503,582);
        glVertex2f(519,582);
        glVertex2f(519,567);
        glVertex2f(503,567);
    glEnd();

    getColor("frontBuildingWindowClose");
    glBegin(GL_QUADS);
        glVertex2f(603,636);
        glVertex2f(619,636);
        glVertex2f(619,620);
        glVertex2f(603,620);
    glEnd();

    getColor("frontBuildingWindowClose");
    glBegin(GL_QUADS);
        glVertex2f(627,636);
        glVertex2f(642,636);
        glVertex2f(642,567);
        glVertex2f(627,567);
    glEnd();

    getColor("frontBuildingWindowClose");
    glBegin(GL_QUADS);
        glVertex2f(650,636);
        glVertex2f(665,636);
        glVertex2f(665,567);
        glVertex2f(650,567);
    glEnd();

    getColor("frontBuildingWindowClose");
    glBegin(GL_QUADS);
        glVertex2f(673,636);
        glVertex2f(688,636);
        glVertex2f(688,574);
        glVertex2f(673,574);
    glEnd();

    getColor("frontBuildingWindowOpen");
    glBegin(GL_QUADS);
        glVertex2f(603,620);
        glVertex2f(619,620);
        glVertex2f(619,567);
        glVertex2f(603,567);
    glEnd();

    getColor("frontBuildingWindowOpen");
    glBegin(GL_QUADS);
        glVertex2f(673,574);
        glVertex2f(688,574);
        glVertex2f(688,567);
        glVertex2f(673,567);
    glEnd();

    getColor("frontBuildingWindowClose");
    glBegin(GL_QUADS);
        glVertex2f(235,545);
        glVertex2f(251,545);
        glVertex2f(251,475);
        glVertex2f(235,475);
    glEnd();

    getColor("frontBuildingWindowClose");
    glBegin(GL_QUADS);
        glVertex2f(258,545);
        glVertex2f(273,545);
        glVertex2f(273,475);
        glVertex2f(258,475);
    glEnd();

    getColor("frontBuildingWindowClose");
    glBegin(GL_QUADS);
        glVertex2f(281,545);
        glVertex2f(296,545);
        glVertex2f(296,475);
        glVertex2f(281,475);
    glEnd();

    getColor("frontBuildingWindowClose");
    glBegin(GL_QUADS);
        glVertex2f(304,545);
        glVertex2f(320,545);
        glVertex2f(320,475);
        glVertex2f(304,475);
    glEnd();

    getColor("frontBuildingWindowClose");
    glBegin(GL_QUADS);
        glVertex2f(435,545);
        glVertex2f(450,545);
        glVertex2f(450,475);
        glVertex2f(435,475);
    glEnd();

    getColor("frontBuildingWindowClose");
    glBegin(GL_QUADS);
        glVertex2f(457,545);
        glVertex2f(473,545);
        glVertex2f(473,475);
        glVertex2f(457,475);
    glEnd();

    getColor("frontBuildingWindowClose");
    glBegin(GL_QUADS);
        glVertex2f(480,545);
        glVertex2f(496,545);
        glVertex2f(496,475);
        glVertex2f(480,475);
    glEnd();

    getColor("frontBuildingWindowClose");
    glBegin(GL_QUADS);
        glVertex2f(503,545);
        glVertex2f(519,545);
        glVertex2f(519,475);
        glVertex2f(503,475);
    glEnd();

    getColor("frontBuildingWindowClose");
    glBegin(GL_QUADS);
        glVertex2f(603,545);
        glVertex2f(619,545);
        glVertex2f(619,475);
        glVertex2f(603,475);
    glEnd();

    getColor("frontBuildingWindowClose");
    glBegin(GL_QUADS);
        glVertex2f(627,545);
        glVertex2f(642,545);
        glVertex2f(642,475);
        glVertex2f(627,475);
    glEnd();

    getColor("frontBuildingWindowClose");
    glBegin(GL_QUADS);
        glVertex2f(650,545);
        glVertex2f(665,545);
        glVertex2f(665,475);
        glVertex2f(650,475);
    glEnd();

    getColor("frontBuildingWindowClose");
    glBegin(GL_QUADS);
        glVertex2f(673,545);
        glVertex2f(688,545);
        glVertex2f(688,475);
        glVertex2f(673,475);
    glEnd();

    getColor("frontBuildingWindowCurtain");
    glBegin(GL_QUADS);
        glVertex2f(235,452);
        glVertex2f(251,452);
        glVertex2f(251,414);
        glVertex2f(235,414);
    glEnd();

    getColor("frontBuildingWindowCurtain");
    glBegin(GL_QUADS);
        glVertex2f(258,452);
        glVertex2f(273,452);
        glVertex2f(273,414);
        glVertex2f(258,414);
    glEnd();

    getColor("frontBuildingWindowClose");
    glBegin(GL_QUADS);
        glVertex2f(304,452);
        glVertex2f(320,452);
        glVertex2f(320,414);
        glVertex2f(304,414);
    glEnd();

    getColor("frontBuildingWindowOpen");
    glBegin(GL_QUADS);
        glVertex2f(434,452);
        glVertex2f(449,452);
        glVertex2f(449,414);
        glVertex2f(434,414);
    glEnd();

    getColor("frontBuildingWindowClose");
    glBegin(GL_QUADS);
        glVertex2f(457,452);
        glVertex2f(473,452);
        glVertex2f(473,414);
        glVertex2f(457,414);
    glEnd();

    getColor("frontBuildingWindowClose");
    glBegin(GL_QUADS);
        glVertex2f(480,452);
        glVertex2f(496,452);
        glVertex2f(496,414);
        glVertex2f(480,414);
    glEnd();

    getColor("frontBuildingWindowClose");
    glBegin(GL_QUADS);
        glVertex2f(503,452);
        glVertex2f(519,452);
        glVertex2f(519,414);
        glVertex2f(503,414);
    glEnd();

    getColor("frontBuildingWindowClose");
    glBegin(GL_QUADS);
        glVertex2f(603,452);
        glVertex2f(619,452);
        glVertex2f(619,414);
        glVertex2f(603,414);
    glEnd();

    getColor("frontBuildingWindowClose");
    glBegin(GL_QUADS);
        glVertex2f(650,452);
        glVertex2f(665,452);
        glVertex2f(665,414);
        glVertex2f(650,414);
    glEnd();

    getColor("frontBuildingWindowOpen");
    glBegin(GL_QUADS);
        glVertex2f(627,452);
        glVertex2f(642,452);
        glVertex2f(642,414);
        glVertex2f(627,414);
    glEnd();

    getColor("frontBuildingWindowOpen");
    glBegin(GL_QUADS);
        glVertex2f(673,452);
        glVertex2f(688,452);
        glVertex2f(688,414);
        glVertex2f(673,414);
    glEnd();

    getColor("frontBuildingWindowOpen");
    glBegin(GL_QUADS);
        glVertex2f(304,329);
        glVertex2f(320,329);
        glVertex2f(320,261);
        glVertex2f(304,261);
    glEnd();

    getColor("frontBuildingWindowClose");
    glBegin(GL_QUADS);
        glVertex2f(242,329);
        glVertex2f(251,329);
        glVertex2f(251,261);
        glVertex2f(242,261);
    glEnd();

    getColor("frontBuildingWindowClose");
    glBegin(GL_QUADS);
        glVertex2f(258,329);
        glVertex2f(273,329);
        glVertex2f(273,261);
        glVertex2f(258,261);
    glEnd();

    getColor("frontBuildingWindowClose");
    glBegin(GL_QUADS);
        glVertex2f(281,329);
        glVertex2f(296,329);
        glVertex2f(296,261);
        glVertex2f(281,261);
    glEnd();

    getColor("frontBuildingWindowClose");
    glBegin(GL_QUADS);
        glVertex2f(435,329);
        glVertex2f(449,329);
        glVertex2f(449,261);
        glVertex2f(435,261);
    glEnd();

    getColor("frontBuildingWindowClose");
    glBegin(GL_QUADS);
        glVertex2f(457,329);
        glVertex2f(473,329);
        glVertex2f(473,261);
        glVertex2f(457,261);
    glEnd();

    getColor("frontBuildingWindowClose");
    glBegin(GL_QUADS);
        glVertex2f(503,329);
        glVertex2f(519,329);
        glVertex2f(519,261);
        glVertex2f(503,261);
    glEnd();

    getColor("frontBuildingWindowOpen");
    glBegin(GL_QUADS);
        glVertex2f(480,329);
        glVertex2f(496,329);
        glVertex2f(496,261);
        glVertex2f(480,261);
    glEnd();

    getColor("frontBuildingWindowClose");
    glBegin(GL_QUADS);
        glVertex2f(650,329);
        glVertex2f(665,329);
        glVertex2f(665,261);
        glVertex2f(650,261);
    glEnd();

    getColor("frontBuildingWindowOpen");
    glBegin(GL_QUADS);
        glVertex2f(673,329);
        glVertex2f(688,329);
        glVertex2f(688,261);
        glVertex2f(673,261);
    glEnd();

    getColor("frontBuildingWindowClose");
    glBegin(GL_QUADS);
        glVertex2f(242,238);
        glVertex2f(251,238);
        glVertex2f(251,170);
        glVertex2f(242,170);
    glEnd();

    getColor("frontBuildingWindowClose");
    glBegin(GL_QUADS);
        glVertex2f(258,238);
        glVertex2f(273,238);
        glVertex2f(273,177);
        glVertex2f(258,177);
    glEnd();

    getColor("frontBuildingWindowClose");
    glBegin(GL_QUADS);
        glVertex2f(281,238);
        glVertex2f(296,238);
        glVertex2f(296,200);
        glVertex2f(281,200);
    glEnd();

    getColor("frontBuildingWindowClose");
    glBegin(GL_QUADS);
        glVertex2f(304,238);
        glVertex2f(320,238);
        glVertex2f(320,170);
        glVertex2f(304,170);
    glEnd();

    getColor("frontBuildingWindowOpen");
    glBegin(GL_QUADS);
        glVertex2f(281,200);
        glVertex2f(296,200);
        glVertex2f(296,170);
        glVertex2f(281,170);
    glEnd();

    getColor("frontBuildingWindowOpen");
    glBegin(GL_QUADS);
        glVertex2f(258,177);
        glVertex2f(273,177);
        glVertex2f(273,170);
        glVertex2f(258,170);
    glEnd();

    getColor("frontBuildingWindowClose");
    glBegin(GL_QUADS);
        glVertex2f(434,238);
        glVertex2f(449,238);
        glVertex2f(449,185);
        glVertex2f(434,185);
    glEnd();

    getColor("frontBuildingWindowClose");
    glBegin(GL_QUADS);
        glVertex2f(457,238);
        glVertex2f(473,238);
        glVertex2f(473,200);
        glVertex2f(457,200);
    glEnd();

    getColor("frontBuildingWindowClose");
    glBegin(GL_QUADS);
        glVertex2f(480,238);
        glVertex2f(496,238);
        glVertex2f(496,177);
        glVertex2f(480,177);
    glEnd();

    getColor("frontBuildingWindowClose");
    glBegin(GL_QUADS);
        glVertex2f(650,238);
        glVertex2f(665,238);
        glVertex2f(665,170);
        glVertex2f(650,170);
    glEnd();

    getColor("frontBuildingWindowOpen");
    glBegin(GL_QUADS);
        glVertex2f(503,238);
        glVertex2f(519,238);
        glVertex2f(519,170);
        glVertex2f(503,170);
    glEnd();

    getColor("frontBuildingWindowOpen");
    glBegin(GL_QUADS);
        glVertex2f(480,177);
        glVertex2f(496,177);
        glVertex2f(496,170);
        glVertex2f(480,170);
    glEnd();

    getColor("frontBuildingWindowOpen");
    glBegin(GL_QUADS);
        glVertex2f(457,200);
        glVertex2f(473,200);
        glVertex2f(473,170);
        glVertex2f(457,170);
    glEnd();

    getColor("frontBuildingWindowOpen");
    glBegin(GL_QUADS);
        glVertex2f(434,185);
        glVertex2f(449,185);
        glVertex2f(449,170);
        glVertex2f(434,170);
    glEnd();

    getColor("frontBuildingWindowOpen");
    glBegin(GL_QUADS);
        glVertex2f(673,238);
        glVertex2f(688,238);
        glVertex2f(688,170);
        glVertex2f(673,170);
    glEnd();

    getColor("frontBuildingWindowOpen");
    glBegin(GL_QUADS);
        glVertex2f(565,697);
        glVertex2f(581,697);
        glVertex2f(581,674);
        glVertex2f(565,674);
    glEnd();

    getColor("frontBuilding");
    glBegin(GL_QUADS);
        glVertex2f(712,246);
        glVertex2f(719,246);
        glVertex2f(719,193);
        glVertex2f(712,193);
    glEnd();

    getColor("frontBuilding");
    glBegin(GL_QUADS);
        glVertex2f(719,329);
        glVertex2f(726,329);
        glVertex2f(726,246);
        glVertex2f(719,246);
    glEnd();

    getColor("frontBuilding");
    glBegin(GL_QUADS);
        glVertex2f(735,329);
        glVertex2f(742,329);
        glVertex2f(742,246);
        glVertex2f(735,246);
    glEnd();

    getColor("frontBuilding");
    glBegin(GL_QUADS);
        glVertex2f(726,323);
        glVertex2f(735,323);
        glVertex2f(735,315);
        glVertex2f(726,315);
    glEnd();

    getColor("frontBuilding");
    glBegin(GL_QUADS);
        glVertex2f(726,308);
        glVertex2f(735,308);
        glVertex2f(735,299);
        glVertex2f(726,299);
    glEnd();

    getColor("frontBuilding");
    glBegin(GL_QUADS);
        glVertex2f(726,284);
        glVertex2f(735,284);
        glVertex2f(735,277);
        glVertex2f(726,277);
    glEnd();

    getColor("frontBuilding");
    glBegin(GL_QUADS);
        glVertex2f(726,268);
        glVertex2f(735,268);
        glVertex2f(735,261);
        glVertex2f(726,261);
    glEnd();

    getColor("frontBuilding");
    glBegin(GL_QUADS);
        glVertex2f(726,254);
        glVertex2f(735,254);
        glVertex2f(735,246);
        glVertex2f(726,246);
    glEnd();

    getColor("frontBuilding");
    glBegin(GL_QUADS);
        glVertex2f(719,567);
        glVertex2f(726,567);
        glVertex2f(726,521);
        glVertex2f(719,521);
    glEnd();

    getColor("frontBuilding");
    glBegin(GL_QUADS);
        glVertex2f(735,567);
        glVertex2f(742,567);
        glVertex2f(742,521);
        glVertex2f(735,521);
    glEnd();

    getColor("frontBuilding");
    glBegin(GL_QUADS);
        glVertex2f(726,559);
        glVertex2f(735,559);
        glVertex2f(735,552);
        glVertex2f(726,552);
    glEnd();

    getColor("frontBuilding");
    glBegin(GL_QUADS);
        glVertex2f(726,536);
        glVertex2f(735,536);
        glVertex2f(735,529);
        glVertex2f(726,529);
    glEnd();

    getColor("frontBuildingWindowClose");
    glBegin(GL_QUADS);
        glVertex2f(712,460);
        glVertex2f(712,467);
        glVertex2f(720,467);
        glVertex2f(720,460);
    glEnd();
}

//Front Building 3
void frontBuilding_3()
{
    getColor("frontBuildingShade");
    glBegin(GL_QUADS);
        glVertex2f(1287,904);
        glVertex2f(1295,904);
        glVertex2f(1295,843);
        glVertex2f(1287,843);
    glEnd();

    getColor("frontBuilding");
    glBegin(GL_QUADS);
        glVertex2f(1295,904);
        glVertex2f(1357,904);
        glVertex2f(1357,896);
        glVertex2f(1295,896);
    glEnd();

    getColor("frontBuilding");
    glBegin(GL_QUADS);
        glVertex2f(1295,896);
        glVertex2f(1372,896);
        glVertex2f(1372,889);
        glVertex2f(1295,889);
    glEnd();

    getColor("frontBuilding");
    glBegin(GL_QUADS);
        glVertex2f(1295,896);
        glVertex2f(1357,896);
        glVertex2f(1357,889);
        glVertex2f(1295,889);
    glEnd();

    getColor("frontBuilding");
    glBegin(GL_QUADS);
        glVertex2f(1295,889);
        glVertex2f(1388,889);
        glVertex2f(1388,881);
        glVertex2f(1295,881);
    glEnd();

    getColor("frontBuilding");
    glBegin(GL_QUADS);
        glVertex2f(1295,881);
        glVertex2f(1395,881);
        glVertex2f(1395,874);
        glVertex2f(1295,874);
    glEnd();

    getColor("frontBuilding");
    glBegin(GL_QUADS);
        glVertex2f(1295,874);
        glVertex2f(1403,874);
        glVertex2f(1403,865);
        glVertex2f(1295,865);
    glEnd();

    getColor("frontBuilding");
    glBegin(GL_QUADS);
        glVertex2f(1295,865);
        glVertex2f(1410,865);
        glVertex2f(1410,858);
        glVertex2f(1295,858);
    glEnd();

    getColor("frontBuilding");
    glBegin(GL_QUADS);
        glVertex2f(1295,858);
        glVertex2f(1426,858);
        glVertex2f(1426,843);
        glVertex2f(1295,843);
    glEnd();

    getColor("frontBuilding");
    glBegin(GL_QUADS);
        glVertex2f(1272,889);
        glVertex2f(1295,889);
        glVertex2f(1295,881);
        glVertex2f(1272,881);
    glEnd();

    getColor("frontBuilding");
    glBegin(GL_QUADS);
        glVertex2f(1272,881);
        glVertex2f(1280,881);
        glVertex2f(1280,874);
        glVertex2f(1272,874);
    glEnd();
//white_light
    getColor("whiteLight");
    glBegin(GL_QUADS);
        glVertex2f(1272,874);
        glVertex2f(1280,874);
        glVertex2f(1280,865);
        glVertex2f(1272,865);
    glEnd();

    getColor("frontBuildingShade");
    glBegin(GL_QUADS);
        glVertex2f(1181,843);
        glVertex2f(1188,843);
        glVertex2f(1188,796);
        glVertex2f(1181,796);
    glEnd();

    getColor("frontBuilding");
    glBegin(GL_QUADS);
        glVertex2f(1188,843);
        glVertex2f(1510,843);
        glVertex2f(1510,796);
        glVertex2f(1188,796);
    glEnd();

    getColor("frontBuildingShade");
    glBegin(GL_QUADS);
        glVertex2f(1165,797);
        glVertex2f(1172,797);
        glVertex2f(1172,720);
        glVertex2f(1165,720);
    glEnd();

    getColor("frontBuilding");
    glBegin(GL_QUADS);
        glVertex2f(1172,797);
        glVertex2f(1510,797);
        glVertex2f(1510,720);
        glVertex2f(1172,720);
    glEnd();

     getColor("frontBuildingShade");
     glBegin(GL_QUADS);
        glVertex2f(1181,720);
        glVertex2f(1188,720);
        glVertex2f(1188,689);
        glVertex2f(1181,689);
    glEnd();

    getColor("frontBuilding");
    glBegin(GL_QUADS);
        glVertex2f(1188,720);
        glVertex2f(1510,720);
        glVertex2f(1510,689);
        glVertex2f(1188,689);
    glEnd();

    getColor("frontBuildingShade");
    glBegin(GL_QUADS);
        glVertex2f(1165,689);
        glVertex2f(1172,689);
        glVertex2f(1172,621);
        glVertex2f(1165,621);
    glEnd();

    getColor("frontBuilding");
    glBegin(GL_QUADS);
        glVertex2f(1172,689);
        glVertex2f(1510,689);
        glVertex2f(1510,621);
        glVertex2f(1172,621);
    glEnd();

    getColor("frontBuildingShade");
    glBegin(GL_QUADS);
        glVertex2f(1181,621);
        glVertex2f(1188,621);
        glVertex2f(1188,590);
        glVertex2f(1181,590);
    glEnd();

    getColor("frontBuilding");
    glBegin(GL_QUADS);
        glVertex2f(1188,621);
        glVertex2f(1510,621);
        glVertex2f(1510,590);
        glVertex2f(1188,590);
    glEnd();

    getColor("frontBuildingShade");
    glBegin(GL_QUADS);
        glVertex2f(1165,590);
        glVertex2f(1172,590);
        glVertex2f(1172,521);
        glVertex2f(1165,521);
    glEnd();

    getColor("frontBuilding");
    glBegin(GL_QUADS);
        glVertex2f(1172,521);
        glVertex2f(1510,521);
        glVertex2f(1510,590);
        glVertex2f(1172,590);
    glEnd();

    getColor("frontBuildingShade");
    glBegin(GL_QUADS);
        glVertex2f(1181,521);
        glVertex2f(1188,521);
        glVertex2f(1188,322);
        glVertex2f(1181,322);
    glEnd();

    getColor("frontBuilding");
    glBegin(GL_QUADS);
        glVertex2f(1188,521);
        glVertex2f(1510,521);
        glVertex2f(1510,322);
        glVertex2f(1188,322);
    glEnd();

    getColor("frontBuildingShade");
    glBegin(GL_QUADS);
        glVertex2f(1165,322);
        glVertex2f(1172,322);
        glVertex2f(1172,238);
        glVertex2f(1165,238);
    glEnd();

    getColor("frontBuilding");
    glBegin(GL_QUADS);
        glVertex2f(1172,322);
        glVertex2f(1510,322);
        glVertex2f(1510,238);
        glVertex2f(1172,238);
    glEnd();

    getColor("frontBuildingShade");
    glBegin(GL_QUADS);
        glVertex2f(1181,238);
        glVertex2f(1188,238);
        glVertex2f(1188,192);
        glVertex2f(1181,192);
    glEnd();

    getColor("frontBuilding");
    glBegin(GL_QUADS);
        glVertex2f(1188,238);
        glVertex2f(1510,238);
        glVertex2f(1510,192);
        glVertex2f(1188,192);
    glEnd();

    getColor("frontBuildingShade");
    glBegin(GL_QUADS);
        glVertex2f(1165,192);
        glVertex2f(1172,192);
        glVertex2f(1172,126);
        glVertex2f(1165,126);
    glEnd();

    getColor("frontBuilding");
    glBegin(GL_QUADS);
        glVertex2f(1172,192);
        glVertex2f(1510,192);
        glVertex2f(1510,126);
        glVertex2f(1172,126);
    glEnd();
//window
    getColor("frontBuildingWindowOpen");
    glBegin(GL_QUADS);
        glVertex2f(1211,781);
        glVertex2f(1233,781);
        glVertex2f(1233,735);
        glVertex2f(1211,735);
    glEnd();

    getColor("frontBuildingWindowShade");
    glBegin(GL_QUADS);
        glVertex2f(1233,781);
        glVertex2f(1241,781);
        glVertex2f(1241,735);
        glVertex2f(1233,735);
    glEnd();

    getColor("frontBuilding");
    glBegin(GL_QUADS);
        glVertex2f(1211,766);
        glVertex2f(1241,766);
        glVertex2f(1241,759);
        glVertex2f(1211,759);
    glEnd();

    getColor("frontBuildingWindowClose");
    glBegin(GL_QUADS);
        glVertex2f(1256,781);
        glVertex2f(1287,781);
        glVertex2f(1287,736);
        glVertex2f(1256,736);
    glEnd();

    getColor("frontBuildingWindowClose");
    glBegin(GL_QUADS);
        glVertex2f(1403,789);
        glVertex2f(1433,789);
        glVertex2f(1433,743);
        glVertex2f(1403,743);
    glEnd();

    getColor("frontBuildingWindowClose");
    glBegin(GL_QUADS);
        glVertex2f(1450,789);
        glVertex2f(1479,789);
        glVertex2f(1479,743);
        glVertex2f(1450,743);
    glEnd();

    getColor("frontBuildingWindowClose");
    glBegin(GL_QUADS);
        glVertex2f(1212,682);
        glVertex2f(1241,682);
        glVertex2f(1241,636);
        glVertex2f(1212,636);
    glEnd();

    getColor("frontBuildingWindowOpen");
    glBegin(GL_QUADS);
        glVertex2f(1256,682);
        glVertex2f(1280,682);
        glVertex2f(1280,636);
        glVertex2f(1256,636);
    glEnd();

    getColor("frontBuildingWindowShade");
    glBegin(GL_QUADS);
        glVertex2f(1280,682);
        glVertex2f(1287,682);
        glVertex2f(1287,636);
        glVertex2f(1280,636);
    glEnd();

    getColor("frontBuildingWindowClose");
    glBegin(GL_QUADS);
        glVertex2f(1256,667);
        glVertex2f(1287,667);
        glVertex2f(1287,659);
        glVertex2f(1256,659);
    glEnd();

    getColor("frontBuildingWindowOpen");
    glBegin(GL_QUADS);
        glVertex2f(1403,689);
        glVertex2f(1426,689);
        glVertex2f(1426,643);
        glVertex2f(1403,643);
    glEnd();

    getColor("frontBuildingWindowShade");
    glBegin(GL_QUADS);
        glVertex2f(1426,689);
        glVertex2f(1434,689);
        glVertex2f(1434,643);
        glVertex2f(1426,643);
    glEnd();

    getColor("frontBuildingWindowClose");
    glBegin(GL_QUADS);
        glVertex2f(1403,674);
        glVertex2f(1434,674);
        glVertex2f(1434,667);
        glVertex2f(1403,667);
    glEnd();

    getColor("frontBuildingWindowOpen");
    glBegin(GL_QUADS);
        glVertex2f(1449,689);
        glVertex2f(1472,689);
        glVertex2f(1472,643);
        glVertex2f(1449,643);
    glEnd();

    getColor("frontBuildingWindowShade");
    glBegin(GL_QUADS);
        glVertex2f(1472,689);
        glVertex2f(1480,689);
        glVertex2f(1480,643);
        glVertex2f(1472,643);
    glEnd();

    getColor("frontBuildingWindowClose");
    glBegin(GL_QUADS);
        glVertex2f(1449,674);
        glVertex2f(1480,674);
        glVertex2f(1480,667);
        glVertex2f(1449,667);
    glEnd();

    getColor("frontBuildingWindowClose");
    glBegin(GL_QUADS);
        glVertex2f(1211,559);
        glVertex2f(1241,559);
        glVertex2f(1241,521);
        glVertex2f(1211,521);
    glEnd();

    getColor("frontBuildingWindowClose");
    glBegin(GL_QUADS);
        glVertex2f(1256,559);
        glVertex2f(1287,559);
        glVertex2f(1287,521);
        glVertex2f(1256,521);
    glEnd();

    getColor("frontBuildingWindowOpen");
    glBegin(GL_QUADS);
        glVertex2f(1403,567);
        glVertex2f(1426,567);
        glVertex2f(1426,521);
        glVertex2f(1403,521);
    glEnd();

    getColor("frontBuildingWindowShade");
    glBegin(GL_QUADS);
        glVertex2f(1426,567);
        glVertex2f(1434,567);
        glVertex2f(1434,521);
        glVertex2f(1426,521);
    glEnd();

    getColor("frontBuildingWindowClose");
    glBegin(GL_QUADS);
        glVertex2f(1403,552);
        glVertex2f(1434,552);
        glVertex2f(1434,545);
        glVertex2f(1403,545);
    glEnd();

    getColor("frontBuildingWindowClose");
    glBegin(GL_QUADS);
        glVertex2f(1450,567);
        glVertex2f(1480,567);
        glVertex2f(1480,521);
        glVertex2f(1450,521);
    glEnd();

    getColor("frontBuildingWindowOpen");
    glBegin(GL_QUADS);
        glVertex2f(1211,292);
        glVertex2f(1233,292);
        glVertex2f(1233,254);
        glVertex2f(1211,254);
    glEnd();

    getColor("frontBuildingWindowShade");
    glBegin(GL_QUADS);
        glVertex2f(1233,292);
        glVertex2f(1241,292);
        glVertex2f(1241,254);
        glVertex2f(1233,254);
    glEnd();

    getColor("frontBuildingWindowClose");
    glBegin(GL_QUADS);
        glVertex2f(1211,277);
        glVertex2f(1241,277);
        glVertex2f(1241,268);
        glVertex2f(1211,268);
    glEnd();

    getColor("frontBuildingWindowClose");
    glBegin(GL_QUADS);
        glVertex2f(1256,292);
        glVertex2f(1287,292);
        glVertex2f(1287,254);
        glVertex2f(1256,254);
    glEnd();

    getColor("frontBuildingWindowClose");
    glBegin(GL_QUADS);
        glVertex2f(1450,307);
        glVertex2f(1480,307);
        glVertex2f(1480,261);
        glVertex2f(1450,261);
    glEnd();

    getColor("frontBuildingWindowClose");
    glBegin(GL_QUADS);
        glVertex2f(1403,307);
        glVertex2f(1433,307);
        glVertex2f(1433,261);
        glVertex2f(1403,261);
    glEnd();

    getColor("frontBuildingWindowClose");
    glBegin(GL_QUADS);
        glVertex2f(1403,192);
        glVertex2f(1433,192);
        glVertex2f(1433,146);
        glVertex2f(1403,146);
    glEnd();

    getColor("frontBuildingWindowClose");
    glBegin(GL_QUADS);
        glVertex2f(1450,192);
        glVertex2f(1480,192);
        glVertex2f(1480,146);
        glVertex2f(1450,146);
    glEnd();

    getColor("frontBuildingWindowClose");
    glBegin(GL_QUADS);
        glVertex2f(1258,467);
        glVertex2f(1287,467);
        glVertex2f(1287,430);
        glVertex2f(1258,430);
    glEnd();

    getColor("frontBuildingWindowClose");
    glBegin(GL_QUADS);
        glVertex2f(1402,467);
        glVertex2f(1434,467);
        glVertex2f(1434,430);
        glVertex2f(1402,430);
    glEnd();

    getColor("frontBuildingWindowClose");
    glBegin(GL_QUADS);
        glVertex2f(1450,467);
        glVertex2f(1480,467);
        glVertex2f(1480,430);
        glVertex2f(1450,430);
    glEnd();

    getColor("frontBuildingWindowOpen");
    glBegin(GL_QUADS);
        glVertex2f(1211,467);
        glVertex2f(1233,467);
        glVertex2f(1233,430);
        glVertex2f(1211,430);
    glEnd();

    getColor("frontBuildingWindowShade");
    glBegin(GL_QUADS);
        glVertex2f(1233,467);
        glVertex2f(1241,467);
        glVertex2f(1241,430);
        glVertex2f(1233,430);
    glEnd();

    getColor("frontBuildingWindowClose");
    glBegin(GL_QUADS);
        glVertex2f(1211,449);
        glVertex2f(1241,449);
        glVertex2f(1241,442);
        glVertex2f(1211,442);
    glEnd();
}

//Front Building 4
void frontBuilding_4()
{
    getColor("frontBuildingShade");
    glBegin(GL_QUADS);
        glVertex2f(1541,1080);
        glVertex2f(1573,1080);
        glVertex2f(1573,126);
        glVertex2f(1541,126);
    glEnd();

    getColor("frontBuilding");
    glBegin(GL_QUADS);
        glVertex2f(1549,1080);
        glVertex2f(1572,1080);
        glVertex2f(1572,126);
        glVertex2f(1549,126);
    glEnd();
//1st_floor
    getColor("frontBuildingWindowClose");
    glBegin(GL_QUADS);
        glVertex2f(1573,1080);
        glVertex2f(1856,1080);
        glVertex2f(1856,1049);
        glVertex2f(1573,1049);
    glEnd();

    getColor("frontBuilding");
    glBegin(GL_QUADS);
        glVertex2f(1573,1049);
        glVertex2f(1919,1049);
        glVertex2f(1919,1018);
        glVertex2f(1573,1018);
    glEnd();

    getColor("frontBuildingWindowOpen");
    glBegin(GL_QUADS);
        glVertex2f(1856,1080);
        glVertex2f(1887,1080);
        glVertex2f(1887,1049);
        glVertex2f(1856,1049);
    glEnd();

    getColor("frontBuildingWindowClose");
    glBegin(GL_QUADS);
        glVertex2f(1887,1080);
        glVertex2f(1895,1080);
        glVertex2f(1895,1049);
        glVertex2f(1887,1049);
    glEnd();

    getColor("frontBuildingWindowOpen");
    glBegin(GL_POLYGON);
        glVertex2f(1895,1080);
        glVertex2f(1917,1080);
        glVertex2f(1917,1049);
        glVertex2f(1895,1049);
    glEnd();
//2nd_floor
    getColor("frontBuildingWindowClose");
    glBegin(GL_QUADS);
        glVertex2f(1573,1018);
        glVertex2f(1580,1018);
        glVertex2f(1580,980);
        glVertex2f(1573,980);
    glEnd();

    getColor("frontBuildingWindowOpen");
    glBegin(GL_QUADS);
        glVertex2f(1580,1018);
        glVertex2f(1610,1018);
        glVertex2f(1610,980);
        glVertex2f(1580,980);
    glEnd();

    getColor("frontBuildingWindowClose");
    glBegin(GL_QUADS);
        glVertex2f(1610,1018);
        glVertex2f(1618,1018);
        glVertex2f(1618,980);
        glVertex2f(1610,980);
    glEnd();

    getColor("frontBuildingWindowOpen");
    glBegin(GL_QUADS);
        glVertex2f(1618,1018);
        glVertex2f(1648,1018);
        glVertex2f(1648,980);
        glVertex2f(1618,980);
    glEnd();

    getColor("frontBuildingWindowClose");
    glBegin(GL_QUADS);
        glVertex2f(1648,1018);
        glVertex2f(1657,1018);
        glVertex2f(1657,980);
        glVertex2f(1648,980);
    glEnd();

    getColor("frontBuildingWindowOpen");
    glBegin(GL_QUADS);
        glVertex2f(1657,1018);
        glVertex2f(1710,1018);
        glVertex2f(1710,980);
        glVertex2f(1657,980);
    glEnd();

    getColor("frontBuildingWindowShade");
    glBegin(GL_QUADS);
        glVertex2f(1710,1018);
        glVertex2f(1718,1018);
        glVertex2f(1718,980);
        glVertex2f(1710,980);
    glEnd();

    getColor("frontBuildingWindowClose");
    glBegin(GL_QUADS);
        glVertex2f(1718,1018);
        glVertex2f(1919,1018);
        glVertex2f(1919,980);
        glVertex2f(1718,980);
    glEnd();
//3rd_floor
    getColor("frontBuilding");
    glBegin(GL_QUADS);
        glVertex2f(1573,980);
        glVertex2f(1919,980);
        glVertex2f(1919,949);
        glVertex2f(1573,949);
    glEnd();

    getColor("frontBuildingWindowClose");
    glBegin(GL_QUADS);
        glVertex2f(1573,949);
        glVertex2f(1919,949);
        glVertex2f(1919,912);
        glVertex2f(1573,912);
    glEnd();

    getColor("frontBuilding");
    glBegin(GL_QUADS);
        glVertex2f(1573,912);
        glVertex2f(1919,912);
        glVertex2f(1919,880);
        glVertex2f(1573,880);
    glEnd();
//4th_floor
    getColor("frontBuildingWindowClose");
    glBegin(GL_QUADS);
        glVertex2f(1573,880);
        glVertex2f(1587,880);
        glVertex2f(1587,843);
        glVertex2f(1573,843);
    glEnd();

    getColor("frontBuildingWindowOpen");
    glBegin(GL_QUADS);
        glVertex2f(1587,880);
        glVertex2f(1618,880);
        glVertex2f(1618,843);
        glVertex2f(1587,843);
    glEnd();

    getColor("frontBuildingWindowClose");
    glBegin(GL_QUADS);
        glVertex2f(1618,880);
        glVertex2f(1626,880);
        glVertex2f(1626,843);
        glVertex2f(1618,843);
    glEnd();

    getColor("frontBuildingWindowOpen");
    glBegin(GL_QUADS);
        glVertex2f(1626,880);
        glVertex2f(1664,880);
        glVertex2f(1664,843);
        glVertex2f(1626,843);
    glEnd();

    getColor("frontBuildingWindowShade");
    glBegin(GL_QUADS);
        glVertex2f(1664,880);
        glVertex2f(1672,880);
        glVertex2f(1672,843);
        glVertex2f(1664,843);
    glEnd();

    getColor("frontBuildingWindowClose");
    glBegin(GL_QUADS);
        glVertex2f(1672,880);
        glVertex2f(1848,880);
        glVertex2f(1848,843);
        glVertex2f(1672,843);
    glEnd();

    getColor("frontBuildingWindowOpen");
    glBegin(GL_QUADS);
        glVertex2f(1849,880);
        glVertex2f(1879,880);
        glVertex2f(1879,843);
        glVertex2f(1849,843);
    glEnd();

    getColor("frontBuildingWindowShade");
    glBegin(GL_QUADS);
        glVertex2f(1879,880);
        glVertex2f(1887,880);
        glVertex2f(1887,843);
        glVertex2f(1879,843);
    glEnd();

    getColor("frontBuildingWindowClose");
    glBegin(GL_QUADS);
        glVertex2f(1887,880);
        glVertex2f(1919,880);
        glVertex2f(1919,843);
        glVertex2f(1887,843);
    glEnd();

    getColor("frontBuilding");
    glBegin(GL_QUADS);
        glVertex2f(1572,843);
        glVertex2f(1919,843);
        glVertex2f(1919,812);
        glVertex2f(1572,812);
    glEnd();
//5th_floor
    getColor("frontBuildingWindowClose");
    glBegin(GL_QUADS);
        glVertex2f(1573,812);
        glVertex2f(1733,812);
        glVertex2f(1733,774);
        glVertex2f(1573,774);
    glEnd();

    getColor("frontBuildingWindowOpen");
    glBegin(GL_QUADS);
        glVertex2f(1733,812);
        glVertex2f(1764,812);
        glVertex2f(1764,774);
        glVertex2f(1733,774);
    glEnd();

    getColor("frontBuildingWindowShade");
    glBegin(GL_QUADS);
        glVertex2f(1764,812);
        glVertex2f(1771,812);
        glVertex2f(1771,774);
        glVertex2f(1764,774);
    glEnd();

    getColor("frontBuildingWindowClose");
    glBegin(GL_QUADS);
        glVertex2f(1771,812);
        glVertex2f(1919,812);
        glVertex2f(1919,774);
        glVertex2f(1771,774);
    glEnd();

    getColor("frontBuilding");
    glBegin(GL_QUADS);
        glVertex2f(1573,774);
        glVertex2f(1919,774);
        glVertex2f(1919,743);
        glVertex2f(1573,743);
    glEnd();
//6th_floor
    getColor("frontBuildingWindowClose");
    glBegin(GL_QUADS);
        glVertex2f(1573,743);
        glVertex2f(1919,743);
        glVertex2f(1919,705);
        glVertex2f(1573,705);
    glEnd();

    getColor("frontBuilding");
    glBegin(GL_QUADS);
        glVertex2f(1573,705);
        glVertex2f(1919,705);
        glVertex2f(1919,674);
        glVertex2f(1573,674);
    glEnd();
//7th_floor
    getColor("frontBuildingWindowClose");
    glBegin(GL_QUADS);
        glVertex2f(1573,674);
        glVertex2f(1610,674);
        glVertex2f(1610,636);
        glVertex2f(1573,636);
    glEnd();

    getColor("frontBuildingWindowOpen");
    glBegin(GL_QUADS);
        glVertex2f(1610,674);
        glVertex2f(1672,674);
        glVertex2f(1672,636);
        glVertex2f(1610,636);
    glEnd();

    getColor("frontBuildingWindowClose");
    glBegin(GL_QUADS);
        glVertex2f(1672,674);
        glVertex2f(1679,674);
        glVertex2f(1679,636);
        glVertex2f(1672,636);
    glEnd();

    getColor("frontBuildingWindowOpen");
    glBegin(GL_QUADS);
        glVertex2f(1679,674);
        glVertex2f(1733,674);
        glVertex2f(1733,636);
        glVertex2f(1679,636);
    glEnd();

    getColor("frontBuildingWindowClose");
    glBegin(GL_QUADS);
        glVertex2f(1733,674);
        glVertex2f(1741,674);
        glVertex2f(1741,636);
        glVertex2f(1733,636);
    glEnd();

    getColor("frontBuildingWindowOpen");
    glBegin(GL_QUADS);
        glVertex2f(1741,674);
        glVertex2f(1771,674);
        glVertex2f(1771,636);
        glVertex2f(1741,636);
    glEnd();

    getColor("frontBuildingWindowShade");
    glBegin(GL_QUADS);
        glVertex2f(1771,674);
        glVertex2f(1779,674);
        glVertex2f(1779,636);
        glVertex2f(1771,636);
    glEnd();

    getColor("frontBuildingWindowClose");
    glBegin(GL_QUADS);
        glVertex2f(1779,674);
        glVertex2f(1919,674);
        glVertex2f(1919,636);
        glVertex2f(1779,636);
    glEnd();

    getColor("frontBuilding");
    glBegin(GL_QUADS);
        glVertex2f(1573,636);
        glVertex2f(1919,636);
        glVertex2f(1919,605);
        glVertex2f(1573,605);
    glEnd();
//8th_floor
    getColor("frontBuildingWindowClose");
    glBegin(GL_QUADS);
        glVertex2f(1573,605);
        glVertex2f(1587,605);
        glVertex2f(1587,567);
        glVertex2f(1573,567);
    glEnd();

    getColor("frontBuildingWindowOpen");
    glBegin(GL_QUADS);
        glVertex2f(1587,605);
        glVertex2f(1618,605);
        glVertex2f(1618,567);
        glVertex2f(1587,567);
    glEnd();

    getColor("frontBuildingWindowClose");
    glBegin(GL_QUADS);
        glVertex2f(1618,605);
        glVertex2f(1626,605);
        glVertex2f(1626,567);
        glVertex2f(1618,567);
    glEnd();

    getColor("frontBuildingWindowOpen");
    glBegin(GL_QUADS);
        glVertex2f(1626,605);
        glVertex2f(1648,605);
        glVertex2f(1648,567);
        glVertex2f(1626,567);
    glEnd();

    getColor("frontBuildingWindowShade");
    glBegin(GL_QUADS);
        glVertex2f(1650,605);
        glVertex2f(1658,605);
        glVertex2f(1658,567);
        glVertex2f(1650,567);
    glEnd();
//9th_floor
    getColor("frontBuildingWindowClose");
    glBegin(GL_QUADS);
        glVertex2f(1657,605);
        glVertex2f(1818,605);
        glVertex2f(1818,567);
        glVertex2f(1657,567);
    glEnd();

    getColor("frontBuildingWindowOpen");
    glBegin(GL_QUADS);
        glVertex2f(1818,605);
        glVertex2f(1841,605);
        glVertex2f(1841,567);
        glVertex2f(1818,567);
    glEnd();

    getColor("frontBuildingWindowClose");
    glBegin(GL_QUADS);
        glVertex2f(1841,605);
        glVertex2f(1849,605);
        glVertex2f(1849,567);
        glVertex2f(1841,567);
    glEnd();

    getColor("frontBuildingWindowOpen");
    glBegin(GL_QUADS);
        glVertex2f(1849,605);
        glVertex2f(1872,605);
        glVertex2f(1872,567);
        glVertex2f(1849,567);
    glEnd();

    getColor("frontBuildingWindowShade");
    glBegin(GL_QUADS);
        glVertex2f(1872,605);
        glVertex2f(1879,605);
        glVertex2f(1879,567);
        glVertex2f(1872,567);
    glEnd();

    getColor("frontBuildingWindowClose");
    glBegin(GL_QUADS);
        glVertex2f(1879,605);
        glVertex2f(1919,605);
        glVertex2f(1919,567);
        glVertex2f(1879,567);
    glEnd();

    getColor("frontBuilding");
    glBegin(GL_QUADS);
        glVertex2f(1572,567);
        glVertex2f(1919,567);
        glVertex2f(1919,537);
        glVertex2f(1572,537);
    glEnd();
//10th_floor
    getColor("frontBuildingWindowClose");
    glBegin(GL_QUADS);
        glVertex2f(1573,536);
        glVertex2f(1779,536);
        glVertex2f(1779,498);
        glVertex2f(1573,498);
    glEnd();

    getColor("frontBuildingWindowOpen");
    glBegin(GL_QUADS);
        glVertex2f(1779,536);
        glVertex2f(1810,536);
        glVertex2f(1810,498);
        glVertex2f(1779,498);
    glEnd();

    getColor("frontBuildingWindowClose");
    glBegin(GL_QUADS);
        glVertex2f(1810,536);
        glVertex2f(1818,536);
        glVertex2f(1818,498);
        glVertex2f(1810,498);
    glEnd();

    getColor("frontBuildingWindowOpen");
    glBegin(GL_QUADS);
        glVertex2f(1818,536);
        glVertex2f(1841,536);
        glVertex2f(1841,498);
        glVertex2f(1818,498);
    glEnd();

    getColor("frontBuildingWindowShade");
    glBegin(GL_QUADS);
        glVertex2f(1841,536);
        glVertex2f(1849,536);
        glVertex2f(1849,498);
        glVertex2f(1841,498);
    glEnd();
//11th_floor
    getColor("frontBuildingWindowClose");
    glBegin(GL_QUADS);
        glVertex2f(1849,536);
        glVertex2f(1919,536);
        glVertex2f(1919,498);
        glVertex2f(1849,498);
    glEnd();

    getColor("frontBuilding");
    glBegin(GL_QUADS);
        glVertex2f(1573,498);
        glVertex2f(1919,498);
        glVertex2f(1919,475);
        glVertex2f(1573,475);
    glEnd();

    getColor("frontBuildingWindowClose");
    glBegin(GL_QUADS);
        glVertex2f(1573,475);
        glVertex2f(1919,475);
        glVertex2f(1919,436);
        glVertex2f(1573,436);
    glEnd();

    getColor("frontBuilding");
    glBegin(GL_QUADS);
        glVertex2f(1573,436);
        glVertex2f(1919,436);
        glVertex2f(1919,337);
        glVertex2f(1573,337);
    glEnd();
//12th_floor
    getColor("frontBuildingWindowClose");
    glBegin(GL_QUADS);
        glVertex2f(1573,337);
        glVertex2f(1656,337);
        glVertex2f(1656,299);
        glVertex2f(1573,299);
    glEnd();

    getColor("frontBuildingWindowOpen");
    glBegin(GL_QUADS);
        glVertex2f(1656,337);
        glVertex2f(1687,337);
        glVertex2f(1687,299);
        glVertex2f(1656,299);
    glEnd();

    getColor("frontBuildingWindowShade");
    glBegin(GL_QUADS);
        glVertex2f(1687,337);
        glVertex2f(1695,337);
        glVertex2f(1695,299);
        glVertex2f(1687,299);
    glEnd();

    getColor("frontBuildingWindowClose");
    glBegin(GL_QUADS);
        glVertex2f(1695,337);
        glVertex2f(1841,337);
        glVertex2f(1841,299);
        glVertex2f(1695,299);
    glEnd();

    getColor("frontBuildingWindowOpen");
    glBegin(GL_QUADS);
        glVertex2f(1841,337);
        glVertex2f(1872,337);
        glVertex2f(1872,299);
        glVertex2f(1841,299);
    glEnd();

    getColor("frontBuildingWindowShade");
    glBegin(GL_QUADS);
        glVertex2f(1872,337);
        glVertex2f(1879,337);
        glVertex2f(1879,299);
        glVertex2f(1872,299);
    glEnd();

    getColor("frontBuildingWindowClose");
    glBegin(GL_QUADS);
        glVertex2f(1879,337);
        glVertex2f(1919,337);
        glVertex2f(1919,299);
        glVertex2f(1879,299);
    glEnd();

    getColor("frontBuilding");
    glBegin(GL_QUADS);
        glVertex2f(1549,299);
        glVertex2f(1919,299);
        glVertex2f(1919,254);
        glVertex2f(1549,254);
    glEnd();
//13rh_floor
    getColor("frontBuildingWindowOpen");
    glBegin(GL_QUADS);
        glVertex2f(1573,254);
        glVertex2f(1626,254);
        glVertex2f(1626,215);
        glVertex2f(1573,215);
    glEnd();

    getColor("frontBuildingWindowClose");
    glBegin(GL_QUADS);
        glVertex2f(1626,254);
        glVertex2f(1633,254);
        glVertex2f(1633,215);
        glVertex2f(1626,215);
    glEnd();

    getColor("frontBuildingWindowOpen");
    glBegin(GL_QUADS);
        glVertex2f(1633,254);
        glVertex2f(1687,254);
        glVertex2f(1687,215);
        glVertex2f(1633,215);
    glEnd();

    getColor("frontBuildingWindowClose");
    glBegin(GL_QUADS);
        glVertex2f(1687,254);
        glVertex2f(1695,254);
        glVertex2f(1695,215);
        glVertex2f(1687,215);
    glEnd();

    getColor("frontBuildingWindowOpen");
    glBegin(GL_QUADS);
        glVertex2f(1695,254);
        glVertex2f(1733,254);
        glVertex2f(1733,215);
        glVertex2f(1695,215);
    glEnd();

    getColor("frontBuildingWindowShade");
    glBegin(GL_QUADS);
        glVertex2f(1733,254);
        glVertex2f(1741,254);
        glVertex2f(1741,215);
        glVertex2f(1733,215);
    glEnd();

    getColor("frontBuildingWindowClose");
    glBegin(GL_QUADS);
        glVertex2f(1741,254);
        glVertex2f(1910,254);
        glVertex2f(1910,215);
        glVertex2f(1741,215);
    glEnd();

    getColor("frontBuildingWindowOpen");
    glBegin(GL_QUADS);
        glVertex2f(1910,254);
        glVertex2f(1919,254);
        glVertex2f(1919,215);
        glVertex2f(1910,215);
    glEnd();
//14th_floor
    getColor("frontBuilding");
    glBegin(GL_QUADS);
        glVertex2f(1549,215);
        glVertex2f(1919,215);
        glVertex2f(1919,185);
        glVertex2f(1549,185);
    glEnd();

    getColor("frontBuildingWindowOpen");
    glBegin(GL_QUADS);
        glVertex2f(1573,185);
        glVertex2f(1626,185);
        glVertex2f(1626,146);
        glVertex2f(1573,146);
    glEnd();

    getColor("frontBuildingWindowClose");
    glBegin(GL_QUADS);
        glVertex2f(1626,185);
        glVertex2f(1633,185);
        glVertex2f(1633,146);
        glVertex2f(1626,146);
    glEnd();

    getColor("frontBuildingWindowOpen");
    glBegin(GL_QUADS);
        glVertex2f(1633,185);
        glVertex2f(1687,185);
        glVertex2f(1687,146);
        glVertex2f(1633,146);
    glEnd();

    getColor("frontBuildingWindowClose");
    glBegin(GL_QUADS);
        glVertex2f(1687,185);
        glVertex2f(1695,185);
        glVertex2f(1695,146);
        glVertex2f(1687,146);
    glEnd();

    getColor("frontBuildingWindowOpen");
    glBegin(GL_QUADS);
        glVertex2f(1695,185);
        glVertex2f(1733,185);
        glVertex2f(1733,146);
        glVertex2f(1695,146);
    glEnd();

    getColor("frontBuildingWindowShade");
    glBegin(GL_QUADS);
        glVertex2f(1733,185);
        glVertex2f(1741,185);
        glVertex2f(1741,146);
        glVertex2f(1733,146);
    glEnd();

    getColor("frontBuildingWindowClose");
    glBegin(GL_QUADS);
        glVertex2f(1741,185);
        glVertex2f(1919,185);
        glVertex2f(1919,146);
        glVertex2f(1741,146);
    glEnd();

    getColor("frontBuilding");
    glBegin(GL_QUADS);
        glVertex2f(1573,146);
        glVertex2f(1919,146);
        glVertex2f(1919,126);
        glVertex2f(1573,126);
    glEnd();

    getColor("frontBuildingShade");
    glBegin(GL_QUADS);
        glVertex2f(1526,1034);
        glVertex2f(1541,1034);
        glVertex2f(1541,1026);
        glVertex2f(1526,1026);
    glEnd();

    getColor("frontBuilding");
    glBegin(GL_QUADS);
        glVertex2f(1534,1026);
        glVertex2f(1541,1026);
        glVertex2f(1541,1018);
        glVertex2f(1534,1018);
    glEnd();

    getColor("frontBuildingShade");
    glBegin(GL_QUADS);
        glVertex2f(1526,911);
        glVertex2f(1541,911);
        glVertex2f(1541,904);
        glVertex2f(1526,904);
    glEnd();

    getColor("frontBuilding");
    glBegin(GL_QUADS);
        glVertex2f(1534,904);
        glVertex2f(1541,904);
        glVertex2f(1541,896);
        glVertex2f(1534,896);
    glEnd();

    getColor("frontBuildingShade");
    glBegin(GL_QUADS);
        glVertex2f(1526,804);
        glVertex2f(1542,804);
        glVertex2f(1542,796);
        glVertex2f(1526,796);
    glEnd();

    getColor("frontBuilding");
    glBegin(GL_QUADS);
        glVertex2f(1534,796);
        glVertex2f(1541,796);
        glVertex2f(1541,790);
        glVertex2f(1534,790);
    glEnd();

    getColor("frontBuildingShade");
    glBegin(GL_QUADS);
        glVertex2f(1526,704);
        glVertex2f(1541,704);
        glVertex2f(1541,696);
        glVertex2f(1526,696);
    glEnd();

    getColor("frontBuilding");
    glBegin(GL_QUADS);
        glVertex2f(1534,696);
        glVertex2f(1541,696);
        glVertex2f(1541,690);
        glVertex2f(1534,690);
    glEnd();

    getColor("frontBuildingShade");
    glBegin(GL_QUADS);
        glVertex2f(1526,589);
        glVertex2f(1541,589);
        glVertex2f(1541,582);
        glVertex2f(1526,582);
    glEnd();

    getColor("frontBuilding");
    glBegin(GL_QUADS);
        glVertex2f(1534,582);
        glVertex2f(1541,582);
        glVertex2f(1541,575);
        glVertex2f(1534,575);
    glEnd();
}

//Rope
void rope()
{
    getColor("frontBuilding");
    glBegin(GL_QUADS);
        glVertex2f(719,651);
        glVertex2f(726,651);
        glVertex2f(726,643);
        glVertex2f(719,643);
    glEnd();

    getColor("frontBuilding");
    glBegin(GL_QUADS);
        glVertex2f(726,643);
        glVertex2f(735,643);
        glVertex2f(735,636);
        glVertex2f(726,636);
    glEnd();

    getColor("frontBuilding");
    glBegin(GL_QUADS);
        glVertex2f(735,636);
        glVertex2f(742,636);
        glVertex2f(742,628);
        glVertex2f(735,628);
    glEnd();

    getColor("frontBuilding");
    glBegin(GL_QUADS);
        glVertex2f(742,628);
        glVertex2f(750,628);
        glVertex2f(750,620);
        glVertex2f(742,620);
    glEnd();

    getColor("frontBuilding");
    glBegin(GL_QUADS);
        glVertex2f(750,620);
        glVertex2f(758,620);
        glVertex2f(758,613);
        glVertex2f(750,613);
    glEnd();

    getColor("frontBuilding");
    glBegin(GL_QUADS);
        glVertex2f(758,613);
        glVertex2f(773,613);
        glVertex2f(773,605);
        glVertex2f(758,605);
    glEnd();

    getColor("frontBuilding");
    glBegin(GL_QUADS);
        glVertex2f(773,605);
        glVertex2f(789,605);
        glVertex2f(789,598);
        glVertex2f(773,598);
    glEnd();

    getColor("frontBuilding");
    glBegin(GL_QUADS);
        glVertex2f(789,598);
        glVertex2f(803,598);
        glVertex2f(803,590);
        glVertex2f(789,590);
    glEnd();

    getColor("frontBuilding");
    glBegin(GL_QUADS);
        glVertex2f(803,590);
        glVertex2f(826,590);
        glVertex2f(826,582);
        glVertex2f(803,582);
    glEnd();

    getColor("frontBuilding");
    glBegin(GL_QUADS);
        glVertex2f(826,582);
        glVertex2f(850,582);
        glVertex2f(850,574);
        glVertex2f(826,574);
    glEnd();

    getColor("frontBuilding");
    glBegin(GL_QUADS);
        glVertex2f(850,574);
        glVertex2f(872,574);
        glVertex2f(872,567);
        glVertex2f(850,567);
    glEnd();

    getColor("frontBuilding");
    glBegin(GL_QUADS);
        glVertex2f(988,567);
        glVertex2f(1018,567);
        glVertex2f(1018,574);
        glVertex2f(988,574);
    glEnd();

    getColor("frontBuilding");
    glBegin(GL_QUADS);
        glVertex2f(1018,582);
        glVertex2f(1058,582);
        glVertex2f(1058,574);
        glVertex2f(1018,574);
    glEnd();

    getColor("frontBuilding");
    glBegin(GL_QUADS);
        glVertex2f(1058,590);
        glVertex2f(1080,590);
        glVertex2f(1080,582);
        glVertex2f(1058,582);
    glEnd();

    getColor("frontBuilding");
    glBegin(GL_QUADS);
        glVertex2f(1080,597);
        glVertex2f(1088,597);
        glVertex2f(1088,591);
        glVertex2f(1080,591);
    glEnd();

    getColor("frontBuilding");
    glBegin(GL_QUADS);
        glVertex2f(1088,605);
        glVertex2f(1103,605);
        glVertex2f(1103,599);
        glVertex2f(1088,599);
    glEnd();

    getColor("frontBuilding");
    glBegin(GL_QUADS);
        glVertex2f(1103,613);
        glVertex2f(1119,613);
        glVertex2f(1119,605);
        glVertex2f(1103,605);
    glEnd();

    getColor("frontBuilding");
    glBegin(GL_QUADS);
        glVertex2f(449,712);
        glVertex2f(473,712);
        glVertex2f(473,705);
        glVertex2f(449,705);
    glEnd();

    getColor("frontBuilding");
    glBegin(GL_QUADS);
        glVertex2f(1119,620);
        glVertex2f(1128,620);
        glVertex2f(1128,613);
        glVertex2f(1119,613);
    glEnd();

    getColor("frontBuilding");
    glBegin(GL_QUADS);
        glVertex2f(1128,628);
        glVertex2f(1134,628);
        glVertex2f(1134,621);
        glVertex2f(1128,621);
    glEnd();

    getColor("frontBuilding");
    glBegin(GL_QUADS);
        glVertex2f(1134,636);
        glVertex2f(1149,636);
        glVertex2f(1149,628);
        glVertex2f(1134,628);
    glEnd();

    getColor("frontBuilding");
    glBegin(GL_QUADS);
        glVertex2f(1149,643);
        glVertex2f(1157,643);
        glVertex2f(1157,636);
        glVertex2f(1149,636);
    glEnd();

    getColor("frontBuilding");
    glBegin(GL_QUADS);
        glVertex2f(1158,651);
        glVertex2f(1165,651);
        glVertex2f(1165,644);
        glVertex2f(1158,644);
    glEnd();

    getColor("frontBuilding");
    glBegin(GL_QUADS);
        glVertex2f(1150,552);
        glVertex2f(1165,552);
        glVertex2f(1165,545);
        glVertex2f(1150,545);
    glEnd();

    getColor("frontBuilding");
    glBegin(GL_QUADS);
        glVertex2f(988,545);
        glVertex2f(1150,545);
        glVertex2f(1150,536);
        glVertex2f(988,536);
    glEnd();

    getColor("frontBuilding");
    glBegin(GL_QUADS);
        glVertex2f(926,552);
        glVertex2f(988,552);
        glVertex2f(988,545);
        glVertex2f(926,545);
    glEnd();

    getColor("frontBuilding");
    glBegin(GL_QUADS);
        glVertex2f(895,559);
        glVertex2f(926,559);
        glVertex2f(926,552);
        glVertex2f(895,552);
    glEnd();

    getColor("frontBuilding");
    glBegin(GL_QUADS);
        glVertex2f(789,567);
        glVertex2f(988,567);
        glVertex2f(988,559);
        glVertex2f(789,559);
    glEnd();

    getColor("frontBuilding");
    glBegin(GL_QUADS);
        glVertex2f(766,574);
        glVertex2f(789,574);
        glVertex2f(789,567);
        glVertex2f(766,567);
    glEnd();

    getColor("frontBuilding");
    glBegin(GL_QUADS);
        glVertex2f(758,582);
        glVertex2f(766,582);
        glVertex2f(766,574);
        glVertex2f(758,574);
    glEnd();

    getColor("frontBuilding");
    glBegin(GL_QUADS);
        glVertex2f(750,589);
        glVertex2f(758,589);
        glVertex2f(758,582);
        glVertex2f(750,582);
    glEnd();
}

//Train Bridge
void trainBridge()
{
//black_line
    getColor("bridge");
    glBegin(GL_QUADS);
        glVertex2f(0,430);
        glVertex2f(1919,430);
        glVertex2f(1919,422);
        glVertex2f(0,422);
    glEnd();

    getColor("bridge");
    glBegin(GL_QUADS);
        glVertex2f(0,414);
        glVertex2f(1919,414);
        glVertex2f(1919,360);
        glVertex2f(0,360);
    glEnd();

    getColor("bridge");
    glBegin(GL_QUADS);
        glVertex2f(467,422);
        glVertex2f(489,422);
        glVertex2f(489,414);
        glVertex2f(467,414);
    glEnd();

    getColor("bridge");
    glBegin(GL_QUADS);
        glVertex2f(603,422);
        glVertex2f(620,422);
        glVertex2f(620,414);
        glVertex2f(603,414);
    glEnd();

    getColor("bridge");
    glBegin(GL_QUADS);
        glVertex2f(812,422);
        glVertex2f(831,422);
        glVertex2f(831,414);
        glVertex2f(812,414);
    glEnd();

    getColor("bridge");
    glBegin(GL_QUADS);
        glVertex2f(980,422);
        glVertex2f(993,422);
        glVertex2f(993,414);
        glVertex2f(980,414);
    glEnd();

    getColor("bridge");
    glBegin(GL_POLYGON);
        glVertex2f(1178,422);
        glVertex2f(1193,422);
        glVertex2f(1193,414);
        glVertex2f(1178,414);
    glEnd();

    getColor("bridge");
    glBegin(GL_QUADS);
        glVertex2f(1394,422);
        glVertex2f(1410,422);
        glVertex2f(1410,414);
        glVertex2f(1394,414);
    glEnd();

    getColor("bridge");
    glBegin(GL_QUADS);
        glVertex2f(1555,422);
        glVertex2f(1570,422);
        glVertex2f(1570,414);
        glVertex2f(1555,414);
    glEnd();

    getColor("bridge");
    glBegin(GL_QUADS);
        glVertex2f(1710,422);
        glVertex2f(1726,422);
        glVertex2f(1726,414);
        glVertex2f(1710,414);
    glEnd();

    getColor("bridge");
    glBegin(GL_QUADS);
        glVertex2f(1862,422);
        glVertex2f(1879,422);
        glVertex2f(1879,414);
        glVertex2f(1862,414);
    glEnd();
//red_stand
    getColor("bench");
    glBegin(GL_QUADS);
        glVertex2f(105,445);
        glVertex2f(157,445);
        glVertex2f(157,430);
        glVertex2f(105,430);
    glEnd();

    getColor("bench");
    glBegin(GL_QUADS);
        glVertex2f(112,430);
        glVertex2f(119,430);
        glVertex2f(119,414);
        glVertex2f(112,414);
    glEnd();

    getColor("bench");
    glBegin(GL_QUADS);
        glVertex2f(142,430);
        glVertex2f(150,430);
        glVertex2f(150,414);
        glVertex2f(142,414);
    glEnd();

    getColor("bench");
    glBegin(GL_QUADS);
        glVertex2f(211,445);
        glVertex2f(265,445);
        glVertex2f(265,430);
        glVertex2f(211,430);
    glEnd();

    getColor("bench");
    glBegin(GL_QUADS);
        glVertex2f(220,430);
        glVertex2f(227,430);
        glVertex2f(227,414);
        glVertex2f(220,414);
    glEnd();

     getColor("bench");
     glBegin(GL_QUADS);
        glVertex2f(251,430);
        glVertex2f(258,430);
        glVertex2f(258,414);
        glVertex2f(251,414);
    glEnd();
//gray_stand
    getColor("bridgeShade");
    glBegin(GL_QUADS);
        glVertex2f(58,505);
        glVertex2f(319,505);
        glVertex2f(319,490);
        glVertex2f(58,490);
    glEnd();

    getColor("bridgeShade");
    glBegin(GL_QUADS);
        glVertex2f(81,490);
        glVertex2f(96,490);
        glVertex2f(96,414);
        glVertex2f(81,414);
    glEnd();

    getColor("bridgeShade");
    glBegin(GL_QUADS);
        glVertex2f(281,490);
        glVertex2f(296,490);
        glVertex2f(296,414);
        glVertex2f(281,414);
    glEnd();

    getColor("bridgeShade");
    glBegin(GL_QUADS);
        glVertex2f(343,467);
        glVertex2f(350,467);
        glVertex2f(350,414);
        glVertex2f(343,414);
    glEnd();
//red_light
    getColor("redLight");
    glBegin(GL_QUADS);
        glVertex2f(343,452);
        glVertex2f(350,452);
        glVertex2f(350,445);
        glVertex2f(343,445);
    glEnd();
//left_1st_stair(black)
    getColor("bridge");
    glBegin(GL_QUADS);
        glVertex2f(0,351);
        glVertex2f(12,351);
        glVertex2f(12,345);
        glVertex2f(0,345);
    glEnd();

    getColor("bridge");
    glBegin(GL_QUADS);
        glVertex2f(12,345);
        glVertex2f(34,345);
        glVertex2f(34,337);
        glVertex2f(12,337);
    glEnd();

    getColor("bridge");
    glBegin(GL_QUADS);
        glVertex2f(34,329);
        glVertex2f(50,329);
        glVertex2f(50,323);
        glVertex2f(34,323);
    glEnd();

    getColor("bridge");
    glBegin(GL_QUADS);
        glVertex2f(50,323);
        glVertex2f(57,323);
        glVertex2f(57,308);
        glVertex2f(50,308);
    glEnd();

    getColor("bridge");
    glBegin(GL_QUADS);
        glVertex2f(50,315);
        glVertex2f(73,315);
        glVertex2f(73,308);
        glVertex2f(50,308);
    glEnd();

    getColor("bridge");
    glBegin(GL_QUADS);
        glVertex2f(81,329);
        glVertex2f(88,329);
        glVertex2f(88,323);
        glVertex2f(81,323);
    glEnd();

    getColor("bridge");
    glBegin(GL_QUADS);
        glVertex2f(58,315);
        glVertex2f(65,315);
        glVertex2f(65,299);
        glVertex2f(58,299);
    glEnd();

    getColor("bridge");
    glBegin(GL_QUADS);
        glVertex2f(34,307);
        glVertex2f(50,307);
        glVertex2f(50,292);
        glVertex2f(34,292);
    glEnd();

    getColor("bridge");
    glBegin(GL_QUADS);
        glVertex2f(50,299);
        glVertex2f(181,299);
        glVertex2f(181,292);
        glVertex2f(50,292);
    glEnd();

    getColor("bridge");
    glBegin(GL_QUADS);
        glVertex2f(58,292);
        glVertex2f(104,292);
        glVertex2f(104,284);
        glVertex2f(58,284);
    glEnd();

    getColor("bridge");
    glBegin(GL_QUADS);
        glVertex2f(50,284);
        glVertex2f(88,284);
        glVertex2f(88,277);
        glVertex2f(50,277);
    glEnd();
//Grey_pillar(left_1st)
    getColor("bridgeShade");
    glBegin(GL_QUADS);
        glVertex2f(12,360);
        glVertex2f(19,360);
        glVertex2f(19,345);
        glVertex2f(12,345);
    glEnd();
//black_line
    getColor("bridge");
    glBegin(GL_QUADS);
        glVertex2f(0,299);
        glVertex2f(1920,299);
        glVertex2f(1920,292);
        glVertex2f(0,292);
    glEnd();
//grey
    getColor("bridgeShade");
    glBegin(GL_QUADS);
        glVertex2f(12,337);
        glVertex2f(19,337);
        glVertex2f(19,299);
        glVertex2f(12,299);
    glEnd();

    getColor("bridgeShade");
    glBegin(GL_QUADS);
        glVertex2f(12,292);
        glVertex2f(19,292);
        glVertex2f(19,126);
        glVertex2f(12,126);
    glEnd();
//black_pillar
    getColor("bridge");
    glBegin(GL_QUADS);
        glVertex2f(19,360);
        glVertex2f(34,360);
        glVertex2f(34,126);
        glVertex2f(19,126);
    glEnd();

    getColor("bridge");
    glBegin(GL_QUADS);
        glVertex2f(19,360);
        glVertex2f(34,360);
        glVertex2f(34,126);
        glVertex2f(19,126);
    glEnd();

    getColor("bridge");
    glBegin(GL_QUADS);
        glVertex2f(34,277);
        glVertex2f(73,277);
        glVertex2f(73,268);
        glVertex2f(34,268);
    glEnd();

    getColor("bridge");
    glBegin(GL_QUADS);
        glVertex2f(34,268);
        glVertex2f(65,268);
        glVertex2f(65,254);
        glVertex2f(34,254);
    glEnd();

    getColor("bridge");
    glBegin(GL_QUADS);
        glVertex2f(50,254);
        glVertex2f(81,254);
        glVertex2f(81,246);
        glVertex2f(50,246);
    glEnd();

    getColor("bridge");
    glBegin(GL_QUADS);
        glVertex2f(65,246);
        glVertex2f(96,246);
        glVertex2f(96,238);
        glVertex2f(65,238);
    glEnd();

    getColor("bridge");
    glBegin(GL_QUADS);
        glVertex2f(65,323);
        glVertex2f(81,323);
        glVertex2f(81,315);
        glVertex2f(65,315);
    glEnd();

    getColor("bridge");
    glBegin(GL_QUADS);
        glVertex2f(65,315);
        glVertex2f(73,315);
        glVertex2f(73,308);
        glVertex2f(65,308);
    glEnd();

    getColor("bridge");
    glBegin(GL_QUADS);
        glVertex2f(88,238);
        glVertex2f(119,238);
        glVertex2f(119,230);
        glVertex2f(88,230);
    glEnd();

    getColor("bridge");
    glBegin(GL_QUADS);
        glVertex2f(104,230);
        glVertex2f(142,230);
        glVertex2f(142,223);
        glVertex2f(104,223);
    glEnd();

    getColor("bridge");
    glBegin(GL_QUADS);
        glVertex2f(135,223);
        glVertex2f(157,223);
        glVertex2f(157,215);
        glVertex2f(135,215);
    glEnd();

    getColor("bridge");
    glBegin(GL_QUADS);
        glVertex2f(150,193);
        glVertex2f(166,193);
        glVertex2f(166,177);
        glVertex2f(150,177);
    glEnd();

    getColor("bridge");
    glBegin(GL_QUADS);
        glVertex2f(96,277);
        glVertex2f(113,277);
        glVertex2f(113,269);
        glVertex2f(96,269);
    glEnd();

    getColor("bridge");
    glBegin(GL_QUADS);
        glVertex2f(96,269);
        glVertex2f(104,269);
        glVertex2f(104,238);
        glVertex2f(96,238);
    glEnd();

    getColor("bridge");
    glBegin(GL_QUADS);
        glVertex2f(112,269);
        glVertex2f(135,269);
        glVertex2f(135,261);
        glVertex2f(112,261);
    glEnd();

    getColor("bridge");
    glBegin(GL_QUADS);
        glVertex2f(127,261);
        glVertex2f(135,261);
        glVertex2f(135,230);
        glVertex2f(127,230);
    glEnd();

    getColor("bridge");
    glBegin(GL_QUADS);
        glVertex2f(135,261);
        glVertex2f(150,261);
        glVertex2f(150,254);
        glVertex2f(135,254);
    glEnd();

    getColor("bridge");
    glBegin(GL_QUADS);
        glVertex2f(150,254);
        glVertex2f(166,254);
        glVertex2f(166,246);
        glVertex2f(150,246);
    glEnd();

    getColor("bridge");
    glBegin(GL_QUADS);
        glVertex2f(157,215);
        glVertex2f(166,215);
        glVertex2f(166,200);
        glVertex2f(157,200);
    glEnd();

    getColor("bridge");
    glBegin(GL_QUADS);
        glVertex2f(142,223);
        glVertex2f(157,223);
        glVertex2f(157,207);
        glVertex2f(142,207);
    glEnd();

    getColor("bridge");
    glBegin(GL_QUADS);
        glVertex2f(135,230);
        glVertex2f(142,230);
        glVertex2f(142,215);
        glVertex2f(135,215);
    glEnd();

    getColor("bridge");
    glBegin(GL_QUADS);
        glVertex2f(142,223);
        glVertex2f(150,223);
        glVertex2f(150,170);
        glVertex2f(142,170);
    glEnd();

    getColor("bridge");
    glBegin(GL_QUADS);
        glVertex2f(152,192);
        glVertex2f(166,192);
        glVertex2f(166,177);
        glVertex2f(152,177);
    glEnd();

    getColor("bridge");
    glBegin(GL_QUADS);
        glVertex2f(119,215);
        glVertex2f(135,215);
        glVertex2f(135,207);
        glVertex2f(119,207);
    glEnd();

    getColor("bridge");
    glBegin(GL_QUADS);
        glVertex2f(104,207);
        glVertex2f(119,207);
        glVertex2f(119,200);
        glVertex2f(104,200);
    glEnd();

    getColor("bridge");
    glBegin(GL_QUADS);
        glVertex2f(112,207);
        glVertex2f(119,207);
        glVertex2f(119,169);
        glVertex2f(112,169);
    glEnd();

    getColor("bridge");
    glBegin(GL_QUADS);
        glVertex2f(88,200);
        glVertex2f(104,200);
        glVertex2f(104,192);
        glVertex2f(88,192);
    glEnd();

    getColor("bridge");
    glBegin(GL_QUADS);
        glVertex2f(73,192);
        glVertex2f(88,192);
        glVertex2f(88,185);
        glVertex2f(73,185);
    glEnd();

    getColor("bridge");
    glBegin(GL_QUADS);
        glVertex2f(73,185);
        glVertex2f(81,185);
        glVertex2f(81,146);
        glVertex2f(73,146);
    glEnd();

    getColor("bridge");
    glBegin(GL_QUADS);
        glVertex2f(58,185);
        glVertex2f(81,185);
        glVertex2f(81,177);
        glVertex2f(58,177);
    glEnd();

    getColor("bridge");
    glBegin(GL_QUADS);
        glVertex2f(43,177);
        glVertex2f(57,177);
        glVertex2f(57,170);
        glVertex2f(43,170);
    glEnd();

    getColor("bridge");
    glBegin(GL_QUADS);
        glVertex2f(34,170);
        glVertex2f(50,170);
        glVertex2f(50,162);
        glVertex2f(34,162);
    glEnd();

    getColor("bridge");
    glBegin(GL_QUADS);
        glVertex2f(43,170);
        glVertex2f(50,170);
        glVertex2f(50,126);
        glVertex2f(43,126);
    glEnd();

    getColor("bridge");
    glBegin(GL_QUADS);
        glVertex2f(34,131);
        glVertex2f(43,131);
        glVertex2f(43,126);
        glVertex2f(34,126);
    glEnd();

    getColor("bridge");
    glBegin(GL_QUADS);
        glVertex2f(50,138);
        glVertex2f(81,138);
        glVertex2f(81,131);
        glVertex2f(50,131);
    glEnd();

    getColor("bridge");
    glBegin(GL_QUADS);
        glVertex2f(58,146);
        glVertex2f(88,146);
        glVertex2f(88,139);
        glVertex2f(58,139);
    glEnd();

    getColor("bridge");
    glBegin(GL_QUADS);
        glVertex2f(73,154);
        glVertex2f(104,154);
        glVertex2f(104,146);
        glVertex2f(73,146);
    glEnd();

    getColor("bridge");
    glBegin(GL_QUADS);
        glVertex2f(88,161);
        glVertex2f(119,161);
        glVertex2f(119,155);
        glVertex2f(88,155);
    glEnd();

    getColor("bridge");
    glBegin(GL_QUADS);
        glVertex2f(104,170);
        glVertex2f(135,170);
        glVertex2f(135,162);
        glVertex2f(104,162);
    glEnd();

    getColor("bridge");
    glBegin(GL_QUADS);
        glVertex2f(119,177);
        glVertex2f(150,177);
        glVertex2f(150,170);
        glVertex2f(119,170);
    glEnd();

    getColor("bridge");
    glBegin(GL_QUADS);
        glVertex2f(135,184);
        glVertex2f(166,184);
        glVertex2f(166,177);
        glVertex2f(135,177);
    glEnd();

    getColor("bridge");
    glBegin(GL_QUADS);
        glVertex2f(150,192);
        glVertex2f(166,192);
        glVertex2f(166,177);
        glVertex2f(150,177);
    glEnd();

    getColor("bridge");
    glBegin(GL_QUADS);
        glVertex2f(73,307);
        glVertex2f(126,307);
        glVertex2f(126,299);
        glVertex2f(73,299);
    glEnd();

    getColor("bridge");
    glBegin(GL_QUADS);
        glVertex2f(88,360);
        glVertex2f(96,360);
        glVertex2f(96,307);
        glVertex2f(88,307);
    glEnd();

    getColor("bridge");
    glBegin(GL_QUADS);
        glVertex2f(96,337);
        glVertex2f(112,337);
        glVertex2f(112,329);
        glVertex2f(96,329);
    glEnd();

    getColor("bridge");
    glBegin(GL_QUADS);
        glVertex2f(104,329);
        glVertex2f(112,329);
        glVertex2f(112,307);
        glVertex2f(104,307);
    glEnd();

    getColor("bridge");
    glBegin(GL_QUADS);
        glVertex2f(112,315);
        glVertex2f(150,315);
        glVertex2f(150,307);
        glVertex2f(112,307);
    glEnd();

    getColor("bridge");
    glBegin(GL_QUADS);
        glVertex2f(112,315);
        glVertex2f(150,315);
        glVertex2f(150,307);
        glVertex2f(112,307);
    glEnd();

    getColor("bridge");
    glBegin(GL_QUADS);
        glVertex2f(119,322);
        glVertex2f(166,322);
        glVertex2f(166,315);
        glVertex2f(119,315);
    glEnd();

    getColor("bridge");
    glBegin(GL_QUADS);
        glVertex2f(135,329);
        glVertex2f(157,329);
        glVertex2f(157,322);
        glVertex2f(135,322);
    glEnd();

    getColor("bridge");
    glBegin(GL_QUADS);
        glVertex2f(142,337);
        glVertex2f(173,337);
        glVertex2f(173,329);
        glVertex2f(142,329);
    glEnd();

    getColor("bridge");
    glBegin(GL_QUADS);
        glVertex2f(135,345);
        glVertex2f(150,345);
        glVertex2f(150,337);
        glVertex2f(135,337);
    glEnd();

    getColor("bridge");
    glBegin(GL_QUADS);
        glVertex2f(127,352);
        glVertex2f(143,352);
        glVertex2f(143,345);
        glVertex2f(127,345);
    glEnd();

    getColor("bridge");
    glBegin(GL_QUADS);
        glVertex2f(112,345);
        glVertex2f(127,345);
        glVertex2f(127,337);
        glVertex2f(112,337);
    glEnd();
//gray_pillar
    getColor("bridgeShade");
    glBegin(GL_QUADS);
        glVertex2f(142,360);
        glVertex2f(158,360);
        glVertex2f(158,345);
        glVertex2f(142,345);
    glEnd();

    getColor("bridgeShade");
    glBegin(GL_QUADS);
        glVertex2f(150,345);
        glVertex2f(166,345);
        glVertex2f(166,337);
        glVertex2f(150,337);
    glEnd();

    getColor("bridgeShade");
    glBegin(GL_QUADS);
        glVertex2f(142,360);
        glVertex2f(157,360);
        glVertex2f(157,345);
        glVertex2f(142,345);
    glEnd();

    getColor("bridgeShade");
    glBegin(GL_QUADS);
        glVertex2f(150,345);
        glVertex2f(166,345);
        glVertex2f(166,337);
        glVertex2f(150,337);
    glEnd();

    getColor("bridgeShade");
    glBegin(GL_QUADS);
        glVertex2f(157,329);
        glVertex2f(173,329);
        glVertex2f(173,322);
        glVertex2f(157,322);
    glEnd();

    getColor("bridgeShade");
    glBegin(GL_QUADS);
        glVertex2f(166,323);
        glVertex2f(181,323);
        glVertex2f(181,299);
        glVertex2f(166,299);
    glEnd();

    getColor("bridgeShade");
    glBegin(GL_QUADS);
        glVertex2f(150,315);
        glVertex2f(181,315);
        glVertex2f(181,308);
        glVertex2f(150,308);
    glEnd();

    getColor("bridgeShade");
    glBegin(GL_QUADS);
        glVertex2f(126,308);
        glVertex2f(150,308);
        glVertex2f(150,299);
        glVertex2f(126,299);
    glEnd();

    getColor("bridgeShade");
    glBegin(GL_QUADS);
        glVertex2f(104,292);
        glVertex2f(119,292);
        glVertex2f(119,284);
        glVertex2f(104,284);
    glEnd();

    getColor("bridgeShade");
    glBegin(GL_QUADS);
        glVertex2f(88,284);
        glVertex2f(104,284);
        glVertex2f(104,277);
        glVertex2f(88,277);
    glEnd();

    getColor("bridgeShade");
    glBegin(GL_QUADS);
        glVertex2f(73,277);
        glVertex2f(96,277);
        glVertex2f(96,269);
        glVertex2f(73,269);
    glEnd();

    getColor("bridgeShade");
    glBegin(GL_QUADS);
        glVertex2f(34,254);
        glVertex2f(50,254);
        glVertex2f(50,246);
        glVertex2f(34,246);
    glEnd();

    getColor("bridgeShade");
    glBegin(GL_QUADS);
        glVertex2f(50,246);
        glVertex2f(65,246);
        glVertex2f(65,238);
        glVertex2f(50,238);
    glEnd();

    getColor("bridgeShade");
    glBegin(GL_QUADS);
        glVertex2f(73,238);
        glVertex2f(88,238);
        glVertex2f(88,230);
        glVertex2f(73,230);
    glEnd();

    getColor("bridgeShade");
    glBegin(GL_QUADS);
        glVertex2f(88,230);
        glVertex2f(104,230);
        glVertex2f(104,223);
        glVertex2f(88,223);
    glEnd();

    getColor("bridgeShade");
    glBegin(GL_QUADS);
        glVertex2f(104,223);
        glVertex2f(135,223);
        glVertex2f(135,215);
        glVertex2f(104,215);
    glEnd();

    getColor("bridgeShade");
    glBegin(GL_QUADS);
        glVertex2f(135,215);
        glVertex2f(142,215);
        glVertex2f(142,207);
        glVertex2f(135,207);
    glEnd();

    getColor("bridgeShade");
    glBegin(GL_QUADS);
        glVertex2f(150,207);
        glVertex2f(157,207);
        glVertex2f(157,200);
        glVertex2f(150,200);
    glEnd();

    getColor("bridgeShade");
    glBegin(GL_QUADS);
        glVertex2f(50,131);
        glVertex2f(81,131);
        glVertex2f(81,126);
        glVertex2f(50,126);
    glEnd();

    getColor("bridgeShade");
    glBegin(GL_QUADS);
        glVertex2f(81,138);
        glVertex2f(88,138);
        glVertex2f(88,131);
        glVertex2f(81,131);
    glEnd();

    getColor("bridgeShade");
    glBegin(GL_QUADS);
        glVertex2f(88,145);
        glVertex2f(104,145);
        glVertex2f(104,139);
        glVertex2f(88,139);
    glEnd();

    getColor("bridgeShade");
    glBegin(GL_QUADS);
        glVertex2f(104,154);
        glVertex2f(119,154);
        glVertex2f(119,146);
        glVertex2f(104,146);
    glEnd();

    getColor("bridgeShade");
    glBegin(GL_QUADS);
        glVertex2f(119,162);
        glVertex2f(135,162);
        glVertex2f(135,155);
        glVertex2f(119,155);
    glEnd();

    getColor("bridgeShade");
    glBegin(GL_QUADS);
        glVertex2f(135,170);
        glVertex2f(150,170);
        glVertex2f(150,162);
        glVertex2f(135,162);
    glEnd();

    getColor("bridgeShade");
    glBegin(GL_QUADS);
        glVertex2f(150,177);
        glVertex2f(166,177);
        glVertex2f(166,170);
        glVertex2f(150,170);
    glEnd();
//2nd_left_pillar
    getColor("bridge");
    glBegin(GL_QUADS);
        glVertex2f(157,360);
        glVertex2f(265,360);
        glVertex2f(265,345);
        glVertex2f(157,345);
    glEnd();

    getColor("bridge");
    glBegin(GL_QUADS);
        glVertex2f(166,345);
        glVertex2f(258,345);
        glVertex2f(258,329);
        glVertex2f(166,329);
    glEnd();

    getColor("bridge");
    glBegin(GL_QUADS);
        glVertex2f(173,329);
        glVertex2f(251,329);
        glVertex2f(251,323);
        glVertex2f(173,323);
    glEnd();

    getColor("bridge");
    glBegin(GL_QUADS);
        glVertex2f(181,323);
        glVertex2f(242,323);
        glVertex2f(242,126);
        glVertex2f(181,126);
    glEnd();
//gray_pillar
    getColor("bridgeShade");
    glBegin(GL_QUADS);
        glVertex2f(166,323);
        glVertex2f(181,323);
        glVertex2f(181,126);
        glVertex2f(166,126);
    glEnd();
//black
    getColor("bridge");
    glBegin(GL_QUADS);
        glVertex2f(242,308);
        glVertex2f(251,308);
        glVertex2f(251,299);
        glVertex2f(242,299);
    glEnd();

    getColor("bridge");
    glBegin(GL_QUADS);
        glVertex2f(265,352);
        glVertex2f(273,352);
        glVertex2f(273,345);
        glVertex2f(265,345);
    glEnd();

    getColor("bridge");
    glBegin(GL_QUADS);
        glVertex2f(273,345);
        glVertex2f(281,345);
        glVertex2f(281,337);
        glVertex2f(273,337);
    glEnd();

    getColor("bridge");
    glBegin(GL_QUADS);
        glVertex2f(281,337);
        glVertex2f(296,337);
        glVertex2f(296,329);
        glVertex2f(281,329);
    glEnd();

    getColor("bridge");
    glBegin(GL_QUADS);
        glVertex2f(296,329);
        glVertex2f(312,329);
        glVertex2f(312,323);
        glVertex2f(296,323);
    glEnd();

    getColor("bridge");
    glBegin(GL_QUADS);
        glVertex2f(312,323);
        glVertex2f(320,323);
        glVertex2f(320,315);
        glVertex2f(312,315);
    glEnd();

    getColor("bridge");
    glBegin(GL_QUADS);
        glVertex2f(320,315);
        glVertex2f(335,315);
        glVertex2f(335,308);
        glVertex2f(320,308);
    glEnd();

    getColor("bridge");
    glBegin(GL_QUADS);
        glVertex2f(335,308);
        glVertex2f(374,308);
        glVertex2f(374,299);
        glVertex2f(335,299);
    glEnd();

    getColor("bridge");
    glBegin(GL_QUADS);
        glVertex2f(350,360);
        glVertex2f(358,360);
        glVertex2f(358,308);
        glVertex2f(350,308);
    glEnd();

    getColor("bridge");
    glBegin(GL_QUADS);
        glVertex2f(374,315);
        glVertex2f(388,315);
        glVertex2f(388,308);
        glVertex2f(374,308);
    glEnd();

    getColor("bridge");
    glBegin(GL_QUADS);
        glVertex2f(388,323);
        glVertex2f(396,323);
        glVertex2f(396,315);
        glVertex2f(388,315);
    glEnd();

    getColor("bridge");
    glBegin(GL_QUADS);
        glVertex2f(396,329);
        glVertex2f(411,329);
        glVertex2f(411,323);
        glVertex2f(396,323);
    glEnd();

    getColor("bridge");
    glBegin(GL_QUADS);
        glVertex2f(411,337);
        glVertex2f(426,337);
        glVertex2f(426,329);
        glVertex2f(411,329);
    glEnd();

    getColor("bridge");
    glBegin(GL_QUADS);
        glVertex2f(426,345);
        glVertex2f(434,345);
        glVertex2f(434,337);
        glVertex2f(426,337);
    glEnd();

    getColor("bridge");
    glBegin(GL_QUADS);
        glVertex2f(434,352);
        glVertex2f(449,352);
        glVertex2f(449,345);
        glVertex2f(434,345);
    glEnd();

    getColor("bridge");
    glBegin(GL_QUADS);
        glVertex2f(449,360);
        glVertex2f(496,360);
        glVertex2f(496,352);
        glVertex2f(449,352);
    glEnd();

    getColor("bridge");
    glBegin(GL_QUADS);
        glVertex2f(465,352);
        glVertex2f(480,352);
        glVertex2f(480,299);
        glVertex2f(465,299);
    glEnd();

    getColor("bridge");
    glBegin(GL_QUADS);
        glVertex2f(496,352);
        glVertex2f(511,352);
        glVertex2f(511,345);
        glVertex2f(496,345);
    glEnd();

    getColor("bridge");
    glBegin(GL_QUADS);
        glVertex2f(511,345);
        glVertex2f(519,345);
        glVertex2f(519,337);
        glVertex2f(511,337);
    glEnd();

    getColor("bridge");
    glBegin(GL_QUADS);
        glVertex2f(519,337);
        glVertex2f(534,337);
        glVertex2f(534,329);
        glVertex2f(519,329);
    glEnd();

    getColor("bridge");
    glBegin(GL_QUADS);
        glVertex2f(534,329);
        glVertex2f(550,329);
        glVertex2f(550,323);
        glVertex2f(534,323);
    glEnd();

    getColor("bridge");
    glBegin(GL_QUADS);
        glVertex2f(550,323);
        glVertex2f(558,323);
        glVertex2f(558,315);
        glVertex2f(550,315);
    glEnd();

    getColor("bridge");
    glBegin(GL_QUADS);
        glVertex2f(558,315);
        glVertex2f(572,315);
        glVertex2f(572,307);
        glVertex2f(558,307);
    glEnd();

    getColor("bridge");
    glBegin(GL_QUADS);
        glVertex2f(572,307);
        glVertex2f(642,307);
        glVertex2f(642,299);
        glVertex2f(572,299);
    glEnd();
//gray
    getColor("bridgeShade");
    glBegin(GL_QUADS);
        glVertex2f(542,360);
        glVertex2f(558,360);
        glVertex2f(558,345);
        glVertex2f(542,345);
    glEnd();

    getColor("bridgeShade");
    glBegin(GL_QUADS);
        glVertex2f(550,345);
        glVertex2f(565,345);
        glVertex2f(565,329);
        glVertex2f(550,329);
    glEnd();

    getColor("bridgeShade");
    glBegin(GL_QUADS);
        glVertex2f(558,329);
        glVertex2f(572,329);
        glVertex2f(572,323);
        glVertex2f(558,323);
    glEnd();

    getColor("bridgeShade");
    glBegin(GL_QUADS);
        glVertex2f(565,323);
        glVertex2f(581,323);
        glVertex2f(581,315);
        glVertex2f(565,315);
    glEnd();

    getColor("bridgeShade");
    glBegin(GL_QUADS);
        glVertex2f(572,323);
        glVertex2f(581,323);
        glVertex2f(581,307);
        glVertex2f(572,307);
    glEnd();

    getColor("bridgeShade");
    glBegin(GL_QUADS);
        glVertex2f(565,307);
        glVertex2f(572,307);
        glVertex2f(572,299);
        glVertex2f(565,299);
    glEnd();

    getColor("bridgeShade");
    glBegin(GL_QUADS);
        glVertex2f(565,299);
        glVertex2f(581,299);
        glVertex2f(581,126);
        glVertex2f(565,126);
    glEnd();
//black_pillar
    getColor("bridge");
    glBegin(GL_QUADS);
        glVertex2f(558,360);
        glVertex2f(665,360);
        glVertex2f(665,345);
        glVertex2f(558,345);
    glEnd();

    getColor("bridge");
    glBegin(GL_QUADS);
        glVertex2f(565,345);
        glVertex2f(657,345);
        glVertex2f(657,329);
        glVertex2f(565,329);
    glEnd();

    getColor("bridge");
    glBegin(GL_QUADS);
        glVertex2f(572,329);
        glVertex2f(650,329);
        glVertex2f(650,323);
        glVertex2f(572,323);
    glEnd();

    getColor("bridge");
    glBegin(GL_QUADS);
        glVertex2f(581,323);
        glVertex2f(642,323);
        glVertex2f(642,126);
        glVertex2f(581,126);
    glEnd();

    getColor("bridge");
    glBegin(GL_QUADS);
        glVertex2f(657,337);
        glVertex2f(665,337);
        glVertex2f(665,329);
        glVertex2f(657,329);
    glEnd();

    getColor("bridge");
    glBegin(GL_QUADS);
        glVertex2f(665,345);
        glVertex2f(673,345);
        glVertex2f(673,337);
        glVertex2f(665,337);
    glEnd();

    getColor("bridge");
    glBegin(GL_QUADS);
        glVertex2f(673,352);
        glVertex2f(688,352);
        glVertex2f(688,345);
        glVertex2f(673,345);
    glEnd();

    getColor("bridge");
    glBegin(GL_QUADS);
        glVertex2f(688,360);
        glVertex2f(735,360);
        glVertex2f(735,352);
        glVertex2f(688,352);
    glEnd();

    getColor("bridge");
    glBegin(GL_QUADS);
        glVertex2f(704,352);
        glVertex2f(719,352);
        glVertex2f(719,299);
        glVertex2f(704,299);
    glEnd();

    getColor("bridge");
    glBegin(GL_QUADS);
        glVertex2f(735,352);
        glVertex2f(750,352);
        glVertex2f(750,345);
        glVertex2f(735,345);
    glEnd();

    getColor("bridge");
    glBegin(GL_QUADS);
        glVertex2f(750,345);
        glVertex2f(758,345);
        glVertex2f(758,337);
        glVertex2f(750,337);
    glEnd();

    getColor("bridge");
    glBegin(GL_QUADS);
        glVertex2f(758,337);
        glVertex2f(773,337);
        glVertex2f(773,329);
        glVertex2f(758,329);
    glEnd();

    getColor("bridge");
    glBegin(GL_QUADS);
        glVertex2f(773,329);
        glVertex2f(789,329);
        glVertex2f(789,323);
        glVertex2f(773,323);
    glEnd();

    getColor("bridge");
    glBegin(GL_QUADS);
        glVertex2f(789,323);
        glVertex2f(795,323);
        glVertex2f(795,315);
        glVertex2f(789,315);
    glEnd();

    getColor("bridge");
    glBegin(GL_QUADS);
        glVertex2f(795,315);
        glVertex2f(810,315);
        glVertex2f(810,307);
        glVertex2f(795,307);
    glEnd();

    getColor("bridge");
    glBegin(GL_QUADS);
        glVertex2f(810,307);
        glVertex2f(850,307);
        glVertex2f(850,299);
        glVertex2f(810,299);
    glEnd();

    getColor("bridge");
    glBegin(GL_QUADS);
        glVertex2f(826,360);
        glVertex2f(834,360);
        glVertex2f(834,307);
        glVertex2f(826,307);
    glEnd();

    getColor("bridge");
    glBegin(GL_QUADS);
        glVertex2f(850,315);
        glVertex2f(864,315);
        glVertex2f(864,307);
        glVertex2f(850,307);
    glEnd();

    getColor("bridge");
    glBegin(GL_QUADS);
        glVertex2f(864,323);
        glVertex2f(872,323);
        glVertex2f(872,315);
        glVertex2f(864,315);
    glEnd();

    getColor("bridge");
    glBegin(GL_QUADS);
        glVertex2f(872,329);
        glVertex2f(888,329);
        glVertex2f(888,323);
        glVertex2f(872,323);
    glEnd();

    getColor("bridge");
    glBegin(GL_QUADS);
        glVertex2f(888,337);
        glVertex2f(903,337);
        glVertex2f(903,329);
        glVertex2f(888,329);
    glEnd();

    getColor("bridge");
    glBegin(GL_QUADS);
        glVertex2f(903,345);
        glVertex2f(911,345);
        glVertex2f(911,337);
        glVertex2f(903,337);
    glEnd();

    getColor("bridge");
    glBegin(GL_QUADS);
        glVertex2f(911,352);
        glVertex2f(926,352);
        glVertex2f(926,345);
        glVertex2f(911,345);
    glEnd();
//gray
    getColor("bridgeShade");
    glBegin(GL_QUADS);
        glVertex2f(919,360);
        glVertex2f(926,360);
        glVertex2f(926,352);
        glVertex2f(919,352);
    glEnd();

    getColor("bridgeShade");
    glBegin(GL_QUADS);
        glVertex2f(926,352);
        glVertex2f(934,352);
        glVertex2f(934,329);
        glVertex2f(926,329);
    glEnd();

    getColor("bridgeShade");
    glBegin(GL_QUADS);
        glVertex2f(934,345);
        glVertex2f(942,345);
        glVertex2f(942,323);
        glVertex2f(934,323);
    glEnd();

    getColor("bridgeShade");
    glBegin(GL_QUADS);
        glVertex2f(949,323);
        glVertex2f(957,323);
        glVertex2f(957,299);
        glVertex2f(949,299);
    glEnd();

    getColor("bridgeShade");
    glBegin(GL_QUADS);
        glVertex2f(942,299);
        glVertex2f(957,299);
        glVertex2f(957,126);
        glVertex2f(942,126);
    glEnd();
//black_pillar
    getColor("bridge");
    glBegin(GL_QUADS);
        glVertex2f(926,360);
        glVertex2f(1042,360);
        glVertex2f(1042,352);
        glVertex2f(926,352);
    glEnd();

    getColor("bridge");
    glBegin(GL_QUADS);
        glVertex2f(934,352);
        glVertex2f(1042,352);
        glVertex2f(1042,345);
        glVertex2f(934,345);
    glEnd();

    getColor("bridge");
    glBegin(GL_QUADS);
        glVertex2f(942,345);
        glVertex2f(1034,345);
        glVertex2f(1034,323);
        glVertex2f(942,323);
    glEnd();

    getColor("bridge");
    glBegin(GL_QUADS);
        glVertex2f(942,323);
        glVertex2f(949,323);
        glVertex2f(949,299);
        glVertex2f(942,299);
    glEnd();

    getColor("bridge");
    glBegin(GL_QUADS);
        glVertex2f(957,329);
        glVertex2f(1019,329);
        glVertex2f(1019,126);
        glVertex2f(957,126);
    glEnd();

    getColor("bridge");
    glBegin(GL_QUADS);
        glVertex2f(1034, 323);
        glVertex2f(1042,323);
        glVertex2f(1042,315);
        glVertex2f(1034,315);
    glEnd();

    getColor("bridge");
    glBegin(GL_QUADS);
        glVertex2f(1042,315);
        glVertex2f(1057,315);
        glVertex2f(1057,307);
        glVertex2f(1042,307);
    glEnd();

    getColor("bridge");
    glBegin(GL_QUADS);
        glVertex2f(1058,307);
        glVertex2f(1096,307);
        glVertex2f(1096,299);
        glVertex2f(1058,299);
    glEnd();

    getColor("bridge");
    glBegin(GL_QUADS);
        glVertex2f(1073,360);
        glVertex2f(1080,360);
        glVertex2f(1080,307);
        glVertex2f(1073,307);
    glEnd();

    getColor("bridge");
    glBegin(GL_QUADS);
        glVertex2f(1096,315);
        glVertex2f(1111,315);
        glVertex2f(1111,307);
        glVertex2f(1096,307);
    glEnd();

    getColor("bridge");
    glBegin(GL_QUADS);
        glVertex2f(1111,323);
        glVertex2f(1119,323);
        glVertex2f(1119,315);
        glVertex2f(1111,315);
    glEnd();

    getColor("bridge");
    glBegin(GL_QUADS);
        glVertex2f(1119,329);
        glVertex2f(1134,329);
        glVertex2f(1134,323);
        glVertex2f(1119,323);
    glEnd();

    getColor("bridge");
    glBegin(GL_QUADS);
        glVertex2f(1134,337);
        glVertex2f(1150,337);
        glVertex2f(1150,329);
        glVertex2f(1134,329);
    glEnd();

    getColor("bridge");
    glBegin(GL_QUADS);
        glVertex2f(1150,345);
        glVertex2f(1157,345);
        glVertex2f(1157,337);
        glVertex2f(1150,337);
    glEnd();

    getColor("bridge");
    glBegin(GL_QUADS);
        glVertex2f(1158,352);
        glVertex2f(1172,352);
        glVertex2f(1172,345);
        glVertex2f(1158,345);
    glEnd();

    getColor("bridge");
    glBegin(GL_QUADS);
        glVertex2f(1172,360);
        glVertex2f(1218,360);
        glVertex2f(1218,352);
        glVertex2f(1172,352);
    glEnd();

    getColor("bridge");
    glBegin(GL_QUADS);
        glVertex2f(1188,352);
        glVertex2f(1203,352);
        glVertex2f(1203,299);
        glVertex2f(1188,299);
    glEnd();

    getColor("bridge");
    glBegin(GL_QUADS);
        glVertex2f(1218,352);
        glVertex2f(1233,352);
        glVertex2f(1233,345);
        glVertex2f(1218,345);
    glEnd();

    getColor("bridge");
    glBegin(GL_QUADS);
        glVertex2f(1233,345);
        glVertex2f(1241,345);
        glVertex2f(1241,337);
        glVertex2f(1233,337);
    glEnd();

    getColor("bridge");
    glBegin(GL_QUADS);
        glVertex2f(1241,337);
        glVertex2f(1256,337);
        glVertex2f(1256,329);
        glVertex2f(1241,329);
    glEnd();

    getColor("bridge");
    glBegin(GL_QUADS);
        glVertex2f(1256,329);
        glVertex2f(1272,329);
        glVertex2f(1272,323);
        glVertex2f(1256,323);
    glEnd();

    getColor("bridge");
    glBegin(GL_QUADS);
        glVertex2f(1272,323);
        glVertex2f(1280,323);
        glVertex2f(1280,315);
        glVertex2f(1272,315);
    glEnd();

    getColor("bridge");
    glBegin(GL_QUADS);
        glVertex2f(1280,315);
        glVertex2f(1295,315);
        glVertex2f(1295,307);
        glVertex2f(1280,307);
    glEnd();

    getColor("bridge");
    glBegin(GL_QUADS);
        glVertex2f(1295,307);
        glVertex2f(1334,307);
        glVertex2f(1334,299);
        glVertex2f(1295,299);
    glEnd();

    getColor("bridge");
    glBegin(GL_QUADS);
        glVertex2f(1311,360);
        glVertex2f(1318,360);
        glVertex2f(1318,307);
        glVertex2f(1311,307);
    glEnd();
//gray
    getColor("bridgeShade");
    glBegin(GL_QUADS);
        glVertex2f(1325,360);
        glVertex2f(1341,360);
        glVertex2f(1341,345);
        glVertex2f(1325,345);
    glEnd();

    getColor("bridgeShade");
    glBegin(GL_QUADS);
        glVertex2f(1334,345);
        glVertex2f(1341,345);
        glVertex2f(1341,337);
        glVertex2f(1334,337);
    glEnd();

    getColor("bridgeShade");
    glBegin(GL_QUADS);
        glVertex2f(1341,345);
        glVertex2f(1349,345);
        glVertex2f(1349,323);
        glVertex2f(1341,323);
    glEnd();

    getColor("bridgeShade");
    glBegin(GL_QUADS);
        glVertex2f(1349,330);
        glVertex2f(1357,330);
        glVertex2f(1357,323);
        glVertex2f(1349,323);
    glEnd();

    getColor("bridgeShade");
    glBegin(GL_QUADS);
        glVertex2f(1357,323);
        glVertex2f(1365,323);
        glVertex2f(1365,299);
        glVertex2f(1357,299);
    glEnd();

    getColor("bridgeShade");
    glBegin(GL_QUADS);
        glVertex2f(1349,315);
        glVertex2f(1357,315);
        glVertex2f(1357,299);
        glVertex2f(1349,299);
    glEnd();

    getColor("bridgeShade");
    glBegin(GL_QUADS);
        glVertex2f(1349,299);
        glVertex2f(1365,299);
        glVertex2f(1365,126);
        glVertex2f(1349,126);
    glEnd();
//black
    getColor("bridge");
    glBegin(GL_QUADS);
        glVertex2f(1349,323);
        glVertex2f(1357,323);
        glVertex2f(1357,315);
        glVertex2f(1349,315);
    glEnd();

    getColor("bridge");
    glBegin(GL_QUADS);
        glVertex2f(1334,315);
        glVertex2f(1349,315);
        glVertex2f(1349,307);
        glVertex2f(1334,307);
    glEnd();

    getColor("bridge");
    glBegin(GL_QUADS);
        glVertex2f(1341,360);
        glVertex2f(1457,360);
        glVertex2f(1457,352);
        glVertex2f(1341,352);
    glEnd();

    getColor("bridge");
    glBegin(GL_QUADS);
        glVertex2f(1341,352);
        glVertex2f(1449,352);
        glVertex2f(1449,345);
        glVertex2f(1341,345);
    glEnd();

    getColor("bridge");
    glBegin(GL_QUADS);
        glVertex2f(1349,345);
        glVertex2f(1441,345);
        glVertex2f(1441,330);
        glVertex2f(1349,330);
    glEnd();

    getColor("bridge");
    glBegin(GL_QUADS);
        glVertex2f(1357,330);
        glVertex2f(1433,330);
        glVertex2f(1433,323);
        glVertex2f(1357,323);
    glEnd();

    getColor("bridge");
    glBegin(GL_QUADS);
        glVertex2f(1365,323);
        glVertex2f(1425,323);
        glVertex2f(1425,126);
        glVertex2f(1365,126);
    glEnd();

    getColor("bridge");
    glBegin(GL_QUADS);
        glVertex2f(1457,352);
        glVertex2f(1472,352);
        glVertex2f(1472,345);
        glVertex2f(1457,345);
    glEnd();

    getColor("bridge");
    glBegin(GL_QUADS);
        glVertex2f(1472,345);
        glVertex2f(1480,345);
        glVertex2f(1480,337);
        glVertex2f(1472,337);
    glEnd();

    getColor("bridge");
    glBegin(GL_QUADS);
        glVertex2f(1480,337);
        glVertex2f(1495,337);
        glVertex2f(1495,329);
        glVertex2f(1480,329);
    glEnd();

    getColor("bridge");
    glBegin(GL_QUADS);
        glVertex2f(1495,329);
        glVertex2f(1511,329);
        glVertex2f(1511,323);
        glVertex2f(1495,323);
    glEnd();

    getColor("bridge");
    glBegin(GL_QUADS);
        glVertex2f(1511,323);
        glVertex2f(1518,323);
        glVertex2f(1518,315);
        glVertex2f(1511,315);
    glEnd();

    getColor("bridge");
    glBegin(GL_QUADS);
        glVertex2f(1519,315);
        glVertex2f(1534,315);
        glVertex2f(1534,307);
        glVertex2f(1519,307);
    glEnd();

    getColor("bridge");
    glBegin(GL_QUADS);
        glVertex2f(1534,307);
        glVertex2f(1572,307);
        glVertex2f(1572,299);
        glVertex2f(1534,299);
    glEnd();

    getColor("bridge");
    glBegin(GL_QUADS);
        glVertex2f(1549,360);
        glVertex2f(1557,360);
        glVertex2f(1557,307);
        glVertex2f(1549,307);
    glEnd();

    getColor("bridge");
    glBegin(GL_QUADS);
        glVertex2f(1572,315);
        glVertex2f(1588,315);
        glVertex2f(1588,307);
        glVertex2f(1572,307);
    glEnd();

    getColor("bridge");
    glBegin(GL_QUADS);
        glVertex2f(1588,323);
        glVertex2f(1595,323);
        glVertex2f(1595,315);
        glVertex2f(1588,315);
    glEnd();

    getColor("bridge");
    glBegin(GL_QUADS);
        glVertex2f(1595,329);
        glVertex2f(1611,329);
        glVertex2f(1611,323);
        glVertex2f(1595,323);
    glEnd();

    getColor("bridge");
    glBegin(GL_QUADS);
        glVertex2f(1611,337);
        glVertex2f(1626,337);
        glVertex2f(1626,330);
        glVertex2f(1611,330);
    glEnd();

    getColor("bridge");
    glBegin(GL_QUADS);
        glVertex2f(1626,345);
        glVertex2f(1633,345);
        glVertex2f(1633,337);
        glVertex2f(1626,337);
    glEnd();

    getColor("bridge");
    glBegin(GL_QUADS);
        glVertex2f(1633,352);
        glVertex2f(1648,352);
        glVertex2f(1648,345);
        glVertex2f(1633,345);
    glEnd();

    getColor("bridge");
    glBegin(GL_QUADS);
        glVertex2f(1648,360);
        glVertex2f(1695,360);
        glVertex2f(1695,352);
        glVertex2f(1648,352);
    glEnd();

    getColor("bridge");
    glBegin(GL_QUADS);
        glVertex2f(1664,352);
        glVertex2f(1679,352);
        glVertex2f(1679,299);
        glVertex2f(1664,299);
    glEnd();

    getColor("bridge");
    glBegin(GL_QUADS);
        glVertex2f(1695,352);
        glVertex2f(1710,352);
        glVertex2f(1710,345);
        glVertex2f(1695,345);
    glEnd();

    getColor("bridge");
    glBegin(GL_QUADS);
        glVertex2f(1710,345);
        glVertex2f(1718,345);
        glVertex2f(1718,337);
        glVertex2f(1710,337);
    glEnd();

    getColor("bridge");
    glBegin(GL_QUADS);
        glVertex2f(1718,337);
        glVertex2f(1733,337);
        glVertex2f(1733,329);
        glVertex2f(1718,329);
    glEnd();

    getColor("bridge");
    glBegin(GL_QUADS);
        glVertex2f(1733,329);
        glVertex2f(1825,329);
        glVertex2f(1825,323);
        glVertex2f(1733,323);
    glEnd();

    getColor("bridge");
    glBegin(GL_QUADS);
        glVertex2f(1733,360);
        glVertex2f(1841,360);
        glVertex2f(1841,345);
        glVertex2f(1733,345);
    glEnd();

    getColor("bridge");
    glBegin(GL_QUADS);
        glVertex2f(1741,345);
        glVertex2f(1833,345);
        glVertex2f(1833,329);
        glVertex2f(1741,329);
    glEnd();

    getColor("bridge");
    glBegin(GL_QUADS);
        glVertex2f(1749,323);
        glVertex2f(1817,323);
        glVertex2f(1817,315);
        glVertex2f(1749,315);
    glEnd();

    getColor("bridge");
    glBegin(GL_QUADS);
        glVertex2f(1756,315);
        glVertex2f(1817,315);
        glVertex2f(1817,126);
        glVertex2f(1756,126);
    glEnd();

    getColor("bridge");
    glBegin(GL_QUADS);
        glVertex2f(1817,315);
        glVertex2f(1825,315);
        glVertex2f(1825,307);
        glVertex2f(1817,307);
    glEnd();

    getColor("bridge");
    glBegin(GL_QUADS);
        glVertex2f(1825,323);
        glVertex2f(1833,323);
        glVertex2f(1833,315);
        glVertex2f(1825,315);
    glEnd();

    getColor("bridge");
    glBegin(GL_QUADS);
        glVertex2f(1833,329);
        glVertex2f(1848,329);
        glVertex2f(1848,323);
        glVertex2f(1833,323);
    glEnd();

    getColor("bridge");
    glBegin(GL_QUADS);
        glVertex2f(1849,337);
        glVertex2f(1863,337);
        glVertex2f(1863,330);
        glVertex2f(1849,330);
    glEnd();

    getColor("bridge");
    glBegin(GL_QUADS);
        glVertex2f(1863,345);
        glVertex2f(1871,345);
        glVertex2f(1871,337);
        glVertex2f(1863,337);
    glEnd();

    getColor("bridge");
    glBegin(GL_QUADS);
        glVertex2f(1871,352);
        glVertex2f(1886,352);
        glVertex2f(1886,345);
        glVertex2f(1871,345);
    glEnd();

    getColor("bridge");
    glBegin(GL_QUADS);
        glVertex2f(1887,360);
        glVertex2f(1902,360);
        glVertex2f(1902,352);
        glVertex2f(1887,352);
    glEnd();

    getColor("bridge");
    glBegin(GL_QUADS);
        glVertex2f(1902,352);
        glVertex2f(1917,352);
        glVertex2f(1917,299);
        glVertex2f(1902,299);
    glEnd();
 //gray
    getColor("bridgeShade");
    glBegin(GL_QUADS);
        glVertex2f(1718,360);
        glVertex2f(1733,360);
        glVertex2f(1733,345);
        glVertex2f(1718,345);
    glEnd();

    getColor("bridgeShade");
    glBegin(GL_QUADS);
        glVertex2f(1726,345);
        glVertex2f(1741,345);
        glVertex2f(1741,337);
        glVertex2f(1726,337);
    glEnd();

    getColor("bridgeShade");
    glBegin(GL_QUADS);
        glVertex2f(1733,337);
        glVertex2f(1741,337);
        glVertex2f(1741,329);
        glVertex2f(1733,329);
    glEnd();

    getColor("bridgeShade");
    glBegin(GL_QUADS);
        glVertex2f(1733,323);
        glVertex2f(1749,323);
        glVertex2f(1749,315);
        glVertex2f(1733,315);
    glEnd();

    getColor("bridgeShade");
    glBegin(GL_QUADS);
        glVertex2f(1741,315);
        glVertex2f(1756,315);
        glVertex2f(1756,299);
        glVertex2f(1741,299);
    glEnd();

    getColor("bridgeShade");
    glBegin(GL_QUADS);
        glVertex2f(1741,299);
        glVertex2f(1757,299);
        glVertex2f(1757,126);
        glVertex2f(1741,126);
    glEnd();
}

//Street Light
void streetLight()
{
//1st
    getColor("bridge");
    glBegin(GL_QUADS);
        glVertex2f(335,125);
        glVertex2f(335,207);
        glVertex2f(343,207);
        glVertex2f(343,125);
    glEnd();

    getColor("bridge");
    glBegin(GL_QUADS);
        glVertex2f(343,199);
        glVertex2f(343,207);
        glVertex2f(366,207);
        glVertex2f(366,199);
    glEnd();

    getColor("bridge");
    glBegin(GL_QUADS);
        glVertex2f(366,192);
        glVertex2f(366,199);
        glVertex2f(374,199);
        glVertex2f(374,192);
    glEnd();

    getColor("whiteLight");
    glBegin(GL_QUADS);
        glVertex2f(366,185);
        glVertex2f(366,192);
        glVertex2f(374,192);
        glVertex2f(374,185);
    glEnd();
//2nd
    getColor("bridge");
    glBegin(GL_QUADS);
        glVertex2f(726,125);
        glVertex2f(726,207);
        glVertex2f(734,207);
        glVertex2f(734,125);
    glEnd();

    getColor("bridge");
    glBegin(GL_QUADS);
        glVertex2f(734,199);
        glVertex2f(734,207);
        glVertex2f(757,207);
        glVertex2f(757,199);
    glEnd();

    getColor("bridge");
    glBegin(GL_QUADS);
        glVertex2f(757,192);
        glVertex2f(757,199);
        glVertex2f(765,199);
        glVertex2f(765,192);
    glEnd();

    getColor("whiteLight");
    glBegin(GL_QUADS);
        glVertex2f(757,185);
        glVertex2f(757,192);
        glVertex2f(765,192);
        glVertex2f(765,185);
    glEnd();
//3rd
    getColor("bridge");
    glBegin(GL_QUADS);
        glVertex2f(1120,125);
        glVertex2f(1120,207);
        glVertex2f(1128,207);
        glVertex2f(1128,125);
    glEnd();

    getColor("bridge");
    glBegin(GL_QUADS);
        glVertex2f(1128,199);
        glVertex2f(1128,207);
        glVertex2f(1151,207);
        glVertex2f(1151,199);
    glEnd();

    getColor("bridge");
    glBegin(GL_QUADS);
        glVertex2f(1151,192);
        glVertex2f(1151,199);
        glVertex2f(1159,199);
        glVertex2f(1159,192);
    glEnd();

    getColor("whiteLight");
    glBegin(GL_QUADS);
        glVertex2f(1151,185);
        glVertex2f(1151,192);
        glVertex2f(1159,192);
        glVertex2f(1159,185);
    glEnd();
//4th
    getColor("bridge");
    glBegin(GL_QUADS);
        glVertex2f(1514,125);
        glVertex2f(1514,207);
        glVertex2f(1522,207);
        glVertex2f(1522,125);
    glEnd();

    getColor("bridge");
    glBegin(GL_QUADS);
        glVertex2f(1522,199);
        glVertex2f(1522,207);
        glVertex2f(1545,207);
        glVertex2f(1545,199);
    glEnd();

    getColor("bridge");
    glBegin(GL_QUADS);
        glVertex2f(1545,192);
        glVertex2f(1545,199);
        glVertex2f(1553,199);
        glVertex2f(1553,192);
    glEnd();

    getColor("whiteLight");
    glBegin(GL_QUADS);
        glVertex2f(1545,185);
        glVertex2f(1545,192);
        glVertex2f(1553,192);
        glVertex2f(1553,185);
    glEnd();
}

//Car
void car_1()
{
    glPushMatrix();
    glTranslatef(carPosition_1,0, 0);
    //body
    getColor("carBody_1");
    glBegin(GL_QUADS);
        glVertex2f(1180,131);
        glVertex2f(1180,145);
        glVertex2f(1318,145);
        glVertex2f(1318,131);
    glEnd();

    getColor("carBody_1");
    glBegin(GL_QUADS);
        glVertex2f(1188,145);
        glVertex2f(1188,169);
        glVertex2f(1212,169);
        glVertex2f(1212,145);
    glEnd();

    getColor("carBody_1");
    glBegin(GL_QUADS);
        glVertex2f(1226,145);
        glVertex2f(1226,185);
        glVertex2f(1318,185);
        glVertex2f(1318,145);
    glEnd();
    //wheel
    getColor("carWheel");
    glBegin(GL_QUADS);
        glVertex2f(1188,125);
        glVertex2f(1188,131);
        glVertex2f(1203,131);
        glVertex2f(1203,125);
    glEnd();

    getColor("carWheel");
    glBegin(GL_QUADS);
        glVertex2f(1218,125);
        glVertex2f(1218,131);
        glVertex2f(1233,131);
        glVertex2f(1233,125);
    glEnd();

    getColor("carWheel");
    glBegin(GL_QUADS);
        glVertex2f(1295,125);
        glVertex2f(1295,131);
        glVertex2f(1310,131);
        glVertex2f(1310,125);
    glEnd();
    //yellow light
    getColor("carYellowLight");
    glBegin(GL_QUADS);
        glVertex2f(1180,145);
        glVertex2f(1180,154);
        glVertex2f(1188,154);
        glVertex2f(1188,145);
    glEnd();
    //red light
    getColor("carRedLight");
    glBegin(GL_QUADS);
        glVertex2f(1310,145);
        glVertex2f(1310,154);
        glVertex2f(1318,154);
        glVertex2f(1318,145);
    glEnd();
    //yellow light
    getColor("carYellowLight");
    glBegin(GL_QUADS);
        glVertex2f(1196,169);
        glVertex2f(1196,177);
        glVertex2f(1212,177);
        glVertex2f(1212,169);
    glEnd();

    getColor("carYellowLight");
    glBegin(GL_QUADS);
        glVertex2f(1226,177);
        glVertex2f(1226,185);
        glVertex2f(1233,185);
        glVertex2f(1233,177);
    glEnd();

    getColor("carYellowLight");
    glBegin(GL_QUADS);
        glVertex2f(1311,177);
        glVertex2f(1311,185);
        glVertex2f(1318,185);
        glVertex2f(1318,177);
    glEnd();
    glPopMatrix();
}

void car_2()
{
    glPushMatrix();
    glTranslatef(carPosition_2,0, 0);
    //body
    getColor("carBody_2");
    glBegin(GL_QUADS);
        glVertex2f(1595,131);
        glVertex2f(1595,145);
        glVertex2f(1695,145);
        glVertex2f(1695,131);
    glEnd();

    getColor("carBody_2");
    glBegin(GL_QUADS);
        glVertex2f(1618,145);
        glVertex2f(1618,153);
        glVertex2f(1657,153);
        glVertex2f(1657,145);
    glEnd();
    //wheel
    getColor("carWheel");
    glBegin(GL_QUADS);
        glVertex2f(1611,125);
        glVertex2f(1611,131);
        glVertex2f(1626,131);
        glVertex2f(1626,125);
    glEnd();

    getColor("carWheel");
    glBegin(GL_QUADS);
        glVertex2f(1665,125);
        glVertex2f(1665,131);
        glVertex2f(1680,131);
        glVertex2f(1680,125);
    glEnd();
    //red light
    getColor("carRedLight");
    glBegin(GL_QUADS);
        glVertex2f(1595,139);
        glVertex2f(1595,145);
        glVertex2f(1604,145);
        glVertex2f(1604,139);
    glEnd();
    //yellow light
    getColor("carYellowLight");
    glBegin(GL_QUADS);
        glVertex2f(1687,139);
        glVertex2f(1687,145);
        glVertex2f(1695,145);
        glVertex2f(1695,139);
    glEnd();

    getColor("carYellowLight");
    glBegin(GL_QUADS);
        glVertex2f(1634,153);
        glVertex2f(1634,161);
        glVertex2f(1649,161);
        glVertex2f(1649,153);
    glEnd();
    glPopMatrix();
}
//Train
void train()
{
    glPushMatrix();
    glTranslatef(trainPosition,0, 0);
//1s_compartment
    getColor("trainTop");
    glBegin(GL_QUADS);
        glVertex2f(420,521);
        glVertex2f(704,521);
        glVertex2f(704,514);
        glVertex2f(420,514);
    glEnd();

    getColor("trainBody");
    glBegin(GL_QUADS);
        glVertex2f(411,514);
        glVertex2f(711,514);
        glVertex2f(711,505);
        glVertex2f(411,505);
    glEnd();

    getColor("trainBody");
    glBegin(GL_QUADS);
        glVertex2f(411,505);
        glVertex2f(403,505);
        glVertex2f(403,490);
        glVertex2f(411,490);
    glEnd();

    getColor("trainBody");
    glBegin(GL_QUADS);
        glVertex2f(711,505);
        glVertex2f(719,505);
        glVertex2f(719,490);
        glVertex2f(711,490);
    glEnd();

    getColor("trainBody");
    glBegin(GL_QUADS);
        glVertex2f(411,505);
        glVertex2f(419,505);
        glVertex2f(419,460);
        glVertex2f(411,460);
    glEnd();

    getColor("trainBody");
    glBegin(GL_QUADS);
        glVertex2f(411,460);
        glVertex2f(711,460);
        glVertex2f(711,421);
        glVertex2f(411,421);
    glEnd();

    getColor("trainBody");
    glBegin(GL_QUADS);
        glVertex2f(405,445);
        glVertex2f(411,445);
        glVertex2f(411,437);
        glVertex2f(405,437);
    glEnd();

    getColor("trainBody");
    glBegin(GL_QUADS);
        glVertex2f(434,505);
        glVertex2f(442,505);
        glVertex2f(442,460);
        glVertex2f(434,460);
    glEnd();

    getColor("trainBody");
    glBegin(GL_QUADS);
        glVertex2f(503,505);
        glVertex2f(511,505);
        glVertex2f(511,460);
        glVertex2f(503,460);
    glEnd();

    getColor("trainBody");
    glBegin(GL_QUADS);
        glVertex2f(581,505);
        glVertex2f(589,505);
        glVertex2f(589,460);
        glVertex2f(581,460);
    glEnd();

    getColor("trainBody");
    glBegin(GL_QUADS);
        glVertex2f(659,505);
        glVertex2f(666,505);
        glVertex2f(666,460);
        glVertex2f(659,460);
    glEnd();

    getColor("trainBody");
    glBegin(GL_QUADS);
        glVertex2f(689,505);
        glVertex2f(711,505);
        glVertex2f(711,460);
        glVertex2f(689,460);
    glEnd();

    getColor("trainBody");
    glBegin(GL_QUADS);
        glVertex2f(711,445);
        glVertex2f(718,445);
        glVertex2f(718,437);
        glVertex2f(711,437);
    glEnd();

    getColor("trainStripeDark");
    glBegin(GL_QUADS);
        glVertex2f(427,421);
        glVertex2f(695,421);
        glVertex2f(695,414);
        glVertex2f(427,414);
    glEnd();

    getColor("trainStripeDark");
    glBegin(GL_QUADS);
        glVertex2f(419,467);
        glVertex2f(434,467);
        glVertex2f(434,460);
        glVertex2f(419,460);
    glEnd();

    getColor("trainStripeDark");
    glBegin(GL_QUADS);
        glVertex2f(442,467);
        glVertex2f(503,467);
        glVertex2f(503,460);
        glVertex2f(442,460);
    glEnd();

    getColor("trainStripeDark");
    glBegin(GL_QUADS);
        glVertex2f(511,467);
        glVertex2f(581,467);
        glVertex2f(581,460);
        glVertex2f(511,460);
    glEnd();

    getColor("trainStripeDark");
    glBegin(GL_QUADS);
        glVertex2f(589,467);
        glVertex2f(659,467);
        glVertex2f(659,460);
        glVertex2f(589,460);
    glEnd();

    getColor("trainStripeDark");
    glBegin(GL_QUADS);
        glColor3ub(34, 43, 59);
        glVertex2f(666,467);
        glVertex2f(689,467);
        glVertex2f(689,460);
        glVertex2f(666,460);
    glEnd();

    getColor("trainStripeLight");
    glBegin(GL_QUADS);
        glVertex2f(427,505);
        glVertex2f(434,505);
        glVertex2f(434,467);
        glVertex2f(427,467);
    glEnd();

    getColor("trainStripeLight");
    glBegin(GL_QUADS);
        glVertex2f(495,505);
        glVertex2f(503,505);
        glVertex2f(503,467);
        glVertex2f(495,467);
    glEnd();

    getColor("trainStripeLight");
    glBegin(GL_QUADS);
        glVertex2f(573,505);
        glVertex2f(581,505);
        glVertex2f(581,467);
        glVertex2f(573,467);
    glEnd();

    getColor("trainStripeLight");
    glBegin(GL_QUADS);
        glVertex2f(650,505);
        glVertex2f(658,505);
        glVertex2f(658,467);
        glVertex2f(650,467);
    glEnd();

    getColor("trainStripeLight");
    glBegin(GL_QUADS);
        glVertex2f(682,505);
        glVertex2f(690,505);
        glVertex2f(690,467);
        glVertex2f(682,467);
    glEnd();

    getColor("trainGlass");
    glBegin(GL_QUADS);
        glVertex2f(419,505);
        glVertex2f(427,505);
        glVertex2f(427,467);
        glVertex2f(419,467);
    glEnd();

    getColor("trainGlass");
    glBegin(GL_QUADS);
        glVertex2f(442,505);
        glVertex2f(495,505);
        glVertex2f(495,467);
        glVertex2f(442,467);
    glEnd();

    getColor("trainGlass");
    glBegin(GL_QUADS);
        glVertex2f(511,505);
        glVertex2f(573,505);
        glVertex2f(573,467);
        glVertex2f(511,467);
    glEnd();

    getColor("trainGlass");
    glBegin(GL_QUADS);
        glVertex2f(589,505);
        glVertex2f(650,505);
        glVertex2f(650,467);
        glVertex2f(589,467);
    glEnd();

    getColor("trainGlass");
    glBegin(GL_QUADS);
        glVertex2f(666,505);
        glVertex2f(682,505);
        glVertex2f(682,467);
        glVertex2f(666,467);
    glEnd();

    getColor("trainGlassWhite");
    glBegin(GL_QUADS);
        glVertex2f(457,483);
        glVertex2f(464,483);
        glVertex2f(464,475);
        glVertex2f(457,475);
    glEnd();

    getColor("trainGlassWhite");
    glBegin(GL_QUADS);
        glVertex2f(464,490);
        glVertex2f(472,490);
        glVertex2f(472,483);
        glVertex2f(464,483);
    glEnd();

    getColor("trainGlassWhite");
    glBegin(GL_QUADS);
        glVertex2f(472,498);
        glVertex2f(480,498);
        glVertex2f(480,490);
        glVertex2f(472,490);
    glEnd();

    getColor("trainGlassWhite");
    glBegin(GL_QUADS);
        glVertex2f(528,483);
        glVertex2f(535,483);
        glVertex2f(535,475);
        glVertex2f(528,475);
    glEnd();

    getColor("trainGlassWhite");
    glBegin(GL_QUADS);
        glVertex2f(535,490);
        glVertex2f(543,490);
        glVertex2f(543,483);
        glVertex2f(535,483);
    glEnd();

    getColor("trainGlassWhite");
    glBegin(GL_QUADS);
        glVertex2f(543,498);
        glVertex2f(550,498);
        glVertex2f(550,490);
        glVertex2f(543,490);
    glEnd();

    getColor("trainGlassWhite");
    glBegin(GL_QUADS);
        glVertex2f(604,483);
        glVertex2f(612,483);
        glVertex2f(612,475);
        glVertex2f(604,475);
    glEnd();

    getColor("trainGlassWhite");
    glBegin(GL_QUADS);
        glVertex2f(612,490);
        glVertex2f(620,490);
        glVertex2f(620,483);
        glVertex2f(612,483);
    glEnd();

    getColor("trainGlassWhite");
    glBegin(GL_QUADS);
        glVertex2f(620,498);
        glVertex2f(628,498);
        glVertex2f(628,490);
        glVertex2f(620,490);
    glEnd();
//2nd_compartment
    getColor("trainTop");
    glBegin(GL_QUADS);
        glVertex2f(750,521);
        glVertex2f(1034,521);
        glVertex2f(1034,514);
        glVertex2f(750,514);
    glEnd();

    getColor("trainBody");
    glBegin(GL_QUADS);
        glVertex2f(742,514);
        glVertex2f(1042,514);
        glVertex2f(1042,505);
        glVertex2f(742,505);
    glEnd();

    getColor("trainBody");
    glBegin(GL_QUADS);
        glVertex2f(736,505);
        glVertex2f(742,505);
        glVertex2f(742,490);
        glVertex2f(736,490);
    glEnd();

    getColor("trainBody");
    glBegin(GL_QUADS);
        glVertex2f(1042,505);
        glVertex2f(1049,505);
        glVertex2f(1049,490);
        glVertex2f(1042,490);
    glEnd();

    getColor("trainBody");
    glBegin(GL_QUADS);
        glVertex2f(742,505);
        glVertex2f(750,505);
        glVertex2f(750,460);
        glVertex2f(742,460);
    glEnd();

    getColor("trainBody");
    glBegin(GL_QUADS);
        glVertex2f(742,460);
        glVertex2f(1042,460);
        glVertex2f(1042,421);
        glVertex2f(742,421);
    glEnd();

    getColor("trainBody");
    glBegin(GL_QUADS);
        glVertex2f(735,445);
        glVertex2f(742,445);
        glVertex2f(742,437);
        glVertex2f(735,437);
    glEnd();

    getColor("trainBody");
    glBegin(GL_QUADS);
        glVertex2f(1042,445);
        glVertex2f(1049,445);
        glVertex2f(1049,437);
        glVertex2f(1042,437);
    glEnd();

     getColor("trainBody");
     glBegin(GL_QUADS);
        glVertex2f(765,505);
        glVertex2f(773,505);
        glVertex2f(773,460);
        glVertex2f(765,460);
    glEnd();

    getColor("trainBody");
    glBegin(GL_QUADS);
        glVertex2f(834,505);
        glVertex2f(841,505);
        glVertex2f(841,460);
        glVertex2f(834,460);
    glEnd();

    getColor("trainBody");
    glBegin(GL_QUADS);
        glVertex2f(911,505);
        glVertex2f(919,505);
        glVertex2f(919,460);
        glVertex2f(911,460);
    glEnd();

    getColor("trainBody");
    glBegin(GL_QUADS);
        glVertex2f(988,505);
        glVertex2f(995,505);
        glVertex2f(995,460);
        glVertex2f(988,460);
    glEnd();

    getColor("trainBody");
    glBegin(GL_QUADS);
        glVertex2f(1018,505);
        glVertex2f(1042,505);
        glVertex2f(1042,460);
        glVertex2f(1018,460);
    glEnd();

    getColor("trainStripeDark");
    glBegin(GL_QUADS);
        glVertex2f(750,467);
        glVertex2f(765,467);
        glVertex2f(765,460);
        glVertex2f(750,460);
    glEnd();

    getColor("trainStripeDark");
    glBegin(GL_QUADS);
        glVertex2f(773,467);
        glVertex2f(834,467);
        glVertex2f(834,460);
        glVertex2f(773,460);
    glEnd();

    getColor("trainStripeDark");
    glBegin(GL_QUADS);
        glVertex2f(841,467);
        glVertex2f(911,467);
        glVertex2f(911,460);
        glVertex2f(841,460);
    glEnd();

    getColor("trainStripeDark");
    glBegin(GL_QUADS);
        glVertex2f(919,467);
        glVertex2f(988,467);
        glVertex2f(988,460);
        glVertex2f(919,460);
    glEnd();

    getColor("trainStripeDark");
    glBegin(GL_QUADS);
        glVertex2f(995,467);
        glVertex2f(1018,467);
        glVertex2f(1018,460);
        glVertex2f(995,460);
    glEnd();

    getColor("trainStripeDark");
    glBegin(GL_QUADS);
        glVertex2f(758,421);
        glVertex2f(1026,421);
        glVertex2f(1026,414);
        glVertex2f(758,414);
    glEnd();

    getColor("trainGlass");
    glBegin(GL_QUADS);
        glVertex2f(750,505);
        glVertex2f(758,505);
        glVertex2f(758,467);
        glVertex2f(750,467);
    glEnd();

    getColor("trainGlass");
    glBegin(GL_QUADS);
        glVertex2f(841,505);
        glVertex2f(857,505);
        glVertex2f(857,467);
        glVertex2f(841,467);
    glEnd();

    getColor("trainGlass");
    glBegin(GL_QUADS);
        glVertex2f(857,498);
        glVertex2f(864,498);
        glVertex2f(864,467);
        glVertex2f(857,467);
    glEnd();

    getColor("trainGlass");
    glBegin(GL_QUADS);
        glVertex2f(826,505);
        glVertex2f(834,505);
        glVertex2f(834,467);
        glVertex2f(826,467);
    glEnd();

    getColor("trainGlass");
    glBegin(GL_QUADS);
        glVertex2f(857,505);
        glVertex2f(864,505);
        glVertex2f(864,498);
        glVertex2f(857,498);
    glEnd();

    getColor("trainGlass");
    glBegin(GL_QUADS);
        glVertex2f(864,505);
        glVertex2f(903,505);
        glVertex2f(903,467);
        glVertex2f(864,467);
    glEnd();

    getColor("trainGlass");
    glBegin(GL_QUADS);
        glVertex2f(919,505);
        glVertex2f(988,505);
        glVertex2f(988,467);
        glVertex2f(919,467);
    glEnd();

    getColor("trainGlass");
    glBegin(GL_QUADS);
        glVertex2f(995,505);
        glVertex2f(1011,505);
        glVertex2f(1011,467);
        glVertex2f(995,467);
    glEnd();

    getColor("trainGlass");
    glBegin(GL_QUADS);
        glVertex2f(773,505);
        glVertex2f(826,505);
        glVertex2f(826,467);
        glVertex2f(773,467);
    glEnd();

    getColor("trainStripeLight");
    glBegin(GL_QUADS);
        glVertex2f(758,505);
        glVertex2f(765,505);
        glVertex2f(765,467);
        glVertex2f(758,467);
    glEnd();

    getColor("trainStripeLight");
    glBegin(GL_QUADS);
        glVertex2f(826,505);
        glVertex2f(834,505);
        glVertex2f(834,467);
        glVertex2f(826,467);
    glEnd();

    getColor("trainStripeLight");
    glBegin(GL_QUADS);
        glVertex2f(903,505);
        glVertex2f(911,505);
        glVertex2f(911,467);
        glVertex2f(903,467);
    glEnd();

    getColor("trainStripeLight");
    glBegin(GL_QUADS);
        glVertex2f(1011,505);
        glVertex2f(1018,505);
        glVertex2f(1018,467);
        glVertex2f(1011,467);
    glEnd();

    getColor("trainStripeLight");
    glBegin(GL_QUADS);
        glVertex2f(980,505);
        glVertex2f(988,505);
        glVertex2f(988,467);
        glVertex2f(980,467);
    glEnd();

    getColor("trainGlassWhite");
    glBegin(GL_QUADS);
        glVertex2f(788,483);
        glVertex2f(795,483);
        glVertex2f(795,475);
        glVertex2f(788,475);
    glEnd();

    getColor("trainGlassWhite");
    glBegin(GL_QUADS);
        glVertex2f(795,490);
        glVertex2f(803,490);
        glVertex2f(803,483);
        glVertex2f(795,483);
    glEnd();

    getColor("trainGlassWhite");
    glBegin(GL_QUADS);
        glVertex2f(803,498);
        glVertex2f(810,498);
        glVertex2f(810,490);
        glVertex2f(803,490);
    glEnd();

    getColor("trainGlassWhite");
    glBegin(GL_QUADS);
        glVertex2f(864,483);
        glVertex2f(872,483);
        glVertex2f(872,475);
        glVertex2f(864,475);
    glEnd();

    getColor("trainGlassWhite");
    glBegin(GL_QUADS);
        glVertex2f(872,490);
        glVertex2f(880,490);
        glVertex2f(880,483);
        glVertex2f(872,483);
    glEnd();

    getColor("trainGlassWhite");
    glBegin(GL_QUADS);
        glVertex2f(880,498);
        glVertex2f(888,498);
        glVertex2f(888,490);
        glVertex2f(880,490);
    glEnd();

    getColor("trainGlassWhite");
    glBegin(GL_QUADS);
        glVertex2f(934,483);
        glVertex2f(942,483);
        glVertex2f(942,475);
        glVertex2f(934,475);
    glEnd();

    getColor("trainGlassWhite");
    glBegin(GL_QUADS);
        glVertex2f(942,490);
        glVertex2f(949,490);
        glVertex2f(949,483);
        glVertex2f(942,483);
    glEnd();

    getColor("trainGlassWhite");
    glBegin(GL_QUADS);
        glVertex2f(949,498);
        glVertex2f(957,498);
        glVertex2f(957,490);
        glVertex2f(949,490);
    glEnd();
//3rd_compartment
    getColor("trainTop");
    glBegin(GL_QUADS);
        glVertex2f(1080,521);
        glVertex2f(1365,521);
        glVertex2f(1365,514);
        glVertex2f(1080,514);
    glEnd();

    getColor("trainBody");
    glBegin(GL_QUADS);
        glVertex2f(1073,514);
        glVertex2f(1371,514);
        glVertex2f(1371,505);
        glVertex2f(1073,505);
    glEnd();

    getColor("trainBody");
    glBegin(GL_QUADS);
        glVertex2f(1065,505);
        glVertex2f(1073,505);
        glVertex2f(1073,490);
        glVertex2f(1065,490);
    glEnd();

    getColor("trainBody");
    glBegin(GL_QUADS);
        glVertex2f(1065,505);
        glVertex2f(1073,505);
        glVertex2f(1073,490);
        glVertex2f(1065,490);
    glEnd();

    getColor("trainBody");
    glBegin(GL_QUADS);
        glVertex2f(1073,505);
        glVertex2f(1080,505);
        glVertex2f(1080,460);
        glVertex2f(1073,460);
    glEnd();

    getColor("trainBody");
    glBegin(GL_QUADS);
        glVertex2f(1073,460);
        glVertex2f(1371,460);
        glVertex2f(1371,421);
        glVertex2f(1073,421);
    glEnd();

    getColor("trainBody");
    glBegin(GL_QUADS);
        glVertex2f(1065,445);
        glVertex2f(1073,445);
        glVertex2f(1073,437);
        glVertex2f(1065,437);
    glEnd();

    getColor("trainBody");
    glBegin(GL_QUADS);
        glVertex2f(1096,505);
        glVertex2f(1103,505);
        glVertex2f(1103,460);
        glVertex2f(1096,460);
    glEnd();

    getColor("trainBody");
    glBegin(GL_QUADS);
        glVertex2f(1165,505);
        glVertex2f(1172,505);
        glVertex2f(1172,460);
        glVertex2f(1165,460);
    glEnd();

    getColor("trainBody");
    glBegin(GL_QUADS);
        glVertex2f(1241,505);
        glVertex2f(1249,505);
        glVertex2f(1249,460);
        glVertex2f(1241,460);
    glEnd();

    getColor("trainBody");
    glBegin(GL_QUADS);
        glVertex2f(1318,505);
        glVertex2f(1325,505);
        glVertex2f(1325,460);
        glVertex2f(1318,460);
    glEnd();

    getColor("trainBody");
    glBegin(GL_QUADS);
        glVertex2f(1349,505);
        glVertex2f(1371,505);
        glVertex2f(1371,460);
        glVertex2f(1349,460);
    glEnd();

    getColor("trainBody");
    glBegin(GL_QUADS);
        glVertex2f(1371,505);
        glVertex2f(1380,505);
        glVertex2f(1380,490);
        glVertex2f(1371,490);
    glEnd();

    getColor("trainBody");
    glBegin(GL_QUADS);
        glVertex2f(1371,445);
        glVertex2f(1380,445);
        glVertex2f(1380,437);
        glVertex2f(1371,437);
    glEnd();

    getColor("trainStripeDark");
    glBegin(GL_QUADS);
        glVertex2f(1088,421);
        glVertex2f(1356,421);
        glVertex2f(1356,414);
        glVertex2f(1088,414);
    glEnd();

    getColor("trainStripeDark");
    glBegin(GL_QUADS);
        glVertex2f(1080,467);
        glVertex2f(1096,467);
        glVertex2f(1096,460);
        glVertex2f(1080,460);
    glEnd();

    getColor("trainStripeDark");
    glBegin(GL_QUADS);
        glVertex2f(1103,467);
        glVertex2f(1164,467);
        glVertex2f(1164,460);
        glVertex2f(1103,460);
    glEnd();

    getColor("trainStripeDark");
    glBegin(GL_QUADS);
        glVertex2f(1172,467);
        glVertex2f(1241,467);
        glVertex2f(1241,460);
        glVertex2f(1172,460);
    glEnd();

    getColor("trainStripeDark");
    glBegin(GL_QUADS);
        glVertex2f(1249,467);
        glVertex2f(1318,467);
        glVertex2f(1318,460);
        glVertex2f(1249,460);
    glEnd();

    getColor("trainStripeDark");
    glBegin(GL_QUADS);
        glColor3ub(34, 43, 59);
        glVertex2f(1325,467);
        glVertex2f(1349,467);
        glVertex2f(1349,460);
        glVertex2f(1325,460);
    glEnd();

    getColor("trainStripeLight");
    glBegin(GL_QUADS);
        glVertex2f(1311,505);
        glVertex2f(1318,505);
        glVertex2f(1318,467);
        glVertex2f(1311,467);
    glEnd();

    getColor("trainStripeLight");
    glBegin(GL_QUADS);
        glVertex2f(1233,505);
        glVertex2f(1241,505);
        glVertex2f(1241,467);
        glVertex2f(1233,467);
    glEnd();

    getColor("trainStripeLight");
    glBegin(GL_QUADS);
        glVertex2f(1157,505);
        glVertex2f(1165,505);
        glVertex2f(1165,460);
        glVertex2f(1157,460);
    glEnd();

    getColor("trainStripeLight");
    glBegin(GL_QUADS);
        glVertex2f(1080,505);
        glVertex2f(1088,505);
        glVertex2f(1088,467);
        glVertex2f(1080,467);
    glEnd();

    getColor("trainStripeLight");
    glBegin(GL_QUADS);
        glVertex2f(1341,505);
        glVertex2f(1349,505);
        glVertex2f(1349,467);
        glVertex2f(1341,467);
    glEnd();

    getColor("trainStripeLight");
    glBegin(GL_QUADS);
        glVertex2f(1088,505);
        glVertex2f(1096,505);
        glVertex2f(1096,467);
        glVertex2f(1088,467);
    glEnd();

    getColor("trainGlass");
    glBegin(GL_QUADS);
        glVertex2f(1080,505);
        glVertex2f(1088,505);
        glVertex2f(1088,467);
        glVertex2f(1080,467);
    glEnd();

    getColor("trainGlass");
    glBegin(GL_QUADS);
        glVertex2f(1103,505);
        glVertex2f(1157,505);
        glVertex2f(1157,467);
        glVertex2f(1103,467);
    glEnd();

    getColor("trainGlass");
    glBegin(GL_QUADS);
        glVertex2f(1172,505);
        glVertex2f(1233,505);
        glVertex2f(1233,467);
        glVertex2f(1172,467);
    glEnd();

    getColor("trainGlass");
    glBegin(GL_QUADS);
        glVertex2f(1249,505);
        glVertex2f(1311,505);
        glVertex2f(1311,467);
        glVertex2f(1249,467);
    glEnd();

    getColor("trainGlass");
    glBegin(GL_QUADS);
        glVertex2f(1325,505);
        glVertex2f(1341,505);
        glVertex2f(1341,467);
        glVertex2f(1325,467);
    glEnd();

    getColor("trainGlassWhite");
    glBegin(GL_QUADS);
        glVertex2f(1119,483);
        glVertex2f(1127,483);
        glVertex2f(1127,475);
        glVertex2f(1119,475);
    glEnd();

    getColor("trainGlassWhite");
    glBegin(GL_QUADS);
        glVertex2f(1127,490);
        glVertex2f(1134,490);
        glVertex2f(1134,483);
        glVertex2f(1127,483);
    glEnd();

    getColor("trainGlassWhite");
    glBegin(GL_QUADS);
        glVertex2f(1134,498);
        glVertex2f(1142,498);
        glVertex2f(1142,490);
        glVertex2f(1134,490);
    glEnd();

    getColor("trainGlassWhite");
    glBegin(GL_QUADS);
        glVertex2f(1188,483);
        glVertex2f(1196,483);
        glVertex2f(1196,475);
        glVertex2f(1188,475);
    glEnd();

    getColor("trainGlassWhite");
    glBegin(GL_QUADS);
        glVertex2f(1196,490);
        glVertex2f(1203,490);
        glVertex2f(1203,483);
        glVertex2f(1196,483);
    glEnd();

    getColor("trainGlassWhite");
    glBegin(GL_QUADS);
        glVertex2f(1203,498);
        glVertex2f(1211,498);
        glVertex2f(1211,490);
        glVertex2f(1203,490);
    glEnd();

    getColor("trainGlassWhite");
    glBegin(GL_QUADS);
        glVertex2f(1264,483);
        glVertex2f(1272,483);
        glVertex2f(1272,475);
        glVertex2f(1264,475);
    glEnd();

    getColor("trainGlassWhite");
    glBegin(GL_QUADS);
        glVertex2f(1272,490);
        glVertex2f(1280,490);
        glVertex2f(1280,483);
        glVertex2f(1272,483);
    glEnd();

    getColor("trainGlassWhite");
    glBegin(GL_QUADS);
        glVertex2f(1280,498);
        glVertex2f(1287,498);
        glVertex2f(1287,490);
        glVertex2f(1280,490);
    glEnd();
//4th_compartment
    getColor("trainTop");
    glBegin(GL_QUADS);
        glVertex2f(1410,521);
        glVertex2f(1695,521);
        glVertex2f(1695,514);
        glVertex2f(1410,514);
    glEnd();

    getColor("trainBody");
    glBegin(GL_QUADS);
        glVertex2f(1402,514);
        glVertex2f(1702,514);
        glVertex2f(1702,505);
        glVertex2f(1402,505);
    glEnd();

    getColor("trainBody");
    glBegin(GL_QUADS);
        glVertex2f(1395,505);
        glVertex2f(1402,505);
        glVertex2f(1402,490);
        glVertex2f(1395,490);
    glEnd();

    getColor("trainBody");
    glBegin(GL_QUADS);
        glVertex2f(1402,505);
        glVertex2f(1410,505);
        glVertex2f(1410,460);
        glVertex2f(1402,460);
    glEnd();

    getColor("trainBody");
    glBegin(GL_QUADS);
        glVertex2f(1402,460);
        glVertex2f(1702,460);
        glVertex2f(1702,421);
        glVertex2f(1402,421);
    glEnd();

    getColor("trainBody");
    glBegin(GL_QUADS);
        glVertex2f(1702,445);
        glVertex2f(1710,445);
        glVertex2f(1710,437);
        glVertex2f(1702,437);
    glEnd();

    getColor("trainBody");
    glBegin(GL_QUADS);
        glVertex2f(1395,445);
        glVertex2f(1402,445);
        glVertex2f(1402,437);
        glVertex2f(1395,437);
    glEnd();

    getColor("trainBody");
    glBegin(GL_QUADS);
        glVertex2f(1426,505);
        glVertex2f(1434,505);
        glVertex2f(1434,460);
        glVertex2f(1426,460);
    glEnd();

    getColor("trainBody");
    glBegin(GL_QUADS);
        glVertex2f(1495,505);
        glVertex2f(1503,505);
        glVertex2f(1503,460);
        glVertex2f(1495,460);
    glEnd();

    getColor("trainBody");
    glBegin(GL_QUADS);
        glVertex2f(1572,505);
        glVertex2f(1580,505);
        glVertex2f(1580,460);
        glVertex2f(1572,460);
    glEnd();

    getColor("trainBody");
    glBegin(GL_QUADS);
        glVertex2f(1648,505);
        glVertex2f(1657,505);
        glVertex2f(1657,460);
        glVertex2f(1648,460);
    glEnd();

    getColor("trainBody");
    glBegin(GL_QUADS);
        glVertex2f(1679,505);
        glVertex2f(1702,505);
        glVertex2f(1702,460);
        glVertex2f(1679,460);
    glEnd();

    getColor("trainBody");
    glBegin(GL_QUADS);
        glVertex2f(1702,505);
        glVertex2f(1710,505);
        glVertex2f(1710,490);
        glVertex2f(1702,490);
    glEnd();

    getColor("trainStripeDark");
    glBegin(GL_QUADS);
        glVertex2f(1410,467);
        glVertex2f(1426,467);
        glVertex2f(1426,460);
        glVertex2f(1410,460);
    glEnd();

    getColor("trainStripeDark");
    glBegin(GL_QUADS);
        glVertex2f(1434,467);
        glVertex2f(1495,467);
        glVertex2f(1495,460);
        glVertex2f(1434,460);
    glEnd();

    getColor("trainStripeDark");
    glBegin(GL_QUADS);
        glVertex2f(1503,467);
        glVertex2f(1572,467);
        glVertex2f(1572,460);
        glVertex2f(1503,460);
    glEnd();

    getColor("trainStripeDark");
    glBegin(GL_QUADS);
        glVertex2f(1580,467);
        glVertex2f(1648,467);
        glVertex2f(1648,460);
        glVertex2f(1580,460);
    glEnd();

    getColor("trainStripeDark");
    glBegin(GL_QUADS);
        glVertex2f(1657,467);
        glVertex2f(1679,467);
        glVertex2f(1679,460);
        glVertex2f(1657,460);
    glEnd();

    getColor("trainStripeDark");
    glBegin(GL_QUADS);
        glVertex2f(1419,421);
        glVertex2f(1687,421);
        glVertex2f(1687,414);
        glVertex2f(1419,414);
    glEnd();

    getColor("trainGlass");
    glBegin(GL_QUADS);
        glVertex2f(1410,505);
        glVertex2f(1419,505);
        glVertex2f(1419,467);
        glVertex2f(1410,467);
    glEnd();

    getColor("trainGlass");
    glBegin(GL_QUADS);
        glVertex2f(1434,505);
        glVertex2f(1488,505);
        glVertex2f(1488,467);
        glVertex2f(1434,467);
    glEnd();

    getColor("trainGlass");
    glBegin(GL_QUADS);
        glVertex2f(1503,505);
        glVertex2f(1564,505);
        glVertex2f(1564,467);
        glVertex2f(1503,467);
    glEnd();

    getColor("trainGlass");
    glBegin(GL_QUADS);
        glVertex2f(1580,505);
        glVertex2f(1641,505);
        glVertex2f(1641,467);
        glVertex2f(1580,467);
    glEnd();

    getColor("trainGlass");
    glBegin(GL_QUADS);
        glVertex2f(1657,505);
        glVertex2f(1672,505);
        glVertex2f(1672,467);
        glVertex2f(1657,467);
    glEnd();

    getColor("trainStripeLight");
    glBegin(GL_QUADS);
        glVertex2f(1419,505);
        glVertex2f(1426,505);
        glVertex2f(1426,467);
        glVertex2f(1419,467);
    glEnd();

    getColor("trainStripeLight");
    glBegin(GL_QUADS);
        glVertex2f(1488,505);
        glVertex2f(1495,505);
        glVertex2f(1495,467);
        glVertex2f(1488,467);
    glEnd();

    getColor("trainStripeLight");
    glBegin(GL_QUADS);
        glVertex2f(1564,505);
        glVertex2f(1572,505);
        glVertex2f(1572,467);
        glVertex2f(1564,467);
    glEnd();

    getColor("trainStripeLight");
    glBegin(GL_QUADS);
        glVertex2f(1641,505);
        glVertex2f(1648,505);
        glVertex2f(1648,467);
        glVertex2f(1641,467);
    glEnd();

    getColor("trainStripeLight");
    glBegin(GL_QUADS);
        glVertex2f(1672,505);
        glVertex2f(1679,505);
        glVertex2f(1679,467);
        glVertex2f(1672,467);
    glEnd();

    getColor("trainGlass");
    glBegin(GL_QUADS);
        glVertex2f(1657,475);
        glVertex2f(1664,475);
        glVertex2f(1664,467);
        glVertex2f(1657,467);
    glEnd();

    getColor("trainGlass");
    glBegin(GL_QUADS);
        glVertex2f(1603,475);
        glVertex2f(1633,475);
        glVertex2f(1633,467);
        glVertex2f(1603,467);
    glEnd();

    getColor("trainGlassWhite");
    glBegin(GL_QUADS);
        glVertex2f(1449,483);
        glVertex2f(1457,483);
        glVertex2f(1457,475);
        glVertex2f(1449,475);
    glEnd();

    getColor("trainGlassWhite");
    glBegin(GL_QUADS);
        glVertex2f(1457,490);
        glVertex2f(1464,490);
        glVertex2f(1464,483);
        glVertex2f(1457,483);
    glEnd();

    getColor("trainGlassWhite");
    glBegin(GL_QUADS);
        glVertex2f(1464,498);
        glVertex2f(1472,498);
        glVertex2f(1472,490);
        glVertex2f(1464,490);
    glEnd();

    getColor("trainGlassWhite");
    glBegin(GL_QUADS);
        glVertex2f(1526,483);
        glVertex2f(1534,483);
        glVertex2f(1534,475);
        glVertex2f(1526,475);
    glEnd();

    getColor("trainGlassWhite");
    glBegin(GL_QUADS);
        glVertex2f(1534,490);
        glVertex2f(1541,490);
        glVertex2f(1541,483);
        glVertex2f(1534,483);
    glEnd();

    getColor("trainGlassWhite");
    glBegin(GL_QUADS);
        glVertex2f(1541,498);
        glVertex2f(1549,498);
        glVertex2f(1549,490);
        glVertex2f(1541,490);
    glEnd();

    getColor("trainGlassWhite");
    glBegin(GL_QUADS);
        glVertex2f(1595,483);
        glVertex2f(1603,483);
        glVertex2f(1603,475);
        glVertex2f(1595,475);
    glEnd();

    getColor("trainGlassWhite");
    glBegin(GL_QUADS);
        glVertex2f(1603,490);
        glVertex2f(1610,490);
        glVertex2f(1610,483);
        glVertex2f(1603,483);
    glEnd();

    getColor("trainGlassWhite");
    glBegin(GL_QUADS);
        glVertex2f(1610,498);
        glVertex2f(1618,498);
        glVertex2f(1618,490);
        glVertex2f(1610,490);
    glEnd();

    glPopMatrix();
}

//Water Railing
void waterRailing()
{
    getColor("bridge");
    glBegin(GL_QUADS);
        glVertex2f(0,110);
        glVertex2f(0,125);
        glVertex2f(1920,125);
        glVertex2f(1920,110);
    glEnd();

    getColor("railingShade");
    glBegin(GL_QUADS);
        glVertex2f(0,140);
        glVertex2f(0,150);
        glVertex2f(1920,150);
        glVertex2f(1920,140);
    glEnd();

    getColor("railingShade");
    glBegin(GL_QUADS);
        glVertex2f(0,125);
        glVertex2f(0,140);
        glVertex2f(13,140);
        glVertex2f(13,125);
    glEnd();

    getColor("railingShade");
    glBegin(GL_QUADS);
        glVertex2f(400,125);
        glVertex2f(400,140);
        glVertex2f(413,140);
        glVertex2f(413,125);
    glEnd();

    getColor("railingShade");
    glBegin(GL_QUADS);
        glVertex2f(787,125);
        glVertex2f(787,140);
        glVertex2f(800,140);
        glVertex2f(800,125);
    glEnd();

    getColor("railingShade");
    glBegin(GL_QUADS);
        glVertex2f(1174,125);
        glVertex2f(1174,140);
        glVertex2f(1187,140);
        glVertex2f(1187,125);
    glEnd();

    getColor("railingShade");
    glBegin(GL_QUADS);
        glVertex2f(1571,125);
        glVertex2f(1571,140);
        glVertex2f(1584,140);
        glVertex2f(1584,125);
    glEnd();
}

//Water
void water()
{
    getColor("water");
    glBegin(GL_QUADS);
        glVertex2f(0,0);
        glVertex2f(0,110);
        glVertex2f(1920,110);
        glVertex2f(1920,0);
    glEnd();
}

//Reflection
void reflection()
{
//1st
    getColor("reflectionDark");
    glBegin(GL_QUADS);
        glVertex2f(0,95);
        glVertex2f(0,110);
        glVertex2f(1920,110);
        glVertex2f(1920,95);
    glEnd();
//2nd
    glPushMatrix();
    glTranslatef(evenReflectionPosition,0,0);
    getColor("reflectionLight");
    glBegin(GL_QUADS);
        glVertex2f(12,80);
        glVertex2f(12,95);
        glVertex2f(20,95);
        glVertex2f(20,80);
    glEnd();

    getColor("reflectionDark");
    glBegin(GL_QUADS);
        glVertex2f(20,80);
        glVertex2f(20,95);
        glVertex2f(35,95);
        glVertex2f(35,80);
    glEnd();

    getColor("reflectionLight");
    glBegin(GL_QUADS);
        glVertex2f(166,80);
        glVertex2f(166,95);
        glVertex2f(181,95);
        glVertex2f(181,80);
    glEnd();

    getColor("reflectionDark");
    glBegin(GL_QUADS);
        glVertex2f(181,80);
        glVertex2f(181,95);
        glVertex2f(243,95);
        glVertex2f(243,80);
    glEnd();

    getColor("reflectionLight");
    glBegin(GL_QUADS);
        glVertex2f(565,80);
        glVertex2f(565,95);
        glVertex2f(581,95);
        glVertex2f(581,80);
    glEnd();

    getColor("reflectionDark");
    glBegin(GL_QUADS);
        glVertex2f(581,80);
        glVertex2f(581,95);
        glVertex2f(642,95);
        glVertex2f(642,80);
    glEnd();

    getColor("reflectionLight");
    glBegin(GL_QUADS);
        glVertex2f(942,80);
        glVertex2f(942,95);
        glVertex2f(957,95);
        glVertex2f(957,80);
    glEnd();

    getColor("reflectionDark");
    glBegin(GL_QUADS);
        glVertex2f(957,80);
        glVertex2f(957,95);
        glVertex2f(1019,95);
        glVertex2f(1019,80);
    glEnd();

    getColor("reflectionLight");
    glBegin(GL_QUADS);
        glVertex2f(1350,80);
        glVertex2f(1350,95);
        glVertex2f(1365,95);
        glVertex2f(1365,80);
    glEnd();

    getColor("reflectionDark");
    glBegin(GL_QUADS);
        glVertex2f(1365,80);
        glVertex2f(1365,95);
        glVertex2f(1426,95);
        glVertex2f(1426,80);
    glEnd();

    getColor("reflectionLight");
    glBegin(GL_QUADS);
        glVertex2f(1742,80);
        glVertex2f(1742,95);
        glVertex2f(1757,95);
        glVertex2f(1757,80);
    glEnd();

    getColor("reflectionDark");
    glBegin(GL_QUADS);
        glVertex2f(1757,80);
        glVertex2f(1757,95);
        glVertex2f(1818,95);
        glVertex2f(1818,80);
    glEnd();

    getColor("reflectionWhite");
    glBegin(GL_QUADS);
        glVertex2f(713,80);
        glVertex2f(713,95);
        glVertex2f(719,95);
        glVertex2f(719,80);
    glEnd();

    getColor("reflectionWhite");
    glBegin(GL_QUADS);
        glVertex2f(743,80);
        glVertex2f(743,95);
        glVertex2f(866,95);
        glVertex2f(866,80);
    glEnd();

    getColor("reflectionLight");
    glBegin(GL_QUADS);
        glVertex2f(0,80);
        glVertex2f(0,95);
        glVertex2f(13,95);
        glVertex2f(13,80);
    glEnd();

    getColor("reflectionLight");
    glBegin(GL_QUADS);
        glVertex2f(400,80);
        glVertex2f(400,95);
        glVertex2f(413,95);
        glVertex2f(413,80);
    glEnd();

    getColor("reflectionLight");
    glBegin(GL_QUADS);
        glVertex2f(787,80);
        glVertex2f(787,95);
        glVertex2f(800,95);
        glVertex2f(800,80);
    glEnd();

    getColor("reflectionLight");
    glBegin(GL_QUADS);
        glVertex2f(1174,80);
        glVertex2f(1174,95);
        glVertex2f(1187,95);
        glVertex2f(1187,80);
    glEnd();

    getColor("reflectionLight");
    glBegin(GL_QUADS);
        glVertex2f(1571,80);
        glVertex2f(1571,95);
        glVertex2f(1584,95);
        glVertex2f(1584,80);
    glEnd();

    getColor("reflectionLight");
    glBegin(GL_QUADS);
        glVertex2f(0,80);
        glVertex2f(0,95);
        glVertex2f(13,95);
        glVertex2f(13,80);
    glEnd();

    getColor("reflectionDark");
    glBegin(GL_QUADS);
        glVertex2f(34,88);
        glVertex2f(34,95);
        glVertex2f(50,95);
        glVertex2f(50,88);
    glEnd();

    getColor("reflectionDark");
    glBegin(GL_QUADS);
        glVertex2f(44,80);
        glVertex2f(44,88);
        glVertex2f(50,88);
        glVertex2f(50,80);
    glEnd();

    getColor("reflectionLight");
    glBegin(GL_QUADS);
        glVertex2f(50,88);
        glVertex2f(50,95);
        glVertex2f(82,95);
        glVertex2f(82,88);
    glEnd();

    getColor("reflectionDark");
    glBegin(GL_QUADS);
        glVertex2f(50,80);
        glVertex2f(50,88);
        glVertex2f(82,88);
        glVertex2f(82,80);
    glEnd();

    getColor("reflectionLight");
    glBegin(GL_QUADS);
        glVertex2f(82,80);
        glVertex2f(82,88);
        glVertex2f(89,88);
        glVertex2f(89,80);
    glEnd();

    getColor("reflectionWhite");
    glBegin(GL_QUADS);
        glVertex2f(1073,80);
        glVertex2f(1073,88);
        glVertex2f(1166,88);
        glVertex2f(1166,80);
    glEnd();

    getColor("reflectionWhite");
    glBegin(GL_QUADS);
        glVertex2f(1080,88);
        glVertex2f(1080,95);
        glVertex2f(1166,95);
        glVertex2f(1166,88);
    glEnd();

    getColor("reflectionWhite");
    glBegin(GL_QUADS);
        glVertex2f(1510,80);
        glVertex2f(1510,95);
        glVertex2f(1542,95);
        glVertex2f(1542,80);
    glEnd();
    glPopMatrix();
//3rd
    getColor("reflectionLight");
    glBegin(GL_QUADS);
        glVertex2f(0,70);
        glVertex2f(0,80);
        glVertex2f(1920,80);
        glVertex2f(1920,70);
    glEnd();

    getColor("reflectionDark");
    glBegin(GL_QUADS);
        glVertex2f(82,67);
        glVertex2f(82,70);
        glVertex2f(105,70);
        glVertex2f(105,67);
    glEnd();
//4th
    glPushMatrix();
    glTranslatef(oddReflectionPosition,0,0);
    getColor("reflectionLight");
    glBegin(GL_QUADS);
        glVertex2f(12,55);
        glVertex2f(12,70);
        glVertex2f(20,70);
        glVertex2f(20,55);
    glEnd();

    getColor("reflectionDark");
    glBegin(GL_QUADS);
        glVertex2f(20,55);
        glVertex2f(20,70);
        glVertex2f(35,70);
        glVertex2f(35,55);
    glEnd();

    getColor("reflectionLight");
    glBegin(GL_QUADS);
        glVertex2f(166,55);
        glVertex2f(166,70);
        glVertex2f(181,70);
        glVertex2f(181,55);
    glEnd();

    getColor("reflectionDark");
    glBegin(GL_QUADS);
        glVertex2f(181,55);
        glVertex2f(181,70);
        glVertex2f(243,70);
        glVertex2f(243,55);
    glEnd();

    getColor("reflectionLight");
    glBegin(GL_QUADS);
        glVertex2f(565,55);
        glVertex2f(565,70);
        glVertex2f(581,70);
        glVertex2f(581,55);
    glEnd();

    getColor("reflectionDark");
    glBegin(GL_QUADS);
        glVertex2f(581,55);
        glVertex2f(581,70);
        glVertex2f(642,70);
        glVertex2f(642,55);
    glEnd();

    getColor("reflectionLight");
    glBegin(GL_QUADS);
        glVertex2f(942,55);
        glVertex2f(942,70);
        glVertex2f(957,70);
        glVertex2f(957,55);
    glEnd();

    getColor("reflectionDark");
    glBegin(GL_QUADS);
        glVertex2f(957,55);
        glVertex2f(957,70);
        glVertex2f(1019,70);
        glVertex2f(1019,55);
    glEnd();

    getColor("reflectionLight");
    glBegin(GL_QUADS);
        glVertex2f(1350,55);
        glVertex2f(1350,70);
        glVertex2f(1365,70);
        glVertex2f(1365,55);
    glEnd();

    getColor("reflectionDark");
    glBegin(GL_QUADS);
        glVertex2f(1365,55);
        glVertex2f(1365,70);
        glVertex2f(1426,70);
        glVertex2f(1426,55);
    glEnd();

    getColor("reflectionLight");
    glBegin(GL_QUADS);
        glVertex2f(1742,55);
        glVertex2f(1742,70);
        glVertex2f(1757,70);
        glVertex2f(1757,55);
    glEnd();

    getColor("reflectionDark");
    glBegin(GL_QUADS);
        glVertex2f(1757,55);
        glVertex2f(1757,70);
        glVertex2f(1818,70);
        glVertex2f(1818,55);
    glEnd();

    getColor("reflectionDark");
    glBegin(GL_QUADS);
        glVertex2f(34,55);
        glVertex2f(34,70);
        glVertex2f(50,70);
        glVertex2f(50,55);
    glEnd();

    getColor("reflectionDark");
    glBegin(GL_QUADS);
        glVertex2f(73,55);
        glVertex2f(73,70);
        glVertex2f(81,70);
        glVertex2f(81,55);
    glEnd();

    getColor("reflectionDark");
    glBegin(GL_QUADS);
        glVertex2f(105,55);
        glVertex2f(105,65);
        glVertex2f(136,65);
        glVertex2f(136,55);
    glEnd();

    getColor("reflectionLight");
    glBegin(GL_QUADS);
        glVertex2f(105,65);
        glVertex2f(105,70);
        glVertex2f(136,70);
        glVertex2f(136,65);
    glEnd();

    getColor("reflectionLight");
    glBegin(GL_QUADS);
        glVertex2f(136,55);
        glVertex2f(136,65);
        glVertex2f(148,65);
        glVertex2f(148,55);
    glEnd();

    getColor("reflectionWhite");
    glBegin(GL_QUADS);
        glVertex2f(713,55);
        glVertex2f(713,70);
        glVertex2f(719,70);
        glVertex2f(719,55);
    glEnd();

    getColor("reflectionWhite");
    glBegin(GL_QUADS);
        glVertex2f(743,55);
        glVertex2f(743,70);
        glVertex2f(865,70);
        glVertex2f(865,55);
    glEnd();

    getColor("reflectionWhite");
    glBegin(GL_QUADS);
        glVertex2f(1073,55);
        glVertex2f(1073,70);
        glVertex2f(1166,70);
        glVertex2f(1166,55);
    glEnd();

    getColor("reflectionLight");
    glBegin(GL_QUADS);
        glVertex2f(1426,55);
        glVertex2f(1426,70);
        glVertex2f(1433,70);
        glVertex2f(1433,55);
    glEnd();

    getColor("reflectionLight");
    glBegin(GL_QUADS);
        glVertex2f(1450,55);
        glVertex2f(1450,70);
        glVertex2f(1480,70);
        glVertex2f(1480,55);
    glEnd();

    getColor("reflectionWhite");
    glBegin(GL_QUADS);
        glVertex2f(1510,55);
        glVertex2f(1510,70);
        glVertex2f(1542,70);
        glVertex2f(1542,55);
    glEnd();

    getColor("reflectionWhite");
    glBegin(GL_QUADS);
        glVertex2f(1573,55);
        glVertex2f(1573,70);
        glVertex2f(1628,70);
        glVertex2f(1628,55);
    glEnd();

    getColor("reflectionWhite");
    glBegin(GL_QUADS);
        glVertex2f(1633,55);
        glVertex2f(1633,70);
        glVertex2f(1688,70);
        glVertex2f(1688,55);
    glEnd();

    getColor("reflectionWhite");
    glBegin(GL_QUADS);
        glVertex2f(1695,55);
        glVertex2f(1695,70);
        glVertex2f(1733,70);
        glVertex2f(1733,55);
    glEnd();
    glPopMatrix();
//5th
    glPushMatrix();
    glTranslatef(evenReflectionPosition,0,0);
    getColor("reflectionLight");
    glBegin(GL_QUADS);
        glVertex2f(12,40);
        glVertex2f(12,55);
        glVertex2f(20,55);
        glVertex2f(20,40);
    glEnd();

    getColor("reflectionDark");
    glBegin(GL_QUADS);
        glVertex2f(20,40);
        glVertex2f(20,55);
        glVertex2f(35,55);
        glVertex2f(35,40);
    glEnd();

    getColor("reflectionLight");
    glBegin(GL_QUADS);
        glVertex2f(166,40);
        glVertex2f(166,55);
        glVertex2f(181,55);
        glVertex2f(181,40);
    glEnd();

    getColor("reflectionDark");
    glBegin(GL_QUADS);
        glVertex2f(181,40);
        glVertex2f(181,55);
        glVertex2f(243,55);
        glVertex2f(243,40);
    glEnd();

    getColor("reflectionLight");
    glBegin(GL_QUADS);
        glVertex2f(565,40);
        glVertex2f(565,55);
        glVertex2f(581,55);
        glVertex2f(581,40);
    glEnd();

    getColor("reflectionDark");
    glBegin(GL_QUADS);
        glVertex2f(581,40);
        glVertex2f(581,55);
        glVertex2f(642,55);
        glVertex2f(642,40);
    glEnd();

    getColor("reflectionLight");
    glBegin(GL_QUADS);
        glVertex2f(942,40);
        glVertex2f(942,55);
        glVertex2f(957,55);
        glVertex2f(957,40);
    glEnd();

    getColor("reflectionDark");
    glBegin(GL_QUADS);
        glVertex2f(957,40);
        glVertex2f(957,55);
        glVertex2f(1019,55);
        glVertex2f(1019,40);
    glEnd();

    getColor("reflectionLight");
    glBegin(GL_QUADS);
        glVertex2f(1350,40);
        glVertex2f(1350,55);
        glVertex2f(1365,55);
        glVertex2f(1365,40);
    glEnd();

    getColor("reflectionDark");
    glBegin(GL_QUADS);
        glVertex2f(1365,40);
        glVertex2f(1365,55);
        glVertex2f(1426,55);
        glVertex2f(1426,40);
    glEnd();

    getColor("reflectionLight");
    glBegin(GL_QUADS);
        glVertex2f(1742,40);
        glVertex2f(1742,55);
        glVertex2f(1757,55);
        glVertex2f(1757,40);
    glEnd();

    getColor("reflectionDark");
    glBegin(GL_QUADS);
        glVertex2f(1757,40);
        glVertex2f(1757,55);
        glVertex2f(1818,55);
        glVertex2f(1818,40);
    glEnd();

    getColor("reflectionDark");
    glBegin(GL_QUADS);
        glVertex2f(58,40);
        glVertex2f(58,55);
        glVertex2f(81,55);
        glVertex2f(81,40);
    glEnd();

    getColor("reflectionDark");
    glBegin(GL_QUADS);
        glVertex2f(113,40);
        glVertex2f(113,55);
        glVertex2f(120,55);
        glVertex2f(120,40);
    glEnd();

    getColor("reflectionDark");
    glBegin(GL_QUADS);
        glVertex2f(136,45);
        glVertex2f(136,55);
        glVertex2f(167,55);
        glVertex2f(167,45);
    glEnd();

    getColor("reflectionDark");
    glBegin(GL_QUADS);
        glVertex2f(144,40);
        glVertex2f(144,45);
        glVertex2f(167,45);
        glVertex2f(167,40);
    glEnd();

    getColor("reflectionLight");
    glBegin(GL_QUADS);
        glVertex2f(243,40);
        glVertex2f(243,55);
        glVertex2f(251,55);
        glVertex2f(251,40);
    glEnd();

    getColor("reflectionLight");
    glBegin(GL_QUADS);
        glVertex2f(258,40);
        glVertex2f(258,55);
        glVertex2f(272,55);
        glVertex2f(272,40);
    glEnd();

    getColor("reflectionWhite");
    glBegin(GL_QUADS);
        glVertex2f(281,40);
        glVertex2f(281,55);
        glVertex2f(297,55);
        glVertex2f(297,40);
    glEnd();

    getColor("reflectionLight");
    glBegin(GL_QUADS);
        glVertex2f(304,40);
        glVertex2f(304,55);
        glVertex2f(320,55);
        glVertex2f(320,40);
    glEnd();

    getColor("reflectionWhite");
    glBegin(GL_QUADS);
        glVertex2f(434,40);
        glVertex2f(434,55);
        glVertex2f(449,55);
        glVertex2f(449,40);
    glEnd();

    getColor("reflectionWhite");
    glBegin(GL_QUADS);
        glVertex2f(458,40);
        glVertex2f(458,55);
        glVertex2f(472,55);
        glVertex2f(472,40);
    glEnd();

    getColor("reflectionLight");
    glBegin(GL_QUADS);
        glVertex2f(480,40);
        glVertex2f(480,55);
        glVertex2f(496,55);
        glVertex2f(496,40);
    glEnd();

    getColor("reflectionWhite");
    glBegin(GL_QUADS);
        glVertex2f(502,40);
        glVertex2f(502,55);
        glVertex2f(519,55);
        glVertex2f(519,40);
    glEnd();

    getColor("reflectionLight");
    glBegin(GL_QUADS);
        glVertex2f(650,40);
        glVertex2f(650,55);
        glVertex2f(665,55);
        glVertex2f(665,40);
    glEnd();

    getColor("reflectionWhite");
    glBegin(GL_QUADS);
        glVertex2f(673,40);
        glVertex2f(673,55);
        glVertex2f(688,55);
        glVertex2f(688,40);
    glEnd();

    getColor("reflectionWhite");
    glBegin(GL_QUADS);
        glVertex2f(713,40);
        glVertex2f(713,55);
        glVertex2f(719,55);
        glVertex2f(719,40);
    glEnd();

    getColor("reflectionWhite");
    glBegin(GL_QUADS);
        glVertex2f(743,40);
        glVertex2f(743,55);
        glVertex2f(865,55);
        glVertex2f(865,40);
    glEnd();

    getColor("reflectionWhite");
    glBegin(GL_QUADS);
        glVertex2f(1073,45);
        glVertex2f(1073,55);
        glVertex2f(1166,55);
        glVertex2f(1166,45);
    glEnd();

    getColor("reflectionWhite");
    glBegin(GL_QUADS);
        glVertex2f(1080,40);
        glVertex2f(1080,45);
        glVertex2f(1166,45);
        glVertex2f(1166,40);
    glEnd();

    getColor("reflectionLight");
    glBegin(GL_QUADS);
        glVertex2f(1426,40);
        glVertex2f(1426,55);
        glVertex2f(1432,55);
        glVertex2f(1432,40);
    glEnd();

    getColor("reflectionLight");
    glBegin(GL_QUADS);
        glVertex2f(1450,40);
        glVertex2f(1450,55);
        glVertex2f(1480,55);
        glVertex2f(1480,40);
    glEnd();

    getColor("reflectionWhite");
    glBegin(GL_QUADS);
        glVertex2f(1510,40);
        glVertex2f(1510,55);
        glVertex2f(1542,55);
        glVertex2f(1542,40);
    glEnd();

    getColor("reflectionWhite");
    glBegin(GL_QUADS);
        glVertex2f(1573,40);
        glVertex2f(1573,55);
        glVertex2f(1628,55);
        glVertex2f(1628,40);
    glEnd();

    getColor("reflectionWhite");
    glBegin(GL_QUADS);
        glVertex2f(1633,40);
        glVertex2f(1633,55);
        glVertex2f(1688,55);
        glVertex2f(1688,40);
    glEnd();

    getColor("reflectionWhite");
    glBegin(GL_QUADS);
        glVertex2f(1695,40);
        glVertex2f(1695,55);
        glVertex2f(1733,55);
        glVertex2f(1733,40);
    glEnd();
    glPopMatrix();
//6th
    glPushMatrix();
    glTranslatef(oddReflectionPosition,0,0);
    getColor("reflectionLight");
    glBegin(GL_QUADS);
        glVertex2f(12,25);
        glVertex2f(12,40);
        glVertex2f(20,40);
        glVertex2f(20,25);
    glEnd();

    getColor("reflectionDark");
    glBegin(GL_QUADS);
        glVertex2f(20,25);
        glVertex2f(20,40);
        glVertex2f(35,40);
        glVertex2f(35,25);
    glEnd();

    getColor("reflectionLight");
    glBegin(GL_QUADS);
        glVertex2f(166,25);
        glVertex2f(166,40);
        glVertex2f(181,40);
        glVertex2f(181,25);
    glEnd();

    getColor("reflectionDark");
    glBegin(GL_QUADS);
        glVertex2f(181,25);
        glVertex2f(181,40);
        glVertex2f(243,40);
        glVertex2f(243,25);
    glEnd();

    getColor("reflectionLight");
    glBegin(GL_QUADS);
        glVertex2f(565,25);
        glVertex2f(565,40);
        glVertex2f(581,40);
        glVertex2f(581,25);
    glEnd();

    getColor("reflectionDark");
    glBegin(GL_QUADS);
        glVertex2f(581,25);
        glVertex2f(581,40);
        glVertex2f(642,40);
        glVertex2f(642,25);
    glEnd();

    getColor("reflectionLight");
    glBegin(GL_QUADS);
        glVertex2f(942,25);
        glVertex2f(942,40);
        glVertex2f(957,40);
        glVertex2f(957,25);
    glEnd();

    getColor("reflectionDark");
    glBegin(GL_QUADS);
        glVertex2f(957,25);
        glVertex2f(957,40);
        glVertex2f(1019,40);
        glVertex2f(1019,25);
    glEnd();

    getColor("reflectionLight");
    glBegin(GL_QUADS);
        glVertex2f(1350,25);
        glVertex2f(1350,40);
        glVertex2f(1365,40);
        glVertex2f(1365,25);
    glEnd();

    getColor("reflectionDark");
    glBegin(GL_QUADS);
        glVertex2f(1365,25);
        glVertex2f(1365,40);
        glVertex2f(1426,40);
        glVertex2f(1426,25);
    glEnd();

    getColor("reflectionLight");
    glBegin(GL_QUADS);
        glVertex2f(1742,25);
        glVertex2f(1742,40);
        glVertex2f(1757,40);
        glVertex2f(1757,25);
    glEnd();

    getColor("reflectionDark");
    glBegin(GL_QUADS);
        glVertex2f(1757,25);
        glVertex2f(1757,40);
        glVertex2f(1818,40);
        glVertex2f(1818,25);
    glEnd();

    getColor("reflectionDark");
    glBegin(GL_QUADS);
        glVertex2f(88,30);
        glVertex2f(88,40);
        glVertex2f(104,40);
        glVertex2f(104,30);
    glEnd();

    getColor("reflectionDark");
    glBegin(GL_QUADS);
        glVertex2f(104,25);
        glVertex2f(104,30);
        glVertex2f(112,30);
        glVertex2f(112,25);
    glEnd();

    getColor("reflectionDark");
    glBegin(GL_QUADS);
        glVertex2f(112,25);
        glVertex2f(112,40);
        glVertex2f(120,40);
        glVertex2f(120,25);
    glEnd();

    getColor("reflectionDark");
    glBegin(GL_QUADS);
        glVertex2f(143,25);
        glVertex2f(143,40);
        glVertex2f(150,40);
        glVertex2f(150,25);
    glEnd();

    getColor("reflectionLight");
    glBegin(GL_QUADS);
        glVertex2f(150,25);
        glVertex2f(150,30);
        glVertex2f(167,30);
        glVertex2f(167,25);
    glEnd();

    getColor("reflectionLight");
    glBegin(GL_QUADS);
        glVertex2f(243,25);
        glVertex2f(243,40);
        glVertex2f(251,40);
        glVertex2f(251,25);
    glEnd();

    getColor("reflectionLight");
    glBegin(GL_QUADS);
        glVertex2f(258,25);
        glVertex2f(258,40);
        glVertex2f(272,40);
        glVertex2f(272,25);
    glEnd();

    getColor("reflectionWhite");
    glBegin(GL_QUADS);
        glVertex2f(281,25);
        glVertex2f(281,40);
        glVertex2f(297,40);
        glVertex2f(297,25);
    glEnd();

    getColor("reflectionLight");
    glBegin(GL_QUADS);
        glVertex2f(304,25);
        glVertex2f(304,40);
        glVertex2f(320,40);
        glVertex2f(320,25);
    glEnd();

    getColor("reflectionLight");
    glBegin(GL_QUADS);
        glVertex2f(434,25);
        glVertex2f(434,40);
        glVertex2f(449,40);
        glVertex2f(449,25);
    glEnd();

    getColor("reflectionWhite");
    glBegin(GL_QUADS);
        glVertex2f(458,25);
        glVertex2f(458,40);
        glVertex2f(472,40);
        glVertex2f(472,25);
    glEnd();

    getColor("reflectionLight");
    glBegin(GL_QUADS);
        glVertex2f(480,25);
        glVertex2f(480,40);
        glVertex2f(496,40);
        glVertex2f(496,25);
    glEnd();

    getColor("reflectionWhite");
    glBegin(GL_QUADS);
        glVertex2f(502,25);
        glVertex2f(502,40);
        glVertex2f(519,40);
        glVertex2f(519,25);
    glEnd();

    getColor("reflectionLight");
    glBegin(GL_QUADS);
        glVertex2f(650,25);
        glVertex2f(650,40);
        glVertex2f(665,40);
        glVertex2f(665,25);
    glEnd();

    getColor("reflectionWhite");
    glBegin(GL_QUADS);
        glVertex2f(673,25);
        glVertex2f(673,40);
        glVertex2f(688,40);
        glVertex2f(688,25);
    glEnd();

    getColor("reflectionWhite");
    glBegin(GL_QUADS);
        glVertex2f(751,25);
        glVertex2f(751,40);
        glVertex2f(858,40);
        glVertex2f(858,25);
    glEnd();

    getColor("reflectionWhite");
    glBegin(GL_QUADS);
        glVertex2f(1080,30);
        glVertex2f(1080,40);
        glVertex2f(1180,40);
        glVertex2f(1180,30);
    glEnd();

    getColor("reflectionWhite");
    glBegin(GL_QUADS);
        glVertex2f(1072,25);
        glVertex2f(1072,30);
        glVertex2f(1180,30);
        glVertex2f(1180,25);
    glEnd();

    getColor("reflectionWhite");
    glBegin(GL_QUADS);
        glVertex2f(1510,25);
        glVertex2f(1510,40);
        glVertex2f(1542,40);
        glVertex2f(1542,25);
    glEnd();
    glPopMatrix();
//7th
    glPushMatrix();
    glTranslatef(evenReflectionPosition,0,0);
    getColor("reflectionLight");
    glBegin(GL_QUADS);
        glVertex2f(12,10);
        glVertex2f(12,25);
        glVertex2f(20,25);
        glVertex2f(20,10);
    glEnd();

    getColor("reflectionDark");
    glBegin(GL_QUADS);
        glVertex2f(20,10);
        glVertex2f(20,25);
        glVertex2f(35,25);
        glVertex2f(35,10);
    glEnd();

    getColor("reflectionLight");
    glBegin(GL_QUADS);
        glVertex2f(166,10);
        glVertex2f(166,25);
        glVertex2f(181,25);
        glVertex2f(181,10);
    glEnd();

    getColor("reflectionDark");
    glBegin(GL_QUADS);
        glVertex2f(181,10);
        glVertex2f(181,25);
        glVertex2f(243,25);
        glVertex2f(243,10);
    glEnd();

    getColor("reflectionLight");
    glBegin(GL_QUADS);
        glVertex2f(565,10);
        glVertex2f(565,25);
        glVertex2f(581,25);
        glVertex2f(581,10);
    glEnd();

    getColor("reflectionDark");
    glBegin(GL_QUADS);
        glVertex2f(581,10);
        glVertex2f(581,25);
        glVertex2f(642,25);
        glVertex2f(642,10);
    glEnd();

    getColor("reflectionLight");
    glBegin(GL_QUADS);
        glVertex2f(942,10);
        glVertex2f(942,25);
        glVertex2f(957,25);
        glVertex2f(957,10);
    glEnd();

    getColor("reflectionDark");
    glBegin(GL_QUADS);
        glVertex2f(957,10);
        glVertex2f(957,25);
        glVertex2f(1019,25);
        glVertex2f(1019,10);
    glEnd();

    getColor("reflectionLight");
    glBegin(GL_QUADS);
        glVertex2f(1350,10);
        glVertex2f(1350,25);
        glVertex2f(1365,25);
        glVertex2f(1365,10);
    glEnd();

    getColor("reflectionDark");
    glBegin(GL_QUADS);
        glVertex2f(1365,10);
        glVertex2f(1365,25);
        glVertex2f(1426,25);
        glVertex2f(1426,10);
    glEnd();

    getColor("reflectionLight");
    glBegin(GL_QUADS);
        glVertex2f(1742,10);
        glVertex2f(1742,25);
        glVertex2f(1757,25);
        glVertex2f(1757,10);
    glEnd();

    getColor("reflectionDark");
    glBegin(GL_QUADS);
        glVertex2f(1757,10);
        glVertex2f(1757,25);
        glVertex2f(1818,25);
        glVertex2f(1818,10);
    glEnd();

    getColor("reflectionDark");
    glBegin(GL_QUADS);
        glVertex2f(119,17);
        glVertex2f(119,25);
        glVertex2f(135,25);
        glVertex2f(135,17);
    glEnd();

    getColor("reflectionLight");
    glBegin(GL_QUADS);
        glVertex2f(135,17);
        glVertex2f(135,25);
        glVertex2f(143,25);
        glVertex2f(143,17);
    glEnd();

    getColor("reflectionDark");
    glBegin(GL_QUADS);
        glVertex2f(143,17);
        glVertex2f(143,25);
        glVertex2f(167,25);
        glVertex2f(167,17);
    glEnd();

    getColor("reflectionLight");
    glBegin(GL_QUADS);
        glVertex2f(104,10);
        glVertex2f(104,17);
        glVertex2f(135,17);
        glVertex2f(135,10);
    glEnd();

    getColor("reflectionDark");
    glBegin(GL_QUADS);
        glVertex2f(135,10);
        glVertex2f(135,17);
        glVertex2f(158,17);
        glVertex2f(158,10);
    glEnd();

    getColor("reflectionLight");
    glBegin(GL_QUADS);
        glVertex2f(243,10);
        glVertex2f(243,25);
        glVertex2f(251,25);
        glVertex2f(251,10);
    glEnd();

    getColor("reflectionLight");
    glBegin(GL_QUADS);
        glVertex2f(258,10);
        glVertex2f(258,25);
        glVertex2f(272,25);
        glVertex2f(272,10);
    glEnd();

    getColor("reflectionLight");
    glBegin(GL_QUADS);
        glVertex2f(281,10);
        glVertex2f(281,25);
        glVertex2f(297,25);
        glVertex2f(297,10);
    glEnd();

    getColor("reflectionLight");
    glBegin(GL_QUADS);
        glVertex2f(304,10);
        glVertex2f(304,25);
        glVertex2f(320,25);
        glVertex2f(320,10);
    glEnd();

    getColor("reflectionLight");
    glBegin(GL_QUADS);
        glVertex2f(434,10);
        glVertex2f(434,25);
        glVertex2f(449,25);
        glVertex2f(449,10);
    glEnd();

    getColor("reflectionLight");
    glBegin(GL_QUADS);
        glVertex2f(458,10);
        glVertex2f(458,25);
        glVertex2f(472,25);
        glVertex2f(472,10);
    glEnd();

    getColor("reflectionLight");
    glBegin(GL_QUADS);
        glVertex2f(480,10);
        glVertex2f(480,25);
        glVertex2f(496,25);
        glVertex2f(496,10);
    glEnd();

    getColor("reflectionWhite");
    glBegin(GL_QUADS);
        glVertex2f(502,10);
        glVertex2f(502,25);
        glVertex2f(519,25);
        glVertex2f(519,10);
    glEnd();

    getColor("reflectionLight");
    glBegin(GL_QUADS);
        glVertex2f(650,10);
        glVertex2f(650,25);
        glVertex2f(665,25);
        glVertex2f(665,10);
    glEnd();

    getColor("reflectionWhite");
    glBegin(GL_QUADS);
        glVertex2f(673,10);
        glVertex2f(673,25);
        glVertex2f(688,25);
        glVertex2f(688,10);
    glEnd();

    getColor("reflectionWhite");
    glBegin(GL_QUADS);
        glVertex2f(751,10);
        glVertex2f(751,25);
        glVertex2f(865,25);
        glVertex2f(865,10);
    glEnd();

    getColor("reflectionWhite");
    glBegin(GL_QUADS);
        glVertex2f(1080,15);
        glVertex2f(1080,25);
        glVertex2f(1180,25);
        glVertex2f(1180,15);
    glEnd();

    getColor("reflectionWhite");
    glBegin(GL_QUADS);
        glVertex2f(1072,10);
        glVertex2f(1072,15);
        glVertex2f(1180,15);
        glVertex2f(1180,10);
    glEnd();

    getColor("reflectionWhite");
    glBegin(GL_QUADS);
        glVertex2f(1510,10);
        glVertex2f(1510,15);
        glVertex2f(1542,15);
        glVertex2f(1542,10);
    glEnd();

    getColor("reflectionWhite");
    glBegin(GL_QUADS);
        glVertex2f(1573,10);
        glVertex2f(1573,15);
        glVertex2f(1628,15);
        glVertex2f(1628,10);
    glEnd();

    getColor("reflectionWhite");
    glBegin(GL_QUADS);
        glVertex2f(1633,10);
        glVertex2f(1633,15);
        glVertex2f(1688,15);
        glVertex2f(1688,10);
    glEnd();

    getColor("reflectionWhite");
    glBegin(GL_QUADS);
        glVertex2f(1695,10);
        glVertex2f(1695,15);
        glVertex2f(1733,15);
        glVertex2f(1733,10);
    glEnd();

    getColor("reflectionWhite");
    glBegin(GL_QUADS);
        glVertex2f(1910,10);
        glVertex2f(1910,15);
        glVertex2f(1920,15);
        glVertex2f(1920,10);
    glEnd();
    glPopMatrix();
//8th
    glPushMatrix();
    glTranslatef(oddReflectionPosition,0,0);
    getColor("reflectionLight");
    glBegin(GL_QUADS);
        glVertex2f(12,0);
        glVertex2f(12,10);
        glVertex2f(20,10);
        glVertex2f(20,0);
    glEnd();

    getColor("reflectionDark");
    glBegin(GL_QUADS);
        glVertex2f(20,0);
        glVertex2f(20,10);
        glVertex2f(35,10);
        glVertex2f(35,0);
    glEnd();

    getColor("reflectionLight");
    glBegin(GL_QUADS);
        glVertex2f(166,0);
        glVertex2f(166,10);
        glVertex2f(181,10);
        glVertex2f(181,0);
    glEnd();

    getColor("reflectionDark");
    glBegin(GL_QUADS);
        glVertex2f(181,0);
        glVertex2f(181,10);
        glVertex2f(243,10);
        glVertex2f(243,0);
    glEnd();

    getColor("reflectionLight");
    glBegin(GL_QUADS);
        glVertex2f(565,0);
        glVertex2f(565,10);
        glVertex2f(581,10);
        glVertex2f(581,0);
    glEnd();

    getColor("reflectionDark");
    glBegin(GL_QUADS);
        glVertex2f(581,0);
        glVertex2f(581,10);
        glVertex2f(642,10);
        glVertex2f(642,0);
    glEnd();

    getColor("reflectionLight");
    glBegin(GL_QUADS);
        glVertex2f(942,0);
        glVertex2f(942,10);
        glVertex2f(957,10);
        glVertex2f(957,0);
    glEnd();

    getColor("reflectionDark");
    glBegin(GL_QUADS);
        glVertex2f(957,0);
        glVertex2f(957,10);
        glVertex2f(1019,10);
        glVertex2f(1019,0);
    glEnd();

    getColor("reflectionLight");
    glBegin(GL_QUADS);
        glVertex2f(1350,0);
        glVertex2f(1350,10);
        glVertex2f(1365,10);
        glVertex2f(1365,0);
    glEnd();

    getColor("reflectionDark");
    glBegin(GL_QUADS);
        glVertex2f(1365,0);
        glVertex2f(1365,10);
        glVertex2f(1426,10);
        glVertex2f(1426,0);
    glEnd();

    getColor("reflectionLight");
    glBegin(GL_QUADS);
        glVertex2f(1742,0);
        glVertex2f(1742,10);
        glVertex2f(1757,10);
        glVertex2f(1757,0);
    glEnd();

    getColor("reflectionDark");
    glBegin(GL_QUADS);
        glVertex2f(1757,0);
        glVertex2f(1757,10);
        glVertex2f(1818,10);
        glVertex2f(1818,0);
    glEnd();

    getColor("reflectionLight");
    glBegin(GL_QUADS);
        glVertex2f(88,0);
        glVertex2f(88,10);
        glVertex2f(104,10);
        glVertex2f(104,0);
    glEnd();

    getColor("reflectionDark");
    glBegin(GL_QUADS);
        glVertex2f(104,0);
        glVertex2f(104,10);
        glVertex2f(143,10);
        glVertex2f(143,0);
    glEnd();

    getColor("reflectionLight");
    glBegin(GL_QUADS);
        glVertex2f(243,0);
        glVertex2f(243,10);
        glVertex2f(251,10);
        glVertex2f(251,0);
    glEnd();

    getColor("reflectionLight");
    glBegin(GL_QUADS);
        glVertex2f(258,0);
        glVertex2f(258,10);
        glVertex2f(272,10);
        glVertex2f(272,0);
    glEnd();

    getColor("reflectionLight");
    glBegin(GL_QUADS);
        glVertex2f(281,0);
        glVertex2f(281,10);
        glVertex2f(297,10);
        glVertex2f(297,0);
    glEnd();

    getColor("reflectionLight");
    glBegin(GL_QUADS);
        glVertex2f(304,0);
        glVertex2f(304,10);
        glVertex2f(320,10);
        glVertex2f(320,0);
    glEnd();

    getColor("reflectionLight");
    glBegin(GL_QUADS);
        glVertex2f(434,0);
        glVertex2f(434,10);
        glVertex2f(449,10);
        glVertex2f(449,0);
    glEnd();

    getColor("reflectionLight");
    glBegin(GL_QUADS);
        glVertex2f(458,0);
        glVertex2f(458,10);
        glVertex2f(472,10);
        glVertex2f(472,0);
    glEnd();

    getColor("reflectionLight");
    glBegin(GL_QUADS);
        glVertex2f(480,0);
        glVertex2f(480,10);
        glVertex2f(496,10);
        glVertex2f(496,0);
    glEnd();

    getColor("reflectionWhite");
    glBegin(GL_QUADS);
        glVertex2f(502,0);
        glVertex2f(502,10);
        glVertex2f(519,10);
        glVertex2f(519,0);
    glEnd();

    getColor("reflectionLight");
    glBegin(GL_QUADS);
        glVertex2f(650,0);
        glVertex2f(650,10);
        glVertex2f(665,10);
        glVertex2f(665,0);
    glEnd();

    getColor("reflectionWhite");
    glBegin(GL_QUADS);
        glVertex2f(673,0);
        glVertex2f(673,10);
        glVertex2f(688,10);
        glVertex2f(688,0);
    glEnd();

    getColor("reflectionWhite");
    glBegin(GL_QUADS);
        glVertex2f(751,0);
        glVertex2f(751,10);
        glVertex2f(865,10);
        glVertex2f(865,0);
    glEnd();

    getColor("reflectionWhite");
    glBegin(GL_QUADS);
        glVertex2f(1080,0);
        glVertex2f(1080,10);
        glVertex2f(1180,10);
        glVertex2f(1180,0);
    glEnd();

    getColor("reflectionWhite");
    glBegin(GL_QUADS);
        glVertex2f(1510,0);
        glVertex2f(1510,10);
        glVertex2f(1542,10);
        glVertex2f(1542,0);
    glEnd();

    getColor("reflectionWhite");
    glBegin(GL_QUADS);
        glVertex2f(1573,0);
        glVertex2f(1573,10);
        glVertex2f(1628,10);
        glVertex2f(1628,0);
    glEnd();

    getColor("reflectionWhite");
    glBegin(GL_QUADS);
        glVertex2f(1633,0);
        glVertex2f(1633,10);
        glVertex2f(1688,10);
        glVertex2f(1688,0);
    glEnd();

    getColor("reflectionWhite");
    glBegin(GL_QUADS);
        glVertex2f(1695,0);
        glVertex2f(1695,10);
        glVertex2f(1733,10);
        glVertex2f(1733,0);
    glEnd();

    getColor("reflectionWhite");
    glBegin(GL_QUADS);
        glVertex2f(1910,0);
        glVertex2f(1910,10);
        glVertex2f(1920,10);
        glVertex2f(1920,0);
    glEnd();
    glPopMatrix();
}

//sun
void sun()
{
    getColor("sun");
    glBegin(GL_QUADS);
        glVertex2f(902,966);
        glVertex2f(902,1010);
        glVertex2f(1027,1010);
        glVertex2f(1027,966);
    glEnd();

    getColor("sun");
    glBegin(GL_QUADS);
        glVertex2f(912,1010);
        glVertex2f(912,1024);
        glVertex2f(1017,1024);
        glVertex2f(1017,1010);
    glEnd();

    getColor("sun");
    glBegin(GL_QUADS);
        glVertex2f(922,1024);
        glVertex2f(922,1036);
        glVertex2f(1007,1036);
        glVertex2f(1007,1024);
    glEnd();

    getColor("sun");
    glBegin(GL_QUADS);
        glVertex2f(942,1036);
        glVertex2f(942,1046);
        glVertex2f(987,1046);
        glVertex2f(987,1036);
    glEnd();

    getColor("sun");
    glBegin(GL_QUADS);
        glVertex2f(912,952);
        glVertex2f(912,966);
        glVertex2f(1017,966);
        glVertex2f(1017,952);
    glEnd();

    getColor("sun");
    glBegin(GL_QUADS);
        glVertex2f(922,940);
        glVertex2f(922,952);
        glVertex2f(1007,952);
        glVertex2f(1007,940);
    glEnd();

    getColor("sun");
    glBegin(GL_QUADS);
        glVertex2f(942,930);
        glVertex2f(942,940);
        glVertex2f(987,940);
        glVertex2f(987,930);
    glEnd();
}

//cloud
void cloud()
{
    getColor("cloud");
    glBegin(GL_QUADS);
        glVertex2f(739,964);
        glVertex2f(739,969);
        glVertex2f(891,969);
        glVertex2f(891,964);
    glEnd();

    getColor("cloud");
    glBegin(GL_QUADS);
        glVertex2f(771,969);
        glVertex2f(771,978);
        glVertex2f(842,978);
        glVertex2f(842,969);
    glEnd();

    getColor("cloud");
    glBegin(GL_QUADS);
        glVertex2f(855,969);
        glVertex2f(855,978);
        glVertex2f(916,978);
        glVertex2f(916,969);
    glEnd();

    getColor("cloud");
    glBegin(GL_QUADS);
        glVertex2f(795,978);
        glVertex2f(795,984);
        glVertex2f(826,984);
        glVertex2f(826,978);
    glEnd();

    getColor("cloud");
    glBegin(GL_QUADS);
        glVertex2f(814,957);
        glVertex2f(814,964);
        glVertex2f(872,964);
        glVertex2f(872,957);
    glEnd();
}

void cloudMove()
{
    glPushMatrix();
    glTranslatef(cloudPosition,0, 0);
    getColor("cloud");
    glBegin(GL_QUADS);
        glVertex2f(1107,1034);
        glVertex2f(1107,1039);
        glVertex2f(1265,1039);
        glVertex2f(1265,1034);
    glEnd();

    getColor("cloud");
    glBegin(GL_QUADS);
        glVertex2f(1120,1029);
        glVertex2f(1120,1034);
        glVertex2f(1188,1034);
        glVertex2f(1188,1029);
    glEnd();

    getColor("cloud");
    glBegin(GL_QUADS);
        glVertex2f(1205,1029);
        glVertex2f(1205,1034);
        glVertex2f(1281,1034);
        glVertex2f(1281,1029);
    glEnd();

    getColor("cloud");
    glBegin(GL_QUADS);
        glVertex2f(1164,1039);
        glVertex2f(1164,1044);
        glVertex2f(1216,1044);
        glVertex2f(1216,1039);
    glEnd();

    getColor("cloud");
    glBegin(GL_QUADS);
        glVertex2f(1168,1044);
        glVertex2f(1168,1048);
        glVertex2f(1212,1048);
        glVertex2f(1212,1044);
    glEnd();

    getColor("cloud");
    glBegin(GL_QUADS);
        glVertex2f(1188,1048);
        glVertex2f(1188,1053);
        glVertex2f(1200,1053);
        glVertex2f(1200,1048);
    glEnd();

    getColor("cloud");
    glBegin(GL_QUADS);
        glVertex2f(1232,1024);
        glVertex2f(1232,1029);
        glVertex2f(1241,1029);
        glVertex2f(1241,1024);
    glEnd();

    getColor("cloud");
    glBegin(GL_QUADS);
        glVertex2f(1253,1024);
        glVertex2f(1253,1029);
        glVertex2f(1273,1029);
        glVertex2f(1273,1024);
    glEnd();
    glPopMatrix();
}

void myDisplay(void)
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    //Background
    backGround();
    //Cloud Move
    cloudMove();
    //Back Back Building
    backBackBuilding_1();
    backBackBuilding_2();
    backBackBuilding_3();
    //Back Building
    backBuilding_1();
    backBuilding_2();
    backBuilding_3();
    backBuilding_4();
    backBuilding_5();
    //Front Building
    frontBuilding_1();
    frontBuilding_2();
    frontBuilding_3();
    frontBuilding_4();
    //Rope
    rope();
    //Train
    train();
    //Street Light
    streetLight();
    //Car
    car_1();
    car_2();
    //Train Bridge
    trainBridge();
    //Water Railing
    waterRailing();
    //Water
    water();
    //Reflection
    reflection();
    //Sun
    sun();
    //Cloud
    cloud();

    glFlush ();
}

void myInit (void)
{
    glClearColor(1.0, 1.0, 1.0, 0.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0.0, 1920.0, 0.0, 1080.0);
}

void handleKeypress(unsigned char key, int x, int y)
{

	switch (key)
	{
        case 's':
            if(trainSpeed >= 1)
                trainSpeed -= 1;
            break;

        case 'w':
            trainSpeed += 1;
            break;

        case 'n':
            dayNight = !dayNight;
            break;

        case 'd':
            trainSpeed = 0;
            break;

        case 'a':
            trainSpeed = 6;

    glutPostRedisplay();
	}
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (1920, 1080);
    glutCreateWindow ("Pixel City");
    myInit ();
    glutDisplayFunc(myDisplay);
    glutKeyboardFunc(handleKeypress);
    glutTimerFunc(0, update, 0);
    glutMainLoop();
}

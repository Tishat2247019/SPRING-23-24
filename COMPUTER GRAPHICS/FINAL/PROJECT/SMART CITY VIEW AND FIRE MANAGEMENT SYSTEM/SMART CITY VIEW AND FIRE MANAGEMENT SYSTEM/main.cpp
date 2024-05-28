#include <windows.h>
#include <GL/glut.h>
#include<math.h>
#include<iostream>
#include "glutil.h"
#include "FIRST_SCENARIO_OPI.cpp"
//#include "THIRD_SCENARIO_TISHAT.CPP"

using namespace std;

// string imagesFolderPath = "E:/SPRING 23-24/COMPUTER GRAPHICS/FINAL/PROJECT/SMART CITY VIEW AND FIRE MANAGEMENT SYSTEM/SMART CITY VIEW AND FIRE MANAGEMENT SYSTEM/Resources/images/";
// string soundsFolderPath = "E:/SPRING 23-24/COMPUTER GRAPHICS/FINAL/PROJECT/SMART CITY VIEW AND FIRE MANAGEMENT SYSTEM/SMART CITY VIEW AND FIRE MANAGEMENT SYSTEM/Resources/sounds/";


float zoom_to_normal_intro_value = 3;
bool zoom_to_scenario_01_from_intro = false;
float zoom_to_scenario_01_from_intro_value = 1;

//ID - 76
void Opipic() {
    glColor3f(1, 1, 1);
    glBegin(GL_POLYGON);

    glVertex2f(57.8404460853436, 38.6513334246795);
    glVertex2f(26.2284469680236, 33.2162879);
    glVertex2f(22.3462716378264, 57.0084767717548);
    glVertex2f(53.6255128697009, 62.2771432913082);
    glEnd();

    //ApplyTexture(57.8404460853436, 38.6513334246795, 26.2284469680236, 33.2162879624035, 22.3462716378264, 57.0084767717548, 53.6255128697009, 62.2771432913082, textures[2].textureID);


    /* glColor3f(1, 1, 1);
    glBegin(GL_POLYGON);

    glVertex2f(55.0541717249813, 40.4338339983674);
    glVertex2f(28, 36);
    glVertex2f(24.7117860273361, 55.4216891692586);
    glVertex2f(52, 60);
    glEnd(); */

    // ApplyTexture(45, 40, 20, 40, 20, 65, 45, 65, textures[0].textureID);
    ApplyTexture(55.0541717249813, 40.4338339983674, 28, 36, 24.7117860273361, 55.4216891692586, 52, 60, textures[0].textureID);
    //glutSwapBuffers();
    staticText("NAME : FARJANA YEMIN OPI", 20 - 2, 29 + 4 - 2, 0.015, 2, 0, 0, 0);
    staticText("ID : 22-47018-1", 20 - 2, 26.5 + 4 - 2, 0.015, 2, 0, 0, 0);
    staticText("DEPT : CSE", 20 - 2, 23 + 4 - 2, 0.015, 2, 0, 0, 0);
    staticText("CONTRIBUTION : SCENARIO-1", 20 - 2, 20 + 4 - 2, 0.015, 2, 0, 0, 0);



    glPushMatrix();
    glTranslatef(4, 0, 0);
    glColor3f(1, 1, 1);
    glBegin(GL_POLYGON);

    glVertex2f(40, 5);
    glVertex2f(15, 5);
    glVertex2f(15, 20);
    glVertex2f(40, 20);
    glEnd();


    ApplyTexture(15, 5, 40, 5, 40, 20, 15, 20, textures[4].textureID);
    glPopMatrix();
    //glutSwapBuffers();

    //arrow

    glColor3f(0, 0, 0);
    glLineWidth(5);
    glBegin(GL_LINES);

    glVertex2f(17, 22.5);
    glVertex2f(10, 22.5);

    glVertex2f(10, 22.5);
    glVertex2f(10, 15);

    glVertex2f(10, 15);
    glVertex2f(16, 15);

    glEnd();

    glBegin(GL_POLYGON);

    glVertex2f(16, 17);
    glVertex2f(18, 15);
    glVertex2f(16, 13);

    glEnd();




}

//ID - 77
void Tishatpic() {
    glColor3f(1, 1, 1);
    glBegin(GL_POLYGON);

    glVertex2f(76.7207493939851, 20);
    glVertex2f(47.4313267112833, 20);
    glVertex2f(47.4313267112833, 44.3652577153628);
    glVertex2f(76.7207493939851, 44.3652577153628);
    glEnd();

    ApplyTexture(75, 22.1675603994796, 49.2193786513982, 22.1675603994796, 49.2193786513982, 42.2624733194489, 75, 42.2624733194489, textures[1].textureID);
    //glutSwapBuffers();
    staticText("NAME : MD. ABU TOWSIF", 50, 19 - 2, 0.015, 2, 0, 0, 0);
    staticText("ID : 22-47019-1", 50, 16.5 - 2, 0.015, 2, 0, 0, 0);
    staticText("DEPT : CSE", 50, 13 - 2, 0.015, 2, 0, 0, 0);
    staticText("CONTRIBUTION : SCENARIO-3", 50, 10.5 - 2, 0.015, 2, 0, 0, 0);


    glPushMatrix();
    glTranslatef(65, 0, 0);
    glColor3f(1, 1, 1);
    glBegin(GL_POLYGON);

    glVertex2f(40, 5);
    glVertex2f(15, 5);
    glVertex2f(15, 20);
    glVertex2f(40, 20);
    glEnd();


    ApplyTexture(15, 5, 40, 5, 40, 20, 15, 20, textures[5].textureID);
    glPopMatrix();
    // glutSwapBuffers();

     //arrow

    glColor3f(0, 0, 0);
    glLineWidth(5);
    glBegin(GL_LINES);

    glVertex2f(73, 7);
    glVertex2f(73, 1);

    glVertex2f(73, 1);
    glVertex2f(85, 1);

    glVertex2f(85, 1);
    glVertex2f(85, 3);

    glEnd();

    glBegin(GL_POLYGON);

    glVertex2f(83, 3);
    glVertex2f(85, 5);
    glVertex2f(87, 3);

    glEnd();




}

//ID - 78
void Rafipic() {
    glColor3f(1, 1, 1);
    glBegin(GL_POLYGON);

    glVertex2f(98.042923533643, 32.0432107753323);
    glVertex2f(67.6569551038976, 39.925080940472);
    glVertex2f(73.3509212847039, 63.6018563161125);
    glVertex2f(104.2940619404779, 54.9821708421526);
    glEnd();

    ApplyTexture(96.6418944851287, 34.5401285950467, 70.1796057373246, 41.4546362639229, 75.0665510070566, 60.7424734455246, 101.7887836521869, 54.0879096739747, textures[2].textureID);
    //glutSwapBuffers();
    staticText("NAME : A.F.M. RAFIUL HASSAN", 20 + 58, 29 + 4 - 2, 0.015, 2, 0, 0, 0);
    staticText("ID : 22-47048-1", 20 + 58, 26.5 + 4 - 2, 0.015, 2, 0, 0, 0);
    staticText("DEPT : CSE", 20 + 58, 23 + 4 - 2, 0.015, 2, 0, 0, 0);
    staticText("CONTRIBUTION : SCENARIO-2", 20 + 58, 20 + 4 - 2, 0.015, 2, 0, 0, 0);


    glPushMatrix();
    glTranslatef(88, 30, 0);
    glColor3f(1, 1, 1);
    glBegin(GL_POLYGON);

    glVertex2f(40, 5);
    glVertex2f(15, 5);
    glVertex2f(15, 20);
    glVertex2f(40, 20);
    glEnd();


    ApplyTexture(15, 5, 40, 5, 40, 20, 15, 20, textures[6].textureID);
    glPopMatrix();
    //glutSwapBuffers();


    //arrow

    glColor3f(0, 0, 0);
    glLineWidth(5);
    glBegin(GL_LINES);

    glVertex2f(110, 22.5);
    glVertex2f(117, 22.5);


    glVertex2f(117, 22.5);
    glVertex2f(117, 32);


    glEnd();

    glBegin(GL_POLYGON);

    glVertex2f(115, 32);
    glVertex2f(117, 34);
    glVertex2f(119, 32);

    glEnd();
}

// ID - 80
void keyboard_func(unsigned char key, int x, int y) {
    switch (key) {

    case 'z':
        zoom_to_scenario_01_from_intro = true;
        break;
    }

    glutPostRedisplay();

}

//ID - 79
void zoom_to_normal_view(int value) {

    if (zoom_to_normal_intro_value > 1.05) {
        zoom_to_normal_intro_value -= 0.05;
    }

    if (zoom_to_scenario_01_from_intro && zoom_to_scenario_01_from_intro_value < 16.07) {
        zoom_to_scenario_01_from_intro_value += 0.07;
    }

    glutPostRedisplay();
    glutTimerFunc(20, zoom_to_normal_view, 0);


}

// ID - 78
void back_texture() {

    glColor3f(1, 1, 1);
    glBegin(GL_POLYGON);

    glVertex2f(0, 0);
    glVertex2f(0, 80);
    glVertex2f(130, 80);
    glVertex2f(130, 0);

    glEnd();

    ApplyTexture(130, 0, 0, 0, 0, 80, 130, 80, textures[3].textureID);
    //glutSwapBuffers();

}

void intro() {


    glClearColor(1, 1, 1, 1.0f); // Set background color to black and opaque
    glClear(GL_COLOR_BUFFER_BIT);

    glPushMatrix();

    //FOR ZOOM TO OPI PROJECT PIC FIRE STATION
    glTranslatef(22, 12, 0);
    glScalef(zoom_to_scenario_01_from_intro_value, zoom_to_scenario_01_from_intro_value, 1);
    glTranslatef(-22, -12, 0);


    //FOR INITAL ZOOM IN TO ZOOM OUT EFFECT
    glTranslatef(65, 40, 0);
    glScalef(zoom_to_normal_intro_value, zoom_to_normal_intro_value, 1);
    glTranslatef(-65, -40, 0);

    back_texture(); // ID - 78

    staticText("FUTURISTIC CITY VIEW", 40, 75, 0.04, 4, 0, 0, 0);
    //glutSwapBuffers();
    staticText("&", 62, 70, 0.04, 4, 0, 0, 0);
    // glutSwapBuffers();
    staticText("SMART FIRE MANAGEMENT SYSTEM", 26, 65, 0.04, 4, 0, 0, 0);

    staticText("PRESS 'z'  ", 57, 57, 0.02, 1, 1, 0, 0);
    //glutSwapBuffers();
    staticText("TO", 62, 52, 0.02, 1, 1, 0, 0);
    //glutSwapBuffers();
    staticText("CONTINUE", 57, 47, 0.02, 1, 1, 0, 0);
    // glutSwapBuffers();

    //glutSwapBuffers();

    Opipic(); //ID - 75
    Rafipic(); //ID - 76
    Tishatpic(); //ID - 77




    if (zoom_to_scenario_01_from_intro_value > 16.07) {
        glutDisplayFunc(opi);
        initOpi();
    }



    glPopMatrix();


    glFlush();


    glutSwapBuffers();


}


int main(int argc, char** argv) {


    glutInitWindowSize(1220, 720);
    glutInit(&argc, argv); // Initialize GLUT

    glutInitWindowPosition((glutGet(GLUT_SCREEN_WIDTH) - 1220) / 2,

        (glutGet(GLUT_SCREEN_HEIGHT) - 720) / 2);


    glutCreateWindow("FUTURISTIC CITY VIEW & SMART FIRE MANAGEMENT SYSTEM"); // Create window with the given title


    //initOpi();


    //IMAGES FOR INTRO PAGE TEXTURES
    loadImageAndStore((imagesFolderPath + "opi_pic.bmp").c_str());
    loadImageAndStore((imagesFolderPath + "TISHAT_PIC.bmp").c_str());
    loadImageAndStore((imagesFolderPath + "rafi_pic_01.bmp").c_str());
    loadImageAndStore((imagesFolderPath + "back_intro.bmp").c_str());
    loadImageAndStore((imagesFolderPath + "opi_project_pic.bmp").c_str());
    loadImageAndStore((imagesFolderPath + "tishat_project_pic.bmp").c_str());
    loadImageAndStore((imagesFolderPath + "rafi_project_pic.bmp").c_str());


    //IMAGES FOR SCENARIO 3 TEXTURES
    loadImageAndStore((imagesFolderPath + "grass.bmp").c_str());
    loadImageAndStore((imagesFolderPath + "road_new.bmp").c_str());
    loadImageAndStore((imagesFolderPath + "sky05.bmp").c_str());
    loadImageAndStore((imagesFolderPath + "building_11.bmp").c_str());
    loadImageAndStore((imagesFolderPath + "front_road.bmp").c_str());

    glutSwapBuffers();
    //loadImageAndStore((imagesFolderPath + "frame.bmp").c_str());

    glutDisplayFunc(intro); // Register callback handler for window re-paint event

    glutTimerFunc(20, zoom_to_normal_view, 0); //ID - 79

    glutKeyboardUpFunc(keyboard_func); // ID - 80


    gluOrtho2D(0, +130, 0, +80);




    //initTishat();

    glutMainLoop(); // Enter the event-processing loop

    return 0;

}

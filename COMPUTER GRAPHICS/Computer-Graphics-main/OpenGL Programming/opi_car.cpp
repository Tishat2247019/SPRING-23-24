#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h
#include <math.h>


float rotate_car_wheel = 0;




void car() {


    //MORE LIGHTER SHADE AT THE BACK
    glColor3f(0.74, 0.75, 0.74);
    glBegin(GL_POLYGON);
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


    //BLACK AREA BELOW (NEAR THE WHEELS)
    glColor3f(0.19, 0.19, 0.2);
    glBegin(GL_POLYGON);
    glVertex2f(90, 41);
    glVertex2f(89.6115512950685, 41.8211202740436);
    glVertex2f(92.573180158949, 41.8767139899185);
    glVertex2f(92.5, 41);

    glEnd();

    //MORE DEEPER COLOR BLAKISH SHADE

    glColor3f(0.35, 0.35, 0.36);
    glBegin(GL_POLYGON);
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


    //YELLOW SHADE
    glColor3f(0.97, 0.93, 0.19);
    glBegin(GL_POLYGON);
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

    //MORE DEEPER SHADE ABOVE YELLOW SHADE
    glColor3f(0.35, 0.35, 0.36);

    glBegin(GL_POLYGON);
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

    //BLUE COLOR WINDOW


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

    //YELLOW COLOR HEADLIGHT
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

    //YELLOW COLOR SHADE UNDER THE WINDOW
    glColor3f(0.97, 0.93, 0.19);
    glBegin(GL_POLYGON);
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

    //LEFT RED COLORE LIGHT

    glColor3f(1, 0, 0);
    glBegin(GL_POLYGON);
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


    //HORIZONTAL YELLOW SHADE NEAR THE WHEELS
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



    //LEFT WHEEL 
    //TOTAL 3 CIRCLES
    //MOST BIG CIRCLE

    glPushMatrix();
    glTranslatef(89.260477167975, 41.3857725473433, 0);
    glRotatef(-rotate_car_wheel, 0, 0, 1);
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


    //2ND MOST BIG WHITISH CIRCLE

    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
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


    //MOST SMALL CIRCLE

    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
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


    //DOT CIRCLE

    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
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
    //DIVIDED INTO 2 PARTH

    glColor3f(0.56, 0.56, 0.59);


    //FIRST PART
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


    //SECOND PART
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



    //RIGHT SIDE WHEEL
    //TRANSLATING THE CODES OF THE FIRST WHEEL TO X AXIS

    glPushMatrix();

    glTranslatef(4, 0, 0);



    glPushMatrix();
    glTranslatef(89.260477167975, 41.3857725473433, 0);
    glRotatef(-rotate_car_wheel, 0, 0, 1);
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


    //2ND MOST BIG WHITISH CIRCLE

    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
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


    //MOST SMALL CIRCLE

    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
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


    //DOT CIRCLE

    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
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
    //DIVIDED INTO 2 PARTH

    glColor3f(0.56, 0.56, 0.59);


    //FIRST PART
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


    //SECOND PART
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


}


void rotate_function(int value) {
    rotate_car_wheel += 4;
    if (rotate_car_wheel > 369) {
        rotate_car_wheel -= 360;
    }
    glutPostRedisplay(); //Notify GLUT that the display has changed

    glutTimerFunc(20, rotate_function, 0);
}

/* Handler for window-repaint event. Call back when the window first appears and
whenever the window needs to be re-painted. */
void display() {
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // Set background color to black and opaque
    glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)

    car();
    glFlush();  // Render now
}

/* Main function: GLUT runs as a console application starting at main()  */
int main(int argc, char** argv) {
    glutInitWindowSize(820, 620);   // Set the window's initial width & height
    glutInit(&argc, argv);                 // Initialize GLUT
    glutCreateWindow("OpenGL Setup Test"); // Create a window with the given title
    glutDisplayFunc(display); // Register display callback handler for window re-paint

    glutTimerFunc(20, rotate_function, 0);

    // gluOrtho2D(86, 96, 38, 46);
    gluOrtho2D(0, 130, 0, 80);


    glutMainLoop();           // Enter the event-processing loop
    return 0;
}

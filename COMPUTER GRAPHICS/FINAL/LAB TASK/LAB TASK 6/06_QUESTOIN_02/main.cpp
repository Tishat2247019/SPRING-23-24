    #include <iostream>
    #include <GL/gl.h>
    #include <GL/glut.h>
    using namespace std;

    float _move = 0.0f;
    float _move1 = -7.0f;
    int state = 1;

    void box1() {
        glBegin(GL_QUADS);
        glVertex2f(-0.8f, 1.0f);
        glVertex2f(-0.8f, 0.8f);
        glVertex2f(-0.6f, 0.8f);
        glVertex2f(-0.6f, 1.0f);
        glEnd();
    }

    void box2() {
        glBegin(GL_QUADS);
        glVertex2f(-0.8f, -0.8f);
        glVertex2f(-0.8f, -1.0f);
        glVertex2f(-0.6f, -1.0f);
        glVertex2f(-0.6f, -0.8f);
        glEnd();
    }

    void box3() {
        glBegin(GL_QUADS);
        glVertex2f(0.6f, 1.0f);
        glVertex2f(0.6f, 0.8f);
        glVertex2f(0.8f,0.8f);
        glVertex2f(0.8f, 1.0f);
        glEnd();
    }

    void box4() {
        glBegin(GL_QUADS);
        glVertex2f(0.6f, -0.8f);
        glVertex2f(0.6f, -1.0f);
        glVertex2f(0.8f, -1.0f);
        glVertex2f(0.8f, -0.8f);
        glEnd();
    }

    void display() {
        glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
        glClear(GL_COLOR_BUFFER_BIT);

        switch(state) {
            case 1:
                box1();
                break;
            case 2:
                box2();
                break;
            case 3:
                box3();
                break;
            case 4:
                box4();
                break;
        }

        glFlush();
    }

    void call(int value) {
        state++;
         glutPostRedisplay();
        if (state < 5) {
            glutTimerFunc(1000, call, 0); // Adjust the delay as needed (here 1000 milliseconds)
        }
        else{
            state = 1;
            glutTimerFunc(1000, call, 0);
        }
        //cout << state << endl;
    }

    int main(int argc, char** argv) {
        glutInit(&argc, argv);
        glutInitWindowSize(720, 620);
        glutCreateWindow("Rotating Wheel");
        glutDisplayFunc(display);
        glutTimerFunc(1000, call, 0);
        glutMainLoop();
        return 0;
    }

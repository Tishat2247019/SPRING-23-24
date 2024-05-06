#include <windows.h>
#include <GL/glut.h>

GLfloat light_position[] = { 1.0, 1.0, 1.0, 0.0 };
GLfloat light_ambient[] = { 0.2, 0.2, 0.2, 1.0 };
GLfloat light_diffuse[] = { 1.0, 1.0, 1.0, 1.0 };
GLfloat light_specular[] = { 1.0, 1.0, 1.0, 1.0 };

GLfloat material_ambient[] = { 0.5, 0.5, 0.5, 1.0 };
GLfloat material_diffuse[] = { 0.5, 0.5, 0.5, 1.0 };
GLfloat material_specular[] = { 1.0, 1.0, 1.0, 1.0 };
GLfloat material_shininess[] = { 50.0 };

void init(void) {
    glEnable(GL_LIGHTING);
    glEnable(GL_LIGHT0);
    glEnable(GL_DEPTH_TEST);

    glLightfv(GL_LIGHT0, GL_POSITION, light_position);
    glLightfv(GL_LIGHT0, GL_AMBIENT, light_ambient);
    glLightfv(GL_LIGHT0, GL_DIFFUSE, light_diffuse);
    glLightfv(GL_LIGHT0, GL_SPECULAR, light_specular);

    glMaterialfv(GL_FRONT_AND_BACK, GL_AMBIENT, material_ambient);
    glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, material_diffuse);
    glMaterialfv(GL_FRONT_AND_BACK, GL_SPECULAR, material_specular);
    glMaterialfv(GL_FRONT_AND_BACK, GL_SHININESS, material_shininess);
}

void display(void) {
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glLoadIdentity();

    // Set the view position
    gluLookAt(0.0, 0.0, 5.0,  // Eye position
        0.0, 0.0, 0.0,  // L#include <windows.h>
#include <GL/glut.h>

        GLfloat light_position[] = { 1.0, 1.0, 1.0, 0.0 };
    GLfloat light_ambient[] = { 0.2, 0.2, 0.2, 1.0 };
    GLfloat light_diffuse[] = { 1.0, 1.0, 1.0, 1.0 };
    GLfloat light_specular[] = { 1.0, 1.0, 1.0, 1.0 };

    GLfloat material_ambient[] = { 0.5, 0.5, 0.5, 1.0 };
    GLfloat material_diffuse[] = { 0.5, 0.5, 0.5, 1.0 };
    GLfloat material_specular[] = { 1.0, 1.0, 1.0, 1.0 };
    GLfloat material_shininess[] = { 50.0 };

    void init(void) {
        glEnable(GL_LIGHTING);
        glEnable(GL_LIGHT0);
        glEnable(GL_DEPTH_TEST);

        glLightfv(GL_LIGHT0, GL_POSITION, light_position);
        glLightfv(GL_LIGHT0, GL_AMBIENT, light_ambient);
        glLightfv(GL_LIGHT0, GL_DIFFUSE, light_diffuse);
        glLightfv(GL_LIGHT0, GL_SPECULAR, light_specular);

        glMaterialfv(GL_FRONT_AND_BACK, GL_AMBIENT, material_ambient);
        glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, material_diffuse);
        glMaterialfv(GL_FRONT_AND_BACK, GL_SPECULAR, material_specular);
        glMaterialfv(GL_FRONT_AND_BACK, GL_SHININESS, material_shininess);
    }

    void display(void) {
        glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
        glLoadIdentity();

        // Set the view position
        gluLookAt(0.0, 0.0, 5.0,  // Eye position
            0.0, 0.0, 0.0,  // Look-at position
            0.0, 1.0, 0.0); // Up direction

        // Draw the box with lighting effects
        glBegin(GL_QUADS);
        // Front face
        glNormal3f(0.0, 0.0, 1.0);
        glVertex3f(-0.5, -0.5, 0.5);
        glVertex3f(0.5, -0.5, 0.5);
        glVertex3f(0.5, 0.5, 0.5);
        glVertex3f(-0.5, 0.5, 0.5);

        // Back face
        glNormal3f(0.0, 0.0, -1.0);
        glVertex3f(-0.5, -0.5, -0.5);
        glVertex3f(0.5, -0.5, -0.5);
        glVertex3f(0.5, 0.5, -0.5);
        glVertex3f(-0.5, 0.5, -0.5);

        // Top face
        glNormal3f(0.0, 1.0, 0.0);
        glVertex3f(-0.5, 0.5, -0.5);
        glVertex3f(0.5, 0.5, -0.5);
        glVertex3f(0.5, 0.5, 0.5);
        glVertex3f(-0.5, 0.5, 0.5);

        // Bottom face
        glNormal3f(0.0, -1.0, 0.0);
        glVertex3f(-0.5, -0.5, -0.5);
        glVertex3f(0.5, -0.5, -0.5);
        glVertex3f(0.5, -0.5, 0.5);
        glVertex3f(-0.5, -0.5, 0.5);

        // Right face
        glNormal3f(1.0, 0.0, 0.0);
        glVertex3f(0.5, -0.5, -0.5);
        glVertex3f(0.5, 0.5, -0.5);
        glVertex3f(0.5, 0.5, 0.5);
        glVertex3f(0.5, -0.5, 0.5);

        // Left face
        glNormal3f(-1.0, 0.0, 0.0);
        glVertex3f(-0.5, -0.5, -0.5);
        glVertex3f(-0.5, 0.5, -0.5);
        glVertex3f(-0.5, 0.5, 0.5);
        glVertex3f(-0.5, -0.5, 0.5);

        glEnd();

        glFlush();
    }

    int main(int argc, char** argv) {
        glutInit(&argc, argv);
        glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB | GLUT_DEPTH);
        glutInitWindowSize(500, 500);
        glutCreateWindow("OpenGL Lighting and Shading");
        glutDisplayFunc(display);

        init();

        glutMainLoop();
        return 0;
    }
    ook - at position
        0.0, 1.0, 0.0); // Up direction

    // Draw the box with lighting effects
    glBegin(GL_QUADS);
    // Front face
    glNormal3f(0.0, 0.0, 1.0);
    glVertex3f(-0.5, -0.5, 0.5);
    glVertex3f(0.5, -0.5, 0.5);
    glVertex3f(0.5, 0.5, 0.5);
    glVertex3f(-0.5, 0.5, 0.5);

    // Back face
    glNormal3f(0.0, 0.0, -1.0);
    glVertex3f(-0.5, -0.5, -0.5);
    glVertex3f(0.5, -0.5, -0.5);
    glVertex3f(0.5, 0.5, -0.5);
    glVertex3f(-0.5, 0.5, -0.5);

    // Top face
    glNormal3f(0.0, 1.0, 0.0);
    glVertex3f(-0.5, 0.5, -0.5);
    glVertex3f(0.5, 0.5, -0.5);
    glVertex3f(0.5, 0.5, 0.5);
    glVertex3f(-0.5, 0.5, 0.5);

    // Bottom face
    glNormal3f(0.0, -1.0, 0.0);
    glVertex3f(-0.5, -0.5, -0.5);
    glVertex3f(0.5, -0.5, -0.5);
    glVertex3f(0.5, -0.5, 0.5);
    glVertex3f(-0.5, -0.5, 0.5);

    // Right face
    glNormal3f(1.0, 0.0, 0.0);
    glVertex3f(0.5, -0.5, -0.5);
    glVertex3f(0.5, 0.5, -0.5);
    glVertex3f(0.5, 0.5, 0.5);
    glVertex3f(0.5, -0.5, 0.5);

    // Left face
    glNormal3f(-1.0, 0.0, 0.0);
    glVertex3f(-0.5, -0.5, -0.5);
    glVertex3f(-0.5, 0.5, -0.5);
    glVertex3f(-0.5, 0.5, 0.5);
    glVertex3f(-0.5, -0.5, 0.5);

    glEnd();

    glFlush();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB | GLUT_DEPTH);
    glutInitWindowSize(500, 500);
    glutCreateWindow("OpenGL Lighting and Shading");
    glutDisplayFunc(display);

    init();

    glutMainLoop();
    return 0;
}

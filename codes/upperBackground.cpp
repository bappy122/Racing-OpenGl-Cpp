#include <GL/glut.h>
#include <iostream>
using namespace std;

void upperBackground()
{
    glPushMatrix();
    glColor3ub(39, 64, 139);
    glBegin(GL_POLYGON);
    //background
    glVertex2i(0, 600);

    glVertex2i(1300,600);
    glColor3f(1,1,1);
    glVertex2i(1300,700);
    glVertex2i(0,700);
    glEnd();

    glPopMatrix();
}

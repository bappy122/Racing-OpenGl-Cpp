#include <GL/glut.h>
#include <iostream>
using namespace std;

void roadWhiteMarks1();
void roadWhiteMarks2();
void roadWhiteMarks3();
void roadWhiteMarks4();
void roadWhiteMarks5();
int moveCar = 0;

float moveRoadWhiteMark1 = 0;
float moveRoadWhiteMark2 = 0;
float moveRoadWhiteMark3 = 0;
float moveRoadWhiteMark4 = 0;
float moveRoadWhiteMark5 = 0;
float speed = 0.0;

void moveRoad1()
{

    if(moveCar == 1)
    {
        moveRoadWhiteMark1 -= speed;

    }
    if(moveRoadWhiteMark1 < -150)
    {
        moveRoadWhiteMark1 = 400;

    }

    glPushMatrix();
    glTranslatef(0.0, moveRoadWhiteMark1, 0.0);
    roadWhiteMarks1();
    glPopMatrix();
}
void moveRoad2()
{

    if(moveCar == 1)
    {
        moveRoadWhiteMark2 -= speed;

    }
    if(moveRoadWhiteMark2 < -270)
    {
        moveRoadWhiteMark2 = 280;

    }

    glPushMatrix();
    glTranslatef(0.0, moveRoadWhiteMark2, 0.0);
    roadWhiteMarks2();

    glPopMatrix();
}

void moveRoad3()
{

    if(moveCar == 1)
    {
        moveRoadWhiteMark3 -= speed;
        //scale += ;

    }
    if(moveRoadWhiteMark3 < -390)
    {
        moveRoadWhiteMark3 = 160;

    }

    glPushMatrix();
    glTranslatef(0.0, moveRoadWhiteMark3, 0.0);
    roadWhiteMarks3();

    glPopMatrix();
}

void moveRoad4()
{
    if(moveCar == 1)
    {
        moveRoadWhiteMark4 -= speed;


    }
    if(moveRoadWhiteMark4 < -510)
    {
        moveRoadWhiteMark4 = 40;

    }

    glPushMatrix();
    glTranslatef(0.0, moveRoadWhiteMark4, 0.0);

    roadWhiteMarks4();

    glPopMatrix();
}

void moveRoad5()
{
    if(moveCar == 1)
    {
        moveRoadWhiteMark4 -= speed;


    }
    if(moveRoadWhiteMark4 < -570)
    {
        moveRoadWhiteMark4 = 10;

    }

    glPushMatrix();
    glTranslatef(0.0, moveRoadWhiteMark4, 0.0);

    roadWhiteMarks4();

    glPopMatrix();
}

void roadWhiteMarks1()
{
    glPushMatrix();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);

    glVertex2i(582+50, 70);
    glVertex2i(588+50, 70);
    glVertex2i(588+50, 140);
    glVertex2i(582+50, 140);
    glEnd();
    glPopMatrix();
}
void roadWhiteMarks2()
{
    glPushMatrix();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);

    glVertex2i(582+50, 210);
    glVertex2i(588+50, 210);
    glVertex2i(588+50, 280);
    glVertex2i(582+50, 280);
    glEnd();
    glPopMatrix();
}
void roadWhiteMarks3()
{
    glPushMatrix();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);

    glVertex2i(582+50, 350);
    glVertex2i(588+50, 350);
    glVertex2i(588+50, 420);
    glVertex2i(582+50, 420);
    glEnd();

    glPopMatrix();
}

void roadWhiteMarks4()
{
    glPushMatrix();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);

    glVertex2i(582+50, 490);
    glVertex2i(588+50, 490);
    glVertex2i(588+50, 560);
    glVertex2i(582+50, 560);
    glEnd();

    glPopMatrix();
}



void roadWhiteMarks6()
{
    glPushMatrix();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);

    glVertex2i(583+50, 477);
    glVertex2i(587+50, 477);
    glVertex2i(587+50, 485);
    glVertex2i(583+50, 485);
    glEnd();

    glPopMatrix();
}

void roadWhiteMarks7()
{
    glPushMatrix();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);

    glVertex2i(583+50, 492);
    glVertex2i(587+50, 492);
    glVertex2i(587+50, 496);
    glVertex2i(583+50, 496);
    glEnd();

    glPopMatrix();
}

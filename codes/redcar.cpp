#include <stdlib.h>
#include <GL/glut.h>
#include<iostream>
using namespace std;

int carRedX1 = 0;
int carRedX2 = 200;
int carRedY = 120;


void carRed()
{


    glPushMatrix();
    //glTranslatef(550.0,30.0,0);
    glScalef(.7, 0.7,0.0);

     //back bar
    glColor3ub(100, 100, 100);
    //glColor3ub(rand()%254+1, rand()%254+1, rand()%254+1);
    glBegin(GL_POLYGON);
    glVertex2i(carRedX1, 0);
    glVertex2i(200,0);
    glVertex2i(carRedX2,35);
    glVertex2i(0,35);
    glEnd();

    glColor3ub(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2i(0, 30);
    glVertex2i(200,30);
    glVertex2i(200,34);
    glVertex2i(0,34);
    glEnd();

    glColor3ub(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2i(0, 0);
    glVertex2i(200,0);
    glVertex2i(200,2);
    glVertex2i(0,2);
    glEnd();


    glColor3ub(0, 0, 0);
    glPointSize(10);
    glBegin(GL_POINTS);
    glVertex2i(94, 10);
    glEnd();

    glColor3ub(0, 0, 0);
    glPointSize(10);
    glBegin(GL_POINTS);
    glVertex2i(106, 10);
    glEnd();

    glColor3ub(0, 0, 0);
    glPointSize(10);
    glBegin(GL_POINTS);
    glVertex2i(100, 20);
    glEnd();

    //back light

    glColor3ub(255, 127, 36);
    glBegin(GL_POLYGON);
    glVertex2i(10, 5);
    glVertex2i(35,5);
    glVertex2i(35,25);
    glVertex2i(10,25);
    glEnd();

    glColor3ub(209, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2i(35, 5);
    glVertex2i(60,5);
    glVertex2i(60,25);
    glVertex2i(35,25);
    glEnd();

    glColor3ub(209, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2i(140, 5);
    glVertex2i(165,5);
    glVertex2i(165,25);
    glVertex2i(140,25);
    glEnd();
    glColor3ub(255, 127, 36);
    glBegin(GL_POLYGON);
    glVertex2i(165, 5);
    glVertex2i(190,5);
    glVertex2i(190,25);
    glVertex2i(165,25);
    glEnd();

    //
    glColor3ub(180, 0, 0);
    //glColor3ub(rand()%254+1, rand()%254+1, rand()%254+1);
    glBegin(GL_POLYGON);
    glVertex2i(20,65);
    glVertex2i(180,65);
    glVertex2i(200,35);
    glVertex2i(0, 35);
    glEnd();

    glColor3ub(0, 0, 0);
    glBegin(GL_LINE_LOOP);
    glVertex2i(20,65);
    glVertex2i(180,65);
    glVertex2i(200,35);
    glVertex2i(0, 35);
    glEnd();


    //back glass
    glColor3ub(250, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2i(30,95);
    glVertex2i(170,95);
    glVertex2i(180,65);
    glVertex2i(20, 65);
    glEnd();

    glColor3ub(45, 45, 45);
    glBegin(GL_POLYGON);
    glVertex2i(40,95);
    glVertex2i(160,95);
    glVertex2i(175,65);
    glVertex2i(25, 65);
    glEnd();

    glColor3ub(0, 0, 0);
    glBegin(GL_LINE_LOOP);
    glVertex2i(40,95);
    glVertex2i(160,95);
    glVertex2i(175,65);
    glVertex2i(25, 65);
    glEnd();

    //top
    glColor3ub(220, 0, 0);
  //glColor3ub(rand()%254+1, rand()%254+1, rand()%254+1);
    glBegin(GL_POLYGON);
    glVertex2i(30,95);
    glVertex2i(170,95);
    glVertex2i(140,carRedY);
    glVertex2i(60, carRedY);
    glEnd();

    glColor3ub(0, 0, 0);
  //glColor3ub(rand()%254+1, rand()%254+1, rand()%254+1);
    glBegin(GL_LINE_LOOP);
    glVertex2i(30,95);
    glVertex2i(170,95);
    glVertex2i(140,carRedY);
    glVertex2i(60, carRedY);
    glEnd();

    //wheel
    glColor3ub(30, 30, 30);
    glBegin(GL_POLYGON);
    glVertex2i(10,0);
    glVertex2i(66,0);
    glVertex2i(60,-10);
    glVertex2i(16, -10);
    glEnd();

    glColor3ub(30, 30, 30);
    glBegin(GL_POLYGON);
    glVertex2i(130,0);
    glVertex2i(187,0);
    glVertex2i(180,-10);
    glVertex2i(136, -10);
    glEnd();

    //back design
    glColor3ub(240, 240, 240);
    //glColor3ub(rand()%254+1, rand()%254+1, rand()%254+1);
    glBegin(GL_POLYGON);
    glVertex2i(60, 35);
    glVertex2i(140,35);
    glVertex2i(125,65);
    glVertex2i(75,65);
    glEnd();
    glPopMatrix();

}



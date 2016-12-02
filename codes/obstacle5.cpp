#include <GL/glut.h>
#include <GL/glut.h>
#include <stdlib.h>
#include<iostream>

float obstacleCarMove5=0;
float temp5 = 570;
void obstacleCar5()

{
    glPushMatrix();
    glTranslatef(temp5,560.0,0);
    glScalef(.6, 0.6,0.0);

    //back bar
    //glColor3ub(100, 100, 100);
    glColor3ub(rand()%254+1, rand()%254+1, rand()%254+1);
    glBegin(GL_POLYGON);
    glVertex2i(0, 0);
    glVertex2i(200,0);
    glVertex2i(200,35);
    glVertex2i(0,35);
    glEnd();

    glColor3ub(0, 0, 0);
    glBegin(GL_LINE_LOOP);
    glVertex2i(0, 0);
    glVertex2i(200,0);
    glVertex2i(200,35);
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

    //front design
    glColor3ub(25 ,25, 24);
    glBegin(GL_POLYGON);
    glVertex2i(55, 4);
    glVertex2i(145,4);
    glVertex2i(135,29);
    glVertex2i(65,29);
    glEnd();

        glColor3ub(192,192,192);
    glPointSize(7);
    glBegin(GL_POINTS);
    glVertex2i(96, 12);
    glEnd();

glColor3ub(192,192,192);
    glPointSize(7);
    glBegin(GL_POINTS);
    glVertex2i(104, 12);
    glEnd();

   glColor3ub(192,192,192);
    glPointSize(7);
    glBegin(GL_POINTS);
    glVertex2i(100, 20);
    glEnd();



    //back light
    glColor3ub(255 ,255, 240);
    glBegin(GL_POLYGON);
    glVertex2i(20, 5);
    glVertex2i(45,5);
    glVertex2i(45,25);
    glVertex2i(20,25);
    glEnd();

    glLineWidth(2.0);
    glColor3ub(0 ,0, 0);
    glBegin(GL_LINE_LOOP);
    glVertex2i(20, 5);
    glVertex2i(45,5);
    glVertex2i(45,25);
    glVertex2i(20,25);
    glEnd();

    glColor3ub(255 ,255, 240);
    glBegin(GL_POLYGON);
    glVertex2i(155, 5);
    glVertex2i(180,5);
    glVertex2i(180,25);
    glVertex2i(155,25);
    glEnd();

    glLineWidth(2.0);
    glColor3ub(0 ,0, 0);
    glBegin(GL_LINE_LOOP);
    glVertex2i(155, 5);
    glVertex2i(180,5);
    glVertex2i(180,25);
    glVertex2i(155,25);
    glEnd();

    //
    //glColor3ub(180, 0, 0);
    glColor3ub(rand()%254+1, rand()%254+1, rand()%254+1);
    glBegin(GL_POLYGON);
    glVertex2i(20,65);
    glVertex2i(180,65);
    glVertex2i(200,35);
    glVertex2i(0, 35);
    glEnd();

    glColor3ub(0, 0, 0);
    glBegin(GL_LINE_LOOP);
    glVertex2i(19,65);
    glVertex2i(179,65);
    glVertex2i(199,35);
    glVertex2i(1, 35);
    glEnd();

    //back glass
    glColor3ub(250, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2i(30,95);
    glVertex2i(170,95);
    glVertex2i(180,65);
    glVertex2i(20, 65);
    glEnd();

    glColor3ub(200, 200, 200);
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
   // glColor3ub(190, 0, 0);
   glColor3ub(rand()%254+1, rand()%254+1, rand()%254+1);
    glBegin(GL_POLYGON);
    glVertex2i(30,95);
    glVertex2i(170,95);
    glVertex2i(140,120);
    glVertex2i(60, 120);
    glEnd();

    glColor3ub(0, 0, 0);
    glBegin(GL_LINE_LOOP);
    glVertex2i(31,97);
    glVertex2i(169,97);
    glVertex2i(140,120);
    glVertex2i(60, 120);
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

    glPopMatrix();
}




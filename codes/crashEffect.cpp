#include <GL/glut.h>
#include <stdlib.h>
#include<iostream>
#include<windows.h>
#include<math.h>
using namespace std;

void DrawCircle(float cx, float cy, float r, int num_segments);
void effect()
{
       //glClear(GL_COLOR_BUFFER_BIT);
    glPushMatrix();
    glTranslatef(330.0,-100.0,0);
    //glScalef(0.6, 0.3,0.0);

    //back bar
    Sleep(15);
    glColor4ub(rand()%254+1, rand()%254+1, rand()%254+1,10);
    DrawCircle(300.0,200.0,40.0,20);
    Sleep(15);
    glFlush();
    glColor4ub(rand()%254+1, rand()%254+1, rand()%254+1,100);
    DrawCircle(340.0,240.0,40.0,20);
    Sleep(15);
    glFlush();
    glColor4ub(rand()%254+1, rand()%254+1, rand()%254+1,100);
    DrawCircle(300.0,160.0,40.0,20);
    Sleep(15);
    glFlush();
    glColor4ub(rand()%254+1, rand()%254+1, rand()%254+1,100);
    DrawCircle(260.0,200.0,40.0,20);
    Sleep(15);
    glFlush();
    glColor4ub(rand()%254+1, rand()%254+1, rand()%254+1,100);
    DrawCircle(270.0,250.0,40.0,20);
    Sleep(15);
    glFlush();
    glColor4ub(rand()%254+1, rand()%254+1, rand()%254+1,100);
    DrawCircle(330.0,200.0,40.0,20);

   // glEnd();



    glPopMatrix();
    //glFlush();
}
void effect2()
{
       //glClear(GL_COLOR_BUFFER_BIT);
    glPushMatrix();
    glTranslatef(550.0,-80.0,0);
    //glScalef(0.6, 0.3,0.0);

    //back bar
    Sleep(15);
    glColor4ub(rand()%254+1, rand()%254+1, rand()%254+1,10);
    DrawCircle(300.0,200.0,40.0,20);
    Sleep(15);
    glFlush();
    glColor4ub(rand()%254+1, rand()%254+1, rand()%254+1,100);
    DrawCircle(340.0,240.0,40.0,20);
    Sleep(15);
    glFlush();
    glColor4ub(rand()%254+1, rand()%254+1, rand()%254+1,100);
    DrawCircle(300.0,160.0,40.0,20);
    Sleep(15);
    glFlush();
    glColor4ub(rand()%254+1, rand()%254+1, rand()%254+1,100);
    DrawCircle(260.0,200.0,40.0,20);
    Sleep(15);
    glFlush();
    glColor4ub(rand()%254+1, rand()%254+1, rand()%254+1,100);
    DrawCircle(270.0,250.0,40.0,20);
    Sleep(15);
    glFlush();
    glColor4ub(rand()%254+1, rand()%254+1, rand()%254+1,100);
    DrawCircle(330.0,200.0,40.0,20);

   // glEnd();



    glPopMatrix();
    //glFlush();
}

void effect3()
{
       //glClear(GL_COLOR_BUFFER_BIT);
    glPushMatrix();
    glTranslatef(120.0,-70.0,0);
    //glScalef(0.6, 0.3,0.0);

    //back bar
    Sleep(15);
    glColor4ub(rand()%254+1, rand()%254+1, rand()%254+1,10);
    DrawCircle(300.0,200.0,40.0,20);
    Sleep(15);
    glFlush();
    glColor4ub(rand()%254+1, rand()%254+1, rand()%254+1,100);
    DrawCircle(340.0,240.0,40.0,20);
    Sleep(15);
    glFlush();
    glColor4ub(rand()%254+1, rand()%254+1, rand()%254+1,100);
    DrawCircle(300.0,160.0,40.0,20);
    Sleep(15);
    glFlush();
    glColor4ub(rand()%254+1, rand()%254+1, rand()%254+1,100);
    DrawCircle(260.0,200.0,40.0,20);
    Sleep(15);
    glFlush();
    glColor4ub(rand()%254+1, rand()%254+1, rand()%254+1,100);
    DrawCircle(270.0,250.0,40.0,20);
    Sleep(15);
    glFlush();
    glColor4ub(rand()%254+1, rand()%254+1, rand()%254+1,100);
    DrawCircle(330.0,200.0,40.0,20);

   // glEnd();



    glPopMatrix();
    //glFlush();
}
void effect4()
{
       //glClear(GL_COLOR_BUFFER_BIT);
    glPushMatrix();
    glTranslatef(230.0,-80.0,0);
    //glScalef(0.6, 0.3,0.0);

    //back bar
    Sleep(15);
    glColor4ub(rand()%254+1, rand()%254+1, rand()%254+1,10);
    DrawCircle(300.0,200.0,40.0,20);
    Sleep(15);
    glFlush();
    glColor4ub(rand()%254+1, rand()%254+1, rand()%254+1,100);
    DrawCircle(340.0,240.0,40.0,20);
    Sleep(15);
    glFlush();
    glColor4ub(rand()%254+1, rand()%254+1, rand()%254+1,100);
    DrawCircle(300.0,160.0,40.0,20);
    Sleep(15);
    glFlush();
    glColor4ub(rand()%254+1, rand()%254+1, rand()%254+1,100);
    DrawCircle(260.0,200.0,40.0,20);
    Sleep(15);
    glFlush();
    glColor4ub(rand()%254+1, rand()%254+1, rand()%254+1,100);
    DrawCircle(270.0,250.0,40.0,20);
    Sleep(15);
    glFlush();
    glColor4ub(rand()%254+1, rand()%254+1, rand()%254+1,100);
    DrawCircle(330.0,200.0,40.0,20);

   // glEnd();



    glPopMatrix();
    //glFlush();
}
void effect5()
{
       //glClear(GL_COLOR_BUFFER_BIT);
    glPushMatrix();
    glTranslatef(510.0,-80.0,0);
    //glScalef(0.6, 0.3,0.0);

    //back bar
    Sleep(15);
    glColor4ub(rand()%254+1, rand()%254+1, rand()%254+1,10);
    DrawCircle(300.0,200.0,40.0,20);
    Sleep(15);
    glFlush();
    glColor4ub(rand()%254+1, rand()%254+1, rand()%254+1,100);
    DrawCircle(340.0,240.0,40.0,20);
    Sleep(15);
    glFlush();
    glColor4ub(rand()%254+1, rand()%254+1, rand()%254+1,100);
    DrawCircle(300.0,160.0,40.0,20);
    Sleep(15);
    glFlush();
    glColor4ub(rand()%254+1, rand()%254+1, rand()%254+1,100);
    DrawCircle(260.0,200.0,40.0,20);
    Sleep(15);
    glFlush();
    glColor4ub(rand()%254+1, rand()%254+1, rand()%254+1,100);
    DrawCircle(270.0,250.0,40.0,20);
    Sleep(15);
    glFlush();
    glColor4ub(rand()%254+1, rand()%254+1, rand()%254+1,100);
    DrawCircle(330.0,200.0,40.0,20);

   // glEnd();



    glPopMatrix();
    //glFlush();
}
void DrawCircle(float cx, float cy, float r, int num_segments)
{
    //glColor3ub(100, 00, 00);
	glBegin(GL_TRIANGLE_FAN);
	for (int ii = 0; ii < num_segments; ii++)
	{
		float theta = 2.0f * 3.1415926f * float(ii) / float(num_segments);//get the current angle

		float x = r * cosf(theta);//calculate the x component
		float y = r * sinf(theta);//calculate the y component

		glVertex2f(x + cx, y + cy);//output vertex

	}
	glEnd();
}


#include <iostream>
#include <stdio.h>
#include <GL/glut.h>
#include <math.h>
#include <windows.h>
#include<MMSystem.h>
 int thunderStatus = 0;
float RainX = 0;
float RainY = 850;
float cloud_X = 0;
float cloud_Y = 0;
int cloudStatus = 1;
int rainStatus = 0;
int sunStatus = 0;

void thunder()
{
    glPushMatrix();
    int x= 70;
        glBegin(GL_POLYGON);
    glColor3f(0, 0, 0);
    glVertex2i(0,0);
	glVertex2i(1400, 0);
	glVertex2i(1400, 800);
	glVertex2i(0, 800);
	glEnd();
	glFlush();
    Sleep(x);

    glBegin(GL_POLYGON);
    glColor3f(1, 1, 1);
    glVertex2i(0,0);
	glVertex2i(1400, 0);
	glVertex2i(1400, 800);
	glVertex2i(0, 800);
	glEnd();
	glFlush();
    Sleep(x);
    glBegin(GL_POLYGON);
    glColor3f(0, 0, 0);
    glVertex2i(0,0);
	glVertex2i(1400, 0);
	glVertex2i(1400, 800);
	glVertex2i(0, 800);
	glEnd();
	glFlush();
    Sleep(x);
    PlaySound(TEXT("thunder.wav"),NULL,SND_ASYNC);
	    glBegin(GL_POLYGON);
    glColor3f(1, 1, 1);
    glVertex2i(0,0);
	glVertex2i(1400, 0);
	glVertex2i(1400, 800);
	glVertex2i(0, 800);
	glEnd();

	glFlush();
Sleep(x);
    glBegin(GL_POLYGON);
    glColor3f(0, 0, 0);
    glVertex2i(0,0);
	glVertex2i(1400, 0);
	glVertex2i(1400, 800);
	glVertex2i(0, 800);
	glEnd();
	glFlush();
    Sleep(x);

	    glBegin(GL_POLYGON);
    glColor3f(1, 1, 1);
    glVertex2i(0,0);
	glVertex2i(1400, 0);
	glVertex2i(1400, 800);
	glVertex2i(0, 800);
	glEnd();
	glFlush();

Sleep(x);
    glBegin(GL_POLYGON);
    glColor3f(0, 0, 0);
    glVertex2i(0,0);
	glVertex2i(1400, 0);
	glVertex2i(1400, 800);
	glVertex2i(0, 800);
	glEnd();
	glFlush();
    Sleep(x);
	    glBegin(GL_POLYGON);
    glColor3f(1, 1, 1);
    glVertex2i(0,0);
	glVertex2i(1400, 0);
	glVertex2i(1400, 800);
	glVertex2i(0, 800);
	glEnd();
	//glFlush();
glPopMatrix();
}

void drawRain()
{
	glPushMatrix();
	int x = 0, y = 0;
	glColor3f(0.9, 0.9, 0.9);
	for (int i = 0; i<60; i++)
	{
		for (int j = 0; j<40; j++)
		{
		    glLineWidth(3.0);
			glBegin(GL_LINES);
			glVertex2i(x, y);
			y += 20;
			glVertex2i(x + 15, y);
			y += 40;
			glEnd();
		}
		y = 0;
		x += 30;
	}

	glPopMatrix();
}

void rain()
{
	if (rainStatus == 1)
	{
		RainY -= 0.6;

		if (RainY<-400)
		{
			RainY = 0;
		}
	}

	if (rainStatus == 2)
	{
		RainY -= 1;

		if (RainY == 799)
		{
			RainY = -1100;
		}
		if (RainY <-1350)
		{
			RainY = -1200;
		}
	}
	glPushMatrix();
	glTranslatef(RainX, RainY, 0);
	drawRain();
	glPopMatrix();


}
/*
void myInit(void)
{
	glClearColor(0.0, 0.0, 1.0, 0.0);
	glColor3f(1.0f, 1.0f, 1.0f);
	glPointSize(0.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0, 1200.0, 0.0, 800.0);
}

void keyboard(unsigned char key, int x, int y)
{

	switch (key) {
	case 'r':
	case 'R':
		rainStatus = 1;
		break;

	default:
		break;
	}
}




void myDisplay(void)
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	rain();

	if(thunderStatus == 1)
    {
       thunder();
       thunderStatus = 0;
    }

	glFlush();

	glutPostRedisplay();
	glutSwapBuffers();
}

int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(1350, 700);
	glutInitWindowPosition(0, 0);

	glutCreateWindow("Season");
	glutKeyboardFunc(keyboard);
	glutDisplayFunc(myDisplay);
	myInit();
	glutMainLoop();
}
*/

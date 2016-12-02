#include <iostream>
#include <stdio.h>
#include <GL/glut.h>
#include <math.h>
#include <windows.h>
#include<MMSystem.h>
 //int thunderStatus = 0;
float snowXX = 0;
float snowYY = 850;
//float cloud_XX = 0;
//float cloud_YY = 0;
//int cloudStatus = 1;
int snowStatus2 = 1;
//int sunStatus = 0;


//float move, angle;

/*
void scene()
{
	glPushMatrix();

	glBegin(GL_POLYGON); //blue Sky
	glColor3f(0.4, 0.5, 1.0);
	glVertex2i(0, 850);
	glVertex2i(1200, 850);
	glColor3f(0.7, 0.7, 1.0);
	glVertex2i(1200, 0);
	glVertex2i(0, 0);
	glEnd();


	glBegin(GL_POLYGON); //Ground
	glColor3f(0.0, 0.6, 0.0);
	glVertex2i(0, 500);
	glVertex2i(1200, 500);
	glColor3f(0.1, 0.9, 0.1);
	glVertex2i(1200, 0);
	glVertex2i(0, 0);
	glEnd();

	glPopMatrix();

}
*/




void drawSnow()
{
	glPushMatrix();
	int x = 0, y = 0;
	glColor3f(0.9, 0.9, 0.9);
	for (int i = 0; i<60; i++)
	{
		for (int j = 0; j<40; j++)
		{
		    glLineWidth(2.0);
		    glPointSize(10);
			glBegin(GL_POINTS);
			glVertex2i(x, y);
			glEnd();
			y += 50;
			glPointSize(7);
			glBegin(GL_POINTS);
			glVertex2i(x + 15, y);
			y += 50;
			glEnd();
		}
		y = 0;
		x += 30;
	}

	glPopMatrix();
}

void snow()
{
	if (snowStatus2 == 1)
	{
		snowYY -= 0.8;

		if (snowYY<-400)
		{
			snowYY = 0;
		}
	}

	if (snowStatus2 == 2)
	{
		snowYY -= 1;

		if (snowYY == 799)
		{
			snowYY = -1100;
		}
		if (snowYY <-1350)
		{
			snowYY = -1200;
		}
	}
	glPushMatrix();
	glTranslatef(snowXX, snowYY, 0);
	drawSnow();
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
	case 'r':		// to start snow
	case 'R':
		snowStatus2 = 1;
		break;
	case 's':		// to stop snow
	case 'S':
		snowStatus2 = 2;
		break;
	case 'b':		//boat start
	case 'B':
		//boatStatus = 1;
		break;
	case 't':		//boat stop
	case 'T':
	  //  thunderStatus = 1;
//		boatStatus = 0;
		break;
	case 'c':		//cloud start
	case 'C':
		//thunderStatus = 0;
		break;
	case 'v':		//cloud stop
	case 'V':
		cloudStatus = 0;
		break;
	default:
		break;
	}
}




void myDisplay(void)
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	scene();
	cloud(1);
	snow();



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


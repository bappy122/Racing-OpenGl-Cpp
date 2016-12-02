
#include <GL/glut.h>
#include <stdlib.h>
#include <windows.h>
#include<iostream>
#include<math.h>
using namespace std;
int l1=0,l2=0,l3=0;
void DrawCircle3(float cx, float cy, float r, int num_segments);

void displayLife()
{
    glPushMatrix();
    glScalef(0.8,0.8,0);
    glTranslatef(1340,670,0);
    if(l1==0)
    {
              DrawCircle3(100,100,20,100);
    }

      if(l2==0)
      {
            DrawCircle3(150,100,20,100);
      }

      if(l3==0)
      {
           DrawCircle3(200,100,20,100);
      }

    //glFlush();
    glPopMatrix();
}
void DrawCircle3(float cx, float cy, float r, int num_segments)
{
    glColor3ub(100, 00, 00);
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
/*
void init(void)
{


    glClearColor(1.0, 1.0, 1.0, 0.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0.0, 1200.0, 0, 700.0);
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(1300, 700);
    glutInitWindowPosition(10, 10);
    glutCreateWindow("hello");
    init();
    glutDisplayFunc(display);

    glutMainLoop();

    return 0;
}
*/

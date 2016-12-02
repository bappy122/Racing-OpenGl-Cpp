#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>
#include <GL/glut.h>


#pragma region



float posX = 0, posY = 0, posZ = 0;
float missileStartPosY = 0;

int x1 = 0;
int x2 = 0;
//int y1 = 0;
int y2 = 100;

//plane Left collision points


#pragma endregion Varriables

void timer_func(int n)           // NEW FUNCTION
{
	// Update the object positions, etc.
	//fireMissile();  // spin the square

	glutTimerFunc(n, timer_func, n); // recursively call timer_func
}


void update(int value)
{
	glutPostRedisplay();
	glutTimerFunc(50, update, 0);
}

void reshape(int w, int h)
{
	glViewport(0, 0, w, h);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluPerspective(60, 1.0, 1.0, 3200);
	glMatrixMode(GL_MODELVIEW);
}


GLfloat UpwardsScrollVelocity = -10.0;
float view = 10.0;

char quote[6][80];
int numberOfQuotes = 0, i;


void timeTick(void)
{
	if (UpwardsScrollVelocity< -600)
		view -= 0.000011;
	if (view < 0) { view = 20; UpwardsScrollVelocity = -10.0; }
	//  exit(0);
	UpwardsScrollVelocity -= 0.1;
	glutPostRedisplay();

}

void RenderToDisplay()
{
	int l, lenghOfQuote, i;

	glTranslatef(0.0, -100, UpwardsScrollVelocity);
	glRotatef(-20, 1.0, 0.0, 0.0);
	glScalef(0.1, 0.1, 0.1);



	for (l = 0; l<numberOfQuotes; l++)
	{
		lenghOfQuote = (int)strlen(quote[l]);
		glPushMatrix();
		glTranslatef(-(lenghOfQuote * 37), -(l * 200), 0.0);
		for (i = 0; i < lenghOfQuote; i++)
		{
			glColor3f((UpwardsScrollVelocity / 10) + 300 + (l * 10), (UpwardsScrollVelocity / 10) + 300 + (l * 10), 0.0);
			glutStrokeCharacter(GLUT_STROKE_ROMAN, quote[l][i]);
		}
		glPopMatrix();
	}
}

void myDisplayFunction(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	glLoadIdentity();
	gluLookAt(0.0, 30.0, 100.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0);
	RenderToDisplay();
	glutSwapBuffers();
}


int gmOver()
{
	strcpy(quote[0], "Game Over");


	numberOfQuotes = 5;

	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
	//glutInitWindowSize(1360, 750);
	glutCreateWindow("Game Result");
	glClearColor(0.0, 0.0, 0.0, 1.0);
	glLineWidth(3);

	glutDisplayFunc(myDisplayFunction);
	glutReshapeFunc(reshape);
	glutIdleFunc(timeTick);
	glutMainLoop();

	return 0;
}



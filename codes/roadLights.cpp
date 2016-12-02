#include <GL/glut.h>
void city();

float l1y;
float l2y;
float l3y;

float l1x;
float l2x;
float l3x;

float l1sy;
float l2sy;
float l3sy;

//float l1sx;
float l2sx;
float l3sx;

float r1y;
float r2y;
float r3y;

float r1x;
float r2x;
float r3x;

float r1sy;
float r2sy;
float r3sy;

float r1sx;
float r2sx;
float r3sx;

float lightStatus = 0;

void ll1()
{
    glPushMatrix();
    glTranslatef(-310,00,0);
    glScalef(1.1,.9,0);
    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);

    glTranslatef(400.0 ,200.0, 0);
	glColor3f(0.0, 0.0, .0);
	glBegin(GL_QUADS);
	glVertex2f(60, -135);
	glVertex2f(90, -135);
	glVertex2f(90, -125);
	glVertex2f(60, -125);
	glEnd();

	glColor3f(0.0, 0.0, .0);
	glBegin(GL_QUADS);
	glVertex2f(70, 72);
	glVertex2f(80, 72);
	glVertex2f(80, -135);
	glVertex2f(70, -135);
	glEnd();

    glColor3f(0.0, 0.0, .0);
	glBegin(GL_QUADS);
	glVertex2f(70, 70);
	glVertex2f(120, 85);
	glVertex2f(120, 90);
	glVertex2f(70, 90);
	glEnd();

    glColor3f(0.6, 0.6, .6);
	glBegin(GL_TRIANGLES);
	glVertex2f(105, 63);
	glVertex2f(135, 75);
	glVertex2f(110, 85);

    glEnd();

    glColor4ub(238, 232, 170,lightStatus);
	glBegin(GL_TRIANGLES);
	glVertex2f(120, 75);
	glVertex2f(265, -135);
	glVertex2f(135, -135);

	glEnd();
	glPopMatrix();
	//glFlush();
}

void ll2()
{
    glPushMatrix();
    glTranslatef(-190,200,0);
    glScalef(1.1,.9,0);
    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);

    glTranslatef(400.0 ,200.0, 0);
	glColor3f(0.0, 0.0, .0);
	glBegin(GL_QUADS);
	glVertex2f(60, -135);
	glVertex2f(90, -135);
	glVertex2f(90, -125);
	glVertex2f(60, -125);
	glEnd();

	glColor3f(0.0, 0.0, .0);
	glBegin(GL_QUADS);
	glVertex2f(70, 72);
	glVertex2f(80, 72);
	glVertex2f(80, -135);
	glVertex2f(70, -135);
	glEnd();

    glColor3f(0.0, 0.0, .0);
	glBegin(GL_QUADS);
	glVertex2f(70, 70);
	glVertex2f(120, 85);
	glVertex2f(120, 90);
	glVertex2f(70, 90);
	glEnd();

    glColor3f(0.6, 0.6, .6);
	glBegin(GL_TRIANGLES);
	glVertex2f(105, 63);
	glVertex2f(135, 75);
	glVertex2f(110, 85);

    glEnd();

    //glColor4f(.7,.7,0,.5);
    glColor4ub(238, 232, 170,lightStatus);
	glBegin(GL_TRIANGLES);
	glVertex2f(120, 75);
	glVertex2f(265, -135);
	glVertex2f(135, -135);

	glEnd();
	glPopMatrix();

}

void ll3()
{
   glPushMatrix();
    glTranslatef(-70,400,0);
    glScalef(1.1,.9,0);
    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);

    glTranslatef(400.0 ,200.0, 0);
	glColor3f(0.0, 0.0, .0);
	glBegin(GL_QUADS);
	glVertex2f(60, -135);
	glVertex2f(90, -135);
	glVertex2f(90, -125);
	glVertex2f(60, -125);
	glEnd();

	glColor3f(0.0, 0.0, .0);
	glBegin(GL_QUADS);
	glVertex2f(70, 72);
	glVertex2f(80, 72);
	glVertex2f(80, -135);
	glVertex2f(70, -135);
	glEnd();

    glColor3f(0.0, 0.0, .0);
	glBegin(GL_QUADS);
	glVertex2f(70, 70);
	glVertex2f(120, 85);
	glVertex2f(120, 90);
	glVertex2f(70, 90);
	glEnd();

    glColor3f(0.6, 0.6, .6);
	glBegin(GL_TRIANGLES);
	glVertex2f(105, 63);
	glVertex2f(135, 75);
	glVertex2f(110, 85);

    glEnd();

    glColor4ub(238, 232, 170,lightStatus);
	glBegin(GL_TRIANGLES);
	glVertex2f(120, 75);
	glVertex2f(265, -135);
	glVertex2f(135, -135);

	glEnd();
	glPopMatrix();


}

void r1()
{

    glPushMatrix();
    glTranslatef(450,400,0);
    glScalef(1.1,.9,0);
    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);

	glTranslatef(400.0 ,200.0, 0);
    glColor3f(0.0, 0.0, .0);
	glBegin(GL_QUADS);
	glVertex2f(-60, -135);
	glVertex2f(-90, -135);
	glVertex2f(-90, -125);
	glVertex2f(-60, -125);
	glEnd();

	glColor3f(0.0, 0.0, .0);
	glBegin(GL_QUADS);
	glVertex2f(-70, 72);
	glVertex2f(-80, 72);
	glVertex2f(-80, -135);
	glVertex2f(-70, -135);
	glEnd();

    glColor3f(0.0, 0.0, .0);
	glBegin(GL_QUADS);
	glVertex2f(-70, 70);
	glVertex2f(-120, 85);
	glVertex2f(-120, 90);
	glVertex2f(-70, 90);
	glEnd();

    glColor3f(0.6, 0.6, .6);
	glBegin(GL_TRIANGLES);
	glVertex2f(-105, 63);
	glVertex2f(-135, 75);
	glVertex2f(-110, 85);
    glEnd();

    glColor4ub(238, 232, 170,lightStatus);
	glBegin(GL_TRIANGLES);
	glVertex2f(-120, 75);
	glVertex2f(-265, -135);
	glVertex2f(-135, -135);

	glEnd();
	glPopMatrix();
}

void r2()
{


    glPushMatrix();
    glTranslatef(570,200,0);
    glScalef(1.1,.9,0);
    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);

	glTranslatef(400.0 ,200.0, 0);
    glColor3f(0.0, 0.0, .0);
	glBegin(GL_QUADS);
	glVertex2f(-60, -135);
	glVertex2f(-90, -135);
	glVertex2f(-90, -125);
	glVertex2f(-60, -125);
	glEnd();

	glColor3f(0.0, 0.0, .0);
	glBegin(GL_QUADS);
	glVertex2f(-70, 72);
	glVertex2f(-80, 72);
	glVertex2f(-80, -135);
	glVertex2f(-70, -135);
	glEnd();

    glColor3f(0.0, 0.0, .0);
	glBegin(GL_QUADS);
	glVertex2f(-70, 70);
	glVertex2f(-120, 85);
	glVertex2f(-120, 90);
	glVertex2f(-70, 90);
	glEnd();

    glColor3f(0.6, 0.6, .6);
	glBegin(GL_TRIANGLES);
	glVertex2f(-105, 63);
	glVertex2f(-135, 75);
	glVertex2f(-110, 85);
    glEnd();

    glColor4ub(238, 232, 170,lightStatus);
	glBegin(GL_TRIANGLES);
	glVertex2f(-120, 75);
	glVertex2f(-265, -135);
	glVertex2f(-135, -135);

	glEnd();
	glPopMatrix();
}

void r3()
{

    glPushMatrix();
    glTranslatef(690,0,0);
    glScalef(1.1,.9,0);
    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);

	glTranslatef(400.0 ,200.0, 0);
    glColor3f(0.0, 0.0, .0);
	glBegin(GL_QUADS);
	glVertex2f(-60, -135);
	glVertex2f(-90, -135);
	glVertex2f(-90, -125);
	glVertex2f(-60, -125);
	glEnd();

	glColor3f(0.0, 0.0, .0);
	glBegin(GL_QUADS);
	glVertex2f(-70, 72);
	glVertex2f(-80, 72);
	glVertex2f(-80, -135);
	glVertex2f(-70, -135);
	glEnd();

    glColor3f(0.0, 0.0, .0);
	glBegin(GL_QUADS);
	glVertex2f(-70, 70);
	glVertex2f(-120, 85);
	glVertex2f(-120, 90);
	glVertex2f(-70, 90);
	glEnd();

    glColor3f(0.6, 0.6, .6);
	glBegin(GL_TRIANGLES);
	glVertex2f(-105, 63);
	glVertex2f(-135, 75);
	glVertex2f(-110, 85);
    glEnd();

    glColor4ub(238, 232, 170,lightStatus);
	glBegin(GL_TRIANGLES);
	glVertex2f(-120, 75);
	glVertex2f(-265, -135);
	glVertex2f(-135, -135);

	glEnd();
	glPopMatrix();
}
/*
void init(void)
{
    glEnable(GL_BLEND);
    glClearColor(1.0, 1.0, 1.0, 0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0.0, 1300.0, 0, 700.0);
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(1350, 700);
    glutInitWindowPosition(10, 10);
    glutCreateWindow("hello");
//    glutKeyboardFunc(keyboard);
    init();
    glutDisplayFunc(r1);

    glutMainLoop();

    return 0;
}

*/

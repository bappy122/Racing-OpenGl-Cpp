#include <GL/glut.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>
#include<MMSystem.h>
#include <iostream>
#include "Move.cpp"
#include "upperBackground.cpp"
#include "carTest.cpp"
#include "obstacleCar.cpp"
#include "obstacle2.cpp"
#include "obstacle4.cpp"
#include "obstacle5.cpp"
#include "obstacle3.cpp"
#include "crashEffect.cpp"
#include "rain.cpp"
#include "score.cpp"
#include "snow.cpp"
#include "gameOver.cpp"
#include "Life.cpp"
#include "roadLights.cpp"

using namespace std;


float carControl = 550.0;
int life=0;
long long int xx=0;
void roadWhiteMarks();
int startRace = 0;
int speedSpaceBar = 1;
int pause = 0;
int carChangeStatus=1;
int snowStatus = 0;
int rainyWeatherStatus = 0;
int nightWeatherStatus = 0;
float scalex=0,scaley=0;
float tempp =0.1;
float tempp2 =0.1;
float tempp3 =0.1;
float tempp4 =0.1;
float tempp5 =0.1;
long long int score = 0;
int scoreStatus = 0;
int gameState = 1;
int level = 0;


void collisionDetection()
{
    if(((int)obstacleCarMove <= -420 && (int)obstacleCarMove >= -560 )&&(((int)carControl-temp) >= -130 && (((int)carControl-temp) <= 110)))
    {
        //exit(0);
        PlaySound(TEXT("crash.wav"),NULL,SND_ASYNC);
        effect();
        obstacleCarMove -= 150;
        PlaySound(TEXT("background.wav"),NULL,SND_ASYNC|SND_FILENAME|SND_LOOP);
        //glTranslatef(0,obstacleCarMove-80,0.0);
        life += 1;
    }

    if(((int)obstacleCarMove2 <= -420 && (int)obstacleCarMove2 >= -560 )&&(((int)carControl-(int)tempp2) >= 480 && (((int)carControl-(int)tempp2) <= 660)))
    {
        PlaySound(TEXT("crash.wav"),NULL,SND_ASYNC);
        effect2();
        obstacleCarMove2 -= 150;
        PlaySound(TEXT("background.wav"),NULL,SND_ASYNC|SND_FILENAME|SND_LOOP);
         life += 1;
    }
    if(((int)obstacleCarMove3 <= -420 && (int)obstacleCarMove3 >= -560 )&&(((int)carControl-(int)tempp3) >= 440 && (((int)carControl-(int)tempp3) <= 640)))
    {
        PlaySound(TEXT("crash.wav"),NULL,SND_ASYNC);
        effect3();
        obstacleCarMove3 -= 150;
        PlaySound(TEXT("background.wav"),NULL,SND_ASYNC|SND_FILENAME|SND_LOOP);
         life += 1;
    }

    if(((int)obstacleCarMove4 <= -420 && (int)obstacleCarMove4 >= -560 )&&(((int)carControl-(int)tempp4) >= 420 && (((int)carControl-(int)tempp4) <= 640)))
    {
        PlaySound(TEXT("crash.wav"),NULL,SND_ASYNC);
        effect4();
        obstacleCarMove4 -= 150;
        PlaySound(TEXT("background.wav"),NULL,SND_ASYNC|SND_FILENAME|SND_LOOP);
         life += 1;
    }

    if(((int)obstacleCarMove5 <= -420 && (int)obstacleCarMove5 >= -560 )&&(((int)carControl-(int)tempp5) >= 440 && (((int)carControl-(int)tempp5) <= 680)))
    {
        PlaySound(TEXT("crash.wav"),NULL,SND_ASYNC);
        effect5();
        obstacleCarMove5 -= 150;
        PlaySound(TEXT("background.wav"),NULL,SND_ASYNC|SND_FILENAME|SND_LOOP);
         life += 1;
    }
    //cout<<(int)tempp2<<"  "<<carControl<<endl;
}
void runAgain()
{
    PlaySound(TEXT("gameOver.wav"),NULL,SND_APPLICATION);
    system ("Main.exe");
    system ("pause");
}

void lifecheck()
{
    if(life == 1)
    {
        l1 = 1;
    }

    if(life == 2)
    {
        l2 = 1;
    }

    if(life == 3)
    {
        l3 = 1;
    }
    if(life == 3)
    {
        cout<<"Your Score Is: "<<score/100<<endl;
        glutDestroyWindow(1);
        runAgain();

    }

}
void obstacleCarControl()
{
    glPushMatrix();

    if(obstacleCarMove<-600)
    {
       obstacleCarMove = 0;
    }

    if(moveCar == 1)
    {
        obstacleCarMove -= (speed+.1);
    }
    glTranslatef(0,obstacleCarMove,0.0);
    obstacleCar();
    glPopMatrix();
}
void obstacleCarControl2()
{
    glPushMatrix();

    if(obstacleCarMove2<-900)
    {
       obstacleCarMove2 = 0;
       tempp2 = 0;
    }

    if(moveCar == 1)
    {
        tempp2 += 0.16;
        obstacleCarMove2 -= speed-.04;
    }
    glTranslatef(tempp2,obstacleCarMove2,0.0);
    obstacleCar2();
    glPopMatrix();
}

void obstacleCarControl3()
{
    glPushMatrix();

    if(obstacleCarMove3<-600)
    {
       obstacleCarMove3 = 0;
       tempp3 = 0;
    }

    if(moveCar == 1)
    {
        tempp3 -= 0.19;
        obstacleCarMove3 -= speed;
    }
    glTranslatef(tempp3,obstacleCarMove3,0.0);
    obstacleCar3();
    glPopMatrix();
}

void obstacleCarControl4()
{
    glPushMatrix();

    if(obstacleCarMove4<-800)
    {
       obstacleCarMove4 = 0;
       tempp4 = 0;
    }

    if(moveCar == 1)
    {
        tempp4 -= 0.1;
        obstacleCarMove4 -= speed-.05;
    }
    glTranslatef(tempp4,obstacleCarMove4,0.0);
    obstacleCar4();
    glPopMatrix();
}

void obstacleCarControl5()
{
    glPushMatrix();

    if(obstacleCarMove5<-700)
    {
       obstacleCarMove5 = 0;
       tempp5 = 0;
    }
    obstacleCarMove5 -= speed;
    if(moveCar == 1)
    {
        tempp5 += 0.1;
    }
    glTranslatef(tempp5,obstacleCarMove5,0.0);
    obstacleCar5();
    glPopMatrix();
}

void showScore()
{
    if(scoreStatus == 1)
    {
        scoredisplay(1200,650,0,20,++score/100);
    }

}

void rainyWeather()
{
    glPushMatrix();

    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
    glColor4ub(120, 120, 120, 90);
    glBegin(GL_POLYGON);
    glVertex2i(0,0);
    glVertex2i(1300,0);
    glVertex2i(1300,800);
    glVertex2i(0,800);
    glEnd();
    glPopMatrix();
}

void nightWeather()
{
    glPushMatrix();

    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
    glColor4ub(0, 0, 0, 190);
    glBegin(GL_POLYGON);
    glVertex2i(0,0);
    glVertex2i(1300,0);
    glVertex2i(1300,800);
    glVertex2i(0,800);
    glEnd();
    glPopMatrix();
}

void road()
{
    glPushMatrix();
    glColor3ub(71,71,71);
    glBegin(GL_POLYGON);

    //road
    glVertex2i(200, 000);
    glVertex2i(1060,000);
    glVertex2i(710,600);
    glVertex2i(550,600);
    glEnd();


    glBegin(GL_POLYGON);

    //road
    glVertex2i(-700, 000);
    glVertex2i(-20,000);
    glVertex2i(480,600);
    glVertex2i(370,600);
    glEnd();
    glPopMatrix();

    glBegin(GL_POLYGON);

    //road
    glVertex2i(1260, 000);
    glVertex2i(1860,000);
    glVertex2i(880,600);
    glVertex2i(780,600);
    glEnd();
    glPopMatrix();
}

void controlCar()
{
    glPushMatrix();
    glTranslatef(carControl,40.0,0.0);
    carTest();
    glPopMatrix();
}

void moveRoad()
{
    moveRoad1();
    moveRoad2();
    moveRoad3();
    moveRoad4();
}
void moveRoadLightll3()
{
    glPushMatrix();
    if(l1y < -700)
    {
        l1y = 0;
        l1x = 0;
        r1y = 0;
        r1x = 0;

    }
    if(moveCar == 1)
    {
        l1y -= speed;
        r1y -= speed-.35;
        l1x -= 0.21;
        r1x += .38;
    }
    glTranslatef(l1x,l1y,0.0);
    ll3();

    glTranslatef(r1x,r1y,0.0);
    r1();
    glPopMatrix();
}

void Lights()
{
    ll1();
    ll2();
    ll3();
    r1();
    r2();
    r3();
}
void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    if(snowStatus == 1)
        glClearColor(1, 1, 1, 0);
    else
    {
        glClearColor(0.04, 0.53, 0.03, 0);
    }
    // interval();
    upperBackground();
    road();
    if(nightWeatherStatus == 1)
    {
        nightWeather();
          Lights();
    }

    showScore();
    moveRoad();

    if(level == 0)
    {
        obstacleCarControl();
        obstacleCarControl4();
        obstacleCarControl5();
    }
    else
    {
        obstacleCarControl();
        obstacleCarControl2();
        obstacleCarControl3();
        obstacleCarControl4();
        obstacleCarControl5();
    }
    collisionDetection();
    displayLife();
    lifecheck();
    controlCar();

    if(rainyWeatherStatus == 1)
    {
        rainyWeather();
        rain();
            //snow();
        if(rainStatus==1)
        {
            if(rand()%1000 +1 == 50)
            {
                thunder();
            }
        }
    }


    showScore();

    if(snowStatus ==1)
    {
        snow();
    }
    glEnd();
    glFlush();
    glutPostRedisplay();
    glutSwapBuffers();
}

void keyboard(unsigned char key, int x, int y)
{

	switch (key)
	{
        case 'a':
        case 'A':// Right: increase x speed
            if(carControl >220)
            carControl -= 35.0;
            break;
        case 'd':
        case 'D':// Left: decrease x speed
          if(carControl < 880)
          carControl += 35.0;
            break;
        case 'w':
        case 'W':
            if(moveCar==0)
            {
                speed = 0.3;
                startRace = 1;
                moveCar = 1;
                scoreStatus = 1;
            }
            break;

        case 'l':
        case 'L':
            if(lightStatus == 100)
            {
                lightStatus = 0;
            }
            else
            {
                PlaySound(TEXT("background.wav"),NULL,SND_ASYNC|SND_FILENAME|SND_LOOP);
                lightStatus = 100;
            }

            break;

        case 's':
        case 'S':
           if(snowStatus == 1 )
            {
                snowStatus = 0;
            }
            else
            {
                PlaySound(TEXT("background.wav"),NULL,SND_ASYNC|SND_FILENAME|SND_LOOP);
                lightStatus = 100;
                snowStatus = 1;
                rainyWeatherStatus=0;
                //lightStatus = 0;
            }
            break;
        case 'n':
        case 'N':
                if(nightWeatherStatus == 1)
                {
                    nightWeatherStatus = 0;
                    //lightStatus = 0;
                }
                else
                {
                    PlaySound(TEXT("background.wav"),NULL,SND_ASYNC|SND_FILENAME|SND_LOOP);
                    nightWeatherStatus = 1;
                    lightStatus = 100;
                }
                break;
        case 'r':
        case 'R':
             if(rainyWeatherStatus == 1)
                {
                    rainyWeatherStatus = 0;
                    rainStatus = 0;
                    PlaySound(TEXT("background.wav"),NULL,SND_ASYNC|SND_FILENAME|SND_LOOP);
                }
                else
                {
                    rainyWeatherStatus = 1;
                    rainStatus = 1;
                    snowStatus = 0;
                }
                break;
        case 'e':
        case 'E':
            exit(1);
            break;

        default:
            break;
	}
}



void init(void)
{
    //carChoose();
    PlaySound(TEXT("background.wav"),NULL,SND_ASYNC|SND_FILENAME|SND_LOOP);
    glEnable (GL_BLEND);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0.0, 1300.0, 0, 700.0);
}

int main(int argc, char** argv)
{

    int x;

    cout<<endl;
    cout<<endl;
    cout<<"---------Control-------"<<endl;
    cout<<endl;
    cout<<"Move  : w/W"<<endl;
    cout<<"Left  : a/A"<<endl;
    cout<<"Right : d/D"<<endl;
    cout<<"Rain  : r/R"<<endl;
    cout<<"Snow  : s/S"<<endl;
    cout<<"Night : n/N"<<endl;

    cout<<"\nChoose Game Mode:"<<endl;
    cout<<"1. Basic Mode. "<<endl;
    cout<<"2. Expert Mode. "<<endl;
    //cout<<"3. Exit. "<<endl;
    cout<<"\nEnter Option : "<<endl;
    cin>>x;

    if(x==2)
    {
        level = 1;
    }
    if(x==3)
    {
        exit(1);
    }

    cout<<"\n\n--------------------------------"<<endl;

    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;


    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(1350, 700);
    glutInitWindowPosition(10, 10);
    glutCreateWindow("Race Unlimited");
    glutKeyboardFunc(keyboard);
    init();
    glutDisplayFunc(display);
    glutMainLoop();

    return 0;
}



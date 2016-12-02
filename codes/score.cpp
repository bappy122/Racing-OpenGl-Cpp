#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>
#include <GL/glut.h>


void scoredisplay (int posx, int posy, int posz, int space_char, int scorevar)
{
        int j=0,p,k;
        GLvoid *font_style1 = GLUT_BITMAP_TIMES_ROMAN_24;

        p = scorevar;
        j = 0;
        k = 0;
        while(p > 9)
        {
            k = p % 10;
            glRasterPos3f ((posx-(j*space_char)),posy, posz);
            glutBitmapCharacter(font_style1,48+k);
            j++;
            p /= 10;
        }
            glRasterPos3f ((posx-(j*space_char)), posy, posz);
            glutBitmapCharacter(font_style1,48+p);
}

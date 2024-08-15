#include <stdio.h>
#include <conio.h>
#include <graphics.h>
#include <dos.h>
void heading()
{
   setcolor(0);
   settextstyle(7, HORIZ_DIR, 6);
   outtextxy(120, 180, "   THANK YOU   ");
   delay(10000);
}

void name()
{
   int i, x, y, k, t;
   x = getmaxx();
   y = getmaxy();
   t = 0;
   for (k = 1; k < 10; k++)
   {

      if (k > 1)
      {
         cleardevice();
         setcolor(4);
         rectangle(1, 1, x - 1, t);
         setfillstyle(1, 4);
         floodfill(5, 5, 4);
         if (k == 9)
            heading();
      }

      for (i = 20; i <= 80; i++)
      {
         if (i <= 50)
         {
            setcolor(15);
         }
         arc(60, t, 180, 360, i - 20);
         arc(x - 60, t, 180, 360, i - 20);
         arc(x - 160, t, 180, 360, i - 20);
         arc(x - 260, t, 180, 360, i - 20);
         arc(x - 360, t, 180, 360, i - 20);
         arc(x - 460, t, 180, 360, i - 20);
         setcolor(4);
      }
      delay(1000);
      t = t + 50;
      delay(1000);
   }
}

void main()
{
   int gdriver = DETECT, gmode;
   initgraph(&gdriver, &gmode, "C:\\turboc3\\bgi");
   name();
   cleardevice();
   closegraph();
}
#include <stdio.h>
#include <conio.h>
#include <graphics.h>
#include <dos.h>
void name()
{
  int x, i;
  x = 124;

  for (i = 20; i <= 150; i++)
  {
    if (i <= 85)
    {
      setcolor(15);
    }
    arc(0, 0, 225, 45, i - 20);
    arc(639, 0, 135, 305, i - 20);
    setcolor(4);
    delay(100);
  }

  x = getmaxx();
  setcolor(15);
  rectangle(0, 130, 20, 800);
  setfillstyle(1, 15);
  floodfill(5, 145, 15);
  rectangle(x, 130, x - 20, 800);
  floodfill(x - 4, 145, 15);
  for (i = 100; i > 20; i--)
  {
    setcolor(4);
    line(20, 126, i, 600); // \line
  }

  for (i = x - 100; i < x - 20; i++)
  {
    setcolor(4);
    line(x - 20, 126, i, 600); // /line
  }
  delay(10000);

  cleardevice();
}
void main()
{
  int gdriver = DETECT, gmode;
  initgraph(&gdriver, &gmode, "C:\\turboc3\\bgi");
  name();
  getch();
  closegraph();
}
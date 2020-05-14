#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
int x,y,i;
void angle(int p,int k)
{
  setcolor(15);
  circle(x-35,y-45,100);
  circle(x-35,y-45,101);
  circle(x-35,y-45,102);
  for(i=0;i<100;i++)
  {

   setcolor(15);
   arc(x-35,y-45,p,k,i-10);
  }
}

void a1()
{
setcolor(6);
x=319;
y=239;
setfillstyle(1,6);
rectangle(x-13,y-90,x+13,y-80);
floodfill(x-11,y-88,6);
pieslice(x-13,y-85,90,270,5);
pieslice(x+13,y-85,0,90,5);
pieslice(x+13,y-85,270,360,5);
}
void b1()
{
x=319;
y=239;
setcolor(6);
rectangle(x-13,y-90+80,x+13,y-80+80);
floodfill(x-11,y-8,6);
pieslice(x-13,y-85+80,90,270,5);
pieslice(x+13,y-85+80,0,90,5);
pieslice(x+13,y-85+80,270,360,5);
}
void a2()
{
setcolor(6);
x=319;
y=239;
rectangle(x-13,y-50,x+13,y-40);
floodfill(x-11,y-48,6);
pieslice(x-13,y-45,270,90,5);
pieslice(x+13,y-45,0,90,5);
pieslice(x+13,y-45,270,360,5);
}
void a3()
{
setcolor(6);
x=319;
y=239;
rectangle(x-27,y-78,x-17,y-52);
floodfill(x-25,y-76,6);
pieslice(x-22,y-78,0,180,5);
pieslice(x-22,y-52,180,360,5);
}
void b3()
{
x=319;
y=239;
setcolor(6);
rectangle(x-27,y-78+40,x-17,y-52+40);
floodfill(x-25,y-36,6);
pieslice(x-22,y-78+40,0,180,5);
pieslice(x-22,y-52+40,180,360,5);
}
void a4()
{
x=319;
y=239;
setcolor(6);
rectangle(x+27,y-78,x+17,y-52);
floodfill(x+25,y-76,6);
pieslice(x+22,y-78,0,180,5);
pieslice(x+22,y-52,180,360,5);
}
void b4()
{
x=319;
y=239;
setcolor(6);
rectangle(x+27,y-78+40,x+17,y-52+40);
floodfill(x+25,y-36,6);
pieslice(x+22,y-78+40,0,180,5);
pieslice(x+22,y-52+40,180,360,5);
}
void normal()
{
x=319;
y=239;
setcolor(6);
//cleardevice();
rectangle(x-13-70,y-90,x+13-70,y-80);
setfillstyle(1,6);
floodfill(x-81,y-88,6);
pieslice(x-13-70,y-85,90,270,5);
pieslice(x+13-70,y-85,0,90,5);
pieslice(x+13-70,y-85,270,360,5);
//
rectangle(x-13-70,y-90+80,x+13-70,y-80+80);
floodfill(x-81,y-8,6);
pieslice(x-13-70,y-85+80,90,270,5);
pieslice(x+13-70,y-85+80,0,90,5);
pieslice(x+13-70,y-85+80,270,360,5);     //a2 is missing//removed
//
rectangle(x-27-70,y-78,x-17-70,y-52);
floodfill(x-95,y-76,6);
pieslice(x-22-70,y-78,0,180,5);
pieslice(x-22-70,y-52,180,360,5);
//
rectangle(x-27-70,y-78+40,x-17-70,y-52+40);
floodfill(x-95,y-36,6);
pieslice(x-22-70,y-78+40,0,180,5);
pieslice(x-22-70,y-52+40,180,360,5);
//
rectangle(x+27-70,y-78,x+17-70,y-52);
floodfill(x-45,y-76,6);
pieslice(x+22-70,y-78,0,180,5);
pieslice(x+22-70,y-52,180,360,5);
//
rectangle(x+27-70,y-78+40,x+17-70,y-52+40);
floodfill(x-45,y-36,6);
pieslice(x+22-70,y-78+40,0,180,5);
pieslice(x+22-70,y-52+40,180,360,5);
}
void normal2()
{
x=319;
y=239;
setcolor(6);
//cleardevice();
rectangle(x+27-70,y-78,x+17-70,y-52);
floodfill(x-45,y-76,6);
pieslice(x+22-70,y-78,0,180,5);
pieslice(x+22-70,y-52,180,360,5);
//
rectangle(x+27-70,y-78+40,x+17-70,y-52+40);
floodfill(x-45,y-36,6);
pieslice(x+22-70,y-78+40,0,180,5);
pieslice(x+22-70,y-52+40,180,360,5);

}

void zero()
{
a1();
a3();
a4();
b1();
b3();
b4();
}
void one()
{
normal();
 a4();
 b4();
}
void two()
{
normal();
a1();
a4();
a2();
b3();
b1();
}
void three()
{
normal();
a1();
a4();
a2();
b4();
b1();
}
void four()
{
normal();
a3();
a2();
a4();
b4();
}
void five()
{
normal();
a1();
a3();
a2();
b4();
b1();
}
void six()
{
normal();
a1();
a3();
a2();
b4();
b1();
b3();
}
void seven()
{
normal();
a1();
b4();
a4();
}
void eight()
{
normal();
a1();
a2();
a3();
a4();
b1();
b3();
b4();
}
void nine()
{
normal();
a1();
a2();
a3();
a4();
b1();
b4();
}
void ten()
{
//cleardevice();
normal2();
zero();
}
void main()
{
int gdriver = DETECT,gmode;
initgraph(&gdriver,&gmode,"C:\\Turboc3\\BGI");
x=getmaxx()/2;
y=getmaxy()/2;
setbkcolor(0);
outtextxy(40,40,"PRESS ANY KEY TO START");
settextstyle(10,0,4);
outtextxy(x-199,y+59,"STOP WATCH");
normal();
zero();
getch();
normal();
zero();
delay(1000);cleardevice();
one();delay(1000);cleardevice();
two();delay(1000);cleardevice();
three();delay(1000);cleardevice();
four();delay(1000);cleardevice();
five();delay(1000);cleardevice();
six();delay(1000);cleardevice();
seven();delay(1000);cleardevice();
eight();delay(1000);cleardevice();
nine();delay(1000);cleardevice();
ten();delay(1000);cleardevice();delay(500);
normal();
zero();
getch();
}
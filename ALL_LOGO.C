#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>

void android()
{
int x,y,i;
x=getmaxx()/2;
y=getmaxy()/2;
/*
for(i=1;i<=15;i++)
{
setcolor(i+1);
circle(x,y+15,60);
setfillstyle(1,i+1);
floodfill(x+4,y+18,i+1);
setcolor(i+2);
circle(x,y+15,60);
circle(x,y+15,61);
circle(x,y+15,64);
circle(x,y+15,65);
setcolor(i);
setfillstyle(1,i);                      ////////andro body
rectangle(x-25,y,x+25,y+50);
floodfill(x-20,y+4,i);
pieslice(x,y-5,0,180,25);
line(297,203,307,213);
line(330,213,340,203);

rectangle(x-42,y+7,x-32,y+37);
floodfill(x-41,y+8,i);
rectangle(x+32,y+7,x+42,y+37);
floodfill(x+33,y+8,i);
pieslice(x-37,y+7,0,180,5);
floodfill(x-38,y+5,i);
pieslice(x+37,y+7,0,180,5);
floodfill(x+36,y+5,i);             /////////////android hands
pieslice(x-37,y+35,180,360,5);
floodfill(x-36,y+36,i);
pieslice(x+37,y+35,180,360,5);
floodfill(x+38,y+36,i);

rectangle(x-15,y+49,x-5,y+65);
floodfill(x-11,y+55,i);
rectangle(x+5,y+49,x+15,y+65);
floodfill(x+8,y+55,i);
pieslice(x-10,y+66,180,360,5);
pieslice(x+10,y+66,180,360,5);



setcolor(i/2);
circle(x-12,y-16,3);
setfillstyle(1,i/2);
floodfill(x-10,y-15,i/2);           ///////andro eyes
circle(x+12,y-16,3);
floodfill(x+13,y-15,i/2);
delay(1000);

}
delay(1000);   */
setcolor(2);
setfillstyle(1,2);                      ////////andro body
rectangle(x-25,y,x+25,y+50);
floodfill(x-20,y+4,2);
pieslice(x,y-5,0,180,25);
line(297,203,307,213);
line(330,213,340,203);

rectangle(x-42,y+7,x-32,y+37);
floodfill(x-41,y+8,2);
rectangle(x+32,y+7,x+42,y+37);
floodfill(x+33,y+8,2);
pieslice(x-37,y+7,0,180,5);
floodfill(x-38,y+5,2);
pieslice(x+37,y+7,0,180,5);
floodfill(x+36,y+5,2);             /////////////android hands
pieslice(x-37,y+35,180,360,5);
floodfill(x-36,y+36,2);
pieslice(x+37,y+35,180,360,5);
floodfill(x+38,y+36,2);

rectangle(x-15,y+49,x-5,y+65);
floodfill(x-11,y+55,2);
rectangle(x+5,y+49,x+15,y+65);
floodfill(x+8,y+55,2);
pieslice(x-10,y+66,180,360,5);
pieslice(x+10,y+66,180,360,5);

setcolor(15);
circle(x-12,y-16,3);
setfillstyle(1,15);
floodfill(x-10,y-15,15);           ///////andro eyes
circle(x+12,y-16,3);
floodfill(x+13,y-15,15);
setcolor(15);
 settextstyle(1,HORIZ_DIR,4);
 outtextxy(260,330,"android");
delay(5000);
}
void ubuntu()
{
 int x,y,t,k,i;
for(i=20;i<=35;i++)
{
setcolor(4);
arc(300,250,9,118,i+15);
setcolor(14);                              ////////circles
arc(300,250,129,239,i+15);
setcolor(4);
arc(300,250,249,359,i+15);
}
setcolor(15);
arc(300,250,9,119,50);
arc(300,250,129,239,50);
arc(300,250,249,359,50);   /////////////outer line
arc(300,250,9,119,35);
arc(300,250,129,239,35);
arc(300,250,249,359,35);
circle(245,250,13);
circle(335,205,13);
circle(339,288,13);
setcolor(4);
setfillstyle(1,4);
circle(245,250,12);
floodfill(248,253,4);
circle(335,205,12);
floodfill(338,209,4);
setcolor(14);
setfillstyle(1,14);
circle(339,288,12);
floodfill(343,293,14);
setcolor(15);
 settextstyle(1,HORIZ_DIR,4);
 outtextxy(250,330,"ubuntu");
delay(5000);
}
void windows()
{
int x,y,i;
x=getmaxx()/2;
y=getmaxy()/2;
setcolor(4);
setfillstyle(1,4);
 rectangle(x-59,y-59,x-4,y-4);
 floodfill(x-7,y-7,4);
 setcolor(2);
 setfillstyle(1,2);
 rectangle(x+4,y-59,x+59,y-4);
 floodfill(x+7,y-7,2);
 setcolor(1);
 setfillstyle(1,1);
 rectangle(x-59,y+4,x-4,y+59);
 floodfill(x-7,y+7,1);
 setcolor(14);
 setfillstyle(1,14);
 rectangle(x+4,y+4,x+59,y+59);
 floodfill(x+7,y+7,14);
 setcolor(15);
 for(i=1;i<=3;i++)
 {
    rectangle(x-59-i,y-59-i,x-4-i,y-4-i);           ///////////////1
    rectangle(x-59-i,y+4+i,x-4-i,y+59+i);
  }
  for(i=1;i<=3;i++)
 {
    rectangle(x+4+i,y-59-i,x+59+i,y-4-i);
     rectangle(x+4+i,y+4+i,x+59+i,y+59+i);
  }
  setcolor(15);
 settextstyle(7,HORIZ_DIR,4);
 outtextxy(250,330,"WINDOWS");
 delay(1000);
 }

 void main()
 {
 int gd=DETECT,gm;
 initgraph(&gd,&gm,"c:\\tc\\bgi");
android();
getch();
cleardevice();
ubuntu();
getch();
cleardevice();
windows();
getch();
 }
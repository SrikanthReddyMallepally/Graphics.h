/*******************    SMALL PROJECT( BY SRIKANTH MALLEPALLY)    ***************************
AUTHOR:SRIKANTH
PLACE:HYDERABAD
DATE:10-12-15                        ON
MODIFIED DATE:14-12-15              FLAG
					   I HOPE YOU ENJOYED IT......

	........ IN THE ASSOCIATION WITH ARGON LABS INTERNATIONAL.......
       *******************************************************************/
#include<conio.h>
#include<graphics.h>
#include<dos.h>
void blue()
   {
    setcolor(1);
    circle(361,160,9);
    setfillstyle(1,1);
    floodfill(362,163,1);
    }
void ashoka()
{
 blue();
 setcolor(0);
    line(355,153,366,166);  // \line
    line(366,154,355,167);//     /line
    line(361,151,361,169); //vertical  |
    line(352,160,369,160);//hori  --
    circle(361,160,9);
    delay(500);
}
/*    void color1()
    {
    setcolor(6);
     rectangle(300,129,425,149);        ////////////static mode
     setfillstyle(1,6);
     floodfill(301,130,6);
     delay(1000);
    }
   void color2()
   {
   setcolor(7);
     rectangle(300,150,425,170);
     setfillstyle(1,7);
     floodfill(301,151,7);
     delay(1000);
   }
   void color3()
   {
   setcolor(2);
     rectangle(300,171,425,191);
     setfillstyle(1,GREEN);
     floodfill(301,172,2);
     delay(1000);
   }*/
     void colorw()
     {
	  setcolor(7);
	  setfillstyle(1,7);
     rectangle(300,150,425,170);
     floodfill(301,151,7);
     }
    void color()
    {
     setcolor(6);
     setfillstyle(1,6);
     rectangle(50,129,175,149);
     floodfill(55,136,6);
	setcolor(2);
	setfillstyle(1,2);
	  rectangle(300,316,425,336);              ///1
	       floodfill(301,319,2);

	       setcolor(7);
	       setfillstyle(1,7);
	       rectangle(300,90,425,110);
	       floodfill(301,91,7);

	       delay(100); cleardevice();	   ////////1
     ///////////////////2///////////////////
	  setcolor(6);      //2
     setfillstyle(1,6);
     rectangle(100,129,225,149);
     floodfill(105,136,6);
	setcolor(2);
	setfillstyle(1,2);
	  rectangle(300,274,425,294);                            ///2
	     floodfill(301,276,2);

		 setcolor(7);
	  setfillstyle(1,7);
     rectangle(300,120,425,140);
     floodfill(301,124,7);
	     delay(100);   cleardevice();
     //////////////3////////////////
	  setcolor(6);
     setfillstyle(1,6);
     rectangle(150,129,275,149);
     floodfill(155,136,6);
	setcolor(2);
	setfillstyle(1,2);
      rectangle(300,243,425,263);
     floodfill(301,247,2);
     colorw();
     delay(100);   cleardevice();
//////////////////4////////////////////////
	  setcolor(6);
     setfillstyle(1,6);
     rectangle(200,129,325,149);
     floodfill(205,136,6);
	setcolor(2);
	setfillstyle(1,2);
	rectangle(300,212,425,232);
     floodfill(301,215,2);
     colorw();
     delay(100);   cleardevice();
  ///////////555//////////////////////////
     setcolor(6);
     setfillstyle(1,6);
     rectangle(250,129,375,149);
     floodfill(255,136,6);
	setcolor(2);
	setfillstyle(1,2);
	rectangle(300,181,425,201);
     floodfill(301,184,2);
     colorw();
	 delay(100);   cleardevice();
  /////////////////////6///////////////
      setcolor(6);
      setfillstyle(1,6);
     rectangle(300,129,425,149);
     setfillstyle(1,6);
     floodfill(301,130,6);
	setcolor(2);
	setfillstyle(1,2);
	rectangle(300,171,425,191);
      floodfill(301,172,2);
      colorw();
     delay(100);     //////////////////animaton termination......
    }

    void stick()
   {
   setcolor(7);
     rectangle(300,192,305,390);          //390
     setfillstyle(1,7);
     floodfill(301,193,7);
     delay(1000);
     }
   void bottom1()
    {
    setcolor(6);
     rectangle(242,391,367,411);
     setfillstyle(1,6);
     floodfill(246,393,6);
     delay(1000);
    }
    void bottom2()
   {
   setcolor(7);
     rectangle(222,412,387,432);
     setfillstyle(1,7);
     floodfill(223,413,7);
     delay(1000);
   }
   void bottom3()
   {
   setcolor(2);
     rectangle(202,433,405,453);
     setfillstyle(1,GREEN);
     floodfill(203,434,2);
     delay(1000);
   }
 void end()
 {
 int i,j,k;
 setbkcolor(BLACK);
 setcolor(YELLOW);
 settextstyle(7,HORIZ_DIR,4);
 outtextxy(33,30,"       HAPPY REPUBLIC DAY");
 delay(10000);
 cleardevice();
delay(500);
setbkcolor(BLACK);
setcolor(YELLOW);
settextstyle(7,HORIZ_DIR,4);
outtextxy(1,230,"PROJECT");
outtextxy(140,290,"BY");
outtextxy(150,350,"SRIKANTH MALLEPALLY");
delay(5000);
cleardevice();
//ending........................
setbkcolor(7);
   setcolor(6);
   settextstyle(10,0,4);
   settextjustify(1,1);
   outtextxy(160,180,"     THANK YOU  ");
   setcolor(2);
   settextstyle(10,HORIZ_DIR,1);
   outtextxy(95,280," Press any key to EXIT");
   delay(6000);
 }
 void tree()                            ////111 LINES TREE FUNCTION
 {
  setcolor(6);
 rectangle(75,410,100,460);
 setfillstyle(1,6);
 floodfill(77,415,6);
 setcolor(7);
rectangle(75,410,100,460);
 setcolor(2);
   setfillstyle(1,2);
  circle(90,200,15);   //centre
 floodfill(95,205,2);
 circle(75,220,18);//leftside
  floodfill(80,225,2);
 circle(65,240,18);
  floodfill(70,245,2);
 circle(55,260,18);
  floodfill(60,265,2);
 circle(45,280,19);
  floodfill(50,285,2);
 circle(35,300,19);
  floodfill(40,305,2);
 circle(30,315,21);
  floodfill(35,320,2);
  circle(27,340,23);  //left side
  floodfill(33,346,2);
  circle(35,370,24);
  floodfill(39,375,2);
   circle(45,390,28);
  floodfill(50,395,2);
  circle(65,400,30);
 floodfill(75,401,2);
  circle(105,220,18);      //right
  floodfill(110,225,2);
   circle(118,240,18); //right
   floodfill(119,247,2);      //right
   circle(128,260,18);
  floodfill(135,265,2);
   circle(138,280,19);
  floodfill(140,285,2);
  circle(148,300,19);
  floodfill(153,310,2);
  circle(153,315,21);
  floodfill(159,320,2);
  circle(148,340,23);
  floodfill(153,347,2);
  circle(140,370,24);
  floodfill(145,376,2);
  circle(130,390,28);
  floodfill(135,396,2);
 circle(110,400,30);
 floodfill(105,410,2);
 circle(89,313,67);   //infill tree
 floodfill(90,317,2);
 circle(90,242,15);
 floodfill(93,243,2);   //infill tree
 delay(1000);
   ///....................tree 2.................
 setcolor(6);
 rectangle(537,410,562,460);
 setfillstyle(1,6);
 floodfill(542,415,6);
 setcolor(7);
 rectangle(537,410,562,460);
   setcolor(2);
   setfillstyle(1,2);
  circle(552,200,15);   //centre
 floodfill(555,205,2);
   circle(537,220,18);//leftside
  floodfill(542,225,2);
 circle(527,240,18);
  floodfill(532,245,2);
 circle(517,260,18);
  floodfill(522,265,2);
 circle(507,280,19);
  floodfill(512,285,2);
 circle(497,300,19);
  floodfill(502,305,2);
 circle(492,315,21);
  floodfill(497,320,2);
  circle(489,340,23);
  floodfill(494,346,2);
  circle(497,370,24);
  floodfill(502,375,2);
   circle(507,390,28);
  floodfill(512,395,2);
  circle(527,400,30);
 floodfill(532,415,2); //left
   circle(567,220,18); //right
  floodfill(572,225,2);
  circle(580,240,18);
   floodfill(585,247,2);
   circle(590,260,18);
  floodfill(595,265,2);
   circle(600,280,19);
  floodfill(605,285,2);
  circle(610,300,19);
  floodfill(615,310,2);
  circle(615,315,21);          //////////        563
  floodfill(620,320,2);                  //////////     52        add
  circle(610,340,23);
  floodfill(615,347,2);
  circle(602,370,24);
  floodfill(607,376,2);
  circle(592,390,28);
  floodfill(597,396,2);
 circle(572,400,30);
 floodfill(577,415,2);   //right side
 circle(551,313,67);   //infill tree
 floodfill(556,317,2);
 circle(552,242,15);
 floodfill(557,243,2);   //infill tree
 delay(1000);
 }
 void main()
 {
   int gd=DETECT,gm;
   initgraph(&gd,&gm,"c:\\turboc3\\bgi");     //Initializing Graphics Mode
   color();
   ashoka();
   stick();
   bottom1();
   bottom2();
   bottom3();
   getch();
   tree();
   getch();
   end();
   closegraph();
  }




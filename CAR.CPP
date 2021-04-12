#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>

void main ()
{
  int gdriver=DETECT,gmode,i;
  initgraph(&gdriver,&gmode,"C:\\TC\\BGI");



  for(i=0; i<=639; i++)
  {
   circle(500, 100, 50);

  line(50+i, 300, 70+i, 300);
  arc(85+i, 300, 0, 180, 15);
  line(100+i, 300, 140+i, 300);
  arc(155+i, 300, 0, 180, 15);
  line(170+i, 300, 190+i, 300);
  line(190+i, 300, 190+i, 280);
  line(160+i, 250, 80+i, 250);
  line(160+i, 250, 190+i, 280);
  line(50+i, 280, 50+i, 300);
  line(50+i, 280, 80+i, 250);

  //car window
  line(126+i, 260, 126+i, 280);
  line(126+i, 260, 155+i, 260);
  line(126+i, 280, 175+i, 280);
  line(175+i, 280, 155+i, 260);

  line(115+i, 260, 115+i, 280);
  line(115+i, 260, 85+i, 260);
  line(115+i, 280, 65+i, 280);
  line(65+i, 280, 85+i, 260);

  circle(85+i, 300, 10);
  circle(155+i, 300, 10);

  circle(85+i, 300, 1);
  circle(155+i, 300, 1);

  //man
  circle(140+i, 267, 4);
  line(138+i, 270, 138+i, 280);
  line(145+i, 270, 160+i, 280);
  delay(5);
  cleardevice();

  //road
  line(0, 312, 639, 312);
  }
  getch();
}

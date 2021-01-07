#include<stdio.h>
#include<conio.h>
#include<graphics.h>

void main ()
{
  int gdriver=DETECT,gmode;
  initgraph(&gdriver,&gmode,"C:\\TC\\BGI");

  //car body
  line(150, 300, 70, 300);
  arc(85, 300, 0, 180, 15);

  getch();
}
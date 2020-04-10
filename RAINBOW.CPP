#include<conio.h>
#include<stdlib.h>
#include<dos.h>
#include<iostream.h>
#include<graphics.h>
#include<stdio.h>
#include<dos.h>
#include<math.h>
void main()
{
clrscr();
int gd=DETECT,gm,i,x,y;
initgraph(&gd,&gm,"c:\\TURBOC3\\BGI");
x=getmaxx()/2;
y=getmaxy()/2;
for(i=30;i<250;i++)
{
delay(100);
setcolor(i/10);
arc(x,y,0,180,i-10);
}
}
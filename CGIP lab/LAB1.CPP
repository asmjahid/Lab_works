#include<graphics.h>
#include<math.h>
#include<iostream.h>
#include<conio.h>
#include<dos.h>
void main()
{
float x,y,x1,y1,x2,y2,dx,dy,e;
int i,gd=DETECT,gm;
clrscr();
cout<<"Enter the value of x1:\t";
cin>>x1;
cout<<"Enter the value of y1\t";
cin>>y1;
cout<<"Enter the value of x2:\t";
cin>>x2;
cout<<"Enter the value of y2:\t";
cin>>y2;
initgraph(&gd,&gm,"C:/TurboC++/BGI");
dx=abs(x2-x1);
dy=abs(y2-y1);
x=x1;
y=y1;
e=2*dy-dx;
i=1;
do
{
putpixel(x,y,RED);
delay(60);
while(e>=0)
{
y=y+1;
e=e-2*dx;
}
x=x+1;
e=e+2*dy;
i=i+1;
}
while(i<=dx);
getch();
closegraph();
}

#include<stdio.h>
#include<conio.h>
#include<math.h>
double f(double x)
{
return(pow(x,2)-5*x+6);
}
int main()
{
clrscr();
double x1,x2,x3,tv;
printf("enter the value of x1,x2,&tv:\n");
scanf("%lf %lf",&x1,&x2,&tv);
printf("\n iteration x,x2 x3 f(x3)\n");
printf("------------------");
int count=1;
if((f(x1)*f(x2))<0)
{
do
{
x3=x2-f(x2)*((x1-x2)/(f(x1)-f(x2)));
printf("%d %lf %lf %lf",count,x1,x2);

x2=x3;
else
x1=x3;
printf("%lf %lf\n",x3,f(x3));
count++;
}
while(!((fabs(x1-x2)<2*tv||(f(x3)==0)));
printf("\n the root is %lf",x3);
}
getch();
}


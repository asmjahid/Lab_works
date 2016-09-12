#include<stdio.h>
#include<conio.h>
#include<math.h>
{
float a,b,c,x1,x2;
{


printf("enter the value of a:");
scanf("%f",&a);
printf("enter the value of b:");
scanf("%f",&b);
printf("enter the value of c:");
scanf("%f",&c);
x1=(-b+sqrt(b*b-4*a*c))/(2*a);

printf("%f",x1);
x2=(-b-sqrt(b*b-4*a*c))/(2*a);

printf("%f",x2);
}
getch();
}

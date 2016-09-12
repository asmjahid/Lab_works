#include<stdio.h>
#include<conio.h>
#include<math.h>
float f(float x)
{
return (x*x*x-5*x+1);
}
int main()
{
int itr=1;
float x1,x2,x3,x4,aerr;
printf("\nEnter value of x0,x1, allowed error\n");
scanf("%f %f %f", &x1,&x2, &aerr);
//x3=((x1*f(x2))-(x2*f(x1)))/(f(x2)-f(x1));
//printf("\n\nIn iteration %d,Value of x3 =\t%f",(itr+1),x3);
do
{
if (f(x1)*f(x3)<0)
x2=x3;
else
x1=x3;
x4=x3;
x3=((x1*f(x2))-(x2*f(x1)))/(f(x2)-f(x1));
itr++;
//printf("\nIn iteration %d Value of x=\t%f", itr+1,x3);
if (fabs(x4-x3)<aerr)
{
printf("\n\nAfter %d iteration,Root= %f", itr,x4);
getch();
return 0;
}
}
while (f(x3)<aerr);
printf("\n\nSolution does not converge Iteration not sufficient");
getch();
return 1;
}

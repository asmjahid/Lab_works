#include<stdio.h>
#include<math.h>

double f(double x)
{
    return(x*x-5*x+6);
}

double g(double x)
{
    return(2*x-5);
}

int main()
{
    double x1,x2,tol;

    printf("enter the value of x1&tol:\n");
    scanf("%lf %lf",&x1,&tol);

    if((f(x1)!=0)&(g(x1)!=0))
    do
    {
        x2=x1;
        x1=x1-(f(x1)/g(x1));
    }
    while(!(fabs(x1-x2))<tol);
    printf("\n the root is %lf",x2);
}

#include<stdio.h>
#include<math.h>

double f(double x)
{
    return(x*x-5*x+6);
}

double g(double x)
{
    return((x*x+6)/5);
}

int main()
{
    double x1,x2,t;

    printf("enter the value of x1,&t \n");
    scanf("%lf %lf",&x1,&t);

    do
    {
        x2=x1;
        x1=g(x1);
    }
    while(!(fabs(x1-x2))<t);
    printf("the root is %lf",x2);
}

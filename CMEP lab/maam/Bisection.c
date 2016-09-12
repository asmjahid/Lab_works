#include<stdio.h>
#include<math.h>
#include<stdlib.h>
double f(double x)
{
    return(pow(x,3)-x-1);
}
main()
{
    double x1,x2,x3,tol;
    printf("Enter the value of x1:");
    scanf("%lf",&x1);
    printf("\nEnter the value of x2:");
    scanf("%lf",&x2);
    printf("\nEnter the value of tolarence:");
    scanf("%lf",&tol);
    printf("                        ");
    int i=1;
    if((f(x1)*f(x2))<0)
        {
            do
            {
                x3=(x1+x2)/2;
                printf("\ni=%d  ,x1=%lf ,x2=%lf",i,x1,x2);
                if((f(x3)*f(x1))<0)
                x2=x3;
                else
                x1=x3;
                printf("     x3=%lf ,     f(x3)=%lf",x3,f(x3));
                i++;
            }
            while(!(((fabs(x1-x2))<tol))||((f(x3)==0)));
            printf("\n\n\nThe root is %lf",x3);
        }
}

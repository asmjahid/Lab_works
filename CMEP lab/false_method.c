#include<stdio.h>
#include<math.h>
#include<stdlib.h>
double f(double x)
{
    return(pow(x,3)-5*x-6);
}
main()
{
    double x1,x2,x0,tol;
    printf("Enter the value of x0 & x1 & tolarance:");
    scanf("%lf %lf %lf",&x0,&x1,&tol);
    printf("                        ");
    int i=1;
    if((f(x0)*f(x2))<0)
        {
            do
            {
                x2=x1-(f(x1)*(x0-x1)/(f(x0)-f(x1)));
                printf("\ni=%d  ,x0=%lf ,x1=%lf ,x2=%lf",i,x0,x1,x2,f(x2));
                if((f(x2)*f(x0))<0)
                x1=x2;
                else
                x0=x2;
               // printf("     x3=%lf ,     f(x3)=%lf",x3,f(x3));
                i++;
            }
            while(!(fabs(f(x0-x1)>tol))||((f(x2)==0)));
            printf("\n\n\nThe root is %lf",x2);
        }
}

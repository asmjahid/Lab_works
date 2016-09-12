#include<stdio.h>
main()
{
    float a,b,c;
    scanf("%f %f %f",&a,&b,&c);
    printf("SET A={(x1,%f),(x2,%f),(x3,%f)\n",a,b,c);
    if(a==1 || b==1 ||c ==1)
    {
        printf("it is normal fuzzy set");
    }
    else if (a==0 && b==0 && c==0)
    {
        printf("it is empty");
    }
    else
    {
        printf("it is neither empty nor normal");
    }
}

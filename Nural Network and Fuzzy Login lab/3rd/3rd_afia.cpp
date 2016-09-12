#include<stdio.h>
main()
{
    float x,y;
    printf("Enter the elements X & Y::\n");
    scanf("%f %f",&x,&y);
    printf("\nSet A={(X1,%f),(X2,%f)}\n\n",x,y);
    if(x==1 || y==1)
    {
        printf("the set is normal fuzzy set");

    }
    else if (x==0 && y==0)
    {
        printf("the set is empty");

    }
    else
    {
        printf("it is neither empty nor normal");
    }
}

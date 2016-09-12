#include<stdio.h>
int main()
{
    int s[10],i,n;
    float m[10];

    printf("Total element: ");
    scanf("%d",&n);
    printf("\n\nEnter membership only between 0 and 1...\n\n");

    for(i=0;i<n;i++)
    {
        printf("Element %d: ",i+1);
        scanf("%d %f",&s[i],&m[i]);
    }
    printf("\n\nThe Fuzzy Set: \n\t{");
    for(i=0;i<n;i++)
    {
        if(i==n-1)
            printf("\(%d, %.2f)",s[i],m[i]);
        else
            printf("\(%d, %.2f), ",s[i],m[i]);
    }
    printf("}\n\n");

    return 0;
}

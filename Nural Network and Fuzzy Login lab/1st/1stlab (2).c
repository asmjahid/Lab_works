#include<stdio.h>
int main()
{
    int c[10];
    int i,n;
    printf("Total element: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Element %d: ",i+1);
        scanf("%d",&c[i]);
    }
    printf("\n\nThe Crispy Set:\n\t{");
    for(i=0;i<n;i++)
    {
        if(i==n-1)
            printf("%d",c[i]);
        else
            printf("%d, ",c[i]);
    }
    printf("}\n\n");
}

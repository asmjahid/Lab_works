#include<stdio.h>
main()
{
    float a[20],b[20],c[20];
    int n,i,z;

    printf("Total elements: ");
    scanf("%d",&n);

    printf("\n\nElements for Set 1:\n");
    for(i=0; i<n; i++)
    {
        printf("Element %d: ",i+1);
        scanf("%f",&a[i]);
    }

    printf("\n\nElements for Set 2:\n");
    for(i=0; i<n; i++)
    {
        printf("Element %d: ",i+1);
        scanf("%f",&b[i]);
    }
    printf("\npls select 1 for union and 2 for intersection");
    scanf("%d",&z);
    switch(z)
    {
    case 1:
        for(i=0; i<n; i++)
        {
            if(a[i]<b[i])
                c[i]=b[i];
            else
                c[i]=a[i];
        }

        printf("\n\nUnion of A and B: \n\t\{");
        for(i=0; i<n; i++)
        {
            printf("(X%d, %.2f)",i+1,c[i]);
            if(i==n-1)
                continue;
            else
                printf(", ");
        }
        printf("}\n\n");
        break;

    case 2:

        for(i=0; i<n; i++)
        {
            if(a[i]>b[i])
                c[i]=b[i];
            else
                c[i]=a[i];
        }

        printf("\n\nIntersection of A and B: \n\t\{");
        for(i=0; i<n; i++)
        {
            printf("(%d, %.2f)",i+1,c[i]);
            if(i==n-1)
                continue;
            else
                printf(", ");
        }
        printf("}\n\n");

        return 0;
    }
}

#include<stdio.h>
main()
{
    float x[20],y[20],z[20];
    int n,i,c;

    printf("How many elements: ");
    scanf("%d",&n);

    printf("\n\nSet 1 Elements:\n");
    for(i=0; i<n; i++)
    {
        printf("Element %d: ",i+1);
        scanf("%f",&x[i]);
    }

    printf("\n\nSet 2 Elements:\n");
    for(i=0; i<n; i++)
    {
        printf("Element %d: ",i+1);
        scanf("%f",&y[i]);
    }

    printf("\nSET A={");
    for(i=0; i<n; i++)
    {

        printf("(X%d %f)}",i+1,x[i]);
    }
    printf("\nSET B={");
    for(i=0; i<n; i++)
    {

        printf("(X%d %f)}",i+1,y[i]);
    }
A:
    printf("\n\npls select 1 for union and 2 for intersection::\t");
    scanf("%d",&c);
    switch(c)
    {
    case 1:
        for(i=0; i<n; i++)
        {
            if(x[i]<y[i])
                z[i]=y[i];
            else
                z[i]=x[i];
        }

        printf("\n\nUnion of A and B: \n\t\{");
        for(i=0; i<n; i++)
        {
            printf("(X%d, %.2f)",i+1,z[i]);
            if(i==n-1)
                continue;
            else
                printf(", ");
        }
        printf("}\n\n");
        goto A;

    case 2:

        for(i=0; i<n; i++)
        {
            if(x[i]>y[i])
                z[i]=y[i];
            else
                z[i]=x[i];
        }

        printf("\n\nIntersection of A and B: \n\t\{");
        for(i=0; i<n; i++)
        {
            printf("(%d, %.2f)",i+1,z[i]);
            if(i==n-1)
                continue;
            else
                printf(", ");
        }
        printf("}\n\n");

        return 0;
    }
}

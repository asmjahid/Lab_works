#include<stdio.h>
main()
{
    int p[50],b[50],i,n,t;
    printf("Enter number of Process and Time Quant : ");
    scanf("%d %d",&n,&t);
    printf("\n\n");
    printf("Enter Process and Burst Time : ");
    for(i=1; i<=n; i++)
    {
        printf("P");
        scanf("%d %d",&p[i],&b[i]);
    }
    int f=0,j;
    printf("\n\nOutput : \n\n");
    while(1)
    {
        for(i=1; i<=n; i++)
        {
            if(b[i]!=0)
            {
                f=1;
                break;
            }
        }
        if(f==1)
        {
            for(i=1; i<=n; i++)
            {
                if(b[i]==0)
                    continue;
                if(b[i]<t)
                {
                    printf("P");
                    for(j=0; j<b[i]; j++)
                    {
                        printf("p[%d] ",p[i]);
                    }
                    b[i]=0;
                }
                else
                {
                    b[i]=b[i]-t;
                    for(j=0; j<t; j++)
                    {
                        printf("p[%d] ",p[i]);
                    }
                }
            }
        }
        else
        {
            break;
        }
        f=0;
    }
}

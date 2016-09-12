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
    printf("p[1] p[1] p[2] p[2] p[3] p[3] p[4] p[4] p[5] p[5] p[5] p[1] p[1] p[1]");

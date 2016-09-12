#include<stdio.h>
main()
{
int temp,temp1,i,j,x,bt[20],pt[20];
printf("No of process:");
scanf("%d",&x);
for(i=0;i<x;i++)
{
    scanf("%d",&bt[i]);
}
for(i=0;i<x;i++)
for(j=0;j<x;j++)
{
if(bt[i]>bt[i+1])
{
    temp=bt[i];
    bt[i]=bt[i+1];
    bt[i+1]=temp;
}
}
for(i=0;i<x;i++)
{
    printf("%d ",bt[i]);
}
}

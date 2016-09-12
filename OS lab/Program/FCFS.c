#include<stdio.h>
main()
{
int m,n,btime[20];
int x;
printf("Pls Enter the no of process :");
scanf("%d",&x);
printf("Enter the %d brust Time :",x);
for(m=0;m<x;m++)
{
    scanf("%d",&btime[m]);
}
for(m=0;m<x;m++)
for(n=0;n<btime[m];n++)
{
printf("P%d",m+1);
}
}

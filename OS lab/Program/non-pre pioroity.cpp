#include<stdio.h>
#include<conio.h>
main()
{
   int p[50],b[50],pr[50],i,j=0,n,h,t,t1,k,l,m,x,t2;
   printf("Input:\n\n");
   printf("Enter number of process:  ");
   scanf("%d", &n);
   printf("\n\nEnter Process, Burst Time and Priority : \n\n");
   for(i=0;i<n;i++)
	{printf("P");
   scanf("%d %d %d",&p[i],&b[i],&pr[i]);}
   printf("\n\nOutput : \n\n");
   for(k=n-2;k>=0;k--)
   {
    for(l=0;l<=k;l++)
     {
         if(pr[l]>pr[l+1])
      {
      t=pr[l];
      pr[l]=pr[l+1];
      pr[l+1]=t;
      t1=p[l];
      p[l]=p[l+1];
      p[l+1]=t1;

      t2=b[l];
      b[l]=b[l+1];
      b[l+1]=t2;
      }
     }
    }

    for(i=0;i<n;i++)
    {
    for(j=0;j<b[i];j++)
    {printf("p[%d] ",p[i]);}
    }
   getch();
}

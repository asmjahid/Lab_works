#include<stdio.h>
int main()
{
    int mat[10][10],mat1[10][10],mat2[10][10],mat3[10][10];
    int row,column,i,j;
    int temp,temp1;
    printf("enter how many row and colmn you want:\n \n");
    scanf("%d",&row);
    scanf("%d",&column);
    printf("enter the matrix:\n");

    for(i=0; i<row; i++)
    {
        for(j=0; j<column; j++)
        {
            scanf("%d",&mat[i][j]);
            mat1[i][j]=mat[i][j];
        }

        printf("\n");
    }

    //Print original matrics
    printf("The input matrics are:\n");
    for(i=0; i<row; i++)
    {
        for(j=0; j<column; j++)
        {
            printf("%d \t",mat[i][j]);
        }

        printf("\n");
    }



    //After sorting
    for(i=0; i<row; i++)
    {
        for(j=0; j<column; j++)
        {
            if(mat[i][j]>mat[i][j+1])
            {
                temp=mat[i][j];
                mat[i][j]=mat[i][j+1];
                mat[i][j+1]=temp;
            }
        }
        printf("\n");
    }

    printf("Sorted by row:\n");
    //store new array
    for(i=0; i<row; i++)
    {
        for(j=0; j<column; j++)
        {
            mat2[i][j]= mat[i][j] ;
        }
    }
    for(i=0; i<row; i++)
    {
        for(j=0; j<column; j++)
        {
            printf("%d \t",mat2[i][j]);
        }
        printf("\n");
    }


    //column sort
     for(i=0; i<row; i++)
    {
        for(j=0; j<column; j++)
        {
            if(mat1[i][j]>mat1[i+1][j])
            {
                temp=mat1[i][j];
                mat1[i][j]=mat1[i+1][j];
                mat1[i+1][j]=temp;
            }
        }
        printf("\n");
    }
    //store new array
    for(i=0; i<row; i++)
    {
        for(j=0; j<column; j++)
        {
            mat3[i][j]= mat1[i][j] ;
        }
    }

    printf("\n\nSorted by column:\n");
    for(i=0; i<row; i++)
    {
        for(j=0; j<column; j++)
        {
            printf("%d \t",mat3[i][j]);
        }
        printf("\n");
    }

}

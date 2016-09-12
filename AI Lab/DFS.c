#include<stdio.h>
int size;
void tree()
{
    char input ,p_check;
    while(i<size)
    {
        printf("Enter the root node:/n");
        scnaf("%c",&input);
        printf("Is this parent:(y/n)/n");
        scnaf("%c",&p_check);
        if(p_check=='y')
    }

}
main()
{
    int i,j,k;
    int size;
    int left_child[10],right_child[10],parent[10];
    print("Enter the size of:");
    scanf("%d",&size);
    print("Enter the parent:");
    for(i=0;i<size;i++)
    {
        scanf("%d",&parent[i]);
    }
    print("Enter the left child:");
    for(i=0;i<size;i++)
    {
        scanf("%d",&left_child[i]);
    }
    print("Enter the right child:");
    for(i=0;i<size;i++)
    {
        scanf("%d",&right_child[i]);
    }

}

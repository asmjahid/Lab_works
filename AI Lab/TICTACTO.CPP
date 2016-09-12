#include<stdio.h>
#include<conio.h>
int board[4][4],pos_X,pos_Y;

int check(int ch)
  {
     int i,j;
     if(ch==3)
      {
       for(i=1;i<=3;i++)
	if(board[i][1]*board[i][2]*board[i][3]==27)
	    return 1;
	else if(board[1][i]*board[2][i]*board[3][i]==27)
	    return 1;
	else if(board[1][1]*board[2][2]*board[3][3]==27)
	    return 1;
	else if(board[1][3]*board[2][2]*board[3][1]==27)
	    return 1;
	else
	    return 0;
      }
     else if(ch==5)
      {
       for(i=1;i<=3;i++)
	if(board[i][1]*board[i][2]*board[i][3]==125)
	    return 1;
	else if(board[1][i]*board[2][i]*board[3][i]==125)
	    return 1;
	else if(board[1][1]*board[2][2]*board[3][3]==125)
	    return 1;
	else if(board[1][3]*board[2][2]*board[3][1]==125)
	    return 1;
	else
	    return 0;
      }
  }
int posswin_O()
  {
     int i,j,pos=0;
     for(i=1;i<=3;i++)
	if(board[i][1]*board[i][2]*board[i][3]==50)
	    {
		if(board[i][1]==2 && i==1)
		    pos=1;
		else if(board[i][1]==2 && i==2)
		    pos=4;
		else if(board[i][1]==2 && i==3)
		    pos=7;
		else if(board[i][2]==2 && i==1)
		    pos=2;
		else if(board[i][2]==2 && i==2)
		    pos=5;
		else if(board[i][2]==2 && i==3)
		    pos=8;
		else if(board[i][3]==2 && i==1)
		    pos=3;
		else if(board[i][3]==2 && i==2)
		    pos=6;
		else if(board[i][3]==2 && i==3)
		    pos=9;
		goto exit;


	    }
     for(j=1;j<=3;j++)
	if(board[1][j]*board[2][j]*board[3][j]==50)
	    {
		if(board[1][j]==2 && j==1)
		    pos=1;
		else if(board[1][j]==2 && j==2)
		    pos=2;
		else if(board[1][j]==2 && j==3)
		    pos=3;
		else if(board[2][j]==2 && j==1)
		    pos=4;
		else if(board[2][j]==2 && j==2)
		    pos=5;
		else if(board[2][j]==2 && j==3)
		    pos=6;
		else if(board[3][j]==2 && j==1)
		    pos=7;
		else if(board[3][j]==2 && j==2)
		    pos=8;
		else if(board[3][j]==2 && j==3)
		    pos=9;

		goto exit;

	    }
     if(board[1][1]*board[2][2]*board[3][3]==50)
	  {
	      if(board[1][1]==2)
	      {
		 pos=1;
		 goto exit;
	      }
	      else if(board[2][2]==2)
	      {
		 pos=5;
		 goto exit;
	      }
	      else if(board[3][3]==2)
	      {
		 pos=9;
		 goto exit;
	      }

	  }
     if(board[1][3]*board[2][2]*board[3][1]==50)
	 {

	  if(board[1][3]==2)
	      {
		 pos=3;
		 goto exit;
	      }
	      else if(board[2][2]==2)
	      {
		 pos=5;
		 goto exit;
	      }
	      else if(board[3][1]==2)
	      {
		 pos=7;
		 goto exit;
	      }
	 }
     exit:
	 return pos;
  }

int posswin_X()
  {
     int i,j,pos=0;
     for(i=1;i<=3;i++)
	if(board[i][1]*board[i][2]*board[i][3]==18)
	    {
		if(board[i][1]==2 && i==1)
		    pos=1;
		else if(board[i][1]==2 && i==2)
		    pos=4;
		else if(board[i][1]==2 && i==3)
		    pos=7;
		else if(board[i][2]==2 && i==1)
		    pos=2;
		else if(board[i][2]==2 && i==2)
		    pos=5;
		else if(board[i][2]==2 && i==3)
		    pos=8;
		else if(board[i][3]==2 && i==1)
		    pos=3;
		else if(board[i][3]==2 && i==2)
		    pos=6;
		else if(board[i][3]==2 && i==3)
		    pos=9;
		goto exit;


	    }
     for(j=1;j<=3;j++)
	if(board[1][j]*board[2][j]*board[3][j]==18)
	    {
		if(board[1][j]==2 && j==1)
		    pos=1;
		else if(board[1][j]==2 && j==2)
		    pos=2;
		else if(board[1][j]==2 && j==3)
		    pos=3;
		else if(board[2][j]==2 && j==1)
		    pos=4;
		else if(board[2][j]==2 && j==2)
		    pos=5;
		else if(board[2][j]==2 && j==3)
		    pos=6;
		else if(board[3][j]==2 && j==1)
		    pos=7;
		else if(board[3][j]==2 && j==2)
		    pos=8;
		else if(board[3][j]==2 && j==3)
		    pos=9;

		goto exit;

	    }
     if(board[1][1]*board[2][2]*board[3][3]==18)
	  {
	      if(board[1][1]==2)
	      {
		 pos=1;
		 goto exit;
	      }
	      else if(board[2][2]==2)
	      {
		 pos=5;
		 goto exit;
	      }
	      else if(board[3][3]==2)
	      {
		 pos=9;
		 goto exit;
	      }

	  }
     if(board[1][3]*board[2][2]*board[3][1]==18)
	 {

	  if(board[1][3]==2)
	      {
		 pos=3;
		 goto exit;
	      }
	      else if(board[2][2]==2)
	      {
		 pos=5;
		 goto exit;
	      }
	      else if(board[3][1]==2)
	      {
		 pos=7;
		 goto exit;
	      }
	 }
     exit:
	 return pos;
  }


void make2(int ch)
  {
     if(board[2][2]==2)
	 board[2][2]=ch;
     else if(board[1][2]==2)
	 board[1][2]=ch;
     else if(board[2][1]==2)
	 board[2][1]=ch;
     else if(board[2][3]==2)
	 board[2][3]=ch;
     else
	 board[3][2]=ch;
  }
int go(int ch,int pos)
  {
      int flag=0;
      switch(pos)
	    {
	   case 1: {
		     if(board[1][1]!=2)
		       {
			 flag=1;
			 printf("Position is previously Occupied!!!! Plz enter position again.....");
		       }
		     else
			 board[1][1]=ch; break;
		   }
	   case 2: {
		     if(board[1][2]!=2)
		       {
			 flag=1;
			 printf("Position is previously Occupied!!!! Plz enter position again.....");
		       }
		     else
			 board[1][2]=ch; break;
		   }
	   case 3: {
		     if(board[1][3]!=2)
		       {
			 flag=1;
			 printf("Position is previously Occupied!!!! Plz enter position again.....");
		       }
		     else
			 board[1][3]=ch; break;
		   }
	   case 4: {
		     if(board[2][1]!=2)
		       {
			 flag=1;
			 printf("Position is previously Occupied!!!! Plz enter position again.....");
		       }
		     else
			 board[2][1]=ch; break;
		   }
	   case 5: {
		     if(board[2][2]!=2)
		       {
			 flag=1;
			 printf("Position is previously Occupied!!!! Plz enter position again.....");
		       }
		     else
			 board[2][2]=ch; break;
		   }
	   case 6: {
		     if(board[2][3]!=2)
		       {
			 flag=1;
			 printf("Position is previously Occupied!!!! Plz enter position again.....");
		       }
		     else
			 board[2][3]=ch; break;
		   }
	   case 7: {
		     if(board[3][1]!=2)
		       {
			 flag=1;
			 printf("Position is previously Occupied!!!! Plz enter position again.....");
		       }
		     else
			 board[3][1]=ch; break;
		   }
	   case 8: {
		     if(board[3][2]!=2)
		       {
			 flag=1;
			 printf("Position is previously Occupied!!!! Plz enter position again.....");
		       }
		     else
			 board[3][2]=ch; break;
		   }
	   case 9: {
		     if(board[3][3]!=2)
		       {
			 flag=1;
			 printf("Position is previously Occupied!!!! Plz enter position again.....");
		       }
		     else
			 board[3][3]=ch; break;
		   }
	}
      if(flag==0)
	  return 1;
      else
	  return 0;
  }
void show_board()
  {
    int i,j;
    printf("\n\nThe board is as below ::: \n\n\n\n");
    for(i=1;i<=3;i++)
     { if(i!=1)
	 printf("\n------------\n");
       for(j=1;j<=3;j++)
	 if(j!=3)
	   {
	    if(board[i][j]==2)
	      printf("   |",board[i][j]);
	    else if(board[i][j]==3)
	      printf(" X |");
	    else if(board[i][j]==5)
	      printf(" O |");
	   }
	 else
	  {
	   if(board[i][j]==2)
	      printf("   ",board[i][j]);
	   else if(board[i][j]==3)
	      printf(" X ");
	   else if(board[i][j]==5)
	      printf(" O ");
	  }
     }
  }

void play_X()
  {
    int input,i,j,flag=0;
    //Turn 1
    S1:
    printf("\n\nEnter the position that you want to take ::: ");
    scanf("%d",&input);
    if(go(3,input)==0)
       goto S1;
    show_board();
    //Turn 2
    if(board[2][2]==2)
       go(5,5);
    else
       go(5,1);
    printf("\n\nAfter turn O");
    show_board();
    //Turn 3
    S3:
    printf("\n\nEnter the position that you want to take ::: ");
    scanf("%d",&input);
    if(go(3,input)==0)
       goto S3;
    show_board();
    //Turn 4
    if(posswin_X()!=0)
       go(5,posswin_X());
    else
       make2(5);
    printf("\n\nAfter turn O");
    show_board();
    //Turn 5
    S5:
    printf("\n\nEnter the position that you want to take ::: ");
    scanf("%d",&input);
    if(go(3,input)==0)
       goto S5;
    show_board();
    if(check(3)==1)
      {
	flag=1;
	goto exit;
      }
    //Turn 6
    if(posswin_O()!=0)
      {
	 go(5,posswin_O());
	 flag=2;
	 goto exit;
      }
    else if(posswin_X()!=0)
       go(5,posswin_X());
    else
       make2(5);
    printf("\n\nAfter turn O");
    show_board();
    //Turn 7
    S7:
    printf("\n\nEnter the position that you want to take ::: ");
    scanf("%d",&input);
    if(go(3,input)==0)
       goto S7;
    show_board();
    if(check(3)==1)
      {
	flag=1;
	goto exit;
      }
    //Turn 8
    if(posswin_O()!=0)
      {
	 go(5,posswin_O());
	 flag=2;
	 goto exit;
      }
    else if(posswin_X!=0)
       go(5,posswin_X());
    else
       for(i=1;i<=3;i++)
	 for(j=1;j<=3;j++)
	    if(board[i][j]==2)
	       board[i][j]=5;
    printf("\n\nAfter turn O");
    show_board();
    //Turn 9
    S9:
    printf("\n\nEnter the position that you want to take ::: ");
    scanf("%d",&input);
    if(go(3,input)==0)
    goto S9;
    show_board();
    if(check(3)==1)
      {
	flag=1;
	goto exit;
      }
    exit:
      show_board();
      if(flag==1)
	 printf("\n\nPlayer X Win !!!!! .....");
      else if(flag==2)
	 printf("\n\nPlayer O Win !!!!!......");
      else
	 printf("\n\nThe Game is Draw.....");

  }

void play_O()
  {
    int input,i,j,flag=0;
    //Turn 1
    go(3,1);
    printf("\n\nAfter turn X");
    show_board();
    //Turn 2
    S2:
    printf("\n\nEnter the position that you want to take ::: ");
    scanf("%d",&input);
    if(go(5,input)==0)
       goto S2;
    show_board();
    //Turn 3
    if(board[3][3]==2)
       go(3,9);
    else
       go(3,5);
    printf("\n\nAfter turn X");
    show_board();

    //Turn 4
    S4:
    printf("\n\nEnter the position that you want to take ::: ");
    scanf("%d",&input);
    if(go(5,input)==0)
       goto S4;
    show_board();
    if(check(5)==1)
      {
	flag=1;
	goto exit;
      }
    //Turn 5
    if(posswin_X()!=0)
      {
	 go(3,posswin_X());
	 flag=2;
	 goto exit;
      }
    else if(posswin_O()!=0)
       go(3,posswin_O());
    else if(board[3][1]==2)
       go(3,7);
    else
       go(3,3);
    printf("\n\nAfter turn X");
    show_board();
    //Turn 6
    S6:
    printf("\n\nEnter the position that you want to take ::: ");
    scanf("%d",&input);
    if(go(5,input)==0)
       goto S6;
    show_board();
    if(check(5)==1)
      {
	flag=1;
	goto exit;
      }
    //Turn 7
    if(posswin_X()!=0)
      {
	 go(3,posswin_X());
	 flag=2;
	 goto exit;
      }
    else if(posswin_O!=0)
       go(3,posswin_O());
    else
       for(i=1;i<=3;i++)
	 for(j=1;j<=3;j++)
	    if(board[i][j]==2)
	       board[i][j]=3;
    printf("\n\nAfter turn X");
    show_board();

    //Turn 8
    S8:
    printf("\n\nEnter the position that you want to take ::: ");
    scanf("%d",&input);
    if(go(5,input)==0)
       goto S8;
    show_board();
    if(check(5)==1)
      {
	flag=1;
	goto exit;
      }
    //Turn 9
    if(posswin_X()!=0)
      {
	 go(3,posswin_X());
	 flag=2;
	 goto exit;
      }
    else if(posswin_O!=0)
       go(3,posswin_O());
    else
       for(i=1;i<=3;i++)
	 for(j=1;j<=3;j++)
	    if(board[i][j]==2)
	       board[i][j]=3;
    printf("\n\nAfter turn X");
    show_board();
    exit:
      show_board();
      if(flag==1)
	 printf("\n\nPlayer O Win !!!!! .....");
      else if(flag==2)
	 printf("\n\nPlayer X Win !!!!!......");
      else
	 printf("\n\nThe Game is Draw.....");

  }

 main()
  {

     int i,j,choice,position;
     for(i=1;i<=3;i++)
       for(j=1;j<=3;j++)
	   board[i][j]=2;
     show_board();
     player_input:
	   printf("\n\n\nFor Player X enter 3\nFor Player O enter 5 :::");
	   scanf("%d",&choice);
	   if(choice==3)
		 play_X();
	   else if(choice==5)
	       	 play_O();
	   else
	       {
		  printf("\n\n Your Choice is WRONG!!!! Plz enter again !!!!!!");
		  goto player_input;
	       }
  /*
     printf("Enter the position to take ::: ");
     scanf("%d",&position);
     go(choice,position);
     show_board();
     make2(choice);
     show_board();
     printf("\n\n\nPossibility of win X is %d",posswin_X());
  */

    }

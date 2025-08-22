/*  Program : Game.
    Programer : Jihan Patel
    Date : 22/07/25
*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int n=21,ch;
	clrscr();
	printf("You must be choose 1,2,3 & 4 matchstick.\n");
	printf("Your game starts now.\n");
	printf("How many matchstick you want to choose?\n");
	while(n<22)
	{
		if(n==1)
		{
			printf("You looses the game.");
			break;
		}
		else
		{
			printf("\n* Your turn:");
			scanf("%d",&ch);
			printf("\n* Computers turn:%d",(5-ch));
			n-=5;
			printf("\t %d matchstick remains.\n",(n));
		}
	}
	getch();
}

/*Aim: menu card
  programmer: Jihan Patel
  Date:01/08/25
*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,FA,y;
	FA=0;
	clrscr();
	printf("choose any food from the following list");
	printf("\1nburger cost 150 rupees");
	printf("\n2pizza cost 200 rupees");
	printf("\n3pasta cost 120 rupees");
	printf("\n4sandwich cost 100 rupees");
	printf("\n5french fries cost 80 rupees");
       x: printf("\nchoose a number");

	scanf("%d",&a);
	switch(a)
	{
		case 1:
			FA=FA+150;
			break;
		case 2:
			FA=FA+200;
			break;
		case 3:
			FA=FA+120;
			break;
		case 4:
			FA=FA+100;
			break;
		case 5:
			FA=FA+80;
			break;
		case 6:
			goto y;
		default:
			printf("choose item");

	}
	goto x;
	y:printf("your total bill is %d",FA);
	getch();
}
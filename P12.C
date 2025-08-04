/*Aim=book id
  Programmmer=Patel Jihan
  Date=4/8/25
 */
#include<stdio.h>
#include<conio.h>
void main()
{
	int n;
	clrscr();
	for(n=1;n<=50;n++)
	{
		printf("\nbook ID: %d",n);
		if(n%5==0)
		{
			printf("special addition");
		}
	}
	getch();
}
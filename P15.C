/*  Program : countdown timer
    Programer : Jihan Patel
	 Date : 22/07/25
*/
#include<stdio.h>
#include<conio.h>
#include<dos.h>
void main()
{
	int i,n;
	clrscr();
	printf("Your timer duretion in terms of second:");
	scanf("%d",&n);
	clrscr();
	for(i=n;i>=0;i--)
	{
		printf("%d\n",i);
		delay(1000);
		clrscr();
	}
	printf("Time Out!!");
	getch();
}
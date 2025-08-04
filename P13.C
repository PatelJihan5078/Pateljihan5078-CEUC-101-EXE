/*Aim=water level of tank
 Programmer:Patel Jihan
 date:4/8/25
*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int w;
	clrscr();
	for(w=10;w<=100;w=w+10)
	{
		printf("current water level in liters %d\n",w);
		if(w==100)
		{
			printf("tank is full");
		}
	}
	getch();
}
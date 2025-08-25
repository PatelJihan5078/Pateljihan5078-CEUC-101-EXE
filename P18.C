/*
Aim:Table
Programmer: Jihan Patel
Date: 25/07/25
*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,v,h;
	clrscr();
	printf("enter the size of table vertiacally\n");
	scanf("%d",&v);
	printf("enter the size of table horizontaly\n");
	scanf("%d",&h);
	printf("Multiplication table\n");
	for (j=1;j<=h;j++)
	{
		for(i=1;i<=v;i++)
		{
			printf("%d\t",(i*j));
		}
	}
	getch();
}


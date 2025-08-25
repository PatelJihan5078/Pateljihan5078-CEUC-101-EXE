/* Program : marathon.
   Programmer : Patel Jihan
   Date :25 /08/2025
*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int n=0;
	float d=0.0;
	clrscr();
	while(d<10)
	{
	n++;
	d+= 0.5;
	printf("minute %d: Distance covered %f\n",n,d);
	}
	printf("mrathon completed\n");
	getch();
	return 0;
	}

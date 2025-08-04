
/*AIM:to convert temperature celsius to fahrenhit
  Programmer:Patel Jihan
  Date:25/7/25
*/
#include<stdio.h>
#include<conio.h>

void main()
{
	float c,f;
	clrscr();
	printf("write temperature in celsius to convert");
	scanf("%f",&c);
	f=(c*9/5)+32;
	printf("your temperature in ferenhit is: %f",f);
	getch();
}
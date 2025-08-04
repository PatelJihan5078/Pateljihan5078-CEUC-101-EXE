/*AIM:to ensure eligibility to open saving account in bank
  Programmer:Patel Jihan
  Date:28/07/25
*/
#include<stdio.h>
void main()
{
	int age;
	clrscr();
	printf("enter your age");
	scanf("%d",&age);
	age>=18?printf("you are elgible in eligible criteria") :
	printf(" you are not in eligible criteria");
	getch();
}

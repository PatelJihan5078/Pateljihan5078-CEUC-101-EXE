/*To find the size of the datatypes
  Programmer:Parmar Divyarajsinh
  Date:21/07/2025
*/
#include<stdio.h>
#include<conio.h>
void main()
{
	char c;
	int i;
	float f;
	double d;
	clrscr();
	printf("char size is %d", sizeof(c));
	printf("\nint size of %d", sizeof(i));
	printf("\nfloat size of %d", sizeof(f));
	printf("\ndouble size of %d", sizeof(d));
	getch();
}

/*Aim=Pattern Making2
  Name: Patel Jihan
  Date: 11/09/25
*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int R,C,n;
	clrscr();
	printf("Enter the no. on row: ");
	scanf("%d",&n);
	for(R=1; R<=n; R++)
	{
		for(C=1;C<=R-1;C++)
		{
			printf(" ");
		}
		for(C=R;C<=n;C++)
		{
			if(R==1)
			printf("%d",C);
			else if(C==R)
			printf("%d",C);
			else
			printf(" ");
		}
		for(C=n+1;C<=2*n-R;C++)
		{
			if(R==1)
			printf("%d",C);
			else if(C==(2*n)-R)
			printf("%d",C);
			else
			printf(" ");
		}
		printf("\n");
	}
		getch();
}
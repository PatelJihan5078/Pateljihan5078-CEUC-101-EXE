/* Aim: Create Pattern-2
   Programmer: Jihan Patel
   Date:04/09/25
*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int n=5, i,j,k ,s;
	clrscr();
	for(i=n; i>=1; i--){
		for(s=0; s<n-i; s++) {
			printf(" "); }
		for(j=i; j>=1; j--){
			printf("%d",j);    }
		for(k=2; k<=i; k++)  {
			printf("%d",k); }
		printf("\n");
	}
	getch();
}



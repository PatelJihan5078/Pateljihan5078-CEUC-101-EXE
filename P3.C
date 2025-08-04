/*Aim:calculate the BMI
 Programmer: Parmar Divyarajsinh
 Date:21/07/2025
*/
#includ<stdio.h>
#includ<conio.h>
void main()
{
	float H,W,BMI;
	clrscr();
	printf("enter the value of H in meters");
	scanf("%f",&H);
	printf("enter the value of W in lkilogram");
	scanf("%f",&W);
	BMI=W/(H*H);
	printf("BMI is %f",BMI);
	getch();
}


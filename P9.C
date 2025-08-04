/*Aim:to check the discout is available or not
 Programmer: patel Jihan
 Date:28/07/25
 */
#include<stdio.h>
#include<conio.h>
 void main()
 {

	float amount;
	clrscr();
	printf("enter total shoping amount");
	scanf("%f",&amount);
	if(amount<1000)
       {
	printf("you will not get discount");
	printf("\nyour amount will be %f",amount);
       }
       else if(1000<amount<=5000)
       {
       printf("your amount with discount with amount is %f",amount-amount*10/100.0);
       }
       else if(amount>5000)
       {
       printf("your amount with discount with amount is %f",amount-amount*20/100.0);
       }
       getch();
 }
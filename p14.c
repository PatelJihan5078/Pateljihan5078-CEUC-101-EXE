/*Aim: To simulate ATM machine
 Programmer: Jihan Patel
 Date: 18/08/2025
*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int balance,n,amt;
	balance=5000;
	do
	{
	printf("1. To check your balnce\n2. To do transction\n3. To exit");
	printf("\nWhat you want to do");
	scanf("%d",&n);

		switch (n)
		{
		case 1:
			printf("\nYour current balance is %d",balance);
			break;
		case 2:
			printf("\nEnter the amount you want to withdraw Rs.");
			scanf("%d",&amt);
			if (amt>balance)
			{
				printf("\nInsufficient Balance");
			}
			else
			{
				balance-=amt;
				printf("\nYour balance after withdrawl is Rs.%d",balance);
			}
			break;
		case 3: printf("You Exited from the system");
			break;
		default:
			printf("Please enter a valid amount");
		}

	}while(n!=3);

    getch();

}
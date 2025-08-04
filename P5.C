/*AIM:counting of illeterate man & woman
  Programmer:patel Jihan
  date:25/07/2025
*/
#include<stdio.h>
#include<conio.h>

void main()
{
	long int lm,lw,p,w,m,l,ilm,ilw;
	float perw,lit,litm,litw;
	p=1441981744;
	perw=48.4;
	w=perw*p/100;
	m=p-w;
	lit=85.95;
	l=p*lit/100;
	litm=80.95;
	lm=m*litm /100 ;
	litw=62.84;
	lw=w*litw/100;
	ilm=m-lm;
	ilw=w-lw;
	clrscr();
	printf("the total no.of illiterate man is: %ld\n",ilm);
	printf("the total no.of illiterate women is: %ld\n",ilw);
	printf("the total no.of literate men is: %ld\n",lm);
	printf("the total no.of literate women is: %ld\n",lw);
	printf("the total no of man: %ld\n",m);
	printf("the total no of women: %ld\n",w);
	printf("the total litterate people: %ld\n",l);
	getch();
}
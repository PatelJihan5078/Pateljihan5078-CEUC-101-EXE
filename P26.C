#include<stdio.h>
#include<math.h>
void inputs(double a,double b,double c);
int validation(double a,double b, double c);
double calculation(double a,double b, double c);
void input(double *a,double *b,double *c)
{

    printf("Enter the lengths of traingle: ");
    scanf("%lf %lf %lf",a,b,c);

}
int validation(double a,double b,double c)
{
 if(a<=0 || b<=0 || c<=0)
 {
     return 0;
 }
 if((a+b>c)&&(b+c>a) && (a+c>b))
    return 1;
 else{
        printf("This is not valid length for traingle");
    return 0;
 }
}
double calculation(double a,double b, double c)
{
  double s=(a+b+c)/2;
  double area = sqrt(s*(s-a)*(s-b)*(s-c));
}
int main()
{
    double a,b,c;
    input(&a,&b,&c);
    if(validation(a,b,c)){
        double area = calculation(a,b,c);
        printf("Valid Traingle : Yes\n %lf",area);
    }else{
    printf("THis is not valid traingle: ");
    }

}

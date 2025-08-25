/*
Aim:find BMI
Programmer: Patel jihan 
Date: 

*/
#include <stdio.h>
#include <conio.h>

int main() {
    float w, h, bmi;

    clrscr();

    printf("Enter weight (kg): ");
    scanf("%f", &w);

    printf("Enter height (meters): ");
    scanf("%f", &h);

    bmi = w / (h * h);

    printf("\n--- BMI Result ---\n");
    printf("Weight: %.2f kg\n", w);
    printf("Height: %.2f m\n", h);
    printf("BMI: %.2f\n", bmi);

    if(bmi < 18.5)
        printf("Category: Underweight\n");
    else if(bmi >= 18.5 && bmi < 24.9)
        printf("Category: Normal weight\n");
    else if(bmi >= 25 && bmi < 29.9)
        printf("Category: Overweight\n");
    else
        printf("Category: Obese\n");

    getch();
    return 0;
}
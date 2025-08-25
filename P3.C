#include <stdio.h>
#include <conio.h>

int main() {
    float weight, height, bmi;

    clrscr();

    printf("Enter weight (kg): ");
    scanf("%f", &weight);

    printf("Enter height (meters): ");
    scanf("%f", &height);

    bmi = weight / (height * height);

    printf("\n--- BMI Result ---\n");
    printf("Weight: %.2f kg\n", weight);
    printf("Height: %.2f m\n", height);
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

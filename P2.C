/*
Aim: find parameter and area
Programmer: Patel jihan
Date: */




#include <stdio.h>
#include <conio.h>

int main() {
    float l, b, a, p;

    clrscr();

    printf("Enter length of park (in meters): ");
    scanf("%f", &l);

    printf("Enter breadth of park (in meters): ");
    scanf("%f", &b);

    a = l * b;
    p = 2 * (l + b);

    printf("\n--- Park Details ---\n");
    printf("Length: %.2f m\n", l);
    printf("Breadth: %.2f m\n", b);
    printf("Area: %.2f sq.m\n", a);
    printf("Perimeter: %.2f m\n", p);

    getch(); 
}

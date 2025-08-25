#include <stdio.h>
#include <conio.h>

int main() {
    float length, breadth, area, perimeter;

    clrscr();

    printf("Enter length of park (in meters): ");
    scanf("%f", &length);

    printf("Enter breadth of park (in meters): ");
    scanf("%f", &breadth);

    area = length * breadth;
    perimeter = 2 * (length + breadth);

    printf("\n--- Park Details ---\n");
    printf("Length: %.2f m\n", length);
    printf("Breadth: %.2f m\n", breadth);
    printf("Area: %.2f sq.m\n", area);
    printf("Perimeter: %.2f m\n", perimeter);

    getch(); 
}

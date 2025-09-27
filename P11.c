/* Aim: To find grade by marks
  Programmer: Jihan Patel
  Date: 27/08/2025
*/

#include <stdio.h>

int main() {
    int marks;
    printf("Enter student's marks (0-100): ");
    scanf("%d", &marks);

    // Input validation
    if (marks < 0 || marks > 100) {
        printf("Invalid input\n");
    } else {
        if (marks >= 90)
            printf("Grade: A\n");
        else if (marks >= 80)
            printf("Grade: B\n");
        else if (marks >= 70)
            printf("Grade: C\n");
        else if (marks >= 60)
            printf("Grade: D\n");
        else
            printf("Grade: F\n");
    }

    return 0;
}

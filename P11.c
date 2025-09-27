/* Aim: To find grade by marks
  Programmer: Jihan Patel
  Date: 27/08/2025
*/

#include <stdio.h>

int main() {
    int marks;
    char grade;

    printf("Enter student's marks (0-100): ");
    scanf("%d", &marks);

    
    if (marks < 0 || marks > 100) {
        printf("Invalid input\n");
    } else {
        if (marks >= 90)
            grade = 'A';
        else if (marks >= 80)
            grade = 'B';
        else if (marks >= 70)
            grade = 'C';
        else if (marks >= 60)
            grade = 'D';
        else
            grade = 'F';

        printf("Grade: %c\n", grade);
    }

    return 0;
}

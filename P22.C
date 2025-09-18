/*
Aim: Booking seats in a cinema hall
Name: Jihan Patel
Date: 18/09/2025
*/

#include <stdio.h>
int main() {
    int seat[5][10] = {0}; 
    int r, c, i, n, a, b;

    printf("Enter the number of reserved seats: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        printf("Enter row and seat number for reserved seat %d (e.g., 2 5): ", i);
        scanf("%d %d", &a, &b);

        if(a < 1 || a > 5 || b < 1 || b > 10) {
            printf("Invalid seat! Try again.\n");
            i--; 
        }
        else {
            seat[a-1][b-1] = 1; 
        }
    }

    printf("\nSeating chart:\n");
    for(r = 0; r < 5; r++) {
        printf("Row %d : ", r+1);
        for(c = 0; c < 10; c++) {
            printf("%d ", seat[r][c]); 
        }
        printf("\n");
    }

    return 0;
}

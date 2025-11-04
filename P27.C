/* AIm: Make saving in fibonacci series
   Programmer: Jihan Patel
   Date: 4/11/2025
*/
#include <stdio.h>

int main()
{
    int n, i;
    int first = 1, second = 1, next;
    printf("Enter the number of months: ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("Number of months must be positive.\n");
        return 0;
    }
   printf("\nSavings Growth Over %d Months:\n", n);


    for (i = 1; i <= n; i++) {
        if (i == 1) {
            printf("Month %d: %d\n", i, first);
        } else if (i == 2) {
            printf("Month %d: %d\n", i, second);
        } else {
            next = first + second;
            first = second;
            second = next;
            printf("Month %d: %d\n", i, next);
        }
    }

    return 0;
}

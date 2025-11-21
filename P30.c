//Aim: To sort a list of item prices in ascending order using dynamic memory allocation.
//Programmer: Jihan Patel
//Date:13/11/25
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    float *prices, temp;
     printf( "Jihan Patel\n25CE079\n\n");
    
     printf("Enter number of items: ");
    if (scanf("%d", &n) != 1 || n < 0) {
        printf("Error: Invalid number of items.\n");
        return 0;
    }

    if (n == 0) {
        printf("Error: No items to sort.\n");
        return 0;
    }

    
    prices = (float*) malloc(n * sizeof(float));
    if (prices == NULL) {
        printf("Memory allocation failed.\n");
        return 0;
    }

    printf("Enter %d prices:\n", n);
    for (int i = 0; i < n; i++) {
        if (scanf("%f", (prices + i)) != 1) {
            printf("Error: Invalid input for price. Please enter numeric values only.\n");
            free(prices);
            return 0;
        }

        if (*(prices + i) < 0) {
            printf("Error: Negative prices are not allowed.\n");
            free(prices);
            return 0;
        }
    }
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (*(prices + j) > *(prices + j + 1)) {
                temp = *(prices + j);
                *(prices + j) = *(prices + j + 1);
                *(prices + j + 1) = temp;
            }
        }
    }

    printf("Sorted Prices: ");
    for (int i = 0; i < n; i++) {
        printf("%.2f", *(prices + i));
        if (i != n - 1) printf(", ");
    }
    printf("\n");

    free(prices);
    return 0;
}
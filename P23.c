#include <stdio.h>

int main() {
    int n, i;
    printf("Jihan Patel\n25CE079\n\n");
    printf("Enter number of days: ");
    scanf("%d", &n);

    int prices[n];
    printf("Enter fruit prices for each day:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &prices[i]);
    }

    int minPrice = prices[0];
    int maxProfit = 0;

    for(i = 1; i < n; i++) {
        if(prices[i] < minPrice) {
            minPrice = prices[i];
        }
        else {
            int profit = prices[i] - minPrice;
            if(profit > maxProfit) {
                maxProfit = profit;
            }
        }
    }

    printf("Maximum Profit: %d\n", maxProfit);

    return 0;
}

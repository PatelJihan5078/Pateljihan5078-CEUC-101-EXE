/*Aim:to count positive, negative, even, and odd numbers
  Name: Jihan Patel
  Date: 17/09/2025
*/
#include <stdio.h> 

int main() {
    int num[25];       
    int i;                    
    int positive = 0, negative = 0;
    int even = 0, odd = 0;          

    printf("Enter 25 integers:\n");
    for(i = 0; i < 25; i++) {
        scanf("%d", &num[i]); 
        if(num[i] > 0) {
            positive++;
        } else if(num[i] < 0) {
            negative++;
        }

        if(num[i] % 2 == 0) {
            even++;
        } else {
            odd++;
        }
    }

    printf("Total Positive Numbers: %d\n", positive);
    printf("Total Negative Numbers: %d\n", negative);
    printf("Total Even Numbers: %d\n", even);
    printf("Total Odd Numbers: %d\n", odd);

    return 0;
}

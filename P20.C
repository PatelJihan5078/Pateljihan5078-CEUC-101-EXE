/*Aim: find the missing id
  Name:Jihan Patel
  Date: 17/09/2025
*/
#include <stdio.h>

int main() {
    int N, i, id;

    printf("Enter total participants (N): ");
    scanf("%d", &N);

    int flag[N+1];  
    for(i = 1; i <= N; i++) {
        flag[i] = 0;  
    }

    printf("Enter %d participant who attended:\n", N-1);
    for(i = 1; i <= N-1; i++) {
        scanf("%d", &id);
        flag[id] = 1; 
    }

    for(i = 1; i <= N; i++) {
        if(flag[i] == 0) {
            printf("Missing Participant %d\n", i);
            break;
        }
    }

    return 0;
}

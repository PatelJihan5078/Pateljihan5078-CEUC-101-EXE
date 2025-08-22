/* Program : GAME ON.
   Programmer : Patel Jihan
   Date : 18/08/2025
*/
#include <stdio.h>
#include <stdlib.h>
#include <dos.h>   // For delay() in Turbo C

int main() {
    int matchsticks = 21;
    int player, computer;

    printf("Welcome to the 21 Matchstick Game!\n");
    printf("Rules:\n- There are 21 matchsticks.\n- You can pick 1 to 4 matchsticks on your turn.\n");
    printf("- Whoever picks the last matchstick loses.\n\n");

    while (matchsticks > 1) {
        printf("Matchsticks remaining: %d\n", matchsticks);
        printf("Your turn (pick 1 to 4 matchsticks): ");
        scanf("%d", &player);

        // Validate input
        if (player < 1 || player > 4) {
            printf("Invalid move! You must pick between 1 and 4 matchsticks.\n");
            continue;
        }

        matchsticks -= player;

        if (matchsticks <= 1) {
            printf("Only %d matchstick left.\n", matchsticks);
            printf("You picked the last matchstick. You lose!\n");
            break;
        }

        // Computer's move: make total moves = 5
        computer = 5 - player;
        printf("Computer picks %d matchstick(s).\n", computer);
        delay(1000); // Wait 1 second for effect

        matchsticks -= computer;

        if (matchsticks <= 1) {
            printf("Only %d matchstick left.\n", matchsticks);
            printf("Computer picked the last matchstick. You win!\n");
            break;
        }

        printf("\n");
    }

    printf("Game Over.\n");
    return 0;
}

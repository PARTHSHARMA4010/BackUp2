#include <stdio.h>

int main() {
    int num, a;
    int matchsticks = 21;


    while (1) {
        printf("Your turn - Pick 1, 2, 3, or 4 matchsticks: ");
        scanf("%d", &a);

        if (a < 1 || a > 4 || a > matchsticks) {
            printf("Invalid input. Please pick 1, 2, 3, or 4 matchsticks.\n");
            continue;
        }

        matchsticks -= a;

        if (matchsticks == 1) {
            printf("Sorry, you picked the last matchstick. Computer wins!\n");
            break;
        }

        int comp = 5 - a;
        printf("Computer's turn - Picks %d matchsticks.\n", comp);
        matchsticks -= comp;

        if (matchsticks == 1) {
            printf("Congratulations! Computer picked the last matchstick. You lose!\n");
            break;
        }
    }

    return 0;
}

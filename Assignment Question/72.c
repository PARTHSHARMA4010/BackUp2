#include <stdio.h>

// Function to print the diamond pattern
void printDiamond(int n) {
    // Upper part of the diamond
    for (int i = 1; i <= (n+1)/2; i++) {
        // Print spaces
        for (int space = 1; space <= n - i; space++)
            printf(" ");

        // Print '*' characters
        for (int j = 1; j <= 2*i - 1; j++)
            printf("*");

        printf("\n");
    }

    // Lower part of the diamond for even numbers
  
        for (int i = n; i >= (n-1)/2; i--) {
            // Print spaces
            for (int space = 1; space <= n - i; space++)
                printf(" ");

            // Print '*' characters
            for (int j = 1; j <= 2 * i - 1; j++)
                printf("*");

            printf("\n");
        }
    }


int main() {
    int input;

    // Get user input
    printf("Enter a number: ");
    scanf("%d", &input);
    printDiamond(input);

    return 0;
}

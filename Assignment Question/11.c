// #include <stdio.h>

// int main() {
//     // Declare variables
//     int number, firstDigit, lastDigit, sum;

//     // Input a number from the user
//     printf("Enter a positive integer: ");
//     scanf("%d", &number);

//     // Check if the input is a positive integer
//     if (number <= 0) {
//         printf("Invalid input. Please enter a positive integer.\n");
//         return 1; // Return an error code
//     }

//     // Extract the last digit
//     lastDigit = number % 10;

//     // Determine the number of digits in the input
//     int temp = number;
//     int digitCount = 0;

//     while (temp > 0) {
//         temp /= 10;
//         digitCount++;
//     }

//     // Extract the first digit
//     firstDigit = number / (int)pow(10, digitCount - 1);

//     // Calculate the sum of the first and last digits
//     sum = firstDigit + lastDigit;

//     // Display the result
//     printf("Sum of the first and last digits: %d\n", sum);

//     return 0;
// }





#include <stdio.h>

int main() {
    // Declare variables
    int number, firstDigit, lastDigit, sum;

    // Input a number from the user
    printf("Enter a positive integer: ");
    scanf("%d", &number);

    // Check if the input is a positive integer
    if (number <= 0) {
        printf("Invalid input. Please enter a positive integer.\n");
        return 1; // Return an error code
    }

    // Extract the last digit
    lastDigit = number % 10;

    // Determine the number of digits in the input
    int temp = number;
    int digitCount = 0;

    while (temp >9) {
        temp /= 10;
    }

    firstDigit=temp;

    sum=firstDigit+lastDigit;
    // Display the result
    printf("Sum of the first and last digits: %d\n", sum);

    return 0;
}

#include <stdio.h>

void printNumberInWords(int num);

int main() {
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num < 0) 
        printf("Please enter a positive integer.\n");

    printNumberInWords(num);

    return 0; // Exit successfully
}

void printNumberInWords(int num) {
    if (num == 0) {
        printf("Zero\n");
        return;
    }

    // Arrays to store English words
    const char *below_20[] = {"", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine",
                              "Ten", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"};
    const char *tens[] = {"", "", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};

    // Function to print one to ninety-nine
    void printOneTo99(int n)
     {
        if (n < 20)
            printf("%s ", below_20[n]);
        else {
            printf("%s", tens[n/10]);
            if (n % 10)
                printf(" %s", below_20[n % 10]);
        }
    }

    // Function to print one to nine hundred and ninety-nine
    void printOneTo999(int n) {
        if (n >= 100) {
            printf("%s Hundred ", below_20[n / 100]);
            n %= 100;
        }
        printOneTo99(n);
    }

    // Print the number in words
    if (num >= 1 && num <= 999) {
        printOneTo999(num);
        printf("\n");
    } else {
        printf("Please enter a number between 1 and 999.\n");
    }
}

#include <stdio.h>

int main()
{
    int parth;
    printf("Enter the year: ");
    scanf("%i", &parth);

    if (parth % 4 == 0)
        printf("%d is a leap year", parth);
    else
        printf("%d is not a leap year", parth);
    printf("\n");
}
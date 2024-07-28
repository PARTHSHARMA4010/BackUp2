#include <stdio.h>

int main() {

    float basic, dear, house, gross;

    printf("Enter Ramesh's basic salary:\n ");
    scanf("%f", &basic);

    dear = 0.4 * basic;
    house = 0.2 * basic;

    gross = basic + dear + house;
    printf("Ramesh's Gross Salary: %f", gross);

    return 0;
}
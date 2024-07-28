#include <stdio.h>

int main() {
    int order, stock,credit;

    printf("Enter order quantity: ");
    scanf("%d", &order);

    printf("Enter items in stock: ");
    scanf("%d", &stock);

    printf("Does he has OK credit? (1 for Yes, 0 for No) ");
    scanf("%d", &credit);

    if (order <= stock && credit == 1) 
        printf("Supply order.\n");
     else if (credit == 0) 
        printf("Do not supply. Send an intimation.\n");
     else if (order > stock && credit == 1) 
        printf("Supply what is in stock and intimate the customer that the balance will be shipped.\n");

    return 0;
}

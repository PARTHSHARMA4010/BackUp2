#include <stdio.h>
int main()
{
    int marks[10];

    printf("Enter marks:\n");
    for (int i = 0; i < 10; i++)
    {
        printf("Enter marks for student %d: ", i + 1);
        scanf("%d", &marks[i]);
    }
    float sum = 0;
    for (int i = 0; i < 10; i++)
    {
        sum += marks[i];
    }
    float avg = sum / 10;
    printf("Average marks: %f", avg);
    return 0;
}

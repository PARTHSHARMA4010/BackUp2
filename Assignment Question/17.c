#include<stdio.h>
int main()
{
    int a = 10;
    int b = 20;
    printf("Original Numbers : a = %d, b = %d\n", a, b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("After interchanging: a = %d, b = %d\n", a, b);
    return 0;
}

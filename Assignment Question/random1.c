#include<stdio.h>

int main() {
    int num, base;
    scanf("%d%d", &num, &base);

    int temp[100];
    int idx = 0;

    while (num >= base) {
        if ((num % base) < 10) {
            temp[idx++] = num % base;
        } else {
            temp[idx++] = (num % base) - 10 + 'A';
        }
        num /= base;
    }

    temp[idx++] = num;

    printf("Converted Number: ");
    for (int i = idx - 1; i >= 0; i--) {
        if (temp[i] < 10) {
            printf("%d", temp[i]);
        } else {
            printf("%c", temp[i] + 'A');
        }
    }

    printf("\n");

    return 0;
}

#include <stdio.h>

void printPascalsTriangle(int n) {
    int coef = 1;

    for (int i = 0; i < n; i++) {
        for (int space = 1; space <= n - i; space++)
            printf(" ");
        for (int j = 0; j <= i; j++) {
            if (j == 0 || i == 0)
                coef = 1;
            else
                coef = coef * (i - j + 1) / j;
            printf("%d ", coef);
        }

        printf("\n");
    }
}

int main() {
    int numRows ;
    scanf("%d",&numRows);

    printPascalsTriangle(numRows);

    return 0;
}

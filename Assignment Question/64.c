#include <stdio.h>

int main()
{
    int n;
    printf("Number: ");
    scanf("%d", &n);
    int parth[n];
    int rev[n];
    for (int i = 0 ; i < n ; i++)
    {
        scanf("%d", &parth[i]);
    }

    

    for (int i = 0 ; i < n ; i++){
        rev[i] = parth[n - i - 1];
    }

    for (int i = 0 ; i < n ; i++){
        printf("%d ", rev[i]);
    }
    printf("\n");
}



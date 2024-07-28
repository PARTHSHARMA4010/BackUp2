#include<stdio.h>
int main()
{
    int n;
    printf("Enter the value of n");
    scanf("%d",&n);
    for(int i = 0; i<n; i++){
        if(i<(n+1)/2){
        for(int j=0; j<=i;j++){
            printf("*");
        }
        }
        else{
            for(int p=0;p<n-i;p++){
                printf("*");
            }
        }
        printf("\n");
    }
    return 0;
}
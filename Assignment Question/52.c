#include<stdio.h>
int main()
{
    int num;
    scanf("%d",&num);
    int sum = 1;
    for(int i=1; i<=num;i++){
        sum = sum*i;
    }
    printf("%d",sum);
    return 0;
}
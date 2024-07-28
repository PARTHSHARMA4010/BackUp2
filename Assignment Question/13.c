#include<stdio.h>
int main()
{
    int amt;
    printf("Enter amount\n");
    scanf("%d",&amt);
    int a,b,c;
    a=amt/100;
    int temp = amt%100;
    b=temp/50;
    int temp_2 = amt%50;
    c = temp_2/10;
    printf("100 currency notes = %d\n",a);
    printf("50 currency notes = %d\n",b);
    printf("10 currency notes = %d\n",c);
    return 0;
}
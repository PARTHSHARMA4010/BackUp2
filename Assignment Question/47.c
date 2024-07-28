#include<stdio.h>
int main()
{
    int year;
    printf("Enter the Year\n");
    scanf("%d",&year);
    if(year%100!=0 && year%4==0 || year%400==0  )
    printf("Leap year");
    else
     printf("Not a Leap year");
    return 0;
}
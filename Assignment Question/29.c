#include<stdio.h>
int main()
{
    int a,b,c;
    int age = a;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    if (age>b)
    age=b;
    if (age>c);
    age=c;
    if(age>b)
    age=b;

    if (age==a)
    printf("Ram is youngest\n");
if (age==b)
    printf("rohan is youngest\n");
if (age==c)
    printf("rohit is youngest\n");

    printf("His age is %d", age);
    return 0;
}
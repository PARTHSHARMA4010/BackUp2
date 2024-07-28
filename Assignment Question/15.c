#include<stdio.h>
#include<math.h>
int main()
{
    int a,temp;
    printf("Enter the number\n");
    scanf("%d",&a);
    int ans=0,sum=0;
    while(a!=0){
        if(a%10==9)
        temp = 0;
        else
        temp = (a%10)+1;
        ans=ans*10+temp;
        a=a/10;
    }
     while(ans!=0){
        sum=sum*10+ans%10;
        ans=ans/10;
     }
    printf("Desired number is %d",sum);
    return 0;
}
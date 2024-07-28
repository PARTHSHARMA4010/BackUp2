#include<stdio.h>
int main()
{
    int i,j;
    scanf("%d%d",&i,&j);
    if(i%j==0)
        printf("%d",i);
    
    else{
        while(i%j!=0){
        i++;
        if(i%j==0)
             printf("%d",i);
      }
    }
    return 0;
}
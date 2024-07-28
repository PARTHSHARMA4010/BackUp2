#include<stdio.h>
int main()
{   
    printf("1\n");
    int a,b,c,d;
    for(int i=1; i<501; i++){
        if(i>10 && i<99)
        {
            a = i%10;
            b = i/10;
            if((a*a*a)+(b*b*b)==i)
            printf("%d\n",i);
        }
        if(i>99){
            a = i%10;
            b = i/10;
            c = b%10;
            d = b/10;
            if((a*a*a)+(c*c*c)+(d*d*d)==i)
             printf("%d\n",i);

        }
    }
    return 0;
}
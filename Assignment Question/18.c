#include<stdio.h>

int d_i_m(int m){
    if(m==2){
        return 28;
    }
    else if(m<=7){
        if(m%2==1){
            return 31;
        }
        else{
            return 30;
        }
    }
    else{
        if(m%2==1){
            return 30;
        }
        else{
            return 31;
        }
    }

}
int main(){
    printf("Enetr date in dd mm yy formate");
    int sd,sm,sy,ed,em,ey;
    scanf("%d %d %d",&sd,&sm,&sy);
    scanf("%d %d %d",&ed,&em,&ey);

    if(sy==ey){

        int days=0;
        for(int i=sm;i<em;i++){
            days+=d_i_m(i);
        }

        days-=sd;
        days+=ed;
        if(sm<=2 && em>2){
            if(sy%4==0){
                days++;
            }
        }
        printf("%d",days);
    }

    else{
        int days=0;
        for(int i=sy;i<ey;i++){
            if(i%4==0){
                days+=366;
            }
            else{
                days+=365;
            }
        }


        int rd=0;
        for(int i=1;i<sm;i++){
            rd+=d_i_m(i);
        }

        if(sm<=2 && em>2){
            if(sy%4==0){
                rd++;
            }
        }
        days-=rd;
        days-=sd;
        
        int ad=0;
        for(int i=1;i<em;i++){
            ed+=d_i_m(i);
        }

        if(em>2){
            if(ey%4==0){
                ad++;
            }
        }
        days+=ad+ed;
        printf("%d",days);
    }
    
}
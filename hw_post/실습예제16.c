#include <stdio.h>
#include <math.h>

int main(){
    int meter = 0;
    scanf("%d",&meter);
    if(meter <= 1600){
        printf("요금 : 4800");
    }
    else{
        int add_meter = meter-1600;
        int add_fee = add_meter / 131; 
        if(add_meter/131==0){
             printf("요금: %d", 4800+(add_fee*100));
        }
        else{
            printf("요금 %d",4800+100+(add_fee*100));
        }
    }
}

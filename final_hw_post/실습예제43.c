#include <stdio.h>

int tmp = 0; 


int soinsu(int a){
    int giho = 0;
    for(int i=2; i<=a; i++){
        int cnt = 0;
        while(a%i==0){
            a = a / i;
            cnt++;
        }  
        if(cnt>0){
            if(giho == 1){
                printf("X ");
            }
            printf("%d^%d ",i,cnt);
            giho = 1;
        }
    }
    return 0;
}


int main(){
    int num=0;
    scanf("%d",&num);
    soinsu(num);

}
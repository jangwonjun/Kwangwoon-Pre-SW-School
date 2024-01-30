#include <stdio.h>

int tmp = 0; 

int soinsu(int a){
    for(int i=2; i<a*a; i++){
        if(a%i==0){
            tmp++;
        }
        
    }
    if(tmp<=2){
        printf("소수에요.");
    }
}

2,3,5,11,13,
int main(){
    int num=0;
    scanf("%d",&num);
    soinsu(num);

}
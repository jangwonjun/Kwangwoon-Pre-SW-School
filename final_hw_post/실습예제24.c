#include <stdio.h>

/*코드 수정됨 : Bool을 사용하지 않고, return 0과 return 1을 이용해서 코드를 정리함.*/
int prime_num(int num){

    for (int i =2; i*i <= num; ++i){
        if(num%i==0){
            return 0;
        }   
    }
    return 1;
    
}

int main(){

    for(int i = 2; i<=50; ++i){
            if(prime_num(i)){
                printf("%d ",i);
            }
    }
}

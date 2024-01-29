#include <stdio.h>
#include <stdbool.h>

bool prime_num(int num){

    for (int i =2; i*i <= num; ++i){
        if(num%i==0){
            return false;
        }
        return true;
    }
}

int main(){

    for(int i = 2; i<=50; ++i){
            if(prime_num(i)){
                printf("%d ",i);
            }
    }
}

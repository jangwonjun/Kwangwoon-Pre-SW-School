#include <stdio.h>

int num1 = 0;


int pibo(int num){
    int sum,pre,cnt = 0;
    int next = 1;
    sum = num;
    
    if(num==0){
        return 0;
    }

    else if(num==1){
        return 1;
    }

    return pibo(num-1) + pibo(num-2);
}

int main(){
    scanf("%d",&num1);
    for(int i = 0; i<=num1; i++){
        printf("%d ",pibo(i));
    }
}
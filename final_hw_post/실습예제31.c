#include <stdio.h>

int main(){
    int arr[5] = {0,};
    int sum = 5; 

    for(int i = 0; i<5 ; i++){
        arr[i] = sum;
        sum += 10;
    }

    for(int i = 0; i<5; i++){
        printf("%d ",arr[i]);
    }
}


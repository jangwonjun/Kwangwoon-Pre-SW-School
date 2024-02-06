#include <stdio.h>

int sum = 0;

int add_arr(int *arr){
    for(int i = 0; i<5; i++){
        sum = sum + *(arr+i);
    }
    return sum;
}

int main(){
    int a[5];
    int *arr;

    arr = a;

    for(int i=0; i<5; i++){
        scanf("%d",&a[i]);
    }
    int sum = add_arr(arr);
    printf("배열 내의 숫자 합 %d",sum);
}
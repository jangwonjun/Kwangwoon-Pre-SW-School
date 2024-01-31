#include <stdio.h>

void print_arr(int *arr){
    printf("함수 내에서의 출력");
    for(int i = 0; i<10; i++){
        printf("%d ",*(arr+i));
    }
}

int main(){
    int a[10];
    int *arr;

    arr = a;

    for(int i = 0; i<10; i++){
        scanf("%d",&a[i]);
    }
    print_arr(arr);
}
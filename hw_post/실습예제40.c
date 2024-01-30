#include <stdio.h>

int main(){
    int num1,num2=0;
    printf("사용자에게 좌표 입력받기");
    int arr[2][4];
    int *cursor; /*2차원 포인터 선언*/

    scanf("%d",&num1);
    scanf("%d",&num2);

    cursor = arr;

    for(int i = 0; i<4; i++){
        *(cursor+i) = num1;
        *(cursor+i)+1 = num2;
    }

    
}
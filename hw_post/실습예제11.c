#include <stdio.h>

int main(){
    int num1, num2, pre1 = 0;
    printf("숫자 1 : ");
    scanf("%d", &num1);
    printf("숫자 2 : ");
    scanf("%d", &num2);
    printf("예상 결과 : ");
    scanf("%d", &pre1);

    if(num1+num2 == pre1){
        printf("정답입니다!");
    }
    else{
        printf("오답입니다!");
    }
}
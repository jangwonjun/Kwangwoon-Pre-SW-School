#include <stdio.h>

int main(){
    int num1 = 0; 
    printf("숫자 입력 : ");
    scanf("%d",&num1);

    for(int i =0; i<num1; i++){
        printf("*****\n");
    }
}
#include <stdio.h>

void main(){
    
    int a = 0;
    printf("정수를 입력하세요 ==> \n");
    scanf("%d", &a);

    printf("10진수 ==> %d \n",a);
     
    printf("16진수 ==> %x\n",a);
    
    printf("8진수 ==> %o\n",a);

}
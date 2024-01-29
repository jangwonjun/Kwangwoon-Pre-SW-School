#include <stdio.h>
#include <string.h>

void gugudan(int dan){

    for(int i=1; i<=9; i++){
        printf("%d X %d = %d\n",dan,i,dan*i);
    }
}

void main(){
    int input = 0; 
    printf("출력하고 싶은 단을 입력하세요 : ");
    scanf("%d",&input);

    gugudan(input);
}
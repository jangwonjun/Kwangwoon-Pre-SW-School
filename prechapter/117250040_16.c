#include <stdio.h>
#include <string.h>

void main(){
    char str[100];
    int cnt = 0;
    int i;

    printf("영문자 및 숫자를 입력 (100자 이하) :");
    scanf("%s",str);

    printf("\n");
    printf("입력된 문자열 ==> %s\n",str);
    printf("변환된 문자열 ==> ");

    cnt = strlen(str);

    for(i=cnt;i>=0;i--){
        printf("%c",str[i]);
    }
    printf("\n");
}



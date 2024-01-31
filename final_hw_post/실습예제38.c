#include <stdio.h>
#include <string.h>
int main(){
    char text[20];
    printf("문자열 입력 : ");
    scanf("%s", text);

    int len = strlen(text);

    int sum = 0;

    int margin = 'a' - 'A';

    /*대문자 검증 -> 대문자 입력시 소문자로 교환*/
    for(int i = 0; i<len; i++){
        if((text[i]>=65) && (text[i]<=90)){
            text[i] = text[i] + margin;
        }
    }
        
    for(int i = 0; i<len; i++){
        if(text[i]==text[len-1-i]){
            sum += 1;
        }
    }

    if(sum==len){
        printf("회문 입니다.\n");
    }
    else{
        printf("회문이 아닙니다.\n");
    }
}
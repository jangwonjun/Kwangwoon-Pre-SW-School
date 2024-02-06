#include <stdio.h>
#include <string.h>

int main(){
    char text[20];
    printf("문자열을 입력하세요 : ");
    scanf("%s",text);
    char *tmp = text;
    int len = strlen(text);

    for(int i=0; i<len; i++){
        printf("%c",*(tmp+len-i-1));
    }
}
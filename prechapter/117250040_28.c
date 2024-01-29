#include <stdio.h>
#include <string.h>

char upper(char ch){
    return ch - ('a'-'A');
}

char lower(char ch){
    return ch + ('a'-'A');
}

void main(){
    char in[100], out[100];
    char ch;
    int i=0;

    printf("문자열을 입력(100자 이내) :");
    scanf("%s",in);

    do{
        ch = in[i];
        if(ch >= 'A' && ch <= 'Z'){
            out[i] = lower(ch);
        }
        else if(ch >= 'a' && ch <='z'){
            out[i] = upper(ch);
        }
        else{
            out[i] = ch;
        }
        i++;
    }while(ch!='\0');

    out[i] = '\0';
    printf("변환된 결과 ==> %s\n", out);
}
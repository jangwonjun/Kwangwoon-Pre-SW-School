#include <stdio.h>

void main(){
    char str[100];
    char ch;

    int i,k;
    int star;
    printf("숫자를 여러 개 입력 : ");
    scanf("%s",str);

    i = 0;
    ch = str[i];

    while(ch != '\0'){

        star = (int)ch - 48;
        
        for(k=0;k< star; k++){
            printf("*");
        }
        printf("\n");
        i += 1;
        ch = str[i];
    }
}
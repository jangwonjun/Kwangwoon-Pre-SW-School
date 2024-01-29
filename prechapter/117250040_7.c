#include <stdio.h>

void main(){
    char c[10];
    scanf("%s",c);

    for (int i = sizeof(c)-1; i>=0; i--){
        printf("%c",c[i]);
    }
    printf("\n");
}
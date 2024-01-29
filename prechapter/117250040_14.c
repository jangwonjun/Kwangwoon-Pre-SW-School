#include <stdio.h>

void main(){

    for (int i =2; i<=9; i++){
        printf("#제%d단#",i);
    }

    printf("\n\n");

    for (int i = 1; i<=9; i++){
        for (int p = 2; p<=9; p++){
            printf("%d X %d = %d ",p,i,p*i);
        }
        printf("\n");
    }
}
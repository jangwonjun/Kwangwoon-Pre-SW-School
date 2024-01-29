#include <stdio.h>

int main(){
    int a = 0; 
    printf("숫자입력");
    scanf("%d",&a);

    for (int i=1; i<=a; i++){
        for(int j = 0; j<i; j++){
            printf("*");
        }
        printf("\n");
    }
    for (int p=1; p<=a; p++){
        for(int j=0; j<=a-p-1; j++){
            printf("*");
        }
        printf("\n");
    }
}
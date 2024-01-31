#include <stdio.h>

int main(){
    int a = 0; 
    printf("숫자입력 : ");
    scanf("%d",&a);
    for (int i=1; i<=a; i++){
        for(int j = 0; j<i; j++){
            printf("*");
        }
        printf("\n");
    }
}
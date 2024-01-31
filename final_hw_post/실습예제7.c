#include <stdio.h>

void main(){
    int garo, sero = 0;
    printf("가로 ? ");
    scanf("%d",&garo);
    printf("세로 ? ");
    scanf("%d",&sero);

    printf("둘레 : %d\n",(garo*2)+(sero*2));
    printf("넓이 : %d\n", garo*sero);
}
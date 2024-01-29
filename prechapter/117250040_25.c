#include <stdio.h>
#include <string.h>

void main(){
    int a,b,temp;
    int *p1, *p2;

    printf("a값 입력 : ");
    scanf("%d",&a);
    printf("b값 입력 : ");
    scanf("%d",&b);

    p1 = &a;
    p2 = &b;

    temp = *p1;
    *p1 = *p2;
    *p2 = temp;

    printf("바뀐 값 a는 %d, b는 %d \n",a,b);
}
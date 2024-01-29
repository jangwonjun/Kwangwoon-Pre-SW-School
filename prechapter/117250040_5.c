#include <stdio.h>

void main(){
    int a,b = 0; 
    printf("입력진수 결정 <1>10 <2>16 <3>8 : ");
    scanf("%d",&a);

    printf("값 입력 :");

    if(a==1){
        scanf("%d",&b);
    }

    if(a==2){
        scanf("%x",&b);
    }


    if(a==3){
        scanf("%o",&b);
    }

    printf("10진수 ==> %d\n",b);
    printf("16진수 ==> %x\n",b);
    printf("8진수 ==> %o\n",b);

}
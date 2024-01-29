#include <stdio.h>

void main(){
    int a,b,c,d,sum = 0;
    int result=0;

    printf("첫 번째 계산할 값을 입력하세요 ==> ");
    scanf("%d",&a);
    printf("<1>덧셈 <2>뺄셈 <3>곱셈 <4>나눗셈");
    scanf("%d",&b);
    printf("두 번째 계산할 값을 입력하세요 ==> ");
    scanf("%d",&c);
    
    if(b==1){
        result = a+c;
        printf("%d + %d = %d\n",a,c,result);
    }

    if(b==2){
        result = a-c;
        printf("%d - %d = %d\n",a,c,result);
    }

    if(b==3){
        result = a*c;
        printf("%d * %d = %d\n",a,c,result);
    }

    if(b==4){
        result = a/c;
        printf("%d / %d = %d\n",a,c,result);
    }

}
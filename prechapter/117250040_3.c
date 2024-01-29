#include <stdio.h>

void main(){
    int a,b = 0;
    int result = 0;
    char ch;

    printf("첫 번째 계산할 값을 입력하세요 ==> ");
    scanf("%d",&a);
    printf("+ - * / % \n");
    scanf(" %c",&ch);
    printf("두 번째 계산할 값을 입력하세요 ==> ");
    scanf("%d",&b);
    
    if(ch=='+'){
        result = a+b;
        printf("%d + %d = %d\n",a,b,result);
    }

    if(ch=='-'){
        result = a-b;
        printf("%d - %d = %d\n",a,b,result);
    }

    if(ch=='*'){
        result = a*b;
        printf("%d * %d = %d\n",a,b,result);
    }

    if(ch=='/'){
        if(b!=0){
            result = a/b;
            printf("%d / %d = %d\n",a,b,result);
        }
        else{
            printf("0으로 나누면 안됩니다. \n");
        }
    }
    if(ch == '%') {
        if(b!=0){
            result = a%b;
            printf("%d %% %d = %d\n",a,b,result);
        }
        else{
            printf("0으로 나누면 나머지값이 안됩니다.\n");
        }
    }

}
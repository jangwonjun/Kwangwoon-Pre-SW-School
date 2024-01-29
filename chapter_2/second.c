#include <stdio.h>

int main(){
    int a,c,d = 0;
    char b;

    printf("첫번쨰 숫자를 입력해주세요.");
    scanf("%d",&a);
    printf("계산기호를 입력해주세요");
    scanf(" %c",&b);
    printf("두번쨰 숫자를 입력해주세요.");
    scanf("%d",&c);
   
    if(b =='+'){
        printf("%d + %d = %d", a,c,a+c);
    }
    else if(b == '-'){
        printf("%d - %d = %d", a,c,a-c);
    }
    else if(b =='*'){
        printf("%d - %d = %d", a,c,a*c);
    }

    else if(b =='/'){
        if(c!=0){
            printf("%d - %d = %d", a,c,a/c);
        }
        else{
            printf("0으로는 나눌수가 없습니다.");
        }
        
    }
    
}


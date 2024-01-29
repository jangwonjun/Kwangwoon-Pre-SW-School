#include <stdio.h>

void main(){
    int n1,n2 = 0;
    char c;
    printf("수식을 한 줄로 띄어쓰기로 입력하세요 :");
    scanf("%d %c %d",&n1,&c,&n2);
    
    switch (c){
        case '+':
            printf("%d + %d = %d 입니다. \n",n1,n2,n1+n2);
            break;

        case '-':
            printf("%d - %d = %d 입니다. \n",n1,n2,n1-n2);
            break;
        
        case '*':
            printf("%d * %d = %d 입니다. \n",n1,n2,n1*n2);
            break;

        case '/':
            printf("%d / %d = %d 입니다. \n",n1,n2,n1/n2);
            break;

        case '%':
            printf("%d %% %d = %d 입니다. \n",n1,n2,n1%n2);
            break;

        default:
            printf("연산자를 잘못 입력했습니다. \n");
        
    }
}
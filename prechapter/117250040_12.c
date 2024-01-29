#include <stdio.h>

void main(){
    int n1,n2 = 0;
    char c;
    printf("첫 번쨰 수를 입력하세요 :");
    scanf("%d",&n1);
    printf("계산할 연사자를 입력하세요 :");
    scanf(" %c",&c);
    printf("두 번쨰 수를 입력하세요 : ");
    scanf("%d",&n2);


    if (c=='+'){
        printf("%d + %d = %d 입니다. \n",n1,n2,n1+n2);
    }
    else if (c=='-'){
        printf("%d - %d = %d 입니다. \n",n1,n2,n1-n2);
    }
    else if (c=='*'){
        printf("%d * %d = %d 입니다. \n",n1,n2,n1*n2);
    }
    else if (c=='/'){
        printf("%d / %d = %f 입니다. \n",n1,n2,n1/(float)n2);
    }
    else if (c=='%'){
        printf("%d %% %d = %d 입니다. \n",n1,n2,n1%n2);
    }
    
    else{
        printf("연산자를 잘못입력했습니다.");
    }
}
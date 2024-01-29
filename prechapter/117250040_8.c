#include <stdio.h>

void main(){
    float a,b;
    float result;

    printf("첫 번쨰 계산할 값을 입력하세요 ==> ");
    scanf("%f",&a);

    printf("두 번쨰 계산할 값을 입력하세요 ==> ");
    scanf("%f",&b);

    result = a+b;
    printf("%5.2f + %5.2f = %5.2f \n", a,b, result);
    result = a-b;
    printf("%5.2f + %5.2f = %5.2f \n", a,b, result);
    result = a*b;
    printf("%5.2f + %5.2f = %5.2f \n", a,b, result);
    result = a/b;
    printf("%5.2f + %5.2f = %5.2f \n", a,b, result);
    result = (int)a % (int)b;
    printf("%d %% %d = %d \n", (int)a, (int)b, (int)result);

}
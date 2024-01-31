#include <stdio.h>

int main() {
    float a, b, c;

    printf("세 변의 길이를 입력하세요:\n");
    printf("a: ");
    scanf("%f", &a);
    printf("b: ");
    scanf("%f", &b);
    printf("c: ");
    scanf("%f", &c);

    /*순자 변경시 -> 일정한 규칙 만들기(1.temp->a, 2.a->b, 3.b->temp)*/

    if (a < b) {
        float temp = a;
        a = b;
        b = temp;
    }
    if (a < c) {
        float temp = a;
        a = c;
        c = temp;
    }
    if (b < c) {
        float temp = b;
        b = c;
        c = temp;
    }

    if (a < b + c) {
        printf("삼각형을 그릴 수 있습니다.\n");
    } else {
        printf("삼각형을 그릴 수 없습니다.\n");
    }

    return 0;
}

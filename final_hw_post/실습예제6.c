#include <stdio.h>

int main(){
    int age, year = 0;
    printf("현재 나이 ? ");
    scanf("%d",&age);
    printf("원하는 년도 ? ");
    scanf("%d",&year);

    int result = year - 2024;

    printf("2023년의 나이 : %d",age+result);
}
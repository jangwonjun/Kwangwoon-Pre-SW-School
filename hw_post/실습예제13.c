#include <stdio.h>

int main(){
    int year = 0;
    printf("년도 입력 : ");
    scanf("%d",&year);

    if((year%4==0)&&(year%100!=0)||(year%400==0)){
        printf("윤년입니다.");
    }
    else{
        printf("윤년이 아닙니다.");
    }
}
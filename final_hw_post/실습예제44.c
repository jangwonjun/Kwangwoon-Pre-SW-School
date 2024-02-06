#include <stdio.h>

int age(int a,int b, int c){
    /*작성기준 : 2024.2.1*/
    /*개정법에 따르지 않고, 문제의 의도대로 생일이 지나면 1살 추가하는것으로 대체함.*/
    
    int current_year = 2024;
    
    if(b<2){
        printf("만나이 : %d세",current_year-a+1);
    }
    else{
        printf("만나이 : %d세",current_year-a-1);
    }

    return 0;
}

int main(){
    int year,month,day = 0;
    printf("출생년도 : ");
    scanf("%d",&year);
    printf("월 : ");
    scanf("%d",&month);
    printf("일 : ");
    scanf("%d",&day);
    age(year,month,day);
}
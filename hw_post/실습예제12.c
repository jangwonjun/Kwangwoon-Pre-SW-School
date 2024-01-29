#include <stdio.h>

int main(){
    int blood = 0;
    printf("혈당 입력 : ");
    scanf("%d",&blood);

    if(blood<70){
        printf("저혈당입니다");
    }
    else if((blood>=70)||(blood<=109)){
        printf("정상입니다.");
    }
    else if(blood>=110){
        printf("고혈당입니다.");
    }
}
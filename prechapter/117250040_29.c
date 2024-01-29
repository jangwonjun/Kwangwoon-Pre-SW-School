#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int getnumber(){
    return rand()%45 + 1;
}

void main(){
    short int lotto[6] = {0,};
    int i,k, num;
    char dup ='N';
    printf("로또 추첨을 시작합니다.\n");
    srand((unsigned)time(NULL));

    for(int i=0; i<6;){
        num  = getnumber();

        for (k=0; k<6; k++){
            if(lotto[k] == num){
                dup = 'Y';
            }
        }
        if(dup =='N'){
            lotto[i++] = num;
        }
        else{
            dup = 'N';
        }
    
    }

    printf("추첨된 로또 번호 ==> ");
    for (int i = 0; i<6; i++){
        printf("%d ", lotto[i]);
    }
    printf("\n\n");
}
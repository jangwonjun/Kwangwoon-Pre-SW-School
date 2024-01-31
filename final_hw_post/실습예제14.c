#include <stdio.h>

int main(){
    int score = 0;
    printf("시험 점수 : ");
    scanf("%d", &score);

    if(score>=90){
        printf("A");
    }
    else if(score>=60 && score<=90){
        printf("B");
    }
    else{
        printf("F");
    }
}
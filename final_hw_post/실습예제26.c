#include <stdio.h>

/*원래는 do while로 해야하는데 ㅋㅋㅋ 문제를 다 풀고 기억이 나버렸어요ㅠ*/

int main(){
    int num;
    int save,sum = 0;
    int i = 1;
    int array[100]={0,};
    printf("숫자입력(0입력 시 종료) : " );
    scanf("%d",&num);
    array[0] = num;

    while(num!=0){
        printf("숫자입력(0입력 시 종료) : ");
        scanf("%d",&num);
        array[i] = num;
        i++;
        save = i;
    }

    int p = 0; 
    while(p < save){
        sum =  sum + array[p];
        p++;
    }

    float average = (float)sum / (save-1);

    printf("합 : %d\n",sum);
    printf("평균 : %.2f",average);
}
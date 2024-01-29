#include <stdio.h>

int main(){
    int num;
    int save,sum = 0;
    int array[100]={0,};
     int i = 1;
    /*
   
    do while로 풀자!
    */

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
    printf("합 : %d\n",sum);
    printf("평균 : %d",(int)sum/(save-1));
}
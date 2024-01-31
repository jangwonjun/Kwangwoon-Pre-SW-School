#include <stdio.h>

int main(){
    int num;
    int i,save,sum,even,odd = 0;
    int array[100]={0,};
    
    
    do{
        printf("숫자입력(0입력 시 종료) : ");
        scanf("%d",&num);
        array[i] = num;
        i++;
        save = i;

    }while(num!=0);
   
    for(int i = 0; i<save;i++){
        if(array[i]%2==0){
            even += array[i];
        }
        else{
            odd += array[i];
        }
    }
    printf("홀수 합 : %d\n",odd);
    printf("짝수 합 : %d\n",even);
}
#include <stdio.h>

/*최소값은 int형의 최대범위 2147483647로 지정후 비교하겠습니다.*/

int main(){
    int num;
    int i,save,sum,max = 0;
    int array[100]={0,};
    int min = 2147483647;
    
    
    do{
        printf("숫자입력(0입력 시 종료) : ");
        scanf("%d",&num);
        array[i] = num;
        i++;
        save = i;

    }while(num!=0);
   
    for(int i = 0; i<save;i++){
        if(array[i] > max){
            max = array[i];
        }
        else if(array[i] < min){
            if(array[i]!=0){
                min = array[i];
            }
        }
        

    }
    printf("최댓 값 : %d\n",max);
    printf("최소 값 : %d\n",min);
}
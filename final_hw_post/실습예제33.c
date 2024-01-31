#include <stdio.h>

int main(){
    int arr[11]={0,};
    int max = 0;
    int min = 2147483647; /*int값의 최댓값*/
    for(int i = 0; i<11; i++){
        scanf("%d",&arr[i]);
    }

    for(int i = 0; i<11; i++){
        if(arr[i]>max){
            max = arr[i];
        }
        else if(arr[i]<min){
            min = arr[i];
        }
    }
    
    printf("최솟값 : %d\n",min);
    printf("최댓값 : %d\n",max);



}
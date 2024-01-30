#include <stdio.h>

int main(){
    int arr[10];
    int result[10];

    int *final_result;
    int *real_final_result;


    printf("총 10개의 숫자 입력");
    for(int i =0; i<10; i++){
        scanf("%d",&arr[i]);
    }

    final_result = arr; /*주소값*/
    real_final_result = result; /*주소값*/
    
    int up = 0;
    int down = 0;
    for(int p =0; p<10; p++){
        if(arr[p]%2==0){
            *(real_final_result+9-up) = *(final_result+p);
            up++;
        }
        else{
            *(real_final_result+down) = *(final_result+p);
            down++;
        }
    }

    for(int i =0; i<10; i++){
        printf("%d ",*(real_final_result+i));
    }

}
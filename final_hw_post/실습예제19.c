#include <stdio.h>

int main(){
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    for(int i = 0; i<10; i++){
        int save = save * arr[i];

        printf("1부터 %d까지의 곱 : %d\n",i,save);
    }
}
#include <stdio.h>

int main(){
    int arr[2];
    for(int i = 0; i<2; i++){
        scanf("%d",&arr[i]);
    }
    printf("(%d, %d)\n",arr[0],arr[1]);
    printf("X축 대칭 : (%d, %d)\n",arr[0],-1 * arr[1]);
    printf("Y축 대칭 : (%d, %d)\n",arr[1],-1 * arr[0]);
    printf("원점 대칭 : (%d, %d)\n",-1 * arr[0],-1 * arr[1]);
}
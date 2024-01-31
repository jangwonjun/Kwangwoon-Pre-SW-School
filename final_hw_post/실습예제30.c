#include <stdio.h>

int main(){
    int arr[2] = {0,};
    scanf("%d %d",&arr[0],&arr[1]);
    float result = (float)(arr[0] + arr[1])/2;
    printf("%.1f",result);
}


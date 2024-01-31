#include <stdio.h>

int main(){
    int arr[4][8];
    int *tmp;
    int sum[10];
    
    tmp = &arr[0][0];

    for(int i = 0; i<8; i++){
        scanf("%d",&arr[0][i]);
    }

    sum[0] = *(tmp) + *((tmp)+1);
    *((tmp+1)) = sum[0];
    printf("%d\n",sum[0]);

    sum[1] = *((tmp)+2) + *((tmp)+3);
    printf("%d\n",sum[1]);
    *((tmp+1)+2) = sum[1];

    sum[2] = *((tmp))+4 + *((tmp))+5;
    printf("%d\n",sum[2]);
    *((tmp+1)+4) = sum[2];

    sum[3] = *((tmp))+6 + *((tmp))+7;
    printf("%d\n",sum[3]);
    *((tmp+1)+6) = sum[3];


    sum[4] = *(tmp+1) + *(tmp+1)+2;
    *((tmp+2)) = sum[4];

    sum[5] = *((tmp+1))+4 + *((tmp)+1)+6;
    *((tmp+2)+4) = sum[5];

    sum[6] = *((tmp+2)) + *((tmp)+2)+4;
    *((tmp+3)) = sum[6];


    for(int i=0;i <7; i++){
        printf("덧셈 %d\n",sum[i]);
    }

    printf("%d",*((tmp+3)));
    

}
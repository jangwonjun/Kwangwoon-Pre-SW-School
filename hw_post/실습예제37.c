#include <stdio.h>

int main(){
    int arr1[3][3];
    int arr2[3][3];
    printf("1번 배열\n");
    for (int i=0; i<3;i++){
        scanf("%d %d %d",&arr1[i][0],&arr1[i][1],&arr1[i][2]);
    }
    printf("\n");
    printf("2번 배열\n");
    for (int i=0; i<3;i++){
        scanf("%d %d %d",&arr2[i][0],&arr2[i][1],&arr2[i][2]);
    }
    printf("\n");
    printf("두 배열의 합\n");
    
    for (int i=0; i<3;i++){
        printf("%d %d %d\n",arr1[i][0]+arr2[i][0],arr1[i][1]+arr2[i][1],arr1[i][2]+arr2[i][2]);
    }
}
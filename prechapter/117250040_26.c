#include <stdio.h>

void main(){
    int s[10] = {1,0,3,2,5,4,7,6,9,8};
    int tmp;
    int i,k;

    int *p;

    p = s;

    printf("정렬 전 배열 s ==> ");
    
    for (int i =0; i<10; i++){
        printf("%d",*(p+i));
    }
    printf("\n");

    /*정렬을 위한 비교*/

    for(int i=0; i<9;i++){
        for(int k = i+1; k<10; k++){
            if(*(p+i)>*(p+k)){
                tmp = *(p+i);
                *(p+i) = *(p+k);
                *(p+k) = tmp;
            }
        }
    }
    printf("정렬 후 배열 s ==> ");
    for (int i=0; i<10; i++){
        printf("%d ",*(p+i));
    }
    printf("\n");
}
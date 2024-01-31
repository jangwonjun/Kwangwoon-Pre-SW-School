#include <stdio.h>

int main(){
    printf("정렬 전 배열 : 1 0 3 2 5 4 7 6 9 8\n");
    int s[10]={1,0,3,2,5,4,7,6,9,8};
    int *p = s;
    int tmp = 0;

    for(int i = 0; i<9; i++){
        for(int k = 0; k<10; k++){
            if(s[i]<s[k]){
                tmp = *(p+i);
                *(p+i)= *(p+k);
                *(p+k) = tmp;
            }
        }
    }

    for(int i =0; i< 9; i++){
        printf("정렬 후 배열 %d ",*(p+i));
    }

} 
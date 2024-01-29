#include <stdio.h>
#include <string.h>

void main(){
    int s[10] = {1,0,5,3,4,9,2,7,8,9};
    int tmp;
    
    int *p;
    p = s; /*여기서 S가 배열의 첫번째 주소 값을 의미함.*/
    
    
    for(int i = 0; i< 10; i++){
        printf("%d ",*(p+i));
    }
    
    for(int i = 0; i<10; i++){
        for(int k = 0; k<10; k++){
            if(*(p+i) < *(p+k)){
                tmp = *(p+i);
                *(p+i) = *(p+k);
                *(p+k) = tmp;
            }
        }
    }
    
    for(int i = 0; i<10; i++){
        printf("%d",*(p+i));
    }
    
}

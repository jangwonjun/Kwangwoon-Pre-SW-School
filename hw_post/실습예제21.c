#include <stdio.h>

int main(){
    int num = 0;
    printf("숫자 입력 : ");
    scanf("%d",&num);
    for (int i = 0; i<num; i++){
        if(i%2==0){
            printf("* * *\n");
        }
        else{
            printf(" * * \n");
        }
    }
    
}
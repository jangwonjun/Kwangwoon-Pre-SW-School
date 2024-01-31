#include <stdio.h>

int main(){
    int num1,num2=0;
    printf("사용자에게 좌표 입력받기\n");
    int arr[4][2];
    int (*cursor)[2] = arr; /*2차원 포인터 선언*/

    scanf("%d",&num1);
    scanf("%d",&num2);

    for(int i=0; i<4; i++){
        cursor[i][0] = num1;
        cursor[i][1] = num2;
    }
    
    printf("%d %d\n",cursor[0][0],cursor[0][1]);
    printf("%d %d\n",cursor[1][0],(cursor[1][1])*-1);
    printf("%d %d\n",(cursor[2][0])*-1,cursor[2][1]);
    printf("%d %d\n",(cursor[3][0])*-1,(cursor[3][1])*-1);

}
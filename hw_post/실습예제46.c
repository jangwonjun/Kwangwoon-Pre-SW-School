#include <stdio.h>
int arr[100][2];
int i = 0;
int result[4];

int sabun(){
    for(int p=0;p<i;p++){
        if(arr[p][0]>0 && arr[p][1]>0){
            result[0] += 1;
        }
        else if(arr[p][0]<0 && arr[p][1]>0){
            result[1] += 1;
        }
        else if(arr[p][0]<0 && arr[p][1]<0){
            result[2] += 1;
        }
        else if(arr[p][0]>0 && arr[p][1]<0){
            result[3] += 1;
        }
    }
    printf("1사분면 : %d개 , 2사분면 : %d개, 3사분면 : %d개, 4사분면 : %d개",result[0],result[1],result[2],result[3]);

    return 0;
}

int main(){
    

    while(1){
        printf("X (0을 입력하면 프로그램은 종료됩니다.) : ");
        scanf("%d",&arr[i][0]);
        printf("Y(0을 입력하면 프로그램은 종료됩니다.) : ");
        scanf("%d",&arr[i][1]);

        if(arr[i][0]==0||arr[i][1]==0){
            break;
        }
        i++;
    }

    sabun();

}
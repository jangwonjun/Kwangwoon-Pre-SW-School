#include <stdio.h>

int pibo(int n){
    int pre1, cnt = 0;
    int pre2 = 1;
    int arr[100];
    int set = 2;
    arr[0] = 0;
    arr[1] = 1;

    arr[set] = arr[set] + arr[cnt+1] + arr[cnt];
    set++;
    cnt++;

    pibo(arr[set]);
    
    if(cnt>n){
        return arr[cnt];
    }
    return 0;
    
}

int main(){
    int num1 = 0;
    scanf("%d",&num1);
    int tmp = pibo(num1);
    printf("%d",tmp);
}
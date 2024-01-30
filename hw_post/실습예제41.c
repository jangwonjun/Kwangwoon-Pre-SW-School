#include <stdio.h>

int sum(int a,int b){
    int sum = 0;
    printf("%d %d\n",a,b);
    /*기준 : a가 b보다 작다는 기준으로 설정하기*/
    if(a<b){
        for(int i = a; a<=b; a++){
            sum += a;
        }
    }
    else{
        for(int i = b; b<=a; b++){
            sum += b;
        }
    }
    return sum;
}

int main(){
    int a, b = 0; 
    scanf("%d",&a);
    scanf("%d",&b);
    int result = sum(a,b);
    printf("%d부터 %d까지의 합 : %d",a,b,result);

}
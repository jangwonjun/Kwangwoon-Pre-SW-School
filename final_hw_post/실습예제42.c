#include <stdio.h>

int gugu = 0;

int gugudan(int a){
    for(int i=1; i<=9; i++){
        printf("%d x %d = %d\n",a,(10-i),a*(10-i));
    }
    return 0;
}
int main(){
    int num=0;

    scanf("%d",&num);
    gugudan(num);

}
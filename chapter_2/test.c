#include <stdio.h>

int main(){

    int a = 5;
    int b = 3; 
    int c = 2;
    int tmp = 0;


    if(a>b){
        tmp = a;
        a = b;
        b = tmp;
    }
    if(a>c){
        tmp = a;
        a = c;
        c = tmp;
    }
    if(b>c){
        tmp = b;
        b = c;
        c = tmp;
    }

    printf("%d %d %d",a,b,c);
}
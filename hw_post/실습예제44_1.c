#include <stdio.h>

int main(){

    
    char *coffee[10];
    char *tmp = coffee[0];
    char text[20];
    scanf("%s",text);
    printf("%d",*tmp);
    if(*tmp==*text){
        printf("일치함.");
    }
    else{
        printf("불일치함");
    }


}
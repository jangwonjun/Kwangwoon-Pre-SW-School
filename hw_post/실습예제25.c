#include <stdio.h>
#include <string.h>

int main(){
    char text[100];
    scanf("%s",text);   
    int len = strlen(text);
    int i = 0;
    int margin = 'a' - 'A';
    printf("%d\n",margin);


    while(i<len){
        printf("%c",text[i]+margin);
        i++;
    }

} 
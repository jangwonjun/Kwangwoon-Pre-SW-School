#include <stdio.h>

int main(){
    int day,hour = 0;

    printf("Day? \n");
    scanf("%d",&day);
    printf("Hour ?\n");
    scanf("%d",&hour);

    printf("Minute : %d",(hour*60)+(day*24*60));
}
#include <stdio.h>

int main(){
    int r = 0;
    printf("반지름 ? ");    
    scanf("%d",&r);

    printf("둘레 : %.1f\n",3.14*r*2);
    printf("넓이 : %.1f\n",3.14*r*r);
}
#include <stdio.h>


int main(){
    int num = 0;
    printf("n : ");
    scanf("%d",&num);

    int pibo[100]={0,};
    pibo[0] = 0;
    pibo[1] = 1;

    int i,p = 0;
    while(i<=num-1){
        pibo[i+2] = pibo[i] + pibo[i+1];
        i++;
    }
    
    while(p<num){
        printf("%d ",pibo[p]);
        p++;
    }
}

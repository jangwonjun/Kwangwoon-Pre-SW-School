#include <stdio.h>

void main(){
    int start, end;
    int besu, i;
    int hap = 0;

    printf("합계의 시작값 ==> ");
    scanf("%d",&start);
    printf("합계의 끝값 ==> ");
    scanf("%d",&end);
    printf("배수 ==> ");
    scanf("%d",&besu);

    i = start;
    while(i<=end){
        if(i%besu == 0){
            hap+=i;
        }
        i++;
    }
    printf("%d부터 %d까지의 %d 배수의 합계 ==> %d\n", start,end,besu,hap);
}
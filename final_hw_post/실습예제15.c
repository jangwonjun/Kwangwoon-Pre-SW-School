#include <stdio.h>
#include <string.h>

int main(){
    int month, day = 0;
    printf("월 : ");
    scanf("%d",&month);
    printf("일 : ");
    scanf("%d",&day);

    int result_1 = 0;
    int save = 0;
    int month_day = 0;

    int array[12][2]={
        {1,31},
        {2,28},
        {3,31},
        {4,30},
        {5,31},
        {6,30},
        {7,31},
        {8,31},
        {9,30},
        {10,31},
        {11,30},
        {12,31}
    };

    for(int i = 0; i<12; i++){
       
        if(month==array[i][0]){
            save = i;
        }
    }

    for(int p =0; p<save; p++){
        month_day = month_day + array[p][1];
    }

    printf("D-%d\n",month_day+day);
}
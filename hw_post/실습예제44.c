#include <stdio.h>
#include <string.h>

char menu[20];
int sum[5];
int sum_real = 0;
char coffee[20] = "coffee";
char sprite[20] = "sprtie";
char bread[20] = "bread";
char coke[20] = "coke";
char lemonade[20] = "lemonade";

int len = 0;
int money[5]={1000,1500,1000,1500,2000};
 

int pos(){
    do{
        printf("제품(종료 시 0 입력) : ");
        scanf("%s",menu);
        
        int len = strlen(menu);

        printf("%s",menu);

        for(int i = 0; i<len; i++){
            if(menu[i]==coffee[i]){
                sum[0] += 1;
            }
        }

        for(int i = 0; i<len; i++){
            if(menu[i]==sprite[i]){
                sum[1]+= 1;
            }
        }

        for(int i = 0; i<len; i++){
            if(menu[i]==bread[i]){
                sum[2] += 1;
            }
        }

        for(int i = 0; i<len; i++){
            if(menu[i]==coke[i]){
                sum[3] += 1;
            }
        }

        for(int i = 0; i<len; i++){
            if(menu[i]==lemonade[i]){
                sum[4] += 1;
            }
        }
    }while(menu=='0');


    for(int i = 0; i<len; i++){
        sum_real =  sum_real + (menu[i] * sum[i]); 
    }
    
    return sum_real;

}
int main(){
    int result = pos();
    printf("%d",result);
}
#include <stdio.h>

int main(){
    int salary,bonus = 0;

    printf("Salary ? ");
    scanf("%d",&salary);
    printf("Bonus ? ");
    scanf("%d",&bonus);
    printf("Annual salary : %d \n",salary*12);
    printf("Annual salaty and bonus : %d \n",(salary*12)+bonus);
}
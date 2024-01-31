#include <stdio.h>
int vip[3] = {301,302,303};
int normal[5] = {201,202,203,204,205};
int vip_cnt = 0;
int normal_cnt = 0; 
int i = 0; 

int reservation_vip(int num){   
    
    if(num>4){
        printf("지정된 투숙 인원을 초과하였습니다.\n");
    }
    else{
        printf("예약을 진행합니다.\n");
        printf("고객님이 예약하신 객실은 %d호 입니다",vip[vip_cnt]);
        vip_cnt++;
       
        if(vip_cnt>=3){
            printf("방 예약이 마감되었습니다. 예약이 불가능합니다.\n");
            return 0;
        }
    }
        
    return 0;
}

int reservation_normal(int num){
    if(num>2){
        printf("지정된 투숙 인원을 초과하였습니다.\n");
    }
    else{
        printf("예약을 진행합니다.\n");
        printf("고객님이 예약하신 객실은 %d호 입니다",normal[normal_cnt]);
        normal_cnt++;
        if(normal_cnt>=5){
            printf("방 예약이 마감되었습니다. 예약이 불가능합니다.\n");
            return 0;
        }
    }
    return 0;
}

int main(){
    for(int i=0; i<5; i++){
        int num1,num2 = 0;
        printf("예약인원을 입력해주세요");
        scanf("%d",&num1);
        printf("원하시는 객실 타입을 알려주세요. <1> : VIP, <2> : 일반룸");
        scanf("%d",&num2);

        if(num2 == 1){
            reservation_vip(num1);
        }
        else if(num2 == 2){
            reservation_normal(num1);
        }
    }
    
}
#include <stdio.h>

int main(){
    int arr[3]={0,};
    int tmp = 0;

    for(int i=0; i<3; i++){
        scanf("%d", &arr[i]);
    }
    
    /*tmp -> a, a->b, b -> tmp 내림차순 정렬*/
    if(arr[0]<arr[1]){
        tmp = arr[0];
        arr[0] = arr[1];
        arr[1] = tmp;
    }

    if(arr[0]<arr[2]){
        tmp = arr[0];
        arr[0] = arr[2];
        arr[2] = tmp;
    }

    if(arr[1]<arr[2]){
        tmp = arr[1];
        arr[1] = arr[2];
        arr[2] = tmp;
    }

    /*내림차순으로 정렬시, 만약 오름차순일경우에는 순서를 바꿔줄 필요가 있음.*/
    if((arr[0]*arr[0]) == (arr[1]*arr[1]) + (arr[2]*arr[2])){
        printf("직각삼각형");
    }
    else if((arr[0]==arr[1]) && (arr[1]==arr[2]) && (arr[2]==arr[0])){
        printf("정삼각형");
    }
    else if((arr[0]==arr[1])||(arr[1]==arr[2])||(arr[2]==arr[0])){
        printf("이등변삼각형");
    }
    else if(arr[0]<arr[1]+arr[2]){
        printf("삼각형입니다");
    }
    else{
        printf("삼각형이 아닙니다.");
    }

    
    
}
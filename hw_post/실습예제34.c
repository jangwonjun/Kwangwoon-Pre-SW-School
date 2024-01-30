#include <stdio.h>
#include <string.h>

int main(){
    char arr[10];
    char arr2[10];

    scanf("%s",arr);
    scanf("%s",arr2);
    int len1 = strlen(arr);
    int len2 = strlen(arr2);
    


    /*유효성 검증 : 문장의 길이가 다르면 애초에 틀린것으로 처리*/

    if(len1 != len2){
        printf("다릅니다.");
    }
    int sum = 0;
    for(int i =0; i<len1; i++){
        if(arr[i]==arr2[i]){
            sum += 1;
        }
    }

    if(len1 == sum){
        printf("같습니다");
    }
    else{
        printf("다릅니다");
    }

}
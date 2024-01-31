#include <stdio.h>
#include <string.h>

int main(){
    char arr[10];
    char arr2[10];
    char result1[10];
    char result2[10];
    scanf("%s",arr);
    scanf("%s",arr2);
    int len1 = strlen(arr);
    int len2 = strlen(arr2);
    int margin = 'a' - 'A';


    /*유효성 검증 : 문장의 길이가 다르면 애초에 틀린것으로 처리*/

    if(len1 != len2){
        printf("다릅니다.");
    }

    /*기준 : 전부 소문자로 바꿈.*/
    for(int i = 0; i<len1; i++){
        if(arr[i]>=65 && arr[i]<=90){
            result1[i] = arr[i] + margin;
        }
        else if(arr2[i]>=97 && arr2[i]<=122){
            result1[i] = arr[i];
        }
        else{
            result1[i] = arr[i];
        }
    }


    for(int i = 0; i<len2; i++){
        if(arr2[i]>=97 && arr2[i]<=122){
            result2[i] = arr2[i];
        }
        else{
            result2[i] = arr2[i] + margin;
        }
    }
    int sum = 0;
    for(int i =0; i<len1; i++){
        if(result1[i]==result2[i]){
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
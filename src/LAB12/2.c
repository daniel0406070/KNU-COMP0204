#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(){
    char str[100];
    printf("한 단어를 입력하세요. ->\n");
    scanf("%s", str);

    printf("\n");
    printf("입력한 단어를 반대로 출력합니다. ->\n");

    int len = strlen(str);

    for(int i = len - 1; i >= 0; i--){
        printf("%c", str[i]);
    }


    
}
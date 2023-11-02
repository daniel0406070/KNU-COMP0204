#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(){
    char str[1000];
    printf("한 줄의 문장을 입력하세요. ->\n");
    scanf("%[^\n]s", str);

    printf("\n");
    printf("입력한 각각의 단어를 반대로 출력합니다. ->\n");
    
    int l,r;
    int len = strlen(str);

    l=0;
    for(int i = 0; i < len; i++){
        if(str[i] == ' '){
            r = i - 1;
            for(int j = r; j >= l; j--){
                printf("%c", str[j]);
            }
            printf(" ");
            l = i + 1;
        }
    }
    r = len - 1;
    for(int j = r; j >= l; j--){
        printf("%c", str[j]);
    }
}
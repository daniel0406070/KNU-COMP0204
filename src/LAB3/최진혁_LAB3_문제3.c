#include <stdio.h>

int main(){
    char a;
    printf("알파벳 소문자 입력 : ");
    scanf("%c", &a);
    printf("입력한 알파벳 소문자 %c의 대문자는 %c입니다.", a, a-32);
}
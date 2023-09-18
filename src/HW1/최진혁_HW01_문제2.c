#include <stdio.h>

int main(){
    int num;
    printf("정수를 입력하세요: ");
    scanf("%d", &num);
    printf("해당 정수를 뒤집으면 ");
    printf("%d", num % 10);
    num /= 10;
    printf("%d", num % 10);
    num /= 10;
    printf("%d", num % 10);
    num /= 10;
    printf("%d", num % 10);
    num /= 10;
    printf("%d", num % 10);
    num /= 10;
    printf("%d", num % 10);

    
}
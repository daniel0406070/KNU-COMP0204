#include <stdio.h>
#define SQ2(x) ((x)*(x))
#define SQ4(x) (SQ2(x)*SQ2(x))


int main(){
    int x;
    printf("정수를 입력하세요: ");
    scanf("%d", &x);

    printf("%d의 네제곱은 %d입니다\n", x, SQ4(x));
}
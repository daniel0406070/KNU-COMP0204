#include <stdio.h>

const double PI = 3.14;

int main(){
    double r;
    printf("원의 면적과 둘레를 구합니다.\n");
    printf("원의 반지름을 입력 : ");
    scanf("%lf", &r);
    printf("\n");

    printf("원의 면적은 %10.3lf입니다.\n", PI*r*r);
    printf("원의 둘레는 %10.3lf입니다.\n", 2*PI*r);
    
}
#include <stdio.h>

int main(){
    int a,b;
    printf("두 정수를 입력하시오.\n");
    scanf("%d", &a);
    scanf("%d", &b);
    printf("합  : %d + %d = %d\n", a,b,a+b);
    printf("평균 : %d / %d = %lf\n", a+b,2,1.0*(a+b)/2);
    
}
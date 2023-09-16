#include <stdio.h>

int main(){
    double tm;
    printf("화씨온도를 입력하면 섭씨온도로 변환합니다.\n");
    printf("화씨온도를 입력 : ");
    scanf("%lf", &tm);
    printf("\n");
    printf("%0.6lf의 화씨온도를 섭씨로 변환하면 %0.6lf입니다.\n", tm, (tm-32)*5/9);
    
}
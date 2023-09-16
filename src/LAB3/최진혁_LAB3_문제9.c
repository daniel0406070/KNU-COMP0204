#include <stdio.h>

int main(){
    double h,m;
    printf("삼각형의 면적을 구합니다.\n");
    printf("삼각형의 밑변 입력 : ");
    scanf("%lf", &m);
    printf("삼각형의 높이 입력 : ");
    scanf("%lf", &h);
    printf("\n");


    printf("입력한 밑변은 %10.2lf입니다.\n", m);
    printf("입력한 높이는 %10.2lf입니다.\n", h);
    printf("삼각형의 면적은 %10.2lf입니다.\n", m*h/2);

    
}
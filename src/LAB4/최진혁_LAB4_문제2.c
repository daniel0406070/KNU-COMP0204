#include<stdio.h>

int main()
{  
    double w,h;
    printf("몸무게 입력 : ");
    scanf("%lf",&w);
    printf("  키 입력 : ");
    scanf("%lf",&h);
    printf("당신의 키와 몸무게는 %0.2lfcm와 %0.2lfkg로 %s입니다.\n",h,w,w>(h-100)*0.9?"비만":"정상");

}
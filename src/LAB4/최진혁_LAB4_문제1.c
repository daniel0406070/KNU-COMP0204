#include<stdio.h>

int main()
{  
    int a,b,c,max;
    printf("정수1 입력 : ");
    scanf("%d",&a);
    printf("정수2 입력 : ");
    scanf("%d",&b);
    printf("정수3 입력 : ");
    scanf("%d",&c);

    max=a;
    if(max<b) max=b;
    if(max<c) max=c;

    printf("입력한 정수 중에서 가장 큰 수는 %d입니다.",max);

}
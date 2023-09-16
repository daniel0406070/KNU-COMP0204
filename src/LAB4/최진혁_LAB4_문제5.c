#include<stdio.h>

int main()
{  
    int n;
    printf("임의의 정수 입력 : ");
    scanf("%d",&n);
    printf("값 %d를 하위 2 바이트의 값을 16진수로 출력 : %x",n,n&0xffff);
}
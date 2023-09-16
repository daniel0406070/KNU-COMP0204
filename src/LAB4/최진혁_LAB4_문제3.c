#include<stdio.h>

int main()
{  
    int a,b;
    printf("임의의 정수 입력1 : ");
    scanf("%d",&a);
    printf("임의의 정수 입력2 : ");
    scanf("%d",&b);
    printf("몫은 %d이고 나머지는 %d입니다.",a>b?a/b:b/a,a>b?a%b:b%a);

}
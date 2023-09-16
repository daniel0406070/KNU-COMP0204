#include<stdio.h>

int main()
{  
    int x,y;
    printf("임의의 정수 입력1 : ");
    scanf("%d",&x);

    printf("임의의 정수 입력2 : ");
    scanf("%d",&y);

    printf("입력 후, x= %d, y= %d\n",x,y);

    x^=y;
    y^=x;
    x^=y;

    printf("연산 후, x= %d, y= %d\n",x,y);


}
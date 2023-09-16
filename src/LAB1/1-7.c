#include <stdio.h>

int main(){
	int x,y;
    printf("정수1 입력? ");
    scanf("%d",&x);
    printf("정수2 입력? ");
    scanf("%d",&y);
    printf("%d * %d = %d\n",x,y,x*y);
    printf("%d + %d = %d\n",x,y,x+y);
}
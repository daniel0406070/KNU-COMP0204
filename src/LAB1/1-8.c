#include <stdio.h>

int main(){
	int x;
    printf("길이를 센터미터로 입력하세요. >> ");
    scanf("%d",&x);
    printf("%d 센터미터는 인치로 %f인치 입니다.\n",x,x*1.0/2.54);
}
#include <stdio.h>

int main(){
	float x;
    printf("부피인 리터를 입력하세요.<소수> >> ");
    scanf("%f",&x);
    printf("%f 리터는 %f 갤론 입니다.\n",x,x/3.785);
}
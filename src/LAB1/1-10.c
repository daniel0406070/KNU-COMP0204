#include <stdio.h>

int main(){
	double x;
    printf("면적을 평으로 입력하세요.<소수> >> ");
    scanf("%lf",&x);
    printf("%lf 평은 %lf 평방미터 입니다.\n",x,x*3.3058);
}
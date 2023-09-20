#include <stdio.h>

int prime(int a){
	if (a==1) return 0;
	if (a==2) return 1;
	for (int j = 2; j < a-1; ++j){
		if(a%j==0) return 0;
	}
	return 1;
}

int main(){
    int n;
    printf("소수를 검사할 정수 입력 : ");
    scanf("%d", &n);
    printf("정수 %d<은>는 %s수입니다.\n", n, !prime(n)?"합성":"소");
}
#include <stdio.h>

int main(){
    int n,r_n;
    printf("정수 입력 : ");
    scanf("%d", &n);
    if(n<0) r_n = -n;
    else r_n = n;

    printf("입력한 수 %d의 절대값은 %d입니다.\n", n, r_n);

    
}
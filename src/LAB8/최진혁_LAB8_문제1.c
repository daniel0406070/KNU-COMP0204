#include <stdio.h>

int run_p=0;

int func(){
    static int run_s=0;
    run_p++;
    run_s++;
    printf("함수의 %d번째 출력입니다.\n", run_p);
    return run_s;
}

int main(){
    int i,s;
    printf("실행 횟수 출력 : ");
    scanf("%d", &i);
    for(int j=0; j<i; j++){
        s=func();
    }

    printf("전역 변수 출력 : %d\n", run_p);
    printf("정적 지역 변수 출력 : %d\n", s);

    
}
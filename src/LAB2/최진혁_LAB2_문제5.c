#include <stdio.h>

double mk(int m){
    return m*1.6093;
}

int main(){
    int m;
    printf("속도를 마일로 입력하세요 : ");
    scanf("%d",&m);
    printf("%d마일은 %0.2lf킬로미터입니다.",m,mk(m));



}
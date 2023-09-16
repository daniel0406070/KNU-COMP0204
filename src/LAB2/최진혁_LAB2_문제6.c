#include <stdio.h>

int solve(int a,int b){
    int tmp=b;
    b=a;
    a=tmp;
    printf("swap 결과 : %d, %d",a,b);
}

int main(){
    printf("두 개의 숫자를 입력하세요 : ");
    int a,b;
    scanf("%d, %d",&a,&b);
    solve(a,b);

}
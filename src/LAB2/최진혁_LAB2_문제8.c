#include <stdio.h>

int m2(int m){
    return m*m;
}

int m3(int m){
    return m*m*m;
}

int m5(int m){
    return m2(m)*m3(m);
}

int main(){
    int a;
    printf("숫자를 입력하세요 : ");
    scanf("%d",&a);
    printf("%d의 제곱 : %d\n",a,m2(a));
    printf("%d의 세제곱 : %d\n",a,m3(a));
    printf("%d의 다섯제곱 : %d\n",a,m5(a));



}
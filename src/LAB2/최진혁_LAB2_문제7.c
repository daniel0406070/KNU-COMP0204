#include <stdio.h>

void plus(double a,double b){
    printf("%0.3lf + %0.3lf = %0.3lf\n",a,b,a+b);
}
void minus(double a,double b){
    printf("%0.3lf - %0.3lf = %0.3lf\n",a,b,a-b);
}
void mul(double a,double b){
    printf("%0.3lf * %0.3lf = %0.3lf\n",a,b,a*b);
}
void div(double a,double b){
    printf("%0.3lf / %0.3lf = %0.3lf\n",a,b,a/b);
}


int main(){
    double a,b;
    printf("두 개의 숫자를 입력하세요 : ");
    scanf("%lf %lf",&a,&b);
    plus(a,b);
    minus(a,b);
    mul(a,b);
    div(a,b);
}
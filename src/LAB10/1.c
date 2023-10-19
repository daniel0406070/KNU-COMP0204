#include <stdio.h>

double plus(double a, double b){
    return a+b;
}

double minus(double a, double b){
    return a-b;
}

double mul(double a, double b){
    return a*b;
}

double div(double a, double b){
    return a/b;
}

double (*func[4])(double,double)={plus,minus,mul,div};
char str[4]={'+','-','*','/'};

int main(){
    double a,b;
    printf("두 개의 숫자를 입력하세요 : ");
    scanf("%lf %lf",&a,&b);
    for(int i=0;i<4;i++){
        printf("%0.3lf %c %0.3lf = %0.3lf\n",a,str[i],b,func[i](a,b));
    }

}
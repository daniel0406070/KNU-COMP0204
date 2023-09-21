#include <stdio.h>

int main(){
    long long int m;
    double o8=0,o4=0,o2=0,o0=0;
    

    printf("연봉 입력 : ");
    scanf("%lld", &m);
    printf("\t");
    printf("입력한 연봉 : %d\n", m);
    if(m>80000000) {
        o8=m-80000000;
        m=80000000;
        o8*=0.36;
    }
    if(m>40000000) {
        o4=m-40000000;
        m=40000000;
        o4*=0.27;
    }
    if(m>10000000) {
        o2=m-10000000;
        m=10000000;
        o2*=0.18;
    }
    o0=m;
    o0*=0.09;
    
    printf("\n\t");
    printf("세금 36%c 적용 : %0.0lf\n", 37, o8);
    printf("\t");
    printf("세금 27%c 적용 : %0.0lf\n", 37,o4);
    printf("\t");
    printf("세금 18%c 적용 : %0.0lf\n", 37,o2);
    printf("\t");
    printf("세금 9%c 적용  : %0.0lf\n", 37,o0);
    printf("\t");
    printf("전체 세금은   : %0.0lf입니다.\n", o8+o4+o2+o0);

    
}
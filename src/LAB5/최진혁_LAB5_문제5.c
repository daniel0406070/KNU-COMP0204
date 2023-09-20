#include <stdio.h>

int main(){
    char a;
    double dis;

    printf("입력한 거리를 변환합니다. 적당히 변환합니다.\n");
    printf("문자를 F나 f를 입력하면 센티미터로, 문자를 C나 c를 입력하면 피트로 변환합니다.\n");
    printf("\n");
    printf("문자 입력 : ");
    scanf("%c",&a);
    printf("거리 입력 : ");
    scanf("%lf",&dis);

    printf("\n");
    
    if (a=='F'||a=='f') printf("피트 %0.2lf는 센티미터로 %0.2lf입니다.",dis,dis*30.48);
    else if (a=='C'||a=='c') printf("센티미터 %0.2lf는 피트로 %0.2lf입니다.",dis,dis/30.48);
    else printf("잘못 입력하셨습니다.");

    
}
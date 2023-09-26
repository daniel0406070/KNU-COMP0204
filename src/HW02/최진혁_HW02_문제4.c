#include <stdio.h>
#include <math.h>

int main(){
    long long int num1,num2;
    printf("입력 : ");
    scanf("%lld %lld",&num1,&num2);
    printf("합 : %lld\n",num1+num2);
    printf("차 : %lld\n",num1>num2?num1-num2:num2-num1);
}
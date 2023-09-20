#include <stdio.h>

int main(){
    int n,m;
    printf("두 정수 입력 :\n");
    scanf("%d",&n);
    scanf("%d",&m);
    if(n>m){
        printf("더한 결과 값 : %d + %d = %d",n,m,n+m);
    }
    else{
        printf("곱한 결과 값 : %d * %d = %d",n,m,n*m);
    }
    
}
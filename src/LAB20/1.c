#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

void printb(int n){
    if(n<10) printf("%d",n);
    else printf("%c",n-10+'a');
}

int main(){
    int n,m;
    printf("입력 : ");
    scanf("%d %d",&n,&m);

    printf("출력 : ");
    int a= pow(m,round(log(n)/log(m)+0.5)-1);
    for(int i=a;i>0;i/=m){
        printb(n/i);
        n%=i;
    }
}
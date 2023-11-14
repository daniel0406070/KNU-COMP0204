#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define PRINT(x,y) printf("a와 b의 곱은 %d입니다.\n", (x)*(y))

int main(){
    int a, b;
    a=2;
    b=7;
    PRINT(a,b);
}
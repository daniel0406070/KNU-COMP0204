#include <stdio.h>

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp; 
}

int main(){
    int a,b;
    printf("입력 : ");
    scanf("%d %d", &a, &b);
    swap(&a, &b);
    printf("swap 결과 : %d %d\n", a, b);
}


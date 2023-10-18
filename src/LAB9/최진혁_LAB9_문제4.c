#include <stdio.h>

void swap(int *a, int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}

int main(){
    int a,b;
    printf("첫 번째 숫자를 입력하세요. -> ");
    scanf("%d",&a);
    printf("두 번째 숫자를 입력하세요. -> ");
    scanf("%d",&b);

    swap(&a,&b);

    printf("첫 번째 숫자는 %d이고 두 번째 숫자는 %d입니다.\n",a,b);

    
}
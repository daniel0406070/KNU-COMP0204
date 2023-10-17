#include <stdio.h>
#include <stdlib.h>

int global2= 100;

int main(){
    static int global3= 5000;
    printf("전역 변수 : global = %d\n",global2);
    printf("정적 지역변수 : global = %d\n",global3);
    system("pause");
    
}

#include <stdio.h>
#include <stdlib.h>

int main(){
    extern int global2;
    extern int global3;

    global2++;
    global3++;

    printf("전역 변수 : global = %d\n",global2);
    printf("정적 지역변수 : global = %d\n",global3);

    
    
}
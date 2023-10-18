#include <stdio.h>

static int global= 5000;
extern int getglobal();

int main(){
    printf("전역 변수 : global = %d\n",getglobal());
    printf("정적 전역변수 : global = %d\n",global);

    global++;
    printf("전역 변수 : global = %d\n",getglobal());
    printf("정적 전역변수 : global = %d\n",global);

}

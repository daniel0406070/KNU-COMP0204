#include <stdio.h>

int b=0;

int fun(){
    static int a=0;
    a++;
    b++;
    return a;
}

int main(){
    for(int i=0; i<6; i++){
        printf("함수 fun()을 %2d번 호출하고 있습니다.\n",fun());
    }
    printf("함수 fun()가 총 %2d번 호출되었습니다.\n",b);

    
}
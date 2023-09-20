#include <stdio.h>

int main(){

    for (int i=0;i<=200;i+=20){
        printf("섭씨 온도 : %3d, 화씨 온도 : %d\n",i,(int)(i*1.8+32));
    }

}
#include <stdio.h>

int main(){
    for(int i=1;i<=10;i++){
        printf("%2d ^%2d = %4d",i,2,i*i);
        printf("   ");
        printf("%2d ^%2d = %4d\n",i,3,i*i*i);
    }

    
}
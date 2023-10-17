#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));

    printf("1에서 45 사이의 임의수 6개:\n");
    for(int i=0; i<6; i++){
        printf("%d ",rand()%45+1);
    }

    
}
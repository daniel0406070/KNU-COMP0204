#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));
    int num[45]={0,};
    int tmp;
    for(int i=0; i<6; i++){
        while (1){
            tmp=rand()%45;
            if(num[tmp]==0){
                num[tmp]=1;
                printf("%d ", tmp+1);
                break;
            }
        }
        
    }

    
}
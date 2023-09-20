#include <stdio.h>

int main(){
    int cnt=0;
    for(int i=1;i<=30;i+=2){
        if(i%5==0) continue;
        printf("%3d ",i);
        cnt++;
        if(cnt==4){
            printf("\n");
            cnt=0;
        }
    }

    
}
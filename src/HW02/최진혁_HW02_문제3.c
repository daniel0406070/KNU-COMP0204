#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){
    srand(time(NULL));

    int alpha[26]={0,};
    int cnt=0;
    while(cnt<26){
        int tmp = rand()%26;
        if (alpha[tmp]==0){
            alpha[tmp]++;
            cnt++;
            printf("%c",tmp+'a');
        }

    }

    
}
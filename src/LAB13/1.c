#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

enum boolean {false, true};

int main(){
    char tmp[220]={0,};
    int num[10]={0,};
    printf("입력 : ");
    fgets(tmp, 220, stdin);

    int i=0;
    char* ptr=strtok(tmp, " ");
    while(ptr != NULL){
        num[i] = atoi(ptr);
        ptr = strtok(NULL, " ");
        i++;
    }

    // for(int j=0; j<i; j++){
    //     printf("%d ", num[j]);
    // }

    enum boolean isBig = true;
    for(int j=1; j<i; j++){
        if(num[0]<=num[j]){
            isBig = false;
            break;
        }
    }

    if(isBig) printf("TRUE");
    else printf("FALSE");

    
}
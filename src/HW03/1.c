#include <stdio.h>

int main(){
    printf("입력 : ");
    int n;
    scanf("%d", &n);
    
    for(int i = 0; i < n; i++){
            printf("*");
    }
    printf("\n");


    for(int i = 0; i < n-2; i++){
        for(int j = i; j < n-2; j++){
            printf(" ");
        }
        printf("*\n");
    }


    for(int i = 0; i < n; i++){
            printf("*");
    }
    printf("\n");
    
}
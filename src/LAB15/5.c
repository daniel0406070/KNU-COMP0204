#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

typedef struct node* nptr;
typedef struct node {
    int data;
    nptr next;
}node;

int main() {
    int n;
    scanf("%d", &n);
    
    int **arr = (int**)malloc(sizeof(int*) * n);
    for(int i = 0; i < n; i++){
        arr[i] = (int*)malloc(sizeof(int) * n);
    }
    
    for(int i = 0; i < n; i++){
        if(i%2==0){
            for(int j = 0; j < n; j++){
                arr[i][j] = i*n+j+1;
            }
        }
        else{
            for(int j = n-1; j >= 0; j--){
                arr[i][j] = i*n+n-j;
            }
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            printf("%2d ", arr[i][j]);
        }
        printf("\n");
    }

}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int cmp(const void *a, const void *b){
    return *(int*)a - *(int*)b;
}

int main(){
    int arr[11]={0,};
    srand(time(NULL));

    for(int i = 0; i < 10; i++){
        arr[i] = rand()%100;
    }

    printf("정렬 전 배열 값 : -->\n");
    for(int i = 0; i < 10; i++){
        printf("%d", arr[i]);
        if(i != 9) printf(", ");
    }
    printf("\n");

    qsort(arr, 10, sizeof(int), cmp);

    printf("정렬 후 배열 값 : -->\n");
    for(int i = 0; i < 10; i++){
        printf("%d", arr[i]);
        if(i != 9) printf(", ");
    }
    printf("\n");

    
}
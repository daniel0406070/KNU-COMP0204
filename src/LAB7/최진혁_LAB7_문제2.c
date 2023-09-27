#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b){
    return *(int *)a - *(int *)b;
}

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp; 
}

int main(){
    int arr[10];
    printf("입력 : ");
    for(int i=0; i<10; i++){
        scanf("%d", &arr[i]);
    }

    for(int i=0; i<10; i++){
        for(int j=0; j<10; j++){
            if(arr[i] < arr[j]){
                swap(&arr[i], &arr[j]);
            }
        }
    }

    printf("정렬 결과 : ");
    for(int i=0; i<10; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");

    
}
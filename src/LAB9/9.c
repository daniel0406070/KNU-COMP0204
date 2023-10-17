#include <stdio.h>

double maxin(double *arr, int size){
    double max=arr[0];
    double min=arr[0];
    for(int i=0; i<size; i++){
        if (max<arr[i]){
            max=arr[i];
        }
        if (min>arr[i]){
            min=arr[i];
        }
    }
    return max-min;
}

int main(){
    double ary[5] = {3.12, 5.14, 7.25, 7.48, 5.91};

    printf("source 원 배열 값 :\n      ");
    for (int i = 0; i < 5; i++){
        printf("%4.2lf ", ary[i]);
    }
    printf("\n\n");

    printf("최대값과 최소값의 차이는 %lf이다.\n", maxin(ary,5));

    
}
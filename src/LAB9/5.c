#include <stdio.h>

void arr_func(int arr[][4]){
    int temp;
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            temp=arr[i][j];
            arr[i][j]=0;
            arr[i][j]=temp*10+5;
        }
    }
}

int main(){
    int arr[3][4]={
        {5,8,9,3},
        {20,5,23,7},
        {30,42,4,6}};

    printf("원 행렬 값 :\n");
    printf("---------------------------\n");
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            printf("|%4d ",arr[i][j]);
        }
        printf("|\n");
    }
    printf("---------------------------\n");

    arr_func(arr);

    printf("계산 후 행렬 값 :\n");
    printf("---------------------------\n\n");
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            printf("|%4d ",arr[i][j]);
        }
        printf("|\n");
    }
    printf("---------------------------\n");

    
}
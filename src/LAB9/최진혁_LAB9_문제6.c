#include <stdio.h>

void matrixmul(double arr1[][3], double arr2[][2], double result[][2]){
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            result[i][j]=0;
            for(int k=0; k<3; k++){
                result[i][j]+=arr1[i][k]*arr2[k][j];
            }
        }
    }
}

int main(){
    double arr1[2][3]={
        {4.2,4.3,3.8},
        {3.7,1.5,0.7}
    };
    double arr2[3][2]={
        {5.2,2.1},
        {3.2,1.4},
        {1.5,3.6}
    };

    for(int i=0; i<2; i++){
        for(int j=0; j<3; j++){
            printf("%4.2lf ",arr1[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    for(int i=0; i<3; i++){
        for(int j=0; j<2; j++){
            printf("%4.2lf ",arr2[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    printf("다은은 위 두행렬의 곱 결과입니다.\n\n");

    double result[2][2];
    matrixmul(arr1,arr2,result);

    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            printf("%4.2lf ",result[i][j]);
        }
        printf("\n");
    }


    
}
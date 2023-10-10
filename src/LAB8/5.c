#include <stdio.h>

int matrix1[4][3]={
    {35,28,73},
    {25,32,69},
    {97,56,23},
    {45,97,15}
    };
int matrix2[4][3]={
    {125,28,56},
    {34,32,69},
    {57,56,59},
    {45,33,45}
    };

int main(){
    printf("다음 두 행렬의 합과 차를 구하는 프로그램 입니다.\n");
    printf("----------------   ----------------\n");
    for(int i=0; i<4; i++){
        printf("| ");
        for(int j=0; j<3; j++){
            printf("%-3d", matrix1[i][j]);
            printf("| ");
        }

        printf(" ");

        printf(" | ");
        for(int j=0; j<3; j++){
            printf("%-3d", matrix2[i][j]);
            printf("| ");
        }
        printf("\n");
    }
    printf("----------------   ----------------\n\n");

    int matrix_sum[4][3]={0,};
    int matrix_sub[4][3]={0,};
    for(int i=0; i<4; i++){
        for(int j=0; j<3; j++){
            matrix_sum[i][j]=matrix1[i][j]+matrix2[i][j];
            matrix_sub[i][j]=matrix1[i][j]-matrix2[i][j];
        }
    }
    printf("위의 두 행렬 합의 결과 값입니다.\n");
    printf("----------------\n");
    for(int i=0; i<4; i++){
        printf("| ");
        for(int j=0; j<3; j++){
            printf("%3d", matrix_sum[i][j]);
            printf("| ");
        }
        printf("\n");
    }
    printf("----------------\n\n");

    printf("위의 두 행렬 차의 결과 값입니다.\n");
    printf("----------------\n");
    for(int i=0; i<4; i++){
        printf("| ");
        for(int j=0; j<3; j++){
            printf("%3d", matrix_sub[i][j]);
            printf("| ");
        }
        printf("\n");
    }
    printf("----------------\n");
}
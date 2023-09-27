#include <stdio.h>

int result[3][3];

void matrix_mul(int matrix1[3][3], int matrix2[3][3]){
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            result[i][j] = 0;
            for(int k=0; k<3; k++){
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
}

void matrix_plus(int matrix1[3][3], int matrix2[3][3]){
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
}

void matrix_minus(int matrix1[3][3], int matrix2[3][3]){
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            result[i][j] = matrix1[i][j] - matrix2[i][j];
        }
    }
}

int main(){
    int matrix1[3][3];
    int matrix2[3][3];

    printf("첫 번째 행렬 입력 : \n");
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("두 번째 행렬 입력 : \n");
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            scanf("%d", &matrix2[i][j]);
        }
    }

    printf("행렬의 합 : \n");
    matrix_plus(matrix1, matrix2);
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    printf("행렬의 차 : \n");
    matrix_minus(matrix1, matrix2);
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    printf("행렬의 곱 : \n");
    matrix_mul(matrix1, matrix2);
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }



    
}
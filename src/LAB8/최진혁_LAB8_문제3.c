#include <stdio.h>
#include <stdlib.h>

int matrix[5][5];

int cmp(const void *a, const void *b){
    return *(int *)a - *(int *)b;
}

int cmp_5(const void *a, const void *b){
    int sum_a=0, sum_b=0;
    for(int i=0; i<5; i++){
        sum_a+=*((int *)a+i);
        sum_b+=*((int *)b+i);
    }
    return sum_a-sum_b;
}

int main(){
    printf("이차원 배열 입력 :\n");
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("\n");
    
    for(int i=0; i<5; i++) qsort(matrix[i], 5, sizeof(int), cmp);

    int sum;


    qsort(matrix, 5, sizeof(int)*5, cmp_5);

    printf("결과 : \n");
    for(int i=0; i<5; i++){
        sum=0;
        for(int j=0; j<5; j++){
            printf("%d ", matrix[i][j]);
            sum+=matrix[i][j];
        }
        printf("(total %d)\n", sum);
    }
    

    
}
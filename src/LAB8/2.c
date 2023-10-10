#include <stdio.h>

int matrix[5][5];


int main(){
    printf("이차원 배열 입력 :\n");
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            scanf("%d", &matrix[i][j]);
        }
    }

    int bingo=0;
    int tmp;
    int ck;
    for(int i=0; i<5; i++){
        tmp=matrix[i][0];
        ck=1;
        for(int j=1; j<5; j++) if(matrix[i][j]!=tmp) ck=0;   
        if (ck) bingo++;

        tmp=matrix[0][i];
        ck=1;
        for(int j=1; j<5; j++) if(matrix[j][i]!=tmp) ck=0;
        if (ck) bingo++;
    }

    tmp=matrix[0][0];
    ck=1;
    for(int i=1; i<5; i++) if(matrix[i][i]!=tmp) ck=0;
    if (ck) bingo++;

    tmp=matrix[0][4];
    ck=1;
    for(int i=1; i<5; i++) if(matrix[i][4-i]!=tmp) ck=0;
    if (ck) bingo++;

    printf("Total %d Bingo\n", bingo);

    
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <malloc.h>

int main(){
    srand(time(NULL));

    int num[10];
    for(int i=0; i<10; i++){
        num[i] = rand()%25;
    }

    int oa[5]={0,};
    for(int i=0; i<10; i++){
        oa[num[i]/5]++;
    }

    int **arr = (int**)malloc(sizeof(int*)*5);
    int idx[5]={0,};
    for(int i=0; i<5; i++){
        if(oa[i] == 0){
            arr[i] = (int*)malloc(sizeof(int));
            arr[i][0] = -1;
        }
        else
            arr[i] = (int*)malloc(sizeof(int)*oa[i]);
    }

    for(int i=0; i<10; i++){
        arr[num[i]/5][idx[num[i]/5]++] = num[i];
    }

    int sum;
    for(int i=0; i<5; i++){
        sum = 0;
        printf("arr[%d] = ", i);
        for(int j=0; j<oa[i]; j++){
            sum += arr[i][j];
            printf("%d %s ", arr[i][j], (j==oa[i]-1)?"=":"+");
        }
        printf("%d\n", sum);
    }


    
}
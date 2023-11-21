#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int cmp(const void *a, const void *b){
    return *(int *)a-*(int *)b;
}

int is_prime(int num){
    if(num==1)
        return 0;
    for(int i=2;i<num;i++){
        if(num%i==0)
            return 0;
    }
    return 1;
}

void primenumber (int *arr, int size, int *sortarr, int *primearr, int *primecnt){
    srand(time(NULL));
    for(int i=0;i<size;i++){
        arr[i]=rand()%20+1;
    }
    memcpy(sortarr,arr,sizeof(int)*size);

    qsort(sortarr,size,sizeof(int),cmp);

    for(int i=0;i<size;i++){
        if(is_prime(sortarr[i])){
            primearr[i]=1;
            (*primecnt)++;
        }
        else
            primearr[i]=0;

    }
}

int main(){
    int arr[5], sortarr[5], primearr[5], primecnt=0;

    primenumber(arr,5,sortarr,primearr,&primecnt);

    printf("난수 5개(1~20) : ");
    for(int i=0;i<5;i++)
        printf("%d ",arr[i]);
    printf("\n");

    printf("오름차순 정렬 : ");
    for(int i=0;i<5;i++)
        printf("%d ",sortarr[i]);
    printf("\n");

    for(int i=0;i<5;i++){
        printf("%d = %s\n", sortarr[i], primearr[i]?"소수":"정수");
    }
    printf("\n");

    printf("소수는 ");
    for(int i=0;i<5;i++){
        if(primearr[i])
            printf("%d ",sortarr[i]);
    }
    if(primecnt==0)
        printf("없습니다.\n");
    else
        printf("로 총 %d개 입니다.\n",primecnt);
    
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct wallet {
    int n50000;
    int n10000;
    int n5000;
    int n1000;
    int n500;
    int n100;
} wallet;

int Calc(wallet w1, wallet w2){
    int sum1 = w1.n50000*50000 + w1.n10000*10000 + w1.n5000*5000 + w1.n1000*1000 + w1.n500*500 + w1.n100*100;
    int sum2 = w2.n50000*50000 + w2.n10000*10000 + w2.n5000*5000 + w2.n1000*1000 + w2.n500*500 + w2.n100*100;
    if(sum1 == sum2){
        return -1;
    }
    return sum1 > sum2 ? sum1 : sum2;
}

int main(){
    wallet w1, w2;
    printf("지갑1의 각 화폐의 수를 입력하세요.\n");
    scanf("%d %d %d %d %d %d", &w1.n50000, &w1.n10000, &w1.n5000, &w1.n1000, &w1.n500, &w1.n100);
    printf("\n");

    printf("지갑2의 각 화폐의 수를 입력하세요.\n");
    scanf("%d %d %d %d %d %d", &w2.n50000, &w2.n10000, &w2.n5000, &w2.n1000, &w2.n500, &w2.n100);
    printf("\n");


    int bigger=Calc(w1, w2);

    if(bigger == -1){
        printf("두 지갑의 금액이 같습니다.");
        return 0;
    }
    printf("둘 중 더 큰 금액은 %d원입니다.", bigger);
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void pick_lotto(int *arr){
    int i, j, tmp;
    srand(time(NULL));
    for (i = 0; i < 6; i++){
        arr[i] = rand() % 45 + 1;
        for (j = 0; j < i; j++){
            if (arr[i] == arr[j]){
                i--;
                break;
            }
        }
    }
}

int main(){
    int my_lotto[6], win_lotto[6];
    int correct = 0;

    printf("로또 번호를 입력하세요(1~45중 6개)->\n");
    for (int i = 0; i < 6; i++)
        scanf("%d", &my_lotto[i]);
    printf("\n");

    printf("로또를 추첨합니다.->\n");
    pick_lotto(win_lotto);
    for (int i = 0; i < 6; i++)
        printf("%d ", win_lotto[i]);
    printf("\n");

    for (int i = 0; i < 6; i++){
        for (int j = 0; j < 6; j++){
            if (my_lotto[i] == win_lotto[j]){
                correct++;
                break;
            }
        }
    }
    
    printf("\t\t%d개 맞았고, ", correct);
    if(correct>2)
        printf("%d등 입니다.\n", 7-correct);
    else
        printf("꽝입니다.\n");
        
}
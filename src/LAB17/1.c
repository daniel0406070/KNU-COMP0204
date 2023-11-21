#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

enum rcp { ROCK, SCISSORS, PAPER };
char *rcp_str[] = { "바위", "가위", "보" };

int main(){
    srand(time(NULL));
    int user, com;

    printf("가위(0), 바위(1), 보(2) 중 하나를 입력 ->");
    scanf("%d", &user);

    com = rand() % 3;

    printf("당신은 %s 선택, 컴퓨터는 %s 선택\n", rcp_str[user], rcp_str[com]);
    
    if (user == com)
        printf("비겼습니다.\n");
    else if (user == ROCK && com == SCISSORS)
        printf("당신이 이겼습니다.\n");
    else if (user == SCISSORS && com == PAPER)
        printf("당신이 이겼습니다.\n");
    else if (user == PAPER && com == ROCK)
        printf("당신이 이겼습니다.\n");
    else
        printf("당신이 졌습니다.\n");
}
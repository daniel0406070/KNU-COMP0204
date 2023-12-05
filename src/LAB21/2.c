#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <malloc.h>
#define MAX 10

int stack[MAX]={0,};
int top=-1;

int pop(){
    if(top == -1){
        return -1;
    }

    return stack[top--];
}

int push(int n){
    if(top == MAX-1){
        return 1;
    }

    if(n == 0){
        stack[++top] = 0;
        if(top == MAX-1){
            return 1;
        }
        stack[++top] = 0;
    }
    else{
        pop();
        pop();
        stack[++top] = 1;
    }

    return 0;
}






int main(){
    srand(time(NULL));

    while(1){
        int n;
        printf("*************************\n");
        printf("구슬 개수를 입력하세요 : ");
        scanf("%d", &n);

        int full;

        printf("생성된 구슬 : ");
        for(int i=0; i<n; i++){
            int tmp = rand()%2;
            full = 0;
            full = push(tmp);
            printf("%s ", (tmp==0)?"검":"흰");
            if (full == 1){
                break;
            }
            
        }

        printf("\n주머니에 구슬을 넣었습니다.\n\n");

        int black=0, white=0;

        while(top != -1){
            if(pop() == 0){
                black++;
            }
            else{
                white++;
            }
        }

        printf("\n결과\n");
        printf("하얀색 구슬 : %d개\n", white);
        printf("검은색 구슬 : %d개\n", black);
        
        printf("다시 하겠습니까? [y/n] : ");
        char c;
        scanf(" %c", &c);
        if(c == 'n'){
            printf("\n프로그램을 종료합니다.\n");
            break;
        }
        else{
            printf("\n");
        }

    }
    
}
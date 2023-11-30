#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <malloc.h>


typedef struct personscore {
int number;
char name[40];
int mid, final, quiz;
}pscore;


void appenscore(pscore *p, int cnt){
    printf("추가할 이름 과 성적<중간, 기말, 퀴즈>을 입력하세요.\n");
    printf("\n");
    scanf("%s %d %d %d",p[cnt].name,&p[cnt].mid,&p[cnt].final,&p[cnt].quiz);
    p[cnt].number=cnt+1;
    printf("\n");
}

void print(pscore *p, int cnt){
    printf("현재의 성적 내용은 >>\n");
    printf("---------------------------------\n");
    printf("번호 \t 이름 중간 기말 퀴즈\n");
    printf("---------------------------------\n");
    for(int i=0;i<cnt;i++){
        printf("%d \t %s %d %d %d\n",p[i].number,p[i].name,p[i].mid,p[i].final,p[i].quiz);
    }
    printf("---------------------------------\n");
}

int main(){
    pscore plist[20]={
        {1,"권다애",87,98,25},
        {2,"김근태",89,78,30},
        {3,"양보원",76,87,30},
        {4,"홍길동",94,75,21}
    };

    int cnt=4;

    print(plist,cnt);

    appenscore(plist,cnt++);

    print(plist,cnt);

    return 0;
}
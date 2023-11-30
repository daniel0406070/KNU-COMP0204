#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <malloc.h>


typedef struct personscore {
int number;
char name[40];
int mid, final, quiz;
}pscore;

void find(pscore *p, int cnt){
    printf("가장 큰 번호의 학생은 %d번 입니다.\n",cnt);
    printf("찾을 학생 번호를 입력하세요. >> ");
    int n;
    scanf("%d",&n);

    printf("찾은 학생 정보는 >>\n\n");
    printf("%d \t %s %d %d %d\n",p[n-1].number,p[n-1].name,p[n-1].mid,p[n-1].final,p[n-1].quiz);
}

void print(pscore *p, int cnt){
    printf("현재의 성적 내용은 >>\n");
    printf("---------------------------------\n");
    printf("번호 \t 이름 중간 기말 퀴즈\n");
    printf("---------------------------------\n");
    for(int i=0;i<cnt;i++){
        printf("%d \t %s %d %d %d\n",p[i].number,p[i].name,p[i].mid,p[i].final,p[i].quiz);
    }
    printf("---------------------------------\n\n");
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

    find(plist,cnt);

    return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

typedef struct person{
    char name[20];
    int age;
}person;

typedef struct professor{
    person p;
    char major[20];
}professor;

typedef struct student{
    person p;
    int id;
    char major[20];
    professor *pf;
}student;

int main(){
    student s[2]={0};
    professor p[2];

    for(int i = 0; i < 2; i++){
        printf("학생%d의 정보를 입력하시오.\n", i+1);
        printf("이름 : ");
        scanf("%s", s[i].p.name);
        printf("나이 : ");
        scanf("%d", &s[i].p.age);
        printf("학번 : ");
        scanf("%d", &s[i].id);
        printf("전공 : ");
        scanf("%s", s[i].major);
        printf("\n\n");
    }

    for(int i = 0; i < 2; i++){
        printf("교수%d의 정보를 입력하시오.\n", i+1);
        printf("이름 : ");
        scanf("%s", p[i].p.name);
        printf("나이 : ");
        scanf("%d", &p[i].p.age);
        printf("전공 : ");
        scanf("%s", p[i].major);
        printf("\n\n");
    }

    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            if(strcmp(s[i].major, p[j].major) == 0){
                s[i].pf = &p[j];
            }
        }
        if(s[i].pf == NULL){
            printf("입력 오류 : 지도 교수가 없는 학생은 존재하지 않습니다.\n");
            return 0;
        }
    }

    for(int i = 0; i < 2; i++){
        printf("%s / %d세 / %d / %s / 지도교수(%s)\n", s[i].p.name, s[i].p.age, s[i].id, s[i].major, s[i].pf->p.name);
    }

    
}
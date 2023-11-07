#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct student {
    char name[20];
    int score;
    char grade[3];
    int scholarship;
}student;

void update(student *a) {
    if (a->score >= 80) {
        a->grade[0] = 'A';
        a->scholarship = 10000000;
    }
    else if (a->score >= 60) {
        a->grade[0] = 'B';
        a->scholarship = 5000000;
    }
    else {
        a->grade[0] = 'C';
        a->scholarship = 0;
    }
}

int main() {
    student a = { 0, };
    printf("학생의 이름을 입력하세요 : ");
    scanf("%s", a.name);
    printf("학생이 받은 점수를 입력하세요 : ");
    scanf("%d", &a.score);

    update(&a);

    printf("%s 학생의 등급은 %s이며 %d원의 장학금을 받습니다.", a.name, a.grade, a.scholarship);


}
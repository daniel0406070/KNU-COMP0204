#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct student {
    char name[40];
    int id;
    float grade;
    char major[40];
    char job[40];
}student;

int main() {
    student s[10] = {
        {"김하나",1,4.3,"전자상거래","공무원"},
        {"김두울",2,4.2,"컴퓨터공학","군 인"},
        {"김세엣",3,4.1,"전자공학부","프로그래머"},
        {"김네엣",4,4.0,"전자공학부","웹마스터"},
        {"김다섯",5,3.9,"컴퓨터공학","프로그래머"},
        {"김여섯",6,3.8,"컴퓨터공학","프로그래머"},
        {"김일곱",1231231,3.7,"컴퓨터공학","웹마스터"},
        {"김여덟",124,3.6,"전자상거래","프로그래머"},
        {"김아홉",635,3.5,"전자상거래","프로그래머"},
        {"김여얼",9678,3.4,"전자상거래","DB관리자"}
    };

    printf("%3s %7s   %5s %10s %10s\n\n", "이름", "학번", "학점", "전공", "진로");
    for (int i = 0; i < 10; i++) {
        printf("%3s %07d %5.1f %10s %10s\n", s[i].name, s[i].id, s[i].grade, s[i].major, s[i].job);
    }



}
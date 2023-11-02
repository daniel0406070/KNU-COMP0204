#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct person {
    char name[40];
    char phone[40];
    char address[100];
}person;

typedef struct professor {
    person p;
    char major[40];
    char class[10][40];
}professor;


int main() {
    professor p[5] = {
        {{"김이일","010-0000-0001","서울시 구로구 고척동 1"},"전산과",{"객체지향","분석설계"}},
        {{"김이이","010-0000-0002","서울시 구로구 고척동 2"},"전산과",{"분석설계"}},
        {{"김이삼","010-0000-0003","서울시 구로구 고척동 3"},"전산과",{"객체지향","자료구조"}},
        {{"김이사","010-0000-0004","서울시 구로구 고척동 4"},"교양과",{"객체지향","이산수학"}},
        {{"김이오","010-0000-0005","서울시 구로구 고척동 5"},"교양과",{"이산수학","자료구조"}}
    };

    printf("%3s   %7s            %5s       %10s       %10s\n\n", "이 름", "전 화 번 호", "주 소", "학 과", "담 당  과 목");
    for (int i = 0; i < 5; i++) {
        printf("%3s %10s %10s %10s ", p[i].p.name, p[i].p.phone, p[i].p.address, p[i].major);
        for (int j = 0; p[i].class[j][0] != '\0'; j++) {
            printf("%10s ", p[i].class[j]);
        }
        printf("\n");
    }


}
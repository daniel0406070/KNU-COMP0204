#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>


typedef struct person{
    char name[40];
    char phone[40];
    char address[100];
}person;

int main(){
    person title;
    person p1;
    person p2;

    strcpy(title.name, "이 름");
    strcpy(title.phone, " 전 화 번 호   ");
    strcpy(title.address, "       주 소    ");

    strcpy(p1.name, "홍길동");
    strcpy(p1.phone, "010-1234-5678");
    strcpy(p1.address, "서울시 종로구 1번지");

    strcpy(p2.name, "김철수");
    strcpy(p2.phone, "010-1234-1234");
    strcpy(p2.address, "서울시 종로구 2번지");
    
    printf("\t%s\t%s\t\t%s\n", title.name, title.phone, title.address);
    printf("\n");
    printf("\t%s\t%s\t\t%s\n", p1.name, p1.phone, p1.address);
    printf("\t%s\t%s\t\t%s\n", p2.name, p2.phone, p2.address);

}
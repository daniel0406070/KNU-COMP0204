#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX 100

int size = 0;

struct food {
    char name[20];
    int price;
}food[MAX];

int find_index(struct food* f, char* name) {
    for (int i = 0; i < size; i++) {
        if (strcmp(f[i].name, name) == 0) return i;
    }
    return -1;
}

void insert(struct food* f) {
    if (size >= MAX) {
        printf("배열이 꽉 참\n");
        return;
    }
    printf("음식 이름을 입력하세요 : ");
    scanf("%s", f[size].name);

    printf("음식 가격을 입력하세요 : ");
    scanf("%d", &f[size].price);
    size++;
}

void print(struct food* f) {
    if (size == 0) {
        printf("음식이 없음\n");
        return;
    }
    printf("\t\t\t<<음식 정보 출력>>\n");
    for (int i = 0; i < size; i++) {
        printf("이름 : %s, 가격 : %d\n", f[i].name, f[i].price);
    }
}

void delete(struct food* f) {
    char name[20];
    printf("삭제할 음식 제목을 입력하세요 : ");
    scanf("%s", name);

    int index = find_index(f, name);
    if (index == -1) {
        printf("없는 음식입니다.\n");
        return;
    }
    for (int i = index; i < size - 1; i++) {
        f[i] = f[i + 1];
    }
    size--;
    printf("%s의 정보를 삭제 하였습니다.\n", name);
}

void update(struct food* f) {
    char name[20];
    printf("수정할 음식 제목을 입력하세요 : ");
    scanf("%s", name);

    int index = find_index(f, name);
    if (index == -1) {
        printf("없는 음식입니다.\n");
        return;
    }

    printf("수정할 음식 가격을 입력하세요 : ");
    scanf("%d", &f[index].price);
}

void file_save(struct food* f) {
    FILE* fp = fopen("food.txt", "wt");
    for (int i = 0; i < size; i++) {
        fprintf(fp, "%s %d\n", f[i].name, f[i].price);
    }
    fclose(fp);
    printf("저장 완료\n");
}

void file_load(struct food* f) {
    FILE* fp = fopen("food.txt", "rt");
    if (fp == NULL) {
        printf("파일이 없음\n");
        return;
    }
    size = 0;
    while (!feof(fp)) {
        fscanf(fp, "%s %d", f[size].name, &f[size].price);
        size++;
    }
    if (f[0].name[0] == '\0') size = 0;
    fclose(fp);
    printf("로드 완료\n");
}

void exitt(struct food* f) {
    print(f);
    exit(0);
}

void (*menu[7])(struct food*) = { insert,delete,update,print,file_load,file_save,exitt };

int main() {
    int op;


    while (1) {
        printf("<<1.추가 2.삭제 3.수정 4.목록 5.파일 로드 6.파일 저장 7.종료>>\n");
        printf("==>메뉴선택 : ");
        scanf("%d", &op);
        if (op < 1 || op>7) {
            printf("잘못된 입력\n");
            continue;
        }
        menu[op - 1](food);
    }



}
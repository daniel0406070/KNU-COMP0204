#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

FILE* fp1;
FILE* fp2;

typedef struct person {
    char name[20];
    char phone[20];
    char address[40];
}person;

void swap(person* p1, person* p2) {
    person temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

void print(person* p1, person* p2) {
    printf("\t\t 이름 \t\t 전화번호 \t\t 주소\n");
    printf("사람1 : \t %s \t %s \t %s\n", p1->name, p1->phone, p1->address);
    printf("사람2 : \t %s \t %s \t %s\n", p2->name, p2->phone, p2->address);
    printf("\n");

    swap(p1, p2);

    printf("\t\t 이름 \t\t 전화번호 \t\t 주소\n");
    printf("사람1 : \t %s \t %s \t %s\n", p1->name, p1->phone, p1->address);
    printf("사람2 : \t %s \t %s \t %s\n", p2->name, p2->phone, p2->address);
    printf("\n");

    fprintf(fp2, "%s %s %s\n", p1->name, p1->phone, p1->address);
    fprintf(fp2, "%s %s %s\n", p2->name, p2->phone, p2->address);


}

int main() {


    fp1 = fopen("input.txt", "r");
    fp2 = fopen("output.txt", "w");

    person p1, p2;

    fscanf(fp1, "%s %s", p1.name, p1.phone);
    fgets(p1.address, 40, fp1);
    for (int i = 39; i >= 0; i--) {
        if (p1.address[i] == '\n') {
            p1.address[i] = '\0';
            break;
        }
    }

    fscanf(fp1, "%s %s", p2.name, p2.phone);
    fgets(p2.address, 40, fp1);
    for (int i = 39; i >= 0; i--) {
        if (p1.address[i] == '\n') {
            p1.address[i] = '\0';
            break;
        }
    }

    print(&p1, &p2);


    fclose(fp1);
    fclose(fp2);


}
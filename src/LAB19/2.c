#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct person{
    char name[20];
    char tell[20];
    char address[80];
}person;

int cmp(const void *a, const void *b){
    person *p1 = (person *)a;
    person *p2 = (person *)b;

    return strcmp(p1->name,p2->name);
}

int main(){
    person p[3]={
        {"홍길동","011-1111-1111","서울시 구로구 고척동"},
        {"조명호","017-3245-3278","서울시 강남구 도곡동"},
        {"최윤호","011-2222-2456","경기도 안양시 비산동"}
    };

    qsort(p,3,sizeof(person),cmp);

    FILE *fp = fopen("data.bin","wb");
    fwrite(p,sizeof(person),3,fp);
    fclose(fp);

    fp = fopen("data.bin","rb");
    person p2[3];
    fread(p2,sizeof(person),3,fp);
    fclose(fp);

    for(int i=0;i<3;i++){
        printf("%s %s\n",p2[i].name,p2[i].tell);
    }
}
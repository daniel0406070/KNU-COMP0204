#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <malloc.h>

typedef struct person *pptr;
typedef struct person{
    char name[20];
    char phone[20];
}person;

int main(){
    pptr p=(pptr)malloc(sizeof(person));
    int cnt=0;
    char tmp[20];

    while(1){
        scanf("%s", tmp);
        if(strcmp(tmp, "exit")==0) break;
        cnt++;

        p=(pptr)realloc(p, sizeof(person)*cnt);
        strcpy(p[cnt-1].name, tmp);
        scanf("%s", p[cnt-1].phone);

        if(cnt==10) break;
    }

    FILE *fp = fopen("data.txt", "w");
    for(int i=0; i<cnt; i++){
        fprintf(fp, "%s %s\n", p[i].name, p[i].phone);
    }
    
}
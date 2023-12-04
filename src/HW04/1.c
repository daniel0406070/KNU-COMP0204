#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <malloc.h>

typedef struct student *sptr;
typedef struct student{
    int id;
    char name[20];
    int lang;
    int eng;
    int math;
}student;

int main(){
    FILE *fp1 = fopen("input.txt", "r");
    int n;
    fscanf(fp1, "%d", &n);

    sptr s=(sptr)malloc(sizeof(student)*n);
    for(int i=0; i<n; i++){
        fscanf(fp1, "%d %s %d %d %d", &s[i].id, s[i].name, &s[i].lang, &s[i].eng, &s[i].math);
    }

    fclose(fp1);

    FILE *fp2 = fopen("output.txt", "w");
    for(int i=0; i<n; i++){
        fprintf(fp2, "%d %3s %d %d %d\n", s[i].id, s[i].name, s[i].math, s[i].lang, s[i].eng);
    }

    fclose(fp2);

    
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

typedef struct student {
    int idx;
    char name[20];
    double score1;
    double score2;
}student;

typedef struct node* nptr;
typedef struct node {
    student data;
    nptr next;
}node;

nptr root = NULL;

void insert(nptr* root, student data) {
    nptr tmp = (nptr)malloc(sizeof(node));
    tmp->data = data;
    tmp->next = NULL;

    while (*root) {
        root = &(*root)->next;
    }
    *root = tmp;
}

void print_node(nptr root) {
    while (root) {
        printf("%2d %s %5.1lf %5.1lf %5.1lf\n", root->data.idx, root->data.name, root->data.score1, root->data.score2, root->data.score1 + root->data.score2);
        root = root->next;
    }
}

int main(int argc, char* argv[]) {

    FILE* fp = fopen(argv[1], "r");
    student tmp = { 0, };
    while (fscanf(fp, "%d %s %lf %lf", &tmp.idx, tmp.name, &tmp.score1, &tmp.score2) != EOF) {
        insert(&root, tmp);
    }
    fclose(fp);

    print_node(root);

}
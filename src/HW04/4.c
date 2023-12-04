#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <malloc.h>

typedef struct node *nptr;
typedef struct node{
    char arr[20];
    nptr next;
}node;

nptr head=NULL;

void insert(nptr new){

    if(head==NULL){
        head=new;
        return;
    }

    nptr cur=head;
    while(cur->next!=NULL){
        cur=cur->next;
    }
    cur->next=new;
}

void print(){
    nptr cur=head;
    while(cur!=NULL){
        printf("%s\n", cur->arr);
        cur=cur->next;
    }
}

int main(){
    FILE *fp = fopen("data.txt", "r");

    while(1){
        nptr new=(nptr)malloc(sizeof(node));
        fscanf(fp, "%s", new->arr);
        new->next=NULL;
        insert(new);
        if(strcmp(new->arr, "End")==0) break;
    }

    print();
}
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
    printf("%s", cur->arr);
    cur=cur->next;
    while(cur!=NULL){
        printf(" -> %s", cur->arr);
        cur=cur->next;
    }
}

int main(){
    printf("문자열 5라인을 입력하시오 : \n");
    int n=5;
    while(n--){
        nptr new=(nptr)malloc(sizeof(node));
        scanf("%s", new->arr);
        new->next=NULL;
        insert(new);
    }

    print();
}
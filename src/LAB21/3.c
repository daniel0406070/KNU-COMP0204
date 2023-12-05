#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <malloc.h>

int queue[5]={0,};
int cnt=0;

void AddQ(int n){
    if(cnt==5){
        printf("Error!\n");
        return;
    }

    queue[cnt++] = n;
}

int DeleteQ(){
    if(cnt==0){
        printf("Error!\n");
        return -1;
    }

    int tmp = queue[0];
    for(int i=0; i<cnt-1; i++){
        queue[i] = queue[i+1];
    }
    cnt--;
    
    printf("DeleteQ Data : %d\n", tmp);
}

void List(){
    if(cnt==0){
        printf("Error!\n");
        return;
    }

    printf("List : ");
    for(int i=0; i<cnt; i++){
        printf("%d ", queue[i]);
    }
    printf("\n");
}



int main(){
    int sel;

    printf("***********************************\n");
    printf("* 1. AddQ                         *\n");
    printf("* 2. DeleteQ                      *\n");
    printf("* 3. List                         *\n");
    printf("* 4. Exit                         *\n");
    printf("***********************************\n");

    while(1){
        
        printf("\nMenu : ");
        scanf("%d", &sel);

        switch(sel){
            case 1:
                printf("AddQ Data : ");
                int n;
                scanf("%d", &n);
                AddQ(n);
                break;
            case 2:
                DeleteQ();
                break;
            case 3:
                List();
                break;
            case 4:
                printf("Exit\n");
                return 0;
        }
    }

    

    

    
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

typedef struct person{
    char name[40];
    int age;
    char phone[40];
    char email[40];
}person;

int main(){
    person p[2]={0,};
    char tmp[40];
    for(int i=0;i<2;i++){
        printf("사람%d의 정보를 입력하시오.\n",i+1);

        printf("이름 : ");
        scanf("%s",p[i].name);

        printf("나이 : ");
        scanf("%d",&p[i].age);

        printf("폰번호 : ");
        scanf("%s",tmp);
        char* ptr=strtok(tmp,"-");
        while(ptr!=NULL){
            strcat(p[i].phone,ptr);
            ptr=strtok(NULL,"-");
        }

        printf("이메일 : ");
        scanf("%s",tmp);
        char* ptr2=strtok(tmp,"@");
        strcat(p[i].email,ptr2);

        printf("\n");
    }

    for(int i=0;i<2;i++){
        printf("사람%d : %s / %d / %s / %s\n",i+1,p[i].name,p[i].age,p[i].phone,p[i].email);
    }


    
}
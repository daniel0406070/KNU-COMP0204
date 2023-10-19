#include <stdio.h>

char std_name[5][15]={
    "학생A",
    "학생B",
    "학생C",
    "학생D",
    "학생E"
};

int std_id[5]={
    2023000001,
    2023000002,
    2023000003,
    2023000004,
    2023000005
};

int main(){
    printf("학생의 이름을 입력하세요 : ");
    char name[10];
    scanf("%s",name);

    for(int i=0;i<5;i++){
        if(strcmp(name,std_name[i])==0){
            printf("해당 학생의 학번은 %d입니다.\n",std_id[i]);
            return 0;
        }
    }

    printf("해당 학생은 목록에 없습니다.\n");


    
}
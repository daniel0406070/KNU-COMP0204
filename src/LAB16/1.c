#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct food {
    char foodName[20];
    int calories;
}food;

food gfoods[5]={
        {"사과", 95},
        {"바나나", 105},
        {"초콜렛", 210},
        {"피자", 320},
        {"뜨끈한국밥", 500}
    };

int gnFood=5;
int gcalories;

void PrintInfo() {
    food* foods=gfoods;
    int nFood=gnFood;
    int calories=gcalories;

    printf("%d 칼로리 이상 : ", calories);
    for(int i = 0; i < nFood; i++){
        if(foods[i].calories >= calories){
            printf("%s ", foods[i].foodName);
        }
    }
    printf("\n");

    printf("%d 칼로리 미만 : ", calories);
    for(int i = 0; i < nFood; i++){
        if(foods[i].calories < calories){
            printf("%s ", foods[i].foodName);
        }
    }
    printf("\n");

};

int main(){
    printf("칼로리를 입력하세요 : ");
    scanf("%d", &gcalories);
    PrintInfo();
    
}
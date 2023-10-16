#include <stdio.h>
#include <string.h>

char class[3][21]={0,};
int score[4][3]={{30,30,40},{78,93,88},{98,99,88},{69,78,85}};


int main(){
    strcat(class[0],"C 프로그래밍");
    strcat(class[1],"컴퓨터 개론");
    strcat(class[2],"객체지향 프로그래밍");

    printf("%6s","  ");
    for(int i=0; i<3; i++){
        printf("%s\t", class[i]);
    }
    printf("합\n");

    int sum;
    for(int i=0; i<4; i++){
        sum=0;
        printf("학생%d\t\t", i+1);
        for(int j=0; j<3; j++){
            printf("%d\t\t", score[i][j]);
            sum+=score[i][j];
        }
        printf("%d\n", sum);
    }

    
}
#include <stdio.h>

int main(){
    int n;
    char a[2]="";
    printf("점수 입력 : ");
    scanf("%d", &n);
    printf("입력한 점수 : %d,", n);
    if(n>=95) printf("학점 : %s", "A+");
    else if(n>=90) printf("학점 : %s", "A0");
    else if(n>=85) printf("학점 : %s", "B+");
    else if(n>=80) printf("학점 : %s", "B0");
    else if(n>=75) printf("학점 : %s", "C+");
    else if(n>=70) printf("학점 : %s", "C0");
    else if(n>=65) printf("학점 : %s", "D+");
    else if(n>=60) printf("학점 : %s", "D0");
    else printf("학점 : %s", "F");

    
}
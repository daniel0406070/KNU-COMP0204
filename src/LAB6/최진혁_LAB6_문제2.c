#include <stdio.h>

int main(){
    int year, month;
    printf("년도와 월을 입력하면 말일 날짜를 출력합니다.\n");
    printf("년 입력 : ");
    scanf("%d", &year);
    printf("월 입력 : ");
    scanf("%d", &month);
    printf("\n");
    printf("%d년 %d월의 말일은 ", year, month);

    if(month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12) printf("31일");
    else if(month==4 || month==6 || month==9 || month==11) printf("30일");
    else if(month==2){
        if(year%4==0 && year%100!=0 || year%400==0) printf("29일");
        else printf("28일");
    }
    else printf("없습니다.");

    
}
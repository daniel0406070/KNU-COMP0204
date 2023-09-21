#include <stdio.h>

int main(){
    int year, month, day;
    printf("날짜를 입력하시오(년 월 일) : ");
    scanf("%d %d %d", &year, &month, &day);

    long long int cnt=0;
    for (int i=1; i<year; i++){
        if(i%4==0 && i%100!=0 || i%400==0) cnt+=366;
        else cnt+=365;
    }
    
    for(int i=1; i<month; i++){
        if(i==1 || i==3 || i==5 || i==7 || i==8 || i==10 || i==12) cnt+=31;
        else if(i==4 || i==6 || i==9 || i==11) cnt+=30;
        else if(i==2){
            if(year%4==0 && year%100!=0 || year%400==0) cnt+=29;
            else cnt+=28;
        }
    }

    cnt+=day;

    printf("%d일", cnt);
    

    
}
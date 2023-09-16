#include <stdio.h>
#define year_to_day(x) ((x)*365)
#define day_to_hour(x) ((x)*24)
#define hour_to_minute(x) ((x)*60)
#define minute_to_second(x) ((x)*60)
#define year_to_second(x) (minute_to_second(hour_to_minute(day_to_hour(year_to_day(x)))))

int main(){
    printf("1년을 초로 환산하면 %d초입니다.\n", year_to_second(1));
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct time {
    int hour;
    int minute;
    int second;
}time;

time time_diff(time t1, time t2) {
    time t3;
    t3.hour = t2.hour - t1.hour;
    t3.minute = t2.minute - t1.minute;
    t3.second = t2.second - t1.second;

    if (t3.second < 0) {
        t3.second += 60;
        t3.minute--;
    }

    if (t3.minute < 0) {
        t3.minute += 60;
        t3.hour--;
    }

    if (t3.hour < 0) {
        t3.hour += 24;
    }

    return t3;
}

int main(int argc, char* argv[]) {
    FILE* fp1;
    FILE* fp2;

    fp1 = fopen("input.txt", "r");
    fp2 = fopen("output.txt", "w");

    time t1, t2;

    fscanf(fp1, "%d:%d:%d", &t1.hour, &t1.minute, &t1.second);
    fscanf(fp1, "%d:%d:%d", &t2.hour, &t2.minute, &t2.second);

    printf("input.txt 출력\n");
    printf("%d:%d:%d\n", t1.hour, t1.minute, t1.second);
    printf("%d:%d:%d\n", t2.hour, t2.minute, t2.second);
    printf("\n");

    time t3 = time_diff(t1, t2);

    fprintf(fp2, "경과시간은 %d:%d:%d 입니다.", t3.hour, t3.minute, t3.second);
    printf("경과시간은 %d:%d:%d 입니다.", t3.hour, t3.minute, t3.second);

    fclose(fp1);
    fclose(fp2);
}
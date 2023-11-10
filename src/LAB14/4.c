#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(char argc, char* argv[]) {
    FILE* fp;
    char* name = argv[1];

    if ((fp = fopen(name, "r")) == NULL) {
        printf("파일이 열리지 않습니다.\n");
        return 1;
    }

    char ch;
    int chara = 0;
    int line = 0;
    int word = 0;

    while ((ch = fgetc(fp)) != EOF) {
        if (ch == '\n') line++;
        if (ch == ' ') word++;
        else chara++;
    }

    if (chara != 0) {
        line++;
        word++;
    }

    
    printf("%30s\n","분석 결과");
    printf("----------------------------------------------\n");
    printf("%30s", "띄어쓰기를 포함x 글자 수 : ");
    printf("%5d\n", chara);
    printf("%30s", "단어 수 : ");
    printf("%5d\n", word);
    printf("%30s", "줄 수 : ");
    printf("%5d\n", line);

    fclose(fp);
}

//명령 인수에 input.txt 입력하면 실행됩니다ㅏㅏ
//to 하윤지


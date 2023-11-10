#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(char argc, char* argv[]) {
    FILE* fp;
    FILE* fp2;
    char* name = argv[1];
    char* name2 = argv[2];

    if ((fp = fopen(name, "r")) == NULL) {
        printf("파일이 열리지 않습니다.\n");
        return 1;
    }
    fp2 = fopen(name2, "w");

    char str[2000];
    while (fgets(str, 2000, fp) != NULL) {
        fputs(str, fp2);
    }

    fclose(fp);
    fclose(fp2);
}

//명령 인수에 input.txt output.txt 입력하면 실행됩니다ㅏㅏ
//to 하지


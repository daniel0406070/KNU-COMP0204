#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(char argc, char* argv[]) {
    FILE* fp;
    char* name = argv[1];

    if ((fp = fopen(name, "r")) == NULL) {
        printf("파일이 열리지 않습니다.\n");
        return 1;
    }
    
    printf("원래 파일 내용 출력\n\n");
    char str;
    char str2[20000];
    int i=0;
    str = fgetc(fp);
    while (str != EOF) {
        printf("%c", str);
        if(str>='a'&&str<='z') str-=32;
        else if(str>='A'&&str<='Z') str+=32;
        str2[i++]=str;
        str = fgetc(fp);
    }
    printf("\n\n");

    printf("대소문자 바꾼 파일 내용 출력\n\n");
    for(int j=0;j<i;j++){
        printf("%c",str2[j]);
    }

    fclose(fp);
}

//명령 인수에 input.txt 입력하면 실행됩니다ㅏㅏ
//to 튜터님


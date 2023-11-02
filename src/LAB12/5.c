#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int g_cnt = 0;
void g_print(char a) {
    g_cnt++;
    printf("구두점 %d : %c\n", g_cnt, a);
}


int main() {
    char* g = ".,;:?!";
    int g_len = strlen(g);
    char str[100][1000] = { 0, };
    printf("여러 줄에 원하는 문장을 입력하세요. 입력이 다 되었으면 \n새로운줄 처음에 ctrl+Z, 그리고 Enter를 입력하세요.\n\n");


    for (int i = 0; i < 100; i++) {
        if (fgets(str[i], 1000, stdin) == NULL) {
            break;
        }
    }
    printf("\n");


    for (int i = 0; str[i][0] != '\0'; i++) {
        int str_len = strlen(str[i]);
        printf("<< %d줄에 입력한 문자열에서 구두점 출력 >>\n", i + 1);
        for (int j = 0; j < str_len; j++) {
            for (int k = 0; k < g_len; k++) {
                if (str[i][j] == g[k]) {
                    g_print(str[i][j]);
                }
            }
        }

    }

    printf("구두점의 수는 모두 %d개 입니다.\n", g_cnt);


}
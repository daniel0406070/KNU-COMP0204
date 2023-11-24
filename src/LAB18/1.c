#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    FILE* fp1;
    FILE* fp2;

    fp1 = fopen("input.txt", "r");
    fp2 = fopen("output.txt", "w");

    int n;
    int a, b;

    fscanf(fp1, "%d", &n);
    for (int i = 0; i < n; i++) {
        fscanf(fp1, "%d %d", &a, &b);
        fprintf(fp2, "%d\n", a + b);
        printf("%d + %d = %d\n", a, b, a + b);
    }

    fclose(fp1);
    fclose(fp2);
}
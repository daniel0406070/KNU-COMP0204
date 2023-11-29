#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(int argc, char* argv[]){
    FILE *fp = fopen(argv[1], "w");

    for(int i=argc-1;i>1;i--){
        fprintf(fp,"%s\n",argv[i]);
    }

    fclose(fp);
}
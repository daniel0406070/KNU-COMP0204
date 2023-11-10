#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(){
    FILE *fp;
    char *name="tst.txt";
    if((fp=fopen(name,"r"))==NULL){
        printf("파일이 열리지 않습니다.\n");
        return 1;
    }

    FILE *fp2;
    char *name2="output.txt";
    if((fp2=fopen(name2,"w"))==NULL){
        printf("파일이 열리지 않습니다.\n");
        return 1;
    }

    char str[20];
    int idx;
    double a,b;
    for(int i=0;i<6;i++){
        fscanf(fp,"%d %s %lf %lf",&idx,str,&a,&b);
        fprintf(fp2,"%d %s %0.1lf %0.1lf %0.1lf\n",idx,str,a,b,a+b);
    }


    fclose(fp);
    fclose(fp2);
    
}

//tst.txt 있어야 실행 됩니다ㅏ
//to 튜터님
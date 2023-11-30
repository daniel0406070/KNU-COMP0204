#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <malloc.h>
#include <stdlib.h>

int main(){
    FILE* fp;
    fp=fopen("data.txt","r");

    int n;
    fscanf(fp,"%d",&n);
    fgetc(fp);

    char** str=(char**)malloc(sizeof(char*)*n);
    for(int i=0;i<n;i++){
        str[i]=(char*)malloc(sizeof(char)*1000);
        fgets(str[i],1000,fp);
    }

    int m;
    fscanf(fp,"%d",&m);
    
    fclose(fp);

    fp=fopen("data.txt","w");

    for(int i=0;i<n;i++){
        if(i==m-1) continue;
        fputs(str[i],fp);
    }

    fclose(fp);
    
}
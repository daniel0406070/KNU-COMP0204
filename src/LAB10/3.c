#include <stdio.h>
#include <string.h>

char *tok= " ,.?!";

int check(char a){
    int len=strlen(tok);
    for(int i=0;i<len;i++){
        if(a==tok[i]) return 1;
    }
    return 0;
}

int main(){
    char str[100];
    printf("입력 : ");
    gets(str);

    int s=0,e=0;
    int len=strlen(str);
    
    for(int i=0;i<len;i++){
        if(check(str[i])){
            e=i;
            for(int j=e-1;j>=s;j--){
                printf("%c",str[j]);
            }
            printf("%c",str[i]);
            s=e+1;
        }
        else if(i==len-1){
            e=i;
            for(int j=e;j>=s;j--){
                printf("%c",str[j]);
            }
        }
    }
}
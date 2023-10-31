#include <stdio.h>

int main(){
    printf("문자열을 입력하세요 : ");
    char str[100]={0,};
    fgets(str, sizeof(str), stdin);

    for(int i=0; str[i]!='\0'; i++){
        if (str[i]>='A'&&str[i]<='Z'){
            str[i]+=32;
        }
        else if (str[i]>='a'&&str[i]<='z'){
            str[i]-=32;
        }
    }

    printf("%s\n", str);

    
}
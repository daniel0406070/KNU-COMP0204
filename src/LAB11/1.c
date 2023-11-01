#include <stdio.h>

int main(){
    printf("문자열을 입력하세요 : ");
    char str[100]={0,};
    fgets(str, sizeof(str), stdin);

    int cnt=0;
    for(int i=0; str[i]!='\n'; i++){
        cnt++;
        if(str[i]<0) { //유니코드 검출
            i+=2;
        }
    }
    printf("문자열의 길이는 %d입니다.\n", cnt);

    
}

//Please Don't Go, My Girl.
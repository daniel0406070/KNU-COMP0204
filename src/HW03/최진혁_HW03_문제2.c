#include <stdio.h>

int main(){
    printf("이진수 입력 : ");
    char bin[33];
    scanf("%s", bin);
    
    printf("변환 결과 : ");
    for(int i=0; i<4; i++){
        int dec = 0;
        for(int j=0; j<8; j++){
            dec += (bin[i*8+j]-'0') << (7-j);
        }
        printf("%d", dec);
        if(i!=3) printf(".");
    }

    
}
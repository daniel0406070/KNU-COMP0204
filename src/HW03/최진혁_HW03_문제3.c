#include <stdio.h>

int main(){
    printf("입력 : ");
    char a[102];
    char b;
    scanf("%s", a);
    
    printf("출력 : ");

    int cnt = 1;
    int i = 1;
    b = a[0];

    while(1){
        if(a[i] == '\0') {
            printf("%d", cnt);
            break;
        }
        if(b==a[i]){
            cnt++;
        }
        else{
            printf("%d", cnt);
            cnt = 1;
        }

        b=a[i];
        i++;
    }
    
}
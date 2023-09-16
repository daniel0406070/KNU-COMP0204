#include<stdio.h>

int main()
{  
    char a;
    printf("임의의 문자 입력 : ");
    scanf("%c",&a);
    printf("변환 결과 : %c",(96<a&&a<123)?a-32:((64<a&&a<91)?a+32:'?'));

}
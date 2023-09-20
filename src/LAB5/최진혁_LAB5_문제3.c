#include <stdio.h>

int main(){
    int n,m;
    char a;
    printf("두 수를 다음과 같은 형태로 입력하세요.\n");
    printf("연산자는 8가지<+, -, *, /, %%, |, &, ^> 중의 하나여야 합니다.\n");
    printf("number1 연산자 number2\n");
    printf("\n");

    scanf("%d %c %d",&n,&a,&m);

    printf("\n>>>>>>>>>결과는\n");

    switch (a)
    {
    case '+':
        printf("%d + %d = %d",n,m,n+m);
        break;
    case '-':
        printf("%d - %d = %d",n,m,n-m);
        break;
    case '*':
        printf("%d * %d = %d",n,m,n*m);
        break;
    case '/':
        printf("%d / %d = %d",n,m,n/m);
        break;
    case '%':
        printf("%d %% %d = %d",n,m,n%m);
        break;
    case '|':
        printf("%d | %d = %d",n,m,n|m);
        break;
    case '&':
        printf("%d & %d = %d",n,m,n&m);
        break;
    case '^':
        printf("%d ^ %d = %d",n,m,n^m);
        break;
    default:
        printf("연산자를 잘못 입력하셨습니다.");
        break;
    }


    
}
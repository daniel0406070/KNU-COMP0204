#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));
    int num,tmp;

    printf("랜덤으로 숫자를 생성합니다.\n");
    num=rand()%1000+1;

    for(int i=0;i<8;i++){
        printf("%d. 예상해 주세요 : ",i+1);
        scanf("%d",&tmp);

        if(tmp==num){
            printf("정답입니다.\n");
            return 0;
        }
        else if(tmp>num)
            printf("DOWN\n");
        else
            printf("UP\n");
    }

    printf("8번의 기회를 모두 사용하셨지만 정답을 맞추지 못했습니다.\n");
    printf("정답은 %d입니다.\n",num);

    
}
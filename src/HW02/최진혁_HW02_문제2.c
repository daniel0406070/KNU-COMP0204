#include <stdio.h>

int main(){
    int num[10]={0,};
    int i,tmp[5];
    for (i=0;i<4;i++){
        scanf("%d %d %d %d %d",&tmp[0],&tmp[1],&tmp[2],&tmp[3],&tmp[4]);
        num[tmp[0]]++;
        num[tmp[1]]++;
        num[tmp[2]]++;
        num[tmp[3]]++;
        num[tmp[4]]++;
    }

    int max=0;
    int max_idx=0;

    for (i=0;i<10;i++){
        if (num[i]>max){
            max=num[i];
            max_idx=i;
        }
        else if (num[i]==max){
            max_idx=max_idx*10+i;
        }
    }
    printf("\n");
    printf("0 ~ 9 중 가장 많이 나온 수는 %d",max_idx%10);
    while(max_idx/10){
        max_idx/=10;
        printf(", %d",max_idx%10);
    }
    printf("이고, %d번 나왔습니다.\n",max);




    
}
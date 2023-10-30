#include <stdio.h>


int map[5][5];
int dir[8][2] = {{-1,0}, {1,0}, {0,-1}, {0,1}, {-1,-1}, {-1,1}, {1,-1}, {1,1}};

int check(int x, int y){
    if(x < 0 || x >= 5 || y < 0 || y >= 5) return 0;
    if(map[x][y] == 0) return 0;
    else return 1;
}

int main(){
    printf("입력 : \n");
    
    

    char tmp[7];
    for(int i = 0; i < 5; i++){
        scanf("%s", tmp);
        for(int j = 0; j < 5; j++){
            if(tmp[j] == 'x') map[i][j] = 1;
            else map[i][j] = 0;
        }
    }

    // for(int i = 0; i < 5; i++){
    //     for(int j = 0; j < 5; j++){
    //         printf("%d", map[i][j]);
    //     }
    //     printf("\n");
    // }

    printf("\n출력 : \n");

    int cnt;
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            if(map[i][j] == 1) printf("x");
            else{
                cnt = 0;
                for(int k = 0; k < 8; k++){
                    cnt+=check(i+dir[k][0], j+dir[k][1]);
                }
                if(cnt) printf("%d", cnt);
                else printf(" ");
            }
        }
        printf("\n");
    }



    
}
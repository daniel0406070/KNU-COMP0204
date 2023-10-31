#include <stdio.h>
#include <string.h>

int strist(char *src, char *ist, int index){
    int len=strlen(ist);
    int src_len=strlen(src);
    if(index>src_len) return 0;
    
    for(int i=src_len-1; i>index-1; i--){
        src[len+i]=src[i];
    }
    for(int i=0; ist[i]!='\0'; i++){
        src[index+i]=ist[i];
    }

    return 1;
}

int main(){
    printf("original string : ");
    char str[100]={0,};
    fgets(str, sizeof(str), stdin);

    printf("string to insert : ");
    char ist[100]={0,};
    fgets(ist, sizeof(ist), stdin);

    int check=strist(str, ist, 8);

    if(check){
        printf("result : %s\n", str);
    }
    else{
        printf("insertion failed.\n");
    }

    
}

//Java is oriented langudage!
//object 
//object 뒤에 뛰어쓰기 있음 
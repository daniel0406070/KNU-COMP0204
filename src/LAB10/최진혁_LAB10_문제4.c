#include <stdio.h>
#include <conio.h>

char change(char a){
    if(a>='a'&&a<='z'){
        return (a-'a'+3)%26+'a';
    }
    else if(a>='A'&&a<='Z'){
        return (a-'A'+3)%26+'A';
    }
    else if(a>='0'&&a<='9'){
        return (a-'0'+3)%10+'0';
    }
    else{
        return a;
    }
}


int main(){
    char a;
    while (1)
    {
        a=getche();
        if(a=='\n') break;
        printf("%c",change(a));
    }
    
    

}
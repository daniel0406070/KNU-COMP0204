#include <stdio.h>
#include <math.h>

const double PI = 3.14;

int main(){
    double i;
    int space;
    int dot;
    for(int j=0;j<=36;j++){
        i = PI/18*j;
        if (sin(i)>=0) {
            space = 20;
            dot=20*sin(i);
        }
        else {
            dot=-20*sin(i);
            space = 19-dot;
        }
        
        if(j==36) {
            space--;
        }   
        for(int j=0;j<space;j++) printf(" ");
        for(int j=0;j<dot;j++) printf("*");
        if (dot==0) printf("*");
        printf("\n");
    }

}   
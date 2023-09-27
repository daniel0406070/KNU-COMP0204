#include <stdio.h>

int factorial(int n){
    if (n==0) return 1;
    else if(n==1) return 1;
    else return n*factorial(n-1);
}

int main(){
    double e=0;
    int n=10;

    for(int i=0; i<n; i++){
        e+=1.0/factorial(i);
    }

    printf("%lf\n", e);

    
}
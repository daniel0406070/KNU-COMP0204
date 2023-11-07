#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct account {
    int accountNum;
    char name[30];
    int deposit;
    int loan;
}account;

int main(){
    int n;
    scanf("%d", &n);

    account a[10];
    for(int i=0; i<n; i++)
        scanf("%d %s %d %d", &a[i].accountNum, a[i].name, &a[i].deposit, &a[i].loan);


    int max = 0;
    int max_index = 0;

    for(int i=0; i<n; i++){
        if(max < a[i].loan){
            max = a[i].loan;
            max_index = i;
        }
    }
    printf("%d %s %d %d", a[max_index].accountNum, a[max_index].name, a[max_index].deposit, a[max_index].loan);

    
    
}
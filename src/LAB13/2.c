#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct person {
    char name[20];
    char tel[20];
    char address[80];
}person;

typedef union reg {
    person man;
    char company[20];
}reg;

typedef struct car {
    char year[10];
    char kind[20];
    reg owner;
}car;

int main() {
    car c[2] = {
        {
            "2019 05",
            "SUV",
            {
                "홍길동",
                "010-1234-5678",
                "서울시 강남구"
            }
        },
        {
            "2018 07",
            "세단",
            "경북자동차"
        }
    };

    printf("\t년  식\t\t종 류\t\t\t\t주인\n\n");
    for (int i = 0; i < 2; i++) {
        printf("\t%s\t\t%s\t", c[i].year, c[i].kind);
        if (c[i].owner.man.tel[0] == '\0') {
            printf("\t\t\t%s\n", c[i].owner.company);
        }
        else {
            printf("\t%s %s\t%s", c[i].owner.man.name, c[i].owner.man.tel, c[i].owner.man.address);
        }
        printf("\n");
    }

}
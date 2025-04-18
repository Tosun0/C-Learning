#include <stdio.h>
#include "Tosun.h"
#include "copyStr.cpp"

struct Tosun CreateTosun(char *name, int age, int type) {
    struct Tosun player0;

    copyStr(name, player0.name);
    player0.age = age;
    player0.type = type;

    return player0;
}

void PrintTosun(struct Tosun player0) {
    printf("Name : %s", player0.name);
    printf("Age : %d", player0.age);

    switch (player0.type)
    {
    case Normal:
        printf("Type : Normal");
        break;
    
    case Fire:
        printf("Type : Fire");
        break;

    case Elec:
        printf("Type : Electricity");
        break;
    
    default:
        printf("Type : Null");
        break;
    }
}
#include <stdio.h>
#include "copyStr.cpp"

enum { AR = 0, M4 = 0, M16 = 0, SPAS, M24 };

struct firearmPrimary {
    char name[20];
    int dps;
    int mag;
} primary;

// void copyStr(const char *src, char*dest);
void printArmStatus (struct firearmPrimary primary);

int main() {

    int armed = M4;

    switch(armed) {
        case AR:
            if(armed == M4) copyStr("M4A1", primary.name);
            else if(armed == M16) copyStr("M16A4", primary.name);
            primary.dps = 25;
            primary.mag = 30;
            break;

        case SPAS:
            copyStr("SPAS", primary.name);
            primary.dps = 32;
            primary.mag = 8;
            break;

        case M24:
            copyStr("M24", primary.name);
            primary.dps = 50;
            primary.mag = 7;
            break;
        
        default:
            copyStr("None", primary.name);
            primary.dps = 0;
            break;
    }

    printArmStatus(primary);

    getchar(); getchar();

    return 0;
}

// void copyStr(const char *src, char *dest) {
//     while(*src) {
//         *dest = *src;
//         src++;
//         dest++;
//     }

//     *dest = '\0';
// }

void printArmStatus(struct firearmPrimary primary) {
    printf("| Tosun\n|\n");
    printf("| %s\n", primary.name);
    printf("| %d\n", primary.mag);
}
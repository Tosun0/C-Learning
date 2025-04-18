#include <stdio.h>

char copyStr(const char *src, char*dest);
int printTosunStatus(struct tosun obj);
struct tosun {
    char name[20];
    int dp, hp;
} tokki;

int main() {
    tokki.dp = 10;
    tokki.hp = 100;
    copyStr("The Real Tosun", tokki.name);

    printTosunStatus(tokki);

    getchar(); getchar();

    return 0;
}

char copyStr(const char *src, char *dest) {
    while(*src) {
        *dest = *src;
        src++;
        dest++;
    }

    *dest = '\0';

    return 1;
}

int printTosunStatus(struct tosun obj) {
    printf("%s's Status\nHP : %d\nDP : %d\n", obj.name, obj.hp, obj.dp);

    return 0;
}
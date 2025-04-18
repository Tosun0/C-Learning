#include <stdio.h>

struct tosun {
    int hp, *ptrhp;
};

int main() {

    struct tosun tokki;
    struct tosun *ptokki = &tokki;
    int hp;
    tokki.ptrhp = &hp;
    *ptokki->ptrhp = 100;
    ptokki->hp = 120;

    printf("%d\n", hp);
    printf("%d\n", tokki.hp);

    getchar(); getchar();

    return 0;
}
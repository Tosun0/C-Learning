#include <stdio.h>

struct Tosun {
    int dps, hp, mana;
};

int main() {
    struct Tosun norm;
    struct Tosun *pnorm = &norm;

    pnorm->dps = 13;
    pnorm->hp = 100;
    pnorm->mana = 30;

    printf("Tosun Damage : %d\n", norm.dps);
    printf("Tosun Health : %d\n", norm.hp);
    printf("Tosun Mana : %d\n", norm.mana);

    getchar(); getchar();

    return 0;
}
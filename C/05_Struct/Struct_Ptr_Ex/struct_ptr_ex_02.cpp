#include <stdio.h>

struct tosun {
    int hp, dp;
};

void damage(struct tosun *ptokki);

int main() {

    struct tosun tokki;
    struct tosun *ptokki = &tokki;
    ptokki->hp = 100;
    
    damage(ptokki);

    printf("%d", tokki.hp);

    getchar(); getchar();
    return 0;
}

void damage(struct tosun *ptokki) {
    ptokki->hp -= 10;
}
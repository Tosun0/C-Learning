#include <stdio.h>

struct dp {
    int damage;
    int damageCo;
    int buffCo;
};

struct Tosun {
    struct dp tosundp;
};

int main() {
struct Tosun norm;
struct Tosun *pnorm = &norm;

pnorm->tosundp.damage = 10;

printf("%d", norm.tosundp.damage);

getchar(); getchar();

return 0;
}
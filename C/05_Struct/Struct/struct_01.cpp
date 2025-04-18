#include <stdio.h>

struct Tosun {
    int Damage;
    int Health;
    int Mana;
};

int main() {
    struct Tosun Electric;

    Electric.Damage = 25;
    Electric.Health = 100;
    Electric.Mana = 75;

    printf("%d\n", Electric.Damage);
    printf("%d\n", Electric.Health);
    printf("%d\n", Electric.Mana);

    getchar(); getchar();

    return 0;
}
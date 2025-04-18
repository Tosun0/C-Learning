#include <stdio.h>

struct damage {
    int dps;
    int dpsCo;
    int atkspd;
};

struct health {
    int hp;
    int shld;
    int shldCo;
};

struct character {
    struct damage totaldmg;
    struct health totalhp;
    char name[6];
};

int main() {

    struct character tosun;

    tosun.totaldmg.dps = 15;
    tosun.totalhp.hp = 100;

    printf("%d\n", tosun.totaldmg.dps);
    printf("%d\n", tosun.totalhp.hp);

    getchar(); getchar();

    return 0;
}
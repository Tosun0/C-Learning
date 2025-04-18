#include <stdio.h>


struct tosun function (int i);
struct tosun {
    int t;
};

int main() {

    struct tosun tokki;
    tokki = function(10);
    printf("tokki.i = %d\n", tokki.t);

    getchar(); getchar();       

    return 0;
}

struct tosun function(int i) {
    struct tosun tokkiB;
    tokkiB.t = i;

    return tokkiB;
}
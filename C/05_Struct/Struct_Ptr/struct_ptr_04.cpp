#include <stdio.h>

void addon(int *pt);

struct test {
    int c;
};

int main() {

    struct test t;
    struct test *pt = &t;

    pt->c = 2;
    printf("%d\n", t.c);

    addon(&pt->c);
    printf("%d\n", t.c);

    
    addon(&t.c);
    printf("%d\n", t.c);

    getchar(); getchar();

    return 0;
}

void addon(int *pt) {
    *pt += 3;
}
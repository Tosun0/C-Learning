#include <stdio.h>

struct test {
    int c;
    int *pointer;
};

int main() {
    struct test t;
    struct test *pt = &t;
    int i = 0;

    pt->pointer = &i;
    (*pt).pointer = &i;

    *t.pointer = 3;
    printf("%d\n", i);

    *((*pt).pointer) = 5;
    printf("%d\n", i);

    *pt->pointer = 4;
    printf("%d\n", i);

    getchar(); getchar();

    return 0;
}
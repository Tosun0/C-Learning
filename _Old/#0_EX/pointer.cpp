#include <stdio.h>

int main() {

    int a = 10;
    int b = 20;
    int temp;
    int *p;

    p = &a;
    printf("%d", *p);

    scanf("%d", a);
    return 0;
}
#include <stdio.h>

int main()
{
    int x = 100;
    printf("x is currently %d.\n", x);
    x += 50;
    printf("x is currently %d.\n", x);
    x -= 50;
    printf("x is currently %d.\n", x);
    x *= 50;
    printf("x is currently %d.\n", x);
    x /= 50;
    printf("x is currently %d.\n", x);
    x %= 3;
    printf("x is currently %d.\n", x);
    return 0;
}
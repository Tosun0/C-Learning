#include <stdio.h>

int main()
{
    int x = 0;
    printf("x is currently %d.\n", x);
    x++;
    printf("x is currently %d.\n", x);
    printf("x is currently %d.\n", x--);
    printf("x is currently %d.\n", x);
    printf("x is currently %d.\n", --x);
    return 0;
}
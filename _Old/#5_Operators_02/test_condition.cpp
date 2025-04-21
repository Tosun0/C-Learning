#include <stdio.h>

int main()
{
    int x = -50;
    int y = 30;
    int absoluteX = (x > 0) ? x : -x;
    int max = (x > y) ? x : y;
    int min = (x < y) ? x : y;
    printf("x's absolute value is %d.\n", absoluteX);
    printf("x & y's max value is %d.\n", max);
    printf("x & y's min value is %d.\n", min);
    return 0;
}